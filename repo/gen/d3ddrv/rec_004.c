#include "recomp.h"
#include "rec_mod.h"

void f_e942a0(void) {
  LOAD_REGS();
L_e942a0: /* e942a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e942a3: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e942a9: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e942ad: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e942b0: mov ecx, dword ptr [eax + 0x30ef8] */
  ecx = R32((uint32_t)(eax + 0x30ef8u));
/* e942b6: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e942b9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e942bc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e942be: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e942c0: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* e942c4: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e942ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e942cc: jne 0xe942e9 */
  if (!zf) goto L_e942e9;
L_e942ce: /* e942ce: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e942d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e942d6: push 0xeb2b74 */
  { uint32_t v = 0xeb2b74u; esp -= 4; W32(esp, v); }
/* e942db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e942dc: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe942e2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e942e2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e942e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e942e9: /* e942e9: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e942ef: mov edx, ecx */
  edx = ecx;
/* e942f1: imul edx, edx, 0x560 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x560u);
  edx = (uint32_t)r;
  }
/* e942f7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e942f8: mov dword ptr [eax + 0x2b46c], ecx */
  W32((uint32_t)(eax + 0x2b46cu), ecx);
/* e942fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e942ff: lea ebx, [edx + eax + 0xc] */
  ebx = (uint32_t)(edx + eax + 0xcu);
/* e94303: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e94307: mov ecx, dword ptr [eax + 0x2b46c] */
  ecx = R32((uint32_t)(eax + 0x2b46cu));
/* e9430d: imul ecx, ecx, 0x560 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x560u);
  ecx = (uint32_t)r;
  }
/* e94313: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94315: lea esi, [ecx + eax + 0xc] */
  esi = (uint32_t)(ecx + eax + 0xcu);
/* e94319: mov dword ptr [eax + 0x2b00c], esi */
  W32((uint32_t)(eax + 0x2b00cu), esi);
/* e9431f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e94323: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e94329: mov ecx, dword ptr [ebx + 0x55c] */
  ecx = R32((uint32_t)(ebx + 0x55cu));
/* e9432f: mov dword ptr [eax + 0x558], ecx */
  W32((uint32_t)(eax + 0x558u), ecx);
/* e94335: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e94339: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e9433f: mov ecx, dword ptr [eax + 0x558] */
  ecx = R32((uint32_t)(eax + 0x558u));
/* e94345: mov dword ptr [eax + 0x55c], ecx */
  W32((uint32_t)(eax + 0x55cu), ecx);
/* e9434b: mov eax, dword ptr [esi + 0x190] */
  eax = R32((uint32_t)(esi + 0x190u));
/* e94351: xor edx, edx */
  edx = 0;
/* e94353: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94355: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e94359: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9435c: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9435f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e94360: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94366: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e9436a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9436b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e9436d: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94372u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94372: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e94378: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9437c: xor ecx, ecx */
  ecx = 0;
/* e9437e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94380: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e94383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94384: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94387: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e94389: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9438f: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94394u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94394: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e94396: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94398: jne 0xe943da */
  if (!zf) goto L_e943da;
L_e9439a: /* e9439a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* e9439d: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e943a0: jne 0xe943da */
  if (!zf) goto L_e943da;
L_e943a2: /* e943a2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* e943a5: cmp dword ptr [ebx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e943a8: jne 0xe943c2 */
  if (!zf) goto L_e943c2;
L_e943aa: /* e943aa: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* e943ad: cmp edx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e943b0: jne 0xe943c2 */
  if (!zf) goto L_e943c2;
L_e943b2: /* e943b2: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* e943b5: cmp ecx, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e943b8: jne 0xe943c2 */
  if (!zf) goto L_e943c2;
L_e943ba: /* e943ba: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* e943bd: cmp edx, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e943c0: je 0xe9440b */
  if (zf) goto L_e9440b;
L_e943c2: /* e943c2: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* e943c5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e943c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e943cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e943cc: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* e943cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e943d0: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* e943d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e943d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e943d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe943d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e943d8: jmp 0xe9440b */
  goto L_e9440b;
L_e943da: /* e943da: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e943de: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* e943e1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e943e4: mov ecx, dword ptr [edx + 0x46b4] */
  ecx = R32((uint32_t)(edx + 0x46b4u));
/* e943ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e943ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e943ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e943ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e943ef: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xe943f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e943f2: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* e943f5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e943f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e943fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e943fc: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* e943ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94400: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* e94403: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94404: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* e94407: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94408: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe9440bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9440b: /* e9440b: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* e9440e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94412: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e94415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94416: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e94418: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9441e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94423u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94423: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94427: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* e9442a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9442c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9442d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xe94430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94430: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94434: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e94437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94438: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e9443a: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94440: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94445u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94445: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* e94448: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9444c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9444f: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e94455: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94456: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e94458: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9445e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94463u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94463: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* e94466: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9446a: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e94470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94471: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94474: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e94476: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9447c: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94481u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94481: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94485: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* e94488: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9448a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9448b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe9448eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9448e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9448f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e94493: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e94496: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e94498: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9449e: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe944a3u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e944a3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e944a7: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e944aa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e944ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e944ad: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe944b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e944b0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e944b4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e944b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e944b8: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e944ba: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e944c0: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe944c5u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e944c5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e944c9: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* e944cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e944ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e944cf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe944d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e944d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e944d6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e944d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e944da: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e944dc: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e944e2: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe944e7u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e944e7: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* e944ea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e944ee: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e944f1: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e944f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e944f8: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e944fa: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94500: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94505u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94505: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e94509: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* e9450c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9450d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94510: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e94512: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94518: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe9451du); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
/* e9451d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94521: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e94524: lea eax, [esi + 0x78] */
  eax = (uint32_t)(esi + 0x78u);
/* e94527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94528: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9452a: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94530: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe94535u); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
/* e94535: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94539: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9453c: lea edx, [esi + 0xb8] */
  edx = (uint32_t)(esi + 0xb8u);
/* e94542: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94543: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e94545: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9454b: call 0xe95e80 */
  esp -= 4; W32(esp, 0xe94550u); SPILL(); f_e95e80(); if (g_unwind) return; RELOAD();
/* e94550: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* e94556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94558: je 0xe9456a */
  if (zf) goto L_e9456a;
L_e9455a: /* e9455a: mov ecx, dword ptr [eax + 0x454] */
  ecx = R32((uint32_t)(eax + 0x454u));
/* e94560: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e94564: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94565: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94568: jmp 0xe94573 */
  goto L_e94573;
L_e9456a: /* e9456a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9456e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e94571: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_e94573: /* e94573: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94579: call 0xe95e00 */
  esp -= 4; W32(esp, 0xe9457eu); SPILL(); f_e95e00(); if (g_unwind) return; RELOAD();
/* e9457e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94582: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* e94588: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e9458e: mov dword ptr [edx + 0xf8], eax */
  W32((uint32_t)(edx + 0xf8u), eax);
/* e94594: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* e9459a: xor edi, edi */
  edi = 0;
/* e9459c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9459e: jle 0xe945d2 */
  if ((zf || sf != of)) goto L_e945d2;
L_e945a0: /* e945a0: lea ebp, [esi + 0xfc] */
  ebp = (uint32_t)(esi + 0xfcu);
L_e945a6: /* e945a6: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e945a9: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e945ac: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* e945af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e945b0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e945b4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e945b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e945b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e945b9: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e945bf: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe945c4u); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e945c4: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* e945ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e945cb: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e945ce: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e945d0: jl 0xe945a6 */
  if ((sf != of)) goto L_e945a6;
L_e945d2: /* e945d2: mov edi, dword ptr [esi + 0x17c] */
  edi = R32((uint32_t)(esi + 0x17cu));
/* e945d8: cmp edi, dword ptr [ebx + 0x17c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x17cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e945de: jge 0xe94602 */
  if ((sf == of)) goto L_e94602;
L_e945e0: /* e945e0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e945e4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e945e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e945e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e945eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e945ec: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e945f2: call 0xe95e20 */
  esp -= 4; W32(esp, 0xe945f7u); SPILL(); f_e95e20(); if (g_unwind) return; RELOAD();
/* e945f7: mov eax, dword ptr [ebx + 0x17c] */
  eax = R32((uint32_t)(ebx + 0x17cu));
/* e945fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e945fe: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e94600: jl 0xe945e0 */
  if ((sf != of)) goto L_e945e0;
L_e94602: /* e94602: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94606: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9460c: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* e94612: mov dword ptr [ecx + 0x17c], edx */
  W32((uint32_t)(ecx + 0x17cu), edx);
/* e94618: mov eax, dword ptr [esi + 0x180] */
  eax = R32((uint32_t)(esi + 0x180u));
/* e9461e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94620: je 0xe94636 */
  if (zf) goto L_e94636;
L_e94622: /* e94622: mov ecx, dword ptr [esi + 0x184] */
  ecx = R32((uint32_t)(esi + 0x184u));
/* e94628: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* e9462b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9462f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94630: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e94633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94634: jmp 0xe94641 */
  goto L_e94641;
L_e94636: /* e94636: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9463a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9463d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9463f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_e94641: /* e94641: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94647: call 0xe95e40 */
  esp -= 4; W32(esp, 0xe9464cu); SPILL(); f_e95e40(); if (g_unwind) return; RELOAD();
/* e9464c: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* e94652: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94656: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e94659: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9465a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9465c: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94662: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94667u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94667: mov ecx, dword ptr [esi + 0x1b4] */
  ecx = R32((uint32_t)(esi + 0x1b4u));
/* e9466d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e94671: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94672: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94675: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e94677: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9467d: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94682u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94682: xor edi, edi */
  edi = 0;
/* e94684: lea ebp, [esi + 0x1b8] */
  ebp = (uint32_t)(esi + 0x1b8u);
/* e9468a: lea ebx, [esi + 0x4f8] */
  ebx = (uint32_t)(esi + 0x4f8u);
L_e94690: /* e94690: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e94692: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94696: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e94699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9469a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9469b: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e946a1: call 0xe95ef0 */
  esp -= 4; W32(esp, 0xe946a6u); SPILL(); f_e95ef0(); if (g_unwind) return; RELOAD();
/* e946a6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e946aa: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e946ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e946ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e946af: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e946b5: call 0xe95ec0 */
  esp -= 4; W32(esp, 0xe946bau); SPILL(); f_e95ec0(); if (g_unwind) return; RELOAD();
/* e946ba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e946bb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e946be: add ebp, 0x68 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e946c1: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e946c4: jl 0xe94690 */
  if ((sf != of)) goto L_e94690;
L_e946c6: /* e946c6: mov ebp, dword ptr [esi + 0x518] */
  ebp = R32((uint32_t)(esi + 0x518u));
/* e946cc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e946d0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e946d3: xor eax, eax */
  eax = 0;
/* e946d5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e946d7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e946da: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e946e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e946e1: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e946e3: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe946e8u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e946e8: mov edx, dword ptr [esi + 0x524] */
  edx = R32((uint32_t)(esi + 0x524u));
/* e946ee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e946f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e946f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e946f6: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e946f8: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e946fe: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94703u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94703: mov ecx, dword ptr [esi + 0x51c] */
  ecx = R32((uint32_t)(esi + 0x51cu));
/* e94709: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9470d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9470e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e94711: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e94713: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94719: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe9471eu); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e9471e: mov eax, dword ptr [esi + 0x520] */
  eax = R32((uint32_t)(esi + 0x520u));
/* e94724: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94728: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9472b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9472c: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e9472e: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94734: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94739u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94739: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* e9473f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94743: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e94746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94747: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e94749: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9474f: call 0xe95dd0 */
  esp -= 4; W32(esp, 0xe94754u); SPILL(); f_e95dd0(); if (g_unwind) return; RELOAD();
/* e94754: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e94758: mov eax, dword ptr [ecx + 0x54c] */
  eax = R32((uint32_t)(ecx + 0x54cu));
/* e9475e: xor ebp, ebp */
  ebp = 0;
/* e94760: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e94762: jle 0xe947b7 */
  if ((zf || sf != of)) goto L_e947b7;
L_e94764: /* e94764: lea edi, [ecx + 0x52c] */
  edi = (uint32_t)(ecx + 0x52cu);
/* e9476a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e94770: /* e94770: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e94772: dec dword ptr [eax + 0x458] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x458u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x458u), r);
  }
/* e94778: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* e9477a: mov eax, dword ptr [ebx + 0x458] */
  eax = R32((uint32_t)(ebx + 0x458u));
/* e94780: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94782: jne 0xe947a3 */
  if (!zf) goto L_e947a3;
L_e94784: /* e94784: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e94788: add esi, 0x2b470 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9478e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94790: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e94792: mov ecx, esi */
  ecx = esi;
/* e94794: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9479au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e9479a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e9479c: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* e9479f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_e947a3: /* e947a3: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* e947a9: mov eax, dword ptr [ecx + 0x54c] */
  eax = R32((uint32_t)(ecx + 0x54cu));
/* e947af: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e947b0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e947b3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e947b5: jl 0xe94770 */
  if ((sf != of)) goto L_e94770;
L_e947b7: /* e947b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e947bb: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e947c1: mov dword ptr [eax + 0x550], 0 */
  W32((uint32_t)(eax + 0x550u), 0x0u);
/* e947cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e947cf: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e947d2: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e947d8: mov eax, dword ptr [edx + 0x30ef8] */
  eax = R32((uint32_t)(edx + 0x30ef8u));
/* e947de: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e947e1: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e947e4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e947e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e947e8: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e947eb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e947ed: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e947ef: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e947f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e947f6: mov edx, dword ptr [ecx + 0x30ef4] */
  edx = R32((uint32_t)(ecx + 0x30ef4u));
/* e947fc: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e94801: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e94804: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e94807: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94809: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9480a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9480b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9480c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9480d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9480f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e94810: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94813: ret  */
  esp += 4; SPILL(); return;
}

