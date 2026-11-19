#include "recomp.h"
#include "rec_mod.h"

void f_770257(void) {
  LOAD_REGS();
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77053d(void) {
  LOAD_REGS();
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_770593(void) {
  LOAD_REGS();
L_770593: /* 770593: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770596: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77059b: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 77059e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77059f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7705a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7705a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7705a7(); return;
}

void f_7705a7(void) {
  LOAD_REGS();
L_7705a7: /* 7705a7: push 0xa076c8 */
  { uint32_t v = 0xa076c8u; esp -= 4; W32(esp, v); }
/* 7705ac: push 0xac4330 */
  { uint32_t v = 0xac4330u; esp -= 4; W32(esp, v); }
/* 7705b1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7705b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7705b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7705ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7705bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7705be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7705c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7705c3(); return;
}

void f_7705c3(void) {
  LOAD_REGS();
L_7705c3: /* 7705c3: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 7705c9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7705ce: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7705d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7705d2: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7705d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7705dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7705da(); return;
}

void f_7705da(void) {
  LOAD_REGS();
  goto L_7705da;
L_7700ab: /* 7700ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7700b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7700b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7700b4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7700bau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7700ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7700bd: mov byte ptr [esi + 0x50], 0 */
  W8((uint32_t)(esi + 0x50u), 0x0u);
/* 7700c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7700c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7700cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7700cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7700cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7700ce: mov esp, ebp */
  esp = ebp;
/* 7700d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7700d1: ret 4 */
  esp += 8; SPILL(); return;
L_7705da: /* 7705da: push 0xa076a0 */
  { uint32_t v = 0xa076a0u; esp -= 4; W32(esp, v); }
/* 7705df: push 0xac4338 */
  { uint32_t v = 0xac4338u; esp -= 4; W32(esp, v); }
/* 7705e4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7705eau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7705ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7705ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7705ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7705f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7705f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7705f6: push 0xac3f78 */
  { uint32_t v = 0xac3f78u; esp -= 4; W32(esp, v); }
/* 7705fb: jmp 0x7700ab */
  goto L_7700ab;
}

void f_770600(void) {
  LOAD_REGS();
L_770600: /* 770600: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 770603: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 770608: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 77060b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77060c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 77060f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x770614u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_770614(); return;
}

void f_770614(void) {
  LOAD_REGS();
L_770614: /* 770614: push 0xa0766c */
  { uint32_t v = 0xa0766cu; esp -= 4; W32(esp, v); }
/* 770619: push 0xac4378 */
  { uint32_t v = 0xac4378u; esp -= 4; W32(esp, v); }
/* 77061e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x770624u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 770624: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77062b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x770630u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_770630: guest_badaddr(0x770630); return;
}

void f_770810(void) {
  LOAD_REGS();
L_770810: /* 770810: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770814: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 770816: ret  */
  esp += 4; SPILL(); return;
}

void f_770830(void) {
  LOAD_REGS();
L_770830: /* 770830: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770834: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 770836: ret  */
  esp += 4; SPILL(); return;
}

void f_770850(void) {
  LOAD_REGS();
L_770850: /* 770850: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 770852: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 770854: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 770857: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 77085a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77085d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 770860: ret  */
  esp += 4; SPILL(); return;
}

void f_770880(void) {
  LOAD_REGS();
L_770880: /* 770880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 770882: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 770884: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 770886: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 770889: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 77088c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 77088f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 770892: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 770895: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 770898: ret  */
  esp += 4; SPILL(); return;
}

void f_7708b0(void) {
  LOAD_REGS();
L_7708b0: /* 7708b0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7708b3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7708b6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7708b9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7708bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7708be: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7708c0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7708c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7708c4: ret  */
  esp += 4; SPILL(); return;
}

void f_7708e0(void) {
  LOAD_REGS();
L_7708e0: /* 7708e0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7708e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7708e6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7708e9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7708ec: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7708ee: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7708f0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7708f3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7708f5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7708f8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7708fa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7708fc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7708ff: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 770901: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770904: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 770906: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770909: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77090b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 77090e: ret  */
  esp += 4; SPILL(); return;
}

void f_770920(void) {
  LOAD_REGS();
L_770920: /* 770920: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 770923: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 770925: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 770928: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77092a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77092c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77092e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 770930: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770932: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 770934: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 770936: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770938: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 77093a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77093c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77093e: ret  */
  esp += 4; SPILL(); return;
}

void f_770950(void) {
  LOAD_REGS();
L_770950: /* 770950: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770954: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770956: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 770958: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77095c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 77095f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770962: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770966: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770969: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 77096c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_770980(void) {
  LOAD_REGS();
L_770980: /* 770980: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770984: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770986: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 770988: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 77098a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77098e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770991: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 770994: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770997: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77099b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 77099e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7709a1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7709a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7709c0(void) {
  LOAD_REGS();
L_7709c0: /* 7709c0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7709c4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7709ca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7709cc: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 7709ce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7709d0: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 7709d2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7709d4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7709d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7709d8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7709db: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7709dd: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7709e0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7709e3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7709e6: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 7709e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_770a00(void) {
  LOAD_REGS();
L_770a00: /* 770a00: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 770a03: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 770a06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770a07: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 770a0a: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 770a0d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 770a0f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 770a13: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 770a16: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 770a1a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770a1d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 770a1f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 770a21: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 770a25: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770a27: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 770a29: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 770a2c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 770a2e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770a31: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 770a33: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770a36: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 770a38: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770a3a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 770a3c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 770a3f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 770a41: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 770a43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 770a45: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770a47: fst dword ptr [eax] */
  WF32((uint32_t)(eax), ST0);
/* 770a49: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 770a4b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770a4e: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 770a52: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770a55: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 770a57: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770a5a: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 770a5e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 770a61: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 770a63: mov edx, esi */
  edx = esi;
/* 770a65: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 770a67: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 770a6b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 770a6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 770a71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 770a73: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 770a75: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 770a77: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770a7b: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 770a7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770a81: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 770a85: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 770a89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770a8b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 770a8d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 770a91: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770a93: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770a97: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770a99: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 770a9b: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 770a9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770a9f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770aa3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770aa6: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 770aaa: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770aad: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 770ab1: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 770ab4: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 770ab8: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 770abb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 770abf: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 770ac2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 770ac4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 770ac7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770ac9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 770acb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770acd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770acf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770ad0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 770ad2: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 770ad6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 770ad8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 770ada: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 770adc: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 770ae0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 770ae2: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 770ae5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 770ae8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770aec: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 770af0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 770af4: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 770af7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 770afa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770afd: ret  */
  esp += 4; SPILL(); return;
}

void f_770b40(void) {
  LOAD_REGS();
L_770b40: /* 770b40: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 770b43: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 770b46: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 770b49: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770b4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b4e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 770b51: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770b54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b56: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 770b58: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770b5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b5c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 770b5e: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 770b61: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 770b64: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 770b67: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770b69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b6b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 770b6e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770b71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b73: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 770b76: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770b79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b7b: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 770b7e: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 770b81: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 770b84: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 770b87: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770b89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b8b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 770b8e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770b91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b93: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 770b96: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770b99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770b9b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 770b9e: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 770ba1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 770ba4: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 770ba7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770ba9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770bab: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 770bae: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 770bb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770bb3: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 770bb6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770bbb: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 770bbe: ret  */
  esp += 4; SPILL(); return;
}

void f_770be0(void) {
  LOAD_REGS();
L_770be0: /* 770be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770be1: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 770be4: mov esi, 4 */
  esi = 0x4u;
/* 770be9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_770bf0: /* 770bf0: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 770bf3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 770bf6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 770bf8: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 770bfb: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 770bfe: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 770c01: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 770c04: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 770c07: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 770c0a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 770c0b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c0d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 770c10: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 770c13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c15: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 770c18: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 770c1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c1c: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 770c1f: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 770c22: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 770c25: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 770c28: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 770c2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c2d: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 770c30: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 770c33: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c35: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 770c38: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 770c3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c3d: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 770c40: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 770c43: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 770c46: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 770c49: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 770c4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c4e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 770c51: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 770c54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c56: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 770c59: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 770c5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c5e: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 770c61: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 770c64: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 770c67: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 770c6a: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 770c6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c6f: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 770c72: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 770c75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c77: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 770c7a: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 770c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 770c7f: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 770c82: jne 0x770bf0 */
  if (!zf) goto L_770bf0;
L_770c88: /* 770c88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770c89: ret  */
  esp += 4; SPILL(); return;
}

void f_770cc0(void) {
  LOAD_REGS();
L_770cc0: /* 770cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 770cc1: mov ebp, esp */
  ebp = esp;
/* 770cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 770cc5: push 0x9cc260 */
  { uint32_t v = 0x9cc260u; esp -= 4; W32(esp, v); }
/* 770cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 770cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 770cd8: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 770cdb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 770cde: cmp byte ptr [eax], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770ce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 770ce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770ce4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 770ce7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 770cee: jne 0x770de6 */
  if (!zf) goto L_770de6;
L_770cf4: /* 770cf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770cf5: call 0x92d570 */
  esp -= 4; W32(esp, 0x770cfau); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 770cfa: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 770cfd: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 770d00: xor edi, edi */
  edi = 0;
L_770d02: /* 770d02: cmp edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 770d05: jge 0x770de6 */
  if ((sf == of)) goto L_770de6;
L_770d0b: /* 770d0b: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 770d0e: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 770d11: fld dword ptr [esi + 0xa07750] */
  { double v = F32((uint32_t)(esi + 0xa07750u)); FPUSH(v); }
/* 770d17: mov eax, dword ptr [esi + 0xa07758] */
  eax = R32((uint32_t)(esi + 0xa07758u));
/* 770d1d: fld dword ptr [esi + 0xa07754] */
  { double v = F32((uint32_t)(esi + 0xa07754u)); FPUSH(v); }
/* 770d23: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 770d26: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 770d28: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 770d2b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d2e: mov ecx, ebx */
  ecx = ebx;
/* 770d30: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 770d33: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 770d3a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 770d3d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d40: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 770d43: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 770d46: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d49: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 770d4c: call 0x770b40 */
  esp -= 4; W32(esp, 0x770d51u); SPILL(); f_770b40(); if (g_unwind) return; RELOAD();
/* 770d51: fld dword ptr [esi + 0xa0775c] */
  { double v = F32((uint32_t)(esi + 0xa0775cu)); FPUSH(v); }
/* 770d57: mov ecx, dword ptr [esi + 0xa07764] */
  ecx = R32((uint32_t)(esi + 0xa07764u));
/* 770d5d: fld dword ptr [esi + 0xa07760] */
  { double v = F32((uint32_t)(esi + 0xa07760u)); FPUSH(v); }
/* 770d63: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 770d66: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 770d68: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 770d6b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d6e: mov ecx, ebx */
  ecx = ebx;
/* 770d70: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 770d73: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 770d7a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 770d7d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d80: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 770d83: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 770d86: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770d89: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 770d8c: call 0x770b40 */
  esp -= 4; W32(esp, 0x770d91u); SPILL(); f_770b40(); if (g_unwind) return; RELOAD();
/* 770d91: mov edx, dword ptr [0xa07704] */
  edx = R32((uint32_t)(0xa07704u));
/* 770d97: mov eax, dword ptr [0xa07700] */
  eax = R32((uint32_t)(0xa07700u));
/* 770d9c: mov ecx, dword ptr [0xa076fc] */
  ecx = R32((uint32_t)(0xa076fcu));
/* 770da2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770da4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770da5: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 770da8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770da9: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 770dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770dad: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x770db0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770db0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 770db1: jmp 0x770d02 */
  goto L_770d02;
L_770de6: /* 770de6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770de9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770dea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770deb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770df2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770df3: mov esp, ebp */
  esp = ebp;
/* 770df5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770df6: ret  */
  esp += 4; SPILL(); return;
}

void f_770db6(void) {
  LOAD_REGS();
L_770db6: /* 770db6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 770db9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 770dbe: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 770dc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770dc2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 770dc5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x770dcau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_770dca(); return;
}

void f_770dca(void) {
  LOAD_REGS();
L_770dca: /* 770dca: push 0xa07db8 */
  { uint32_t v = 0xa07db8u; esp -= 4; W32(esp, v); }
/* 770dcf: push 0xac4690 */
  { uint32_t v = 0xac4690u; esp -= 4; W32(esp, v); }
/* 770dd4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x770ddau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 770dda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770ddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770de1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x770de6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 770de6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770de9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770dea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770deb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770df2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770df3: mov esp, ebp */
  esp = ebp;
/* 770df5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770df6: ret  */
  esp += 4; SPILL(); return;
}

void f_770e50(void) {
  LOAD_REGS();
L_770e50: /* 770e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 770e51: mov ebp, esp */
  ebp = esp;
/* 770e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 770e55: push 0x9cc270 */
  { uint32_t v = 0x9cc270u; esp -= 4; W32(esp, v); }
/* 770e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 770e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 770e68: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 770e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 770e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770e6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 770e70: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 770e72: xor ebx, ebx */
  ebx = 0;
/* 770e74: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770e76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770e77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 770e7a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 770e7d: jne 0x77129a */
  if (!zf) goto L_77129a;
L_770e83: /* 770e83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770e84: call 0x92d9d0 */
  esp -= 4; W32(esp, 0x770e89u); SPILL(); f_92d9d0(); if (g_unwind) return; RELOAD();
/* 770e89: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 770e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 770e8d: call 0x92da10 */
  esp -= 4; W32(esp, 0x770e92u); SPILL(); f_92da10(); if (g_unwind) return; RELOAD();
/* 770e92: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 770e98: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 770e9b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 770e9e: mov edi, edi */
  edi = edi;
L_770ea0: /* 770ea0: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 770ea3: jge 0x770f88 */
  if ((sf == of)) goto L_770f88;
L_770ea9: /* 770ea9: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 770eac: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 770eaf: fld dword ptr [edi + 0xa07758] */
  { double v = F32((uint32_t)(edi + 0xa07758u)); FPUSH(v); }
/* 770eb5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 770ebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 770ebd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770ec0: je 0x770f82 */
  if (zf) goto L_770f82;
L_770ec6: /* 770ec6: fld dword ptr [edi + 0xa07764] */
  { double v = F32((uint32_t)(edi + 0xa07764u)); FPUSH(v); }
/* 770ecc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 770ed2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 770ed4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770ed7: je 0x770f82 */
  if (zf) goto L_770f82;
L_770edd: /* 770edd: fld dword ptr [edi + 0xa07750] */
  { double v = F32((uint32_t)(edi + 0xa07750u)); FPUSH(v); }
/* 770ee3: mov eax, dword ptr [edi + 0xa07758] */
  eax = R32((uint32_t)(edi + 0xa07758u));
/* 770ee9: fld dword ptr [edi + 0xa07754] */
  { double v = F32((uint32_t)(edi + 0xa07754u)); FPUSH(v); }
/* 770eef: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 770ef2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 770ef4: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 770ef7: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770efa: mov ecx, esi */
  ecx = esi;
/* 770efc: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 770eff: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 770f06: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 770f09: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770f0c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 770f0f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 770f12: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770f15: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 770f18: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 770f1b: call 0x770b40 */
  esp -= 4; W32(esp, 0x770f20u); SPILL(); f_770b40(); if (g_unwind) return; RELOAD();
/* 770f20: fld dword ptr [edi + 0xa0775c] */
  { double v = F32((uint32_t)(edi + 0xa0775cu)); FPUSH(v); }
/* 770f26: mov ecx, dword ptr [edi + 0xa07764] */
  ecx = R32((uint32_t)(edi + 0xa07764u));
/* 770f2c: fld dword ptr [edi + 0xa07760] */
  { double v = F32((uint32_t)(edi + 0xa07760u)); FPUSH(v); }
/* 770f32: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 770f35: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 770f37: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770f3a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770f3d: mov ecx, esi */
  ecx = esi;
/* 770f3f: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 770f42: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 770f49: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 770f4c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770f4f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 770f52: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 770f55: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 770f58: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 770f5b: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 770f5e: call 0x770b40 */
  esp -= 4; W32(esp, 0x770f63u); SPILL(); f_770b40(); if (g_unwind) return; RELOAD();
/* 770f63: mov edx, dword ptr [0xa07704] */
  edx = R32((uint32_t)(0xa07704u));
/* 770f69: mov eax, dword ptr [0xa07700] */
  eax = R32((uint32_t)(0xa07700u));
/* 770f6e: mov ecx, dword ptr [0xa076fc] */
  ecx = R32((uint32_t)(0xa076fcu));
/* 770f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770f75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770f76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770f77: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 770f7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770f7b: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 770f7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770f7f: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x770f82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_770f82: /* 770f82: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 770f83: jmp 0x770ea0 */
  goto L_770ea0;
L_770f88: /* 770f88: mov edi, 0x10 */
  edi = 0x10u;
/* 770f8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_770f90: /* 770f90: cmp edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 770f93: jge 0x7710cb */
  if ((sf == of)) goto L_7710cb;
L_770f99: /* 770f99: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 770f9c: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 770f9f: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 770fa2: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 770fa5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 770fa8: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 770fab: fmul dword ptr [eax + 0xa07ab0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab0u)));
/* 770fb1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770fb4: mov edx, ecx */
  edx = ecx;
/* 770fb6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770fb9: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 770fbc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 770fbe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 770fc0: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 770fc3: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 770fc6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 770fc9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 770fcb: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 770fcd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770fcf: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 770fd2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 770fd5: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 770fd8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 770fdb: fmul dword ptr [eax + 0xa07ab4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab4u)));
/* 770fe1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 770fe3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 770fe6: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 770fe9: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 770fec: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 770fee: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 770ff1: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 770ff3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 770ff6: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 770ff9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 770ffb: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 770ffd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 770fff: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771002: fmul dword ptr [eax + 0xa07ab8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab8u)));
/* 771008: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77100a: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 77100d: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 771010: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 771013: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771015: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 771018: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 77101b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 77101e: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 771021: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771023: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 771026: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771028: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 77102b: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 77102e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771031: fmul dword ptr [eax + 0xa07abc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07abcu)));
/* 771037: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 77103a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 77103c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 77103e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 771041: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 771044: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 771047: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771049: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77104b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77104d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 771050: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771053: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 771056: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771059: fmul dword ptr [eax + 0xa07ac0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ac0u)));
/* 77105f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771061: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771064: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 771067: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 77106a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77106c: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 77106f: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 771071: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 771074: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 771077: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771079: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77107b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77107d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771080: fmul dword ptr [eax + 0xa07ac4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ac4u)));
/* 771086: mov eax, dword ptr [0xa07704] */
  eax = R32((uint32_t)(0xa07704u));
/* 77108b: mov ecx, dword ptr [0xa07700] */
  ecx = R32((uint32_t)(0xa07700u));
/* 771091: mov edx, dword ptr [0xa076fc] */
  edx = R32((uint32_t)(0xa076fcu));
/* 771097: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77109a: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 77109d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77109e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77109f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7710a2: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7710a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7710a6: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7710a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7710aa: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7710ad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7710af: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 7710b2: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7710b5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7710b8: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7710bb: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7710bd: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7710c0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7710c2: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x7710c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7710c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7710c6: jmp 0x770f90 */
  goto L_770f90;
L_7710cb: /* 7710cb: xor edi, edi */
  edi = 0;
/* 7710cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7710d0: /* 7710d0: cmp edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7710d3: jge 0x77129a */
  if ((sf == of)) goto L_77129a;
L_7710d9: /* 7710d9: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7710dc: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7710df: fld dword ptr [ecx + 0xa07758] */
  { double v = F32((uint32_t)(ecx + 0xa07758u)); FPUSH(v); }
/* 7710e5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7710eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7710ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7710f0: jnp 0x771264 */
  if (!pf) goto L_771264;
L_7710f6: /* 7710f6: fld dword ptr [ecx + 0xa07764] */
  { double v = F32((uint32_t)(ecx + 0xa07764u)); FPUSH(v); }
/* 7710fc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 771102: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 771104: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 771107: jnp 0x771264 */
  if (!pf) goto L_771264;
L_77110d: /* 77110d: fld dword ptr [ecx + 0xa07750] */
  { double v = F32((uint32_t)(ecx + 0xa07750u)); FPUSH(v); }
/* 771113: mov edx, dword ptr [ecx + 0xa07758] */
  edx = R32((uint32_t)(ecx + 0xa07758u));
/* 771119: fld dword ptr [ecx + 0xa07754] */
  { double v = F32((uint32_t)(ecx + 0xa07754u)); FPUSH(v); }
/* 77111f: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 771122: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 771124: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 771127: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77112a: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 77112d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 771130: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 771133: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 771136: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 771139: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 77113c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77113f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 771142: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 771145: mov eax, dword ptr [ecx + 0xa07764] */
  eax = R32((uint32_t)(ecx + 0xa07764u));
/* 77114b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77114e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 771151: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 771154: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 771157: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 771159: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 77115c: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 77115f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 771161: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771163: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 771165: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 771168: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77116a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 77116d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 771170: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 771172: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 771175: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 771178: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 77117b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77117d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77117f: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 771182: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771184: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 771187: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 77118a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77118c: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 77118f: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 771192: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771195: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771197: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 771199: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 77119c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77119e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7711a1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7711a4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7711a6: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 7711a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7711ab: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 7711ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7711b0: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7711b3: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7711b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7711b8: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7711bb: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7711be: fld dword ptr [ecx + 0xa0775c] */
  { double v = F32((uint32_t)(ecx + 0xa0775cu)); FPUSH(v); }
/* 7711c4: fld dword ptr [ecx + 0xa07760] */
  { double v = F32((uint32_t)(ecx + 0xa07760u)); FPUSH(v); }
/* 7711ca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7711cc: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7711cf: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7711d2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7711d5: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 7711d8: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7711db: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7711de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7711e0: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7711e3: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7711e6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7711e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7711ea: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7711ec: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 7711ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7711f1: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7711f4: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7711f7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7711f9: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7711fc: mov ecx, dword ptr [0xa07704] */
  ecx = R32((uint32_t)(0xa07704u));
/* 771202: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 771205: mov edx, dword ptr [0xa07700] */
  edx = R32((uint32_t)(0xa07700u));
/* 77120b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 77120e: mov eax, dword ptr [0xa076fc] */
  eax = R32((uint32_t)(0xa076fcu));
/* 771213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771214: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771215: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771218: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 77121b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77121c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77121e: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 771221: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 771224: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771225: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771227: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77122a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 77122d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77122f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 771232: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 771235: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771238: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77123a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77123c: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 77123f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771241: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 771244: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 771247: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 771249: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 77124c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77124e: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 771251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771253: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 771256: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 771259: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77125b: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77125e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 771261: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x771264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_771264: /* 771264: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 771265: jmp 0x7710d0 */
  goto L_7710d0;
L_77129a: /* 77129a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77129d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77129e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77129f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7712a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7712a7: mov esp, ebp */
  esp = ebp;
/* 7712a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7712aa: ret  */
  esp += 4; SPILL(); return;
}

void f_77126a(void) {
  LOAD_REGS();
L_77126a: /* 77126a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77126d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 771272: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 771275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771276: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 771279: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77127eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77127e(); return;
}

void f_77127e(void) {
  LOAD_REGS();
L_77127e: /* 77127e: push 0xa07dd4 */
  { uint32_t v = 0xa07dd4u; esp -= 4; W32(esp, v); }
/* 771283: push 0xac4698 */
  { uint32_t v = 0xac4698u; esp -= 4; W32(esp, v); }
/* 771288: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77128eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77128e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771295: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77129au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 77129a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77129d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77129e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77129f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7712a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7712a7: mov esp, ebp */
  esp = ebp;
/* 7712a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7712aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7713d0(void) {
  LOAD_REGS();
L_7713d0: /* 7713d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7713d1: mov ebp, esp */
  ebp = esp;
/* 7713d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7713d5: push 0x9cc280 */
  { uint32_t v = 0x9cc280u; esp -= 4; W32(esp, v); }
/* 7713da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7713e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7713e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7713e8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7713eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7713ee: cmp byte ptr [eax], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7713f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7713f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7713f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7713f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7713f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7713fe: jne 0x7715ac */
  if (!zf) goto L_7715ac;
L_771404: /* 771404: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 771407: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771408: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 77140b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77140c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 77140f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771411: call 0x92de40 */
  esp -= 4; W32(esp, 0x771416u); SPILL(); f_92de40(); if (g_unwind) return; RELOAD();
/* 771416: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 771419: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 77141f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 771422: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 771425: xor edi, edi */
  edi = 0;
/* 771427: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77142a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 77142d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 771433: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 771436: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 771439: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 77143f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_771442: /* 771442: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 771445: jge 0x7715ac */
  if ((sf == of)) goto L_7715ac;
L_77144b: /* 77144b: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 77144e: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 771451: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 771454: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 771457: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77145a: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 77145d: fmul dword ptr [eax + 0xa07990] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07990u)));
/* 771463: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 771466: mov ecx, edx */
  ecx = edx;
/* 771468: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 77146b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 77146e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 771470: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 771472: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 771475: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771478: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 77147b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77147d: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77147f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771481: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771484: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771487: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77148a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 77148d: fmul dword ptr [eax + 0xa07994] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07994u)));
/* 771493: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771495: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771498: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 77149b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 77149e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7714a0: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7714a3: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 7714a5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7714a8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 7714ab: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7714ad: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7714af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7714b1: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7714b4: fmul dword ptr [eax + 0xa07998] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07998u)));
/* 7714ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7714bc: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 7714bf: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7714c2: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7714c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7714c7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 7714ca: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7714cd: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7714d0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7714d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7714d5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7714d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7714da: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 7714dd: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 7714e0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7714e3: fmul dword ptr [eax + 0xa0799c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0799cu)));
/* 7714e9: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7714ec: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7714ee: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7714f0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7714f3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7714f6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7714f9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7714fb: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7714fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7714ff: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771502: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771505: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771508: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 77150b: fmul dword ptr [eax + 0xa079a0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa079a0u)));
/* 771511: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771513: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771516: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 771519: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77151c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77151e: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 771521: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 771523: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 771526: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 771529: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77152b: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77152d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77152f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 771532: fmul dword ptr [eax + 0xa079a4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa079a4u)));
/* 771538: mov edx, dword ptr [0xa07704] */
  edx = R32((uint32_t)(0xa07704u));
/* 77153e: mov eax, dword ptr [0xa07700] */
  eax = R32((uint32_t)(0xa07700u));
/* 771543: mov ecx, dword ptr [0xa076fc] */
  ecx = R32((uint32_t)(0xa076fcu));
/* 771549: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77154b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77154c: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 77154f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771550: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771551: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 771554: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 771557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771558: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 77155b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77155c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77155f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771561: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 771564: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 771567: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77156a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 77156d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77156f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 771572: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771574: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x771576u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 771576: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 771577: jmp 0x771442 */
  goto L_771442;
L_7715ac: /* 7715ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7715af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7715b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7715b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7715b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7715b9: mov esp, ebp */
  esp = ebp;
/* 7715bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7715bc: ret  */
  esp += 4; SPILL(); return;
}

void f_77157c(void) {
  LOAD_REGS();
L_77157c: /* 77157c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77157f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 771584: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 771587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77158b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771590u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_771590(); return;
}

void f_771590(void) {
  LOAD_REGS();
L_771590: /* 771590: push 0xa07df0 */
  { uint32_t v = 0xa07df0u; esp -= 4; W32(esp, v); }
/* 771595: push 0xac46a0 */
  { uint32_t v = 0xac46a0u; esp -= 4; W32(esp, v); }
/* 77159a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7715a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7715a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7715a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7715a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7715a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7715acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7715ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7715af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7715b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7715b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7715b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7715b9: mov esp, ebp */
  esp = ebp;
/* 7715bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7715bc: ret  */
  esp += 4; SPILL(); return;
}

void f_771640(void) {
  LOAD_REGS();
L_771640: /* 771640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 771641: mov ebp, esp */
  ebp = esp;
/* 771643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 771645: push 0x9cc290 */
  { uint32_t v = 0x9cc290u; esp -= 4; W32(esp, v); }
/* 77164a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 771650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 771658: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77165b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77165c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77165d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 771660: cmp byte ptr [esi], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 771663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771664: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 771667: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77166e: jne 0x7717ff */
  if (!zf) goto L_7717ff;
L_771674: /* 771674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771675: call 0x92e610 */
  esp -= 4; W32(esp, 0x77167au); SPILL(); f_92e610(); if (g_unwind) return; RELOAD();
/* 77167a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 771680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771681: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 771684: call 0x92e600 */
  esp -= 4; W32(esp, 0x771689u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 771689: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 77168c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 77168f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 771692: xor edi, edi */
  edi = 0;
L_771694: /* 771694: cmp edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 771697: jge 0x7717ff */
  if ((sf == of)) goto L_7717ff;
L_77169d: /* 77169d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 7716a0: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 7716a3: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 7716a6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7716a9: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7716ac: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7716af: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7716b2: fmul dword ptr [eax + 0xa07ab0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab0u)));
/* 7716b8: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7716bb: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7716be: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7716c1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7716c3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7716c5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7716c8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7716cb: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7716ce: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7716d0: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7716d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7716d4: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7716d7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7716da: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7716dd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7716e0: fmul dword ptr [eax + 0xa07ab4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab4u)));
/* 7716e6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7716e8: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7716eb: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7716ee: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7716f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7716f3: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7716f6: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 7716f8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7716fb: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 7716fe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771700: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 771702: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771704: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 771707: fmul dword ptr [eax + 0xa07ab8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ab8u)));
/* 77170d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77170f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 771712: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 771715: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 771718: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77171a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 77171d: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 771720: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 771723: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 771726: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771728: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77172b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77172d: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 771730: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 771733: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 771736: fmul dword ptr [eax + 0xa07abc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07abcu)));
/* 77173c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 77173f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 771741: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 771743: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 771746: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771749: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 77174c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77174e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 771750: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771752: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771755: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 771758: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77175b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 77175e: fmul dword ptr [eax + 0xa07ac0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ac0u)));
/* 771764: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771766: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771769: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77176c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77176f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771771: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 771774: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 771776: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 771779: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 77177c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77177e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 771780: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771782: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 771785: fmul dword ptr [eax + 0xa07ac4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa07ac4u)));
/* 77178b: mov edx, dword ptr [0xa07704] */
  edx = R32((uint32_t)(0xa07704u));
/* 771791: mov eax, dword ptr [0xa07700] */
  eax = R32((uint32_t)(0xa07700u));
/* 771796: mov ecx, dword ptr [0xa076fc] */
  ecx = R32((uint32_t)(0xa076fcu));
/* 77179c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77179e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77179f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 7717a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7717a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7717a4: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7717a7: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7717aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7717ab: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7717ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7717af: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7717b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7717b4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 7717b7: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7717ba: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7717bd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7717c0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7717c2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7717c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7717c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7717c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7717c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7717ca: jmp 0x771694 */
  goto L_771694;
L_7717ff: /* 7717ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77180b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77180c: mov esp, ebp */
  esp = ebp;
/* 77180e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77180f: ret  */
  esp += 4; SPILL(); return;
}

void f_7717cf(void) {
  LOAD_REGS();
L_7717cf: /* 7717cf: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7717d2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7717d7: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7717da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7717db: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7717de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7717e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7717e3(); return;
}

void f_7717e3(void) {
  LOAD_REGS();
L_7717e3: /* 7717e3: push 0xa07e08 */
  { uint32_t v = 0xa07e08u; esp -= 4; W32(esp, v); }
/* 7717e8: push 0xac46a8 */
  { uint32_t v = 0xac46a8u; esp -= 4; W32(esp, v); }
/* 7717ed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7717f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7717f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7717f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7717f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7717fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7717ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7717ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77180b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77180c: mov esp, ebp */
  esp = ebp;
/* 77180e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77180f: ret  */
  esp += 4; SPILL(); return;
}

void f_771890(void) {
  LOAD_REGS();
L_771890: /* 771890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 771891: mov ebp, esp */
  ebp = esp;
/* 771893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 771895: push 0x9cc2a0 */
  { uint32_t v = 0x9cc2a0u; esp -= 4; W32(esp, v); }
/* 77189a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7718a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7718a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7718a8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7718ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7718af: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 7718b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7718b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7718b3: xor edi, edi */
  edi = 0;
/* 7718b5: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7718b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7718ba: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7718bd: jne 0x771a9d */
  if (!zf) goto L_771a9d;
L_7718c3: /* 7718c3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_7718c6: /* 7718c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718c7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7718ca: call 0x9458c0 */
  esp -= 4; W32(esp, 0x7718cfu); SPILL(); f_9458c0(); if (g_unwind) return; RELOAD();
/* 7718cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7718d1: jge 0x771a9d */
  if ((sf == of)) goto L_771a9d;
L_7718d7: /* 7718d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7718d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718d9: call 0x9457f0 */
  esp -= 4; W32(esp, 0x7718deu); SPILL(); f_9457f0(); if (g_unwind) return; RELOAD();
/* 7718de: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7718e1: xor eax, eax */
  eax = 0;
/* 7718e3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7718e6: /* 7718e6: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7718e9: jge 0x771a97 */
  if ((sf == of)) goto L_771a97;
L_7718ef: /* 7718ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7718f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7718f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718f2: call 0x945860 */
  esp -= 4; W32(esp, 0x7718f7u); SPILL(); f_945860(); if (g_unwind) return; RELOAD();
/* 7718f7: mov edi, eax */
  edi = eax;
/* 7718f9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7718fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7718fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 771900: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 771901: idiv dword ptr [ebp - 0x1c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); if (!d) d = (int32_t)guest_divzero(0x771901);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 771904: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771909: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77190a: call 0x945860 */
  esp -= 4; W32(esp, 0x77190fu); SPILL(); f_945860(); if (g_unwind) return; RELOAD();
/* 77190f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 771911: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 771914: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 771916: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 771919: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77191c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77191f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 771921: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 771923: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 771926: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 771929: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77192b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 77192e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 771931: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 771934: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 771937: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771939: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 77193c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77193e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 771941: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771944: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 771947: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 77194a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 77194d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77194f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 771952: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 771955: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 771958: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77195a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 77195d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77195f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 771962: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771964: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 771966: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 771969: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77196b: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77196e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 771971: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771973: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 771976: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 771978: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 77197b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77197d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77197f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 771982: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771984: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771987: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 77198a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 77198c: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 77198f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 771991: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 771994: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 771996: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 771999: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77199b: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77199e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7719a1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719a4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7719a6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719a9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 7719ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719ae: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719b1: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7719b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719b6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7719b9: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7719bc: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719bf: movzx ecx, byte ptr [ebp + 0xa] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xau)));
/* 7719c3: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 7719c6: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 7719c9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719cc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7719cf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7719d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7719d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719d7: movzx eax, bh */
  eax = (uint32_t)(((ebx >> 8) & 0xffu));
/* 7719da: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719dd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7719e0: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7719e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719e5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7719e8: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7719eb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719ee: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7719f1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719f4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 7719f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719f9: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719fc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7719ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a01: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771a04: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 771a07: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 771a0a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 771a0d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 771a10: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 771a13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a15: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 771a18: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 771a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a1d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 771a20: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 771a23: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 771a29: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 771a2c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a32: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 771a36: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a39: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 771a3c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a42: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 771a46: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a49: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a4f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 771a52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771a54: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x771a57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 771a57: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 771a5a: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771a5d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 771a60: mov eax, ecx */
  eax = ecx;
/* 771a62: jmp 0x7718e6 */
  goto L_7718e6;
L_771a97: /* 771a97: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 771a98: jmp 0x7718c6 */
  goto L_7718c6;
L_771a9d: /* 771a9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771aa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771aa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771aa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771aa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771aaa: mov esp, ebp */
  esp = ebp;
/* 771aac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771aad: ret  */
  esp += 4; SPILL(); return;
}

void f_771a67(void) {
  LOAD_REGS();
L_771a67: /* 771a67: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 771a6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 771a6f: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 771a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771a73: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 771a76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771a7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_771a7b(); return;
}

void f_771a7b(void) {
  LOAD_REGS();
  goto L_771a7b;
L_7718c6: /* 7718c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718c7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7718ca: call 0x9458c0 */
  esp -= 4; W32(esp, 0x7718cfu); SPILL(); f_9458c0(); if (g_unwind) return; RELOAD();
/* 7718cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7718d1: jge 0x771a9d */
  if ((sf == of)) goto L_771a9d;
L_7718d7: /* 7718d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7718d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718d9: call 0x9457f0 */
  esp -= 4; W32(esp, 0x7718deu); SPILL(); f_9457f0(); if (g_unwind) return; RELOAD();
/* 7718de: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7718e1: xor eax, eax */
  eax = 0;
/* 7718e3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7718e6: /* 7718e6: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7718e9: jge 0x771a97 */
  if ((sf == of)) goto L_771a97;
L_7718ef: /* 7718ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7718f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7718f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7718f2: call 0x945860 */
  esp -= 4; W32(esp, 0x7718f7u); SPILL(); f_945860(); if (g_unwind) return; RELOAD();
/* 7718f7: mov edi, eax */
  edi = eax;
/* 7718f9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7718fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7718fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 771900: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 771901: idiv dword ptr [ebp - 0x1c] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); if (!d) d = (int32_t)guest_divzero(0x771901);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 771904: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771909: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77190a: call 0x945860 */
  esp -= 4; W32(esp, 0x77190fu); SPILL(); f_945860(); if (g_unwind) return; RELOAD();
/* 77190f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 771911: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 771914: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 771916: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 771919: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77191c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77191f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 771921: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 771923: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 771926: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 771929: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77192b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 77192e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 771931: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 771934: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 771937: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771939: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 77193c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77193e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 771941: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 771944: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 771947: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 77194a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 77194d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77194f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 771952: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 771955: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 771958: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77195a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 77195d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77195f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 771962: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771964: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 771966: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 771969: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77196b: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77196e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 771971: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771973: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 771976: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 771978: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 77197b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77197d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77197f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 771982: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771984: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771987: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 77198a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 77198c: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 77198f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 771991: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 771994: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 771996: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 771999: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77199b: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77199e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7719a1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719a4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7719a6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719a9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 7719ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719ae: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719b1: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7719b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719b6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7719b9: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7719bc: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719bf: movzx ecx, byte ptr [ebp + 0xa] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xau)));
/* 7719c3: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 7719c6: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 7719c9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719cc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7719cf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7719d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7719d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719d7: movzx eax, bh */
  eax = (uint32_t)(((ebx >> 8) & 0xffu));
/* 7719da: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719dd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7719e0: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7719e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719e5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7719e8: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7719eb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7719ee: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7719f1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7719f4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 7719f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7719f9: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7719fc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7719ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a01: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771a04: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 771a07: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 771a0a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 771a0d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 771a10: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 771a13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a15: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 771a18: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 771a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 771a1d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 771a20: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 771a23: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 771a29: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 771a2c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a32: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 771a36: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a39: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 771a3c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a42: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 771a46: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771a49: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 771a4f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 771a52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771a54: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x771a57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 771a57: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 771a5a: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771a5d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 771a60: mov eax, ecx */
  eax = ecx;
/* 771a62: jmp 0x7718e6 */
  goto L_7718e6;
L_771a7b: /* 771a7b: push 0xa07e3c */
  { uint32_t v = 0xa07e3cu; esp -= 4; W32(esp, v); }
/* 771a80: push 0xac46b0 */
  { uint32_t v = 0xac46b0u; esp -= 4; W32(esp, v); }
/* 771a85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x771a8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 771a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771a8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771a90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771a92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771a97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_771a97: /* 771a97: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 771a98: jmp 0x7718c6 */
  goto L_7718c6;
L_771a9d: /* 771a9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771aa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771aa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771aa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771aa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771aaa: mov esp, ebp */
  esp = ebp;
/* 771aac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771aad: ret  */
  esp += 4; SPILL(); return;
}

void f_771b40(void) {
  LOAD_REGS();
L_771b40: /* 771b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 771b41: mov ebp, esp */
  ebp = esp;
/* 771b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 771b45: push 0x9cc2b0 */
  { uint32_t v = 0x9cc2b0u; esp -= 4; W32(esp, v); }
/* 771b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 771b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 771b58: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 771b5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 771b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771b5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771b5e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 771b61: cmp byte ptr [edi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 771b64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 771b67: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 771b6e: jne 0x771bdb */
  if (!zf) goto L_771bdb;
L_771b70: /* 771b70: xor esi, esi */
  esi = 0;
L_771b72: /* 771b72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771b73: call 0x926e80 */
  esp -= 4; W32(esp, 0x771b78u); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 771b78: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 771b7a: jge 0x771bdb */
  if ((sf == of)) goto L_771bdb;
L_771b7c: /* 771b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771b7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771b7e: call 0x926ea0 */
  esp -= 4; W32(esp, 0x771b83u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 771b83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771b85: mov ebx, eax */
  ebx = eax;
/* 771b87: call 0x926ec0 */
  esp -= 4; W32(esp, 0x771b8cu); SPILL(); f_926ec0(); if (g_unwind) return; RELOAD();
/* 771b8c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 771b8f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 771b92: call 0x770be0 */
  esp -= 4; W32(esp, 0x771b97u); SPILL(); f_770be0(); if (g_unwind) return; RELOAD();
/* 771b97: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771b9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771b9b: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 771b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771b9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 771ba0: call 0x6c12bc */
  esp -= 4; W32(esp, 0x771ba5u); SPILL(); f_6c12bc(); if (g_unwind) return; RELOAD();
/* 771ba5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771ba8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 771ba9: jmp 0x771b72 */
  goto L_771b72;
L_771bdb: /* 771bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771be8: mov esp, ebp */
  esp = ebp;
/* 771bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771beb: ret  */
  esp += 4; SPILL(); return;
}

void f_771bab(void) {
  LOAD_REGS();
L_771bab: /* 771bab: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771bae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 771bb3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 771bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771bb7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 771bba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771bbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_771bbf(); return;
}

void f_771bbf(void) {
  LOAD_REGS();
L_771bbf: /* 771bbf: push 0xa07e58 */
  { uint32_t v = 0xa07e58u; esp -= 4; W32(esp, v); }
/* 771bc4: push 0xac46b8 */
  { uint32_t v = 0xac46b8u; esp -= 4; W32(esp, v); }
/* 771bc9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x771bcfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 771bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771bd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771bd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771bd6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771bdbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 771bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771be8: mov esp, ebp */
  esp = ebp;
/* 771bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771beb: ret  */
  esp += 4; SPILL(); return;
}

void f_771c20(void) {
  LOAD_REGS();
L_771c20: /* 771c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 771c21: mov ebp, esp */
  ebp = esp;
/* 771c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 771c25: push 0x9cc2c0 */
  { uint32_t v = 0x9cc2c0u; esp -= 4; W32(esp, v); }
/* 771c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 771c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 771c38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 771c3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 771c3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 771c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 771c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771c42: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 771c47: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 771c4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771c4b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 771c4e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 771c55: ja 0x771d5e */
  if ((!cf && !zf)) goto L_771d5e;
L_771c5b: /* 771c5b: jmp dword ptr [eax*4 + 0x771d80] */
  switch (R32((uint32_t)(eax*4 + 0x771d80u))) {
    case 0x771c62u: goto L_771c62;
    case 0x771c84u: goto L_771c84;
    case 0x771ca6u: goto L_771ca6;
    case 0x771cc8u: goto L_771cc8;
    case 0x771ceau: goto L_771cea;
    case 0x771d0cu: goto L_771d0c;
    case 0x771d5eu: goto L_771d5e;
    case 0x771d6du: goto L_771d6d;
    default: guest_badjump(0x771c5b, R32((uint32_t)(eax*4 + 0x771d80u))); return;
  }
L_771c62: /* 771c62: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771c65: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771c69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771c6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771c6b: call 0x6ccb9e */
  esp -= 4; W32(esp, 0x771c70u); SPILL(); f_6ccb9e(); if (g_unwind) return; RELOAD();
/* 771c70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771c73: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771c76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771c7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771c7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771c7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771c80: mov esp, ebp */
  esp = ebp;
/* 771c82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771c83: ret  */
  esp += 4; SPILL(); return;
L_771c84: /* 771c84: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771c87: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771c8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771c8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771c8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771c8d: call 0x6ca808 */
  esp -= 4; W32(esp, 0x771c92u); SPILL(); f_6ca808(); if (g_unwind) return; RELOAD();
/* 771c92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771c95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771c98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771ca1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771ca2: mov esp, ebp */
  esp = ebp;
/* 771ca4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771ca5: ret  */
  esp += 4; SPILL(); return;
L_771ca6: /* 771ca6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771ca9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771cac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771cad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771cae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771caf: call 0x6ca6b9 */
  esp -= 4; W32(esp, 0x771cb4u); SPILL(); f_6ca6b9(); if (g_unwind) return; RELOAD();
/* 771cb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771cb7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771cba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771cc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771cc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771cc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771cc4: mov esp, ebp */
  esp = ebp;
/* 771cc6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771cc7: ret  */
  esp += 4; SPILL(); return;
L_771cc8: /* 771cc8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771ccb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771cce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771ccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771cd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771cd1: call 0x6c86fc */
  esp -= 4; W32(esp, 0x771cd6u); SPILL(); f_6c86fc(); if (g_unwind) return; RELOAD();
/* 771cd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771cdc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771ce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771ce4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771ce6: mov esp, ebp */
  esp = ebp;
/* 771ce8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771ce9: ret  */
  esp += 4; SPILL(); return;
L_771cea: /* 771cea: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771ced: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771cf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771cf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771cf3: call 0x6cbe79 */
  esp -= 4; W32(esp, 0x771cf8u); SPILL(); f_6cbe79(); if (g_unwind) return; RELOAD();
/* 771cf8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771cfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771cfe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771d07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771d08: mov esp, ebp */
  esp = ebp;
/* 771d0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771d0b: ret  */
  esp += 4; SPILL(); return;
L_771d0c: /* 771d0c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 771d0f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 771d12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771d13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771d14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771d15: call 0x6cb866 */
  esp -= 4; W32(esp, 0x771d1au); SPILL(); f_6cb866(); if (g_unwind) return; RELOAD();
/* 771d1a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771d1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771d20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771d27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771d28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771d29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771d2a: mov esp, ebp */
  esp = ebp;
/* 771d2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771d2d: ret  */
  esp += 4; SPILL(); return;
L_771d5e: /* 771d5e: push 0xac46c0 */
  { uint32_t v = 0xac46c0u; esp -= 4; W32(esp, v); }
/* 771d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771d65: call 0x971e20 */
  esp -= 4; W32(esp, 0x771d6au); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 771d6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_771d6d: /* 771d6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771d70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771d71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771d72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771d79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771d7a: mov esp, ebp */
  esp = ebp;
/* 771d7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771d7d: ret  */
  esp += 4; SPILL(); return;
}

void f_771d2e(void) {
  LOAD_REGS();
L_771d2e: /* 771d2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 771d31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 771d36: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 771d39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771d3a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 771d3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771d42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_771d42(); return;
}

void f_771d42(void) {
  LOAD_REGS();
L_771d42: /* 771d42: push 0xa07e7c */
  { uint32_t v = 0xa07e7cu; esp -= 4; W32(esp, v); }
/* 771d47: push 0xac46f8 */
  { uint32_t v = 0xac46f8u; esp -= 4; W32(esp, v); }
/* 771d4c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x771d52u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 771d52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771d57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771d59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x771d5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 771d5e: push 0xac46c0 */
  { uint32_t v = 0xac46c0u; esp -= 4; W32(esp, v); }
/* 771d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 771d65: call 0x971e20 */
  esp -= 4; W32(esp, 0x771d6au); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 771d6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771d6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 771d70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 771d71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 771d72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 771d79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 771d7a: mov esp, ebp */
  esp = ebp;
/* 771d7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 771d7d: ret  */
  esp += 4; SPILL(); return;
}

void f_771e20(void) {
  LOAD_REGS();
L_771e20: /* 771e20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 771e21: mov ebp, esp */
  ebp = esp;
/* 771e23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 771e25: push 0x9cc2d0 */
  { uint32_t v = 0x9cc2d0u; esp -= 4; W32(esp, v); }
/* 771e2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 771e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771e31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 771e38: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 771e3b: test byte ptr [ebp + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 771e3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 771e40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771e41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771e42: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 771e45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 771e48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 771e4f: je 0x771e6f */
  if (zf) goto L_771e6f;
L_771e51: /* 771e51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771e52: call 0x9287f0 */
  esp -= 4; W32(esp, 0x771e57u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 771e57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771e58: mov esi, eax */
  esi = eax;
/* 771e5a: call 0x928730 */
  esp -= 4; W32(esp, 0x771e5fu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 771e5f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 771e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 771e63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771e64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 771e65: call 0x6c12bc */
  esp -= 4; W32(esp, 0x771e6au); SPILL(); f_6c12bc(); if (g_unwind) return; RELOAD();
/* 771e6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 771e6d: jmp 0x771e72 */
  goto L_771e72;
L_771e6f: /* 771e6f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_771e72: /* 771e72: test byte ptr [ebp + 0xc], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 771e76: je 0x771f55 */
  if (zf) goto L_771f55;
L_771e7c: /* 771e7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771e7d: call 0x925ce0 */
  esp -= 4; W32(esp, 0x771e82u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 771e82: mov esi, eax */
  esi = eax;
/* 771e84: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 771e86: je 0x771f55 */
  if (zf) goto L_771f55;
L_771e8c: /* 771e8c: xor edi, edi */
  edi = 0;
/* 771e8e: mov edi, edi */
  edi = edi;
L_771e90: /* 771e90: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 771e93: jge 0x771f52 */
  if ((sf == of)) goto L_771f52;
L_771e99: /* 771e99: fld dword ptr [esi + 0x120] */
  { double v = F32((uint32_t)(esi + 0x120u)); FPUSH(v); }
/* 771e9f: mov eax, dword ptr [esi + 0x128] */
  eax = R32((uint32_t)(esi + 0x128u));
/* 771ea5: fld dword ptr [esi + 0x124] */
  { double v = F32((uint32_t)(esi + 0x124u)); FPUSH(v); }
/* 771eab: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 771eae: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 771eb4: lea ecx, [edi + 0xf] */
  ecx = (uint32_t)(edi + 0xfu);
/* 771eb7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 771ebd: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 771ec0: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 771ec3: mov edx, dword ptr [esi + 0x128] */
  edx = R32((uint32_t)(esi + 0x128u));
/* 771ec9: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 771ecc: mov ecx, dword ptr [0xa0770c] */
  ecx = R32((uint32_t)(0xa0770cu));
/* 771ed2: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 771ed4: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 771ed7: mov edx, dword ptr [0xa07708] */
  edx = R32((uint32_t)(0xa07708u));
/* 771edd: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 771edf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 771ee2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771ee5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 771ee8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771eea: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 771eed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771eef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771ef1: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771ef4: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 771ef7: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 771efa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 771efd: fld dword ptr [esi + 0x120] */
  { double v = F32((uint32_t)(esi + 0x120u)); FPUSH(v); }
/* 771f03: fld dword ptr [esi + 0x124] */
  { double v = F32((uint32_t)(esi + 0x124u)); FPUSH(v); }
/* 771f09: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 771f0f: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 771f15: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 771f18: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 771f1a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 771f1c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 771f1f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771f22: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 771f25: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 771f27: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 771f2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771f2c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 771f2e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 771f31: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 771f34: mov eax, dword ptr [0xa07710] */
  eax = R32((uint32_t)(0xa07710u));
/* 771f39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771f3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771f3b: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 771f3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 771f3f: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 771f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 771f43: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 771f46: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 771f49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 771f4a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x771f4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 771f4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 771f4d: jmp 0x771e90 */
  goto L_771e90;
L_771f52: /* 771f52: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_771f55: /* 771f55: test byte ptr [ebp + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 771f59: je 0x77205f */
  if (zf) goto L_77205f;
L_771f5f: /* 771f5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 771f60: call 0x928730 */
  esp -= 4; W32(esp, 0x771f65u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 771f65: mov edi, eax */
  edi = eax;
/* 771f67: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 771f6a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 771f6d: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 771f70: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 771f73: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 771f76: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 771f7d: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 771f84: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 771f8b: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 771f92: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 771f99: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 771fa0: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 771fa7: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 771fae: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 771fb5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 771fb8: xor esi, esi */
  esi = 0;
/* 771fba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_771fc0: /* 771fc0: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 771fc3: jge 0x77205f */
  if ((sf == of)) goto L_77205f;
L_771fc9: /* 771fc9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 771fcc: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 771fd2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 771fd8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 771fdb: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 771fde: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 771fe1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771fe3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 771fe6: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 771fe9: mov eax, esi */
  eax = esi;
/* 771feb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 771fee: fmul dword ptr [eax + edi] */
  ST0 = ST0 * (F32((uint32_t)(eax + edi)));
/* 771ff1: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 771ff3: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 771ff6: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 771ff9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 771ffb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 771ffe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772001: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 772004: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 772007: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 77200a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 77200d: mov edx, dword ptr [ebp + eax - 0x50] */
  edx = R32((uint32_t)(ebp + eax + 0xffffffb0u));
/* 772011: mov ecx, dword ptr [ebp + eax - 0x54] */
  ecx = R32((uint32_t)(ebp + eax + 0xffffffacu));
/* 772015: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772018: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772019: mov edx, dword ptr [ebp + eax - 0x58] */
  edx = R32((uint32_t)(ebp + eax + 0xffffffa8u));
/* 77201d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77201e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772021: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772022: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 772025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772026: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772029: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77202a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x77202cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77202c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77202d: jmp 0x771fc0 */
  goto L_771fc0;
L_77205f: /* 77205f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772064: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77206b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77206c: mov esp, ebp */
  esp = ebp;
/* 77206e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77206f: ret  */
  esp += 4; SPILL(); return;
}

void f_77202f(void) {
  LOAD_REGS();
L_77202f: /* 77202f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 772032: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 772037: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77203a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77203b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77203e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772043u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772043(); return;
}

void f_772043(void) {
  LOAD_REGS();
L_772043: /* 772043: push 0xa07ea0 */
  { uint32_t v = 0xa07ea0u; esp -= 4; W32(esp, v); }
/* 772048: push 0xac4700 */
  { uint32_t v = 0xac4700u; esp -= 4; W32(esp, v); }
/* 77204d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772053u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772053: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772056: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77205a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77205fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 77205f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772062: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772063: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772064: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77206b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77206c: mov esp, ebp */
  esp = ebp;
/* 77206e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77206f: ret  */
  esp += 4; SPILL(); return;
}

void f_772110(void) {
  LOAD_REGS();
L_772110: /* 772110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 772111: mov ebp, esp */
  ebp = esp;
/* 772113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 772115: push 0x9cc2e0 */
  { uint32_t v = 0x9cc2e0u; esp -= 4; W32(esp, v); }
/* 77211a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 772120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 772128: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77212e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77212f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 772132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 772133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772134: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 772137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772138: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77213f: call 0x90f7a0 */
  esp -= 4; W32(esp, 0x772144u); SPILL(); f_90f7a0(); if (g_unwind) return; RELOAD();
/* 772144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772146: je 0x772365 */
  if (zf) goto L_772365;
L_77214c: /* 77214c: test byte ptr [ebp + 0xc], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772150: je 0x772365 */
  if (zf) goto L_772365;
L_772156: /* 772156: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 772159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77215a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77215c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77215d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 772161: call 0x90be60 */
  esp -= 4; W32(esp, 0x772166u); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 772166: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77216c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 772172: mov ecx, dword ptr [0xa0771c] */
  ecx = R32((uint32_t)(0xa0771cu));
/* 772178: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77217b: mov edx, dword ptr [0xa07718] */
  edx = R32((uint32_t)(0xa07718u));
/* 772181: mov eax, dword ptr [0xa07714] */
  eax = R32((uint32_t)(0xa07714u));
/* 772186: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772188: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 77218b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77218c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77218d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772191: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772194: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 77219a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77219b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77219e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7721a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7721a2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7721a4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7721a7: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7721aa: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7721ad: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7721b3: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 7721b9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7721bc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7721be: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7721c1: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7721c7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7721ca: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7721cc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7721cf: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7721d2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7721d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7721d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7721d7: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7721dd: mov eax, dword ptr [0xa0771c] */
  eax = R32((uint32_t)(0xa0771cu));
/* 7721e2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7721e8: mov ecx, dword ptr [0xa07718] */
  ecx = R32((uint32_t)(0xa07718u));
/* 7721ee: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7721f4: mov edx, dword ptr [0xa07714] */
  edx = R32((uint32_t)(0xa07714u));
/* 7721fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7721fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7721fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7721fe: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772201: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772202: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772205: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772207: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772208: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 77220b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77220c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77220f: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 772212: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772215: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 772218: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77221a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77221d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77221f: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 772225: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 77222b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 772231: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772233: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772236: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772238: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 77223b: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 77223e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772241: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 772244: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772246: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772249: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77224b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77224du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77224d: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 772250: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772253: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772254: call 0x90be60 */
  esp -= 4; W32(esp, 0x772259u); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 772259: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77225f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 772265: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77226a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77226d: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 772272: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 772277: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772279: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 77227c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77227d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 772280: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772283: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772284: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 77228a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77228d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77228f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772292: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 772295: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772298: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77229e: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 7722a4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7722a7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7722a9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7722ac: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7722b2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7722b5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7722b7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7722ba: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7722bd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7722c0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7722c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7722c2: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7722c8: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7722cd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7722d3: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 7722d8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7722de: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 7722e3: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7722e6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7722e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7722e9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7722ec: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7722ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7722f0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7722f2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7722f5: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7722f8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7722fb: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7722fe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 772300: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772303: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772305: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77230b: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 772311: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 772317: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772319: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77231c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77231e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772321: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 772324: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772327: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 77232a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77232c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 77232f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772331: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772333: jmp 0x772368 */
  goto L_772368;
L_772365: /* 772365: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_772368: /* 772368: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772369: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 772370: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x772375u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 772375: mov edi, eax */
  edi = eax;
/* 772377: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772379: je 0x7725dd */
  if (zf) goto L_7725dd;
L_77237f: /* 77237f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772384: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 772388: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x77238du); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 77238d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77238e: call 0x90be40 */
  esp -= 4; W32(esp, 0x772393u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 772393: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 772396: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772397: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772399: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77239a: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x77239fu); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 77239f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723a0: call 0x90bf10 */
  esp -= 4; W32(esp, 0x7723a5u); SPILL(); f_90bf10(); if (g_unwind) return; RELOAD();
/* 7723a5: test byte ptr [ebp + 0xc], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7723a9: je 0x772427 */
  if (zf) goto L_772427;
L_7723ab: /* 7723ab: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7723b1: mov edx, dword ptr [0xa0771c] */
  edx = R32((uint32_t)(0xa0771cu));
/* 7723b7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7723bd: mov eax, dword ptr [0xa07718] */
  eax = R32((uint32_t)(0xa07718u));
/* 7723c2: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7723c5: mov ecx, dword ptr [0xa07714] */
  ecx = R32((uint32_t)(0xa07714u));
/* 7723cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7723cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7723d0: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7723d3: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7723d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7723d7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7723da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723db: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7723de: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7723e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723e3: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7723e6: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7723e9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7723ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723ee: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7723f1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7723f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7723f6: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7723fc: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 772402: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772405: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772407: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77240a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 77240d: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772410: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772412: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772415: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 772418: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77241b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77241d: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772420: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772423: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772425: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772427: /* 772427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772428: call 0x90d500 */
  esp -= 4; W32(esp, 0x77242du); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 77242d: mov edi, eax */
  edi = eax;
/* 77242f: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772433: je 0x7725dd */
  if (zf) goto L_7725dd;
L_772439: /* 772439: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77243a: call 0x90c9b0 */
  esp -= 4; W32(esp, 0x77243fu); SPILL(); f_90c9b0(); if (g_unwind) return; RELOAD();
/* 77243f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772441: je 0x7725dd */
  if (zf) goto L_7725dd;
L_772447: /* 772447: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 77244a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77244b: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 77244e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77244f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772451: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772452: call 0x90bf50 */
  esp -= 4; W32(esp, 0x772457u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 772457: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 77245a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77245b: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 772461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772464: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772465: call 0x90bf50 */
  esp -= 4; W32(esp, 0x77246au); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 77246a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77246d: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772473: mov edx, dword ptr [0xa07740] */
  edx = R32((uint32_t)(0xa07740u));
/* 772479: mov eax, dword ptr [0xa0773c] */
  eax = R32((uint32_t)(0xa0773cu));
/* 77247e: mov ecx, dword ptr [0xa07738] */
  ecx = R32((uint32_t)(0xa07738u));
/* 772484: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772487: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772488: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77248b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77248c: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772493: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 772496: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772497: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77249a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 77249d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7724a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7724a1: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724a7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7724aa: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7724ad: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724b3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7724b6: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724bc: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7724bf: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724c5: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7724c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7724ca: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7724cd: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7724d0: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7724d3: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7724d6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7724d9: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7724dc: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7724df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7724e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7724e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7724e2: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x7724e7u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 7724e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7724e8: call 0x90c850 */
  esp -= 4; W32(esp, 0x7724edu); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 7724ed: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7724f3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7724f6: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7724f9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7724fb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7724fe: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772500: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772502: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772504: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 772507: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77250a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77250c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77250f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772512: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772514: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 772517: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77251a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77251c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 77251f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772521: call 0x770a00 */
  esp -= 4; W32(esp, 0x772526u); SPILL(); f_770a00(); if (g_unwind) return; RELOAD();
/* 772526: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 772529: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77252c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 77252f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 772532: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772535: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772538: mov ecx, dword ptr [0xa07728] */
  ecx = R32((uint32_t)(0xa07728u));
/* 77253e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 772541: mov edx, dword ptr [0xa07724] */
  edx = R32((uint32_t)(0xa07724u));
/* 772547: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77254a: mov eax, dword ptr [0xa07720] */
  eax = R32((uint32_t)(0xa07720u));
/* 77254f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772551: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772555: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772558: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772559: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 77255c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77255d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77255fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77255f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772560: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x772565u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 772565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772566: call 0x90c850 */
  esp -= 4; W32(esp, 0x77256bu); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 77256b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 772571: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772574: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 772577: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772579: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 77257c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 77257e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772580: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772582: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 772585: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772588: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77258a: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77258d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772592: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 772595: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772598: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77259a: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 77259d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77259f: call 0x770a00 */
  esp -= 4; W32(esp, 0x7725a4u); SPILL(); f_770a00(); if (g_unwind) return; RELOAD();
/* 7725a4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7725a7: mov eax, dword ptr [0xa07734] */
  eax = R32((uint32_t)(0xa07734u));
/* 7725ac: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7725af: mov ecx, dword ptr [0xa07730] */
  ecx = R32((uint32_t)(0xa07730u));
/* 7725b5: mov edx, dword ptr [0xa0772c] */
  edx = R32((uint32_t)(0xa0772cu));
/* 7725bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7725bc: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7725bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7725c0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7725c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7725c4: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7725c7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7725ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7725cb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7725ce: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7725d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7725d2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7725d5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7725d8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7725db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7725ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7725dd: /* 7725dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7725de: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7725e5: call 0x90d820 */
  esp -= 4; W32(esp, 0x7725eau); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 7725ea: mov edi, eax */
  edi = eax;
/* 7725ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7725ee: je 0x7728d5 */
  if (zf) goto L_7728d5;
L_7725f4: /* 7725f4: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7725f8: je 0x7728d5 */
  if (zf) goto L_7728d5;
L_7725fe: /* 7725fe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772601: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772604: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772605: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 772609: call 0x90be60 */
  esp -= 4; W32(esp, 0x77260eu); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 77260e: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 772611: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772613: call 0x90d940 */
  esp -= 4; W32(esp, 0x772618u); SPILL(); f_90d940(); if (g_unwind) return; RELOAD();
/* 772618: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77261b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77261c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77261d: call 0x90da60 */
  esp -= 4; W32(esp, 0x772622u); SPILL(); f_90da60(); if (g_unwind) return; RELOAD();
/* 772622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772623: call 0x90dc30 */
  esp -= 4; W32(esp, 0x772628u); SPILL(); f_90dc30(); if (g_unwind) return; RELOAD();
/* 772628: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 77262b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77262c: call 0x90dc20 */
  esp -= 4; W32(esp, 0x772631u); SPILL(); f_90dc20(); if (g_unwind) return; RELOAD();
/* 772631: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 772634: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772637: mov ecx, dword ptr [0xa0771c] */
  ecx = R32((uint32_t)(0xa0771cu));
/* 77263d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772640: mov edx, dword ptr [0xa07718] */
  edx = R32((uint32_t)(0xa07718u));
/* 772646: mov eax, dword ptr [0xa07714] */
  eax = R32((uint32_t)(0xa07714u));
/* 77264b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77264c: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77264f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772651: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772654: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772658: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77265b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 77265e: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772662: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772665: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772668: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77266b: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 77266e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772671: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772674: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772677: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 77267a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77267d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772680: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772683: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772686: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772689: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77268c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77268f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772692: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772695: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772698: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77269au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77269a: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7726a0: mov eax, dword ptr [0xa07740] */
  eax = R32((uint32_t)(0xa07740u));
/* 7726a5: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7726ab: mov ecx, dword ptr [0xa0773c] */
  ecx = R32((uint32_t)(0xa0773cu));
/* 7726b1: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7726b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7726b5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726b7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7726ba: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7726c0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7726c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726c5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7726c8: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7726cb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7726ce: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7726d4: fchs  */
  ST0 = -ST0;
/* 7726d6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7726dc: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7726df: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726e1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7726e4: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7726ea: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7726ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726ef: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7726f2: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7726f5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7726f8: mov edx, dword ptr [0xa07738] */
  edx = R32((uint32_t)(0xa07738u));
/* 7726fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7726ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772700: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 772703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772704: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 772707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772708: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77270au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77270a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77270d: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772710: mov edx, dword ptr [0xa07728] */
  edx = R32((uint32_t)(0xa07728u));
/* 772716: mov eax, dword ptr [0xa07724] */
  eax = R32((uint32_t)(0xa07724u));
/* 77271b: mov ecx, dword ptr [0xa07720] */
  ecx = R32((uint32_t)(0xa07720u));
/* 772721: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772724: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772727: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 77272a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77272d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772730: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772731: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772734: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772738: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77273b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77273d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772740: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772743: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772746: fst dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0);
/* 772749: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77274f: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772755: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 772758: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77275a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77275d: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772763: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772765: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 772767: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77276a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77276c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77276f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772771: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772773: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772775: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772778: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 77277b: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 772781: fchs  */
  ST0 = -ST0;
/* 772783: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772789: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77278c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77278e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772791: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772797: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772799: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 77279b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77279e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727a0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7727a3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7727a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7727a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7727a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7727a9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7727ac: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727af: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7727b2: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7727b5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7727b8: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727bb: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7727be: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7727c0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7727c3: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727c6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7727c9: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 7727cc: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7727d2: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7727d8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7727db: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727dd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7727e0: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7727e6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7727e8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7727ea: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7727ed: mov ecx, dword ptr [0xa07734] */
  ecx = R32((uint32_t)(0xa07734u));
/* 7727f3: mov edx, dword ptr [0xa07730] */
  edx = R32((uint32_t)(0xa07730u));
/* 7727f9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727fb: mov eax, dword ptr [0xa0772c] */
  eax = R32((uint32_t)(0xa0772cu));
/* 772800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772802: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772806: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772809: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77280b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77280c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77280e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772811: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772814: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772815: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 772818: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77281e: fchs  */
  ST0 = -ST0;
/* 772820: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772826: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772829: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77282b: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 77282e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772834: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 772836: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 772838: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77283b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77283d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772840: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772842: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772844u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772844: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772846: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772847: call 0x90d810 */
  esp -= 4; W32(esp, 0x77284cu); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 77284c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77284d: call 0x90bda0 */
  esp -= 4; W32(esp, 0x772852u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 772852: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 772855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772857: call 0x90e1f0 */
  esp -= 4; W32(esp, 0x77285cu); SPILL(); f_90e1f0(); if (g_unwind) return; RELOAD();
/* 77285c: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 772862: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772868: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77286d: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772870: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772875: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77287a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77287c: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77287f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772880: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772883: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772887: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77288a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 77288d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77288f: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772892: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772895: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772898: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77289a: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 77289d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7728a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7728a2: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7728a8: fchs  */
  ST0 = -ST0;
/* 7728aa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7728b0: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7728b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728b5: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7728b8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7728bb: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7728be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728c0: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 7728c3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7728c6: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7728c9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728cb: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 7728ce: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7728d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7728d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7728d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7728d5: /* 7728d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7728d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7728d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7728e0: call 0x90fe00 */
  esp -= 4; W32(esp, 0x7728e5u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 7728e5: mov ebx, eax */
  ebx = eax;
/* 7728e7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7728e9: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_7728ef: /* 7728ef: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 7728f5: mov eax, dword ptr [ecx + 0x15220] */
  eax = R32((uint32_t)(ecx + 0x15220u));
/* 7728fb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7728fe: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_772904: /* 772904: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772905: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 772909: call 0x90fe20 */
  esp -= 4; W32(esp, 0x77290eu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
L_77290e: /* 77290e: mov edi, eax */
  edi = eax;
/* 772910: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772912: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_772918: /* 772918: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77291b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77291c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77291d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77291e: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x772923u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 772923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772924: call 0x6cac77 */
  esp -= 4; W32(esp, 0x772929u); SPILL(); f_6cac77(); if (g_unwind) return; RELOAD();
/* 772929: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77292c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77292d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77292e: call 0x90fe60 */
  esp -= 4; W32(esp, 0x772933u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 772933: jmp 0x77290e */
  goto L_77290e;
L_7729d7: /* 7729d7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7729da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7729db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7729e2: call 0x90f8c0 */
  esp -= 4; W32(esp, 0x7729e7u); SPILL(); f_90f8c0(); if (g_unwind) return; RELOAD();
/* 7729e7: mov edi, eax */
  edi = eax;
/* 7729e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7729eb: je 0x772adb */
  if (zf) goto L_772adb;
L_7729f1: /* 7729f1: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 7729f7: mov eax, dword ptr [edx + 0x15220] */
  eax = R32((uint32_t)(edx + 0x15220u));
/* 7729fd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a00: je 0x772adb */
  if (zf) goto L_772adb;
L_772a06: /* 772a06: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a0b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 772a0f: call 0x90f8e0 */
  esp -= 4; W32(esp, 0x772a14u); SPILL(); f_90f8e0(); if (g_unwind) return; RELOAD();
/* 772a14: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 772a17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a19: call 0x90f910 */
  esp -= 4; W32(esp, 0x772a1eu); SPILL(); f_90f910(); if (g_unwind) return; RELOAD();
/* 772a1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a1f: call 0x90f940 */
  esp -= 4; W32(esp, 0x772a24u); SPILL(); f_90f940(); if (g_unwind) return; RELOAD();
/* 772a24: fmul dword ptr [0xa076ec] */
  ST0 = ST0 * (F32((uint32_t)(0xa076ecu)));
/* 772a2a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772a2d: mov edx, dword ptr [0xa076f8] */
  edx = R32((uint32_t)(0xa076f8u));
/* 772a33: mov eax, dword ptr [0xa076f4] */
  eax = R32((uint32_t)(0xa076f4u));
/* 772a38: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a3a: mov ecx, dword ptr [0xa076f0] */
  ecx = R32((uint32_t)(0xa076f0u));
/* 772a40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a42: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 772a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a46: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772a49: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 772a4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a4f: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a53: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 772a56: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772a59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a5b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 772a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772a60: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772a63: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772a66: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772a69: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772a6c: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772a6f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772a72: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772a75: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772a78: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772a7b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772a7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772a7d: test byte ptr [edi + 0x1a0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1a0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a84: je 0x772adb */
  if (zf) goto L_772adb;
L_772a86: /* 772a86: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 772a89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a8b: call 0x90f950 */
  esp -= 4; W32(esp, 0x772a90u); SPILL(); f_90f950(); if (g_unwind) return; RELOAD();
/* 772a90: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772a93: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772a99: mov edx, dword ptr [0xa0774c] */
  edx = R32((uint32_t)(0xa0774cu));
/* 772a9f: mov eax, dword ptr [0xa07748] */
  eax = R32((uint32_t)(0xa07748u));
/* 772aa4: mov ecx, dword ptr [0xa07744] */
  ecx = R32((uint32_t)(0xa07744u));
/* 772aaa: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772aad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772aaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772ab0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772ab3: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 772ab6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772ab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aba: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ac0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772ac4: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 772ac7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772aca: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772acd: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ad3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 772ad6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772ad9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772adbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772adb: /* 772adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772adc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 772ae3: call 0x90d640 */
  esp -= 4; W32(esp, 0x772ae8u); SPILL(); f_90d640(); if (g_unwind) return; RELOAD();
/* 772ae8: mov edi, eax */
  edi = eax;
/* 772aea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772aec: je 0x772d49 */
  if (zf) goto L_772d49;
L_772af2: /* 772af2: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772af6: je 0x772d49 */
  if (zf) goto L_772d49;
L_772afc: /* 772afc: mov eax, dword ptr [0xa076e8] */
  eax = R32((uint32_t)(0xa076e8u));
/* 772b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b02: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 772b06: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 772b09: call 0x90d680 */
  esp -= 4; W32(esp, 0x772b0eu); SPILL(); f_90d680(); if (g_unwind) return; RELOAD();
/* 772b0e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 772b11: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 772b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b15: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 772b18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b1a: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b1fu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b20: call 0x90c050 */
  esp -= 4; W32(esp, 0x772b25u); SPILL(); f_90c050(); if (g_unwind) return; RELOAD();
/* 772b25: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b28: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772b2b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772b2e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b32: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772b35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b38: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 772b3b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772b3e: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b41: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b44: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b49: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 772b4c: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b4f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772b55: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b58: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b5a: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 772b5d: call 0x90be40 */
  esp -= 4; W32(esp, 0x772b62u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 772b62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 772b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b66: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 772b69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b6d: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b72u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b73: call 0x90bf50 */
  esp -= 4; W32(esp, 0x772b78u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 772b78: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 772b7b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 772b7d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b82: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b87: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b8c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772b8e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b92: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772b95: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b99: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772b9c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 772b9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772ba1: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772ba4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772ba7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 772baa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772bac: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772baf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772bb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772bb4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772bb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772bb6: xor edi, edi */
  edi = 0;
/* 772bb8: jmp 0x772bc0 */
  goto L_772bc0;
L_772bc0: /* 772bc0: cmp edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 772bc3: jge 0x772d49 */
  if ((sf == of)) goto L_772d49;
L_772bc9: /* 772bc9: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772bcc: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 772bcf: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bd2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 772bd5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bda: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bdf: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772be4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772be8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772beb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772bee: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772bf2: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bf5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772bf8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772bfb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772bfe: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c01: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772c04: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c07: fild dword ptr [ebp - 0x54] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 772c0a: fmul qword ptr [0xa07f28] */
  ST0 = ST0 * (F64((uint32_t)(0xa07f28u)));
/* 772c10: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 772c13: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 772c17: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772c19: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c1e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772c21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c23: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c26: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c29: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772c2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c2e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c31: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c34: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772c37: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c39: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c3c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772c43: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c45: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c48: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 772c4a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772c4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c4f: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c52: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c55: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772c58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c5a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c5d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c60: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772c63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c65: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772c6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772c71: je 0x772c8c */
  if (zf) goto L_772c8c;
L_772c73: /* 772c73: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c78: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772c7f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772c83: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 772c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772c8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772c8c: /* 772c8c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 772c8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 772c92: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 772c95: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 772c9b: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 772ca1: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 772ca7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 772ca8: jmp 0x772bc0 */
  goto L_772bc0;
L_772d49: /* 772d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772d4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 772d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 772d56: mov esp, ebp */
  esp = ebp;
/* 772d58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 772d59: ret  */
  esp += 4; SPILL(); return;
}

void f_772335(void) {
  LOAD_REGS();
L_772335: /* 772335: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 772338: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77233d: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 772340: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772341: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 772344: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772349u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772349(); return;
}

void f_772349(void) {
  LOAD_REGS();
L_772349: /* 772349: push 0xa07f94 */
  { uint32_t v = 0xa07f94u; esp -= 4; W32(esp, v); }
/* 77234e: push 0xac4708 */
  { uint32_t v = 0xac4708u; esp -= 4; W32(esp, v); }
/* 772353: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772359u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772359: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77235c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77235e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772360: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772365u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 772365: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 772368: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772369: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 772370: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x772375u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 772375: mov edi, eax */
  edi = eax;
/* 772377: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772379: je 0x7725dd */
  if (zf) goto L_7725dd;
L_77237f: /* 77237f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772384: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 772388: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x77238du); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 77238d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77238e: call 0x90be40 */
  esp -= 4; W32(esp, 0x772393u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 772393: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 772396: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772397: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772399: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77239a: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x77239fu); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 77239f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723a0: call 0x90bf10 */
  esp -= 4; W32(esp, 0x7723a5u); SPILL(); f_90bf10(); if (g_unwind) return; RELOAD();
/* 7723a5: test byte ptr [ebp + 0xc], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7723a9: je 0x772427 */
  if (zf) goto L_772427;
L_7723ab: /* 7723ab: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7723b1: mov edx, dword ptr [0xa0771c] */
  edx = R32((uint32_t)(0xa0771cu));
/* 7723b7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7723bd: mov eax, dword ptr [0xa07718] */
  eax = R32((uint32_t)(0xa07718u));
/* 7723c2: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7723c5: mov ecx, dword ptr [0xa07714] */
  ecx = R32((uint32_t)(0xa07714u));
/* 7723cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7723cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7723d0: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7723d3: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7723d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7723d7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7723da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7723db: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7723de: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7723e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723e3: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7723e6: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7723e9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7723ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7723ee: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7723f1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7723f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7723f6: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7723fc: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 772402: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772405: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772407: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77240a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 77240d: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772410: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772412: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772415: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 772418: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77241b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77241d: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772420: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772423: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772425: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772427: /* 772427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772428: call 0x90d500 */
  esp -= 4; W32(esp, 0x77242du); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 77242d: mov edi, eax */
  edi = eax;
/* 77242f: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772433: je 0x7725dd */
  if (zf) goto L_7725dd;
L_772439: /* 772439: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77243a: call 0x90c9b0 */
  esp -= 4; W32(esp, 0x77243fu); SPILL(); f_90c9b0(); if (g_unwind) return; RELOAD();
/* 77243f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772441: je 0x7725dd */
  if (zf) goto L_7725dd;
L_772447: /* 772447: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 77244a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77244b: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 77244e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77244f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772451: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772452: call 0x90bf50 */
  esp -= 4; W32(esp, 0x772457u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 772457: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 77245a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77245b: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 772461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772464: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772465: call 0x90bf50 */
  esp -= 4; W32(esp, 0x77246au); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 77246a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77246d: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772473: mov edx, dword ptr [0xa07740] */
  edx = R32((uint32_t)(0xa07740u));
/* 772479: mov eax, dword ptr [0xa0773c] */
  eax = R32((uint32_t)(0xa0773cu));
/* 77247e: mov ecx, dword ptr [0xa07738] */
  ecx = R32((uint32_t)(0xa07738u));
/* 772484: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772487: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772488: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77248b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77248c: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772493: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 772496: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772497: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77249a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 77249d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7724a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7724a1: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724a7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7724aa: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7724ad: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724b3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7724b6: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724bc: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7724bf: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 7724c5: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7724c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7724ca: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7724cd: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7724d0: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7724d3: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7724d6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7724d9: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7724dc: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7724df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7724e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7724e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7724e2: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x7724e7u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 7724e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7724e8: call 0x90c850 */
  esp -= 4; W32(esp, 0x7724edu); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 7724ed: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7724f3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7724f6: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7724f9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7724fb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7724fe: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772500: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772502: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772504: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 772507: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77250a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77250c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77250f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772512: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772514: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 772517: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77251a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77251c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 77251f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772521: call 0x770a00 */
  esp -= 4; W32(esp, 0x772526u); SPILL(); f_770a00(); if (g_unwind) return; RELOAD();
/* 772526: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 772529: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77252c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 77252f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 772532: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772535: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772538: mov ecx, dword ptr [0xa07728] */
  ecx = R32((uint32_t)(0xa07728u));
/* 77253e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 772541: mov edx, dword ptr [0xa07724] */
  edx = R32((uint32_t)(0xa07724u));
/* 772547: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77254a: mov eax, dword ptr [0xa07720] */
  eax = R32((uint32_t)(0xa07720u));
/* 77254f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772551: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772555: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772558: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772559: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 77255c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77255d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77255fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77255f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772560: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x772565u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 772565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772566: call 0x90c850 */
  esp -= 4; W32(esp, 0x77256bu); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 77256b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 772571: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772574: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 772577: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772579: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 77257c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 77257e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772580: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772582: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 772585: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772588: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77258a: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77258d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772592: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 772595: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772598: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77259a: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 77259d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77259f: call 0x770a00 */
  esp -= 4; W32(esp, 0x7725a4u); SPILL(); f_770a00(); if (g_unwind) return; RELOAD();
/* 7725a4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7725a7: mov eax, dword ptr [0xa07734] */
  eax = R32((uint32_t)(0xa07734u));
/* 7725ac: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7725af: mov ecx, dword ptr [0xa07730] */
  ecx = R32((uint32_t)(0xa07730u));
/* 7725b5: mov edx, dword ptr [0xa0772c] */
  edx = R32((uint32_t)(0xa0772cu));
/* 7725bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7725bc: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7725bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7725c0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7725c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7725c4: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7725c7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7725ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7725cb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7725ce: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7725d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7725d2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7725d5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7725d8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7725db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7725ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7725dd: /* 7725dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7725de: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7725e5: call 0x90d820 */
  esp -= 4; W32(esp, 0x7725eau); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 7725ea: mov edi, eax */
  edi = eax;
/* 7725ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7725ee: je 0x7728d5 */
  if (zf) goto L_7728d5;
L_7725f4: /* 7725f4: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7725f8: je 0x7728d5 */
  if (zf) goto L_7728d5;
L_7725fe: /* 7725fe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772601: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772604: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772605: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 772609: call 0x90be60 */
  esp -= 4; W32(esp, 0x77260eu); SPILL(); f_90be60(); if (g_unwind) return; RELOAD();
/* 77260e: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 772611: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772613: call 0x90d940 */
  esp -= 4; W32(esp, 0x772618u); SPILL(); f_90d940(); if (g_unwind) return; RELOAD();
/* 772618: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77261b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77261c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77261d: call 0x90da60 */
  esp -= 4; W32(esp, 0x772622u); SPILL(); f_90da60(); if (g_unwind) return; RELOAD();
/* 772622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772623: call 0x90dc30 */
  esp -= 4; W32(esp, 0x772628u); SPILL(); f_90dc30(); if (g_unwind) return; RELOAD();
/* 772628: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 77262b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77262c: call 0x90dc20 */
  esp -= 4; W32(esp, 0x772631u); SPILL(); f_90dc20(); if (g_unwind) return; RELOAD();
/* 772631: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 772634: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772637: mov ecx, dword ptr [0xa0771c] */
  ecx = R32((uint32_t)(0xa0771cu));
/* 77263d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772640: mov edx, dword ptr [0xa07718] */
  edx = R32((uint32_t)(0xa07718u));
/* 772646: mov eax, dword ptr [0xa07714] */
  eax = R32((uint32_t)(0xa07714u));
/* 77264b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77264c: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77264f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772651: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772654: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772658: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77265b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 77265e: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772662: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772665: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772668: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77266b: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 77266e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772671: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772674: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772677: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 77267a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77267d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772680: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772683: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772686: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772689: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77268c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77268f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772692: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772695: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772698: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77269au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77269a: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7726a0: mov eax, dword ptr [0xa07740] */
  eax = R32((uint32_t)(0xa07740u));
/* 7726a5: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7726ab: mov ecx, dword ptr [0xa0773c] */
  ecx = R32((uint32_t)(0xa0773cu));
/* 7726b1: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7726b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7726b5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726b7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7726ba: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7726c0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7726c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726c5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7726c8: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7726cb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7726ce: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7726d4: fchs  */
  ST0 = -ST0;
/* 7726d6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7726dc: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7726df: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726e1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7726e4: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7726ea: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7726ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7726ef: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7726f2: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7726f5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7726f8: mov edx, dword ptr [0xa07738] */
  edx = R32((uint32_t)(0xa07738u));
/* 7726fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7726ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772700: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 772703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772704: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 772707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772708: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x77270au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77270a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77270d: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772710: mov edx, dword ptr [0xa07728] */
  edx = R32((uint32_t)(0xa07728u));
/* 772716: mov eax, dword ptr [0xa07724] */
  eax = R32((uint32_t)(0xa07724u));
/* 77271b: mov ecx, dword ptr [0xa07720] */
  ecx = R32((uint32_t)(0xa07720u));
/* 772721: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772724: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772727: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 77272a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77272d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772730: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772731: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772734: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772738: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77273b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77273d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772740: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 772743: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772746: fst dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0);
/* 772749: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77274f: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772755: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 772758: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77275a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77275d: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772763: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772765: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 772767: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77276a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77276c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77276f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772771: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772773: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772775: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772778: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 77277b: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 772781: fchs  */
  ST0 = -ST0;
/* 772783: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772789: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77278c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77278e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772791: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772797: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 772799: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 77279b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77279e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727a0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7727a3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7727a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7727a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7727a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7727a9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7727ac: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727af: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7727b2: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7727b5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7727b8: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727bb: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7727be: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7727c0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7727c3: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7727c6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7727c9: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 7727cc: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7727d2: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7727d8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7727db: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727dd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7727e0: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7727e6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7727e8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7727ea: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7727ed: mov ecx, dword ptr [0xa07734] */
  ecx = R32((uint32_t)(0xa07734u));
/* 7727f3: mov edx, dword ptr [0xa07730] */
  edx = R32((uint32_t)(0xa07730u));
/* 7727f9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7727fb: mov eax, dword ptr [0xa0772c] */
  eax = R32((uint32_t)(0xa0772cu));
/* 772800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772802: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772806: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 772809: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77280b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77280c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77280e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772811: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 772814: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772815: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 772818: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 77281e: fchs  */
  ST0 = -ST0;
/* 772820: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772826: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772829: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77282b: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 77282e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 772834: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 772836: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 772838: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77283b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77283d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 772840: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772842: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772844u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772844: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 772846: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772847: call 0x90d810 */
  esp -= 4; W32(esp, 0x77284cu); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 77284c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77284d: call 0x90bda0 */
  esp -= 4; W32(esp, 0x772852u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 772852: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 772855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772857: call 0x90e1f0 */
  esp -= 4; W32(esp, 0x77285cu); SPILL(); f_90e1f0(); if (g_unwind) return; RELOAD();
/* 77285c: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 772862: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 772868: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77286d: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772870: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772875: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77287a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77287c: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77287f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772880: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772883: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772887: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77288a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 77288d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77288f: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772892: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772895: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772898: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77289a: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 77289d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7728a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7728a2: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 7728a8: fchs  */
  ST0 = -ST0;
/* 7728aa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7728b0: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7728b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728b5: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7728b8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7728bb: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7728be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728c0: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 7728c3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7728c6: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7728c9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7728cb: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 7728ce: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7728d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7728d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7728d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7728d5: /* 7728d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7728d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7728d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7728e0: call 0x90fe00 */
  esp -= 4; W32(esp, 0x7728e5u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 7728e5: mov ebx, eax */
  ebx = eax;
/* 7728e7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7728e9: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_7728ef: /* 7728ef: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 7728f5: mov eax, dword ptr [ecx + 0x15220] */
  eax = R32((uint32_t)(ecx + 0x15220u));
/* 7728fb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7728fe: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_772904: /* 772904: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772905: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 772909: call 0x90fe20 */
  esp -= 4; W32(esp, 0x77290eu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
L_77290e: /* 77290e: mov edi, eax */
  edi = eax;
/* 772910: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772912: je 0x7729d7 */
  if (zf) goto L_7729d7;
L_772918: /* 772918: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77291b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77291c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77291d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77291e: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x772923u); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 772923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772924: call 0x6cac77 */
  esp -= 4; W32(esp, 0x772929u); SPILL(); f_6cac77(); if (g_unwind) return; RELOAD();
/* 772929: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77292c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77292d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77292e: call 0x90fe60 */
  esp -= 4; W32(esp, 0x772933u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 772933: jmp 0x77290e */
  goto L_77290e;
L_7729d7: /* 7729d7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7729da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7729db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7729e2: call 0x90f8c0 */
  esp -= 4; W32(esp, 0x7729e7u); SPILL(); f_90f8c0(); if (g_unwind) return; RELOAD();
/* 7729e7: mov edi, eax */
  edi = eax;
/* 7729e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7729eb: je 0x772adb */
  if (zf) goto L_772adb;
L_7729f1: /* 7729f1: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 7729f7: mov eax, dword ptr [edx + 0x15220] */
  eax = R32((uint32_t)(edx + 0x15220u));
/* 7729fd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a00: je 0x772adb */
  if (zf) goto L_772adb;
L_772a06: /* 772a06: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a0b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 772a0f: call 0x90f8e0 */
  esp -= 4; W32(esp, 0x772a14u); SPILL(); f_90f8e0(); if (g_unwind) return; RELOAD();
/* 772a14: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 772a17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a19: call 0x90f910 */
  esp -= 4; W32(esp, 0x772a1eu); SPILL(); f_90f910(); if (g_unwind) return; RELOAD();
/* 772a1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a1f: call 0x90f940 */
  esp -= 4; W32(esp, 0x772a24u); SPILL(); f_90f940(); if (g_unwind) return; RELOAD();
/* 772a24: fmul dword ptr [0xa076ec] */
  ST0 = ST0 * (F32((uint32_t)(0xa076ecu)));
/* 772a2a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772a2d: mov edx, dword ptr [0xa076f8] */
  edx = R32((uint32_t)(0xa076f8u));
/* 772a33: mov eax, dword ptr [0xa076f4] */
  eax = R32((uint32_t)(0xa076f4u));
/* 772a38: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a3a: mov ecx, dword ptr [0xa076f0] */
  ecx = R32((uint32_t)(0xa076f0u));
/* 772a40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a42: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 772a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a46: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772a49: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 772a4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a4f: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a53: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 772a56: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772a59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a5b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 772a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772a60: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772a63: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772a66: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772a69: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772a6c: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772a6f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772a72: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772a75: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772a78: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772a7b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772a7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772a7d: test byte ptr [edi + 0x1a0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1a0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a84: je 0x772adb */
  if (zf) goto L_772adb;
L_772a86: /* 772a86: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 772a89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a8b: call 0x90f950 */
  esp -= 4; W32(esp, 0x772a90u); SPILL(); f_90f950(); if (g_unwind) return; RELOAD();
/* 772a90: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772a93: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772a99: mov edx, dword ptr [0xa0774c] */
  edx = R32((uint32_t)(0xa0774cu));
/* 772a9f: mov eax, dword ptr [0xa07748] */
  eax = R32((uint32_t)(0xa07748u));
/* 772aa4: mov ecx, dword ptr [0xa07744] */
  ecx = R32((uint32_t)(0xa07744u));
/* 772aaa: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772aad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772aaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772ab0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772ab3: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 772ab6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772ab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aba: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ac0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772ac4: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 772ac7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772aca: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772acd: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ad3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 772ad6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772ad9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772adbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772adb: /* 772adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772adc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 772ae3: call 0x90d640 */
  esp -= 4; W32(esp, 0x772ae8u); SPILL(); f_90d640(); if (g_unwind) return; RELOAD();
/* 772ae8: mov edi, eax */
  edi = eax;
/* 772aea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772aec: je 0x772d49 */
  if (zf) goto L_772d49;
L_772af2: /* 772af2: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772af6: je 0x772d49 */
  if (zf) goto L_772d49;
L_772afc: /* 772afc: mov eax, dword ptr [0xa076e8] */
  eax = R32((uint32_t)(0xa076e8u));
/* 772b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b02: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 772b06: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 772b09: call 0x90d680 */
  esp -= 4; W32(esp, 0x772b0eu); SPILL(); f_90d680(); if (g_unwind) return; RELOAD();
/* 772b0e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 772b11: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 772b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b15: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 772b18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b1a: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b1fu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b20: call 0x90c050 */
  esp -= 4; W32(esp, 0x772b25u); SPILL(); f_90c050(); if (g_unwind) return; RELOAD();
/* 772b25: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b28: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772b2b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772b2e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b32: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772b35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b38: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 772b3b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772b3e: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b41: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b44: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b49: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 772b4c: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b4f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772b55: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b58: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b5a: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 772b5d: call 0x90be40 */
  esp -= 4; W32(esp, 0x772b62u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 772b62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 772b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b66: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 772b69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b6d: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b72u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b73: call 0x90bf50 */
  esp -= 4; W32(esp, 0x772b78u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 772b78: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 772b7b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 772b7d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b82: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b87: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b8c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772b8e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b92: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772b95: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b99: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772b9c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 772b9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772ba1: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772ba4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772ba7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 772baa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772bac: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772baf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772bb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772bb4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772bb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772bb6: xor edi, edi */
  edi = 0;
/* 772bb8: jmp 0x772bc0 */
  goto L_772bc0;
L_772bc0: /* 772bc0: cmp edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 772bc3: jge 0x772d49 */
  if ((sf == of)) goto L_772d49;
L_772bc9: /* 772bc9: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772bcc: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 772bcf: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bd2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 772bd5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bda: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bdf: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772be4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772be8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772beb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772bee: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772bf2: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bf5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772bf8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772bfb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772bfe: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c01: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772c04: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c07: fild dword ptr [ebp - 0x54] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 772c0a: fmul qword ptr [0xa07f28] */
  ST0 = ST0 * (F64((uint32_t)(0xa07f28u)));
/* 772c10: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 772c13: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 772c17: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772c19: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c1e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772c21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c23: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c26: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c29: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772c2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c2e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c31: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c34: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772c37: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c39: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c3c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772c43: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c45: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c48: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 772c4a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772c4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c4f: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c52: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c55: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772c58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c5a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c5d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c60: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772c63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c65: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772c6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772c71: je 0x772c8c */
  if (zf) goto L_772c8c;
L_772c73: /* 772c73: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c78: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772c7f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772c83: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 772c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772c8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772c8c: /* 772c8c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 772c8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 772c92: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 772c95: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 772c9b: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 772ca1: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 772ca7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 772ca8: jmp 0x772bc0 */
  goto L_772bc0;
L_772d49: /* 772d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772d4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 772d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 772d56: mov esp, ebp */
  esp = ebp;
/* 772d58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 772d59: ret  */
  esp += 4; SPILL(); return;
}

void f_772935(void) {
  LOAD_REGS();
L_772935: /* 772935: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 772938: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77293d: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 772943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772944: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 77294a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77294fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77294f(); return;
}

void f_77294f(void) {
  LOAD_REGS();
L_77294f: /* 77294f: push 0xa07f7c */
  { uint32_t v = 0xa07f7cu; esp -= 4; W32(esp, v); }
/* 772954: push 0xac4710 */
  { uint32_t v = 0xac4710u; esp -= 4; W32(esp, v); }
/* 772959: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77295fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77295f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772964: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772966: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77296bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77296b(); return;
}

void f_77296b(void) {
  LOAD_REGS();
L_77296b: /* 77296b: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 77296e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 772973: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 772979: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77297a: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 772980: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772985u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772985(); return;
}

void f_772985(void) {
  LOAD_REGS();
L_772985: /* 772985: push 0xa07f5c */
  { uint32_t v = 0xa07f5cu; esp -= 4; W32(esp, v); }
/* 77298a: push 0xac4718 */
  { uint32_t v = 0xac4718u; esp -= 4; W32(esp, v); }
/* 77298f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772995u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772995: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772998: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77299a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77299c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7729a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7729a1(); return;
}

void f_7729a1(void) {
  LOAD_REGS();
L_7729a1: /* 7729a1: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7729a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7729a9: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7729af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7729b0: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 7729b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7729bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7729bb(); return;
}

void f_7729bb(void) {
  LOAD_REGS();
L_7729bb: /* 7729bb: push 0xa07f34 */
  { uint32_t v = 0xa07f34u; esp -= 4; W32(esp, v); }
/* 7729c0: push 0xac4720 */
  { uint32_t v = 0xac4720u; esp -= 4; W32(esp, v); }
/* 7729c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7729cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7729cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7729ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7729d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7729d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7729d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7729d7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7729da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7729db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7729e2: call 0x90f8c0 */
  esp -= 4; W32(esp, 0x7729e7u); SPILL(); f_90f8c0(); if (g_unwind) return; RELOAD();
/* 7729e7: mov edi, eax */
  edi = eax;
/* 7729e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7729eb: je 0x772adb */
  if (zf) goto L_772adb;
L_7729f1: /* 7729f1: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 7729f7: mov eax, dword ptr [edx + 0x15220] */
  eax = R32((uint32_t)(edx + 0x15220u));
/* 7729fd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a00: je 0x772adb */
  if (zf) goto L_772adb;
L_772a06: /* 772a06: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a0b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 772a0f: call 0x90f8e0 */
  esp -= 4; W32(esp, 0x772a14u); SPILL(); f_90f8e0(); if (g_unwind) return; RELOAD();
/* 772a14: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 772a17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a19: call 0x90f910 */
  esp -= 4; W32(esp, 0x772a1eu); SPILL(); f_90f910(); if (g_unwind) return; RELOAD();
/* 772a1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a1f: call 0x90f940 */
  esp -= 4; W32(esp, 0x772a24u); SPILL(); f_90f940(); if (g_unwind) return; RELOAD();
/* 772a24: fmul dword ptr [0xa076ec] */
  ST0 = ST0 * (F32((uint32_t)(0xa076ecu)));
/* 772a2a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772a2d: mov edx, dword ptr [0xa076f8] */
  edx = R32((uint32_t)(0xa076f8u));
/* 772a33: mov eax, dword ptr [0xa076f4] */
  eax = R32((uint32_t)(0xa076f4u));
/* 772a38: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a3a: mov ecx, dword ptr [0xa076f0] */
  ecx = R32((uint32_t)(0xa076f0u));
/* 772a40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a42: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 772a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a46: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772a49: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 772a4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772a4f: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 772a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772a53: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 772a56: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772a59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772a5b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 772a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772a60: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772a63: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772a66: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772a69: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772a6c: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772a6f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772a72: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772a75: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772a78: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772a7b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772a7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772a7d: test byte ptr [edi + 0x1a0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1a0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772a84: je 0x772adb */
  if (zf) goto L_772adb;
L_772a86: /* 772a86: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 772a89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772a8b: call 0x90f950 */
  esp -= 4; W32(esp, 0x772a90u); SPILL(); f_90f950(); if (g_unwind) return; RELOAD();
/* 772a90: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772a93: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772a99: mov edx, dword ptr [0xa0774c] */
  edx = R32((uint32_t)(0xa0774cu));
/* 772a9f: mov eax, dword ptr [0xa07748] */
  eax = R32((uint32_t)(0xa07748u));
/* 772aa4: mov ecx, dword ptr [0xa07744] */
  ecx = R32((uint32_t)(0xa07744u));
/* 772aaa: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772aad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772aaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772ab0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 772ab3: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 772ab6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772ab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772aba: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ac0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772ac4: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 772ac7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 772aca: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772acd: fmul dword ptr [0xa076e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa076e8u)));
/* 772ad3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 772ad6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 772ad9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772adbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772adb: /* 772adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 772adc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 772ae3: call 0x90d640 */
  esp -= 4; W32(esp, 0x772ae8u); SPILL(); f_90d640(); if (g_unwind) return; RELOAD();
/* 772ae8: mov edi, eax */
  edi = eax;
/* 772aea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772aec: je 0x772d49 */
  if (zf) goto L_772d49;
L_772af2: /* 772af2: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 772af6: je 0x772d49 */
  if (zf) goto L_772d49;
L_772afc: /* 772afc: mov eax, dword ptr [0xa076e8] */
  eax = R32((uint32_t)(0xa076e8u));
/* 772b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b02: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 772b06: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 772b09: call 0x90d680 */
  esp -= 4; W32(esp, 0x772b0eu); SPILL(); f_90d680(); if (g_unwind) return; RELOAD();
/* 772b0e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 772b11: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 772b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b15: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 772b18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b1a: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b1fu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b20: call 0x90c050 */
  esp -= 4; W32(esp, 0x772b25u); SPILL(); f_90c050(); if (g_unwind) return; RELOAD();
/* 772b25: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b28: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 772b2b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 772b2e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b32: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 772b35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b38: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 772b3b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772b3e: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b41: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772b44: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b49: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 772b4c: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772b4f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 772b52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772b55: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 772b58: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 772b5a: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 772b5d: call 0x90be40 */
  esp -= 4; W32(esp, 0x772b62u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 772b62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 772b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b66: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 772b69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 772b6d: call 0x90d630 */
  esp -= 4; W32(esp, 0x772b72u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 772b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b73: call 0x90bf50 */
  esp -= 4; W32(esp, 0x772b78u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 772b78: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 772b7b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 772b7d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b82: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 772b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772b87: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772b8c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772b8e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772b92: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772b95: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772b99: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772b9c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 772b9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772ba1: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772ba4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772ba7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 772baa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772bac: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772baf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772bb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772bb4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772bb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772bb6: xor edi, edi */
  edi = 0;
/* 772bb8: jmp 0x772bc0 */
  goto L_772bc0;
L_772bc0: /* 772bc0: cmp edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 772bc3: jge 0x772d49 */
  if ((sf == of)) goto L_772d49;
L_772bc9: /* 772bc9: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772bcc: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 772bcf: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bd2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 772bd5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bda: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bdf: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772be4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772be8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772beb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772bee: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772bf2: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bf5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772bf8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772bfb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772bfe: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c01: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772c04: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c07: fild dword ptr [ebp - 0x54] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 772c0a: fmul qword ptr [0xa07f28] */
  ST0 = ST0 * (F64((uint32_t)(0xa07f28u)));
/* 772c10: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 772c13: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 772c17: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772c19: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c1e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772c21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c23: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c26: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c29: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772c2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c2e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c31: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c34: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772c37: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c39: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c3c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772c43: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c45: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c48: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 772c4a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772c4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c4f: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c52: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c55: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772c58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c5a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c5d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c60: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772c63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c65: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772c6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772c71: je 0x772c8c */
  if (zf) goto L_772c8c;
L_772c73: /* 772c73: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c78: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772c7f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772c83: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 772c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772c8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772c8c: /* 772c8c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 772c8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 772c92: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 772c95: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 772c9b: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 772ca1: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 772ca7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 772ca8: jmp 0x772bc0 */
  goto L_772bc0;
L_772d49: /* 772d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772d4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 772d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 772d56: mov esp, ebp */
  esp = ebp;
/* 772d58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 772d59: ret  */
  esp += 4; SPILL(); return;
}

void f_772bba(void) {
  LOAD_REGS();
L_772bba: /* 772bba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_772bc0: /* 772bc0: cmp edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 772bc3: jge 0x772d49 */
  if ((sf == of)) goto L_772d49;
L_772bc9: /* 772bc9: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 772bcc: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 772bcf: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bd2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 772bd5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bda: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772bdf: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 772be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772be4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 772be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772be8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772beb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 772bee: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 772bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772bf2: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772bf5: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 772bf8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772bfb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 772bfe: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c01: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 772c04: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c07: fild dword ptr [ebp - 0x54] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 772c0a: fmul qword ptr [0xa07f28] */
  ST0 = ST0 * (F64((uint32_t)(0xa07f28u)));
/* 772c10: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 772c13: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 772c17: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 772c19: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c1c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c1e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 772c21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c23: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c26: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c29: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 772c2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c2e: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c31: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c34: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 772c37: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c39: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c3c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 772c43: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 772c45: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 772c48: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 772c4a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 772c4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c4f: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 772c52: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 772c55: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 772c58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c5a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 772c5d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 772c60: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 772c63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 772c65: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 772c68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 772c6b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 772c6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 772c6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 772c71: je 0x772c8c */
  if (zf) goto L_772c8c;
L_772c73: /* 772c73: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c78: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 772c7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772c7f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 772c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772c83: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 772c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 772c8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x772c8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_772c8c: /* 772c8c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 772c8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 772c92: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 772c95: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 772c9b: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 772ca1: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 772ca7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 772ca8: jmp 0x772bc0 */
  goto L_772bc0;
L_772d49: /* 772d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772d4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 772d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 772d56: mov esp, ebp */
  esp = ebp;
/* 772d58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 772d59: ret  */
  esp += 4; SPILL(); return;
}

void f_772cad(void) {
  LOAD_REGS();
L_772cad: /* 772cad: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 772cb0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 772cb5: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 772cb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772cb9: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 772cbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772cc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772cc1(); return;
}

void f_772cc1(void) {
  LOAD_REGS();
L_772cc1: /* 772cc1: push 0xa07f0c */
  { uint32_t v = 0xa07f0cu; esp -= 4; W32(esp, v); }
/* 772cc6: push 0xac4728 */
  { uint32_t v = 0xac4728u; esp -= 4; W32(esp, v); }
/* 772ccb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772cd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772cd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772cd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772cd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772cddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772cdd(); return;
}

void f_772cdd(void) {
  LOAD_REGS();
L_772cdd: /* 772cdd: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 772ce3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 772ce8: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 772cee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 772cef: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 772cf5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772cfau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772cfa(); return;
}

void f_772cfa(void) {
  LOAD_REGS();
L_772cfa: /* 772cfa: push 0xa07ee8 */
  { uint32_t v = 0xa07ee8u; esp -= 4; W32(esp, v); }
/* 772cff: push 0xac4730 */
  { uint32_t v = 0xac4730u; esp -= 4; W32(esp, v); }
/* 772d04: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772d0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772d0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772d11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772d16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772d16(); return;
}

void f_772d16(void) {
  LOAD_REGS();
L_772d16: /* 772d16: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 772d1c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 772d21: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 772d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 772d25: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 772d28: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772d2du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_772d2d(); return;
}

void f_772d2d(void) {
  LOAD_REGS();
L_772d2d: /* 772d2d: push 0xa07ec0 */
  { uint32_t v = 0xa07ec0u; esp -= 4; W32(esp, v); }
/* 772d32: push 0xac4738 */
  { uint32_t v = 0xac4738u; esp -= 4; W32(esp, v); }
/* 772d37: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x772d3du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 772d3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 772d40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772d42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 772d44: call 0x99caf8 */
  esp -= 4; W32(esp, 0x772d49u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 772d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 772d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 772d4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 772d4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 772d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 772d56: mov esp, ebp */
  esp = ebp;
/* 772d58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 772d59: ret  */
  esp += 4; SPILL(); return;
}

void f_773080(void) {
  LOAD_REGS();
L_773080: /* 773080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 773081: mov ebp, esp */
  ebp = esp;
/* 773083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 773085: push 0x9cc32b */
  { uint32_t v = 0x9cc32bu; esp -= 4; W32(esp, v); }
/* 77308a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 773090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 773091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 773098: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77309e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7730a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7730a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7730a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7730a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7730a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7730a9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7730ac: xor esi, esi */
  esi = 0;
/* 7730ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7730af: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7730b5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7730b8: call 0x6c460b */
  esp -= 4; W32(esp, 0x7730bdu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 7730bd: test dword ptr [ebp + 0xc], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7730c4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7730c8: je 0x774624 */
  if (zf) goto L_774624;
L_7730ce: /* 7730ce: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7730d1: cmp esi, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7730d4: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 7730d7: jge 0x773465 */
  if ((sf == of)) goto L_773465;
L_7730dd: /* 7730dd: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 7730e0: imul esi, esi, 0x4c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x4cu);
  esi = (uint32_t)r;
  }
/* 7730e3: fld dword ptr [esi + ecx + 0x48] */
  { double v = F32((uint32_t)(esi + ecx + 0x48u)); FPUSH(v); }
/* 7730e7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7730ed: mov edx, dword ptr [esi + ecx + 0x40] */
  edx = R32((uint32_t)(esi + ecx + 0x40u));
/* 7730f1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7730f3: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7730f6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7730f9: mov dword ptr [ebp - 0x144], edx */
  W32((uint32_t)(ebp + 0xfffffebcu), edx);
/* 7730ff: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 773102: mov ecx, 0x10 */
  ecx = 0x10u;
/* 773107: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 77310d: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 773113: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 773119: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 77311b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 773121: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 773124: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 773127: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 77312a: xor eax, eax */
  eax = 0;
/* 77312c: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773132: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 773136: fmul dword ptr [ebp - 0x108] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffef8u)));
/* 77313c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77313f: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 773145: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77314b: fmul dword ptr [ebp - 0x104] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffefcu)));
/* 773151: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 773157: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77315d: fmul dword ptr [ebp - 0x100] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff00u)));
/* 773163: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 773169: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_773170: /* 773170: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773173: jge 0x77344c */
  if ((sf == of)) goto L_77344c;
L_773179: /* 773179: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 77317c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77317f: lea eax, [esi + 0xa07990] */
  eax = (uint32_t)(esi + 0xa07990u);
/* 773185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 773186: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 773189: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77318a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77318fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77318f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 773192: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773198: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77319b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77319e: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 7731a4: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7731aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7731ab: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7731ae: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 7731b4: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7731ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7731bb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7731be: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 7731c4: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 7731ca: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 7731d0: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x7731d6u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7731d6: lea ecx, [esi + 0xa0799c] */
  ecx = (uint32_t)(esi + 0xa0799cu);
/* 7731dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7731dd: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7731e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7731e1: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7731e6u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7731e6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7731e9: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7731ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7731f2: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7731f5: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7731f8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7731fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7731ff: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 773202: lea ecx, [ebp - 0x1f0] */
  ecx = (uint32_t)(ebp + 0xfffffe10u);
/* 773208: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77320e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77320f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 773212: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 773215: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 773218: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 77321b: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x773221u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 773221: fld dword ptr [0xa07704] */
  { double v = F32((uint32_t)(0xa07704u)); FPUSH(v); }
/* 773227: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 77322d: call 0x99c958 */
  esp -= 4; W32(esp, 0x773232u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773232: fld dword ptr [0xa07700] */
  { double v = F32((uint32_t)(0xa07700u)); FPUSH(v); }
/* 773238: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 77323e: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 773240: call 0x99c958 */
  esp -= 4; W32(esp, 0x773245u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773245: fld dword ptr [0xa076fc] */
  { double v = F32((uint32_t)(0xa076fcu)); FPUSH(v); }
/* 77324b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773251: mov byte ptr [ebp - 0x4c], al */
  W8((uint32_t)(ebp + 0xffffffb4u), (eax & 0xffu));
/* 773254: call 0x99c958 */
  esp -= 4; W32(esp, 0x773259u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773259: mov dl, byte ptr [ebp - 0x4c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffb4u))) & 0xffu);
/* 77325c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 77325f: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 773262: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 773265: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 773268: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 77326b: mov dword ptr [ebp - 0xd8], eax */
  W32((uint32_t)(ebp + 0xffffff28u), eax);
/* 773271: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 773277: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 77327d: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773283: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 773286: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 77328a: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 773290: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 77329a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 77329d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7732a0: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7732a3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7732a6: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 7732a9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7732ab: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7732ad: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7732af: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7732b2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7732b4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7732b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7732b9: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7732bc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7732bf: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7732c2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7732c5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7732c8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7732cb: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7732ce: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7732d1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7732d4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7732d6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7732d8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7732da: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7732dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7732de: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7732e1: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7732e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7732e7: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7732ea: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7732ed: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7732f0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7732f3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7732f6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7732f8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7732fa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7732fc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7732fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773300: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773303: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773306: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773309: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 77330c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77330f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773312: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773315: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773318: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77331a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77331c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77331e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773320: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773322: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773324: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773326: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773328: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 77332b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 77332e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773331: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 773334: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 773337: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 77333a: mov ebx, dword ptr [ebp - 0x78] */
  ebx = R32((uint32_t)(ebp + 0xffffff88u));
/* 77333d: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 773343: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 773346: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 77334c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77334f: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 773355: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 77335b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 77335e: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773364: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 77336e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 773371: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 773374: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 773377: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 77337d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77337f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773381: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773383: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773386: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773388: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 77338b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77338d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773390: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773393: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773396: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773399: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 77339c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77339f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7733a2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7733a5: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7733a8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7733aa: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7733ac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733ae: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7733b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7733b5: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7733b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7733bb: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7733be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7733c1: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7733c4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7733c7: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7733ca: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7733cc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7733ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7733d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7733d7: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7733da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7733dd: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7733e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7733e3: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7733e6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7733e9: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7733ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7733ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7733f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7733f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7733f6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7733f8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7733fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7733fc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7733ff: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773402: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773405: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 773408: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 773409: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77340c: mov edx, esp */
  edx = esp;
/* 77340e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773410: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773413: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 773419: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 77341c: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 773422: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773425: mov eax, esp */
  eax = esp;
/* 773427: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 773429: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 77342f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 773432: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 773435: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 77343b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773440u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773440: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 773443: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 773444: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773447: jmp 0x773170 */
  goto L_773170;
L_77344c: /* 77344c: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773452: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 773456: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x77345cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 77345c: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77345f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 773460: jmp 0x7730ce */
  goto L_7730ce;
L_773465: /* 773465: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 77346c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_773470: /* 773470: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773473: cmp edx, dword ptr [eax + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773476: jge 0x7737ad */
  if ((sf == of)) goto L_7737ad;
L_77347c: /* 77347c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 77347f: mov ebx, edx */
  ebx = edx;
/* 773481: imul ebx, ebx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x44u);
  ebx = (uint32_t)r;
  }
/* 773484: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 773486: mov ecx, 0x10 */
  ecx = 0x10u;
/* 77348b: mov esi, ebx */
  esi = ebx;
/* 77348d: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 773493: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 773495: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 773499: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77349f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7734a6: fmul dword ptr [ebp - 0x108] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffef8u)));
/* 7734ac: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 7734b2: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 7734b8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7734be: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7734c4: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 7734ca: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7734d0: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7734d6: jmp 0x7734e0 */
  goto L_7734e0;
L_7734e0: /* 7734e0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7734e3: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7734e6: jge 0x773792 */
  if ((sf == of)) goto L_773792;
L_7734ec: /* 7734ec: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7734ef: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7734f2: lea eax, [esi + 0xa07750] */
  eax = (uint32_t)(esi + 0xa07750u);
/* 7734f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7734f9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7734fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7734fd: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x773502u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 773502: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773508: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 77350b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77350e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 773511: lea edx, [esi + 0xa0775c] */
  edx = (uint32_t)(esi + 0xa0775cu);
/* 773517: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 773518: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77351a: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 77351d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77351e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 773521: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 773524: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 773526: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 773529: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77352c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77352e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 773531: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 773533: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x773538u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 773538: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77353e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 773541: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 773544: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 773547: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 773549: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 77354c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77354f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 773551: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 773554: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 773557: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 773559: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77355c: fld dword ptr [0xa07704] */
  { double v = F32((uint32_t)(0xa07704u)); FPUSH(v); }
/* 773562: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773568: call 0x99c958 */
  esp -= 4; W32(esp, 0x77356du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 77356d: fld dword ptr [0xa07700] */
  { double v = F32((uint32_t)(0xa07700u)); FPUSH(v); }
/* 773573: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773579: mov byte ptr [ebp - 0x4c], al */
  W8((uint32_t)(ebp + 0xffffffb4u), (eax & 0xffu));
/* 77357c: call 0x99c958 */
  esp -= 4; W32(esp, 0x773581u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773581: fld dword ptr [0xa076fc] */
  { double v = F32((uint32_t)(0xa076fcu)); FPUSH(v); }
/* 773587: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 77358d: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 773590: call 0x99c958 */
  esp -= 4; W32(esp, 0x773595u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773595: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 77359b: mov cl, byte ptr [ebp - 0x4c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffb4u))) & 0xffu);
/* 77359e: mov dl, byte ptr [ebp - 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 7735a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7735a3: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 7735a6: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7735a9: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 7735ac: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7735af: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 7735b2: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 7735b8: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 7735be: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7735c4: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7735c8: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7735ce: mov dword ptr [ebp - 0xa0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x3f800000u);
/* 7735d8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7735db: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7735de: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7735e1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7735e4: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 7735e7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735e9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7735eb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735ed: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7735f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735f2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7735f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735f7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7735fa: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7735fd: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773600: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773603: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773606: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773609: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77360c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77360f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773612: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773614: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773616: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773618: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77361a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77361c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77361f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773622: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773625: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773628: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77362b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 77362e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773631: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773634: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773636: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773638: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77363a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77363c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77363e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773641: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773644: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773647: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 77364a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77364d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773650: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773653: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773656: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773658: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77365a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77365c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77365e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773660: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773662: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773664: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773666: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773669: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 77366c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 77366f: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 773672: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 773675: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 773678: mov dword ptr [ebp - 0x13c], edx */
  W32((uint32_t)(ebp + 0xfffffec4u), edx);
/* 77367e: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 773681: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 773687: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 77368a: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 773690: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 773693: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 773699: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 77369f: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 7736a9: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7736ac: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 7736b2: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7736b5: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7736b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7736bb: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 7736c1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736c3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7736c5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736c7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7736ca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736cc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7736cf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736d1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7736d4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736d7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7736da: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736dd: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7736e0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736e3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7736e6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736e9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7736ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7736ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7736f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7736f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7736f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7736f6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7736f9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7736fc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7736ff: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773702: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773705: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773708: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77370b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 77370e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773710: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773712: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773714: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773716: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773718: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77371b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 77371e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773721: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773724: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773727: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 77372a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77372d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773730: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773732: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773734: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773736: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773738: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77373a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77373c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 77373e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773740: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773743: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773746: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773749: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77374c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77374d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773750: mov edx, esp */
  edx = esp;
/* 773752: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773754: mov eax, dword ptr [ebp - 0x13c] */
  eax = R32((uint32_t)(ebp + 0xfffffec4u));
/* 77375a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 77375d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773760: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 773766: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 77376c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77376f: mov ecx, esp */
  ecx = esp;
/* 773771: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773773: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 773779: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 77377c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77377f: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773785: call 0x6cc74d */
  esp -= 4; W32(esp, 0x77378au); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 77378a: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 77378d: jmp 0x7734e0 */
  goto L_7734e0;
L_773792: /* 773792: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773798: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 77379c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7737a2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7737a2: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 7737a5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7737a8: jmp 0x773470 */
  goto L_773470;
L_7737ad: /* 7737ad: xor ebx, ebx */
  ebx = 0;
L_7737af: /* 7737af: cmp ebx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7737b2: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7737b5: jge 0x773b28 */
  if ((sf == of)) goto L_773b28;
L_7737bb: /* 7737bb: mov edx, dword ptr [eax + 0x64] */
  edx = R32((uint32_t)(eax + 0x64u));
/* 7737be: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 7737c1: fld dword ptr [edx + ecx*8 + 0x44] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0x44u)); FPUSH(v); }
/* 7737c5: mov eax, dword ptr [edx + ecx*8 + 0x40] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x40u));
/* 7737c9: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7737cf: lea esi, [edx + ecx*8] */
  esi = (uint32_t)(edx + ecx*8);
/* 7737d2: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 7737d5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7737da: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7737dd: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 7737e3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7737e6: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7737e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7737eb: xor eax, eax */
  eax = 0;
/* 7737ed: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 7737f3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7737f7: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7737fd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773800: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 773806: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 77380c: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773812: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 773818: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 77381e: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773824: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 77382a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_773830: /* 773830: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773833: jge 0x773b0f */
  if ((sf == of)) goto L_773b0f;
L_773839: /* 773839: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 77383c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77383f: lea ecx, [esi + 0xa07ab0] */
  ecx = (uint32_t)(esi + 0xa07ab0u);
/* 773845: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 773846: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 773849: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77384a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77384fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77384f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 773852: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773858: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77385b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77385e: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 773864: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77386a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77386b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 77386e: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 773874: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77387a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77387b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 77387e: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 773884: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 77388a: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 773890: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x773896u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 773896: lea edx, [esi + 0xa07abc] */
  edx = (uint32_t)(esi + 0xa07abcu);
/* 77389c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77389d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7738a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7738a1: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7738a6u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7738a6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7738a9: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7738b2: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7738b5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7738b8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7738bf: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7738c2: lea edx, [ebp - 0x1f0] */
  edx = (uint32_t)(ebp + 0xfffffe10u);
/* 7738c8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7738cf: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7738d2: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7738d5: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7738d8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7738db: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x7738e1u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7738e1: fld dword ptr [0xa07704] */
  { double v = F32((uint32_t)(0xa07704u)); FPUSH(v); }
/* 7738e7: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7738ed: call 0x99c958 */
  esp -= 4; W32(esp, 0x7738f2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7738f2: fld dword ptr [0xa07700] */
  { double v = F32((uint32_t)(0xa07700u)); FPUSH(v); }
/* 7738f8: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7738fe: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 773900: call 0x99c958 */
  esp -= 4; W32(esp, 0x773905u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773905: fld dword ptr [0xa076fc] */
  { double v = F32((uint32_t)(0xa076fcu)); FPUSH(v); }
/* 77390b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773911: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 773914: call 0x99c958 */
  esp -= 4; W32(esp, 0x773919u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773919: mov cl, byte ptr [ebp - 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 77391c: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 77391f: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 773922: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 773925: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 773928: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77392b: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 773931: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 773937: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* 77393d: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 773943: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 773946: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 77394a: mov dword ptr [ebp - 0xd0], ecx */
  W32((uint32_t)(ebp + 0xffffff30u), ecx);
/* 773950: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 77395a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 77395d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 773960: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 773963: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773966: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 773969: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77396b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 77396d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77396f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773972: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773974: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773977: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773979: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 77397c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77397f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773982: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773985: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773988: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77398b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77398e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773991: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773994: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773996: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773998: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77399a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77399c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77399e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739a1: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7739a4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739a7: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7739aa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739ad: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7739b0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739b3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7739b6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739b8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7739ba: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739bc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7739c0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739c3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7739c6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739c9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7739cc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739cf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7739d2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739d5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7739d8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739da: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7739dc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739de: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7739e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739e4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7739e6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7739e8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7739eb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7739ee: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7739f1: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7739f4: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 7739f7: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7739fa: mov ebx, dword ptr [ebp - 0x78] */
  ebx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7739fd: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 773a03: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 773a06: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 773a0c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 773a0f: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 773a15: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 773a1b: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 773a1e: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773a24: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 773a2e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773a31: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 773a34: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773a37: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 773a3d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a3f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773a41: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a43: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773a46: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a48: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773a4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a4d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773a50: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a53: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773a56: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a59: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773a5c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a5f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773a62: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a65: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773a68: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773a6a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773a6c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a6e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773a72: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a75: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773a78: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a7b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773a7e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a81: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773a84: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a87: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773a8a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773a8c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773a8e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a90: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773a94: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773a97: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773a9a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773a9d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773aa0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773aa3: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773aa6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773aa9: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773aac: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773aae: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773ab0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ab2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ab4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ab6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ab8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773aba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773abc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773abf: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773ac2: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773ac5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 773ac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 773ac9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773acc: mov edx, esp */
  edx = esp;
/* 773ace: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773ad0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773ad3: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 773ad9: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 773adc: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 773ae2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773ae5: mov eax, esp */
  eax = esp;
/* 773ae7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 773ae9: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 773aef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 773af2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 773af5: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773afb: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773b00u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773b00: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 773b03: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773b06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 773b07: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773b0a: jmp 0x773830 */
  goto L_773830;
L_773b0f: /* 773b0f: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773b15: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 773b19: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x773b1fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 773b1f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 773b22: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 773b23: jmp 0x7737af */
  goto L_7737af;
L_773b28: /* 773b28: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 773b2f: nop  */
L_773b30: /* 773b30: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773b33: cmp edx, dword ptr [eax + 0x74] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x74u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773b36: jge 0x774627 */
  if ((sf == of)) goto L_774627;
L_773b3c: /* 773b3c: mov ebx, edx */
  ebx = edx;
/* 773b3e: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 773b41: imul ebx, ebx, 0x58 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x58u);
  ebx = (uint32_t)r;
  }
/* 773b44: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 773b46: mov ecx, 0x10 */
  ecx = 0x10u;
/* 773b4b: mov esi, ebx */
  esi = ebx;
/* 773b4d: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 773b53: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 773b55: xor eax, eax */
  eax = 0;
/* 773b57: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 773b5d: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 773b61: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b67: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 773b6a: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 773b70: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 773b76: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b7c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 773b82: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 773b88: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b8e: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 773b94: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 773b97: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 773b99: jne 0x773fe3 */
  if (!zf) goto L_773fe3;
L_773b9f: /* 773b9f: nop  */
L_773ba0: /* 773ba0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 773ba3: cmp eax, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773ba6: jge 0x774609 */
  if ((sf == of)) goto L_774609;
L_773bac: /* 773bac: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 773baf: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773bb5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 773bb8: fmul dword ptr [edx + ecx*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx*4 + 0x8u)));
/* 773bbc: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 773bbf: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773bc5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 773bcf: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 773bd2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 773bd5: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773bdb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 773bde: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 773be1: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773be7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 773be9: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 773bef: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773bf2: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 773bf8: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 773bfb: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 773bfe: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 773c04: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 773c0a: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 773c10: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 773c16: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 773c1c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 773c1f: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 773c22: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 773c28: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c2a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773c2c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c2e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773c31: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c33: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773c36: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c38: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773c3b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c3e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773c41: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c44: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773c47: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c4a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773c4d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c50: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773c53: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c55: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c57: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c59: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773c5d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c60: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773c63: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c66: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773c69: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c6c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773c6f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c72: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773c75: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c77: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c79: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c7b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773c7f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c82: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773c85: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c88: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773c8b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c8e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773c91: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c94: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773c97: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c99: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c9b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c9d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ca1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ca3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773ca5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773ca7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773caa: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773cad: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773cb0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773cb3: mov edx, dword ptr [ebp - 0x184] */
  edx = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 773cb9: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 773cbc: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 773cc2: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 773cc8: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 773ccb: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 773cd1: mov dword ptr [ebp - 0x288], edx */
  W32((uint32_t)(ebp + 0xfffffd78u), edx);
/* 773cd7: fsub dword ptr [0xa07fe4] */
  ST0 = ST0 - (F32((uint32_t)(0xa07fe4u)));
/* 773cdd: lea edx, [ebp - 0x1d4] */
  edx = (uint32_t)(ebp + 0xfffffe2cu);
/* 773ce3: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 773ce6: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773cec: fstp dword ptr [ebp - 0x1d4] */
  WF32((uint32_t)(ebp + 0xfffffe2cu), ST0); FPOP();
/* 773cf2: mov dword ptr [ebp - 0x1c8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x3f800000u);
/* 773cfc: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773cff: fstp dword ptr [ebp - 0x1d0] */
  WF32((uint32_t)(ebp + 0xfffffe30u), ST0); FPOP();
/* 773d05: fstp dword ptr [ebp - 0x1cc] */
  WF32((uint32_t)(ebp + 0xfffffe34u), ST0); FPOP();
/* 773d0b: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 773d0e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773d11: lea edi, [ebp - 0x200] */
  edi = (uint32_t)(ebp + 0xfffffe00u);
/* 773d17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d19: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773d1b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d1d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773d20: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d22: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773d25: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d27: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773d2a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d2d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773d30: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d33: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773d36: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d39: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773d3c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d3f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773d42: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d44: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d48: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d4a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d4c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d4f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773d52: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d55: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773d58: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d5b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773d5e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d61: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773d64: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d66: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d6a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d6e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d71: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773d74: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d77: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773d7a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d7d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773d80: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d83: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773d86: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d88: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d8c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d90: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d92: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773d94: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773d96: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773d99: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773d9c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773d9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 773da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773da3: mov edx, esp */
  edx = esp;
/* 773da5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773da7: mov eax, dword ptr [ebp - 0x288] */
  eax = R32((uint32_t)(ebp + 0xfffffd78u));
/* 773dad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773db0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773db3: mov edx, dword ptr [ebp - 0x200] */
  edx = R32((uint32_t)(ebp + 0xfffffe00u));
/* 773db9: mov eax, dword ptr [ebp - 0x1fc] */
  eax = R32((uint32_t)(ebp + 0xfffffe04u));
/* 773dbf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773dc2: mov ecx, esp */
  ecx = esp;
/* 773dc4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773dc6: mov edx, dword ptr [ebp - 0x1f8] */
  edx = R32((uint32_t)(ebp + 0xfffffe08u));
/* 773dcc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 773dcf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 773dd2: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773dd8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773dddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773ddd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773de0: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 773de6: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 773dec: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 773def: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 773df5: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 773dfb: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773e01: mov dword ptr [ebp - 0x170], eax */
  W32((uint32_t)(ebp + 0xfffffe90u), eax);
/* 773e07: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 773e0d: mov dword ptr [ebp - 0x164], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x3f800000u);
/* 773e17: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 773e1a: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 773e1d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773e20: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 773e23: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 773e29: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e2b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773e2d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e2f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773e32: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e34: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773e37: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e39: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773e3c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e3f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773e42: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e45: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773e48: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e4b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773e4e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e51: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773e54: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e56: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e58: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e5a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773e5e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e61: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773e64: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e67: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773e6a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e6d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773e70: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e73: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773e76: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e78: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e7a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e7c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773e80: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e83: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773e86: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e89: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773e8c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e8f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773e92: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e95: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773e98: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e9a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e9c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e9e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ea0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ea2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ea4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773ea6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773ea8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773eab: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773eae: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773eb1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773eb4: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 773eba: fsub dword ptr [0xa07fe4] */
  ST0 = ST0 - (F32((uint32_t)(0xa07fe4u)));
/* 773ec0: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 773ec6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 773ec9: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 773ecf: mov dword ptr [ebp - 0x264], edx */
  W32((uint32_t)(ebp + 0xfffffd9cu), edx);
/* 773ed5: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 773edb: mov dword ptr [ebp - 0x1e4], edx */
  W32((uint32_t)(ebp + 0xfffffe1cu), edx);
/* 773ee1: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 773ee7: lea edx, [ebp - 0x1e4] */
  edx = (uint32_t)(ebp + 0xfffffe1cu);
/* 773eed: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773ef0: fstp dword ptr [ebp - 0x1dc] */
  WF32((uint32_t)(ebp + 0xfffffe24u), ST0); FPOP();
/* 773ef6: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773efc: mov dword ptr [ebp - 0x1d8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe28u), 0x3f800000u);
/* 773f06: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 773f09: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773f0c: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 773f0f: lea edi, [ebp - 0x220] */
  edi = (uint32_t)(ebp + 0xfffffde0u);
/* 773f15: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f17: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773f19: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f1b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773f1e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f20: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773f23: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f25: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773f28: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f2b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773f2e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f31: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773f34: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f37: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773f3a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f3d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773f40: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f42: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f44: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f4a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f4d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773f50: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f53: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773f56: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f59: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773f5c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f5f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773f62: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f64: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f66: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f6c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f6f: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773f72: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f75: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773f78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f7b: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773f7e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f81: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773f84: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f86: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f88: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f8e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f90: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773f92: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773f94: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773f97: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773f9a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773f9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 773f9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773fa1: mov edx, esp */
  edx = esp;
/* 773fa3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773fa5: mov eax, dword ptr [ebp - 0x264] */
  eax = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 773fab: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773fae: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773fb1: mov edx, dword ptr [ebp - 0x220] */
  edx = R32((uint32_t)(ebp + 0xfffffde0u));
/* 773fb7: mov eax, dword ptr [ebp - 0x21c] */
  eax = R32((uint32_t)(ebp + 0xfffffde4u));
/* 773fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773fc0: mov ecx, esp */
  ecx = esp;
/* 773fc2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773fc4: mov edx, dword ptr [ebp - 0x218] */
  edx = R32((uint32_t)(ebp + 0xfffffde8u));
/* 773fca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 773fcd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 773fd0: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773fd6: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773fdbu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773fdb: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 773fde: jmp 0x773ba0 */
  goto L_773ba0;
L_773fe3: /* 773fe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 773fe6: cmp eax, dword ptr [ebx + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773fe9: jge 0x774609 */
  if ((sf == of)) goto L_774609;
L_773fef: /* 773fef: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 773ff5: mov dword ptr [ebp - 0x20], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x10u);
/* 773ffc: lea esi, [ebp - 0x3c0] */
  esi = (uint32_t)(ebp + 0xfffffc40u);
L_774002: /* 774002: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 774005: js 0x774014 */
  if (sf) goto L_774014;
L_774007: /* 774007: mov ecx, esi */
  ecx = esi;
/* 774009: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77400bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77400b: mov eax, 0xc */
  eax = 0xcu;
/* 774010: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 774012: jmp 0x774002 */
  goto L_774002;
L_774014: /* 774014: lea ecx, [ebp - 0x2f4] */
  ecx = (uint32_t)(ebp + 0xfffffd0cu);
/* 77401a: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x774020u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 774020: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 774026: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* 77402d: lea esi, [ebp - 0x2d4] */
  esi = (uint32_t)(ebp + 0xfffffd2cu);
L_774033: /* 774033: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 774036: js 0x774045 */
  if (sf) goto L_774045;
L_774038: /* 774038: mov ecx, esi */
  ecx = esi;
/* 77403a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77403cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77403c: mov eax, 0xc */
  eax = 0xcu;
/* 774041: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 774043: jmp 0x774033 */
  goto L_774033;
L_774045: /* 774045: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 774048: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 77404b: mov esi, edi */
  esi = edi;
/* 77404d: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 774050: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 774052: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 774054: mov dword ptr [ebp - 0x3e4], edx */
  W32((uint32_t)(ebp + 0xfffffc1cu), edx);
/* 77405a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 77405d: mov dword ptr [ebp - 0x3e0], eax */
  W32((uint32_t)(ebp + 0xfffffc20u), eax);
/* 774063: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 774066: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 774069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77406a: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 774070: mov dword ptr [ebp - 0x3dc], ecx */
  W32((uint32_t)(ebp + 0xfffffc24u), ecx);
/* 774076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 774077: lea ecx, [ebp - 0x3e4] */
  ecx = (uint32_t)(ebp + 0xfffffc1cu);
/* 77407d: mov dword ptr [ebp - 0x2f0], 4 */
  W32((uint32_t)(ebp + 0xfffffd10u), 0x4u);
/* 774087: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x77408du); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 77408d: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 774090: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* 774094: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 774096: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774097: lea eax, [ebp - 0x400] */
  eax = (uint32_t)(ebp + 0xfffffc00u);
/* 77409d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77409e: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7740a4u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7740a4: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7740a7: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7740af: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7740b2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7740b5: fst dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0);
/* 7740b8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7740bb: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7740be: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7740c1: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740c7: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7740ca: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 7740cd: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7740d0: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740d6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 7740d9: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 7740df: fld dword ptr [ebp - 0x148] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb8u)); FPUSH(v); }
/* 7740e5: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740eb: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 7740ee: fld dword ptr [ebp - 0x14c] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb4u)); FPUSH(v); }
/* 7740f4: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740fa: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7740fd: fld dword ptr [ebp - 0x150] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb0u)); FPUSH(v); }
/* 774103: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 774109: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 77410c: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 774112: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 774115: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 774117: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77411a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77411d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77411f: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 774122: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774126: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 77412c: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 77412f: fstp dword ptr [ebp - 0x278] */
  WF32((uint32_t)(ebp + 0xfffffd88u), ST0); FPOP();
/* 774135: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 774138: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 77413b: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 77413e: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774141: fld dword ptr [ebp - 0x278] */
  { double v = F32((uint32_t)(ebp + 0xfffffd88u)); FPUSH(v); }
/* 774147: fadd dword ptr [ebp - 0x23c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdc4u)));
/* 77414d: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 774153: mov ecx, dword ptr [ebp - 0x1b8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe48u));
/* 774159: mov dword ptr [ebp - 0x3c0], ecx */
  W32((uint32_t)(ebp + 0xfffffc40u), ecx);
/* 77415f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774162: fstp dword ptr [ebp - 0x1b4] */
  WF32((uint32_t)(ebp + 0xfffffe4cu), ST0); FPOP();
/* 774168: mov edx, dword ptr [ebp - 0x1b4] */
  edx = R32((uint32_t)(ebp + 0xfffffe4cu));
/* 77416e: fstp dword ptr [ebp - 0x1b0] */
  WF32((uint32_t)(ebp + 0xfffffe50u), ST0); FPOP();
/* 774174: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 77417a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77417c: mov dword ptr [ebp - 0x3bc], edx */
  W32((uint32_t)(ebp + 0xfffffc44u), edx);
/* 774182: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 774184: mov dword ptr [ebp - 0x3b8], eax */
  W32((uint32_t)(ebp + 0xfffffc48u), eax);
/* 77418a: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 77418d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 774190: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 774193: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774196: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 77419c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77419f: mov dword ptr [ebp - 0x284], ecx */
  W32((uint32_t)(ebp + 0xfffffd7cu), ecx);
/* 7741a5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7741a7: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7741aa: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7741ad: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7741af: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7741b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7741b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7741b6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7741b9: fsub dword ptr [ebp - 0x254] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffdacu)));
/* 7741bf: fstp dword ptr [ebp - 0x2a8] */
  WF32((uint32_t)(ebp + 0xfffffd58u), ST0); FPOP();
/* 7741c5: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7741c8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7741cb: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 7741ce: fld dword ptr [ebp - 0x2a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffd58u)); FPUSH(v); }
/* 7741d4: fadd dword ptr [ebp - 0x284] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffd7cu)));
/* 7741da: fstp dword ptr [ebp - 0x1c4] */
  WF32((uint32_t)(ebp + 0xfffffe3cu), ST0); FPOP();
/* 7741e0: mov eax, dword ptr [ebp - 0x1c4] */
  eax = R32((uint32_t)(ebp + 0xfffffe3cu));
/* 7741e6: mov dword ptr [ebp - 0x3b4], eax */
  W32((uint32_t)(ebp + 0xfffffc4cu), eax);
/* 7741ec: fstp dword ptr [ebp - 0x1c0] */
  WF32((uint32_t)(ebp + 0xfffffe40u), ST0); FPOP();
/* 7741f2: mov ecx, dword ptr [ebp - 0x1c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 7741f8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7741fb: fstp dword ptr [ebp - 0x1bc] */
  WF32((uint32_t)(ebp + 0xfffffe44u), ST0); FPOP();
/* 774201: mov dword ptr [ebp - 0x3b0], ecx */
  W32((uint32_t)(ebp + 0xfffffc50u), ecx);
/* 774207: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77420a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77420c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77420e: mov dword ptr [ebp - 0x248], ecx */
  W32((uint32_t)(ebp + 0xfffffdb8u), ecx);
/* 774214: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 774217: mov edx, dword ptr [ebp - 0x1bc] */
  edx = R32((uint32_t)(ebp + 0xfffffe44u));
/* 77421d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 774220: mov dword ptr [ebp - 0x260], eax */
  W32((uint32_t)(ebp + 0xfffffda0u), eax);
/* 774226: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774229: mov dword ptr [ebp - 0x3ac], edx */
  W32((uint32_t)(ebp + 0xfffffc54u), edx);
/* 77422f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 774232: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 774234: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 774237: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77423a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 77423c: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77423f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774241: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774243: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 774246: fsub dword ptr [ebp - 0x248] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffdb8u)));
/* 77424c: fstp dword ptr [ebp - 0x29c] */
  WF32((uint32_t)(ebp + 0xfffffd64u), ST0); FPOP();
/* 774252: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 774255: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 774258: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 77425b: fld dword ptr [ebp - 0x29c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd64u)); FPUSH(v); }
/* 774261: fsub dword ptr [ebp - 0x260] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffda0u)));
/* 774267: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 77426d: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 774273: mov dword ptr [ebp - 0x3a8], edx */
  W32((uint32_t)(ebp + 0xfffffc58u), edx);
/* 774279: fstp dword ptr [ebp - 0x1a4] */
  WF32((uint32_t)(ebp + 0xfffffe5cu), ST0); FPOP();
/* 77427f: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 774285: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774288: fstp dword ptr [ebp - 0x1a0] */
  WF32((uint32_t)(ebp + 0xfffffe60u), ST0); FPOP();
/* 77428e: mov ecx, dword ptr [ebp - 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe60u));
/* 774294: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 774296: mov dword ptr [ebp - 0x3a4], eax */
  W32((uint32_t)(ebp + 0xfffffc5cu), eax);
/* 77429c: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77429f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7742a2: mov dword ptr [ebp - 0x3a0], ecx */
  W32((uint32_t)(ebp + 0xfffffc60u), ecx);
/* 7742a8: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7742ab: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 7742b1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7742b4: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7742ba: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7742bd: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7742c0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7742c2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7742c5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7742c8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7742ca: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7742cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7742cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7742d1: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 7742d7: xor esi, esi */
  esi = 0;
/* 7742d9: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7742dc: fstp dword ptr [ebp - 0x1f0] */
  WF32((uint32_t)(ebp + 0xfffffe10u), ST0); FPOP();
/* 7742e2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7742e5: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7742e8: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7742eb: fsub dword ptr [ebp - 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff90u)));
/* 7742ee: fld dword ptr [ebp - 0x1f0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe10u)); FPUSH(v); }
/* 7742f4: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 7742fa: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 774300: mov ecx, dword ptr [ebp - 0x17c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 774306: mov dword ptr [ebp - 0x39c], ecx */
  W32((uint32_t)(ebp + 0xfffffc64u), ecx);
/* 77430c: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 774312: mov edx, dword ptr [ebp - 0x178] */
  edx = R32((uint32_t)(ebp + 0xfffffe88u));
/* 774318: mov dword ptr [ebp - 0x398], edx */
  W32((uint32_t)(ebp + 0xfffffc68u), edx);
/* 77431e: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 774324: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 77432a: mov dword ptr [ebp - 0x394], eax */
  W32((uint32_t)(ebp + 0xfffffc6cu), eax);
L_774330: /* 774330: cmp esi, dword ptr [ebx + 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 774333: jge 0x7743cb */
  if ((sf == of)) goto L_7743cb;
L_774339: /* 774339: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77433b: je 0x7743c5 */
  if (zf) goto L_7743c5;
L_774341: /* 774341: mov edx, dword ptr [ebx + 0x4c] */
  edx = R32((uint32_t)(ebx + 0x4cu));
/* 774344: mov ecx, esi */
  ecx = esi;
/* 774346: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 774349: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77434b: mov eax, ecx */
  eax = ecx;
/* 77434d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77434f: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 774355: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 774358: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77435b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 774361: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 774367: fchs  */
  ST0 = -ST0;
/* 774369: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 77436f: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 774375: lea eax, [ebp - 0x410] */
  eax = (uint32_t)(ebp + 0xfffffbf0u);
/* 77437b: fchs  */
  ST0 = -ST0;
/* 77437d: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 774383: fchs  */
  ST0 = -ST0;
/* 774385: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 77438b: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 774391: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 774397: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 77439a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77439b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77439c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7743a2u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7743a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7743a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7743a5: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7743ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7743ac: lea ecx, [ebp - 0x3f0] */
  ecx = (uint32_t)(ebp + 0xfffffc10u);
/* 7743b2: call 0x6cb096 */
  esp -= 4; W32(esp, 0x7743b7u); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 7743b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7743b9: jne 0x7743c5 */
  if (!zf) goto L_7743c5;
L_7743bb: /* 7743bb: xor esi, esi */
  esi = 0;
/* 7743bd: mov dword ptr [ebp - 0x2f0], esi */
  W32((uint32_t)(ebp + 0xfffffd10u), esi);
/* 7743c3: jmp 0x7743d1 */
  goto L_7743d1;
L_7743c5: /* 7743c5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7743c6: jmp 0x774330 */
  goto L_774330;
L_7743cb: /* 7743cb: mov esi, dword ptr [ebp - 0x2f0] */
  esi = R32((uint32_t)(ebp + 0xfffffd10u));
L_7743d1: /* 7743d1: xor ecx, ecx */
  ecx = 0;
L_7743d3: /* 7743d3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7743d5: jge 0x774601 */
  if ((sf == of)) goto L_774601;
L_7743db: /* 7743db: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 7743de: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7743e1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7743e2: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x7743e2);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7743e4: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 7743eb: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7743ee: fld dword ptr [ebp + eax*4 - 0x3b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc48u)); FPUSH(v); }
/* 7743f5: mov edx, dword ptr [ebp + eax*4 - 0x3c0] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffc40u));
/* 7743fc: fld dword ptr [ebp + eax*4 - 0x3bc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc44u)); FPUSH(v); }
/* 774403: lea eax, [ebp + eax*4 - 0x3c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffc40u);
/* 77440a: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 77440d: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 774410: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 774413: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 774419: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 77441c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 77441f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 774422: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 774425: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774428: lea edi, [ebp - 0x9c] */
  edi = (uint32_t)(ebp + 0xffffff64u);
/* 77442e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774430: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 774432: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774434: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 774437: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774439: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 77443c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77443e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 774441: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774444: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 774447: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77444a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 77444d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774450: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 774453: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774456: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 774459: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77445b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77445d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77445f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774461: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774463: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774466: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 774469: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77446c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 77446f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774472: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 774475: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774478: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 77447b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77447d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77447f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774481: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774483: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774485: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774488: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 77448b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77448e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 774491: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774494: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 774497: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77449a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 77449d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77449f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7744a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7744a3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7744a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7744a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7744a9: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7744ab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7744ad: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7744b0: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7744b3: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7744b6: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 7744bc: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 7744c2: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7744c5: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7744cb: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7744ce: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7744d1: fld dword ptr [ebp + eax*4 - 0x3b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc48u)); FPUSH(v); }
/* 7744d8: mov ecx, dword ptr [ebp + eax*4 - 0x3c0] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xfffffc40u));
/* 7744df: fld dword ptr [ebp + eax*4 - 0x3bc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc44u)); FPUSH(v); }
/* 7744e6: lea eax, [ebp + eax*4 - 0x3c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffc40u);
/* 7744ed: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 7744f3: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7744f6: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 7744fc: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 774502: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 774508: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 77450e: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 774518: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 77451b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 77451e: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 774521: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774524: lea edi, [ebp - 0x210] */
  edi = (uint32_t)(ebp + 0xfffffdf0u);
/* 77452a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77452c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 77452e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774530: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 774533: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774535: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 774538: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77453a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 77453d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774540: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 774543: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774546: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 774549: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77454c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77454f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774552: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 774555: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 774557: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 774559: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77455b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77455d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77455f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774562: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 774565: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774568: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 77456b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77456e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 774571: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774574: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 774577: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 774579: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77457b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77457d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77457f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774581: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774584: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 774587: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77458a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 77458d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774590: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 774593: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774596: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 774599: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77459b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77459d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77459f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7745a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7745a3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7745a5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7745a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7745a9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7745ac: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7745af: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7745b2: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7745b5: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7745b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7745b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7745bc: mov ecx, esp */
  ecx = esp;
/* 7745be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7745c0: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7745c3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7745c6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7745c9: mov ecx, dword ptr [ebp - 0x210] */
  ecx = R32((uint32_t)(ebp + 0xfffffdf0u));
/* 7745cf: mov edx, dword ptr [ebp - 0x20c] */
  edx = R32((uint32_t)(ebp + 0xfffffdf4u));
/* 7745d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7745d8: mov eax, esp */
  eax = esp;
/* 7745da: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7745dc: mov ecx, dword ptr [ebp - 0x208] */
  ecx = R32((uint32_t)(ebp + 0xfffffdf8u));
/* 7745e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7745e5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7745e8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7745ee: call 0x6cc74d */
  esp -= 4; W32(esp, 0x7745f3u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 7745f3: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7745f6: mov esi, dword ptr [ebp - 0x2f0] */
  esi = R32((uint32_t)(ebp + 0xfffffd10u));
/* 7745fc: jmp 0x7743d3 */
  goto L_7743d3;
L_774601: /* 774601: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 774604: jmp 0x773fe3 */
  goto L_773fe3;
L_774609: /* 774609: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 77460f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 774613: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x774619u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 774619: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 77461c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77461f: jmp 0x773b30 */
  goto L_773b30;
L_774624: /* 774624: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_774627: /* 774627: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77462a: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77462d: je 0x774a27 */
  if (zf) goto L_774a27;
L_774633: /* 774633: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774639: fmul dword ptr [eax + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x48u)));
/* 77463c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77463f: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774645: fmul dword ptr [eax + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x44u)));
/* 774648: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77464b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77464e: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774654: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 774657: fmul dword ptr [eax + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x40u)));
/* 77465a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77465d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 774660: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 774663: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 774669: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77466f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 774675: fld dword ptr [0xa07710] */
  { double v = F32((uint32_t)(0xa07710u)); FPUSH(v); }
/* 77467b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 774681: call 0x99c958 */
  esp -= 4; W32(esp, 0x774686u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 774686: fld dword ptr [0xa0770c] */
  { double v = F32((uint32_t)(0xa0770cu)); FPUSH(v); }
/* 77468c: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 774692: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 774694: call 0x99c958 */
  esp -= 4; W32(esp, 0x774699u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 774699: fld dword ptr [0xa07708] */
  { double v = F32((uint32_t)(0xa07708u)); FPUSH(v); }
/* 77469f: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7746a5: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 7746a8: call 0x99c958 */
  esp -= 4; W32(esp, 0x7746adu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7746ad: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7746b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7746b5: mov cl, byte ptr [ebp - 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 7746b8: mov byte ptr [ebp - 0x46], al */
  W8((uint32_t)(ebp + 0xffffffbau), (eax & 0xffu));
/* 7746bb: mov byte ptr [ebp - 0x47], cl */
  W8((uint32_t)(ebp + 0xffffffb9u), (ecx & 0xffu));
/* 7746be: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7746c1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7746c4: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 7746c7: mov byte ptr [ebp - 0x48], bl */
  W8((uint32_t)(ebp + 0xffffffb8u), (ebx & 0xffu));
/* 7746ca: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7746cd: mov byte ptr [ebp - 0x45], 0xff */
  W8((uint32_t)(ebp + 0xffffffbbu), 0xffu);
/* 7746d1: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7746d4: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 7746d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7746d8: fst dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0);
/* 7746de: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7746e1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7746e4: mov eax, esp */
  eax = esp;
/* 7746e6: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7746e9: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7746ec: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7746ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7746f2: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7746f5: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7746f8: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 7746fe: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 774701: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 774704: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774706: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 774709: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 77470c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77470f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 774712: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 774715: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774718: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77471b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77471d: mov edx, esp */
  edx = esp;
/* 77471f: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 774725: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 774728: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77472b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77472e: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 774734: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 774737: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 77473d: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 774743: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 774745: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 77474b: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 774751: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 774754: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 77475a: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 774760: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774766: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 774769: call 0x6cc74d */
  esp -= 4; W32(esp, 0x77476eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 77476e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774771: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774774: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* 774777: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77477a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77477d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 774780: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774783: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 774789: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77478c: mov eax, ecx */
  eax = ecx;
/* 77478e: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 774794: mov ecx, edx */
  ecx = edx;
/* 774796: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 774799: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 77479f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7747a2: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 7747a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7747a6: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7747a9: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7747ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7747af: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7747b2: mov edx, esp */
  edx = esp;
/* 7747b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7747b7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7747b9: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7747bc: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7747bf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7747c2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7747c5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7747c8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7747cb: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 7747d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7747d4: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7747d7: mov ecx, esp */
  ecx = esp;
/* 7747d9: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7747df: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7747e5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7747e7: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7747ed: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7747f3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7747f6: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7747fc: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 774802: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774805: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 77480b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x774810u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 774810: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 774813: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* 774816: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 774819: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77481c: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 77481f: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774822: mov ecx, eax */
  ecx = eax;
/* 774824: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 774827: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 77482d: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 774833: mov edx, eax */
  edx = eax;
/* 774835: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 774838: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 77483e: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 774841: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 774844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 774845: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 774848: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 77484b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77484e: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 774851: mov ecx, esp */
  ecx = esp;
/* 774853: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 774856: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 774858: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77485b: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 77485e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 774861: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 774864: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 774867: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77486a: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 774870: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774873: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 774876: mov eax, esp */
  eax = esp;
/* 774878: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 77487e: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 774884: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 77488a: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 774890: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 774896: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774898: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 77489e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7748a1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7748a4: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7748aa: call 0x6cc74d */
  esp -= 4; W32(esp, 0x7748afu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 7748af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7748b2: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 7748b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7748b8: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 7748bb: fsub dword ptr [eax + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x28u)));
/* 7748be: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7748c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7748c7: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x7748cdu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 7748cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7748d0: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7748d3: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 7748d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7748dc: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 7748df: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7748e2: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 7748e8: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 7748eb: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 7748ee: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 7748f1: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7748f7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7748fa: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x774900u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 774900: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 774903: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 774906: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77490c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77490f: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 774912: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 774915: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 77491b: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 77491e: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 774921: fsub dword ptr [eax + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x3cu)));
/* 774924: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 77492a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 77492d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x774933u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 774933: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 774936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 774939: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77493f: xor edi, edi */
  edi = 0;
/* 774941: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 774944: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 77494a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_774950: /* 774950: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 774953: jge 0x774a27 */
  if ((sf == of)) goto L_774a27;
L_774959: /* 774959: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 77495c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77495f: lea edx, [esi + 0xa07990] */
  edx = (uint32_t)(esi + 0xa07990u);
/* 774965: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774966: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 774969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77496a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77496fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77496f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 774972: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 774978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 774979: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 77497f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774980: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 774983: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x774989u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 774989: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77498c: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 77498f: lea eax, [esi + 0xa0799c] */
  eax = (uint32_t)(esi + 0xa0799cu);
/* 774995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 774996: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 774999: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 77499c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77499d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7749a0: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7749a3: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7749a6: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7749a9: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7749ac: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7749af: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7749b4u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7749b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7749b7: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 7749bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7749be: lea eax, [ebp - 0x1f0] */
  eax = (uint32_t)(ebp + 0xfffffe10u);
/* 7749c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7749c5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7749c8: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x7749ceu); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7749ce: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7749d1: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7749d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7749d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7749d8: mov ecx, esp */
  ecx = esp;
/* 7749da: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7749dd: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7749e0: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7749e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7749e5: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7749e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7749eb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7749ee: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7749f1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7749f4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7749f7: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7749fa: mov eax, esp */
  eax = esp;
/* 7749fc: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7749ff: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774a02: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774a05: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 774a08: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 774a0b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774a0d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 774a10: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 774a13: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 774a16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774a1c: call 0x6cc74d */
  esp -= 4; W32(esp, 0x774a21u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 774a21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 774a22: jmp 0x774950 */
  goto L_774950;
L_774a27: /* 774a27: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774a2d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 774a31: call 0x6cadcb */
  esp -= 4; W32(esp, 0x774a36u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 774a36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 774a39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 774a3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 774a3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 774a42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 774a43: mov esp, ebp */
  esp = ebp;
/* 774a45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 774a46: ret 8 */
  esp += 12; SPILL(); return;
}