void f_e94820(void) {
  LOAD_REGS();
L_e94820: /* e94820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e94822: push 0xead062 */
  { uint32_t v = 0xead062u; esp -= 4; W32(esp, v); }
/* e94827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9482d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9482e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e94835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94836: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94837: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94838: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e94839: push 0xe812d0 */
  { uint32_t v = 0xe812d0u; esp -= 4; W32(esp, v); }
/* e9483e: push 0xe918d0 */
  { uint32_t v = 0xe918d0u; esp -= 4; W32(esp, v); }
/* e94843: mov esi, ecx */
  esi = ecx;
/* e94845: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* e9484a: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* e9484f: lea ebp, [esi + 0xc] */
  ebp = (uint32_t)(esi + 0xcu);
/* e94852: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94853: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* e94857: mov dword ptr [esi], 0xeae438 */
  W32((uint32_t)(esi), 0xeae438u);
/* e9485d: call 0xeac5cc */
  esp -= 4; W32(esp, 0xe94862u); SPILL(); f_eac5cc(); if (g_unwind) return; RELOAD();
/* e94862: xor edi, edi */
  edi = 0;
/* e94864: lea ecx, [esi + 0x2b010] */
  ecx = (uint32_t)(esi + 0x2b010u);
/* e9486a: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e9486e: call 0xe82900 */
  esp -= 4; W32(esp, 0xe94873u); SPILL(); f_e82900(); if (g_unwind) return; RELOAD();
/* e94873: mov dword ptr [esi + 0x2b470], edi */
  W32((uint32_t)(esi + 0x2b470u), edi);
/* e94879: mov dword ptr [esi + 0x2b474], edi */
  W32((uint32_t)(esi + 0x2b474u), edi);
/* e9487f: mov dword ptr [esi + 0x2b478], edi */
  W32((uint32_t)(esi + 0x2b478u), edi);
/* e94885: lea ecx, [esi + 0x2b480] */
  ecx = (uint32_t)(esi + 0x2b480u);
/* e9488b: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* e94890: call dword ptr [0xeae2b0] */
  esp -= 4; W32(esp, 0xe94896u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* e94896: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e9489a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9489e: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* e948a1: mov dword ptr [esi + 0x2b494], edi */
  W32((uint32_t)(esi + 0x2b494u), edi);
/* e948a7: mov dword ptr [esi + 0x2b48c], edi */
  W32((uint32_t)(esi + 0x2b48cu), edi);
/* e948ad: mov dword ptr [esi + 0x2b490], edi */
  W32((uint32_t)(esi + 0x2b490u), edi);
/* e948b3: mov dword ptr [esi + 0x2b46c], edi */
  W32((uint32_t)(esi + 0x2b46cu), edi);
/* e948b9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e948bc: mov dword ptr [esi + 0x2b00c], ebp */
  W32((uint32_t)(esi + 0x2b00cu), ebp);
/* e948c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e948c3: mov dword ptr [esi + 0x2b47c], 1 */
  W32((uint32_t)(esi + 0x2b47cu), 0x1u);
/* e948cd: mov eax, esi */
  eax = esi;
/* e948cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e948d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e948d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e948d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e948db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e948e0(void) {
  LOAD_REGS();
L_e948e0: /* e948e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e948e2: push 0xead078 */
  { uint32_t v = 0xead078u; esp -= 4; W32(esp, v); }
/* e948e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e948ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e948ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e948f5: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e948fb: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e94901: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e94905: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e94908: mov ecx, dword ptr [eax + 0x30f08] */
  ecx = R32((uint32_t)(eax + 0x30f08u));
/* e9490e: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e94911: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94912: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94913: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e94915: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e94918: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9491a: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e9491c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94920: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e94926: mov edx, dword ptr [eax + 0x54c] */
  edx = R32((uint32_t)(eax + 0x54cu));
/* e9492c: xor ebx, ebx */
  ebx = 0;
/* e9492e: xor edi, edi */
  edi = 0;
/* e94930: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e94932: jle 0xe9499c */
  if ((zf || sf != of)) goto L_e9499c;
L_e94934: /* e94934: mov esi, 0x52c */
  esi = 0x52cu;
/* e94939: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e94940: /* e94940: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* e94943: dec dword ptr [eax + 0x458] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x458u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x458u), r);
  }
/* e94949: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9494d: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94953: mov ebp, dword ptr [esi + ecx] */
  ebp = R32((uint32_t)(esi + ecx));
/* e94956: cmp dword ptr [ebp + 0x458], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x458u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9495c: jne 0xe9497b */
  if (!zf) goto L_e9497b;
L_e9495e: /* e9495e: lea ebx, [eax + 0x2b470] */
  ebx = (uint32_t)(eax + 0x2b470u);
/* e94964: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94966: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e94968: mov ecx, ebx */
  ecx = ebx;
/* e9496a: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe94970u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e94970: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e94972: mov dword ptr [edx + eax*4], ebp */
  W32((uint32_t)(edx + eax*4), ebp);
/* e94975: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94979: xor ebx, ebx */
  ebx = 0;
L_e9497b: /* e9497b: mov eax, dword ptr [eax + 0x2b00c] */
  eax = R32((uint32_t)(eax + 0x2b00cu));
/* e94981: mov dword ptr [esi + eax], ebx */
  W32((uint32_t)(esi + eax), ebx);
/* e94984: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94988: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e9498e: mov edx, dword ptr [eax + 0x54c] */
  edx = R32((uint32_t)(eax + 0x54cu));
/* e94994: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e94995: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e94998: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9499a: jl 0xe94940 */
  if ((sf != of)) goto L_e94940;
L_e9499c: /* e9499c: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e949a2: mov ebp, 1 */
  ebp = 0x1u;
/* e949a7: mov dword ptr [ecx + 0x54c], ebp */
  W32((uint32_t)(ecx + 0x54cu), ebp);
/* e949ad: cmp dword ptr [esp + 0xb8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949b4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e949b8: je 0xe949c2 */
  if (zf) goto L_e949c2;
L_e949ba: /* e949ba: cmp dword ptr [ecx + 0x2b47c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x2b47cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949c0: jne 0xe949f7 */
  if (!zf) goto L_e949f7;
L_e949c2: /* e949c2: mov esi, dword ptr [0xeae2b8] */
  esi = R32((uint32_t)(0xeae2b8u));
/* e949c8: mov edx, dword ptr [esi + 0x4e8] */
  edx = R32((uint32_t)(esi + 0x4e8u));
/* e949ce: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949d0: je 0xe949eb */
  if (zf) goto L_e949eb;
L_e949d2: /* e949d2: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* e949d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949d7: je 0xe949eb */
  if (zf) goto L_e949eb;
L_e949d9: /* e949d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e949e0: /* e949e0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949e2: je 0xe949ed */
  if (zf) goto L_e949ed;
L_e949e4: /* e949e4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e949e7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e949e9: jne 0xe949e0 */
  if (!zf) goto L_e949e0;
L_e949eb: /* e949eb: xor edx, edx */
  edx = 0;
L_e949ed: /* e949ed: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* e949f0: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
L_e949f7: /* e949f7: mov eax, dword ptr [ecx + 0x2b474] */
  eax = R32((uint32_t)(ecx + 0x2b474u));
/* e949fd: lea edi, [ecx + 0x2b010] */
  edi = (uint32_t)(ecx + 0x2b010u);
/* e94a03: add ecx, 0x2b470 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e94a09: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94a0b: je 0xe94a20 */
  if (zf) goto L_e94a20;
L_e94a0d: /* e94a0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94a0f: mov esi, dword ptr [edx + eax*4 - 4] */
  esi = R32((uint32_t)(edx + eax*4 + 0xfffffffcu));
/* e94a13: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94a15: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e94a16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94a18: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe94a1eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e94a1e: jmp 0xe94a46 */
  goto L_e94a46;
L_e94a20: /* e94a20: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e94a25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94a27: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94a29: push 0xeaefec */
  { uint32_t v = 0xeaefecu; esp -= 4; W32(esp, v); }
/* e94a2e: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e94a33: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe94a35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94a35: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94a37: je 0xe94a44 */
  if (zf) goto L_e94a44;
L_e94a39: /* e94a39: mov ecx, eax */
  ecx = eax;
/* e94a3b: call 0xe82900 */
  esp -= 4; W32(esp, 0xe94a40u); SPILL(); f_e82900(); if (g_unwind) return; RELOAD();
/* e94a40: mov esi, eax */
  esi = eax;
/* e94a42: jmp 0xe94a46 */
  goto L_e94a46;
L_e94a44: /* e94a44: xor esi, esi */
  esi = 0;
L_e94a46: /* e94a46: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94a48: je 0xe94a59 */
  if (zf) goto L_e94a59;
L_e94a4a: /* e94a4a: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e94a4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e94a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e94a51: call 0xe81020 */
  esp -= 4; W32(esp, 0xe94a56u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e94a56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e94a59: /* e94a59: mov dword ptr [esi + 0x458], ebp */
  W32((uint32_t)(esi + 0x458u), ebp);
/* e94a5f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94a63: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94a69: mov dword ptr [ecx + 0x52c], esi */
  W32((uint32_t)(ecx + 0x52cu), esi);
/* e94a6f: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e94a75: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94a77: je 0xe94b67 */
  if (zf) goto L_e94b67;
L_e94a7d: /* e94a7d: test byte ptr [0xebe2b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xebe2b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e94a84: jne 0xe94ab3 */
  if (!zf) goto L_e94ab3;
L_e94a86: /* e94a86: mov edx, dword ptr [0xebe2b4] */
  edx = R32((uint32_t)(0xebe2b4u));
/* e94a8c: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e94a8e: push 0xead430 */
  { uint32_t v = 0xead430u; esp -= 4; W32(esp, v); }
/* e94a93: mov dword ptr [0xebe2b4], edx */
  W32((uint32_t)(0xebe2b4u), edx);
/* e94a99: mov dword ptr [0xebe2a8], ebx */
  W32((uint32_t)(0xebe2a8u), ebx);
/* e94a9f: mov dword ptr [0xebe2ac], ebx */
  W32((uint32_t)(0xebe2acu), ebx);
/* e94aa5: mov dword ptr [0xebe2b0], ebx */
  W32((uint32_t)(0xebe2b0u), ebx);
/* e94aab: call 0xeac5ba */
  esp -= 4; W32(esp, 0xe94ab0u); SPILL(); f_eac5ba(); if (g_unwind) return; RELOAD();
/* e94ab0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e94ab3: /* e94ab3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94ab5: mov ecx, 0xebe2a8 */
  ecx = 0xebe2a8u;
/* e94aba: mov dword ptr [0xebe2ac], ebx */
  W32((uint32_t)(0xebe2acu), ebx);
/* e94ac0: mov dword ptr [0xebe2b0], ebx */
  W32((uint32_t)(0xebe2b0u), ebx);
/* e94ac6: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe94accu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e94acc: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e94ad3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e94ad5: push 0xebe2a8 */
  { uint32_t v = 0xebe2a8u; esp -= 4; W32(esp, v); }
/* e94ada: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xe94addu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94add: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94adf: jne 0xe94b67 */
  if (!zf) goto L_e94b67;
L_e94ae5: /* e94ae5: mov eax, dword ptr [0xebe2ac] */
  eax = R32((uint32_t)(0xebe2acu));
/* e94aea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e94aeb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e94aed: jl 0xe94b52 */
  if ((sf != of)) goto L_e94b52;
L_e94aef: /* e94aef: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* e94af6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94af8: je 0xe94b52 */
  if (zf) goto L_e94b52;
L_e94afa: /* e94afa: mov edx, dword ptr [0xebe2a8] */
  edx = R32((uint32_t)(0xebe2a8u));
/* e94b00: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* e94b03: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e94b05: mov ecx, dword ptr [0xebe2a8] */
  ecx = R32((uint32_t)(0xebe2a8u));
/* e94b0b: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* e94b0e: call dword ptr [0xeae228] */
  esp -= 4; W32(esp, 0xe94b14u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e94b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94b15: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* e94b19: push 0xeb2c18 */
  { uint32_t v = 0xeb2c18u; esp -= 4; W32(esp, v); }
/* e94b1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94b1f: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe94b25u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e94b25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94b28: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* e94b2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94b30: mov dword ptr [esp + 0xb4], ebx */
  W32((uint32_t)(esp + 0xb4u), ebx);
/* e94b37: call dword ptr [0xeae0d4] */
  esp -= 4; W32(esp, 0xe94b3du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e94b3d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e94b41: mov dword ptr [esp + 0xb0], 0xffffffff */
  W32((uint32_t)(esp + 0xb0u), 0xffffffffu);
/* e94b4c: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe94b52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e94b52: /* e94b52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94b56: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94b5c: mov dword ptr [ecx + 0x54c], ebp */
  W32((uint32_t)(ecx + 0x54cu), ebp);
/* e94b62: jmp 0xe9519e */
  goto L_e9519e;
L_e94b67: /* e94b67: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94b6b: mov edi, dword ptr [ecx + 0x2b00c] */
  edi = R32((uint32_t)(ecx + 0x2b00cu));
/* e94b71: cmp dword ptr [edi + 0x19c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x19cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94b77: je 0xe94b83 */
  if (zf) goto L_e94b83;
L_e94b79: /* e94b79: call 0xe82820 */
  esp -= 4; W32(esp, 0xe94b7eu); SPILL(); f_e82820(); if (g_unwind) return; RELOAD();
/* e94b7e: jmp 0xe9512f */
  goto L_e9512f;
L_e94b83: /* e94b83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e94b86: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* e94b89: mov ebx, dword ptr [eax + 0x534] */
  ebx = R32((uint32_t)(eax + 0x534u));
/* e94b8f: mov esi, dword ptr [esp + 0xb8] */
  esi = R32((uint32_t)(esp + 0xb8u));
/* e94b96: shr ebx, 0x1e */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e94b99: not ebx */
  ebx = ~ebx;
/* e94b9b: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e94b9e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ba0: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e94ba4: je 0xe94beb */
  if (zf) goto L_e94beb;
L_e94ba6: /* e94ba6: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e94ba9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94bab: mov ecx, dword ptr [0xeae268] */
  ecx = R32((uint32_t)(0xeae268u));
/* e94bb1: je 0xe94bbe */
  if (zf) goto L_e94bbe;
L_e94bb3: /* e94bb3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94bb5: je 0xe94bc9 */
  if (zf) goto L_e94bc9;
L_e94bb7: /* e94bb7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e94bba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94bbc: jne 0xe94bb3 */
  if (!zf) goto L_e94bb3;
L_e94bbe: /* e94bbe: xor eax, eax */
  eax = 0;
/* e94bc0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94bc2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e94bc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94bc7: je 0xe94beb */
  if (zf) goto L_e94beb;
L_e94bc9: /* e94bc9: mov eax, dword ptr [edi + 0x554] */
  eax = R32((uint32_t)(edi + 0x554u));
/* e94bcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94bd1: je 0xe94beb */
  if (zf) goto L_e94beb;
L_e94bd3: /* e94bd3: cmp byte ptr [eax + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e94bd7: jne 0xe94beb */
  if (!zf) goto L_e94beb;
L_e94bd9: /* e94bd9: test byte ptr [esi + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e94bdd: jne 0xe94beb */
  if (!zf) goto L_e94beb;
L_e94bdf: /* e94bdf: mov dword ptr [edi + 0x558], 1 */
  W32((uint32_t)(edi + 0x558u), 0x1u);
/* e94be9: jmp 0xe94bf5 */
  goto L_e94bf5;
L_e94beb: /* e94beb: mov dword ptr [edi + 0x558], 0 */
  W32((uint32_t)(edi + 0x558u), 0x0u);
L_e94bf5: /* e94bf5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e94bf9: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe94bfeu); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e94bfe: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e94c05: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94c07: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe94c0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94c0d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94c11: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* e94c14: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* e94c17: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* e94c1d: mov ecx, dword ptr [ecx + 0x3ac] */
  ecx = R32((uint32_t)(ecx + 0x3acu));
/* e94c23: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e94c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94c26: mov ecx, eax */
  ecx = eax;
/* e94c28: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0xe94c2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94c2b: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* e94c32: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94c36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94c37: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* e94c3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94c3e: call 0xe89610 */
  esp -= 4; W32(esp, 0xe94c43u); SPILL(); f_e89610(); if (g_unwind) return; RELOAD();
/* e94c43: mov ebp, eax */
  ebp = eax;
/* e94c45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94c48: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94c4a: je 0xe94c84 */
  if (zf) goto L_e94c84;
L_e94c4c: /* e94c4c: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* e94c53: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* e94c5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94c5c: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94c62: mov edi, esp */
  edi = esp;
/* e94c64: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94c69: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94c70: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94c72: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94c79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94c7a: call 0xe84ae0 */
  esp -= 4; W32(esp, 0xe94c7fu); SPILL(); f_e84ae0(); if (g_unwind) return; RELOAD();
/* e94c7f: jmp 0xe94e96 */
  goto L_e94e96;
L_e94c84: /* e94c84: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* e94c8b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94c8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94c90: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* e94c94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94c95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94c97: call 0xe88ef0 */
  esp -= 4; W32(esp, 0xe94c9cu); SPILL(); f_e88ef0(); if (g_unwind) return; RELOAD();
/* e94c9c: mov ebp, eax */
  ebp = eax;
/* e94c9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94ca1: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ca3: je 0xe94cdd */
  if (zf) goto L_e94cdd;
L_e94ca5: /* e94ca5: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* e94cac: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* e94cb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94cb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94cb5: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94cbb: mov edi, esp */
  edi = esp;
/* e94cbd: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94cc2: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94cc9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94ccb: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94cd2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94cd3: call 0xe86820 */
  esp -= 4; W32(esp, 0xe94cd8u); SPILL(); f_e86820(); if (g_unwind) return; RELOAD();
/* e94cd8: jmp 0xe94e96 */
  goto L_e94e96;
L_e94cdd: /* e94cdd: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e94ce4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e94ce8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94ce9: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* e94ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94cee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94cef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94cf0: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe94cf5u); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e94cf5: mov ebp, eax */
  ebp = eax;
/* e94cf7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94cfa: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94cfc: je 0xe94d36 */
  if (zf) goto L_e94d36;
L_e94cfe: /* e94cfe: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* e94d05: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* e94d0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94d0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94d0e: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94d14: mov edi, esp */
  edi = esp;
/* e94d16: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94d1b: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94d22: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94d24: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94d2b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94d2c: call 0xe86820 */
  esp -= 4; W32(esp, 0xe94d31u); SPILL(); f_e86820(); if (g_unwind) return; RELOAD();
/* e94d31: jmp 0xe94e96 */
  goto L_e94e96;
L_e94d36: /* e94d36: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* e94d3d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94d41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94d42: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* e94d46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94d47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94d48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94d49: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe94d4eu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e94d4e: mov ebp, eax */
  ebp = eax;
/* e94d50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94d53: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94d55: je 0xe94d8f */
  if (zf) goto L_e94d8f;
L_e94d57: /* e94d57: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* e94d5e: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* e94d65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94d66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94d67: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94d6d: mov edi, esp */
  edi = esp;
/* e94d6f: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94d74: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94d7b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94d7d: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94d84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94d85: call 0xe86820 */
  esp -= 4; W32(esp, 0xe94d8au); SPILL(); f_e86820(); if (g_unwind) return; RELOAD();
/* e94d8a: jmp 0xe94e96 */
  goto L_e94e96;
L_e94d8f: /* e94d8f: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* e94d96: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94d9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94d9b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* e94d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94da0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94da2: call 0xe95270 */
  esp -= 4; W32(esp, 0xe94da7u); SPILL(); f_e95270(); if (g_unwind) return; RELOAD();
/* e94da7: mov ebp, eax */
  ebp = eax;
/* e94da9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94dac: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94dae: je 0xe94de8 */
  if (zf) goto L_e94de8;
L_e94db0: /* e94db0: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* e94db7: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* e94dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94dbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94dc0: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94dc6: mov edi, esp */
  edi = esp;
/* e94dc8: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94dcd: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94dd4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94dd6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94ddd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94dde: call 0xe86d90 */
  esp -= 4; W32(esp, 0xe94de3u); SPILL(); f_e86d90(); if (g_unwind) return; RELOAD();
/* e94de3: jmp 0xe94e96 */
  goto L_e94e96;
L_e94de8: /* e94de8: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e94def: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e94df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94df4: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* e94df8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94df9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94dfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94dfb: call 0xe95600 */
  esp -= 4; W32(esp, 0xe94e00u); SPILL(); f_e95600(); if (g_unwind) return; RELOAD();
/* e94e00: mov ebp, eax */
  ebp = eax;
/* e94e02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94e05: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94e07: je 0xe94e3e */
  if (zf) goto L_e94e3e;
L_e94e09: /* e94e09: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* e94e10: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* e94e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94e19: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94e1f: mov edi, esp */
  edi = esp;
/* e94e21: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94e26: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94e2d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94e2f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94e36: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94e37: call 0xe829c0 */
  esp -= 4; W32(esp, 0xe94e3cu); SPILL(); f_e829c0(); if (g_unwind) return; RELOAD();
/* e94e3c: jmp 0xe94e96 */
  goto L_e94e96;
L_e94e3e: /* e94e3e: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* e94e45: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e94e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e94e4a: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* e94e4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94e4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94e50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94e51: call 0xe95990 */
  esp -= 4; W32(esp, 0xe94e56u); SPILL(); f_e95990(); if (g_unwind) return; RELOAD();
/* e94e56: mov ebp, eax */
  ebp = eax;
/* e94e58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94e5b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94e5d: je 0xe9512f */
  if (zf) goto L_e9512f;
L_e94e63: /* e94e63: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* e94e6a: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* e94e71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e94e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94e73: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e94e79: mov edi, esp */
  edi = esp;
/* e94e7b: mov ecx, 0x21 */
  ecx = 0x21u;
/* e94e80: lea esi, [esp + 0xb0] */
  esi = (uint32_t)(esp + 0xb0u);
/* e94e87: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e94e89: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e94e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e94e91: call 0xe83340 */
  esp -= 4; W32(esp, 0xe94e96u); SPILL(); f_e83340(); if (g_unwind) return; RELOAD();
L_e94e96: /* e94e96: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94e98: je 0xe9503d */
  if (zf) goto L_e9503d;
L_e94e9e: /* e94e9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ea0: jne 0xe9512f */
  if (!zf) goto L_e9512f;
L_e94ea6: /* e94ea6: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* e94ead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94eaf: je 0xe94eba */
  if (zf) goto L_e94eba;
L_e94eb1: /* e94eb1: or dword ptr [eax + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* e94eb5: jmp 0xe94f4a */
  goto L_e94f4a;
L_e94eba: /* e94eba: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e94ebd: mov ecx, ebp */
  ecx = ebp;
/* e94ebf: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe94ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94ec5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ec7: je 0xe94ef6 */
  if (zf) goto L_e94ef6;
L_e94ec9: /* e94ec9: or dword ptr [ebp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x30u), r);
  }
/* e94ecd: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* e94ed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ed6: je 0xe94ede */
  if (zf) goto L_e94ede;
L_e94ed8: /* e94ed8: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_e94ede: /* e94ede: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* e94ee5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ee7: je 0xe94f4a */
  if (zf) goto L_e94f4a;
L_e94ee9: /* e94ee9: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e94eee: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe94ef4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* e94ef4: jmp 0xe94f4a */
  goto L_e94f4a;
L_e94ef6: /* e94ef6: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e94efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e94eff: call dword ptr [0xeae224] */
  esp -= 4; W32(esp, 0xe94f05u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* e94f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e94f06: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e94f0b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94f0d: push 0xeb2ba8 */
  { uint32_t v = 0xeb2ba8u; esp -= 4; W32(esp, v); }
/* e94f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94f13: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe94f19u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e94f19: mov edx, dword ptr [0xeae2b8] */
  edx = R32((uint32_t)(0xeae2b8u));
/* e94f1f: mov ecx, dword ptr [edx + 0x4e8] */
  ecx = R32((uint32_t)(edx + 0x4e8u));
/* e94f25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e94f28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94f2a: je 0xe94f3e */
  if (zf) goto L_e94f3e;
L_e94f2c: /* e94f2c: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* e94f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94f31: je 0xe94f3e */
  if (zf) goto L_e94f3e;
L_e94f33: /* e94f33: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e94f35: je 0xe94f40 */
  if (zf) goto L_e94f40;
L_e94f37: /* e94f37: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e94f3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94f3c: jne 0xe94f33 */
  if (!zf) goto L_e94f33;
L_e94f3e: /* e94f3e: xor ecx, ecx */
  ecx = 0;
L_e94f40: /* e94f40: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* e94f43: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
L_e94f4a: /* e94f4a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94f4e: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94f54: mov edi, dword ptr [ecx + 0x52c] */
  edi = R32((uint32_t)(ecx + 0x52cu));
/* e94f5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94f5c: je 0xe94fa5 */
  if (zf) goto L_e94fa5;
L_e94f5e: /* e94f5e: mov ebx, 0x52c */
  ebx = 0x52cu;
/* e94f63: mov esi, ebx */
  esi = ebx;
L_e94f65: /* e94f65: lea ebp, [eax + 0x2b470] */
  ebp = (uint32_t)(eax + 0x2b470u);
/* e94f6b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94f6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e94f6f: mov ecx, ebp */
  ecx = ebp;
/* e94f71: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe94f77u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e94f77: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e94f7a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* e94f7d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94f81: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e94f87: mov dword ptr [ebx + ecx], 0 */
  W32((uint32_t)(ebx + ecx), 0x0u);
/* e94f8e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e94f92: mov edx, dword ptr [eax + 0x2b00c] */
  edx = R32((uint32_t)(eax + 0x2b00cu));
/* e94f98: mov edi, dword ptr [esi + edx + 4] */
  edi = R32((uint32_t)(esi + edx + 0x4u));
/* e94f9c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e94f9f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94fa1: mov ebx, esi */
  ebx = esi;
/* e94fa3: jne 0xe94f65 */
  if (!zf) goto L_e94f65;
L_e94fa5: /* e94fa5: mov ecx, dword ptr [eax + 0x2b474] */
  ecx = R32((uint32_t)(eax + 0x2b474u));
/* e94fab: lea edi, [eax + 0x2b010] */
  edi = (uint32_t)(eax + 0x2b010u);
/* e94fb1: add eax, 0x2b470 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e94fb6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94fb8: je 0xe94fd0 */
  if (zf) goto L_e94fd0;
L_e94fba: /* e94fba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e94fbc: mov esi, dword ptr [edx + ecx*4 - 4] */
  esi = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* e94fc0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e94fc2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e94fc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e94fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e94fc6: mov ecx, eax */
  ecx = eax;
/* e94fc8: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe94fceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e94fce: jmp 0xe94ff6 */
  goto L_e94ff6;
L_e94fd0: /* e94fd0: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e94fd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e94fd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e94fd9: push 0xeaefec */
  { uint32_t v = 0xeaefecu; esp -= 4; W32(esp, v); }
/* e94fde: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e94fe3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe94fe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e94fe5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94fe7: je 0xe94ff4 */
  if (zf) goto L_e94ff4;
L_e94fe9: /* e94fe9: mov ecx, eax */
  ecx = eax;
/* e94feb: call 0xe82900 */
  esp -= 4; W32(esp, 0xe94ff0u); SPILL(); f_e82900(); if (g_unwind) return; RELOAD();
/* e94ff0: mov esi, eax */
  esi = eax;
/* e94ff2: jmp 0xe94ff6 */
  goto L_e94ff6;
L_e94ff4: /* e94ff4: xor esi, esi */
  esi = 0;
L_e94ff6: /* e94ff6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e94ff8: je 0xe95009 */
  if (zf) goto L_e95009;
L_e94ffa: /* e94ffa: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e94fff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e95000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95001: call 0xe81020 */
  esp -= 4; W32(esp, 0xe95006u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e95006: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e95009: /* e95009: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* e9500d: mov eax, 1 */
  eax = 0x1u;
/* e95012: mov dword ptr [esi + 0x458], eax */
  W32((uint32_t)(esi + 0x458u), eax);
/* e95018: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9501c: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e95022: mov dword ptr [edx + 0x52c], esi */
  W32((uint32_t)(edx + 0x52cu), esi);
/* e95028: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9502c: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e95032: mov dword ptr [edx + 0x54c], eax */
  W32((uint32_t)(edx + 0x54cu), eax);
/* e95038: jmp 0xe94bf5 */
  goto L_e94bf5;
L_e9503d: /* e9503d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9503f: jne 0xe9512f */
  if (!zf) goto L_e9512f;
L_e95045: /* e95045: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e95049: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e9504f: mov edi, dword ptr [ecx + 0x52c] */
  edi = R32((uint32_t)(ecx + 0x52cu));
/* e95055: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95057: je 0xe950a0 */
  if (zf) goto L_e950a0;
L_e95059: /* e95059: mov ebx, 0x52c */
  ebx = 0x52cu;
/* e9505e: mov esi, ebx */
  esi = ebx;
L_e95060: /* e95060: lea ebp, [eax + 0x2b470] */
  ebp = (uint32_t)(eax + 0x2b470u);
/* e95066: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e95068: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9506a: mov ecx, ebp */
  ecx = ebp;
/* e9506c: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe95072u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e95072: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e95075: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* e95078: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9507c: mov ecx, dword ptr [eax + 0x2b00c] */
  ecx = R32((uint32_t)(eax + 0x2b00cu));
/* e95082: mov dword ptr [ebx + ecx], 0 */
  W32((uint32_t)(ebx + ecx), 0x0u);
/* e95089: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9508d: mov edx, dword ptr [eax + 0x2b00c] */
  edx = R32((uint32_t)(eax + 0x2b00cu));
/* e95093: mov edi, dword ptr [esi + edx + 4] */
  edi = R32((uint32_t)(esi + edx + 0x4u));
/* e95097: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9509a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9509c: mov ebx, esi */
  ebx = esi;
/* e9509e: jne 0xe95060 */
  if (!zf) goto L_e95060;
L_e950a0: /* e950a0: mov ecx, dword ptr [eax + 0x2b474] */
  ecx = R32((uint32_t)(eax + 0x2b474u));
/* e950a6: lea edi, [eax + 0x2b010] */
  edi = (uint32_t)(eax + 0x2b010u);
/* e950ac: add eax, 0x2b470 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e950b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e950b3: je 0xe950cb */
  if (zf) goto L_e950cb;
L_e950b5: /* e950b5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e950b7: mov esi, dword ptr [edx + ecx*4 - 4] */
  esi = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* e950bb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e950bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e950be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e950c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e950c1: mov ecx, eax */
  ecx = eax;
/* e950c3: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe950c9u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e950c9: jmp 0xe950f1 */
  goto L_e950f1;
L_e950cb: /* e950cb: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e950d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e950d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e950d4: push 0xeaefec */
  { uint32_t v = 0xeaefecu; esp -= 4; W32(esp, v); }
/* e950d9: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e950de: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe950e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e950e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e950e2: je 0xe950ef */
  if (zf) goto L_e950ef;
L_e950e4: /* e950e4: mov ecx, eax */
  ecx = eax;
/* e950e6: call 0xe82900 */
  esp -= 4; W32(esp, 0xe950ebu); SPILL(); f_e82900(); if (g_unwind) return; RELOAD();
/* e950eb: mov esi, eax */
  esi = eax;
/* e950ed: jmp 0xe950f1 */
  goto L_e950f1;
L_e950ef: /* e950ef: xor esi, esi */
  esi = 0;
L_e950f1: /* e950f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e950f3: je 0xe95104 */
  if (zf) goto L_e95104;
L_e950f5: /* e950f5: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e950fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e950fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e950fc: call 0xe81020 */
  esp -= 4; W32(esp, 0xe95101u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e95101: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e95104: /* e95104: mov eax, 1 */
  eax = 0x1u;
/* e95109: mov dword ptr [esi + 0x458], eax */
  W32((uint32_t)(esi + 0x458u), eax);
/* e9510f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e95113: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e95119: mov dword ptr [edx + 0x52c], esi */
  W32((uint32_t)(edx + 0x52cu), esi);
/* e9511f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e95123: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e95129: mov dword ptr [edx + 0x54c], eax */
  W32((uint32_t)(edx + 0x54cu), eax);
L_e9512f: /* e9512f: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* e95136: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95138: je 0xe9514c */
  if (zf) goto L_e9514c;
L_e9513a: /* e9513a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9513e: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e95144: mov ecx, dword ptr [edx + 0x54c] */
  ecx = R32((uint32_t)(edx + 0x54cu));
/* e9514a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e9514c: /* e9514c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e95150: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e95156: mov dword ptr [eax + 0x550], 0 */
  W32((uint32_t)(eax + 0x550u), 0x0u);
/* e95160: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e95164: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e95167: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e9516d: mov eax, dword ptr [edx + 0x30f08] */
  eax = R32((uint32_t)(edx + 0x30f08u));
/* e95173: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e95176: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e95179: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9517b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9517d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e95180: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e95182: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e95184: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e95188: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9518b: mov edx, dword ptr [ecx + 0x30f04] */
  edx = R32((uint32_t)(ecx + 0x30f04u));
/* e95191: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e95196: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e95199: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9519c: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_e9519e: /* e9519e: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* e951a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e951a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e951a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e951a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e951af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e951b0: add esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e951b6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e951c0(void) {
  LOAD_REGS();
L_e951c0: /* e951c0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e951c4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* e951c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e951ca: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e951cd: jne 0xe951d4 */
  if (!zf) goto L_e951d4;
L_e951cf: /* e951cf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e951d3: ret  */
  esp += 4; SPILL(); return;
L_e951d4: /* e951d4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e951d8: ret  */
  esp += 4; SPILL(); return;
}

void f_e951e0(void) {
  LOAD_REGS();
L_e951e0: /* e951e0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e951e4: fcomp dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
  FPOP();
/* e951ea: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e951ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e951f0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e951f3: je 0xe951f7 */
  if (zf) goto L_e951f7;
L_e951f5: /* e951f5: fchs  */
  ST0 = -ST0;
L_e951f7: /* e951f7: ret  */
  esp += 4; SPILL(); return;
}

void f_e95200(void) {
  LOAD_REGS();
L_e95200: /* e95200: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e95204: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* e95208: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9520a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9520d: jp 0xe95214 */
  if (pf) goto L_e95214;
L_e9520f: /* e9520f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e95213: ret  */
  esp += 4; SPILL(); return;
L_e95214: /* e95214: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e95218: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* e9521c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9521e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e95221: jp 0xe95228 */
  if (pf) goto L_e95228;
L_e95223: /* e95223: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e95227: ret  */
  esp += 4; SPILL(); return;
L_e95228: /* e95228: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* e9522c: ret  */
  esp += 4; SPILL(); return;
}

void f_e95230(void) {
  LOAD_REGS();
L_e95230: /* e95230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e95231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95232: mov ebp, ecx */
  ebp = ecx;
/* e95234: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e95235: mov esi, ebp */
  esi = ebp;
/* e95237: mov edi, 0x10 */
  edi = 0x10u;
/* e9523c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e95240: /* e95240: push 0xe88430 */
  { uint32_t v = 0xe88430u; esp -= 4; W32(esp, v); }
/* e95245: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e95247: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e95249: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9524a: call 0xe81240 */
  esp -= 4; W32(esp, 0xe9524fu); SPILL(); f_e81240(); if (g_unwind) return; RELOAD();
/* e9524f: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* e95256: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e95259: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e9525a: jne 0xe95240 */
  if (!zf) goto L_e95240;
L_e9525c: /* e9525c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9525d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9525e: mov dword ptr [ebp + 0x440], 0 */
  W32((uint32_t)(ebp + 0x440u), 0x0u);
/* e95268: mov eax, ebp */
  eax = ebp;
/* e9526a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9526b: ret  */
  esp += 4; SPILL(); return;
}

void f_e95270(void) {
  LOAD_REGS();
L_e95270: /* e95270: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95273: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e95274: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e95275: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95276: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e9527a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9527c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9527d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e95281: je 0xe95293 */
  if (zf) goto L_e95293;
L_e95283: /* e95283: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95285: je 0xe95293 */
  if (zf) goto L_e95293;
L_e95287: /* e95287: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e95289: mov ecx, edi */
  ecx = edi;
/* e9528b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95291u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95291: jmp 0xe95295 */
  goto L_e95295;
L_e95293: /* e95293: mov eax, edi */
  eax = edi;
L_e95295: /* e95295: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95297: mov ebp, dword ptr [0xeae2bc] */
  ebp = R32((uint32_t)(0xeae2bcu));
/* e9529d: je 0xe952c4 */
  if (zf) goto L_e952c4;
L_e9529f: /* e9529f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e952a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952a4: je 0xe952b5 */
  if (zf) goto L_e952b5;
L_e952a6: /* e952a6: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e952a8: je 0xe955f6 */
  if (zf) goto L_e955f6;
L_e952ae: /* e952ae: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e952b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952b3: jne 0xe952a6 */
  if (!zf) goto L_e952a6;
L_e952b5: /* e952b5: xor ecx, ecx */
  ecx = 0;
/* e952b7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952b9: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e952bc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952be: jne 0xe955f6 */
  if (!zf) goto L_e955f6;
L_e952c4: /* e952c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952c6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e952ce: je 0xe952e6 */
  if (zf) goto L_e952e6;
L_e952d0: /* e952d0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952d2: je 0xe952e6 */
  if (zf) goto L_e952e6;
L_e952d4: /* e952d4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e952d6: mov ecx, edi */
  ecx = edi;
/* e952d8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe952deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e952de: mov ebp, dword ptr [0xeae2bc] */
  ebp = R32((uint32_t)(0xeae2bcu));
/* e952e4: jmp 0xe952e8 */
  goto L_e952e8;
L_e952e6: /* e952e6: mov eax, edi */
  eax = edi;
L_e952e8: /* e952e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952ea: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e952f0: /* e952f0: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e952f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e952f5: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e952fb: je 0xe9530b */
  if (zf) goto L_e9530b;
L_e952fd: /* e952fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e95300: /* e95300: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95302: je 0xe9531a */
  if (zf) goto L_e9531a;
L_e95304: /* e95304: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95307: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95309: jne 0xe95300 */
  if (!zf) goto L_e95300;
L_e9530b: /* e9530b: xor ecx, ecx */
  ecx = 0;
/* e9530d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9530f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95312: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95314: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e9531a: /* e9531a: mov esi, eax */
  esi = eax;
/* e9531c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95322: je 0xe95341 */
  if (zf) goto L_e95341;
L_e95324: /* e95324: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e95327: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95329: je 0xe95341 */
  if (zf) goto L_e95341;
L_e9532b: /* e9532b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9532d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95333: mov ebp, dword ptr [0xeae2bc] */
  ebp = R32((uint32_t)(0xeae2bcu));
/* e95339: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e9533f: jmp 0xe95344 */
  goto L_e95344;
L_e95341: /* e95341: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e95344: /* e95344: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95346: je 0xe9536a */
  if (zf) goto L_e9536a;
L_e95348: /* e95348: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9534b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9534d: je 0xe9535b */
  if (zf) goto L_e9535b;
L_e9534f: /* e9534f: nop  */
L_e95350: /* e95350: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95352: je 0xe95366 */
  if (zf) goto L_e95366;
L_e95354: /* e95354: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95357: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95359: jne 0xe95350 */
  if (!zf) goto L_e95350;
L_e9535b: /* e9535b: xor ecx, ecx */
  ecx = 0;
/* e9535d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9535f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95362: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95364: je 0xe9536a */
  if (zf) goto L_e9536a;
L_e95366: /* e95366: mov ebx, eax */
  ebx = eax;
/* e95368: jmp 0xe9536c */
  goto L_e9536c;
L_e9536a: /* e9536a: xor ebx, ebx */
  ebx = 0;
L_e9536c: /* e9536c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95370: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95372: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e95376: je 0xe95395 */
  if (zf) goto L_e95395;
L_e95378: /* e95378: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e9537b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9537d: je 0xe95395 */
  if (zf) goto L_e95395;
L_e9537f: /* e9537f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95381: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95387u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95387: mov ebp, dword ptr [0xeae2bc] */
  ebp = R32((uint32_t)(0xeae2bcu));
/* e9538d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e95393: jmp 0xe95398 */
  goto L_e95398;
L_e95395: /* e95395: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e95398: /* e95398: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9539a: je 0xe953c1 */
  if (zf) goto L_e953c1;
L_e9539c: /* e9539c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9539f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953a1: je 0xe953b2 */
  if (zf) goto L_e953b2;
L_e953a3: /* e953a3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e953a5: je 0xe9531a */
  if (zf) goto L_e9531a;
L_e953ab: /* e953ab: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e953ae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953b0: jne 0xe953a3 */
  if (!zf) goto L_e953a3;
L_e953b2: /* e953b2: xor ecx, ecx */
  ecx = 0;
/* e953b4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e953b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953bb: jne 0xe9531a */
  if (!zf) goto L_e9531a;
L_e953c1: /* e953c1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953c3: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e953c9: /* e953c9: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e953cd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953cf: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e953d5: /* e953d5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e953d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953db: mov esi, 1 */
  esi = 0x1u;
/* e953e0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e953e4: je 0xe953f6 */
  if (zf) goto L_e953f6;
L_e953e6: /* e953e6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e953e8: je 0xe953f6 */
  if (zf) goto L_e953f6;
L_e953ea: /* e953ea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e953ec: mov ecx, edi */
  ecx = edi;
/* e953ee: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe953f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e953f4: jmp 0xe953f8 */
  goto L_e953f8;
L_e953f6: /* e953f6: mov eax, edi */
  eax = edi;
L_e953f8: /* e953f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e953f9: call 0xe88110 */
  esp -= 4; W32(esp, 0xe953feu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e953fe: mov ebp, eax */
  ebp = eax;
/* e95400: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95403: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95405: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e9540b: /* e9540b: jmp 0xe95410 */
  goto L_e95410;
L_e95410: /* e95410: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e95413: mov ecx, ebp */
  ecx = ebp;
/* e95415: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9541bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9541b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9541d: je 0xe9542a */
  if (zf) goto L_e9542a;
L_e9541f: /* e9541f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95425: je 0xe9542a */
  if (zf) goto L_e9542a;
L_e95427: /* e95427: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e9542a: /* e9542a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e9542d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9542f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e95435: je 0xe95442 */
  if (zf) goto L_e95442;
L_e95437: /* e95437: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95439: je 0xe9544d */
  if (zf) goto L_e9544d;
L_e9543b: /* e9543b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9543e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95440: jne 0xe95437 */
  if (!zf) goto L_e95437;
L_e95442: /* e95442: xor eax, eax */
  eax = 0;
/* e95444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95446: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9544b: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e9544d: /* e9544d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e95451: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e95454: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e95457: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e9545d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e95463: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e95466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95467: mov ecx, ebp */
  ecx = ebp;
/* e95469: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe9546fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9546f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95471: je 0xe95495 */
  if (zf) goto L_e95495;
L_e95473: /* e95473: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95476: mov esi, eax */
  esi = eax;
/* e95478: mov edi, esp */
  edi = esp;
/* e9547a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95480: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95485: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95487: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e9548a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95490u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95490: mov esi, 1 */
  esi = 0x1u;
L_e95495: /* e95495: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9549b: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e9549d: /* e9549d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e954a1: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e954a3: /* e954a3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e954a5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e954a8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e954ab: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e954ae: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e954b1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e954b4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e954b6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e954b9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e954c1: /* e954c1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e954c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954c6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e954cc: je 0xe954db */
  if (zf) goto L_e954db;
L_e954ce: /* e954ce: mov edi, edi */
  edi = edi;
L_e954d0: /* e954d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e954d2: je 0xe954e6 */
  if (zf) goto L_e954e6;
L_e954d4: /* e954d4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e954d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954d9: jne 0xe954d0 */
  if (!zf) goto L_e954d0;
L_e954db: /* e954db: xor eax, eax */
  eax = 0;
/* e954dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954df: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e954e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954e4: je 0xe9551d */
  if (zf) goto L_e9551d;
L_e954e6: /* e954e6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e954e9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e954ec: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e954ef: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e954f2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e954f4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e954f7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e954fa: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e954fc: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e954fe: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95501: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95504: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95507: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95509: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e9550c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9550f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e95512: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95514: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e95517: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e9551a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e9551d: /* e9551d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95522: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e95528: je 0xe9553b */
  if (zf) goto L_e9553b;
L_e9552a: /* e9552a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e95530: /* e95530: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95532: je 0xe95546 */
  if (zf) goto L_e95546;
L_e95534: /* e95534: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95539: jne 0xe95530 */
  if (!zf) goto L_e95530;
L_e9553b: /* e9553b: xor eax, eax */
  eax = 0;
/* e9553d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9553f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95544: je 0xe9556b */
  if (zf) goto L_e9556b;
L_e95546: /* e95546: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e95549: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e9554c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e9554f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95552: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95554: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95556: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e95558: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e9555b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9555e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95560: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e95562: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e95565: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e95568: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e9556b: /* e9556b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e9556e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95570: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95576: je 0xe95583 */
  if (zf) goto L_e95583;
L_e95578: /* e95578: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9557a: je 0xe9558e */
  if (zf) goto L_e9558e;
L_e9557c: /* e9557c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9557f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95581: jne 0xe95578 */
  if (!zf) goto L_e95578;
L_e95583: /* e95583: xor eax, eax */
  eax = 0;
/* e95585: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95587: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9558a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9558c: je 0xe955a2 */
  if (zf) goto L_e955a2;
L_e9558e: /* e9558e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95591: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95594: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95597: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9559a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9559c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e955a2: /* e955a2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e955a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955a8: je 0xe955bb */
  if (zf) goto L_e955bb;
L_e955aa: /* e955aa: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e955ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955af: je 0xe955bb */
  if (zf) goto L_e955bb;
L_e955b1: /* e955b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e955b3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe955b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e955b9: jmp 0xe955be */
  goto L_e955be;
L_e955bb: /* e955bb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e955be: /* e955be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955c0: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e955c2: /* e955c2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e955c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955c7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e955cd: je 0xe955db */
  if (zf) goto L_e955db;
L_e955cf: /* e955cf: nop  */
L_e955d0: /* e955d0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e955d2: je 0xe955e6 */
  if (zf) goto L_e955e6;
L_e955d4: /* e955d4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e955d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955d9: jne 0xe955d0 */
  if (!zf) goto L_e955d0;
L_e955db: /* e955db: xor ecx, ecx */
  ecx = 0;
/* e955dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955df: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e955e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955e4: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e955e6: /* e955e6: mov ebp, eax */
  ebp = eax;
/* e955e8: mov esi, 1 */
  esi = 0x1u;
/* e955ed: jmp 0xe95410 */
  goto L_e95410;
L_e955f2: /* e955f2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e955f6: /* e955f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e955f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e955f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e955f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e955fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e955fd: ret  */
  esp += 4; SPILL(); return;
}

void f_e9540d(void) {
  LOAD_REGS();
L_e9540d: /* e9540d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e95410: /* e95410: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e95413: mov ecx, ebp */
  ecx = ebp;
/* e95415: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9541bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9541b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9541d: je 0xe9542a */
  if (zf) goto L_e9542a;
L_e9541f: /* e9541f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95425: je 0xe9542a */
  if (zf) goto L_e9542a;
L_e95427: /* e95427: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e9542a: /* e9542a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e9542d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9542f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e95435: je 0xe95442 */
  if (zf) goto L_e95442;
L_e95437: /* e95437: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95439: je 0xe9544d */
  if (zf) goto L_e9544d;
L_e9543b: /* e9543b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9543e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95440: jne 0xe95437 */
  if (!zf) goto L_e95437;
L_e95442: /* e95442: xor eax, eax */
  eax = 0;
/* e95444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95446: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9544b: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e9544d: /* e9544d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e95451: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e95454: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e95457: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e9545d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e95463: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e95466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95467: mov ecx, ebp */
  ecx = ebp;
/* e95469: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe9546fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9546f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95471: je 0xe95495 */
  if (zf) goto L_e95495;
L_e95473: /* e95473: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95476: mov esi, eax */
  esi = eax;
/* e95478: mov edi, esp */
  edi = esp;
/* e9547a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95480: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95485: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95487: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e9548a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95490u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95490: mov esi, 1 */
  esi = 0x1u;
L_e95495: /* e95495: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9549b: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e9549d: /* e9549d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e954a1: je 0xe954c1 */
  if (zf) goto L_e954c1;
L_e954a3: /* e954a3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e954a5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e954a8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e954ab: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e954ae: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e954b1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e954b4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e954b6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e954b9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e954c1: /* e954c1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e954c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954c6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e954cc: je 0xe954db */
  if (zf) goto L_e954db;
L_e954ce: /* e954ce: mov edi, edi */
  edi = edi;
L_e954d0: /* e954d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e954d2: je 0xe954e6 */
  if (zf) goto L_e954e6;
L_e954d4: /* e954d4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e954d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954d9: jne 0xe954d0 */
  if (!zf) goto L_e954d0;
L_e954db: /* e954db: xor eax, eax */
  eax = 0;
/* e954dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954df: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e954e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e954e4: je 0xe9551d */
  if (zf) goto L_e9551d;
L_e954e6: /* e954e6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e954e9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e954ec: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e954ef: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e954f2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e954f4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e954f7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e954fa: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e954fc: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e954fe: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95501: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95504: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95507: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95509: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e9550c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9550f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e95512: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95514: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e95517: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e9551a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e9551d: /* e9551d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95522: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e95528: je 0xe9553b */
  if (zf) goto L_e9553b;
L_e9552a: /* e9552a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e95530: /* e95530: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95532: je 0xe95546 */
  if (zf) goto L_e95546;
L_e95534: /* e95534: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95539: jne 0xe95530 */
  if (!zf) goto L_e95530;
L_e9553b: /* e9553b: xor eax, eax */
  eax = 0;
/* e9553d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9553f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95544: je 0xe9556b */
  if (zf) goto L_e9556b;
L_e95546: /* e95546: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e95549: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e9554c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e9554f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95552: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95554: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95556: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e95558: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e9555b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9555e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95560: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e95562: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e95565: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e95568: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e9556b: /* e9556b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e9556e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95570: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95576: je 0xe95583 */
  if (zf) goto L_e95583;
L_e95578: /* e95578: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9557a: je 0xe9558e */
  if (zf) goto L_e9558e;
L_e9557c: /* e9557c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9557f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95581: jne 0xe95578 */
  if (!zf) goto L_e95578;
L_e95583: /* e95583: xor eax, eax */
  eax = 0;
/* e95585: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95587: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9558a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9558c: je 0xe955a2 */
  if (zf) goto L_e955a2;
L_e9558e: /* e9558e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95591: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95594: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95597: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9559a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9559c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e955a2: /* e955a2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e955a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955a8: je 0xe955bb */
  if (zf) goto L_e955bb;
L_e955aa: /* e955aa: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e955ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955af: je 0xe955bb */
  if (zf) goto L_e955bb;
L_e955b1: /* e955b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e955b3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe955b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e955b9: jmp 0xe955be */
  goto L_e955be;
L_e955bb: /* e955bb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e955be: /* e955be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955c0: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e955c2: /* e955c2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e955c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955c7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e955cd: je 0xe955db */
  if (zf) goto L_e955db;
L_e955cf: /* e955cf: nop  */
L_e955d0: /* e955d0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e955d2: je 0xe955e6 */
  if (zf) goto L_e955e6;
L_e955d4: /* e955d4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e955d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955d9: jne 0xe955d0 */
  if (!zf) goto L_e955d0;
L_e955db: /* e955db: xor ecx, ecx */
  ecx = 0;
/* e955dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955df: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e955e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e955e4: je 0xe955f2 */
  if (zf) goto L_e955f2;
L_e955e6: /* e955e6: mov ebp, eax */
  ebp = eax;
/* e955e8: mov esi, 1 */
  esi = 0x1u;
/* e955ed: jmp 0xe95410 */
  goto L_e95410;
L_e955f2: /* e955f2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e955f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e955f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e955f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e955f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e955fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e955fd: ret  */
  esp += 4; SPILL(); return;
}

void f_e95600(void) {
  LOAD_REGS();
L_e95600: /* e95600: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95603: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e95604: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e95605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95606: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e9560a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9560c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9560d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e95611: je 0xe95623 */
  if (zf) goto L_e95623;
L_e95613: /* e95613: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95615: je 0xe95623 */
  if (zf) goto L_e95623;
L_e95617: /* e95617: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e95619: mov ecx, edi */
  ecx = edi;
/* e9561b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95621u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95621: jmp 0xe95625 */
  goto L_e95625;
L_e95623: /* e95623: mov eax, edi */
  eax = edi;
L_e95625: /* e95625: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95627: mov ebp, dword ptr [0xeae2c0] */
  ebp = R32((uint32_t)(0xeae2c0u));
/* e9562d: je 0xe95654 */
  if (zf) goto L_e95654;
L_e9562f: /* e9562f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95632: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95634: je 0xe95645 */
  if (zf) goto L_e95645;
L_e95636: /* e95636: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95638: je 0xe95986 */
  if (zf) goto L_e95986;
L_e9563e: /* e9563e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95641: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95643: jne 0xe95636 */
  if (!zf) goto L_e95636;
L_e95645: /* e95645: xor ecx, ecx */
  ecx = 0;
/* e95647: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95649: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9564c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9564e: jne 0xe95986 */
  if (!zf) goto L_e95986;
L_e95654: /* e95654: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95656: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e9565e: je 0xe95676 */
  if (zf) goto L_e95676;
L_e95660: /* e95660: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95662: je 0xe95676 */
  if (zf) goto L_e95676;
L_e95664: /* e95664: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e95666: mov ecx, edi */
  ecx = edi;
/* e95668: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe9566eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9566e: mov ebp, dword ptr [0xeae2c0] */
  ebp = R32((uint32_t)(0xeae2c0u));
/* e95674: jmp 0xe95678 */
  goto L_e95678;
L_e95676: /* e95676: mov eax, edi */
  eax = edi;
L_e95678: /* e95678: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9567a: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95680: /* e95680: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95683: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95685: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e9568b: je 0xe9569b */
  if (zf) goto L_e9569b;
L_e9568d: /* e9568d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e95690: /* e95690: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95692: je 0xe956aa */
  if (zf) goto L_e956aa;
L_e95694: /* e95694: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95697: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95699: jne 0xe95690 */
  if (!zf) goto L_e95690;
L_e9569b: /* e9569b: xor ecx, ecx */
  ecx = 0;
/* e9569d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9569f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e956a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956a4: je 0xe95982 */
  if (zf) goto L_e95982;
L_e956aa: /* e956aa: mov esi, eax */
  esi = eax;
/* e956ac: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e956b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956b2: je 0xe956d1 */
  if (zf) goto L_e956d1;
L_e956b4: /* e956b4: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e956b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956b9: je 0xe956d1 */
  if (zf) goto L_e956d1;
L_e956bb: /* e956bb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e956bd: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe956c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e956c3: mov ebp, dword ptr [0xeae2c0] */
  ebp = R32((uint32_t)(0xeae2c0u));
/* e956c9: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e956cf: jmp 0xe956d4 */
  goto L_e956d4;
L_e956d1: /* e956d1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e956d4: /* e956d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956d6: je 0xe956fa */
  if (zf) goto L_e956fa;
L_e956d8: /* e956d8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e956db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956dd: je 0xe956eb */
  if (zf) goto L_e956eb;
L_e956df: /* e956df: nop  */
L_e956e0: /* e956e0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e956e2: je 0xe956f6 */
  if (zf) goto L_e956f6;
L_e956e4: /* e956e4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e956e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956e9: jne 0xe956e0 */
  if (!zf) goto L_e956e0;
L_e956eb: /* e956eb: xor ecx, ecx */
  ecx = 0;
/* e956ed: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956ef: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e956f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e956f4: je 0xe956fa */
  if (zf) goto L_e956fa;
L_e956f6: /* e956f6: mov ebx, eax */
  ebx = eax;
/* e956f8: jmp 0xe956fc */
  goto L_e956fc;
L_e956fa: /* e956fa: xor ebx, ebx */
  ebx = 0;
L_e956fc: /* e956fc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95702: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e95706: je 0xe95725 */
  if (zf) goto L_e95725;
L_e95708: /* e95708: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e9570b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9570d: je 0xe95725 */
  if (zf) goto L_e95725;
L_e9570f: /* e9570f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95711: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95717u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95717: mov ebp, dword ptr [0xeae2c0] */
  ebp = R32((uint32_t)(0xeae2c0u));
/* e9571d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e95723: jmp 0xe95728 */
  goto L_e95728;
L_e95725: /* e95725: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e95728: /* e95728: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9572a: je 0xe95751 */
  if (zf) goto L_e95751;
L_e9572c: /* e9572c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9572f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95731: je 0xe95742 */
  if (zf) goto L_e95742;
L_e95733: /* e95733: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95735: je 0xe956aa */
  if (zf) goto L_e956aa;
L_e9573b: /* e9573b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e9573e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95740: jne 0xe95733 */
  if (!zf) goto L_e95733;
L_e95742: /* e95742: xor ecx, ecx */
  ecx = 0;
/* e95744: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95746: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95749: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9574b: jne 0xe956aa */
  if (!zf) goto L_e956aa;
L_e95751: /* e95751: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95753: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95759: /* e95759: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e9575d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9575f: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95765: /* e95765: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9576b: mov esi, 1 */
  esi = 0x1u;
/* e95770: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e95774: je 0xe95786 */
  if (zf) goto L_e95786;
L_e95776: /* e95776: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95778: je 0xe95786 */
  if (zf) goto L_e95786;
L_e9577a: /* e9577a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e9577c: mov ecx, edi */
  ecx = edi;
/* e9577e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95784u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95784: jmp 0xe95788 */
  goto L_e95788;
L_e95786: /* e95786: mov eax, edi */
  eax = edi;
L_e95788: /* e95788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95789: call 0xe88110 */
  esp -= 4; W32(esp, 0xe9578eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e9578e: mov ebp, eax */
  ebp = eax;
/* e95790: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95793: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95795: je 0xe95982 */
  if (zf) goto L_e95982;
L_e9579b: /* e9579b: jmp 0xe957a0 */
  goto L_e957a0;
L_e957a0: /* e957a0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e957a3: mov ecx, ebp */
  ecx = ebp;
/* e957a5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe957abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e957ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957ad: je 0xe957ba */
  if (zf) goto L_e957ba;
L_e957af: /* e957af: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e957b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957b5: je 0xe957ba */
  if (zf) goto L_e957ba;
L_e957b7: /* e957b7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e957ba: /* e957ba: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e957bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957bf: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e957c5: je 0xe957d2 */
  if (zf) goto L_e957d2;
L_e957c7: /* e957c7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e957c9: je 0xe957dd */
  if (zf) goto L_e957dd;
L_e957cb: /* e957cb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e957ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957d0: jne 0xe957c7 */
  if (!zf) goto L_e957c7;
L_e957d2: /* e957d2: xor eax, eax */
  eax = 0;
/* e957d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957d6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e957d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957db: je 0xe95851 */
  if (zf) goto L_e95851;
L_e957dd: /* e957dd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e957e1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e957e4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e957e7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e957ed: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e957f3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e957f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e957f7: mov ecx, ebp */
  ecx = ebp;
/* e957f9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe957ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e957ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95801: je 0xe95825 */
  if (zf) goto L_e95825;
L_e95803: /* e95803: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95806: mov esi, eax */
  esi = eax;
/* e95808: mov edi, esp */
  edi = esp;
/* e9580a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95810: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95815: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95817: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e9581a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95820u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95820: mov esi, 1 */
  esi = 0x1u;
L_e95825: /* e95825: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9582b: je 0xe95851 */
  if (zf) goto L_e95851;
L_e9582d: /* e9582d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e95831: je 0xe95851 */
  if (zf) goto L_e95851;
L_e95833: /* e95833: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e95835: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95838: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e9583b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e9583e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e95841: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95844: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95846: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e95849: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e95851: /* e95851: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95856: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e9585c: je 0xe9586b */
  if (zf) goto L_e9586b;
L_e9585e: /* e9585e: mov edi, edi */
  edi = edi;
L_e95860: /* e95860: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95862: je 0xe95876 */
  if (zf) goto L_e95876;
L_e95864: /* e95864: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95867: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95869: jne 0xe95860 */
  if (!zf) goto L_e95860;
L_e9586b: /* e9586b: xor eax, eax */
  eax = 0;
/* e9586d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9586f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95872: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95874: je 0xe958ad */
  if (zf) goto L_e958ad;
L_e95876: /* e95876: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e95879: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e9587c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e9587f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95882: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95884: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e95887: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e9588a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9588c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9588e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95891: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95894: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95897: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95899: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e9589c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9589f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e958a2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e958a4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e958a7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e958aa: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e958ad: /* e958ad: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e958b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958b2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e958b8: je 0xe958cb */
  if (zf) goto L_e958cb;
L_e958ba: /* e958ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e958c0: /* e958c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e958c2: je 0xe958d6 */
  if (zf) goto L_e958d6;
L_e958c4: /* e958c4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e958c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958c9: jne 0xe958c0 */
  if (!zf) goto L_e958c0;
L_e958cb: /* e958cb: xor eax, eax */
  eax = 0;
/* e958cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958cf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e958d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958d4: je 0xe958fb */
  if (zf) goto L_e958fb;
L_e958d6: /* e958d6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e958d9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e958dc: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e958df: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e958e2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e958e4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e958e6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e958e8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e958eb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e958ee: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e958f0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e958f2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e958f5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e958f8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e958fb: /* e958fb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e958fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95900: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95906: je 0xe95913 */
  if (zf) goto L_e95913;
L_e95908: /* e95908: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9590a: je 0xe9591e */
  if (zf) goto L_e9591e;
L_e9590c: /* e9590c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9590f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95911: jne 0xe95908 */
  if (!zf) goto L_e95908;
L_e95913: /* e95913: xor eax, eax */
  eax = 0;
/* e95915: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95917: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9591a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9591c: je 0xe95932 */
  if (zf) goto L_e95932;
L_e9591e: /* e9591e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95921: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95924: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95927: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9592a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9592c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e95932: /* e95932: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95936: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95938: je 0xe9594b */
  if (zf) goto L_e9594b;
L_e9593a: /* e9593a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e9593d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9593f: je 0xe9594b */
  if (zf) goto L_e9594b;
L_e95941: /* e95941: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95943: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95949u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95949: jmp 0xe9594e */
  goto L_e9594e;
L_e9594b: /* e9594b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e9594e: /* e9594e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95950: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95952: /* e95952: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95955: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95957: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e9595d: je 0xe9596b */
  if (zf) goto L_e9596b;
L_e9595f: /* e9595f: nop  */
L_e95960: /* e95960: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95962: je 0xe95976 */
  if (zf) goto L_e95976;
L_e95964: /* e95964: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95967: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95969: jne 0xe95960 */
  if (!zf) goto L_e95960;
L_e9596b: /* e9596b: xor ecx, ecx */
  ecx = 0;
/* e9596d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9596f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95972: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95974: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95976: /* e95976: mov ebp, eax */
  ebp = eax;
/* e95978: mov esi, 1 */
  esi = 0x1u;
/* e9597d: jmp 0xe957a0 */
  goto L_e957a0;
L_e95982: /* e95982: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e95986: /* e95986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e95987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95988: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e95989: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9598a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9598d: ret  */
  esp += 4; SPILL(); return;
}

void f_e9579d(void) {
  LOAD_REGS();
L_e9579d: /* e9579d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e957a0: /* e957a0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e957a3: mov ecx, ebp */
  ecx = ebp;
/* e957a5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe957abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e957ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957ad: je 0xe957ba */
  if (zf) goto L_e957ba;
L_e957af: /* e957af: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e957b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957b5: je 0xe957ba */
  if (zf) goto L_e957ba;
L_e957b7: /* e957b7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e957ba: /* e957ba: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e957bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957bf: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e957c5: je 0xe957d2 */
  if (zf) goto L_e957d2;
L_e957c7: /* e957c7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e957c9: je 0xe957dd */
  if (zf) goto L_e957dd;
L_e957cb: /* e957cb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e957ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957d0: jne 0xe957c7 */
  if (!zf) goto L_e957c7;
L_e957d2: /* e957d2: xor eax, eax */
  eax = 0;
/* e957d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957d6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e957d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e957db: je 0xe95851 */
  if (zf) goto L_e95851;
L_e957dd: /* e957dd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e957e1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e957e4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e957e7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e957ed: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e957f3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e957f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e957f7: mov ecx, ebp */
  ecx = ebp;
/* e957f9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe957ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e957ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95801: je 0xe95825 */
  if (zf) goto L_e95825;
L_e95803: /* e95803: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95806: mov esi, eax */
  esi = eax;
/* e95808: mov edi, esp */
  edi = esp;
/* e9580a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95810: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95815: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95817: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e9581a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95820u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95820: mov esi, 1 */
  esi = 0x1u;
L_e95825: /* e95825: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9582b: je 0xe95851 */
  if (zf) goto L_e95851;
L_e9582d: /* e9582d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e95831: je 0xe95851 */
  if (zf) goto L_e95851;
L_e95833: /* e95833: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e95835: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95838: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e9583b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e9583e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e95841: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95844: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95846: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e95849: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e95851: /* e95851: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95856: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e9585c: je 0xe9586b */
  if (zf) goto L_e9586b;
L_e9585e: /* e9585e: mov edi, edi */
  edi = edi;
L_e95860: /* e95860: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95862: je 0xe95876 */
  if (zf) goto L_e95876;
L_e95864: /* e95864: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95867: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95869: jne 0xe95860 */
  if (!zf) goto L_e95860;
L_e9586b: /* e9586b: xor eax, eax */
  eax = 0;
/* e9586d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9586f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95872: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95874: je 0xe958ad */
  if (zf) goto L_e958ad;
L_e95876: /* e95876: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e95879: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e9587c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e9587f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95882: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95884: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e95887: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e9588a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9588c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9588e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95891: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95894: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95897: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95899: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e9589c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9589f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e958a2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e958a4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e958a7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e958aa: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e958ad: /* e958ad: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e958b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958b2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e958b8: je 0xe958cb */
  if (zf) goto L_e958cb;
L_e958ba: /* e958ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e958c0: /* e958c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e958c2: je 0xe958d6 */
  if (zf) goto L_e958d6;
L_e958c4: /* e958c4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e958c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958c9: jne 0xe958c0 */
  if (!zf) goto L_e958c0;
L_e958cb: /* e958cb: xor eax, eax */
  eax = 0;
/* e958cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958cf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e958d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e958d4: je 0xe958fb */
  if (zf) goto L_e958fb;
L_e958d6: /* e958d6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e958d9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e958dc: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e958df: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e958e2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e958e4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e958e6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e958e8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e958eb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e958ee: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e958f0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e958f2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e958f5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e958f8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e958fb: /* e958fb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e958fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95900: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95906: je 0xe95913 */
  if (zf) goto L_e95913;
L_e95908: /* e95908: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9590a: je 0xe9591e */
  if (zf) goto L_e9591e;
L_e9590c: /* e9590c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e9590f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95911: jne 0xe95908 */
  if (!zf) goto L_e95908;
L_e95913: /* e95913: xor eax, eax */
  eax = 0;
/* e95915: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95917: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9591a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9591c: je 0xe95932 */
  if (zf) goto L_e95932;
L_e9591e: /* e9591e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95921: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95924: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95927: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e9592a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9592c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e95932: /* e95932: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95936: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95938: je 0xe9594b */
  if (zf) goto L_e9594b;
L_e9593a: /* e9593a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e9593d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9593f: je 0xe9594b */
  if (zf) goto L_e9594b;
L_e95941: /* e95941: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95943: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95949u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95949: jmp 0xe9594e */
  goto L_e9594e;
L_e9594b: /* e9594b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e9594e: /* e9594e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95950: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95952: /* e95952: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95955: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95957: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e9595d: je 0xe9596b */
  if (zf) goto L_e9596b;
L_e9595f: /* e9595f: nop  */
L_e95960: /* e95960: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95962: je 0xe95976 */
  if (zf) goto L_e95976;
L_e95964: /* e95964: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95967: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95969: jne 0xe95960 */
  if (!zf) goto L_e95960;
L_e9596b: /* e9596b: xor ecx, ecx */
  ecx = 0;
/* e9596d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9596f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95972: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95974: je 0xe95982 */
  if (zf) goto L_e95982;
L_e95976: /* e95976: mov ebp, eax */
  ebp = eax;
/* e95978: mov esi, 1 */
  esi = 0x1u;
/* e9597d: jmp 0xe957a0 */
  goto L_e957a0;
L_e95982: /* e95982: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e95986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e95987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95988: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e95989: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9598a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9598d: ret  */
  esp += 4; SPILL(); return;
}

void f_e95990(void) {
  LOAD_REGS();
L_e95990: /* e95990: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95993: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e95994: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e95995: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95996: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e9599a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9599c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9599d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e959a1: je 0xe959b3 */
  if (zf) goto L_e959b3;
L_e959a3: /* e959a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959a5: je 0xe959b3 */
  if (zf) goto L_e959b3;
L_e959a7: /* e959a7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e959a9: mov ecx, edi */
  ecx = edi;
/* e959ab: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe959b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e959b1: jmp 0xe959b5 */
  goto L_e959b5;
L_e959b3: /* e959b3: mov eax, edi */
  eax = edi;
L_e959b5: /* e959b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959b7: mov ebp, dword ptr [0xeae2c4] */
  ebp = R32((uint32_t)(0xeae2c4u));
/* e959bd: je 0xe959e4 */
  if (zf) goto L_e959e4;
L_e959bf: /* e959bf: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e959c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959c4: je 0xe959d5 */
  if (zf) goto L_e959d5;
L_e959c6: /* e959c6: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e959c8: je 0xe95d16 */
  if (zf) goto L_e95d16;
L_e959ce: /* e959ce: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e959d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959d3: jne 0xe959c6 */
  if (!zf) goto L_e959c6;
L_e959d5: /* e959d5: xor ecx, ecx */
  ecx = 0;
/* e959d7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959d9: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e959dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959de: jne 0xe95d16 */
  if (!zf) goto L_e95d16;
L_e959e4: /* e959e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959e6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e959ee: je 0xe95a06 */
  if (zf) goto L_e95a06;
L_e959f0: /* e959f0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e959f2: je 0xe95a06 */
  if (zf) goto L_e95a06;
L_e959f4: /* e959f4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e959f6: mov ecx, edi */
  ecx = edi;
/* e959f8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe959feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e959fe: mov ebp, dword ptr [0xeae2c4] */
  ebp = R32((uint32_t)(0xeae2c4u));
/* e95a04: jmp 0xe95a08 */
  goto L_e95a08;
L_e95a06: /* e95a06: mov eax, edi */
  eax = edi;
L_e95a08: /* e95a08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a0a: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95a10: /* e95a10: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95a13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a15: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e95a1b: je 0xe95a2b */
  if (zf) goto L_e95a2b;
L_e95a1d: /* e95a1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e95a20: /* e95a20: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95a22: je 0xe95a3a */
  if (zf) goto L_e95a3a;
L_e95a24: /* e95a24: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95a27: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a29: jne 0xe95a20 */
  if (!zf) goto L_e95a20;
L_e95a2b: /* e95a2b: xor ecx, ecx */
  ecx = 0;
/* e95a2d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a2f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95a32: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a34: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95a3a: /* e95a3a: mov esi, eax */
  esi = eax;
/* e95a3c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a42: je 0xe95a61 */
  if (zf) goto L_e95a61;
L_e95a44: /* e95a44: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e95a47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a49: je 0xe95a61 */
  if (zf) goto L_e95a61;
L_e95a4b: /* e95a4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e95a4d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95a53: mov ebp, dword ptr [0xeae2c4] */
  ebp = R32((uint32_t)(0xeae2c4u));
/* e95a59: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e95a5f: jmp 0xe95a64 */
  goto L_e95a64;
L_e95a61: /* e95a61: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e95a64: /* e95a64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a66: je 0xe95a8a */
  if (zf) goto L_e95a8a;
L_e95a68: /* e95a68: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95a6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a6d: je 0xe95a7b */
  if (zf) goto L_e95a7b;
L_e95a6f: /* e95a6f: nop  */
L_e95a70: /* e95a70: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95a72: je 0xe95a86 */
  if (zf) goto L_e95a86;
L_e95a74: /* e95a74: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95a77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a79: jne 0xe95a70 */
  if (!zf) goto L_e95a70;
L_e95a7b: /* e95a7b: xor ecx, ecx */
  ecx = 0;
/* e95a7d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a7f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95a82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a84: je 0xe95a8a */
  if (zf) goto L_e95a8a;
L_e95a86: /* e95a86: mov ebx, eax */
  ebx = eax;
/* e95a88: jmp 0xe95a8c */
  goto L_e95a8c;
L_e95a8a: /* e95a8a: xor ebx, ebx */
  ebx = 0;
L_e95a8c: /* e95a8c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95a90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a92: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e95a96: je 0xe95ab5 */
  if (zf) goto L_e95ab5;
L_e95a98: /* e95a98: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e95a9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95a9d: je 0xe95ab5 */
  if (zf) goto L_e95ab5;
L_e95a9f: /* e95a9f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95aa1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95aa7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95aa7: mov ebp, dword ptr [0xeae2c4] */
  ebp = R32((uint32_t)(0xeae2c4u));
/* e95aad: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e95ab3: jmp 0xe95ab8 */
  goto L_e95ab8;
L_e95ab5: /* e95ab5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e95ab8: /* e95ab8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95aba: je 0xe95ae1 */
  if (zf) goto L_e95ae1;
L_e95abc: /* e95abc: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95abf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ac1: je 0xe95ad2 */
  if (zf) goto L_e95ad2;
L_e95ac3: /* e95ac3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95ac5: je 0xe95a3a */
  if (zf) goto L_e95a3a;
L_e95acb: /* e95acb: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95ace: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ad0: jne 0xe95ac3 */
  if (!zf) goto L_e95ac3;
L_e95ad2: /* e95ad2: xor ecx, ecx */
  ecx = 0;
/* e95ad4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ad6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95ad9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95adb: jne 0xe95a3a */
  if (!zf) goto L_e95a3a;
L_e95ae1: /* e95ae1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ae3: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95ae9: /* e95ae9: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e95aed: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95aef: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95af5: /* e95af5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95af9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95afb: mov esi, 1 */
  esi = 0x1u;
/* e95b00: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e95b04: je 0xe95b16 */
  if (zf) goto L_e95b16;
L_e95b06: /* e95b06: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b08: je 0xe95b16 */
  if (zf) goto L_e95b16;
L_e95b0a: /* e95b0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e95b0c: mov ecx, edi */
  ecx = edi;
/* e95b0e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe95b14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95b14: jmp 0xe95b18 */
  goto L_e95b18;
L_e95b16: /* e95b16: mov eax, edi */
  eax = edi;
L_e95b18: /* e95b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95b19: call 0xe88110 */
  esp -= 4; W32(esp, 0xe95b1eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e95b1e: mov ebp, eax */
  ebp = eax;
/* e95b20: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95b23: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b25: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95b2b: /* e95b2b: jmp 0xe95b30 */
  goto L_e95b30;
L_e95b30: /* e95b30: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e95b33: mov ecx, ebp */
  ecx = ebp;
/* e95b35: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe95b3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95b3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b3d: je 0xe95b4a */
  if (zf) goto L_e95b4a;
L_e95b3f: /* e95b3f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95b43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b45: je 0xe95b4a */
  if (zf) goto L_e95b4a;
L_e95b47: /* e95b47: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e95b4a: /* e95b4a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95b4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b4f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e95b55: je 0xe95b62 */
  if (zf) goto L_e95b62;
L_e95b57: /* e95b57: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95b59: je 0xe95b6d */
  if (zf) goto L_e95b6d;
L_e95b5b: /* e95b5b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95b5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b60: jne 0xe95b57 */
  if (!zf) goto L_e95b57;
L_e95b62: /* e95b62: xor eax, eax */
  eax = 0;
/* e95b64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b66: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95b69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b6b: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95b6d: /* e95b6d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e95b71: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e95b74: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e95b77: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e95b7d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e95b83: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e95b86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95b87: mov ecx, ebp */
  ecx = ebp;
/* e95b89: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe95b8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95b8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b91: je 0xe95bb5 */
  if (zf) goto L_e95bb5;
L_e95b93: /* e95b93: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95b96: mov esi, eax */
  esi = eax;
/* e95b98: mov edi, esp */
  edi = esp;
/* e95b9a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95ba0: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95ba5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95ba7: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e95baa: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95bb0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95bb0: mov esi, 1 */
  esi = 0x1u;
L_e95bb5: /* e95bb5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95bb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bbb: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95bbd: /* e95bbd: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e95bc1: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95bc3: /* e95bc3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e95bc5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95bc8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e95bcb: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e95bce: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e95bd1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95bd4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95bd6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e95bd9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e95be1: /* e95be1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95be4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95be6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e95bec: je 0xe95bfb */
  if (zf) goto L_e95bfb;
L_e95bee: /* e95bee: mov edi, edi */
  edi = edi;
L_e95bf0: /* e95bf0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95bf2: je 0xe95c06 */
  if (zf) goto L_e95c06;
L_e95bf4: /* e95bf4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95bf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bf9: jne 0xe95bf0 */
  if (!zf) goto L_e95bf0;
L_e95bfb: /* e95bfb: xor eax, eax */
  eax = 0;
/* e95bfd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bff: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95c02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c04: je 0xe95c3d */
  if (zf) goto L_e95c3d;
L_e95c06: /* e95c06: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e95c09: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95c0c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e95c0f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c12: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c14: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e95c17: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95c1a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e95c1c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95c1e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95c21: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95c24: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95c27: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95c29: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e95c2c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c2f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e95c32: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c34: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e95c37: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e95c3a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e95c3d: /* e95c3d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95c40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c42: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e95c48: je 0xe95c5b */
  if (zf) goto L_e95c5b;
L_e95c4a: /* e95c4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e95c50: /* e95c50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95c52: je 0xe95c66 */
  if (zf) goto L_e95c66;
L_e95c54: /* e95c54: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95c57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c59: jne 0xe95c50 */
  if (!zf) goto L_e95c50;
L_e95c5b: /* e95c5b: xor eax, eax */
  eax = 0;
/* e95c5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c5f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95c62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c64: je 0xe95c8b */
  if (zf) goto L_e95c8b;
L_e95c66: /* e95c66: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e95c69: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e95c6c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e95c6f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95c72: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95c74: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95c76: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e95c78: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e95c7b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c7e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c80: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e95c82: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e95c85: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e95c88: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e95c8b: /* e95c8b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95c8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c90: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95c96: je 0xe95ca3 */
  if (zf) goto L_e95ca3;
L_e95c98: /* e95c98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95c9a: je 0xe95cae */
  if (zf) goto L_e95cae;
L_e95c9c: /* e95c9c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95c9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ca1: jne 0xe95c98 */
  if (!zf) goto L_e95c98;
L_e95ca3: /* e95ca3: xor eax, eax */
  eax = 0;
/* e95ca5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ca7: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95caa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cac: je 0xe95cc2 */
  if (zf) goto L_e95cc2;
L_e95cae: /* e95cae: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95cb1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95cb4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95cb7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95cba: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95cbc: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e95cc2: /* e95cc2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95cc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cc8: je 0xe95cdb */
  if (zf) goto L_e95cdb;
L_e95cca: /* e95cca: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e95ccd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ccf: je 0xe95cdb */
  if (zf) goto L_e95cdb;
L_e95cd1: /* e95cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95cd3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95cd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95cd9: jmp 0xe95cde */
  goto L_e95cde;
L_e95cdb: /* e95cdb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e95cde: /* e95cde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ce0: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95ce2: /* e95ce2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95ce5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ce7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e95ced: je 0xe95cfb */
  if (zf) goto L_e95cfb;
L_e95cef: /* e95cef: nop  */
L_e95cf0: /* e95cf0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95cf2: je 0xe95d06 */
  if (zf) goto L_e95d06;
L_e95cf4: /* e95cf4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95cf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cf9: jne 0xe95cf0 */
  if (!zf) goto L_e95cf0;
L_e95cfb: /* e95cfb: xor ecx, ecx */
  ecx = 0;
/* e95cfd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cff: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95d02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95d04: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95d06: /* e95d06: mov ebp, eax */
  ebp = eax;
/* e95d08: mov esi, 1 */
  esi = 0x1u;
/* e95d0d: jmp 0xe95b30 */
  goto L_e95b30;
L_e95d12: /* e95d12: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e95d16: /* e95d16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e95d17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95d18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e95d19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e95d1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95d1d: ret  */
  esp += 4; SPILL(); return;
}

void f_e95b2d(void) {
  LOAD_REGS();
L_e95b2d: /* e95b2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e95b30: /* e95b30: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e95b33: mov ecx, ebp */
  ecx = ebp;
/* e95b35: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe95b3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95b3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b3d: je 0xe95b4a */
  if (zf) goto L_e95b4a;
L_e95b3f: /* e95b3f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95b43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b45: je 0xe95b4a */
  if (zf) goto L_e95b4a;
L_e95b47: /* e95b47: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e95b4a: /* e95b4a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95b4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b4f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e95b55: je 0xe95b62 */
  if (zf) goto L_e95b62;
L_e95b57: /* e95b57: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95b59: je 0xe95b6d */
  if (zf) goto L_e95b6d;
L_e95b5b: /* e95b5b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95b5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b60: jne 0xe95b57 */
  if (!zf) goto L_e95b57;
L_e95b62: /* e95b62: xor eax, eax */
  eax = 0;
/* e95b64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b66: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95b69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b6b: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95b6d: /* e95b6d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e95b71: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e95b74: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e95b77: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e95b7d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e95b83: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e95b86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95b87: mov ecx, ebp */
  ecx = ebp;
/* e95b89: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe95b8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95b8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95b91: je 0xe95bb5 */
  if (zf) goto L_e95bb5;
L_e95b93: /* e95b93: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e95b96: mov esi, eax */
  esi = eax;
/* e95b98: mov edi, esp */
  edi = esp;
/* e95b9a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e95ba0: mov ecx, 0x10 */
  ecx = 0x10u;
/* e95ba5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e95ba7: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e95baa: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe95bb0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e95bb0: mov esi, 1 */
  esi = 0x1u;
L_e95bb5: /* e95bb5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e95bb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bbb: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95bbd: /* e95bbd: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e95bc1: je 0xe95be1 */
  if (zf) goto L_e95be1;
L_e95bc3: /* e95bc3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e95bc5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95bc8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e95bcb: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e95bce: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e95bd1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95bd4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95bd6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e95bd9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e95be1: /* e95be1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95be4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95be6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e95bec: je 0xe95bfb */
  if (zf) goto L_e95bfb;
L_e95bee: /* e95bee: mov edi, edi */
  edi = edi;
L_e95bf0: /* e95bf0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95bf2: je 0xe95c06 */
  if (zf) goto L_e95c06;
L_e95bf4: /* e95bf4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95bf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bf9: jne 0xe95bf0 */
  if (!zf) goto L_e95bf0;
L_e95bfb: /* e95bfb: xor eax, eax */
  eax = 0;
/* e95bfd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95bff: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95c02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c04: je 0xe95c3d */
  if (zf) goto L_e95c3d;
L_e95c06: /* e95c06: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e95c09: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e95c0c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e95c0f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c12: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c14: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e95c17: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e95c1a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e95c1c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e95c1e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e95c21: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95c24: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95c27: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95c29: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e95c2c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c2f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e95c32: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c34: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e95c37: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e95c3a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e95c3d: /* e95c3d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95c40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c42: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e95c48: je 0xe95c5b */
  if (zf) goto L_e95c5b;
L_e95c4a: /* e95c4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e95c50: /* e95c50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95c52: je 0xe95c66 */
  if (zf) goto L_e95c66;
L_e95c54: /* e95c54: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95c57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c59: jne 0xe95c50 */
  if (!zf) goto L_e95c50;
L_e95c5b: /* e95c5b: xor eax, eax */
  eax = 0;
/* e95c5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c5f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95c62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c64: je 0xe95c8b */
  if (zf) goto L_e95c8b;
L_e95c66: /* e95c66: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e95c69: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e95c6c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e95c6f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e95c72: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e95c74: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e95c76: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e95c78: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e95c7b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95c7e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95c80: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e95c82: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e95c85: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e95c88: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e95c8b: /* e95c8b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e95c8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95c90: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e95c96: je 0xe95ca3 */
  if (zf) goto L_e95ca3;
L_e95c98: /* e95c98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95c9a: je 0xe95cae */
  if (zf) goto L_e95cae;
L_e95c9c: /* e95c9c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e95c9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ca1: jne 0xe95c98 */
  if (!zf) goto L_e95c98;
L_e95ca3: /* e95ca3: xor eax, eax */
  eax = 0;
/* e95ca5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ca7: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95caa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cac: je 0xe95cc2 */
  if (zf) goto L_e95cc2;
L_e95cae: /* e95cae: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e95cb1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e95cb4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e95cb7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e95cba: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e95cbc: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e95cc2: /* e95cc2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e95cc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cc8: je 0xe95cdb */
  if (zf) goto L_e95cdb;
L_e95cca: /* e95cca: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e95ccd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ccf: je 0xe95cdb */
  if (zf) goto L_e95cdb;
L_e95cd1: /* e95cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e95cd3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe95cd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e95cd9: jmp 0xe95cde */
  goto L_e95cde;
L_e95cdb: /* e95cdb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e95cde: /* e95cde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ce0: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95ce2: /* e95ce2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e95ce5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95ce7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e95ced: je 0xe95cfb */
  if (zf) goto L_e95cfb;
L_e95cef: /* e95cef: nop  */
L_e95cf0: /* e95cf0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95cf2: je 0xe95d06 */
  if (zf) goto L_e95d06;
L_e95cf4: /* e95cf4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e95cf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cf9: jne 0xe95cf0 */
  if (!zf) goto L_e95cf0;
L_e95cfb: /* e95cfb: xor ecx, ecx */
  ecx = 0;
/* e95cfd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95cff: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e95d02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e95d04: je 0xe95d12 */
  if (zf) goto L_e95d12;
L_e95d06: /* e95d06: mov ebp, eax */
  ebp = eax;
/* e95d08: mov esi, 1 */
  esi = 0x1u;
/* e95d0d: jmp 0xe95b30 */
  goto L_e95b30;
L_e95d12: /* e95d12: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e95d16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e95d17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95d18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e95d19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e95d1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95d1d: ret  */
  esp += 4; SPILL(); return;
}

void f_e95d80(void) {
  LOAD_REGS();
L_e95d80: /* e95d80: mov edx, dword ptr [ecx + 0x5a0] */
  edx = R32((uint32_t)(ecx + 0x5a0u));
/* e95d86: cmp edx, dword ptr [ecx + 0xec4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xec4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95d8d: jne 0xe95d9d */
  if (!zf) goto L_e95d9d;
L_e95d8f: /* e95d8f: mov eax, dword ptr [ecx + 0x5a4] */
  eax = R32((uint32_t)(ecx + 0x5a4u));
/* e95d95: cmp eax, dword ptr [ecx + 0xec8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95d9b: je 0xe95dc2 */
  if (zf) goto L_e95dc2;
L_e95d9d: /* e95d9d: mov eax, dword ptr [ecx + 0x5a4] */
  eax = R32((uint32_t)(ecx + 0x5a4u));
/* e95da3: mov dword ptr [ecx + 0xec4], edx */
  W32((uint32_t)(ecx + 0xec4u), edx);
/* e95da9: mov dword ptr [ecx + 0xec8], eax */
  W32((uint32_t)(ecx + 0xec8u), eax);
/* e95daf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e95db1: mov ecx, dword ptr [ecx + 0x46b4] */
  ecx = R32((uint32_t)(ecx + 0x46b4u));
/* e95db7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e95db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95dba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e95dbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95dbc: call dword ptr [esi + 0x154] */
  { uint32_t t = R32((uint32_t)(esi + 0x154u)); esp -= 4; W32(esp, 0xe95dc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e95dc2: /* e95dc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95dc3: ret  */
  esp += 4; SPILL(); return;
}

void f_e95dd0(void) {
  LOAD_REGS();
L_e95dd0: /* e95dd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e95dd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e95dd8: mov dword ptr [ecx + edx*4 + 4], eax */
  W32((uint32_t)(ecx + edx*4 + 0x4u), eax);
/* e95ddc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95de0(void) {
  LOAD_REGS();
L_e95de0: /* e95de0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e95de4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e95de8: imul eax, eax, 0xf */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xfu);
  eax = (uint32_t)r;
  }
/* e95deb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e95ded: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e95df1: mov dword ptr [ecx + eax*4 + 0x74], edx */
  W32((uint32_t)(ecx + eax*4 + 0x74u), edx);
/* e95df5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e95e00(void) {
  LOAD_REGS();
L_e95e00: /* e95e00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e95e04: mov dword ptr [ecx + 0x518], eax */
  W32((uint32_t)(ecx + 0x518u), eax);
/* e95e0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e95e10(void) {
  LOAD_REGS();
L_e95e10: /* e95e10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e95e14: mov dword ptr [ecx + 0x51c], eax */
  W32((uint32_t)(ecx + 0x51cu), eax);
/* e95e1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e95e20(void) {
  LOAD_REGS();
L_e95e20: /* e95e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e95e24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e95e28: mov dword ptr [ecx + eax*8 + 0x520], edx */
  W32((uint32_t)(ecx + eax*8 + 0x520u), edx);
/* e95e2f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e95e33: mov dword ptr [ecx + eax*8 + 0x524], edx */
  W32((uint32_t)(ecx + eax*8 + 0x524u), edx);
/* e95e3a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e95e40(void) {
  LOAD_REGS();
L_e95e40: /* e95e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e95e44: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e95e48: mov dword ptr [ecx + 0x5a0], eax */
  W32((uint32_t)(ecx + 0x5a0u), eax);
/* e95e4e: mov dword ptr [ecx + 0x5a4], edx */
  W32((uint32_t)(ecx + 0x5a4u), edx);
/* e95e54: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95e60(void) {
  LOAD_REGS();
L_e95e60: /* e95e60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e95e64: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e95e68: mov dword ptr [ecx + edx*4 + 0x5a8], eax */
  W32((uint32_t)(ecx + edx*4 + 0x5a8u), eax);
/* e95e6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95e80(void) {
  LOAD_REGS();
L_e95e80: /* e95e80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e95e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95e85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e95e86: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e95e8a: mov esi, ecx */
  esi = ecx;
/* e95e8c: mov ecx, edi */
  ecx = edi;
/* e95e8e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e95e90: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e95e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95e94: lea edx, [ecx + esi + 0x254] */
  edx = (uint32_t)(ecx + esi + 0x254u);
/* e95e9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e95e9c: call 0xe81020 */
  esp -= 4; W32(esp, 0xe95ea1u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e95ea1: mov ecx, edi */
  ecx = edi;
/* e95ea3: mov eax, 1 */
  eax = 0x1u;
/* e95ea8: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* e95eaa: mov ecx, dword ptr [esi + 0x514] */
  ecx = R32((uint32_t)(esi + 0x514u));
/* e95eb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95eb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e95eb4: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e95eb6: mov dword ptr [esi + 0x514], ecx */
  W32((uint32_t)(esi + 0x514u), ecx);
/* e95ebc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95ebd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95ec0(void) {
  LOAD_REGS();
L_e95ec0: /* e95ec0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e95ec4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e95ec8: imul edx, edx, 0x68 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x68u);
  edx = (uint32_t)r;
  }
/* e95ecb: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* e95ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95ece: lea eax, [edx + ecx + 0x5c8] */
  eax = (uint32_t)(edx + ecx + 0x5c8u);
/* e95ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95ed6: call 0xe81020 */
  esp -= 4; W32(esp, 0xe95edbu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e95edb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95ede: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95ef0(void) {
  LOAD_REGS();
L_e95ef0: /* e95ef0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e95ef4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e95ef8: mov dword ptr [ecx + edx*4 + 0x908], eax */
  W32((uint32_t)(ecx + edx*4 + 0x908u), eax);
/* e95eff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e95f10(void) {
  LOAD_REGS();
L_e95f10: /* e95f10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95f11: cmp eax, 0x88760826 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760826u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e95f16: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* e95f1e: jg 0xe9604a */
  if ((!zf && sf == of)) goto L_e9604a;
L_e95f24: /* e95f24: je 0xe96039 */
  if (zf) goto L_e96039;
L_e95f2a: /* e95f2a: cmp eax, 0x8876081c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e95f2f: jg 0xe95fce */
  if ((!zf && sf == of)) goto L_e95fce;
L_e95f35: /* e95f35: je 0xe95fbd */
  if (zf) goto L_e95fbd;
L_e95f3b: /* e95f3b: cmp eax, 0x88760819 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760819u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e95f40: jg 0xe95f89 */
  if ((!zf && sf == of)) goto L_e95f89;
L_e95f42: /* e95f42: je 0xe95f78 */
  if (zf) goto L_e95f78;
L_e95f44: /* e95f44: cmp eax, 0x8876017c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95f49: je 0xe95f67 */
  if (zf) goto L_e95f67;
L_e95f4b: /* e95f4b: cmp eax, 0x88760818 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760818u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95f50: jne 0xe96128 */
  if (!zf) goto L_e96128;
L_e95f56: /* e95f56: push 0xeb043c */
  { uint32_t v = 0xeb043cu; esp -= 4; W32(esp, v); }
/* e95f5b: mov ecx, esi */
  ecx = esi;
/* e95f5d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95f63u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95f63: mov eax, esi */
  eax = esi;
/* e95f65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95f66: ret  */
  esp += 4; SPILL(); return;
L_e95f67: /* e95f67: push 0xeb040c */
  { uint32_t v = 0xeb040cu; esp -= 4; W32(esp, v); }
/* e95f6c: mov ecx, esi */
  ecx = esi;
/* e95f6e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95f74u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95f74: mov eax, esi */
  eax = esi;
/* e95f76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95f77: ret  */
  esp += 4; SPILL(); return;
L_e95f78: /* e95f78: push 0xeb03c8 */
  { uint32_t v = 0xeb03c8u; esp -= 4; W32(esp, v); }
/* e95f7d: mov ecx, esi */
  ecx = esi;
/* e95f7f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95f85u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95f85: mov eax, esi */
  eax = esi;
/* e95f87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95f88: ret  */
  esp += 4; SPILL(); return;
L_e95f89: /* e95f89: cmp eax, 0x8876081a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95f8e: je 0xe95fac */
  if (zf) goto L_e95fac;
L_e95f90: /* e95f90: cmp eax, 0x8876081b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e95f95: jne 0xe96128 */
  if (!zf) goto L_e96128;
L_e95f9b: /* e95f9b: push 0xeb0380 */
  { uint32_t v = 0xeb0380u; esp -= 4; W32(esp, v); }
/* e95fa0: mov ecx, esi */
  ecx = esi;
/* e95fa2: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95fa8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95fa8: mov eax, esi */
  eax = esi;
/* e95faa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95fab: ret  */
  esp += 4; SPILL(); return;
L_e95fac: /* e95fac: push 0xeb0344 */
  { uint32_t v = 0xeb0344u; esp -= 4; W32(esp, v); }
/* e95fb1: mov ecx, esi */
  ecx = esi;
/* e95fb3: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95fb9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95fb9: mov eax, esi */
  eax = esi;
/* e95fbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95fbc: ret  */
  esp += 4; SPILL(); return;
L_e95fbd: /* e95fbd: push 0xeb030c */
  { uint32_t v = 0xeb030cu; esp -= 4; W32(esp, v); }
/* e95fc2: mov ecx, esi */
  ecx = esi;
/* e95fc4: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95fcau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95fca: mov eax, esi */
  eax = esi;
/* e95fcc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95fcd: ret  */
  esp += 4; SPILL(); return;
L_e95fce: /* e95fce: lea ecx, [eax + 0x7789f7e3] */
  ecx = (uint32_t)(eax + 0x7789f7e3u);
/* e95fd4: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e95fd7: ja 0xe96128 */
  if ((!cf && !zf)) goto L_e96128;
L_e95fdd: /* e95fdd: jmp dword ptr [ecx*4 + 0xe96150] */
  switch (R32((uint32_t)(ecx*4 + 0xe96150u))) {
    case 0xe95fe4u: goto L_e95fe4;
    case 0xe95ff5u: goto L_e95ff5;
    case 0xe96006u: goto L_e96006;
    case 0xe96017u: goto L_e96017;
    case 0xe96028u: goto L_e96028;
    case 0xe96074u: goto L_e96074;
    case 0xe96085u: goto L_e96085;
    case 0xe96096u: goto L_e96096;
    case 0xe960a7u: goto L_e960a7;
    case 0xe960b8u: goto L_e960b8;
    case 0xe96128u: goto L_e96128;
    default: guest_badjump(0xe95fdd, R32((uint32_t)(ecx*4 + 0xe96150u))); return;
  }
L_e95fe4: /* e95fe4: push 0xeb02d8 */
  { uint32_t v = 0xeb02d8u; esp -= 4; W32(esp, v); }
/* e95fe9: mov ecx, esi */
  ecx = esi;
/* e95feb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe95ff1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e95ff1: mov eax, esi */
  eax = esi;
/* e95ff3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e95ff4: ret  */
  esp += 4; SPILL(); return;
L_e95ff5: /* e95ff5: push 0xeb0298 */
  { uint32_t v = 0xeb0298u; esp -= 4; W32(esp, v); }
/* e95ffa: mov ecx, esi */
  ecx = esi;
/* e95ffc: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96002u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96002: mov eax, esi */
  eax = esi;
/* e96004: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96005: ret  */
  esp += 4; SPILL(); return;
L_e96006: /* e96006: push 0xeb025c */
  { uint32_t v = 0xeb025cu; esp -= 4; W32(esp, v); }
/* e9600b: mov ecx, esi */
  ecx = esi;
/* e9600d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96013u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96013: mov eax, esi */
  eax = esi;
/* e96015: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96016: ret  */
  esp += 4; SPILL(); return;
L_e96017: /* e96017: push 0xeb0220 */
  { uint32_t v = 0xeb0220u; esp -= 4; W32(esp, v); }
/* e9601c: mov ecx, esi */
  ecx = esi;
/* e9601e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96024u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96024: mov eax, esi */
  eax = esi;
/* e96026: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96027: ret  */
  esp += 4; SPILL(); return;
L_e96028: /* e96028: push 0xeb01e0 */
  { uint32_t v = 0xeb01e0u; esp -= 4; W32(esp, v); }
/* e9602d: mov ecx, esi */
  ecx = esi;
/* e9602f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96035u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96035: mov eax, esi */
  eax = esi;
/* e96037: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96038: ret  */
  esp += 4; SPILL(); return;
L_e96039: /* e96039: push 0xeb0198 */
  { uint32_t v = 0xeb0198u; esp -= 4; W32(esp, v); }
/* e9603e: mov ecx, esi */
  ecx = esi;
/* e96040: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96046u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96046: mov eax, esi */
  eax = esi;
/* e96048: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96049: ret  */
  esp += 4; SPILL(); return;
L_e9604a: /* e9604a: cmp eax, 0x8876086a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9604f: jg 0xe960da */
  if ((!zf && sf == of)) goto L_e960da;
L_e96055: /* e96055: je 0xe960c9 */
  if (zf) goto L_e960c9;
L_e96057: /* e96057: lea ecx, [eax + 0x7789f7d9] */
  ecx = (uint32_t)(eax + 0x7789f7d9u);
/* e9605d: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e96060: ja 0xe96128 */
  if ((!cf && !zf)) goto L_e96128;
L_e96066: /* e96066: movzx ecx, byte ptr [ecx + 0xe96180] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe96180u)));
/* e9606d: jmp dword ptr [ecx*4 + 0xe96168] */
  switch (R32((uint32_t)(ecx*4 + 0xe96168u))) {
    case 0xe96074u: goto L_e96074;
    case 0xe96085u: goto L_e96085;
    case 0xe96096u: goto L_e96096;
    case 0xe960a7u: goto L_e960a7;
    case 0xe960b8u: goto L_e960b8;
    case 0xe96128u: goto L_e96128;
    default: guest_badjump(0xe9606d, R32((uint32_t)(ecx*4 + 0xe96168u))); return;
  }
L_e96074: /* e96074: push 0xeb0160 */
  { uint32_t v = 0xeb0160u; esp -= 4; W32(esp, v); }
/* e96079: mov ecx, esi */
  ecx = esi;
/* e9607b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96081u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96081: mov eax, esi */
  eax = esi;
/* e96083: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96084: ret  */
  esp += 4; SPILL(); return;
L_e96085: /* e96085: push 0xeb0140 */
  { uint32_t v = 0xeb0140u; esp -= 4; W32(esp, v); }
/* e9608a: mov ecx, esi */
  ecx = esi;
/* e9608c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96092u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96092: mov eax, esi */
  eax = esi;
/* e96094: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96095: ret  */
  esp += 4; SPILL(); return;
L_e96096: /* e96096: push 0xeb0120 */
  { uint32_t v = 0xeb0120u; esp -= 4; W32(esp, v); }
/* e9609b: mov ecx, esi */
  ecx = esi;
/* e9609d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe960a3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e960a3: mov eax, esi */
  eax = esi;
/* e960a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e960a6: ret  */
  esp += 4; SPILL(); return;
L_e960a7: /* e960a7: push 0xeb00fc */
  { uint32_t v = 0xeb00fcu; esp -= 4; W32(esp, v); }
/* e960ac: mov ecx, esi */
  ecx = esi;
/* e960ae: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe960b4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e960b4: mov eax, esi */
  eax = esi;
/* e960b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e960b7: ret  */
  esp += 4; SPILL(); return;
L_e960b8: /* e960b8: push 0xeb00d0 */
  { uint32_t v = 0xeb00d0u; esp -= 4; W32(esp, v); }
/* e960bd: mov ecx, esi */
  ecx = esi;
/* e960bf: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe960c5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e960c5: mov eax, esi */
  eax = esi;
/* e960c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e960c8: ret  */
  esp += 4; SPILL(); return;
L_e960c9: /* e960c9: push 0xeb00a8 */
  { uint32_t v = 0xeb00a8u; esp -= 4; W32(esp, v); }
/* e960ce: mov ecx, esi */
  ecx = esi;
/* e960d0: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe960d6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e960d6: mov eax, esi */
  eax = esi;
/* e960d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e960d9: ret  */
  esp += 4; SPILL(); return;
L_e960da: /* e960da: cmp eax, 0x8876086d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e960df: jg 0xe96124 */
  if ((!zf && sf == of)) goto L_e96124;
L_e960e1: /* e960e1: je 0xe96113 */
  if (zf) goto L_e96113;
L_e960e3: /* e960e3: cmp eax, 0x8876086b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e960e8: je 0xe96102 */
  if (zf) goto L_e96102;
L_e960ea: /* e960ea: cmp eax, 0x8876086c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e960ef: jne 0xe96128 */
  if (!zf) goto L_e96128;
L_e960f1: /* e960f1: push 0xeb0080 */
  { uint32_t v = 0xeb0080u; esp -= 4; W32(esp, v); }
/* e960f6: mov ecx, esi */
  ecx = esi;
/* e960f8: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe960feu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e960fe: mov eax, esi */
  eax = esi;
/* e96100: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96101: ret  */
  esp += 4; SPILL(); return;
L_e96102: /* e96102: push 0xeb0054 */
  { uint32_t v = 0xeb0054u; esp -= 4; W32(esp, v); }
/* e96107: mov ecx, esi */
  ecx = esi;
/* e96109: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe9610fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e9610f: mov eax, esi */
  eax = esi;
/* e96111: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96112: ret  */
  esp += 4; SPILL(); return;
L_e96113: /* e96113: push 0xeb0020 */
  { uint32_t v = 0xeb0020u; esp -= 4; W32(esp, v); }
/* e96118: mov ecx, esi */
  ecx = esi;
/* e9611a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96120u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96120: mov eax, esi */
  eax = esi;
/* e96122: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96123: ret  */
  esp += 4; SPILL(); return;
L_e96124: /* e96124: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e96126: je 0xe9613c */
  if (zf) goto L_e9613c;
L_e96128: /* e96128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96129: push 0xeb0014 */
  { uint32_t v = 0xeb0014u; esp -= 4; W32(esp, v); }
/* e9612e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9612f: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe96135u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e96135: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96138: mov eax, esi */
  eax = esi;
/* e9613a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9613b: ret  */
  esp += 4; SPILL(); return;
L_e9613c: /* e9613c: push 0xeb0004 */
  { uint32_t v = 0xeb0004u; esp -= 4; W32(esp, v); }
/* e96141: mov ecx, esi */
  ecx = esi;
/* e96143: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe96149u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e96149: mov eax, esi */
  eax = esi;
/* e9614b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9614c: ret  */
  esp += 4; SPILL(); return;
}

void f_e961d0(void) {
  LOAD_REGS();
L_e961d0: /* e961d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e961d3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e961d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e961d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e961d9: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* e961dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e961de: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e961e0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e961e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e961e6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e961ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e961ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e961ef: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e961f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e961f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e961f4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e961fc: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* e96204: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe9620au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9620a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9620e: mov dword ptr [edx + 0x928], 3 */
  W32((uint32_t)(edx + 0x928u), 0x3u);
/* e96218: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9621c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9621e: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96224: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96226: mov ebx, 1 */
  ebx = 0x1u;
/* e9622b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9622c: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e9622e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9622f: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96235: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96239: mov dword ptr [eax + 0x92c], ebx */
  W32((uint32_t)(eax + 0x92cu), ebx);
/* e9623f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96245: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9624b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9624d: xor ebp, ebp */
  ebp = 0;
/* e9624f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96250: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* e96252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96253: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96259u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96259: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9625d: mov dword ptr [edx + 0x930], ebp */
  W32((uint32_t)(edx + 0x930u), ebp);
/* e96263: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96267: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96269: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9626f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96271: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e96273: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e96275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96276: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9627cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9627c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96280: mov dword ptr [eax + 0x934], 2 */
  W32((uint32_t)(eax + 0x934u), 0x2u);
/* e9628a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9628e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96290: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96296: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96299: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e9629b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9629c: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe962a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e962a2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e962a6: mov dword ptr [edx + 0x938], ebx */
  W32((uint32_t)(edx + 0x938u), ebx);
/* e962ac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e962b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e962b2: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e962b8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e962ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e962bb: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e962bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e962be: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe962c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e962c4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e962c8: mov dword ptr [eax + 0x93c], ebx */
  W32((uint32_t)(eax + 0x93cu), ebx);
/* e962ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e962d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e962d4: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e962da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e962dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e962de: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e962e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e962e1: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe962e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e962e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e962eb: mov dword ptr [edx + 0x940], 4 */
  W32((uint32_t)(edx + 0x940u), 0x4u);
/* e962f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e962f9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e962fb: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96301: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96303: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96304: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e96306: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96307: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9630du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9630d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96311: mov dword ptr [eax + 0x944], ebp */
  W32((uint32_t)(eax + 0x944u), ebp);
/* e96317: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9631b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9631d: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96323: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96325: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e96327: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e96329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9632a: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96330u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96330: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96334: mov dword ptr [edx + 0x948], 5 */
  W32((uint32_t)(edx + 0x948u), 0x5u);
/* e9633e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96342: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96344: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9634a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9634c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9634d: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e9634f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96350: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96356: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9635a: mov dword ptr [eax + 0x94c], ebp */
  W32((uint32_t)(eax + 0x94cu), ebp);
/* e96360: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96364: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96366: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9636c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9636e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9636f: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* e96371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96372: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96378u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96378: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9637c: mov dword ptr [edx + 0x950], ebp */
  W32((uint32_t)(edx + 0x950u), ebp);
/* e96382: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96386: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96388: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9638e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96391: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* e96393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96394: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9639au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9639a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9639e: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e963a2: mov dword ptr [eax + 0x954], ebp */
  W32((uint32_t)(eax + 0x954u), ebp);
/* e963a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e963ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e963ae: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e963b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e963b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e963b7: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* e963b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e963ba: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe963c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e963c0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e963c4: mov dword ptr [edx + 0x958], esi */
  W32((uint32_t)(edx + 0x958u), esi);
/* e963ca: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e963ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e963d0: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e963d6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e963d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e963d9: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* e963db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e963dc: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe963e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e963e2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e963e6: mov dword ptr [eax + 0x95c], esi */
  W32((uint32_t)(eax + 0x95cu), esi);
/* e963ec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e963f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e963f2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e963f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e963fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e963fb: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* e963fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e963fe: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96404u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96404: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96408: mov dword ptr [edx + 0x960], ebp */
  W32((uint32_t)(edx + 0x960u), ebp);
/* e9640e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96412: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e96414: cmp dword ptr [eax + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96417: jne 0xe96427 */
  if (!zf) goto L_e96427;
L_e96419: /* e96419: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e9641f: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96421: jne 0xe96427 */
  if (!zf) goto L_e96427;
L_e96423: /* e96423: xor ecx, ecx */
  ecx = 0;
/* e96425: jmp 0xe96429 */
  goto L_e96429;
L_e96427: /* e96427: mov ecx, ebx */
  ecx = ebx;
L_e96429: /* e96429: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9642f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96431: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96432: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* e96434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96435: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9643bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9643b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9643f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96441: cmp dword ptr [eax + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96444: jne 0xe96454 */
  if (!zf) goto L_e96454;
L_e96446: /* e96446: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e9644c: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9644e: jne 0xe96454 */
  if (!zf) goto L_e96454;
L_e96450: /* e96450: xor eax, eax */
  eax = 0;
/* e96452: jmp 0xe96456 */
  goto L_e96456;
L_e96454: /* e96454: mov eax, ebx */
  eax = ebx;
L_e96456: /* e96456: mov dword ptr [ecx + 0x964], eax */
  W32((uint32_t)(ecx + 0x964u), eax);
/* e9645c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96460: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96462: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96468: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9646a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9646b: push 0x35 */
  { uint32_t v = 0x35u; esp -= 4; W32(esp, v); }
/* e9646d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9646e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96474u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96474: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96478: mov dword ptr [eax + 0x968], ebx */
  W32((uint32_t)(eax + 0x968u), ebx);
/* e9647e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96482: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96484: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9648a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9648c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9648d: push 0x36 */
  { uint32_t v = 0x36u; esp -= 4; W32(esp, v); }
/* e9648f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96490: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96496u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96496: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9649a: mov dword ptr [edx + 0x96c], ebx */
  W32((uint32_t)(edx + 0x96cu), ebx);
/* e964a0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e964a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e964a6: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e964ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e964ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e964af: push 0x37 */
  { uint32_t v = 0x37u; esp -= 4; W32(esp, v); }
/* e964b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e964b2: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe964b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e964b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e964bc: mov dword ptr [eax + 0x970], ebx */
  W32((uint32_t)(eax + 0x970u), ebx);
/* e964c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e964c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e964c8: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e964ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e964d0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e964d2: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* e964d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e964d5: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe964dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e964db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e964df: mov dword ptr [edx + 0x974], 8 */
  W32((uint32_t)(edx + 0x974u), 0x8u);
/* e964e9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e964ed: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e964ef: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e964f5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e964f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e964f8: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* e964fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e964fb: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96501: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96505: mov dword ptr [eax + 0x978], ebp */
  W32((uint32_t)(eax + 0x978u), ebp);
/* e9650b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9650f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96511: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96517: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96519: mov esi, 0xff */
  esi = 0xffu;
/* e9651e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9651f: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* e96521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96522: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96528: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9652c: mov dword ptr [edx + 0x97c], esi */
  W32((uint32_t)(edx + 0x97cu), esi);
/* e96532: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96536: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96538: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9653e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96541: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* e96543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96544: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9654au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9654a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9654e: mov dword ptr [eax + 0x980], esi */
  W32((uint32_t)(eax + 0x980u), esi);
/* e96554: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96558: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9655a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96560: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96562: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96563: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* e96565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96566: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe9656cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9656c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96570: mov dword ptr [edx + 0x984], ebp */
  W32((uint32_t)(edx + 0x984u), ebp);
/* e96576: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9657a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9657c: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96582: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96584: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96585: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* e9658a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9658b: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96591u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96591: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96595: mov dword ptr [eax + 0x988], ebp */
  W32((uint32_t)(eax + 0x988u), ebp);
/* e9659b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9659f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e965a1: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e965a7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e965a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e965aa: push 0x8b */
  { uint32_t v = 0x8bu; esp -= 4; W32(esp, v); }
/* e965af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e965b0: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe965b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e965b6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e965ba: mov dword ptr [edx + 0x98c], ebp */
  W32((uint32_t)(edx + 0x98cu), ebp);
/* e965c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e965c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e965c6: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e965cc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e965ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e965cf: push 0x8d */
  { uint32_t v = 0x8du; esp -= 4; W32(esp, v); }
/* e965d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e965d5: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe965dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e965db: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e965df: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e965e3: mov dword ptr [eax + 0x990], ebx */
  W32((uint32_t)(eax + 0x990u), ebx);
/* e965e9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e965ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e965ef: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e965f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e965f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e965f8: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* e965fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e965fe: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe96604u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96604: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96608: mov dword ptr [edx + 0x994], esi */
  W32((uint32_t)(edx + 0x994u), esi);
/* e9660e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96612: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96614: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9661a: mov ecx, dword ptr [0xeae0a0] */
  ecx = R32((uint32_t)(0xeae0a0u));
/* e96620: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96623: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e96625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96626: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9662cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9662c: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96632: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96636: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e96638: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96639: add eax, 0xd78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9663e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9663f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96644u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96644: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e96648: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9664a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96650: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96656: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96658: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9665b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9665c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9665e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9665f: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe96665u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96665: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e9666a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9666e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e96670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96671: add ecx, 0xdb8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdb8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e96677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96678: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9667du); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9667d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e96681: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e96683: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e96689: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9668b: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96691: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96694: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96695: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e96697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96698: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe9669eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9669e: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e966a3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e966a7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e966a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e966aa: add ecx, 0xb78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e966b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e966b1: call 0xe81020 */
  esp -= 4; W32(esp, 0xe966b6u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e966b6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e966ba: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e966bc: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e966c2: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e966c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e966ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e966cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e966ce: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e966d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e966d1: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe966d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e966d7: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e966dc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e966e0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e966e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e966e3: add ecx, 0xbb8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbb8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e966e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e966ea: call 0xe81020 */
  esp -= 4; W32(esp, 0xe966efu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e966ef: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e966f3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e966f5: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e966fb: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e96701: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96703: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96707: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e96709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9670a: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe96710u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96710: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e96715: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96719: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9671b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9671c: add ecx, 0xbf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e96722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96723: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96728u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96728: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e9672c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9672e: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96734: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9673a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9673c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9673f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96740: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e96742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96743: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe96749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96749: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e9674e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96752: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e96754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96755: add ecx, 0xc38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9675b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9675c: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96761u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96761: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e96765: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e96767: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e9676d: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e96773: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96775: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96778: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96779: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e9677b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9677c: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe96782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96782: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e96787: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9678b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9678d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9678e: add ecx, 0xc78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e96794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96795: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9679au); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9679a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e9679e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e967a1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e967a3: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e967a9: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e967af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e967b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e967b2: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e967b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e967b5: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe967bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e967bb: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e967c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e967c4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e967c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e967c7: add ecx, 0xcb8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcb8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e967cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e967ce: call 0xe81020 */
  esp -= 4; W32(esp, 0xe967d3u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e967d3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e967d7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e967d9: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e967df: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e967e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e967e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e967ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e967eb: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e967ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e967ee: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe967f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e967f4: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e967f9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e967fd: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e967ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96800: add ecx, 0xcf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e96806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96807: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9680cu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9680c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e96810: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e96812: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96818: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9681e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96820: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96823: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96824: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e96826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96827: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe9682du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9682d: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e96832: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96836: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e96838: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96839: add ecx, 0xd38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9683f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96840: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96845u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96845: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e96849: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9684b: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e96851: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e96857: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96859: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9685c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9685d: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e96862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96863: call dword ptr [ecx + 0x94] */
  { uint32_t t = R32((uint32_t)(ecx + 0x94u)); esp -= 4; W32(esp, 0xe96869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96869: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e9686e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96872: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e96874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96875: add ecx, 0xdf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9687b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9687c: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96881u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96881: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e96885: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96887: mov edx, dword ptr [eax + 0x41e0] */
  edx = R32((uint32_t)(eax + 0x41e0u));
/* e9688d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96890: xor esi, esi */
  esi = 0;
/* e96892: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e96894: jbe 0xe96b4c */
  if ((cf | zf)) goto L_e96b4c;
L_e9689a: /* e9689a: xor edi, edi */
  edi = 0;
/* e9689c: mov dword ptr [esp + 0x14], 0xecc */
  W32((uint32_t)(esp + 0x14u), 0xeccu);
L_e968a4: /* e968a4: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e968aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e968ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e968ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e968ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e968af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e968b0: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe968b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e968b6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e968ba: mov dword ptr [edi + eax + 0x998], ebx */
  W32((uint32_t)(edi + eax + 0x998u), ebx);
/* e968c1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e968c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e968c7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e968cd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e968cf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e968d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e968d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e968d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e968d5: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe968dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e968db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e968df: mov dword ptr [edi + edx + 0x99c], 2 */
  W32((uint32_t)(edi + edx + 0x99cu), 0x2u);
/* e968ea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e968ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e968f0: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e968f6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e968f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e968f9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e968fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e968fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e968fd: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96903u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96903: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96907: mov dword ptr [edi + eax + 0x9a0], ebx */
  W32((uint32_t)(edi + eax + 0x9a0u), ebx);
/* e9690e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96912: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96914: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9691a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9691c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9691d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9691f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96921: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe96927u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96927: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9692b: mov dword ptr [edi + edx + 0x9a4], ebx */
  W32((uint32_t)(edi + edx + 0x9a4u), ebx);
/* e96932: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96936: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96938: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9693e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96941: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e96943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96945: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9694bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9694b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9694f: mov dword ptr [edi + eax + 0x9a8], ebp */
  W32((uint32_t)(edi + eax + 0x9a8u), ebp);
/* e96956: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9695a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9695c: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96962: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96964: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96965: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e96967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96969: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe9696fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9696f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96973: mov dword ptr [edi + edx + 0x9ac], ebx */
  W32((uint32_t)(edi + edx + 0x9acu), ebx);
/* e9697a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9697e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96980: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96986: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96988: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96989: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9698b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9698c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9698d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96993u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96993: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96997: mov dword ptr [edi + eax + 0x9b0], ebp */
  W32((uint32_t)(edi + eax + 0x9b0u), ebp);
/* e9699e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e969a2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e969a4: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e969aa: mov eax, dword ptr [eax + 0x4668] */
  eax = R32((uint32_t)(eax + 0x4668u));
/* e969b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e969b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e969b3: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e969b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e969b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e969b7: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe969bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e969bd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e969c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e969c3: mov edx, dword ptr [ecx + 0x4668] */
  edx = R32((uint32_t)(ecx + 0x4668u));
/* e969c9: mov dword ptr [edi + eax + 0x9b4], edx */
  W32((uint32_t)(edi + eax + 0x9b4u), edx);
/* e969d0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e969d4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e969d6: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e969dc: mov eax, dword ptr [eax + 0x4668] */
  eax = R32((uint32_t)(eax + 0x4668u));
/* e969e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e969e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e969e5: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e969e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e969e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e969e9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe969efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e969ef: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e969f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e969f5: mov edx, dword ptr [ecx + 0x4668] */
  edx = R32((uint32_t)(ecx + 0x4668u));
/* e969fb: mov dword ptr [edi + eax + 0x9b8], edx */
  W32((uint32_t)(edi + eax + 0x9b8u), edx);
/* e96a02: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96a06: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96a08: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96a0e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96a11: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e96a13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96a15: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96a1b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96a1f: mov dword ptr [edi + eax + 0x9bc], ebp */
  W32((uint32_t)(edi + eax + 0x9bcu), ebp);
/* e96a26: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96a2a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96a2c: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e96a32: mov eax, dword ptr [eax + 0x4668] */
  eax = R32((uint32_t)(eax + 0x4668u));
/* e96a38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96a3b: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e96a3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96a3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96a3f: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96a45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96a45: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96a49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96a4b: mov edx, dword ptr [ecx + 0x4668] */
  edx = R32((uint32_t)(ecx + 0x4668u));
/* e96a51: mov dword ptr [edi + eax + 0x9c0], edx */
  W32((uint32_t)(edi + eax + 0x9c0u), edx);
/* e96a58: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96a5c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e96a5e: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e96a64: fld dword ptr [eax + 0x4140] */
  { double v = F32((uint32_t)(eax + 0x4140u)); FPUSH(v); }
/* e96a6a: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* e96a6c: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e96a70: call 0xeac630 */
  esp -= 4; W32(esp, 0xe96a75u); SPILL(); f_eac630(); if (g_unwind) return; RELOAD();
/* e96a75: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e96a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96a7a: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e96a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96a7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96a7e: call dword ptr [ebp + 0xfc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xfcu)); esp -= 4; W32(esp, 0xe96a84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96a84: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* e96a88: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e96a8b: fld dword ptr [edx + 0x4140] */
  { double v = F32((uint32_t)(edx + 0x4140u)); FPUSH(v); }
/* e96a91: call 0xeac630 */
  esp -= 4; W32(esp, 0xe96a96u); SPILL(); f_eac630(); if (g_unwind) return; RELOAD();
/* e96a96: mov dword ptr [edi + ebp + 0x9d0], eax */
  W32((uint32_t)(edi + ebp + 0x9d0u), eax);
/* e96a9d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96aa1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96aa3: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96aa9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96aab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96aac: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e96aae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ab0: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96ab6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96ab6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96aba: mov dword ptr [edi + eax + 0x9c4], ebx */
  W32((uint32_t)(edi + eax + 0x9c4u), ebx);
/* e96ac1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96ac5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96ac7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96acd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96acf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96ad0: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e96ad2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96ad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ad4: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe96adau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96ada: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96ade: mov dword ptr [edi + edx + 0x9c8], ebx */
  W32((uint32_t)(edi + edx + 0x9c8u), ebx);
/* e96ae5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96ae9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96aeb: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96af1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96af3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96af4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* e96af6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96af7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96af8: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe96afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96afe: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96b02: mov dword ptr [edi + eax + 0x9cc], ebx */
  W32((uint32_t)(edi + eax + 0x9ccu), ebx);
/* e96b09: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96b0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96b0f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96b15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96b17: xor ebp, ebp */
  ebp = 0;
/* e96b19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96b1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96b1c: call dword ptr [ecx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ecx + 0xf4u)); esp -= 4; W32(esp, 0xe96b22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96b22: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e96b26: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96b2a: mov dword ptr [eax + edx], ebp */
  W32((uint32_t)(eax + edx), ebp);
/* e96b2d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96b31: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e96b34: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e96b38: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96b3a: mov edx, dword ptr [eax + 0x41e0] */
  edx = R32((uint32_t)(eax + 0x41e0u));
/* e96b40: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e96b41: add edi, 0x3c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e96b44: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e96b46: jb 0xe968a4 */
  if (cf) goto L_e968a4;
L_e96b4c: /* e96b4c: mov dword ptr [ecx + 0xe3c], 2 */
  W32((uint32_t)(ecx + 0xe3cu), 0x2u);
/* e96b56: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96b5a: mov dword ptr [eax + 0xe40], ebp */
  W32((uint32_t)(eax + 0xe40u), ebp);
/* e96b60: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96b64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96b66: mov ecx, dword ptr [ecx + 0xe3c] */
  ecx = R32((uint32_t)(ecx + 0xe3cu));
/* e96b6c: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96b72: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96b74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96b76: call dword ptr [edx + 0x130] */
  { uint32_t t = R32((uint32_t)(edx + 0x130u)); esp -= 4; W32(esp, 0xe96b7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96b7c: xor esi, esi */
  esi = 0;
/* e96b7e: mov edi, edi */
  edi = edi;
L_e96b80: /* e96b80: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96b84: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e96b86: mov eax, dword ptr [ecx + 0x4208] */
  eax = R32((uint32_t)(ecx + 0x4208u));
/* e96b8c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e96b8f: jl 0xe96b96 */
  if ((sf != of)) goto L_e96b96;
L_e96b91: /* e96b91: mov eax, 0x10 */
  eax = 0x10u;
L_e96b96: /* e96b96: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e96b98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96b99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96b9a: jge 0xe96bc5 */
  if ((sf == of)) goto L_e96bc5;
L_e96b9c: /* e96b9c: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e96ba2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96ba4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ba6: call dword ptr [edx + 0x14c] */
  { uint32_t t = R32((uint32_t)(edx + 0x14cu)); esp -= 4; W32(esp, 0xe96bacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96bac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96bb0: mov dword ptr [eax + esi*8 + 0xe44], ebp */
  W32((uint32_t)(eax + esi*8 + 0xe44u), ebp);
/* e96bb7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96bbb: mov dword ptr [ecx + esi*8 + 0xe48], ebp */
  W32((uint32_t)(ecx + esi*8 + 0xe48u), ebp);
/* e96bc2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e96bc3: jmp 0xe96b80 */
  goto L_e96b80;
L_e96bc5: /* e96bc5: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* e96bc7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96bcd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96bd0: call dword ptr [ecx + 0x154] */
  { uint32_t t = R32((uint32_t)(ecx + 0x154u)); esp -= 4; W32(esp, 0xe96bd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96bd6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e96bda: mov dword ptr [edx + 0xec4], ebp */
  W32((uint32_t)(edx + 0xec4u), ebp);
/* e96be0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96be4: mov dword ptr [eax + 0xec8], ebp */
  W32((uint32_t)(eax + 0xec8u), ebp);
/* e96bea: mov edx, 0x122c */
  edx = 0x122cu;
/* e96bef: nop  */
L_e96bf0: /* e96bf0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96bf4: lea eax, [ecx + ebp + 0xeec] */
  eax = (uint32_t)(ecx + ebp + 0xeecu);
/* e96bfb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e96bff: mov ecx, 0x68 */
  ecx = 0x68u;
/* e96c04: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e96c08: xor eax, eax */
  eax = 0;
/* e96c0a: mov ebx, ecx */
  ebx = ecx;
/* e96c0c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e96c0f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e96c12: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e96c14: mov ecx, ebx */
  ecx = ebx;
/* e96c16: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e96c18: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96c1c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* e96c1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e96c23: mov ecx, 4 */
  ecx = 0x4u;
/* e96c28: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e96c2c: xor eax, eax */
  eax = 0;
/* e96c2e: mov ebx, ecx */
  ebx = ecx;
/* e96c30: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e96c33: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e96c36: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e96c38: mov ecx, ebx */
  ecx = ebx;
/* e96c3a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e96c3c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e96c3f: add ebp, 0x68 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e96c42: cmp edx, 0x124c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x124cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e96c48: jl 0xe96bf0 */
  if ((sf != of)) goto L_e96bf0;
L_e96c4a: /* e96c4a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96c4e: lea ecx, [eax + 0x928] */
  ecx = (uint32_t)(eax + 0x928u);
/* e96c54: push 0x924 */
  { uint32_t v = 0x924u; esp -= 4; W32(esp, v); }
/* e96c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96c5a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e96c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96c5e: call 0xe81020 */
  esp -= 4; W32(esp, 0xe96c63u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e96c63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96c66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e96c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e96c68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e96c69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e96c6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e96c6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e96c70(void) {
  LOAD_REGS();
L_e96c70: /* e96c70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96c71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96c72: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e96c75: mov ebx, ecx */
  ebx = ecx;
/* e96c77: xor edi, edi */
  edi = 0;
/* e96c79: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e96c7d: lea esi, [ebx + 0xe48] */
  esi = (uint32_t)(ebx + 0xe48u);
L_e96c83: /* e96c83: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e96c85: mov eax, dword ptr [eax + 0x4208] */
  eax = R32((uint32_t)(eax + 0x4208u));
/* e96c8b: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e96c8e: jl 0xe96c95 */
  if ((sf != of)) goto L_e96c95;
L_e96c90: /* e96c90: mov eax, 0x10 */
  eax = 0x10u;
L_e96c95: /* e96c95: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e96c97: jge 0xe96cd7 */
  if ((sf == of)) goto L_e96cd7;
L_e96c99: /* e96c99: mov edx, dword ptr [esi - 0x928] */
  edx = R32((uint32_t)(esi + 0xfffff6d8u));
/* e96c9f: cmp edx, dword ptr [esi - 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96ca2: jne 0xe96cae */
  if (!zf) goto L_e96cae;
L_e96ca4: /* e96ca4: mov ecx, dword ptr [esi - 0x924] */
  ecx = R32((uint32_t)(esi + 0xfffff6dcu));
/* e96caa: cmp ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96cac: je 0xe96cd1 */
  if (zf) goto L_e96cd1;
L_e96cae: /* e96cae: mov eax, dword ptr [esi - 0x924] */
  eax = R32((uint32_t)(esi + 0xfffff6dcu));
/* e96cb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96cb5: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* e96cb8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* e96cba: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e96cbc: mov ecx, dword ptr [ecx + 0x46b4] */
  ecx = R32((uint32_t)(ecx + 0x46b4u));
/* e96cc2: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* e96cc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e96cc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e96cc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96cc7: call dword ptr [ebp + 0x14c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14cu)); esp -= 4; W32(esp, 0xe96ccdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96ccd: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_e96cd1: /* e96cd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e96cd2: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e96cd5: jmp 0xe96c83 */
  goto L_e96c83;
L_e96cd7: /* e96cd7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96cdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e96cdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e96cdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e96cde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e96cdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e96ce0: ret  */
  esp += 4; SPILL(); return;
}

void f_e96cf0(void) {
  LOAD_REGS();
L_e96cf0: /* e96cf0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e96cf3: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e96cf9: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e96cfd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96cff: mov ecx, dword ptr [eax + 0x30f80] */
  ecx = R32((uint32_t)(eax + 0x30f80u));
/* e96d05: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e96d08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e96d09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e96d0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e96d0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e96d0c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e96d0f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e96d11: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e96d13: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96d17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96d19: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e96d1f: mov eax, dword ptr [edx + 0x30fcc] */
  eax = R32((uint32_t)(edx + 0x30fccu));
/* e96d25: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e96d28: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e96d2b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e96d2d: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e96d2f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96d33: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e96d35: mov edx, dword ptr [ecx + 0x30fc0] */
  edx = R32((uint32_t)(ecx + 0x30fc0u));
/* e96d3b: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e96d40: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e96d43: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e96d46: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e96d48: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96d4c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96d4e: mov ecx, dword ptr [edx + 0x4100] */
  ecx = R32((uint32_t)(edx + 0x4100u));
/* e96d54: xor ebp, ebp */
  ebp = 0;
/* e96d56: xor ebx, ebx */
  ebx = 0;
/* e96d58: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96d5a: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* e96d5e: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* e96d62: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* e96d66: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* e96d6a: je 0xe96d78 */
  if (zf) goto L_e96d78;
L_e96d6c: /* e96d6c: cmp dword ptr [eax + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96d6f: jne 0xe96d78 */
  if (!zf) goto L_e96d78;
L_e96d71: /* e96d71: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* e96d74: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e96d78: /* e96d78: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e96d7b: cmp ecx, dword ptr [eax + 0x928] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x928u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96d81: je 0xe96dad */
  if (zf) goto L_e96dad;
L_e96d83: /* e96d83: mov dword ptr [eax + 0x928], ecx */
  W32((uint32_t)(eax + 0x928u), ecx);
/* e96d89: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96d8d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e96d8f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e96d92: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e96d98: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96d9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96d9b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e96d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96d9e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96da4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96da8: mov ebx, 1 */
  ebx = 0x1u;
L_e96dad: /* e96dad: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* e96db0: cmp ecx, dword ptr [eax + 0x92c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x92cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96db6: je 0xe96dde */
  if (zf) goto L_e96dde;
L_e96db8: /* e96db8: mov dword ptr [eax + 0x92c], ecx */
  W32((uint32_t)(eax + 0x92cu), ecx);
/* e96dbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96dc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96dc4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* e96dc7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96dcd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96dcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96dd0: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e96dd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96dd3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96dd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96dd9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96ddd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96dde: /* e96dde: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* e96de1: cmp ecx, dword ptr [eax + 0x930] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x930u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96de7: je 0xe96e0f */
  if (zf) goto L_e96e0f;
L_e96de9: /* e96de9: mov dword ptr [eax + 0x930], ecx */
  W32((uint32_t)(eax + 0x930u), ecx);
/* e96def: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96df3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96df5: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e96df8: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96dfe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96e00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96e01: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* e96e03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96e04: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96e0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96e0a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96e0e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96e0f: /* e96e0f: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* e96e12: cmp ecx, dword ptr [eax + 0x934] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x934u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96e18: je 0xe96e40 */
  if (zf) goto L_e96e40;
L_e96e1a: /* e96e1a: mov dword ptr [eax + 0x934], ecx */
  W32((uint32_t)(eax + 0x934u), ecx);
/* e96e20: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96e24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96e26: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* e96e29: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96e2f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96e31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96e32: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e96e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96e35: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96e3b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96e3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96e40: /* e96e40: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* e96e43: cmp ecx, dword ptr [eax + 0x938] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x938u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96e49: je 0xe96e71 */
  if (zf) goto L_e96e71;
L_e96e4b: /* e96e4b: mov dword ptr [eax + 0x938], ecx */
  W32((uint32_t)(eax + 0x938u), ecx);
/* e96e51: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96e55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96e57: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* e96e5a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96e60: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96e62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96e63: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e96e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96e66: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96e6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96e6c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96e70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96e71: /* e96e71: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* e96e74: cmp ecx, dword ptr [eax + 0x93c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x93cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96e7a: je 0xe96ea2 */
  if (zf) goto L_e96ea2;
L_e96e7c: /* e96e7c: mov dword ptr [eax + 0x93c], ecx */
  W32((uint32_t)(eax + 0x93cu), ecx);
/* e96e82: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96e86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96e88: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* e96e8b: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96e91: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96e93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96e94: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e96e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96e97: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96e9d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96ea1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96ea2: /* e96ea2: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* e96ea5: cmp ecx, dword ptr [eax + 0x940] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x940u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96eab: je 0xe96ed3 */
  if (zf) goto L_e96ed3;
L_e96ead: /* e96ead: mov dword ptr [eax + 0x940], ecx */
  W32((uint32_t)(eax + 0x940u), ecx);
/* e96eb3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96eb7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96eb9: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* e96ebc: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96ec2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96ec5: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e96ec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ec8: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96eceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96ece: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96ed2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96ed3: /* e96ed3: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e96ed6: cmp ecx, dword ptr [eax + 0x944] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x944u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96edc: je 0xe96f04 */
  if (zf) goto L_e96f04;
L_e96ede: /* e96ede: mov dword ptr [eax + 0x944], ecx */
  W32((uint32_t)(eax + 0x944u), ecx);
/* e96ee4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96ee8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96eea: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* e96eed: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96ef3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96ef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96ef6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e96ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ef9: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96effu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96eff: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96f03: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96f04: /* e96f04: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e96f07: cmp ecx, dword ptr [eax + 0x948] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x948u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96f0d: je 0xe96f35 */
  if (zf) goto L_e96f35;
L_e96f0f: /* e96f0f: mov dword ptr [eax + 0x948], ecx */
  W32((uint32_t)(eax + 0x948u), ecx);
/* e96f15: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96f19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96f1b: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* e96f1e: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96f24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96f26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96f27: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e96f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96f2a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96f30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96f30: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96f34: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96f35: /* e96f35: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e96f38: cmp ecx, dword ptr [eax + 0x94c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x94cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96f3e: je 0xe96f66 */
  if (zf) goto L_e96f66;
L_e96f40: /* e96f40: mov dword ptr [eax + 0x94c], ecx */
  W32((uint32_t)(eax + 0x94cu), ecx);
/* e96f46: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96f4a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96f4c: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e96f4f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96f55: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96f58: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e96f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96f5b: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96f61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96f65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96f66: /* e96f66: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* e96f69: cmp ecx, dword ptr [eax + 0x950] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x950u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96f6f: je 0xe96f97 */
  if (zf) goto L_e96f97;
L_e96f71: /* e96f71: mov dword ptr [eax + 0x950], ecx */
  W32((uint32_t)(eax + 0x950u), ecx);
/* e96f77: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96f7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96f7d: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* e96f80: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96f86: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96f88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96f89: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* e96f8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96f8c: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96f92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96f92: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96f96: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96f97: /* e96f97: cmp dword ptr [eax + 0x2c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96f9a: je 0xe97033 */
  if (zf) goto L_e97033;
L_e96fa0: /* e96fa0: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e96fa3: cmp ecx, dword ptr [eax + 0x954] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x954u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96fa9: je 0xe96fd1 */
  if (zf) goto L_e96fd1;
L_e96fab: /* e96fab: mov dword ptr [eax + 0x954], ecx */
  W32((uint32_t)(eax + 0x954u), ecx);
/* e96fb1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96fb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96fb7: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* e96fba: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96fc0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96fc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96fc3: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* e96fc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96fc6: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96fcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e96fd0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e96fd1: /* e96fd1: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e96fd4: cmp ecx, dword ptr [eax + 0x958] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x958u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e96fda: je 0xe97002 */
  if (zf) goto L_e97002;
L_e96fdc: /* e96fdc: mov dword ptr [eax + 0x958], ecx */
  W32((uint32_t)(eax + 0x958u), ecx);
/* e96fe2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e96fe6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e96fe8: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* e96feb: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e96ff1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e96ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e96ff4: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* e96ff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e96ff7: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe96ffdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e96ffd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97001: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97002: /* e97002: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* e97005: cmp ecx, dword ptr [eax + 0x95c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x95cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9700b: je 0xe97033 */
  if (zf) goto L_e97033;
L_e9700d: /* e9700d: mov dword ptr [eax + 0x95c], ecx */
  W32((uint32_t)(eax + 0x95cu), ecx);
/* e97013: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97017: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97019: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* e9701c: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97022: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97025: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* e97027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97028: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9702eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9702e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97032: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97033: /* e97033: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* e97036: cmp ecx, dword ptr [eax + 0x960] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x960u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9703c: je 0xe97064 */
  if (zf) goto L_e97064;
L_e9703e: /* e9703e: mov dword ptr [eax + 0x960], ecx */
  W32((uint32_t)(eax + 0x960u), ecx);
/* e97044: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97048: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9704a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* e9704d: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97053: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97056: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* e97058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97059: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9705fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9705f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97063: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97064: /* e97064: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97066: cmp dword ptr [edx + 0x54], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x54u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97069: jne 0xe97079 */
  if (!zf) goto L_e97079;
L_e9706b: /* e9706b: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e97071: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97073: je 0xe97201 */
  if (zf) goto L_e97201;
L_e97079: /* e97079: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* e9707c: cmp ecx, dword ptr [eax + 0x964] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x964u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97082: je 0xe970aa */
  if (zf) goto L_e970aa;
L_e97084: /* e97084: mov dword ptr [eax + 0x964], ecx */
  W32((uint32_t)(eax + 0x964u), ecx);
/* e9708a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9708e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97090: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* e97093: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97099: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9709b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9709c: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* e9709e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9709f: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe970a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e970a5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e970a9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e970aa: /* e970aa: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* e970ad: cmp ecx, dword ptr [eax + 0x968] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x968u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e970b3: je 0xe970db */
  if (zf) goto L_e970db;
L_e970b5: /* e970b5: mov dword ptr [eax + 0x968], ecx */
  W32((uint32_t)(eax + 0x968u), ecx);
/* e970bb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e970bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e970c1: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* e970c4: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e970ca: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e970cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e970cd: push 0x35 */
  { uint32_t v = 0x35u; esp -= 4; W32(esp, v); }
/* e970cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e970d0: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe970d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e970d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e970da: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e970db: /* e970db: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* e970de: cmp ecx, dword ptr [eax + 0x96c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x96cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e970e4: je 0xe9710c */
  if (zf) goto L_e9710c;
L_e970e6: /* e970e6: mov dword ptr [eax + 0x96c], ecx */
  W32((uint32_t)(eax + 0x96cu), ecx);
/* e970ec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e970f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e970f2: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* e970f5: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e970fb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e970fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e970fe: push 0x36 */
  { uint32_t v = 0x36u; esp -= 4; W32(esp, v); }
/* e97100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97101: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe97107u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97107: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9710b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9710c: /* e9710c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* e9710f: cmp ecx, dword ptr [eax + 0x970] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x970u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97115: je 0xe9713d */
  if (zf) goto L_e9713d;
L_e97117: /* e97117: mov dword ptr [eax + 0x970], ecx */
  W32((uint32_t)(eax + 0x970u), ecx);
/* e9711d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97121: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97123: mov ecx, dword ptr [ecx + 0x4c] */
  ecx = R32((uint32_t)(ecx + 0x4cu));
/* e97126: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9712c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9712e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9712f: push 0x37 */
  { uint32_t v = 0x37u; esp -= 4; W32(esp, v); }
/* e97131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97132: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe97138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97138: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9713c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9713d: /* e9713d: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* e97140: cmp ecx, dword ptr [eax + 0x974] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x974u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97146: je 0xe9716e */
  if (zf) goto L_e9716e;
L_e97148: /* e97148: mov dword ptr [eax + 0x974], ecx */
  W32((uint32_t)(eax + 0x974u), ecx);
/* e9714e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97154: mov ecx, dword ptr [ecx + 0x50] */
  ecx = R32((uint32_t)(ecx + 0x50u));
/* e97157: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9715d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9715f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97160: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* e97162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97163: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe97169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97169: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9716d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9716e: /* e9716e: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* e97171: cmp ecx, dword ptr [eax + 0x978] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x978u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97177: je 0xe9719f */
  if (zf) goto L_e9719f;
L_e97179: /* e97179: mov dword ptr [eax + 0x978], ecx */
  W32((uint32_t)(eax + 0x978u), ecx);
/* e9717f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97183: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97185: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* e97188: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9718e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97191: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* e97193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97194: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9719au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9719a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9719e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9719f: /* e9719f: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* e971a2: cmp ecx, dword ptr [eax + 0x97c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x97cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e971a8: je 0xe971d0 */
  if (zf) goto L_e971d0;
L_e971aa: /* e971aa: mov dword ptr [eax + 0x97c], ecx */
  W32((uint32_t)(eax + 0x97cu), ecx);
/* e971b0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e971b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e971b6: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* e971b9: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e971bf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e971c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e971c2: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* e971c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e971c5: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe971cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e971cb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e971cf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e971d0: /* e971d0: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e971d3: cmp ecx, dword ptr [eax + 0x980] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x980u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e971d9: je 0xe97201 */
  if (zf) goto L_e97201;
L_e971db: /* e971db: mov dword ptr [eax + 0x980], ecx */
  W32((uint32_t)(eax + 0x980u), ecx);
/* e971e1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e971e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e971e7: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* e971ea: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e971f0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e971f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e971f3: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* e971f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e971f6: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe971fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e971fc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97200: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97201: /* e97201: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* e97204: cmp ecx, dword ptr [eax + 0x984] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x984u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9720a: je 0xe97232 */
  if (zf) goto L_e97232;
L_e9720c: /* e9720c: mov dword ptr [eax + 0x984], ecx */
  W32((uint32_t)(eax + 0x984u), ecx);
/* e97212: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97216: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97218: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* e9721b: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97221: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97224: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* e97226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97227: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9722du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9722d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97231: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97232: /* e97232: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* e97235: cmp ecx, dword ptr [eax + 0x988] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x988u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9723b: je 0xe97266 */
  if (zf) goto L_e97266;
L_e9723d: /* e9723d: mov dword ptr [eax + 0x988], ecx */
  W32((uint32_t)(eax + 0x988u), ecx);
/* e97243: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97247: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97249: mov ecx, dword ptr [ecx + 0x64] */
  ecx = R32((uint32_t)(ecx + 0x64u));
/* e9724c: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97252: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97254: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97255: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* e9725a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9725b: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe97261u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97261: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97265: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97266: /* e97266: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* e97269: cmp ecx, dword ptr [eax + 0x98c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x98cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9726f: je 0xe9729a */
  if (zf) goto L_e9729a;
L_e97271: /* e97271: mov dword ptr [eax + 0x98c], ecx */
  W32((uint32_t)(eax + 0x98cu), ecx);
/* e97277: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9727b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9727d: mov ecx, dword ptr [ecx + 0x68] */
  ecx = R32((uint32_t)(ecx + 0x68u));
/* e97280: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97289: push 0x8b */
  { uint32_t v = 0x8bu; esp -= 4; W32(esp, v); }
/* e9728e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9728f: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe97295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97295: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97299: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9729a: /* e9729a: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e9729d: cmp ecx, dword ptr [eax + 0x990] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x990u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e972a3: je 0xe972ce */
  if (zf) goto L_e972ce;
L_e972a5: /* e972a5: mov dword ptr [eax + 0x990], ecx */
  W32((uint32_t)(eax + 0x990u), ecx);
/* e972ab: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e972af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e972b1: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e972b4: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e972ba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e972bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e972bd: push 0x8d */
  { uint32_t v = 0x8du; esp -= 4; W32(esp, v); }
/* e972c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e972c3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe972c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e972c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e972cd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e972ce: /* e972ce: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* e972d1: cmp ecx, dword ptr [eax + 0x994] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x994u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e972d7: je 0xe97302 */
  if (zf) goto L_e97302;
L_e972d9: /* e972d9: mov dword ptr [eax + 0x994], ecx */
  W32((uint32_t)(eax + 0x994u), ecx);
/* e972df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e972e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e972e5: mov ecx, dword ptr [ecx + 0x70] */
  ecx = R32((uint32_t)(ecx + 0x70u));
/* e972e8: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e972ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e972f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e972f1: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* e972f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e972f7: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe972fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e972fd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97301: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97302: /* e97302: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97304: mov ecx, dword ptr [edx + 0x41e0] */
  ecx = R32((uint32_t)(edx + 0x41e0u));
/* e9730a: xor edi, edi */
  edi = 0;
/* e9730c: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9730e: jle 0xe976c2 */
  if ((zf || sf != of)) goto L_e976c2;
L_e97314: /* e97314: xor esi, esi */
  esi = 0;
/* e97316: jmp 0xe97320 */
  goto L_e97320;
L_e97320: /* e97320: mov edx, dword ptr [esi + eax + 0x74] */
  edx = R32((uint32_t)(esi + eax + 0x74u));
/* e97324: cmp edx, dword ptr [esi + eax + 0x998] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x998u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9732b: lea ecx, [esi + eax + 0x998] */
  ecx = (uint32_t)(esi + eax + 0x998u);
/* e97332: je 0xe97358 */
  if (zf) goto L_e97358;
L_e97334: /* e97334: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97336: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9733a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9733c: mov ecx, dword ptr [esi + ecx + 0x74] */
  ecx = R32((uint32_t)(esi + ecx + 0x74u));
/* e97340: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97346: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97348: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97349: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9734b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9734c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9734d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97353u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97353: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97357: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97358: /* e97358: mov ecx, dword ptr [esi + eax + 0x78] */
  ecx = R32((uint32_t)(esi + eax + 0x78u));
/* e9735c: cmp ecx, dword ptr [esi + eax + 0x99c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x99cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97363: je 0xe9738e */
  if (zf) goto L_e9738e;
L_e97365: /* e97365: mov dword ptr [esi + eax + 0x99c], ecx */
  W32((uint32_t)(esi + eax + 0x99cu), ecx);
/* e9736c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97370: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97372: mov ecx, dword ptr [esi + ecx + 0x78] */
  ecx = R32((uint32_t)(esi + ecx + 0x78u));
/* e97376: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9737c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9737e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9737f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e97381: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97383: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97389u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97389: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9738d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9738e: /* e9738e: mov edx, dword ptr [esi + eax + 0x7c] */
  edx = R32((uint32_t)(esi + eax + 0x7cu));
/* e97392: cmp edx, dword ptr [esi + eax + 0x9a0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97399: lea ecx, [esi + eax + 0x9a0] */
  ecx = (uint32_t)(esi + eax + 0x9a0u);
/* e973a0: je 0xe973c6 */
  if (zf) goto L_e973c6;
L_e973a2: /* e973a2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e973a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e973a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e973aa: mov ecx, dword ptr [esi + ecx + 0x7c] */
  ecx = R32((uint32_t)(esi + ecx + 0x7cu));
/* e973ae: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e973b4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e973b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e973b7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e973b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e973ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e973bb: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe973c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e973c1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e973c5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e973c6: /* e973c6: mov edx, dword ptr [esi + eax + 0x80] */
  edx = R32((uint32_t)(esi + eax + 0x80u));
/* e973cd: cmp edx, dword ptr [esi + eax + 0x9a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e973d4: lea ecx, [esi + eax + 0x9a4] */
  ecx = (uint32_t)(esi + eax + 0x9a4u);
/* e973db: je 0xe97404 */
  if (zf) goto L_e97404;
L_e973dd: /* e973dd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e973df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e973e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e973e5: mov ecx, dword ptr [esi + ecx + 0x80] */
  ecx = R32((uint32_t)(esi + ecx + 0x80u));
/* e973ec: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e973f2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e973f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e973f5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e973f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e973f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e973f9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe973ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e973ff: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97403: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97404: /* e97404: mov edx, dword ptr [esi + eax + 0x84] */
  edx = R32((uint32_t)(esi + eax + 0x84u));
/* e9740b: cmp edx, dword ptr [esi + eax + 0x9a8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97412: lea ecx, [esi + eax + 0x9a8] */
  ecx = (uint32_t)(esi + eax + 0x9a8u);
/* e97419: je 0xe97442 */
  if (zf) goto L_e97442;
L_e9741b: /* e9741b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9741d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97421: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97423: mov ecx, dword ptr [esi + ecx + 0x84] */
  ecx = R32((uint32_t)(esi + ecx + 0x84u));
/* e9742a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97430: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97432: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97433: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e97435: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97437: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9743du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9743d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97441: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97442: /* e97442: mov edx, dword ptr [esi + eax + 0x88] */
  edx = R32((uint32_t)(esi + eax + 0x88u));
/* e97449: cmp edx, dword ptr [esi + eax + 0x9ac] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9acu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97450: lea ecx, [esi + eax + 0x9ac] */
  ecx = (uint32_t)(esi + eax + 0x9acu);
/* e97457: je 0xe97480 */
  if (zf) goto L_e97480;
L_e97459: /* e97459: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9745b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9745f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97461: mov ecx, dword ptr [esi + ecx + 0x88] */
  ecx = R32((uint32_t)(esi + ecx + 0x88u));
/* e97468: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9746e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97471: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e97473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97475: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9747bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9747b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9747f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97480: /* e97480: mov edx, dword ptr [esi + eax + 0x8c] */
  edx = R32((uint32_t)(esi + eax + 0x8cu));
/* e97487: cmp edx, dword ptr [esi + eax + 0x9b0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9748e: lea ecx, [esi + eax + 0x9b0] */
  ecx = (uint32_t)(esi + eax + 0x9b0u);
/* e97495: je 0xe974be */
  if (zf) goto L_e974be;
L_e97497: /* e97497: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97499: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9749d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9749f: mov ecx, dword ptr [esi + ecx + 0x8c] */
  ecx = R32((uint32_t)(esi + ecx + 0x8cu));
/* e974a6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e974ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e974ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e974af: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e974b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e974b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e974b3: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe974b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e974b9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e974bd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e974be: /* e974be: mov edx, dword ptr [esi + eax + 0x90] */
  edx = R32((uint32_t)(esi + eax + 0x90u));
/* e974c5: cmp edx, dword ptr [esi + eax + 0x9b4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e974cc: lea ecx, [esi + eax + 0x9b4] */
  ecx = (uint32_t)(esi + eax + 0x9b4u);
/* e974d3: je 0xe974fc */
  if (zf) goto L_e974fc;
L_e974d5: /* e974d5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e974d7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e974db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e974dd: mov ecx, dword ptr [esi + ecx + 0x90] */
  ecx = R32((uint32_t)(esi + ecx + 0x90u));
/* e974e4: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e974ea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e974ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e974ed: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e974ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e974f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e974f1: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe974f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e974f7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e974fb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e974fc: /* e974fc: mov edx, dword ptr [esi + eax + 0x94] */
  edx = R32((uint32_t)(esi + eax + 0x94u));
/* e97503: cmp edx, dword ptr [esi + eax + 0x9b8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9750a: lea ecx, [esi + eax + 0x9b8] */
  ecx = (uint32_t)(esi + eax + 0x9b8u);
/* e97511: je 0xe9753a */
  if (zf) goto L_e9753a;
L_e97513: /* e97513: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97515: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97519: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9751b: mov ecx, dword ptr [esi + ecx + 0x94] */
  ecx = R32((uint32_t)(esi + ecx + 0x94u));
/* e97522: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97528: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9752a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9752b: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e9752d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9752e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9752f: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97535: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97539: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9753a: /* e9753a: mov edx, dword ptr [esi + eax + 0x98] */
  edx = R32((uint32_t)(esi + eax + 0x98u));
/* e97541: cmp edx, dword ptr [esi + eax + 0x9bc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97548: lea ecx, [esi + eax + 0x9bc] */
  ecx = (uint32_t)(esi + eax + 0x9bcu);
/* e9754f: je 0xe97578 */
  if (zf) goto L_e97578;
L_e97551: /* e97551: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97553: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97557: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97559: mov ecx, dword ptr [esi + ecx + 0x98] */
  ecx = R32((uint32_t)(esi + ecx + 0x98u));
/* e97560: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97566: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97568: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97569: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e9756b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9756c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9756d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97573u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97573: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97577: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97578: /* e97578: mov edx, dword ptr [esi + eax + 0x9c] */
  edx = R32((uint32_t)(esi + eax + 0x9cu));
/* e9757f: cmp edx, dword ptr [esi + eax + 0x9c0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97586: lea ecx, [esi + eax + 0x9c0] */
  ecx = (uint32_t)(esi + eax + 0x9c0u);
/* e9758d: je 0xe975b6 */
  if (zf) goto L_e975b6;
L_e9758f: /* e9758f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97591: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97595: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97597: mov ecx, dword ptr [esi + ecx + 0x9c] */
  ecx = R32((uint32_t)(esi + ecx + 0x9cu));
/* e9759e: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e975a4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e975a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e975a7: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e975a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e975aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e975ab: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe975b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e975b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e975b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e975b6: /* e975b6: mov edx, dword ptr [esi + eax + 0xa0] */
  edx = R32((uint32_t)(esi + eax + 0xa0u));
/* e975bd: cmp edx, dword ptr [esi + eax + 0x9c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e975c4: lea ecx, [esi + eax + 0x9c4] */
  ecx = (uint32_t)(esi + eax + 0x9c4u);
/* e975cb: je 0xe975f4 */
  if (zf) goto L_e975f4;
L_e975cd: /* e975cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e975cf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e975d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e975d5: mov ecx, dword ptr [esi + ecx + 0xa0] */
  ecx = R32((uint32_t)(esi + ecx + 0xa0u));
/* e975dc: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e975e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e975e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e975e5: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e975e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e975e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e975e9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe975efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e975ef: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e975f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e975f4: /* e975f4: mov edx, dword ptr [esi + eax + 0xa4] */
  edx = R32((uint32_t)(esi + eax + 0xa4u));
/* e975fb: cmp edx, dword ptr [esi + eax + 0x9c8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97602: lea ecx, [esi + eax + 0x9c8] */
  ecx = (uint32_t)(esi + eax + 0x9c8u);
/* e97609: je 0xe97632 */
  if (zf) goto L_e97632;
L_e9760b: /* e9760b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9760d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97611: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97613: mov ecx, dword ptr [esi + ecx + 0xa4] */
  ecx = R32((uint32_t)(esi + ecx + 0xa4u));
/* e9761a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97620: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97623: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e97625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97627: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9762du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9762d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97631: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97632: /* e97632: mov edx, dword ptr [esi + eax + 0xa8] */
  edx = R32((uint32_t)(esi + eax + 0xa8u));
/* e97639: cmp edx, dword ptr [esi + eax + 0x9cc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97640: lea ecx, [esi + eax + 0x9cc] */
  ecx = (uint32_t)(esi + eax + 0x9ccu);
/* e97647: je 0xe97670 */
  if (zf) goto L_e97670;
L_e97649: /* e97649: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9764b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9764f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97651: mov ecx, dword ptr [esi + ecx + 0xa8] */
  ecx = R32((uint32_t)(esi + ecx + 0xa8u));
/* e97658: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9765e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97661: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* e97663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97665: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9766bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9766b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9766f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97670: /* e97670: mov edx, dword ptr [esi + eax + 0xac] */
  edx = R32((uint32_t)(esi + eax + 0xacu));
/* e97677: cmp edx, dword ptr [esi + eax + 0x9d0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9d0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9767e: lea ecx, [esi + eax + 0x9d0] */
  ecx = (uint32_t)(esi + eax + 0x9d0u);
/* e97685: je 0xe976ae */
  if (zf) goto L_e976ae;
L_e97687: /* e97687: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97689: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9768d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9768f: mov ecx, dword ptr [esi + ecx + 0xac] */
  ecx = R32((uint32_t)(esi + ecx + 0xacu));
/* e97696: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9769c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9769e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9769f: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e976a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e976a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e976a3: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe976a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e976a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e976ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e976ae: /* e976ae: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e976b0: mov ecx, dword ptr [edx + 0x41e0] */
  ecx = R32((uint32_t)(edx + 0x41e0u));
/* e976b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e976b7: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e976ba: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e976bc: jl 0xe97320 */
  if ((sf != of)) goto L_e97320;
L_e976c2: /* e976c2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e976c4: mov ecx, dword ptr [eax + 0x30f80] */
  ecx = R32((uint32_t)(eax + 0x30f80u));
/* e976ca: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e976d0: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e976d3: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e976d6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e976d8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e976da: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e976dd: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e976df: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e976e1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e976e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e976e7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e976ed: mov eax, dword ptr [edx + 0x30f90] */
  eax = R32((uint32_t)(edx + 0x30f90u));
/* e976f3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e976f6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e976f9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e976fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e976fd: mov esi, dword ptr [0xeae22c] */
  esi = R32((uint32_t)(0xeae22cu));
/* e97703: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e97705: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97707: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9770b: test byte ptr [eax + 0x514], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97712: je 0xe97771 */
  if (zf) goto L_e97771;
L_e97714: /* e97714: lea ecx, [eax + 0xb78] */
  ecx = (uint32_t)(eax + 0xb78u);
/* e9771a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9771c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9771d: add eax, 0x254 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97723: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97728: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9772a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9772e: je 0xe97771 */
  if (zf) goto L_e97771;
L_e97730: /* e97730: lea edx, [eax + 0x254] */
  edx = (uint32_t)(eax + 0x254u);
/* e97736: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97738: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97739: add eax, 0xb78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9773e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9773f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97744u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97744: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97748: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9774a: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97750: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97752: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97755: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9775b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9775c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9775e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9775f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97769: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_e97771: /* e97771: test byte ptr [eax + 0x514], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97778: je 0xe977d3 */
  if (zf) goto L_e977d3;
L_e9777a: /* e9777a: lea ecx, [eax + 0xbb8] */
  ecx = (uint32_t)(eax + 0xbb8u);
/* e97780: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97783: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97789: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe9778bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9778b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9778e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97790: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97794: je 0xe977d3 */
  if (zf) goto L_e977d3;
L_e97796: /* e97796: lea edx, [eax + 0x294] */
  edx = (uint32_t)(eax + 0x294u);
/* e9779c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9779e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9779f: add eax, 0xbb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e977a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977a5: call 0xe81020 */
  esp -= 4; W32(esp, 0xe977aau); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e977aa: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e977ae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e977b0: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e977b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e977b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e977bb: add ecx, 0x294 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e977c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e977c2: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e977c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977c5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe977cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e977cb: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e977cf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e977d3: /* e977d3: test byte ptr [eax + 0x514], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e977da: je 0xe97835 */
  if (zf) goto L_e97835;
L_e977dc: /* e977dc: lea ecx, [eax + 0xbf8] */
  ecx = (uint32_t)(eax + 0xbf8u);
/* e977e2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e977e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e977e5: add eax, 0x2d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e977ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe977edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e977ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e977f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e977f2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e977f6: je 0xe97835 */
  if (zf) goto L_e97835;
L_e977f8: /* e977f8: lea edx, [eax + 0x2d4] */
  edx = (uint32_t)(eax + 0x2d4u);
/* e977fe: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97801: add eax, 0xbf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97807: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9780cu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9780c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97810: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97812: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97818: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9781a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9781d: add ecx, 0x2d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97824: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e97826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97827: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9782du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9782d: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97831: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97835: /* e97835: test byte ptr [eax + 0x514], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9783c: je 0xe97897 */
  if (zf) goto L_e97897;
L_e9783e: /* e9783e: lea ecx, [eax + 0xc38] */
  ecx = (uint32_t)(eax + 0xc38u);
/* e97844: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97847: add eax, 0x314 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9784c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9784d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe9784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9784f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97854: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97858: je 0xe97897 */
  if (zf) goto L_e97897;
L_e9785a: /* e9785a: lea edx, [eax + 0x314] */
  edx = (uint32_t)(eax + 0x314u);
/* e97860: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97862: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97863: add eax, 0xc38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97869: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9786eu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9786e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97872: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97874: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9787a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9787c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9787f: add ecx, 0x314 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97886: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e97888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97889: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9788fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9788f: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97893: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97897: /* e97897: test byte ptr [eax + 0x514], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9789e: je 0xe978f9 */
  if (zf) goto L_e978f9;
L_e978a0: /* e978a0: lea ecx, [eax + 0xc78] */
  ecx = (uint32_t)(eax + 0xc78u);
/* e978a6: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e978a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e978a9: add eax, 0x354 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e978ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe978b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e978b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e978b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e978b6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e978ba: je 0xe978f9 */
  if (zf) goto L_e978f9;
L_e978bc: /* e978bc: lea edx, [eax + 0x354] */
  edx = (uint32_t)(eax + 0x354u);
/* e978c2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e978c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e978c5: add eax, 0xc78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e978ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978cb: call 0xe81020 */
  esp -= 4; W32(esp, 0xe978d0u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e978d0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e978d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e978d6: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e978dc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e978de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e978e1: add ecx, 0x354 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e978e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e978e8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e978ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978eb: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe978f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e978f1: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e978f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e978f9: /* e978f9: test byte ptr [eax + 0x514], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97900: je 0xe9795b */
  if (zf) goto L_e9795b;
L_e97902: /* e97902: lea ecx, [eax + 0xcb8] */
  ecx = (uint32_t)(eax + 0xcb8u);
/* e97908: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9790a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9790b: add eax, 0x394 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97911: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97913u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97913: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97916: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97918: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9791c: je 0xe9795b */
  if (zf) goto L_e9795b;
L_e9791e: /* e9791e: lea edx, [eax + 0x394] */
  edx = (uint32_t)(eax + 0x394u);
/* e97924: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97926: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97927: add eax, 0xcb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9792c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9792d: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97932u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97932: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97936: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97938: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9793e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97940: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97943: add ecx, 0x394 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9794a: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e9794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9794d: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97953u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97953: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97957: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e9795b: /* e9795b: test byte ptr [eax + 0x514], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97962: je 0xe979bd */
  if (zf) goto L_e979bd;
L_e97964: /* e97964: lea ecx, [eax + 0xcf8] */
  ecx = (uint32_t)(eax + 0xcf8u);
/* e9796a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9796c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9796d: add eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97973: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97975: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9797a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9797e: je 0xe979bd */
  if (zf) goto L_e979bd;
L_e97980: /* e97980: lea edx, [eax + 0x3d4] */
  edx = (uint32_t)(eax + 0x3d4u);
/* e97986: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97989: add eax, 0xcf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9798e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9798f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97994u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97994: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97998: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9799a: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e979a0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e979a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e979a5: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e979ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e979ac: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e979ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979af: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe979b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e979b5: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e979b9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e979bd: /* e979bd: mov cl, byte ptr [eax + 0x514] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x514u))) & 0xffu);
/* e979c3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* e979c5: jns 0xe97a20 */
  if (!sf) goto L_e97a20;
L_e979c7: /* e979c7: lea ecx, [eax + 0xd38] */
  ecx = (uint32_t)(eax + 0xd38u);
/* e979cd: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e979cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e979d0: add eax, 0x414 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e979d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe979d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e979d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e979db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e979dd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e979e1: je 0xe97a20 */
  if (zf) goto L_e97a20;
L_e979e3: /* e979e3: lea edx, [eax + 0x414] */
  edx = (uint32_t)(eax + 0x414u);
/* e979e9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e979eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e979ec: add eax, 0xd38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e979f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979f2: call 0xe81020 */
  esp -= 4; W32(esp, 0xe979f7u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e979f7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e979fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e979fd: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97a03: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97a05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a08: add ecx, 0x414 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97a0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a0f: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e97a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a12: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97a18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a18: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97a1c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97a20: /* e97a20: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97a26: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97a29: je 0xe97a84 */
  if (zf) goto L_e97a84;
L_e97a2b: /* e97a2b: lea ecx, [eax + 0xd78] */
  ecx = (uint32_t)(eax + 0xd78u);
/* e97a31: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a34: add eax, 0x454 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a3a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97a41: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97a45: je 0xe97a84 */
  if (zf) goto L_e97a84;
L_e97a47: /* e97a47: lea edx, [eax + 0x454] */
  edx = (uint32_t)(eax + 0x454u);
/* e97a4d: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97a50: add eax, 0xd78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a56: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97a5bu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97a5b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97a5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97a61: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97a67: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97a69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a6c: add ecx, 0x454 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a73: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e97a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a76: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97a7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a7c: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97a80: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97a84: /* e97a84: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97a8a: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97a8d: je 0xe97ae8 */
  if (zf) goto L_e97ae8;
L_e97a8f: /* e97a8f: lea ecx, [eax + 0xdb8] */
  ecx = (uint32_t)(eax + 0xdb8u);
/* e97a95: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a98: add eax, 0x494 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a9e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97aa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97aa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97aa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97aa5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97aa9: je 0xe97ae8 */
  if (zf) goto L_e97ae8;
L_e97aab: /* e97aab: lea edx, [eax + 0x494] */
  edx = (uint32_t)(eax + 0x494u);
/* e97ab1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97ab3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97ab4: add eax, 0xdb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97ab9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97aba: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97abfu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97abf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97ac3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97ac5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97acb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97acd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97ad0: add ecx, 0x494 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97ad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97ad7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e97ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97ada: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97ae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97ae0: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97ae4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97ae8: /* e97ae8: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97aee: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97af1: je 0xe97b4f */
  if (zf) goto L_e97b4f;
L_e97af3: /* e97af3: lea ecx, [eax + 0xdf8] */
  ecx = (uint32_t)(eax + 0xdf8u);
/* e97af9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97afb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97afc: add eax, 0x4d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b02: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97b04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97b07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97b09: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97b0d: je 0xe97b4f */
  if (zf) goto L_e97b4f;
L_e97b0f: /* e97b0f: lea edx, [eax + 0x4d4] */
  edx = (uint32_t)(eax + 0x4d4u);
/* e97b15: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97b17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97b18: add eax, 0xdf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b1e: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97b23u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97b23: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97b27: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97b29: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97b2f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97b31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97b34: add ecx, 0x4d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97b3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97b3b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e97b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b41: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97b47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97b47: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97b4b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97b4f: /* e97b4f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e97b51: mov ecx, dword ptr [eax + 0x30f90] */
  ecx = R32((uint32_t)(eax + 0x30f90u));
/* e97b57: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97b5d: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97b60: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e97b63: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97b65: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97b67: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b6a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97b6c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97b6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97b72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97b74: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97b7a: mov eax, dword ptr [edx + 0x30f88] */
  eax = R32((uint32_t)(edx + 0x30f88u));
/* e97b80: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97b83: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97b86: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97b88: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e97b8a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97b8e: xor edi, edi */
  edi = 0;
/* e97b90: mov esi, 0x5a8 */
  esi = 0x5a8u;
L_e97b95: /* e97b95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97b97: mov ecx, dword ptr [ecx + 0x41e0] */
  ecx = R32((uint32_t)(ecx + 0x41e0u));
/* e97b9d: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97ba0: jl 0xe97ba7 */
  if ((sf != of)) goto L_e97ba7;
L_e97ba2: /* e97ba2: mov ecx, 8 */
  ecx = 0x8u;
L_e97ba7: /* e97ba7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97ba9: jge 0xe97be6 */
  if ((sf == of)) goto L_e97be6;
L_e97bab: /* e97bab: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* e97bae: cmp ecx, dword ptr [esi + eax + 0x924] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x924u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97bb5: je 0xe97be0 */
  if (zf) goto L_e97be0;
L_e97bb7: /* e97bb7: mov dword ptr [esi + eax + 0x924], ecx */
  W32((uint32_t)(esi + eax + 0x924u), ecx);
/* e97bbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97bc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97bc4: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* e97bc7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97bcd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97bd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97bd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97bd2: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xe97bd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97bd8: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e97bdc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97be0: /* e97be0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e97be1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97be4: jmp 0xe97b95 */
  goto L_e97b95;
L_e97be6: /* e97be6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97be8: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97bee: mov eax, dword ptr [edx + 0x30f88] */
  eax = R32((uint32_t)(edx + 0x30f88u));
/* e97bf4: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97bf7: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97bfa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97bfc: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97bfe: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97c01: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97c03: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97c05: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97c09: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97c0b: mov edx, dword ptr [ecx + 0x30f98] */
  edx = R32((uint32_t)(ecx + 0x30f98u));
/* e97c11: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97c16: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97c19: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e97c1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97c1e: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e97c20: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97c24: xor ebp, ebp */
  ebp = 0;
/* e97c26: xor edi, edi */
  edi = 0;
/* e97c28: mov esi, 0x908 */
  esi = 0x908u;
/* e97c2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e97c30: /* e97c30: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97c32: mov ecx, dword ptr [edx + 0x41ec] */
  ecx = R32((uint32_t)(edx + 0x41ecu));
/* e97c38: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97c3b: jl 0xe97c42 */
  if ((sf != of)) goto L_e97c42;
L_e97c3d: /* e97c3d: mov ecx, 8 */
  ecx = 0x8u;
L_e97c42: /* e97c42: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97c44: jge 0xe97cd1 */
  if ((sf == of)) goto L_e97cd1;
L_e97c4a: /* e97c4a: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97c4e: je 0xe97c90 */
  if (zf) goto L_e97c90;
L_e97c50: /* e97c50: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* e97c52: lea ecx, [edi + eax + 0x5c8] */
  ecx = (uint32_t)(edi + eax + 0x5c8u);
/* e97c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97c5a: lea edx, [edi + eax + 0xeec] */
  edx = (uint32_t)(edi + eax + 0xeecu);
/* e97c61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97c62: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97c67u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97c67: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97c6b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97c6d: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97c73: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97c75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97c78: lea ecx, [edi + ecx + 0x5c8] */
  ecx = (uint32_t)(edi + ecx + 0x5c8u);
/* e97c7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e97c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97c82: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xe97c88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97c88: inc dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* e97c8c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97c90: /* e97c90: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* e97c93: cmp ecx, dword ptr [esi + eax + 0x924] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x924u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97c9a: je 0xe97cc5 */
  if (zf) goto L_e97cc5;
L_e97c9c: /* e97c9c: mov dword ptr [esi + eax + 0x924], ecx */
  W32((uint32_t)(esi + eax + 0x924u), ecx);
/* e97ca3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97ca7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97ca9: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* e97cac: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97cb2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97cb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97cb5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e97cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97cb7: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0xe97cbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97cbd: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* e97cc1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97cc5: /* e97cc5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e97cc6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97cc9: add edi, 0x68 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97ccc: jmp 0xe97c30 */
  goto L_e97c30;
L_e97cd1: /* e97cd1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97cd3: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97cd9: mov eax, dword ptr [edx + 0x30f98] */
  eax = R32((uint32_t)(edx + 0x30f98u));
/* e97cdf: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97ce2: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97ce5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97ce7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97ce9: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97cec: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97cee: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97cf0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97cf4: mov eax, dword ptr [ecx + 0x518] */
  eax = R32((uint32_t)(ecx + 0x518u));
/* e97cfa: cmp eax, dword ptr [ecx + 0xe3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xe3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d00: je 0xe97d28 */
  if (zf) goto L_e97d28;
L_e97d02: /* e97d02: mov dword ptr [ecx + 0xe3c], eax */
  W32((uint32_t)(ecx + 0xe3cu), eax);
/* e97d08: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97d0c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97d0e: mov ecx, dword ptr [ecx + 0x518] */
  ecx = R32((uint32_t)(ecx + 0x518u));
/* e97d14: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97d1a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97d1e: call dword ptr [edx + 0x130] */
  { uint32_t t = R32((uint32_t)(edx + 0x130u)); esp -= 4; W32(esp, 0xe97d24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97d24: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_e97d28: /* e97d28: call 0xe96c70 */
  esp -= 4; W32(esp, 0xe97d2du); SPILL(); f_e96c70(); if (g_unwind) return; RELOAD();
/* e97d2d: mov esi, eax */
  esi = eax;
/* e97d2f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d33: mov ecx, dword ptr [eax + 0x51c] */
  ecx = R32((uint32_t)(eax + 0x51cu));
/* e97d39: cmp ecx, dword ptr [eax + 0xe40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xe40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d3f: je 0xe97d67 */
  if (zf) goto L_e97d67;
L_e97d41: /* e97d41: mov dword ptr [eax + 0xe40], ecx */
  W32((uint32_t)(eax + 0xe40u), ecx);
/* e97d47: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97d4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97d4d: mov ecx, dword ptr [ecx + 0x51c] */
  ecx = R32((uint32_t)(ecx + 0x51cu));
/* e97d53: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97d59: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97d5d: call dword ptr [edx + 0x160] */
  { uint32_t t = R32((uint32_t)(edx + 0x160u)); esp -= 4; W32(esp, 0xe97d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97d63: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97d67: /* e97d67: mov ecx, dword ptr [eax + 0x5a0] */
  ecx = R32((uint32_t)(eax + 0x5a0u));
/* e97d6d: cmp ecx, dword ptr [eax + 0xec4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d73: jne 0xe97d83 */
  if (!zf) goto L_e97d83;
L_e97d75: /* e97d75: mov edx, dword ptr [eax + 0x5a4] */
  edx = R32((uint32_t)(eax + 0x5a4u));
/* e97d7b: cmp edx, dword ptr [eax + 0xec8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d81: je 0xe97dc0 */
  if (zf) goto L_e97dc0;
L_e97d83: /* e97d83: mov dword ptr [eax + 0xec4], ecx */
  W32((uint32_t)(eax + 0xec4u), ecx);
/* e97d89: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d8d: mov ecx, dword ptr [eax + 0x5a4] */
  ecx = R32((uint32_t)(eax + 0x5a4u));
/* e97d93: mov dword ptr [eax + 0xec8], ecx */
  W32((uint32_t)(eax + 0xec8u), ecx);
/* e97d99: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d9d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d9f: mov edi, dword ptr [eax + 0x5a4] */
  edi = R32((uint32_t)(eax + 0x5a4u));
/* e97da5: mov eax, dword ptr [eax + 0x5a0] */
  eax = R32((uint32_t)(eax + 0x5a0u));
/* e97dab: mov ecx, dword ptr [edx + 0x46b4] */
  ecx = R32((uint32_t)(edx + 0x46b4u));
/* e97db1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97db3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97db6: call dword ptr [edx + 0x154] */
  { uint32_t t = R32((uint32_t)(edx + 0x154u)); esp -= 4; W32(esp, 0xe97dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97dbc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97dc0: /* e97dc0: mov dword ptr [eax + 0x514], 0 */
  W32((uint32_t)(eax + 0x514u), 0x0u);
/* e97dca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97dce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97dd0: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97dd6: mov eax, dword ptr [edx + 0x30fcc] */
  eax = R32((uint32_t)(edx + 0x30fccu));
/* e97ddc: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97ddf: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97de2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97de4: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* e97de6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97de9: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e97deb: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* e97ded: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97df1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97df3: mov edx, dword ptr [ecx + 0x30f84] */
  edx = R32((uint32_t)(ecx + 0x30f84u));
/* e97df9: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97dfe: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e01: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* e97e04: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e07: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e97e0b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97e0d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e97e0f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e15: mov edx, dword ptr [ecx + 0x30f9c] */
  edx = R32((uint32_t)(ecx + 0x30f9cu));
/* e97e1b: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e20: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e23: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e28: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e97e2c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97e2e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e97e30: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e36: mov edx, dword ptr [ecx + 0x30f94] */
  edx = R32((uint32_t)(ecx + 0x30f94u));
/* e97e3c: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e41: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e44: mov ebp, dword ptr [ecx + edx*4] */
  ebp = R32((uint32_t)(ecx + edx*4));
/* e97e47: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e4a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e97e4e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e97e50: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* e97e52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e56: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e58: mov edx, dword ptr [ecx + 0x30f7c] */
  edx = R32((uint32_t)(ecx + 0x30f7cu));
/* e97e5e: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e63: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e66: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* e97e69: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e6c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97e6e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e97e70: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e97e74: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e97e76: mov ecx, dword ptr [eax + 0x30f8c] */
  ecx = R32((uint32_t)(eax + 0x30f8cu));
/* e97e7c: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97e82: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97e85: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* e97e88: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e97e8b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e97e8f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e97e91: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e97e93: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e97e97: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e97e99: mov ecx, dword ptr [eax + 0x30fb8] */
  ecx = R32((uint32_t)(eax + 0x30fb8u));
/* e97e9f: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97ea5: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97ea8: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e97eab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97ead: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e97eae: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97eb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e97eb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e97eb2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e97eb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e97eb5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97eb8: ret  */
  esp += 4; SPILL(); return;
}

void f_e97318(void) {
  LOAD_REGS();
L_e97318: /* e97318: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e9731f: nop  */
L_e97320: /* e97320: mov edx, dword ptr [esi + eax + 0x74] */
  edx = R32((uint32_t)(esi + eax + 0x74u));
/* e97324: cmp edx, dword ptr [esi + eax + 0x998] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x998u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9732b: lea ecx, [esi + eax + 0x998] */
  ecx = (uint32_t)(esi + eax + 0x998u);
/* e97332: je 0xe97358 */
  if (zf) goto L_e97358;
L_e97334: /* e97334: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97336: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9733a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9733c: mov ecx, dword ptr [esi + ecx + 0x74] */
  ecx = R32((uint32_t)(esi + ecx + 0x74u));
/* e97340: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97346: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97348: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97349: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9734b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9734c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9734d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97353u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97353: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97357: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97358: /* e97358: mov ecx, dword ptr [esi + eax + 0x78] */
  ecx = R32((uint32_t)(esi + eax + 0x78u));
/* e9735c: cmp ecx, dword ptr [esi + eax + 0x99c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x99cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97363: je 0xe9738e */
  if (zf) goto L_e9738e;
L_e97365: /* e97365: mov dword ptr [esi + eax + 0x99c], ecx */
  W32((uint32_t)(esi + eax + 0x99cu), ecx);
/* e9736c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97370: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97372: mov ecx, dword ptr [esi + ecx + 0x78] */
  ecx = R32((uint32_t)(esi + ecx + 0x78u));
/* e97376: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9737c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9737e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9737f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e97381: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97383: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97389u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97389: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9738d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9738e: /* e9738e: mov edx, dword ptr [esi + eax + 0x7c] */
  edx = R32((uint32_t)(esi + eax + 0x7cu));
/* e97392: cmp edx, dword ptr [esi + eax + 0x9a0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97399: lea ecx, [esi + eax + 0x9a0] */
  ecx = (uint32_t)(esi + eax + 0x9a0u);
/* e973a0: je 0xe973c6 */
  if (zf) goto L_e973c6;
L_e973a2: /* e973a2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e973a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e973a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e973aa: mov ecx, dword ptr [esi + ecx + 0x7c] */
  ecx = R32((uint32_t)(esi + ecx + 0x7cu));
/* e973ae: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e973b4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e973b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e973b7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e973b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e973ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e973bb: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe973c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e973c1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e973c5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e973c6: /* e973c6: mov edx, dword ptr [esi + eax + 0x80] */
  edx = R32((uint32_t)(esi + eax + 0x80u));
/* e973cd: cmp edx, dword ptr [esi + eax + 0x9a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e973d4: lea ecx, [esi + eax + 0x9a4] */
  ecx = (uint32_t)(esi + eax + 0x9a4u);
/* e973db: je 0xe97404 */
  if (zf) goto L_e97404;
L_e973dd: /* e973dd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e973df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e973e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e973e5: mov ecx, dword ptr [esi + ecx + 0x80] */
  ecx = R32((uint32_t)(esi + ecx + 0x80u));
/* e973ec: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e973f2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e973f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e973f5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e973f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e973f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e973f9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe973ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e973ff: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97403: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97404: /* e97404: mov edx, dword ptr [esi + eax + 0x84] */
  edx = R32((uint32_t)(esi + eax + 0x84u));
/* e9740b: cmp edx, dword ptr [esi + eax + 0x9a8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97412: lea ecx, [esi + eax + 0x9a8] */
  ecx = (uint32_t)(esi + eax + 0x9a8u);
/* e97419: je 0xe97442 */
  if (zf) goto L_e97442;
L_e9741b: /* e9741b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9741d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97421: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97423: mov ecx, dword ptr [esi + ecx + 0x84] */
  ecx = R32((uint32_t)(esi + ecx + 0x84u));
/* e9742a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97430: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97432: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97433: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e97435: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97437: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9743du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9743d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97441: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97442: /* e97442: mov edx, dword ptr [esi + eax + 0x88] */
  edx = R32((uint32_t)(esi + eax + 0x88u));
/* e97449: cmp edx, dword ptr [esi + eax + 0x9ac] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9acu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97450: lea ecx, [esi + eax + 0x9ac] */
  ecx = (uint32_t)(esi + eax + 0x9acu);
/* e97457: je 0xe97480 */
  if (zf) goto L_e97480;
L_e97459: /* e97459: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9745b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9745f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97461: mov ecx, dword ptr [esi + ecx + 0x88] */
  ecx = R32((uint32_t)(esi + ecx + 0x88u));
/* e97468: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9746e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97471: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e97473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97475: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9747bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9747b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9747f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97480: /* e97480: mov edx, dword ptr [esi + eax + 0x8c] */
  edx = R32((uint32_t)(esi + eax + 0x8cu));
/* e97487: cmp edx, dword ptr [esi + eax + 0x9b0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9748e: lea ecx, [esi + eax + 0x9b0] */
  ecx = (uint32_t)(esi + eax + 0x9b0u);
/* e97495: je 0xe974be */
  if (zf) goto L_e974be;
L_e97497: /* e97497: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97499: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9749d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9749f: mov ecx, dword ptr [esi + ecx + 0x8c] */
  ecx = R32((uint32_t)(esi + ecx + 0x8cu));
/* e974a6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e974ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e974ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e974af: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e974b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e974b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e974b3: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe974b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e974b9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e974bd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e974be: /* e974be: mov edx, dword ptr [esi + eax + 0x90] */
  edx = R32((uint32_t)(esi + eax + 0x90u));
/* e974c5: cmp edx, dword ptr [esi + eax + 0x9b4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e974cc: lea ecx, [esi + eax + 0x9b4] */
  ecx = (uint32_t)(esi + eax + 0x9b4u);
/* e974d3: je 0xe974fc */
  if (zf) goto L_e974fc;
L_e974d5: /* e974d5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e974d7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e974db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e974dd: mov ecx, dword ptr [esi + ecx + 0x90] */
  ecx = R32((uint32_t)(esi + ecx + 0x90u));
/* e974e4: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e974ea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e974ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e974ed: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e974ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e974f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e974f1: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe974f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e974f7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e974fb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e974fc: /* e974fc: mov edx, dword ptr [esi + eax + 0x94] */
  edx = R32((uint32_t)(esi + eax + 0x94u));
/* e97503: cmp edx, dword ptr [esi + eax + 0x9b8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9b8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9750a: lea ecx, [esi + eax + 0x9b8] */
  ecx = (uint32_t)(esi + eax + 0x9b8u);
/* e97511: je 0xe9753a */
  if (zf) goto L_e9753a;
L_e97513: /* e97513: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97515: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97519: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9751b: mov ecx, dword ptr [esi + ecx + 0x94] */
  ecx = R32((uint32_t)(esi + ecx + 0x94u));
/* e97522: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97528: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9752a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9752b: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e9752d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9752e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9752f: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97535: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97539: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e9753a: /* e9753a: mov edx, dword ptr [esi + eax + 0x98] */
  edx = R32((uint32_t)(esi + eax + 0x98u));
/* e97541: cmp edx, dword ptr [esi + eax + 0x9bc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97548: lea ecx, [esi + eax + 0x9bc] */
  ecx = (uint32_t)(esi + eax + 0x9bcu);
/* e9754f: je 0xe97578 */
  if (zf) goto L_e97578;
L_e97551: /* e97551: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97553: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97557: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97559: mov ecx, dword ptr [esi + ecx + 0x98] */
  ecx = R32((uint32_t)(esi + ecx + 0x98u));
/* e97560: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97566: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97568: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97569: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* e9756b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9756c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9756d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97573u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97573: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97577: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97578: /* e97578: mov edx, dword ptr [esi + eax + 0x9c] */
  edx = R32((uint32_t)(esi + eax + 0x9cu));
/* e9757f: cmp edx, dword ptr [esi + eax + 0x9c0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97586: lea ecx, [esi + eax + 0x9c0] */
  ecx = (uint32_t)(esi + eax + 0x9c0u);
/* e9758d: je 0xe975b6 */
  if (zf) goto L_e975b6;
L_e9758f: /* e9758f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97591: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97595: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97597: mov ecx, dword ptr [esi + ecx + 0x9c] */
  ecx = R32((uint32_t)(esi + ecx + 0x9cu));
/* e9759e: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e975a4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e975a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e975a7: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* e975a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e975aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e975ab: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe975b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e975b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e975b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e975b6: /* e975b6: mov edx, dword ptr [esi + eax + 0xa0] */
  edx = R32((uint32_t)(esi + eax + 0xa0u));
/* e975bd: cmp edx, dword ptr [esi + eax + 0x9c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e975c4: lea ecx, [esi + eax + 0x9c4] */
  ecx = (uint32_t)(esi + eax + 0x9c4u);
/* e975cb: je 0xe975f4 */
  if (zf) goto L_e975f4;
L_e975cd: /* e975cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e975cf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e975d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e975d5: mov ecx, dword ptr [esi + ecx + 0xa0] */
  ecx = R32((uint32_t)(esi + ecx + 0xa0u));
/* e975dc: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e975e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e975e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e975e5: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e975e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e975e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e975e9: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe975efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e975ef: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e975f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e975f4: /* e975f4: mov edx, dword ptr [esi + eax + 0xa4] */
  edx = R32((uint32_t)(esi + eax + 0xa4u));
/* e975fb: cmp edx, dword ptr [esi + eax + 0x9c8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9c8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97602: lea ecx, [esi + eax + 0x9c8] */
  ecx = (uint32_t)(esi + eax + 0x9c8u);
/* e97609: je 0xe97632 */
  if (zf) goto L_e97632;
L_e9760b: /* e9760b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9760d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97611: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97613: mov ecx, dword ptr [esi + ecx + 0xa4] */
  ecx = R32((uint32_t)(esi + ecx + 0xa4u));
/* e9761a: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97620: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97623: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e97625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97627: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9762du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9762d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97631: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97632: /* e97632: mov edx, dword ptr [esi + eax + 0xa8] */
  edx = R32((uint32_t)(esi + eax + 0xa8u));
/* e97639: cmp edx, dword ptr [esi + eax + 0x9cc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97640: lea ecx, [esi + eax + 0x9cc] */
  ecx = (uint32_t)(esi + eax + 0x9ccu);
/* e97647: je 0xe97670 */
  if (zf) goto L_e97670;
L_e97649: /* e97649: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9764b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9764f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97651: mov ecx, dword ptr [esi + ecx + 0xa8] */
  ecx = R32((uint32_t)(esi + ecx + 0xa8u));
/* e97658: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9765e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97661: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* e97663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97665: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe9766bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9766b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9766f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e97670: /* e97670: mov edx, dword ptr [esi + eax + 0xac] */
  edx = R32((uint32_t)(esi + eax + 0xacu));
/* e97677: cmp edx, dword ptr [esi + eax + 0x9d0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x9d0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9767e: lea ecx, [esi + eax + 0x9d0] */
  ecx = (uint32_t)(esi + eax + 0x9d0u);
/* e97685: je 0xe976ae */
  if (zf) goto L_e976ae;
L_e97687: /* e97687: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97689: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9768d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9768f: mov ecx, dword ptr [esi + ecx + 0xac] */
  ecx = R32((uint32_t)(esi + ecx + 0xacu));
/* e97696: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9769c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9769e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9769f: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e976a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e976a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e976a3: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe976a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e976a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e976ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e976ae: /* e976ae: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e976b0: mov ecx, dword ptr [edx + 0x41e0] */
  ecx = R32((uint32_t)(edx + 0x41e0u));
/* e976b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e976b7: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e976ba: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e976bc: jl 0xe97320 */
  if ((sf != of)) goto L_e97320;
L_e976c2: /* e976c2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e976c4: mov ecx, dword ptr [eax + 0x30f80] */
  ecx = R32((uint32_t)(eax + 0x30f80u));
/* e976ca: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e976d0: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e976d3: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e976d6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e976d8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e976da: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e976dd: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e976df: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e976e1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e976e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e976e7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e976ed: mov eax, dword ptr [edx + 0x30f90] */
  eax = R32((uint32_t)(edx + 0x30f90u));
/* e976f3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e976f6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e976f9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e976fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e976fd: mov esi, dword ptr [0xeae22c] */
  esi = R32((uint32_t)(0xeae22cu));
/* e97703: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e97705: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e97707: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9770b: test byte ptr [eax + 0x514], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97712: je 0xe97771 */
  if (zf) goto L_e97771;
L_e97714: /* e97714: lea ecx, [eax + 0xb78] */
  ecx = (uint32_t)(eax + 0xb78u);
/* e9771a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9771c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9771d: add eax, 0x254 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97723: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97728: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9772a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9772e: je 0xe97771 */
  if (zf) goto L_e97771;
L_e97730: /* e97730: lea edx, [eax + 0x254] */
  edx = (uint32_t)(eax + 0x254u);
/* e97736: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97738: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97739: add eax, 0xb78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9773e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9773f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97744u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97744: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97748: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9774a: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97750: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97752: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97755: add ecx, 0x254 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9775b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9775c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9775e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9775f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97769: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_e97771: /* e97771: test byte ptr [eax + 0x514], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97778: je 0xe977d3 */
  if (zf) goto L_e977d3;
L_e9777a: /* e9777a: lea ecx, [eax + 0xbb8] */
  ecx = (uint32_t)(eax + 0xbb8u);
/* e97780: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97783: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97789: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe9778bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9778b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9778e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97790: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97794: je 0xe977d3 */
  if (zf) goto L_e977d3;
L_e97796: /* e97796: lea edx, [eax + 0x294] */
  edx = (uint32_t)(eax + 0x294u);
/* e9779c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9779e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9779f: add eax, 0xbb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e977a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977a5: call 0xe81020 */
  esp -= 4; W32(esp, 0xe977aau); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e977aa: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e977ae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e977b0: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e977b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e977b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e977bb: add ecx, 0x294 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e977c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e977c2: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e977c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977c5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe977cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e977cb: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e977cf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e977d3: /* e977d3: test byte ptr [eax + 0x514], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e977da: je 0xe97835 */
  if (zf) goto L_e97835;
L_e977dc: /* e977dc: lea ecx, [eax + 0xbf8] */
  ecx = (uint32_t)(eax + 0xbf8u);
/* e977e2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e977e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e977e5: add eax, 0x2d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e977ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e977eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe977edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e977ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e977f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e977f2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e977f6: je 0xe97835 */
  if (zf) goto L_e97835;
L_e977f8: /* e977f8: lea edx, [eax + 0x2d4] */
  edx = (uint32_t)(eax + 0x2d4u);
/* e977fe: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97801: add eax, 0xbf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97807: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9780cu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9780c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97810: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97812: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97818: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9781a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9781d: add ecx, 0x2d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97824: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e97826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97827: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9782du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9782d: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97831: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97835: /* e97835: test byte ptr [eax + 0x514], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9783c: je 0xe97897 */
  if (zf) goto L_e97897;
L_e9783e: /* e9783e: lea ecx, [eax + 0xc38] */
  ecx = (uint32_t)(eax + 0xc38u);
/* e97844: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97847: add eax, 0x314 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9784c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9784d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe9784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9784f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97854: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97858: je 0xe97897 */
  if (zf) goto L_e97897;
L_e9785a: /* e9785a: lea edx, [eax + 0x314] */
  edx = (uint32_t)(eax + 0x314u);
/* e97860: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97862: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97863: add eax, 0xc38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97869: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9786eu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9786e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97872: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97874: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9787a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9787c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9787f: add ecx, 0x314 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x314u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97886: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e97888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97889: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe9788fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9788f: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97893: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97897: /* e97897: test byte ptr [eax + 0x514], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9789e: je 0xe978f9 */
  if (zf) goto L_e978f9;
L_e978a0: /* e978a0: lea ecx, [eax + 0xc78] */
  ecx = (uint32_t)(eax + 0xc78u);
/* e978a6: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e978a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e978a9: add eax, 0x354 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e978ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe978b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e978b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e978b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e978b6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e978ba: je 0xe978f9 */
  if (zf) goto L_e978f9;
L_e978bc: /* e978bc: lea edx, [eax + 0x354] */
  edx = (uint32_t)(eax + 0x354u);
/* e978c2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e978c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e978c5: add eax, 0xc78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e978ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978cb: call 0xe81020 */
  esp -= 4; W32(esp, 0xe978d0u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e978d0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e978d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e978d6: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e978dc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e978de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e978e1: add ecx, 0x354 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e978e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e978e8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e978ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e978eb: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe978f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e978f1: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e978f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e978f9: /* e978f9: test byte ptr [eax + 0x514], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97900: je 0xe9795b */
  if (zf) goto L_e9795b;
L_e97902: /* e97902: lea ecx, [eax + 0xcb8] */
  ecx = (uint32_t)(eax + 0xcb8u);
/* e97908: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9790a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9790b: add eax, 0x394 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97911: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97913u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97913: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97916: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97918: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9791c: je 0xe9795b */
  if (zf) goto L_e9795b;
L_e9791e: /* e9791e: lea edx, [eax + 0x394] */
  edx = (uint32_t)(eax + 0x394u);
/* e97924: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97926: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97927: add eax, 0xcb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9792c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9792d: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97932u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97932: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97936: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97938: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9793e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97940: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97943: add ecx, 0x394 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9794a: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e9794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9794d: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97953u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97953: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97957: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e9795b: /* e9795b: test byte ptr [eax + 0x514], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x514u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97962: je 0xe979bd */
  if (zf) goto L_e979bd;
L_e97964: /* e97964: lea ecx, [eax + 0xcf8] */
  ecx = (uint32_t)(eax + 0xcf8u);
/* e9796a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9796c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9796d: add eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97973: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97975: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9797a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9797e: je 0xe979bd */
  if (zf) goto L_e979bd;
L_e97980: /* e97980: lea edx, [eax + 0x3d4] */
  edx = (uint32_t)(eax + 0x3d4u);
/* e97986: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97989: add eax, 0xcf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9798e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9798f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97994u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97994: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97998: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9799a: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e979a0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e979a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e979a5: add ecx, 0x3d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e979ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e979ac: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e979ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979af: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe979b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e979b5: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e979b9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e979bd: /* e979bd: mov cl, byte ptr [eax + 0x514] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x514u))) & 0xffu);
/* e979c3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* e979c5: jns 0xe97a20 */
  if (!sf) goto L_e97a20;
L_e979c7: /* e979c7: lea ecx, [eax + 0xd38] */
  ecx = (uint32_t)(eax + 0xd38u);
/* e979cd: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e979cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e979d0: add eax, 0x414 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e979d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe979d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e979d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e979db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e979dd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e979e1: je 0xe97a20 */
  if (zf) goto L_e97a20;
L_e979e3: /* e979e3: lea edx, [eax + 0x414] */
  edx = (uint32_t)(eax + 0x414u);
/* e979e9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e979eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e979ec: add eax, 0xd38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e979f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e979f2: call 0xe81020 */
  esp -= 4; W32(esp, 0xe979f7u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e979f7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e979fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e979fd: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97a03: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97a05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a08: add ecx, 0x414 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97a0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a0f: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e97a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a12: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97a18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a18: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97a1c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97a20: /* e97a20: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97a26: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97a29: je 0xe97a84 */
  if (zf) goto L_e97a84;
L_e97a2b: /* e97a2b: lea ecx, [eax + 0xd78] */
  ecx = (uint32_t)(eax + 0xd78u);
/* e97a31: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a34: add eax, 0x454 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a3a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97a41: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97a45: je 0xe97a84 */
  if (zf) goto L_e97a84;
L_e97a47: /* e97a47: lea edx, [eax + 0x454] */
  edx = (uint32_t)(eax + 0x454u);
/* e97a4d: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97a50: add eax, 0xd78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a56: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97a5bu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97a5b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97a5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97a61: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97a67: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97a69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97a6c: add ecx, 0x454 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a73: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e97a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a76: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97a7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97a7c: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97a80: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97a84: /* e97a84: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97a8a: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97a8d: je 0xe97ae8 */
  if (zf) goto L_e97ae8;
L_e97a8f: /* e97a8f: lea ecx, [eax + 0xdb8] */
  ecx = (uint32_t)(eax + 0xdb8u);
/* e97a95: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97a97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97a98: add eax, 0x494 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97a9e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97aa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97aa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97aa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97aa5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97aa9: je 0xe97ae8 */
  if (zf) goto L_e97ae8;
L_e97aab: /* e97aab: lea edx, [eax + 0x494] */
  edx = (uint32_t)(eax + 0x494u);
/* e97ab1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97ab3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97ab4: add eax, 0xdb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97ab9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97aba: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97abfu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97abf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97ac3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97ac5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97acb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97acd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97ad0: add ecx, 0x494 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97ad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97ad7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e97ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97ada: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97ae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97ae0: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97ae4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97ae8: /* e97ae8: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e97aee: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e97af1: je 0xe97b4f */
  if (zf) goto L_e97b4f;
L_e97af3: /* e97af3: lea ecx, [eax + 0xdf8] */
  ecx = (uint32_t)(eax + 0xdf8u);
/* e97af9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97afb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97afc: add eax, 0x4d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b02: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe97b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97b04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97b07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97b09: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97b0d: je 0xe97b4f */
  if (zf) goto L_e97b4f;
L_e97b0f: /* e97b0f: lea edx, [eax + 0x4d4] */
  edx = (uint32_t)(eax + 0x4d4u);
/* e97b15: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e97b17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97b18: add eax, 0xdf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b1e: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97b23u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97b23: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97b27: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97b29: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97b2f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97b31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97b34: add ecx, 0x4d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97b3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97b3b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e97b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97b41: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe97b47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97b47: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e97b4b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97b4f: /* e97b4f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e97b51: mov ecx, dword ptr [eax + 0x30f90] */
  ecx = R32((uint32_t)(eax + 0x30f90u));
/* e97b57: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97b5d: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97b60: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e97b63: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97b65: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97b67: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97b6a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97b6c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97b6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97b72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97b74: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97b7a: mov eax, dword ptr [edx + 0x30f88] */
  eax = R32((uint32_t)(edx + 0x30f88u));
/* e97b80: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97b83: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97b86: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97b88: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e97b8a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97b8e: xor edi, edi */
  edi = 0;
/* e97b90: mov esi, 0x5a8 */
  esi = 0x5a8u;
L_e97b95: /* e97b95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97b97: mov ecx, dword ptr [ecx + 0x41e0] */
  ecx = R32((uint32_t)(ecx + 0x41e0u));
/* e97b9d: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97ba0: jl 0xe97ba7 */
  if ((sf != of)) goto L_e97ba7;
L_e97ba2: /* e97ba2: mov ecx, 8 */
  ecx = 0x8u;
L_e97ba7: /* e97ba7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97ba9: jge 0xe97be6 */
  if ((sf == of)) goto L_e97be6;
L_e97bab: /* e97bab: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* e97bae: cmp ecx, dword ptr [esi + eax + 0x924] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x924u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97bb5: je 0xe97be0 */
  if (zf) goto L_e97be0;
L_e97bb7: /* e97bb7: mov dword ptr [esi + eax + 0x924], ecx */
  W32((uint32_t)(esi + eax + 0x924u), ecx);
/* e97bbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97bc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97bc4: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* e97bc7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97bcd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97bd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97bd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97bd2: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xe97bd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97bd8: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e97bdc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97be0: /* e97be0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e97be1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97be4: jmp 0xe97b95 */
  goto L_e97b95;
L_e97be6: /* e97be6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97be8: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97bee: mov eax, dword ptr [edx + 0x30f88] */
  eax = R32((uint32_t)(edx + 0x30f88u));
/* e97bf4: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97bf7: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97bfa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97bfc: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97bfe: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97c01: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97c03: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97c05: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97c09: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97c0b: mov edx, dword ptr [ecx + 0x30f98] */
  edx = R32((uint32_t)(ecx + 0x30f98u));
/* e97c11: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97c16: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97c19: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e97c1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97c1e: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e97c20: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97c24: xor ebp, ebp */
  ebp = 0;
/* e97c26: xor edi, edi */
  edi = 0;
/* e97c28: mov esi, 0x908 */
  esi = 0x908u;
/* e97c2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e97c30: /* e97c30: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97c32: mov ecx, dword ptr [edx + 0x41ec] */
  ecx = R32((uint32_t)(edx + 0x41ecu));
/* e97c38: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97c3b: jl 0xe97c42 */
  if ((sf != of)) goto L_e97c42;
L_e97c3d: /* e97c3d: mov ecx, 8 */
  ecx = 0x8u;
L_e97c42: /* e97c42: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97c44: jge 0xe97cd1 */
  if ((sf == of)) goto L_e97cd1;
L_e97c4a: /* e97c4a: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97c4e: je 0xe97c90 */
  if (zf) goto L_e97c90;
L_e97c50: /* e97c50: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* e97c52: lea ecx, [edi + eax + 0x5c8] */
  ecx = (uint32_t)(edi + eax + 0x5c8u);
/* e97c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97c5a: lea edx, [edi + eax + 0xeec] */
  edx = (uint32_t)(edi + eax + 0xeecu);
/* e97c61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97c62: call 0xe81020 */
  esp -= 4; W32(esp, 0xe97c67u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e97c67: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e97c6b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97c6d: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97c73: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97c75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97c78: lea ecx, [edi + ecx + 0x5c8] */
  ecx = (uint32_t)(edi + ecx + 0x5c8u);
/* e97c7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e97c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97c82: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xe97c88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97c88: inc dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* e97c8c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97c90: /* e97c90: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* e97c93: cmp ecx, dword ptr [esi + eax + 0x924] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x924u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97c9a: je 0xe97cc5 */
  if (zf) goto L_e97cc5;
L_e97c9c: /* e97c9c: mov dword ptr [esi + eax + 0x924], ecx */
  W32((uint32_t)(esi + eax + 0x924u), ecx);
/* e97ca3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97ca7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97ca9: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* e97cac: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97cb2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97cb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97cb5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e97cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97cb7: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0xe97cbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97cbd: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* e97cc1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97cc5: /* e97cc5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e97cc6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97cc9: add edi, 0x68 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97ccc: jmp 0xe97c30 */
  goto L_e97c30;
L_e97cd1: /* e97cd1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97cd3: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97cd9: mov eax, dword ptr [edx + 0x30f98] */
  eax = R32((uint32_t)(edx + 0x30f98u));
/* e97cdf: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97ce2: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97ce5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97ce7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e97ce9: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97cec: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e97cee: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* e97cf0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97cf4: mov eax, dword ptr [ecx + 0x518] */
  eax = R32((uint32_t)(ecx + 0x518u));
/* e97cfa: cmp eax, dword ptr [ecx + 0xe3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xe3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d00: je 0xe97d28 */
  if (zf) goto L_e97d28;
L_e97d02: /* e97d02: mov dword ptr [ecx + 0xe3c], eax */
  W32((uint32_t)(ecx + 0xe3cu), eax);
/* e97d08: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97d0c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97d0e: mov ecx, dword ptr [ecx + 0x518] */
  ecx = R32((uint32_t)(ecx + 0x518u));
/* e97d14: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e97d1a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97d1e: call dword ptr [edx + 0x130] */
  { uint32_t t = R32((uint32_t)(edx + 0x130u)); esp -= 4; W32(esp, 0xe97d24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97d24: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_e97d28: /* e97d28: call 0xe96c70 */
  esp -= 4; W32(esp, 0xe97d2du); SPILL(); f_e96c70(); if (g_unwind) return; RELOAD();
/* e97d2d: mov esi, eax */
  esi = eax;
/* e97d2f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d33: mov ecx, dword ptr [eax + 0x51c] */
  ecx = R32((uint32_t)(eax + 0x51cu));
/* e97d39: cmp ecx, dword ptr [eax + 0xe40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xe40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d3f: je 0xe97d67 */
  if (zf) goto L_e97d67;
L_e97d41: /* e97d41: mov dword ptr [eax + 0xe40], ecx */
  W32((uint32_t)(eax + 0xe40u), ecx);
/* e97d47: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97d4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97d4d: mov ecx, dword ptr [ecx + 0x51c] */
  ecx = R32((uint32_t)(ecx + 0x51cu));
/* e97d53: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97d59: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97d5d: call dword ptr [edx + 0x160] */
  { uint32_t t = R32((uint32_t)(edx + 0x160u)); esp -= 4; W32(esp, 0xe97d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97d63: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97d67: /* e97d67: mov ecx, dword ptr [eax + 0x5a0] */
  ecx = R32((uint32_t)(eax + 0x5a0u));
/* e97d6d: cmp ecx, dword ptr [eax + 0xec4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d73: jne 0xe97d83 */
  if (!zf) goto L_e97d83;
L_e97d75: /* e97d75: mov edx, dword ptr [eax + 0x5a4] */
  edx = R32((uint32_t)(eax + 0x5a4u));
/* e97d7b: cmp edx, dword ptr [eax + 0xec8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97d81: je 0xe97dc0 */
  if (zf) goto L_e97dc0;
L_e97d83: /* e97d83: mov dword ptr [eax + 0xec4], ecx */
  W32((uint32_t)(eax + 0xec4u), ecx);
/* e97d89: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d8d: mov ecx, dword ptr [eax + 0x5a4] */
  ecx = R32((uint32_t)(eax + 0x5a4u));
/* e97d93: mov dword ptr [eax + 0xec8], ecx */
  W32((uint32_t)(eax + 0xec8u), ecx);
/* e97d99: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97d9d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97d9f: mov edi, dword ptr [eax + 0x5a4] */
  edi = R32((uint32_t)(eax + 0x5a4u));
/* e97da5: mov eax, dword ptr [eax + 0x5a0] */
  eax = R32((uint32_t)(eax + 0x5a0u));
/* e97dab: mov ecx, dword ptr [edx + 0x46b4] */
  ecx = R32((uint32_t)(edx + 0x46b4u));
/* e97db1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97db3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97db6: call dword ptr [edx + 0x154] */
  { uint32_t t = R32((uint32_t)(edx + 0x154u)); esp -= 4; W32(esp, 0xe97dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97dbc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e97dc0: /* e97dc0: mov dword ptr [eax + 0x514], 0 */
  W32((uint32_t)(eax + 0x514u), 0x0u);
/* e97dca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97dce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97dd0: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97dd6: mov eax, dword ptr [edx + 0x30fcc] */
  eax = R32((uint32_t)(edx + 0x30fccu));
/* e97ddc: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97ddf: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97de2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97de4: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* e97de6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e97de9: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e97deb: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* e97ded: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97df1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97df3: mov edx, dword ptr [ecx + 0x30f84] */
  edx = R32((uint32_t)(ecx + 0x30f84u));
/* e97df9: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97dfe: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e01: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* e97e04: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e07: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e97e0b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97e0d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e97e0f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e15: mov edx, dword ptr [ecx + 0x30f9c] */
  edx = R32((uint32_t)(ecx + 0x30f9cu));
/* e97e1b: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e20: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e23: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e28: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e97e2c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97e2e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e97e30: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e36: mov edx, dword ptr [ecx + 0x30f94] */
  edx = R32((uint32_t)(ecx + 0x30f94u));
/* e97e3c: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e41: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e44: mov ebp, dword ptr [ecx + edx*4] */
  ebp = R32((uint32_t)(ecx + edx*4));
/* e97e47: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e4a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e97e4e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e97e50: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* e97e52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97e56: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97e58: mov edx, dword ptr [ecx + 0x30f7c] */
  edx = R32((uint32_t)(ecx + 0x30f7cu));
/* e97e5e: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e97e63: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e97e66: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* e97e69: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e97e6c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e97e6e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e97e70: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e97e74: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e97e76: mov ecx, dword ptr [eax + 0x30f8c] */
  ecx = R32((uint32_t)(eax + 0x30f8cu));
/* e97e7c: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97e82: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97e85: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* e97e88: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e97e8b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e97e8f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e97e91: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e97e93: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e97e97: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e97e99: mov ecx, dword ptr [eax + 0x30fb8] */
  ecx = R32((uint32_t)(eax + 0x30fb8u));
/* e97e9f: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97ea5: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97ea8: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e97eab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97ead: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e97eae: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e97eb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e97eb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e97eb2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e97eb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e97eb5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e97eb8: ret  */
  esp += 4; SPILL(); return;
}

void f_e97ec0(void) {
  LOAD_REGS();
L_e97ec0: /* e97ec0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e97ec3: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e97ec9: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e97ecd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e97ecf: mov ecx, dword ptr [eax + 0x30fc4] */
  ecx = R32((uint32_t)(eax + 0x30fc4u));
/* e97ed5: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e97ed8: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* e97edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e97edc: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e97ede: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e97ee2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97ee4: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e97eea: mov eax, dword ptr [edx + 0x30fc8] */
  eax = R32((uint32_t)(edx + 0x30fc8u));
/* e97ef0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e97ef3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e97ef4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e97ef5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97ef6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e97ef9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e97efb: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e97efd: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e97f01: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e97f05: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e97f09: mov ecx, dword ptr [eax + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e97f10: xor ebp, ebp */
  ebp = 0;
/* e97f12: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97f14: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e97f18: je 0xe97f30 */
  if (zf) goto L_e97f30;
L_e97f1a: /* e97f1a: mov esi, dword ptr [eax + 0x554] */
  esi = R32((uint32_t)(eax + 0x554u));
/* e97f20: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97f22: je 0xe97f30 */
  if (zf) goto L_e97f30;
L_e97f24: /* e97f24: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e97f26: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* e97f2e: je 0xe97f34 */
  if (zf) goto L_e97f34;
L_e97f30: /* e97f30: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_e97f34: /* e97f34: mov eax, dword ptr [eax + 0x55c] */
  eax = R32((uint32_t)(eax + 0x55cu));
/* e97f3a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e97f3b: jne 0xe98229 */
  if (!zf) goto L_e98229;
L_e97f41: /* e97f41: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* e97f44: xor edi, edi */
  edi = 0;
/* e97f46: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e97f48: jle 0xe98012 */
  if ((zf || sf != of)) goto L_e98012;
L_e97f4e: /* e97f4e: mov ebx, 0x5a8 */
  ebx = 0x5a8u;
/* e97f53: lea esi, [ecx + 0x38] */
  esi = (uint32_t)(ecx + 0x38u);
L_e97f56: /* e97f56: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e97f58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97f5a: je 0xe97ffa */
  if (zf) goto L_e97ffa;
L_e97f60: /* e97f60: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e97f63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e97f65: je 0xe97f70 */
  if (zf) goto L_e97f70;
L_e97f67: /* e97f67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e97f6b: mov dword ptr [ebx + edx], ecx */
  W32((uint32_t)(ebx + edx), ecx);
/* e97f6e: jmp 0xe97f7a */
  goto L_e97f7a;
L_e97f70: /* e97f70: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* e97f73: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97f77: mov dword ptr [ebx + ecx], eax */
  W32((uint32_t)(ebx + ecx), eax);
L_e97f7a: /* e97f7a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97f7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97f80: mov ecx, dword ptr [ebx + ecx] */
  ecx = R32((uint32_t)(ebx + ecx));
/* e97f83: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97f89: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97f8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97f8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97f8e: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xe97f94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97f94: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97f98: mov edx, dword ptr [ebx + eax] */
  edx = R32((uint32_t)(ebx + eax));
/* e97f9b: mov dword ptr [ebx + eax + 0x924], edx */
  W32((uint32_t)(ebx + eax + 0x924u), edx);
/* e97fa2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97fa6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97fa8: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e97fae: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e97fb1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e97fb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e97fb4: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e97fb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97fb8: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe97fbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97fbe: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e97fc1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e97fc5: mov dword ptr [eax + ebp + 0x9b4], edx */
  W32((uint32_t)(eax + ebp + 0x9b4u), edx);
/* e97fcc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97fd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e97fd2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e97fd8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* e97fdb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e97fdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e97fde: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e97fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e97fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e97fe2: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe97fe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e97fe8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e97fec: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* e97fef: mov dword ptr [ecx + ebp + 0x9b8], eax */
  W32((uint32_t)(ecx + ebp + 0x9b8u), eax);
/* e97ff6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_e97ffa: /* e97ffa: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* e97ffd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e97ffe: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e98001: add esi, 0x84 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e98007: add ebp, 0x3c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e9800a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9800c: jl 0xe97f56 */
  if ((sf != of)) goto L_e97f56;
L_e98012: /* e98012: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e98016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98018: jne 0xe98180 */
  if (!zf) goto L_e98180;
L_e9801e: /* e9801e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e98022: call 0xe96c70 */
  esp -= 4; W32(esp, 0xe98027u); SPILL(); f_e96c70(); if (g_unwind) return; RELOAD();
/* e98027: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9802b: mov edx, dword ptr [eax + 0x5a0] */
  edx = R32((uint32_t)(eax + 0x5a0u));
/* e98031: cmp edx, dword ptr [eax + 0xec4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98037: jne 0xe98047 */
  if (!zf) goto L_e98047;
L_e98039: /* e98039: mov ecx, dword ptr [eax + 0x5a4] */
  ecx = R32((uint32_t)(eax + 0x5a4u));
/* e9803f: cmp ecx, dword ptr [eax + 0xec8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98045: je 0xe98084 */
  if (zf) goto L_e98084;
L_e98047: /* e98047: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98049: mov eax, dword ptr [eax + 0x5a4] */
  eax = R32((uint32_t)(eax + 0x5a4u));
/* e9804f: mov ecx, dword ptr [ecx + 0x46b4] */
  ecx = R32((uint32_t)(ecx + 0x46b4u));
/* e98055: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e98057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98058: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e98059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9805a: call dword ptr [esi + 0x154] */
  { uint32_t t = R32((uint32_t)(esi + 0x154u)); esp -= 4; W32(esp, 0xe98060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98060: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98064: mov ecx, dword ptr [eax + 0x5a0] */
  ecx = R32((uint32_t)(eax + 0x5a0u));
/* e9806a: mov dword ptr [eax + 0xec4], ecx */
  W32((uint32_t)(eax + 0xec4u), ecx);
/* e98070: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98074: mov edx, dword ptr [eax + 0x5a4] */
  edx = R32((uint32_t)(eax + 0x5a4u));
/* e9807a: mov dword ptr [eax + 0xec8], edx */
  W32((uint32_t)(eax + 0xec8u), edx);
/* e98080: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e98084: /* e98084: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e98086: mov ecx, dword ptr [eax + 0x30f90] */
  ecx = R32((uint32_t)(eax + 0x30f90u));
/* e9808c: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e98092: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e98095: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e98098: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9809a: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e9809c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e980a0: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* e980a6: xor esi, esi */
  esi = 0;
/* e980a8: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e980ab: je 0xe9810e */
  if (zf) goto L_e9810e;
L_e980ad: /* e980ad: lea ecx, [eax + 0xdf8] */
  ecx = (uint32_t)(eax + 0xdf8u);
/* e980b3: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e980b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e980b6: add eax, 0x4d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e980bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e980bc: call dword ptr [0xeae22c] */
  esp -= 4; W32(esp, 0xe980c2u); SPILL(); f_4e283d(); if (g_unwind) return; /* Core!?appMemcmp@@YAHPBX0H@Z */ RELOAD();
/* e980c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e980c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e980c7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e980cb: je 0xe9810e */
  if (zf) goto L_e9810e;
L_e980cd: /* e980cd: lea edx, [eax + 0x4d4] */
  edx = (uint32_t)(eax + 0x4d4u);
/* e980d3: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e980d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e980d6: add eax, 0xdf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e980db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e980dc: call 0xe81020 */
  esp -= 4; W32(esp, 0xe980e1u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e980e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e980e5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e980e7: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e980ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e980ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e980f2: add ecx, 0x4d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e980f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e980f9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e980fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e980ff: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe98105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98105: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98109: mov esi, 1 */
  esi = 0x1u;
L_e9810e: /* e9810e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e98110: mov ecx, dword ptr [eax + 0x30f90] */
  ecx = R32((uint32_t)(eax + 0x30f90u));
/* e98116: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e9811c: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e9811f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* e98122: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e98124: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e98126: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e98129: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9812b: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* e9812d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e98131: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98133: mov eax, dword ptr [edx + 0x30f8c] */
  eax = R32((uint32_t)(edx + 0x30f8cu));
/* e98139: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e9813f: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e98142: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* e98145: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e98148: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9814a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e9814c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98150: mov ecx, dword ptr [eax + 0x518] */
  ecx = R32((uint32_t)(eax + 0x518u));
/* e98156: cmp ecx, dword ptr [eax + 0xe3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xe3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9815c: je 0xe98184 */
  if (zf) goto L_e98184;
L_e9815e: /* e9815e: mov dword ptr [eax + 0xe3c], ecx */
  W32((uint32_t)(eax + 0xe3cu), ecx);
/* e98164: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e98168: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9816a: mov ecx, dword ptr [ecx + 0x518] */
  ecx = R32((uint32_t)(ecx + 0x518u));
/* e98170: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e98176: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9817a: call dword ptr [edx + 0x130] */
  { uint32_t t = R32((uint32_t)(edx + 0x130u)); esp -= 4; W32(esp, 0xe98180u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e98180: /* e98180: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e98184: /* e98184: xor edi, edi */
  edi = 0;
/* e98186: xor ebx, ebx */
  ebx = 0;
/* e98188: mov esi, 0x908 */
  esi = 0x908u;
/* e9818d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e98190: /* e98190: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98192: mov ecx, dword ptr [edx + 0x41ec] */
  ecx = R32((uint32_t)(edx + 0x41ecu));
/* e98198: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9819b: jl 0xe981a2 */
  if ((sf != of)) goto L_e981a2;
L_e9819d: /* e9819d: mov ecx, 8 */
  ecx = 0x8u;
L_e981a2: /* e981a2: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e981a4: jge 0xe9822d */
  if ((sf == of)) goto L_e9822d;
L_e981aa: /* e981aa: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e981ae: je 0xe981ec */
  if (zf) goto L_e981ec;
L_e981b0: /* e981b0: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* e981b2: lea ecx, [ebx + eax + 0x5c8] */
  ecx = (uint32_t)(ebx + eax + 0x5c8u);
/* e981b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e981ba: lea edx, [ebx + eax + 0xeec] */
  edx = (uint32_t)(ebx + eax + 0xeecu);
/* e981c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e981c2: call 0xe81020 */
  esp -= 4; W32(esp, 0xe981c7u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e981c7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e981cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e981cd: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e981d3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e981d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e981d8: lea ecx, [ebx + ecx + 0x5c8] */
  ecx = (uint32_t)(ebx + ecx + 0x5c8u);
/* e981df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e981e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e981e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e981e2: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xe981e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e981e8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e981ec: /* e981ec: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* e981ef: cmp ecx, dword ptr [esi + eax + 0x924] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x924u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e981f6: je 0xe9821d */
  if (zf) goto L_e9821d;
L_e981f8: /* e981f8: mov dword ptr [esi + eax + 0x924], ecx */
  W32((uint32_t)(esi + eax + 0x924u), ecx);
/* e981ff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e98203: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98205: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* e98208: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9820e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98211: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98213: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0xe98219u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98219: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e9821d: /* e9821d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e9821e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e98221: add ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e98224: jmp 0xe98190 */
  goto L_e98190;
L_e98229: /* e98229: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e9822d: /* e9822d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9822f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e98235: mov eax, dword ptr [edx + 0x30fc8] */
  eax = R32((uint32_t)(edx + 0x30fc8u));
/* e9823b: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e9823e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e98241: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e98243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98245: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e98246: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98247: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9824a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9824c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9824d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9824f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e98250: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98253: ret 0xc */
  esp += 16; SPILL(); return;
}
