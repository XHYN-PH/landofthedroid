#include "recomp.h"
#include "rec_mod.h"

void f_898ecb(void) {
  LOAD_REGS();
  goto L_898ecb;
L_898d16: /* 898d16: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 898d1c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 898d20: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x898d26u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 898d26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 898d29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 898d2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 898d2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 898d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 898d33: mov esp, ebp */
  esp = ebp;
/* 898d35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 898d36: ret 0x14 */
  esp += 24; SPILL(); return;
L_898ecb: /* 898ecb: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 898ed1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 898ed2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 898ed5: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x898edau); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 898eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898edb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 898ede: call 0x6c576d */
  esp -= 4; W32(esp, 0x898ee3u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 898ee3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898ee6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 898ee8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898eea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898eeb: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x898eeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898eee: jmp 0x8991de */
  goto L_8991de;
L_8991de: /* 8991de: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8991e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8991e3: je 0x899e69 */
  if (zf) goto L_899e69;
L_8991e9: /* 8991e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8991ec: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 8991f2: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 8991f8: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8991fe: mov ecx, dword ptr [edx + eax + 0x20] */
  ecx = R32((uint32_t)(edx + eax + 0x20u));
/* 899202: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 899204: jle 0x8996bf */
  if ((zf || sf != of)) goto L_8996bf;
L_89920a: /* 89920a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89920c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89920f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899211: mov dword ptr [ecx + 0x98], 1 */
  W32((uint32_t)(ecx + 0x98u), 0x1u);
/* 89921b: mov edi, eax */
  edi = eax;
/* 89921d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899220: mov dword ptr [eax + 0x84], eax */
  W32((uint32_t)(eax + 0x84u), eax);
/* 899226: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899229: add edx, 0x7c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89922c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89922d: call 0x6c361b */
  esp -= 4; W32(esp, 0x899232u); SPILL(); f_6c361b(); if (g_unwind) return; RELOAD();
/* 899232: mov esi, eax */
  esi = eax;
/* 899234: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899237: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 89923a: add eax, 0x7c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89923d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899240: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899242: je 0x89924c */
  if (zf) goto L_89924c;
L_899244: /* 899244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899245: mov ecx, esi */
  ecx = esi;
/* 899247: call 0x6cb163 */
  esp -= 4; W32(esp, 0x89924cu); SPILL(); f_6cb163(); if (g_unwind) return; RELOAD();
L_89924c: /* 89924c: mov dword ptr [esi + 0x20], 0x1f4 */
  W32((uint32_t)(esi + 0x20u), 0x1f4u);
/* 899253: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899256: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899258: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 89925b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89925c: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 89925f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899263: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x899266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899266: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899269: fld dword ptr [ebx + 0x12c] */
  { double v = F32((uint32_t)(ebx + 0x12cu)); FPUSH(v); }
/* 89926f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 899275: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 899277: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89927a: jne 0x89928b */
  if (!zf) goto L_89928b;
L_89927c: /* 89927c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89927f: mov edx, dword ptr [ebx + 0x12c] */
  edx = R32((uint32_t)(ebx + 0x12cu));
/* 899285: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899287: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899288: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x89928bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89928b: /* 89928b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89928d: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899293: mov edx, dword ptr [0xce83d8] */
  edx = R32((uint32_t)(0xce83d8u));
/* 899299: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 89929c: lea eax, [edi + eax - 0xc] */
  eax = (uint32_t)(edi + eax + 0xfffffff4u);
/* 8992a0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8992a2: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 8992a5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992a7: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 8992ad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8992af: mov esi, eax */
  esi = eax;
/* 8992b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992b4: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 8992ba: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 8992c0: lea eax, [ecx + edx + 0x4c] */
  eax = (uint32_t)(ecx + edx + 0x4cu);
/* 8992c4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8992c7: jg 0x8992cf */
  if ((!zf && sf == of)) goto L_8992cf;
L_8992c9: /* 8992c9: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_8992cf: /* 8992cf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992d2: mov edx, dword ptr [edx + 0xf0] */
  edx = R32((uint32_t)(edx + 0xf0u));
/* 8992d8: mov edi, dword ptr [ebx + 0x1ec] */
  edi = R32((uint32_t)(ebx + 0x1ecu));
/* 8992de: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8992e4: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8992e7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8992e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8992eb: lea edx, [edx + edi + 0x34] */
  edx = (uint32_t)(edx + edi + 0x34u);
/* 8992ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8992f0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8992f7: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8992fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8992fa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992fc: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899302: mov edx, dword ptr [0xce83c8] */
  edx = R32((uint32_t)(0xce83c8u));
/* 899308: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
/* 89930c: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89930f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899314: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899316: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 899319: xor edi, edi */
  edi = 0;
L_89931b: /* 89931b: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899321: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 899327: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 89932d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89932f: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899332: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 899335: jge 0x8996a1 */
  if ((sf == of)) goto L_8996a1;
L_89933b: /* 89933b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 89933e: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 899341: cmp word ptr [eax + edx*4 + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899347: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 89934a: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 899350: je 0x89969b */
  if (zf) goto L_89969b;
L_899356: /* 899356: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 899359: mov ebx, dword ptr [ebx + 0xcc] */
  ebx = R32((uint32_t)(ebx + 0xccu));
/* 89935f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899362: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899365: mov eax, dword ptr [ebx + eax*8 + 4] */
  eax = R32((uint32_t)(ebx + eax*8 + 0x4u));
/* 899369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89936a: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899370: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899376: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899378: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 89937b: je 0x89940c */
  if (zf) goto L_89940c;
L_899381: /* 899381: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899388: jne 0x899407 */
  if (!zf) goto L_899407;
L_89938a: /* 89938a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89938c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89938f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899395u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899395: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 89939a: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 89939f: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8993a5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8993a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8993a7: jne 0x8993c1 */
  if (!zf) goto L_8993c1;
L_8993a9: /* 8993a9: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8993ae: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 8993b3: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 8993b8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8993beu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8993be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8993c1: /* 8993c1: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8993c7u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8993c7: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8993cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8993cf: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8993d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8993d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8993da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8993db: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8993e0: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8993e6u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8993e6: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8993ec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8993ef: push 0xce1d34 */
  { uint32_t v = 0xce1d34u; esp -= 4; W32(esp, v); }
/* 8993f4: mov dword ptr [0xce1d34], eax */
  W32((uint32_t)(0xce1d34u), eax);
/* 8993f9: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8993feu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8993fe: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899403: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899407: /* 899407: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
L_89940c: /* 89940c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89940f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899418: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x89941bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89941b: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 89941f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899422: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899425: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942a: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 89942e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899433: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899435: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899438u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89943b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89943d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89943f: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899445: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 89944b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89944d: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899450: jne 0x89945d */
  if (!zf) goto L_89945d;
L_899452: /* 899452: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899457: je 0x899685 */
  if (zf) goto L_899685;
L_89945d: /* 89945d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899460: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899463: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899468u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89946a: jne 0x899685 */
  if (!zf) goto L_899685;
L_899470: /* 899470: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899473: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899476: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899479: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899483: je 0x899685 */
  if (zf) goto L_899685;
L_899489: /* 899489: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89948c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89948e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899490: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899493: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899495: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899497: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x89949au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89949a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89949d: mov ecx, esp */
  ecx = esp;
/* 89949f: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 8994a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8994a7: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8994ae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8994b1: mov edx, esp */
  edx = esp;
/* 8994b3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8994b5: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8994bc: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8994bf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8994c2: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8994c9: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8994cc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8994cf: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8994d5u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8994d5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8994d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8994da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e4: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8994e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8994e7: xor ebx, ebx */
  ebx = 0;
/* 8994e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8994f0: /* 8994f0: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 8994f3: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8994f9: jge 0x8995ee */
  if ((sf == of)) goto L_8995ee;
L_8994ff: /* 8994ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899502: mov edi, eax */
  edi = eax;
/* 899504: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 89950a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 89950d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89950f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899515: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 89951b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899521: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899524: mov ecx, esi */
  ecx = esi;
/* 899526: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899529: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89952eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89952e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899530: jne 0x899592 */
  if (!zf) goto L_899592;
L_899532: /* 899532: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899534: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899535: mov ecx, edi */
  ecx = edi;
/* 899537: call 0x6cb320 */
  esp -= 4; W32(esp, 0x89953cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 89953c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 89953d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89953e: jmp 0x8994f0 */
  goto L_8994f0;
L_899592: /* 899592: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89959c: je 0x8995a7 */
  if (zf) goto L_8995a7;
L_89959e: /* 89959e: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8995a5: je 0x8995e8 */
  if (zf) goto L_8995e8;
L_8995a7: /* 8995a7: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8995aa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8995ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8995ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995af: mov ecx, esi */
  ecx = esi;
/* 8995b1: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8995b6u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8995b6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995c2: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8995c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8995c5: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8995cb: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8995cf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995d5: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8995d9: movzx eax, word ptr [eax + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 8995dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995df: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8995e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995e5: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8995e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8995e8: /* 8995e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8995e9: jmp 0x8994f0 */
  goto L_8994f0;
L_8995ee: /* 8995ee: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8995f1: mov edi, dword ptr [ebp - 0xc4] */
  edi = R32((uint32_t)(ebp + 0xffffff3cu));
L_8995f7: /* 8995f7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8995f9: je 0x899674 */
  if (zf) goto L_899674;
L_8995fb: /* 8995fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8995fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899600: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899606: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899608: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 89960e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899611: mov ecx, esi */
  ecx = esi;
/* 899613: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899616: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89961bu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89961b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89961d: je 0x89966f */
  if (zf) goto L_89966f;
L_89961f: /* 89961f: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899629: je 0x899634 */
  if (zf) goto L_899634;
L_89962b: /* 89962b: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899632: je 0x89966f */
  if (zf) goto L_89966f;
L_899634: /* 899634: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899637: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 89963a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89963b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89963c: mov ecx, esi */
  ecx = esi;
/* 89963e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899643u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899643: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899646: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899648: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89964f: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899652: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899656: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899659: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89965b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89965c: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899661: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899665: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899666: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899669: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89966a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89966c: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x89966fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89966f: /* 89966f: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899672: jmp 0x8995f7 */
  goto L_8995f7;
L_899674: /* 899674: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899677: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899679: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x89967cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89967c: mov esi, dword ptr [ebp - 0xc4] */
  esi = R32((uint32_t)(ebp + 0xffffff3cu));
/* 899682: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
L_899685: /* 899685: movzx eax, word ptr [esi + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899689: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89968c: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89968f: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 899692: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899695: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 899698: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_89969b: /* 89969b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89969c: jmp 0x89931b */
  goto L_89931b;
L_8996a1: /* 8996a1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8996a3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8996a6: mov edx, dword ptr [0xce83dc] */
  edx = R32((uint32_t)(0xce83dcu));
/* 8996ac: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8996af: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 8996b3: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8996b9: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8996bc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
L_8996bf: /* 8996bf: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8996c2: xor ebx, ebx */
  ebx = 0;
/* 8996c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996c6: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996cc: /* 8996cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8996cf: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 8996d5: mov ecx, dword ptr [edi + 0x1ec] */
  ecx = R32((uint32_t)(edi + 0x1ecu));
/* 8996db: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8996e1: cmp dword ptr [eax + ecx + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996e5: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996eb: /* 8996eb: cmp dword ptr [ebp - 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996f1: je 0x899764 */
  if (zf) goto L_899764;
L_8996f3: /* 8996f3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8996f6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8996f9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8996ffu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8996ff: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899702: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 899708: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89970b: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899715: je 0x899741 */
  if (zf) goto L_899741;
L_899717: /* 899717: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 89971a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89971d: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899720: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89972a: je 0x899741 */
  if (zf) goto L_899741;
L_89972c: /* 89972c: mov byte ptr [ebp - 0x18], 0x4b */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x4bu);
/* 899730: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 899734: mov byte ptr [ebp - 0x16], 0x78 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x78u);
/* 899738: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89973c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89973f: jmp 0x89975b */
  goto L_89975b;
L_899741: /* 899741: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 899747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899748: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89974b: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x899750u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 899750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899751: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 899754: call 0x6c576d */
  esp -= 4; W32(esp, 0x899759u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899759: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_89975b: /* 89975b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89975e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899761: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x899764u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899764: /* 899764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899767: mov eax, dword ptr [eax + 0xf0] */
  eax = R32((uint32_t)(eax + 0xf0u));
/* 89976d: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899773: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899779: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89977c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89977e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89977f: lea eax, [eax + esi + 0x50] */
  eax = (uint32_t)(eax + esi + 0x50u);
/* 899783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899784: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x899787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899787: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89978a: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 899790: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 899796: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 89979c: lea ecx, [edx + eax + 0x6c] */
  ecx = (uint32_t)(edx + eax + 0x6cu);
/* 8997a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8997a2: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8997a5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8997a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8997aa: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8997ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8997af: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8997b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8997b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997b5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8997bbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8997bb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997be: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 8997c4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8997c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8997ce: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8997d4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8997d4: xor esi, esi */
  esi = 0;
/* 8997d6: jmp 0x8997e0 */
  goto L_8997e0;
L_8997e0: /* 8997e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997e3: cmp esi, dword ptr [ecx + 0xb8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8997e9: jge 0x899a96 */
  if ((sf == of)) goto L_899a96;
L_8997ef: /* 8997ef: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8997f5: mov eax, dword ptr [edi + 0x2d4] */
  eax = R32((uint32_t)(edi + 0x2d4u));
/* 8997fb: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8997fe: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899801: fld dword ptr [ecx + edx + 0x14] */
  { double v = F32((uint32_t)(ecx + edx + 0x14u)); FPUSH(v); }
/* 899805: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899807: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899809: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89980b: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89980e: mov edx, esi */
  edx = esi;
/* 899810: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899813: add edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 899816: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 89981c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89981e: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899821: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 899827: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 89982a: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 899830: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 899833: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899835: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899838: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89983a: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 89983d: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 899843: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899845: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899848: fstp dword ptr [ebp - 0x1a4] */
  WF32((uint32_t)(ebp + 0xfffffe5cu), ST0); FPOP();
/* 89984e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899851: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899853: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 899856: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 899859: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89985b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 89985e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 899861: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899864: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 899867: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 89986a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89986d: fadd dword ptr [ebp - 0x1a8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe58u)));
/* 899873: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 899879: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89987c: fadd dword ptr [ebp - 0x1a4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 899882: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 899888: fadd dword ptr [ebp - 0x130] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed0u)));
/* 89988e: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 899894: fadd dword ptr [ebp - 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed4u)));
/* 89989a: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 8998a0: fadd dword ptr [ebp - 0x128] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed8u)));
/* 8998a6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8998ac: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8998af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998b1: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 8998b4: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8998ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998bc: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 8998bf: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8998c5: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 8998c8: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8998ce: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 8998d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998d3: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 8998d6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8998d8: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 8998db: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 8998e1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8998e3: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 8998e6: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 8998ec: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8998ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998f1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8998f4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8998fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998fc: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8998ff: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 899905: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899908: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89990e: fadd dword ptr [ebp - 0x120] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee0u)));
/* 899914: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 89991a: fadd dword ptr [ebp - 0x188] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe78u)));
/* 899920: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 899926: fld dword ptr [ebp - 0x118] */
  { double v = F32((uint32_t)(ebp + 0xfffffee8u)); FPUSH(v); }
/* 89992c: fadd dword ptr [ebp - 0x184] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe7cu)));
/* 899932: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 899938: fadd dword ptr [ebp - 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff10u)));
/* 89993e: fld dword ptr [ebp - 0x178] */
  { double v = F32((uint32_t)(ebp + 0xfffffe88u)); FPUSH(v); }
/* 899944: fadd dword ptr [ebp - 0xec] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff14u)));
/* 89994a: fstp dword ptr [ebp - 0x208] */
  WF32((uint32_t)(ebp + 0xfffffdf8u), ST0); FPOP();
/* 899950: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 899956: fadd dword ptr [ebp - 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff18u)));
/* 89995c: fstp dword ptr [ebp - 0x204] */
  WF32((uint32_t)(ebp + 0xfffffdfcu), ST0); FPOP();
/* 899962: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899965: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899967: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89996a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89996d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89996f: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899972: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 899975: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 899978: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89997b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 89997e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899980: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899983: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 899985: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 899988: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 89998e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899990: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899993: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 899999: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 89999c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89999e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8999a1: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8999a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8999a6: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8999a9: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8999ac: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 8999af: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8999b2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8999b5: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 8999b8: fadd dword ptr [ebp - 0x14c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb4u)));
/* 8999be: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8999c4: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8999c7: fadd dword ptr [ebp - 0x148] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb8u)));
/* 8999cd: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8999d3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8999d6: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 8999dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8999df: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8999e5: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 8999eb: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8999ee: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8999f4: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8999f7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8999fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8999fb: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8999fe: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a01: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a03: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899a06: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a0a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 899a0c: fstp dword ptr [edx + 0x30] */
  WF32((uint32_t)(edx + 0x30u), ST0); FPOP();
/* 899a0f: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 899a12: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a15: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 899a18: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a1d: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 899a20: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a24: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 899a27: fstp dword ptr [edx + 0x34] */
  WF32((uint32_t)(edx + 0x34u), ST0); FPOP();
/* 899a2a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899a2d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a30: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 899a33: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a38: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 899a3b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a3d: mov eax, dword ptr [ebp - 0x208] */
  eax = R32((uint32_t)(ebp + 0xfffffdf8u));
/* 899a43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a45: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 899a48: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 899a4e: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 899a51: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 899a57: fstp dword ptr [edx + 0x38] */
  WF32((uint32_t)(edx + 0x38u), ST0); FPOP();
/* 899a5a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899a5c: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* 899a5f: mov ecx, dword ptr [ebp - 0x204] */
  ecx = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 899a65: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 899a67: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* 899a6a: mov eax, dword ptr [ebp - 0x138] */
  eax = R32((uint32_t)(ebp + 0xfffffec8u));
/* 899a70: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 899a73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899a75: mov dword ptr [edx + 0x3c], 0x3f800000 */
  W32((uint32_t)(edx + 0x3cu), 0x3f800000u);
/* 899a7c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 899a7f: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 899a82: mov dword ptr [edx + 0x1c], ebx */
  W32((uint32_t)(edx + 0x1cu), ebx);
/* 899a85: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 899a88: mov dword ptr [edx + 0x24], ecx */
  W32((uint32_t)(edx + 0x24u), ecx);
/* 899a8b: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* 899a8e: mov dword ptr [edx + 0x2c], ebx */
  W32((uint32_t)(edx + 0x2cu), ebx);
/* 899a91: jmp 0x8997e0 */
  goto L_8997e0;
L_899a96: /* 899a96: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 899a99: xor edx, edx */
  edx = 0;
/* 899a9b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 899a9e: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899aa4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899aa7: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 899aaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899ab0: /* 899ab0: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899ab6: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899abc: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899ac2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899ac4: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ac7: jge 0x899e4a */
  if ((sf == of)) goto L_899e4a;
L_899acd: /* 899acd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899ad0: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 899ad3: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 899ad6: movzx eax, word ptr [ebx + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* 899ada: cmp dword ptr [ebp - 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899add: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 899ae0: je 0x899b3e */
  if (zf) goto L_899b3e;
L_899ae2: /* 899ae2: cmp dword ptr [ecx + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ae8: jle 0x899b3e */
  if ((zf || sf != of)) goto L_899b3e;
L_899aea: /* 899aea: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899aed: mov edi, esp */
  edi = esp;
/* 899aef: mov ecx, 0x10 */
  ecx = 0x10u;
/* 899af4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 899afa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 899afc: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899b03: mov ecx, eax */
  ecx = eax;
/* 899b05: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899b08: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 899b0b: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 899b0e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 899b10: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x899b16u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 899b16: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899b19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b1b: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b24: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 899b28: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x899b2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b2b: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b31: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 899b35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x899b3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 899b3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899b3e: /* 899b3e: cmp word ptr [ebx + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899b43: je 0x899e39 */
  if (zf) goto L_899e39;
L_899b49: /* 899b49: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899b4c: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899b4f: cmp eax, dword ptr [ebp - 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899b55: je 0x899c26 */
  if (zf) goto L_899c26;
L_899b5b: /* 899b5b: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 899b5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 899b61: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899b64: mov edi, dword ptr [edi + 0xcc] */
  edi = R32((uint32_t)(edi + 0xccu));
/* 899b6a: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899b70: mov eax, dword ptr [edi + eax*8 + 4] */
  eax = R32((uint32_t)(edi + eax*8 + 0x4u));
/* 899b74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b75: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899b7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b7b: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899b81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b83: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 899b86: je 0x899c17 */
  if (zf) goto L_899c17;
L_899b8c: /* 899b8c: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b93: jne 0x899c12 */
  if (!zf) goto L_899c12;
L_899b95: /* 899b95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b97: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899b9a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899ba0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899ba0: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899ba5: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 899baa: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x899bb0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 899bb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899bb2: jne 0x899bcc */
  if (!zf) goto L_899bcc;
L_899bb4: /* 899bb4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 899bb9: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 899bbe: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 899bc3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x899bc9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 899bc9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_899bcc: /* 899bcc: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x899bd2u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 899bd2: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 899bd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899bda: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899bdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899be0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899be6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899beb: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x899bf1u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 899bf1: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 899bf7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899bfa: push 0xce1d30 */
  { uint32_t v = 0xce1d30u; esp -= 4; W32(esp, v); }
/* 899bff: mov dword ptr [0xce1d30], eax */
  W32((uint32_t)(0xce1d30u), eax);
/* 899c04: call 0x6c1203 */
  esp -= 4; W32(esp, 0x899c09u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 899c09: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899c0e: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899c12: /* 899c12: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
L_899c17: /* 899c17: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899c23: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899c26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899c26: /* 899c26: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 899c2a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c2d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899c2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c30: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899c34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c35: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3a: movzx edx, word ptr [esi + 2] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 899c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c41: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899c44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 899c47: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 899c49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c4b: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c51: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 899c57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c59: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 899c5c: jne 0x899c69 */
  if (!zf) goto L_899c69;
L_899c5e: /* 899c5e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c63: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c69: /* 899c69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899c6c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899c6f: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899c74u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c76: jne 0x899e36 */
  if (!zf) goto L_899e36;
L_899c7c: /* 899c7c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899c7f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899c82: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899c85: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c8f: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c95: /* 899c95: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c9a: mov dword ptr [ebp - 0xc4], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff3cu), 0xffffffffu);
/* 899ca4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ca6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899ca9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899cab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899cad: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x899cb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cb3: mov ecx, esp */
  ecx = esp;
/* 899cb5: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 899cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cbd: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899cc4: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899cc7: mov edx, esp */
  edx = esp;
/* 899cc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899ccb: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899cd2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899cd5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899cd8: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899cdf: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ce2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ce5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x899cebu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 899ceb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899cee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899cf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cfa: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x899cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cfd: xor ebx, ebx */
  ebx = 0;
/* 899cff: nop  */
L_899d00: /* 899d00: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899d03: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899d09: jge 0x899daa */
  if ((sf == of)) goto L_899daa;
L_899d0f: /* 899d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899d12: mov edi, eax */
  edi = eax;
/* 899d14: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 899d1a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 899d1d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 899d1f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899d25: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 899d2b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899d31: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899d34: mov ecx, esi */
  ecx = esi;
/* 899d36: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899d39: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899d3eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d40: jne 0x899d50 */
  if (!zf) goto L_899d50;
L_899d42: /* 899d42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899d44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899d45: mov ecx, edi */
  ecx = edi;
/* 899d47: call 0x6cb320 */
  esp -= 4; W32(esp, 0x899d4cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 899d4c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 899d4d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899d4e: jmp 0x899d00 */
  goto L_899d00;
L_899d50: /* 899d50: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d5a: je 0x899d65 */
  if (zf) goto L_899d65;
L_899d5c: /* 899d5c: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899d63: je 0x899da4 */
  if (zf) goto L_899da4;
L_899d65: /* 899d65: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899d68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d6d: mov ecx, esi */
  ecx = esi;
/* 899d6f: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899d74u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899d74: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d80: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899d83: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899d86: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 899d8a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d90: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 899d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d95: movzx esi, word ptr [eax + 0x12] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 899d99: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 899d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899da1: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x899da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899da4: /* 899da4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899da5: jmp 0x899d00 */
  goto L_899d00;
L_899daa: /* 899daa: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 899dad: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_899db0: /* 899db0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899db2: je 0x899e2e */
  if (zf) goto L_899e2e;
L_899db4: /* 899db4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899db7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899db9: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899dbf: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899dc1: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 899dc7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899dca: mov ecx, esi */
  ecx = esi;
/* 899dcc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899dcf: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899dd4u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899dd6: je 0x899e29 */
  if (zf) goto L_899e29;
L_899dd8: /* 899dd8: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899de2: je 0x899ded */
  if (zf) goto L_899ded;
L_899de4: /* 899de4: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899deb: je 0x899e29 */
  if (zf) goto L_899e29;
L_899ded: /* 899ded: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899df0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 899df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899df5: mov ecx, esi */
  ecx = esi;
/* 899df7: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899dfcu); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899dfc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899dff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899e08: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899e0b: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899e0f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e12: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e15: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899e19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1a: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899e1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1f: movzx edx, word ptr [edi + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 899e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e26: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899e29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e29: /* 899e29: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899e2c: jmp 0x899db0 */
  goto L_899db0;
L_899e2e: /* 899e2e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e33: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x899e36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e36: /* 899e36: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899e39: /* 899e39: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 899e3c: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899e3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 899e40: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899e43: mov edx, eax */
  edx = eax;
/* 899e45: jmp 0x899ab0 */
  goto L_899ab0;
L_899e4a: /* 899e4a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 899e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e50: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e53: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 899e57: call 0x6c7a18 */
  esp -= 4; W32(esp, 0x899e5cu); SPILL(); f_6c7a18(); if (g_unwind) return; RELOAD();
/* 899e5c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e5f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 899e63: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x899e69u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_899e69: /* 899e69: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899e6b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 899e71: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899e77: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 899e7b: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 899e81: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 899e84: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 899e86: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899e8b: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 899e8e: je 0x89a796 */
  if (zf) goto L_89a796;
L_899e94: /* 899e94: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e97: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e99: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 899e9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899ea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899ea2: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x899ea5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ea5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 899ea8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899eab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899eb1: call 0x6c460b */
  esp -= 4; W32(esp, 0x899eb6u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 899eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899eb9: mov edi, dword ptr [eax + 0x170] */
  edi = R32((uint32_t)(eax + 0x170u));
/* 899ebf: mov ecx, dword ptr [eax + 0x17c] */
  ecx = R32((uint32_t)(eax + 0x17cu));
/* 899ec5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 899ec8: test dword ptr [edx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899ed2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 899ed6: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 899ed9: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 899edc: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 899ee6: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 899eec: je 0x899f0e */
  if (zf) goto L_899f0e;
L_899eee: /* 899eee: mov dword ptr [ebp - 0xac], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3e99999au);
/* 899ef8: mov dword ptr [ebp - 0xa8], 0x3f99999a */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f99999au);
/* 899f02: mov dword ptr [ebp - 0xa4], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3e99999au);
/* 899f0c: jmp 0x899f2c */
  goto L_899f2c;
L_899f0e: /* 899f0e: mov dword ptr [ebp - 0xac], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x40000000u);
/* 899f18: mov dword ptr [ebp - 0xa8], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x40000000u);
/* 899f22: mov dword ptr [ebp - 0xa4], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x40000000u);
L_899f2c: /* 899f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899f2d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899f30: call 0x6c576d */
  esp -= 4; W32(esp, 0x899f35u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899f35: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899f38: xor esi, esi */
  esi = 0;
/* 899f3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899f40: /* 899f40: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899f43: cmp esi, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899f49: jge 0x899f9a */
  if ((sf == of)) goto L_899f9a;
L_899f4b: /* 899f4b: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899f4e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 899f51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899f53: je 0x899f97 */
  if (zf) goto L_899f97;
L_899f55: /* 899f55: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 899f58: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 899f5b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 899f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899f5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f61: mov eax, esp */
  eax = esp;
/* 899f63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899f65: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 899f68: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 899f6b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 899f6e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 899f71: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 899f74: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 899f77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899f79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f7c: mov edx, esp */
  edx = esp;
/* 899f7e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899f80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 899f83: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 899f86: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899f89: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 899f8c: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899f92: call 0x6cc74d */
  esp -= 4; W32(esp, 0x899f97u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_899f97: /* 899f97: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 899f98: jmp 0x899f40 */
  goto L_899f40;
L_899f9a: /* 899f9a: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 899fa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899fa2: je 0x89a003 */
  if (zf) goto L_89a003;
L_899fa4: /* 899fa4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 899fa6: mov byte ptr [ebp - 0x18], 0xf5 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xf5u);
/* 899faa: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 899fae: mov byte ptr [ebp - 0x16], 0xdc */
  W8((uint32_t)(ebp + 0xffffffeau), 0xdcu);
/* 899fb2: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 899fb6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899fb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899fba: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 899fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fc0: mov eax, esp */
  eax = esp;
/* 899fc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899fc4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 899fc7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 899fca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 899fcd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fd0: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899fd7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899fda: mov edx, esp */
  edx = esp;
/* 899fdc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899fde: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899fe5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899fe8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 899feb: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899ff2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ff5: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899ffb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ffe: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a003u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_89a003: /* 89a003: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a005: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a00b: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a010u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a010: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a015: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a01a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a01b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a01d: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a020: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 89a026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a027: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89a02a: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 89a034: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a03e: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a048: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a052: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a057u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a057: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89a05d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a05e: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 89a064: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a06e: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 89a078: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a082: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a08c: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a091u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a091: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 89a097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a098: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 89a09b: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a0a5: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a0af: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 89a0b9: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a0c3: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a0c8u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a0c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89a0cb: xor ebx, ebx */
  ebx = 0;
/* 89a0cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89a0d0: /* 89a0d0: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 89a0d6: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0d8: jge 0x89a769 */
  if ((sf == of)) goto L_89a769;
L_89a0de: /* 89a0de: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 89a0e1: cmp dword ptr [edx + ebx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89a0e4: je 0x89a763 */
  if (zf) goto L_89a763;
L_89a0ea: /* 89a0ea: cmp dword ptr [eax + 0xb8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0f0: jl 0x89a763 */
  if ((sf != of)) goto L_89a763;
L_89a0f6: /* 89a0f6: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89a0f9: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a0fc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89a0ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a101: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 89a104: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89a107: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89a10a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 89a10d: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 89a110: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a117: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a11d: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a120: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89a123: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89a125: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89a12bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89a12b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a12e: mov edi, esp */
  edi = esp;
/* 89a130: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a135: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89a13b: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a141: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a144: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a14a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 89a14e: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89a154u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89a154: mov esi, eax */
  esi = eax;
/* 89a156: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a15b: lea edi, [ebp - 0x264] */
  edi = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a161: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a163: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a169: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a16fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a16f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a172: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a175: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a178: mov dword ptr [ebp - 0x154], ecx */
  W32((uint32_t)(ebp + 0xfffffeacu), ecx);
/* 89a17e: mov dword ptr [ebp - 0x150], edx */
  W32((uint32_t)(ebp + 0xfffffeb0u), edx);
/* 89a184: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89a18a: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a190: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89a196: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89a1a0: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a1a3: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a1a6: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a1a9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a1ac: lea edi, [ebp - 0xe4] */
  edi = (uint32_t)(ebp + 0xffffff1cu);
/* 89a1b2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a1b6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a1bb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1bd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a1c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1c2: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a1c5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1c8: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a1cb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1ce: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a1d1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1d4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a1d7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1da: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a1dd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a1df: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a1e1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a1e7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1ea: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a1ed: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a1f3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a1f9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1fc: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a1ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a201: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a203: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a205: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a207: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a209: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a20c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a20f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a212: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a215: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a218: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a21b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a21e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a221: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a223: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a225: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a227: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a229: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a22b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a22d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a22f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a231: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a237: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a23a: lea eax, [ebp - 0x180] */
  eax = (uint32_t)(ebp + 0xfffffe80u);
/* 89a240: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a246: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 89a24d: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 89a254: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 89a25b: mov dword ptr [ebp - 0x180], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x3f800000u);
/* 89a265: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 89a26f: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 89a279: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 89a283: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 89a286: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 89a289: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a28c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a28f: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 89a295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a297: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a299: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a29b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a29e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a2a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a2a8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2ab: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a2ae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b1: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a2b4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b7: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a2ba: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2bd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a2c0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2c2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2cd: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a2d0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a2d6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a2dc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2df: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a2e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2e4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2e8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2ef: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a2f2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2f5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a2f8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2fb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a2fe: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a301: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a304: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a306: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a308: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a30e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a310: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a312: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a314: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a317: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a31a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a31d: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 89a323: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 89a329: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 89a32f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a332: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a335: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a338: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a33b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a341u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a341: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a344: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a34a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a34d: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a353: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a356: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a359: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a35f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89a365: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a36b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a36e: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a374: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89a37a: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a380: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89a383: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89a386: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89a389: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 89a38c: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a38f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a390: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a393: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a396: mov eax, esp */
  eax = esp;
/* 89a398: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a39a: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a39d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a3a0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a3a3: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a3a9: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a3af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a3b2: mov edx, esp */
  edx = esp;
/* 89a3b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a3b6: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a3bc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a3bf: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a3c5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a3c8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a3cdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a3cd: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89a3d7: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89a3dd: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 89a3e7: mov edx, dword ptr [ebp - 0xec] */
  edx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89a3ed: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 89a3f7: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89a3fd: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a400: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a403: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 89a409: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a40f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a412: mov dword ptr [ebp - 0x190], 0 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x0u);
/* 89a41c: mov dword ptr [ebp - 0x18c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe74u), 0x3f800000u);
/* 89a426: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 89a430: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 89a43a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a43d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a440: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a443: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a446: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89a44c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a44e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a450: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a452: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a455: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a457: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a45a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a45c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a45f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a462: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a465: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a468: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a46b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a46e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a471: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a474: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a477: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a479: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a47b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a481: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a484: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a487: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a48a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a48d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a490: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a493: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a496: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a499: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a49b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a49d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a49f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4a3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4a6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a4a9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4ac: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a4af: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a4b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a4bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a4bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4c5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4c7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a4c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a4cb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a4ce: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a4d1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a4d4: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89a4da: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89a4e0: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89a4e6: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 89a4e9: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a4ec: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 89a4ef: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 89a4f2: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a4f8u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a4f8: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a4fb: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a501: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 89a507: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a50b: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a511: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a514: mov ecx, esp */
  ecx = esp;
/* 89a516: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a519: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a51c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a51f: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a525: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89a52b: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a531: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a534: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a53a: fld dword ptr [ebp - 0x140] */
  { double v = F32((uint32_t)(ebp + 0xfffffec0u)); FPUSH(v); }
/* 89a540: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a546: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 89a54c: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89a552: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a554: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 89a55a: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89a560: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a563: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89a569: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89a56f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a572: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a578: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a57e: mov eax, esp */
  eax = esp;
/* 89a580: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a582: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a588: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a58b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a58e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a594: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a599u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a599: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89a5a3: mov edx, dword ptr [ebp - 0x130] */
  edx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89a5a9: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89a5b3: mov eax, dword ptr [ebp - 0x12c] */
  eax = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89a5b9: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89a5c3: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89a5c9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a5cc: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a5cf: lea edx, [ebp - 0x1a0] */
  edx = (uint32_t)(ebp + 0xfffffe60u);
/* 89a5d5: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a5db: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a5de: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 89a5e8: mov dword ptr [ebp - 0x19c], 0 */
  W32((uint32_t)(ebp + 0xfffffe64u), 0x0u);
/* 89a5f2: mov dword ptr [ebp - 0x198], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe68u), 0x3f800000u);
/* 89a5fc: mov dword ptr [ebp - 0x194], 0 */
  W32((uint32_t)(ebp + 0xfffffe6cu), 0x0u);
/* 89a606: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 89a609: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89a60c: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a60f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a612: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89a618: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a61c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a621: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a623: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a626: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a628: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a62b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a62e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a631: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a634: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a637: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a63a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a63d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a640: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a643: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a645: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a647: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a649: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a64b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a64d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a650: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a653: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a656: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a659: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a65c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a65f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a662: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a665: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a667: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a669: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a66f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a672: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a675: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a678: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a67b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a67e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a681: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a684: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a687: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a689: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a68b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a691: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a693: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a695: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a697: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a69a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a69d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a6a0: mov ecx, dword ptr [ebp - 0x1c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89a6a6: mov edx, dword ptr [ebp - 0x1bc] */
  edx = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89a6ac: mov eax, dword ptr [ebp - 0x1b8] */
  eax = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89a6b2: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a6b5: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a6b8: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a6bb: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a6be: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a6c4u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a6c4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a6c7: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6cd: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 89a6d0: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a6d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a6d4: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6dd: mov edx, esp */
  edx = esp;
/* 89a6df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6e2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a6e5: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a6e8: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6ee: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 89a6f4: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a6fa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a6fd: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a703: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 89a709: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a70f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89a712: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89a715: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a717: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89a71a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89a71d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a720: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89a723: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89a726: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a729: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a72f: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a735: mov ecx, esp */
  ecx = esp;
/* 89a737: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a739: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a73f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a742: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a745: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a74b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a750u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a750: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a756: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 89a75a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a760u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_89a763: /* 89a763: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89a764: jmp 0x89a0d0 */
  goto L_89a0d0;
L_89a769: /* 89a769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a76b: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a771: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a776u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a776: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a779: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89a77b: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a782: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a784: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89a787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a787: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a78d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89a791: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89a796u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89a796: /* 89a796: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89a799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a79b: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7a1: /* 89a7a1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89a7a4: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 89a7aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a7ac: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7b2: /* 89a7b2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89a7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a7b8: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a7be: call 0x6c460b */
  esp -= 4; W32(esp, 0x89a7c3u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89a7c3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 89a7c6: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a7cb: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89a7d1: mov ecx, 7 */
  ecx = 0x7u;
/* 89a7d6: lea edi, [ebp - 0x170] */
  edi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a7dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a7de: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a7e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a7e6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 89a7ea: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a7edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a7ed: mov bl, 0x5a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* 89a7ef: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a7f3: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a7f6: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a7fa: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a7fe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a801: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a802: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a805: mov edi, esp */
  edi = esp;
/* 89a807: mov ecx, 7 */
  ecx = 0x7u;
/* 89a80c: lea esi, [ebp - 0x170] */
  esi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a812: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a814: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a81a: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x89a81fu); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 89a81f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a822: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a828: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a82a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a82b: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a82f: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a832: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a836: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a83a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a83d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a83e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a841: mov edx, esp */
  edx = esp;
/* 89a843: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a84a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a84d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a84f: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89a856: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a859: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a85c: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89a863: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a866: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a869: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a86c: mov edx, esp */
  edx = esp;
/* 89a86e: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a875: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a878: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a87a: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a881: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a884: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a887: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a88c: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a893: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a896: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a899: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89a89b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a89e: mov edx, esp */
  edx = esp;
/* 89a8a0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a8a2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89a8a5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a8a8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a8ab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a8b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a8b4: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a8b9u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a8b9: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a8bd: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a8c0: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a8c4: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a8c8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a8cf: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a8d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a8d9: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a8df: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a8e2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a8e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a8e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a8e6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a8e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a8ec: mov ecx, esp */
  ecx = esp;
/* 89a8ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a8f0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a8f3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a8f6: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a8fd: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a900: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a903: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a906: mov ecx, esp */
  ecx = esp;
/* 89a908: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a90f: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a912: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a914: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a91b: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a91e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a921: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a926: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a92d: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a930: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a933: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a935: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a938: mov ecx, esp */
  ecx = esp;
/* 89a93a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a93c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a93f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a942: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a945: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a948: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a94e: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a953u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a953: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a956: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a95c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a95e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a95f: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a963: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a966: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a96a: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a96e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a971: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a972: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a975: mov ecx, esp */
  ecx = esp;
/* 89a977: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a97e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a981: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a983: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a98a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a98d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a990: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a997: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a99a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a99d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9a0: mov ecx, esp */
  ecx = esp;
/* 89a9a2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 89a9a9: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a9ac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9ae: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 89a9b5: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a9b8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9bb: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a9c0: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a9c7: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a9ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a9cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a9cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9d2: mov ecx, esp */
  ecx = esp;
/* 89a9d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9d6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a9d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a9dc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9df: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a9e2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9e8: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a9edu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a9ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a9ef: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9f5: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a9fau); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a9fa: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aa00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89aa04: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89aa09u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89aa09: /* 89aa09: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89aa0c: fld dword ptr [edi + 0x290] */
  { double v = F32((uint32_t)(edi + 0x290u)); FPUSH(v); }
/* 89aa12: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89aa15: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 89aa1b: mov ecx, dword ptr [edi + 0x284] */
  ecx = R32((uint32_t)(edi + 0x284u));
/* 89aa21: fld dword ptr [edi + 0x28c] */
  { double v = F32((uint32_t)(edi + 0x28cu)); FPUSH(v); }
/* 89aa27: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 89aa2d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 89aa30: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 89aa33: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89aa36: fld dword ptr [edi + 0x288] */
  { double v = F32((uint32_t)(edi + 0x288u)); FPUSH(v); }
/* 89aa3c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 89aa3f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89aa45: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa4b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89aa4e: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa54: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89aa5a: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa60: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 89aa63: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 89aa66: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 89aa69: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x89aa6fu); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 89aa6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa71: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa77: /* 89aa77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89aa7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa7c: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa82: /* 89aa82: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89aa85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa87: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa8d: /* 89aa8d: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89aa90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa92: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa98: /* 89aa98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 89aa9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 89aaa0: jns 0x89b860 */
  if (!sf) goto L_89b860;
L_89aaa6: /* 89aaa6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 89aaa9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89aaab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aaac: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aab2: mov byte ptr [ebp - 0x24], 0xb4 */
  W8((uint32_t)(ebp + 0xffffffdcu), 0xb4u);
/* 89aab6: mov byte ptr [ebp - 0x23], 0xff */
  W8((uint32_t)(ebp + 0xffffffddu), 0xffu);
/* 89aaba: mov byte ptr [ebp - 0x22], 0x48 */
  W8((uint32_t)(ebp + 0xffffffdeu), 0x48u);
/* 89aabe: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 89aac2: call 0x6c460b */
  esp -= 4; W32(esp, 0x89aac7u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89aac7: mov edx, dword ptr [0xcfa350] */
  edx = R32((uint32_t)(0xcfa350u));
/* 89aacd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89aad0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89aad2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aad5: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89aad9: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89aadcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89aadc: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 89aae3: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89aaf0: /* 89aaf0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89aaf3: cmp eax, dword ptr [esi + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89aaf9: jge 0x89af23 */
  if ((sf == of)) goto L_89af23;
L_89aaff: /* 89aaff: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89ab02: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 89ab05: mov eax, dword ptr [edx + 0x310] */
  eax = R32((uint32_t)(edx + 0x310u));
/* 89ab0b: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* 89ab0e: mov ecx, ebx */
  ecx = ebx;
/* 89ab10: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89ab16u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89ab16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab17: mov ecx, esp */
  ecx = esp;
/* 89ab19: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89ab1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ab1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ab1f: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89ab25u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89ab25: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab28: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89ab2du); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89ab2d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ab30: je 0x89af11 */
  if (zf) goto L_89af11;
L_89ab36: /* 89ab36: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab39: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab3f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89ab42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab43: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 89ab49: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ab4c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ab4e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89ab51: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89ab57u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89ab57: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ab5a: mov edi, esp */
  edi = esp;
/* 89ab5c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89ab61: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89ab67: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ab69: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ab6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab70: mov ecx, eax */
  ecx = eax;
/* 89ab72: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 89ab76: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89ab7cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89ab7c: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab82: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89ab86: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ab8cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ab8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab8f: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89ab95: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ab98: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89ab9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ab9f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89aba1: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89aba7u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89aba7: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89abae: mov ecx, eax */
  ecx = eax;
/* 89abb0: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 89abb4: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89abbau); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89abba: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89abbd: mov edi, esp */
  edi = esp;
/* 89abbf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89abc4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89abca: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89abd0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89abd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89abd3: mov ecx, eax */
  ecx = eax;
/* 89abd5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 89abd9: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89abdfu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89abdf: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abe5: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 89abe9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abefu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abef: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89abf5: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 89abf9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abff: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 89ac05: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 89ac0b: mov edx, dword ptr [ebp - 0x26c] */
  edx = R32((uint32_t)(ebp + 0xfffffd94u));
/* 89ac11: mov dword ptr [ebp - 0x234], eax */
  W32((uint32_t)(ebp + 0xfffffdccu), eax);
/* 89ac17: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac1d: mov dword ptr [ebp - 0x230], ecx */
  W32((uint32_t)(ebp + 0xfffffdd0u), ecx);
/* 89ac23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ac24: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac2a: mov dword ptr [ebp - 0x22c], edx */
  W32((uint32_t)(ebp + 0xfffffdd4u), edx);
/* 89ac30: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89ac36u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89ac36: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac3c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ac42u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ac42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 89ac45: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ac48: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 89ac52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89ac55: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 89ac5b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 89ac5e: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ac61: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 89ac64: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 89ac6a: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89ac70: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 89ac76: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac7c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89ac7f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89ac82: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89ac85: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ac88: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 89ac8e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac90: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89ac92: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac94: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89ac97: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac99: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89ac9c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac9e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89aca1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89aca4: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89aca7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acaa: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89acad: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb0: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89acb3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb6: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89acb9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acbb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acbd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acbf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89acc3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acc6: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89acc9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89accc: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89accf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd2: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89acd5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd8: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89acdb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acdd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acdf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ace5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89ace8: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89aceb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acee: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89acf1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acf4: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89acf7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acfa: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89acfd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acff: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89ad01: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad03: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ad07: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89ad09: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89ad0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89ad0d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89ad10: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89ad13: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89ad16: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ad19: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ad1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ad1f: mov esi, dword ptr [ebp - 0xbc] */
  esi = R32((uint32_t)(ebp + 0xffffff44u));
/* 89ad25: mov edi, dword ptr [ebp - 0xb8] */
  edi = R32((uint32_t)(ebp + 0xffffff48u));
/* 89ad2b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ad2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ad2e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ad31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ad32: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad35: mov ecx, esp */
  ecx = esp;
/* 89ad37: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89ad3e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89ad41: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ad43: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89ad4a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89ad4d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ad50: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89ad57: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89ad5a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ad5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad60: mov eax, esp */
  eax = esp;
/* 89ad62: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89ad69: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89ad6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ad6e: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89ad75: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89ad78: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ad7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad7e: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89ad85: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89ad88: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ad8b: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ad91: mov edx, esp */
  edx = esp;
/* 89ad93: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89ad95: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89ad98: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ad9e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89ada1: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ada6u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ada6: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ada9: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89adac: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89adae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adaf: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89adb2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89adb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adb9: mov edx, esp */
  edx = esp;
/* 89adbb: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89adc5: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 89adcb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89adcd: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 89add7: mov ecx, dword ptr [ebp - 0xec] */
  ecx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89addd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89ade0: mov dword ptr [ebp - 0xe8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x3f800000u);
/* 89adea: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89adf0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89adf3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adf6: mov ecx, esp */
  ecx = esp;
/* 89adf8: mov dword ptr [ebp - 0x120], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x3f800000u);
/* 89ae02: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89ae08: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ae0a: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 89ae14: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89ae1a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ae1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae20: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 89ae2a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89ae30: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ae33: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ae39: mov eax, esp */
  eax = esp;
/* 89ae3b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 89ae3d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 89ae40: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae43: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ae49: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ae4eu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ae4e: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89ae58: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ae5b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ae5e: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ae61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ae63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ae64: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89ae6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ae6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae71: mov eax, esp */
  eax = esp;
/* 89ae73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ae75: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89ae7f: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89ae85: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ae88: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89ae92: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89ae98: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae9e: mov edx, esp */
  edx = esp;
/* 89aea0: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 89aea7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89aeaa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89aeac: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 89aeb3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89aeb6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89aeb9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89aebc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 89aec3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89aec6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89aec9: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89aecf: mov ecx, esp */
  ecx = esp;
/* 89aed1: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 89aed3: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 89aed6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89aed9: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aedf: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89aee4u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89aee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aee6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aeec: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89aef1u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89aef1: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89aef7: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89aefb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af01u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89af01: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89af07: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89af0b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af11u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89af11: /* 89af11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89af14: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89af17: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89af1b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89af1e: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89af23: /* 89af23: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 89af2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89af30: /* 89af30: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89af36: cmp eax, dword ptr [esi + 0x320] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89af3c: jge 0x89b851 */
  if ((sf == of)) goto L_89b851;
L_89af42: /* 89af42: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af45: mov ebx, eax */
  ebx = eax;
/* 89af47: mov eax, dword ptr [ecx + 0x31c] */
  eax = R32((uint32_t)(ecx + 0x31cu));
/* 89af4d: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 89af50: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89af52: mov ecx, ebx */
  ecx = ebx;
/* 89af54: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89af5au); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89af5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89af5b: mov ecx, esp */
  ecx = esp;
/* 89af5d: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89af60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89af62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89af63: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89af69u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89af69: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af6c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89af71u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89af71: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89af74: je 0x89b839 */
  if (zf) goto L_89b839;
L_89af7a: /* 89af7a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af7d: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89af83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89af86: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89af89: lea edx, [ebp - 0x2ec] */
  edx = (uint32_t)(ebp + 0xfffffd14u);
/* 89af8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89af90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89af92: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89af95: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89af9bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89af9b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89af9e: mov edi, esp */
  edi = esp;
/* 89afa0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89afa5: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89afab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89afb1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89afb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89afb4: mov ecx, eax */
  ecx = eax;
/* 89afb6: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 89afba: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89afc0u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89afc0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89afc6: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89afca: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89afd0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89afd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89afd3: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89afd9: lea eax, [ebp - 0x3ac] */
  eax = (uint32_t)(ebp + 0xfffffc54u);
/* 89afdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89afe0: add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89afe3: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89afe9u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89afe9: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89afef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aff0: mov ecx, eax */
  ecx = eax;
/* 89aff2: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 89aff6: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89affcu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89affc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89afff: mov edi, esp */
  edi = esp;
/* 89b001: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89b006: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89b00c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89b00e: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b014: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b015: mov ecx, eax */
  ecx = eax;
/* 89b017: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 89b01b: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89b021u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89b021: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89b027: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 89b02b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b031u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b031: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89b037: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 89b03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b041: mov edx, dword ptr [ebp - 0x234] */
  edx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 89b047: mov ecx, dword ptr [ebp - 0x22c] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd4u));
/* 89b04d: mov eax, dword ptr [ebp - 0x230] */
  eax = R32((uint32_t)(ebp + 0xfffffdd0u));
/* 89b053: mov dword ptr [ebp - 0x274], edx */
  W32((uint32_t)(ebp + 0xfffffd8cu), edx);
/* 89b059: lea edx, [ebp - 0x32c] */
  edx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b05f: mov dword ptr [ebp - 0x26c], ecx */
  W32((uint32_t)(ebp + 0xfffffd94u), ecx);
/* 89b065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b066: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b06c: mov dword ptr [ebp - 0x270], eax */
  W32((uint32_t)(ebp + 0xfffffd90u), eax);
/* 89b072: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89b078u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89b078: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b07e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b084u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b084: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 89b08a: mov dword ptr [ebp - 0x54], 2 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x2u);
/* 89b091: lea esi, [ebp - 0x16c] */
  esi = (uint32_t)(ebp + 0xfffffe94u);
L_89b097: /* 89b097: dec dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 89b09a: js 0x89b0a9 */
  if (sf) goto L_89b0a9;
L_89b09c: /* 89b09c: mov ecx, esi */
  ecx = esi;
/* 89b09e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x89b0a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b0a0: mov eax, 0xc */
  eax = 0xcu;
/* 89b0a5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89b0a7: jmp 0x89b097 */
  goto L_89b097;
L_89b0a9: /* 89b0a9: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 89b0ac: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 89b0b6: fsub dword ptr [ebx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x18u)));
/* 89b0b9: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 89b0bc: fsub dword ptr [ebx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x14u)));
/* 89b0bf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b0c2: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 89b0c5: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 89b0c8: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89b0ce: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b0d1: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b0d4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b0d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b0da: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 89b0e0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89b0e3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b0e6: mov dword ptr [ebp - 0x16c], eax */
  W32((uint32_t)(ebp + 0xfffffe94u), eax);
/* 89b0ec: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89b0ef: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b0f2: mov dword ptr [ebp - 0x168], ecx */
  W32((uint32_t)(ebp + 0xfffffe98u), ecx);
/* 89b0f8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89b0fb: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89b0fe: mov dword ptr [ebp - 0x164], edx */
  W32((uint32_t)(ebp + 0xfffffe9cu), edx);
/* 89b104: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 89b107: fadd dword ptr [ebx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xcu)));
/* 89b10a: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 89b10d: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 89b110: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b113: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89b116: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 89b119: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89b11f: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b122: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b125: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b128: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b12b: fmul dword ptr [ebp - 0x140] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffec0u)));
/* 89b131: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89b134: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 89b137: mov dword ptr [ebp - 0x160], eax */
  W32((uint32_t)(ebp + 0xfffffea0u), eax);
/* 89b13d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89b140: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89b143: mov dword ptr [ebp - 0x15c], ecx */
  W32((uint32_t)(ebp + 0xfffffea4u), ecx);
/* 89b149: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89b14c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89b14f: mov dword ptr [ebp - 0x158], edx */
  W32((uint32_t)(ebp + 0xfffffea8u), edx);
/* 89b155: mov eax, 2 */
  eax = 0x2u;
/* 89b15a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89b160: /* 89b160: cmp dword ptr [ebp - 0x98], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b166: jge 0x89b80c */
  if ((sf == of)) goto L_89b80c;
L_89b16c: /* 89b16c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_89b173: /* 89b173: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89b176: mov eax, 2 */
  eax = 0x2u;
/* 89b17b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b17d: jge 0x89b801 */
  if ((sf == of)) goto L_89b801;
L_89b183: /* 89b183: mov ebx, dword ptr [ebp - 0x98] */
  ebx = R32((uint32_t)(ebp + 0xffffff68u));
/* 89b189: mov edx, dword ptr [ebp - 0x164] */
  edx = R32((uint32_t)(ebp + 0xfffffe9cu));
/* 89b18f: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 89b192: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89b195: mov eax, dword ptr [ebp + ebx - 0x16c] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe94u));
/* 89b19c: fld dword ptr [ebp + ebx - 0x16c] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe94u)); FPUSH(v); }
/* 89b1a3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 89b1a6: mov eax, ecx */
  eax = ecx;
/* 89b1a8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89b1ab: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89b1ae: mov ecx, dword ptr [ebp + eax - 0x168] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe98u));
/* 89b1b5: fld dword ptr [ebp + eax - 0x168] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe98u)); FPUSH(v); }
/* 89b1bc: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 89b1bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b1c1: lea eax, [ebp + eax - 0x168] */
  eax = (uint32_t)(ebp + eax + 0xfffffe98u);
/* 89b1c8: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 89b1ce: mov eax, dword ptr [ebp - 0x158] */
  eax = R32((uint32_t)(ebp + 0xfffffea8u));
/* 89b1d4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 89b1d7: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 89b1dd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 89b1e0: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89b1e6: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b1ec: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89b1f2: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89b1fc: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b1ff: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b202: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b205: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b208: lea edi, [ebp - 0x1a0] */
  edi = (uint32_t)(ebp + 0xfffffe60u);
/* 89b20e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b210: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b212: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b214: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b217: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b219: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b21c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b21e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b221: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b224: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b227: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b22a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b22d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b230: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b233: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b236: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b239: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b23b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b23d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b23f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b243: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b246: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b249: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b24c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b24f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b252: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b255: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b258: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b25b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b25d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b25f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b261: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b265: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b268: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b26b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b26e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b271: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b274: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b277: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b27a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b27d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b27f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b281: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b283: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b285: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b287: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b289: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b28b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b28d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b290: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b293: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b296: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 89b29c: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 89b2a2: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 89b2a8: mov dword ptr [ebp - 0x204], edx */
  W32((uint32_t)(ebp + 0xfffffdfcu), edx);
/* 89b2ae: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b2b1: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 89b2b7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b2ba: mov dword ptr [ebp - 0x120], edx */
  W32((uint32_t)(ebp + 0xfffffee0u), edx);
/* 89b2c0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b2c3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 89b2c9: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 89b2cf: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b2d2: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b2d8: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 89b2e2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b2e5: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b2e8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b2eb: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89b2f1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b2f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b2fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2fc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b2ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b301: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b304: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b307: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b30a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b30d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b310: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b313: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b316: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b319: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b31c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b31e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b320: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b322: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b324: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b326: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b329: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b32c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b32f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b332: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b335: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b338: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b33b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b33e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b340: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b342: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b344: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b346: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b348: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b34b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b34e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b351: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b354: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b357: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b35a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b35d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b360: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b362: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b364: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b366: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b36a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b36c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b36e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b370: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b373: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b376: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b379: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b37d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b380: mov edx, esp */
  edx = esp;
/* 89b382: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b384: mov eax, dword ptr [ebp - 0x204] */
  eax = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 89b38a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b38d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b390: mov edx, dword ptr [ebp - 0x1c0] */
  edx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89b396: mov eax, dword ptr [ebp - 0x1bc] */
  eax = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89b39c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b39f: mov ecx, esp */
  ecx = esp;
/* 89b3a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b3a3: mov edx, dword ptr [ebp - 0x1b8] */
  edx = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89b3a9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b3ac: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b3af: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b3b5: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b3bau); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b3ba: fld dword ptr [ebp + ebx - 0x168] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe98u)); FPUSH(v); }
/* 89b3c1: mov eax, dword ptr [ebp + ebx - 0x168] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe98u));
/* 89b3c8: mov edx, dword ptr [ebp - 0x16c] */
  edx = R32((uint32_t)(ebp + 0xfffffe94u));
/* 89b3ce: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b3d1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b3d4: mov ecx, dword ptr [ebp + eax - 0x164] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe9cu));
/* 89b3db: fld dword ptr [ebp + eax - 0x164] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe9cu)); FPUSH(v); }
/* 89b3e2: lea eax, [ebp + eax - 0x164] */
  eax = (uint32_t)(ebp + eax + 0xfffffe9cu);
/* 89b3e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b3eb: mov eax, dword ptr [ebp - 0x160] */
  eax = R32((uint32_t)(ebp + 0xfffffea0u));
/* 89b3f1: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 89b3f7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b3fa: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b3fd: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 89b403: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 89b409: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b40f: mov dword ptr [ebp - 0x180], eax */
  W32((uint32_t)(ebp + 0xfffffe80u), eax);
/* 89b415: mov dword ptr [ebp - 0x174], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x3f800000u);
/* 89b41f: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b422: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b425: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b428: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b42b: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89b431: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b433: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b435: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b437: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b43a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b43c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b43f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b441: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b444: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b447: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b44a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b44d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b450: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b453: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b456: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b459: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b45c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b45e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b460: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b462: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b464: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b466: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b469: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b46c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b46f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b472: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b475: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b478: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b47b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b47e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b480: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b482: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b484: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b486: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b488: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b48b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b48e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b491: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b494: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b497: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b49a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b49d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b4a0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4a2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b4a4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b4aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4ac: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b4ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b4b0: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b4b3: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b4b6: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b4b9: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89b4bf: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89b4c5: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89b4cb: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 89b4d1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b4d4: mov dword ptr [ebp - 0x134], edx */
  W32((uint32_t)(ebp + 0xfffffeccu), edx);
/* 89b4da: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b4dd: mov dword ptr [ebp - 0x130], edx */
  W32((uint32_t)(ebp + 0xfffffed0u), edx);
/* 89b4e3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b4e6: mov dword ptr [ebp - 0x12c], edx */
  W32((uint32_t)(ebp + 0xfffffed4u), edx);
/* 89b4ec: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* 89b4f2: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b4f5: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b4fb: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89b505: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b508: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b50b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b50e: lea edi, [ebp - 0x224] */
  edi = (uint32_t)(ebp + 0xfffffddcu);
/* 89b514: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b516: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b518: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b51d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b522: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b524: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b527: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b52a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b52d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b530: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b533: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b536: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b539: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b53c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b53f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b541: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b543: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b545: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b549: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b54c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b54f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b552: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b555: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b558: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b55b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b55e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b561: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b563: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b565: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b567: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b569: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b56b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b56e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b571: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b574: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b577: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b57a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b57d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b580: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b583: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b585: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b587: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b589: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b58b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b58d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b58f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b591: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b593: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b596: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b599: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b59c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b59f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b5a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5a3: mov edx, esp */
  edx = esp;
/* 89b5a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b5a7: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 89b5ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b5b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b5b3: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 89b5b9: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 89b5bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5c2: mov ecx, esp */
  ecx = esp;
/* 89b5c4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b5c6: mov edx, dword ptr [ebp - 0x21c] */
  edx = R32((uint32_t)(ebp + 0xfffffde4u));
/* 89b5cc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b5cf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b5d2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b5d8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b5ddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b5dd: fld dword ptr [ebp + ebx - 0x164] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe9cu)); FPUSH(v); }
/* 89b5e4: mov ecx, dword ptr [ebp + ebx - 0x164] */
  ecx = R32((uint32_t)(ebp + ebx + 0xfffffe9cu));
/* 89b5eb: lea eax, [ebp + ebx - 0x164] */
  eax = (uint32_t)(ebp + ebx + 0xfffffe9cu);
/* 89b5f2: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b5f5: mov edx, dword ptr [ebp + eax - 0x16c] */
  edx = R32((uint32_t)(ebp + eax + 0xfffffe94u));
/* 89b5fc: fld dword ptr [ebp + eax - 0x16c] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe94u)); FPUSH(v); }
/* 89b603: lea eax, [ebp + eax - 0x16c] */
  eax = (uint32_t)(ebp + eax + 0xfffffe94u);
/* 89b60a: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 89b610: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 89b616: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b619: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 89b61f: mov ecx, dword ptr [ebp - 0x15c] */
  ecx = R32((uint32_t)(ebp + 0xfffffea4u));
/* 89b625: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b628: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b62b: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 89b631: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b637: mov dword ptr [ebp - 0x18c], ecx */
  W32((uint32_t)(ebp + 0xfffffe74u), ecx);
/* 89b63d: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 89b647: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b64a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89b64d: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b650: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b653: lea edi, [ebp - 0xf4] */
  edi = (uint32_t)(ebp + 0xffffff0cu);
/* 89b659: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b65d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b662: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b664: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b667: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b669: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b66c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b66f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b672: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b675: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b678: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b67b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b67e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b681: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b684: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b686: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b688: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b68e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b691: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b694: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b697: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b69a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b69d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b6a0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b6a3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b6a6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6a8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6aa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6b0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b6b6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b6bc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6bf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b6c2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6c5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b6c8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6ca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6cc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6d2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6d4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b6d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b6d8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b6db: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b6de: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b6e1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b6e4: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 89b6ea: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89b6f0: mov ebx, dword ptr [ebp - 0xec] */
  ebx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89b6f6: mov dword ptr [ebp - 0xd4], edx */
  W32((uint32_t)(ebp + 0xffffff2cu), edx);
/* 89b6fc: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b6ff: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 89b705: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b708: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 89b70e: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89b714: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b717: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b71d: mov dword ptr [ebp - 0xc8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x3f800000u);
/* 89b727: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b72a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b72d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b730: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 89b736: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b738: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b73a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b73c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b73f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b741: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b744: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b746: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b749: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b74c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b74f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b752: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b755: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b758: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b75b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b75e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b761: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b763: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b765: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b767: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b769: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b76b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b76e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b771: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b774: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b777: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b77a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b77d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b780: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b783: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b785: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b787: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b789: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b78b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b78d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b790: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b793: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b796: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b799: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b79c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b79f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b7a2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b7a5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7a7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b7a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b7af: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7b1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b7b3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b7b5: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b7b8: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b7bb: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b7be: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b7c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b7c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7c5: mov edx, esp */
  edx = esp;
/* 89b7c7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b7c9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b7cc: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 89b7d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7d5: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 89b7d8: mov eax, esp */
  eax = esp;
/* 89b7da: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 89b7e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89b7e2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 89b7e8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89b7eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89b7ee: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b7f4: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b7f9u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b7f9: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 89b7fc: jmp 0x89b173 */
  goto L_89b173;
L_89b801: /* 89b801: inc dword ptr [ebp - 0x98] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff68u), r);
  }
/* 89b807: jmp 0x89b160 */
  goto L_89b160;
L_89b80c: /* 89b80c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b80e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b814: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89b819u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89b819: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b81f: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89b823: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b829u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b829: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b82f: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89b833: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b839u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89b839: /* 89b839: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89b83f: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89b842: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89b845: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b846: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 89b84c: jmp 0x89af30 */
  goto L_89af30;
L_89b851: /* 89b851: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b857: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b85b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89b860u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89b860: /* 89b860: mov eax, dword ptr [esi + 0x334] */
  eax = R32((uint32_t)(esi + 0x334u));
/* 89b866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b868: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b86e: /* 89b86e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89b870: mov ecx, edi */
  ecx = edi;
/* 89b872: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x89b878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b878: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b87a: je 0x89b899 */
  if (zf) goto L_89b899;
L_89b87c: /* 89b87c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 89b882: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 89b888: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 89b88d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b88e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b88f: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x89b894u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 89b894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b897: jmp 0x89b8fd */
  goto L_89b8fd;
L_89b899: /* 89b899: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b89c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b89e: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a0: /* 89b8a0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b8a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8a5: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a7: /* 89b8a7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89b8aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8ac: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8ae: /* 89b8ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89b8b0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8b7: mov ecx, edi */
  ecx = edi;
/* 89b8b9: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x89b8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8bf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89b8c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b8c7: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 89b8cb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89b8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8ce: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b8d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b8deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b8de: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b8e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89b8e4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 89b8e7: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 89b8ed: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8f2: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 89b8f8: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x89b8fdu); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
L_89b8fd: /* 89b8fd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b900: mov eax, dword ptr [edx + 0x1a0] */
  eax = R32((uint32_t)(edx + 0x1a0u));
/* 89b906: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b908: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b90e: /* 89b90e: mov eax, dword ptr [edx + 0x18c] */
  eax = R32((uint32_t)(edx + 0x18cu));
/* 89b914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b916: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b91c: /* 89b91c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b91f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b922: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89b925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b927: je 0x89b94a */
  if (zf) goto L_89b94a;
L_89b929: /* 89b929: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 89b92f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b932: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b938: /* 89b938: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b93b: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b941: /* 89b941: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b944: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b94a: /* 89b94a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 89b94d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b94f: jne 0x89b9f0 */
  if (!zf) goto L_89b9f0;
L_89b955: /* 89b955: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 89b95b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b95d: je 0x89b9f0 */
  if (zf) goto L_89b9f0;
L_89b963: /* 89b963: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 89b969: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b96f: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b975: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b979: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89b97b: jle 0x89b9f0 */
  if ((zf || sf != of)) goto L_89b9f0;
L_89b97d: /* 89b97d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b980: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89b986u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89b986: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b989: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 89b98f: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b995: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b99b: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9a0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9a2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9a5: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 89b9a9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89b9afu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89b9af: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b9b2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b9b5: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 89b9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9b9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b9bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b9bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89b9be: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89b9c3u); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89b9c3: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b9c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b9c9: xor eax, eax */
  eax = 0;
/* 89b9cb: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d0: /* 89b9d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b9d2: jge 0x89b9d7 */
  if ((sf == of)) goto L_89b9d7;
L_89b9d4: /* 89b9d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b9d5: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d7: /* 89b9d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b9d9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9db: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9de: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89b9e4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89b9e4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9e7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b9eb: call 0x6ccbee */
  esp -= 4; W32(esp, 0x89b9f0u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
L_89b9f0: /* 89b9f0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 89b9f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89b9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9f6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b9fc: call 0x6c460b */
  esp -= 4; W32(esp, 0x89ba01u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89ba01: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89ba04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ba06: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 89ba0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ba0f: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 89ba13: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89ba16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ba16: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 89ba19: xor ebx, ebx */
  ebx = 0;
/* 89ba1b: jmp 0x89ba20 */
  goto L_89ba20;
L_89ba20: /* 89ba20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ba23: cmp ebx, dword ptr [eax + 0x18c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ba29: jge 0x89bc5b */
  if ((sf == of)) goto L_89bc5b;
L_89ba2f: /* 89ba2f: mov ecx, dword ptr [eax + 0x188] */
  ecx = R32((uint32_t)(eax + 0x188u));
/* 89ba35: mov esi, ebx */
  esi = ebx;
/* 89ba37: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ba3a: mov eax, dword ptr [ecx + esi + 0xc] */
  eax = R32((uint32_t)(ecx + esi + 0xcu));
/* 89ba3e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba41: jne 0x89ba82 */
  if (!zf) goto L_89ba82;
L_89ba43: /* 89ba43: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89ba49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ba4a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89ba4d: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89ba57: mov dword ptr [ebp - 0xa8], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f4ccccdu);
/* 89ba61: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89ba6b: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89ba75: call 0x6c576d */
  esp -= 4; W32(esp, 0x89ba7au); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89ba7a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ba7d: jmp 0x89bb8a */
  goto L_89bb8a;
L_89ba82: /* 89ba82: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba85: jne 0x89bac6 */
  if (!zf) goto L_89bac6;
L_89ba87: /* 89ba87: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 89ba8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba8e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89ba91: mov dword ptr [ebp - 0x224], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffddcu), 0x3f4ccccdu);
/* 89ba9b: mov dword ptr [ebp - 0x220], 0x3e4ccccd */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x3e4ccccdu);
/* 89baa5: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 89baaf: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 89bab9: call 0x6c576d */
  esp -= 4; W32(esp, 0x89babeu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89babe: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89bac1: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bac6: /* 89bac6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bac9: jne 0x89bb0a */
  if (!zf) goto L_89bb0a;
L_89bacb: /* 89bacb: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 89bad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bad2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 89bad5: mov dword ptr [ebp - 0x1c0], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x3f4ccccdu);
/* 89badf: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 89bae9: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 89baf3: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 89bafd: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb02u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb02: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 89bb05: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb0a: /* 89bb0a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bb0d: jne 0x89bb4b */
  if (!zf) goto L_89bb4b;
L_89bb0f: /* 89bb0f: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89bb15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bb16: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 89bb19: mov dword ptr [ebp - 0xd4], 0x3e19999a */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x3e19999au);
/* 89bb23: mov dword ptr [ebp - 0xd0], 0x3f400000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f400000u);
/* 89bb2d: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 89bb37: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 89bb41: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb46u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb46: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89bb49: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb4b: /* 89bb4b: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bb4e: jl 0x89bb8a */
  if ((sf != of)) goto L_89bb8a;
L_89bb50: /* 89bb50: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 89bb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bb57: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89bb5a: mov dword ptr [ebp - 0xbc], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f666666u);
/* 89bb64: mov dword ptr [ebp - 0xb8], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f666666u);
/* 89bb6e: mov dword ptr [ebp - 0xb4], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x3f666666u);
/* 89bb78: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 89bb82: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb87u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb87: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
L_89bb8a: /* 89bb8a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89bb8d: mov edx, dword ptr [ecx + 0x188] */
  edx = R32((uint32_t)(ecx + 0x188u));
/* 89bb93: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89bb95: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 89bb98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89bb9a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89bb9d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89bba0: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 89bba3: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bba6: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bba9: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 89bbac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbaf: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 89bbb2: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 89bbb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbb7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbba: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 89bbbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbbf: fcom qword ptr [0xa1a808] */
  fpu_com(ST0, F64((uint32_t)(0xa1a808u)));
/* 89bbc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89bbc7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89bbca: jne 0x89bbff */
  if (!zf) goto L_89bbff;
L_89bbcc: /* 89bbcc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bbcf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bbd2: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89bbd8u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89bbd8: fstp qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 89bbdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bbde: fld qword ptr [0xa18288] */
  { double v = F64((uint32_t)(0xa18288u)); FPUSH(v); }
/* 89bbe4: fdiv qword ptr [ebp - 0x5c] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffa4u)));
/* 89bbe7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89bbef: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbf2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbf4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89bbf7: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bbfa: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89bbfd: jmp 0x89bc01 */
  goto L_89bc01;
L_89bbff: /* 89bbff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89bc01: /* 89bc01: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bc04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bc05: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89bc08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc0b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bc0e: mov ecx, esp */
  ecx = esp;
/* 89bc10: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89bc13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc16: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bc19: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89bc1b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89bc1e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89bc21: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89bc23: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89bc26: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89bc29: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89bc2c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89bc2f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89bc32: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89bc35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89bc37: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 89bc3a: mov eax, esp */
  eax = esp;
/* 89bc3c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89bc3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 89bc41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89bc44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89bc47: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc4d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89bc52u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89bc52: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bc55: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89bc56: jmp 0x89ba20 */
  goto L_89ba20;
L_89bc5b: /* 89bc5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89bc5d: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc63: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89bc68u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89bc68: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc6e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bc72: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89bc77u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 89bc77: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_89bc7a: /* 89bc7a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 89bc7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89bc80: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89bc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89bc89: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 89bc8c: mov ebx, dword ptr [ecx + 0x64] */
  ebx = R32((uint32_t)(ecx + 0x64u));
/* 89bc8f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bc91: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bc97: /* 89bc97: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89bc9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89bc9f: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bca5: /* 89bca5: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* 89bcab: cmp ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bcae: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bcb4: /* 89bcb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcb6: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcbc: /* 89bcbc: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* 89bcc2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcc4: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcca: /* 89bcca: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 89bccd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bccf: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcd5: /* 89bcd5: mov edx, eax */
  edx = eax;
/* 89bcd7: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 89bcda: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bcdd: mov dword ptr [ebp - 0x9c], esi */
  W32((uint32_t)(ebp + 0xffffff64u), esi);
/* 89bce3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x89bce9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 89bce9: mov ecx, dword ptr [ebp - 0x214] */
  ecx = R32((uint32_t)(ebp + 0xfffffdecu));
/* 89bcef: mov bl, 0x1c */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1cu) & 0xffu);
/* 89bcf1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bcf4: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bcfau); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bcfa: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bcfd: mov edi, eax */
  edi = eax;
/* 89bcff: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bd05u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bd05: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 89bd0b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bd0e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bd11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bd12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd13: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89bd19: push 0xae7fe8 */
  { uint32_t v = 0xae7fe8u; esp -= 4; W32(esp, v); }
/* 89bd1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd1f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89bd25u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89bd25: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd29: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd2c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 89bd30: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89bd36u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89bd36: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89bd3c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bd3f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bd45u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bd45: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd48: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 89bd4e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd51: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89bd55: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89bd59: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd5c: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89bd60: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bd64: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bd6au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bd6a: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89bd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd6e: push 0xae8044 */
  { uint32_t v = 0xae8044u; esp -= 4; W32(esp, v); }
/* 89bd73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89bd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bd76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89bd77: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bd7cu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bd7c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd7f: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 89bd85: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 89bd88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd8b: xor edi, edi */
  edi = 0;
/* 89bd8d: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd90: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 89bd97: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89bd9a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89bd9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89bda0: /* 89bda0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bda2: je 0x89becc */
  if (zf) goto L_89becc;
L_89bda8: /* 89bda8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89bdab: xor eax, eax */
  eax = 0;
/* 89bdad: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bdaf: jge 0x89becc */
  if ((sf == of)) goto L_89becc;
L_89bdb5: /* 89bdb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89bdb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bdb9: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdbf: /* 89bdbf: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bdc2: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdc8: /* 89bdc8: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 89bdce: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bdd1: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* 89bdd4: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 89bdda: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* 89bddd: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 89bde3: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* 89bde6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89bde8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bdea: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89bdec: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89bdee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89bdf2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 89bdf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bdf9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdff: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89be05u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89be05: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be07: fst qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 89be0a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 89be0c: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 89be0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be12: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89be18u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89be18: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89be1c: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* 89be1f: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 89be22: movzx edx, byte ptr [edx + 0x29] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x29u)));
/* 89be26: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be29: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89be2d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 89be30: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be33: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 89be37: fld dword ptr [ecx + 0x40] */
  { double v = F32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* 89be3a: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 89be3e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 89be41: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89be45: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 89be48: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 89be4c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 89be4f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 89be53: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 89be56: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89be5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89be5c: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89be62: push 0xae8050 */
  { uint32_t v = 0xae8050u; esp -= 4; W32(esp, v); }
/* 89be67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be68: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89be6eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89be6e: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be72: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be75: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 89be79: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89be7fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89be7f: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89be85: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 89be89: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89be8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89be8f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be92: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89be96: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89be9a: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89be9e: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bea2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bea8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bea8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89beab: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89beb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89beb2: push 0xae80f4 */
  { uint32_t v = 0xae80f4u; esp -= 4; W32(esp, v); }
/* 89beb7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89beb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89beba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bebb: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bec0u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bec0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_89bec3: /* 89bec3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 89bec6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89bec7: jmp 0x89bda0 */
  goto L_89bda0;
L_89becc: /* 89becc: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89becf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bed3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bed9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bed9: jmp 0x898d16 */
  goto L_898d16;
}

void f_898ef3(void) {
  LOAD_REGS();
  goto L_898ef3;
L_898d16: /* 898d16: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 898d1c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 898d20: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x898d26u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 898d26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 898d29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 898d2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 898d2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 898d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 898d33: mov esp, ebp */
  esp = ebp;
/* 898d35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 898d36: ret 0x14 */
  esp += 24; SPILL(); return;
L_898ef3: /* 898ef3: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 898ef6: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f00: je 0x898f76 */
  if (zf) goto L_898f76;
L_898f02: /* 898f02: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 898f05: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 898f08: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 898f0b: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f15: je 0x898f76 */
  if (zf) goto L_898f76;
L_898f17: /* 898f17: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 898f1a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898f1d: lea edx, [ecx + 0xa8] */
  edx = (uint32_t)(ecx + 0xa8u);
/* 898f23: mov ecx, esp */
  ecx = esp;
/* 898f25: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 898f28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898f29: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x898f2fu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 898f2f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 898f32: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 898f35: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 898f38: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898f3b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898f3d: xor ebx, ebx */
  ebx = 0;
/* 898f3f: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898f46: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 898f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 898f52: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x898f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898f55: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898f58: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 898f5a: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 898f5d: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 898f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898f62: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 898f66: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 898f6a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 898f6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898f6e: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x898f71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898f71: jmp 0x8991de */
  goto L_8991de;
L_898f76: /* 898f76: test byte ptr [esi + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898f7d: je 0x898f8d */
  if (zf) goto L_898f8d;
L_898f7f: /* 898f7f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 898f82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f84: je 0x898f8d */
  if (zf) goto L_898f8d;
L_898f86: /* 898f86: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x898f8bu); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 898f8b: jmp 0x898f8f */
  goto L_898f8f;
L_898f8d: /* 898f8d: mov eax, esi */
  eax = esi;
L_898f8f: /* 898f8f: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 898f95: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898f98: jne 0x899540 */
  if (!zf) goto L_899540;
L_898f9e: /* 898f9e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898fa1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 898fa4: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x898fa9u); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 898fa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898fab: je 0x899540 */
  if (zf) goto L_899540;
L_898fb1: /* 898fb1: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 898fb4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 898fb7: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 898fbd: movzx edx, byte ptr [ecx + 0x2b1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x2b1u)));
/* 898fc4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 898fc7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 898fca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 898fcc: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 898fd2: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 898fd5: lea edx, [ebp - 0x144] */
  edx = (uint32_t)(ebp + 0xfffffebcu);
/* 898fdb: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 898fe1: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 898fe7: mov dword ptr [ebp - 0x144], ecx */
  W32((uint32_t)(ebp + 0xfffffebcu), ecx);
/* 898fed: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 898ff7: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 898ffa: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 898ffd: mov esi, dword ptr [ebp - 0x74] */
  esi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899000: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 899003: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 899009: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89900b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89900d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89900f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 899012: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 899014: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 899017: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 899019: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89901c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89901f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 899022: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 899025: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 899028: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89902b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89902e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 899031: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 899034: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899036: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 899038: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89903a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89903c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89903e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899041: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 899044: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899047: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89904a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89904d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 899050: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899053: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 899056: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899058: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89905a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89905c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89905e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899060: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899063: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 899066: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899069: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89906c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89906f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 899072: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899075: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 899078: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89907a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89907c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89907e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 899080: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899082: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899084: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 899086: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899088: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89908b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89908e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 899091: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899094: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899096: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 89909c: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8990a1: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8990a7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8990aa: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 8990b0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8990b3: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 8990b9: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8990bb: mov dword ptr [ebp - 0x204], 0 */
  W32((uint32_t)(ebp + 0xfffffdfcu), 0x0u);
/* 8990c5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8990c8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8990cb: mov dword ptr [ebp - 0x210], edx */
  W32((uint32_t)(ebp + 0xfffffdf0u), edx);
/* 8990d1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8990d4: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8990d7: mov dword ptr [ebp - 0x20c], eax */
  W32((uint32_t)(ebp + 0xfffffdf4u), eax);
/* 8990dd: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8990e0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8990e3: lea eax, [ebp - 0x210] */
  eax = (uint32_t)(ebp + 0xfffffdf0u);
/* 8990e9: mov dword ptr [ebp - 0x208], edx */
  W32((uint32_t)(ebp + 0xfffffdf8u), edx);
/* 8990ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8990f0: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 8990f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8990f7: call dword ptr [0xcfaab8] */
  esp -= 4; W32(esp, 0x8990fdu); SPILL(); f_4e3b1b(); if (g_unwind) return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8990fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899100: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 899106: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899107: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 899109: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89910c: mov ecx, esp */
  ecx = esp;
/* 89910e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 899110: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 899113: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 899116: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 899119: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89911c: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 899122: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x899128u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 899128: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 89912e: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 899134: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89913a: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 899140: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 899146: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899149: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 89914f: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 899155: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 89915b: mov ecx, esp */
  ecx = esp;
/* 89915d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 899160: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899161: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 899167: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x89916du); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 89916d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 899170: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 899173: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 899176: mov esi, dword ptr [edx + 0x540] */
  esi = R32((uint32_t)(edx + 0x540u));
/* 89917c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89917f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899181: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 899184: xor ebx, ebx */
  ebx = 0;
/* 899186: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899189: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 89918c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89918d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89918f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899193: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899195: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x899198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899198: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89919b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89919e: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_8991a1: /* 8991a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8991a3: je 0x8991c6 */
  if (zf) goto L_8991c6;
L_8991a5: /* 8991a5: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8991a7: jge 0x8991c6 */
  if ((sf == of)) goto L_8991c6;
L_8991a9: /* 8991a9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8991ab: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8991ae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8991b0: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8991b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8991b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8991b7: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8991bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8991ba: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8991bd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8991be: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 8991c4: jmp 0x8991a1 */
  goto L_8991a1;
L_8991c6: /* 8991c6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8991c9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8991cc: mov edx, dword ptr [edx + 0xb8] */
  edx = R32((uint32_t)(edx + 0xb8u));
/* 8991d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8991d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8991d5: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8991d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8991d8: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8991db: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
L_8991de: /* 8991de: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8991e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8991e3: je 0x899e69 */
  if (zf) goto L_899e69;
L_8991e9: /* 8991e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8991ec: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 8991f2: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 8991f8: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8991fe: mov ecx, dword ptr [edx + eax + 0x20] */
  ecx = R32((uint32_t)(edx + eax + 0x20u));
/* 899202: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 899204: jle 0x8996bf */
  if ((zf || sf != of)) goto L_8996bf;
L_89920a: /* 89920a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89920c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89920f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899211: mov dword ptr [ecx + 0x98], 1 */
  W32((uint32_t)(ecx + 0x98u), 0x1u);
/* 89921b: mov edi, eax */
  edi = eax;
/* 89921d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899220: mov dword ptr [eax + 0x84], eax */
  W32((uint32_t)(eax + 0x84u), eax);
/* 899226: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899229: add edx, 0x7c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89922c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89922d: call 0x6c361b */
  esp -= 4; W32(esp, 0x899232u); SPILL(); f_6c361b(); if (g_unwind) return; RELOAD();
/* 899232: mov esi, eax */
  esi = eax;
/* 899234: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899237: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 89923a: add eax, 0x7c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89923d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899240: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899242: je 0x89924c */
  if (zf) goto L_89924c;
L_899244: /* 899244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899245: mov ecx, esi */
  ecx = esi;
/* 899247: call 0x6cb163 */
  esp -= 4; W32(esp, 0x89924cu); SPILL(); f_6cb163(); if (g_unwind) return; RELOAD();
L_89924c: /* 89924c: mov dword ptr [esi + 0x20], 0x1f4 */
  W32((uint32_t)(esi + 0x20u), 0x1f4u);
/* 899253: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899256: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899258: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 89925b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89925c: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 89925f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899263: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x899266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899266: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899269: fld dword ptr [ebx + 0x12c] */
  { double v = F32((uint32_t)(ebx + 0x12cu)); FPUSH(v); }
/* 89926f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 899275: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 899277: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89927a: jne 0x89928b */
  if (!zf) goto L_89928b;
L_89927c: /* 89927c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89927f: mov edx, dword ptr [ebx + 0x12c] */
  edx = R32((uint32_t)(ebx + 0x12cu));
/* 899285: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899287: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899288: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x89928bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89928b: /* 89928b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89928d: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899293: mov edx, dword ptr [0xce83d8] */
  edx = R32((uint32_t)(0xce83d8u));
/* 899299: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 89929c: lea eax, [edi + eax - 0xc] */
  eax = (uint32_t)(edi + eax + 0xfffffff4u);
/* 8992a0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8992a2: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 8992a5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992a7: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 8992ad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8992af: mov esi, eax */
  esi = eax;
/* 8992b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992b4: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 8992ba: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 8992c0: lea eax, [ecx + edx + 0x4c] */
  eax = (uint32_t)(ecx + edx + 0x4cu);
/* 8992c4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8992c7: jg 0x8992cf */
  if ((!zf && sf == of)) goto L_8992cf;
L_8992c9: /* 8992c9: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_8992cf: /* 8992cf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992d2: mov edx, dword ptr [edx + 0xf0] */
  edx = R32((uint32_t)(edx + 0xf0u));
/* 8992d8: mov edi, dword ptr [ebx + 0x1ec] */
  edi = R32((uint32_t)(ebx + 0x1ecu));
/* 8992de: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8992e4: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8992e7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8992e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8992eb: lea edx, [edx + edi + 0x34] */
  edx = (uint32_t)(edx + edi + 0x34u);
/* 8992ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8992f0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8992f7: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8992fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8992fa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992fc: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899302: mov edx, dword ptr [0xce83c8] */
  edx = R32((uint32_t)(0xce83c8u));
/* 899308: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
/* 89930c: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89930f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899314: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899316: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 899319: xor edi, edi */
  edi = 0;
L_89931b: /* 89931b: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899321: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 899327: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 89932d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89932f: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899332: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 899335: jge 0x8996a1 */
  if ((sf == of)) goto L_8996a1;
L_89933b: /* 89933b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 89933e: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 899341: cmp word ptr [eax + edx*4 + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899347: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 89934a: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 899350: je 0x89969b */
  if (zf) goto L_89969b;
L_899356: /* 899356: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 899359: mov ebx, dword ptr [ebx + 0xcc] */
  ebx = R32((uint32_t)(ebx + 0xccu));
/* 89935f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899362: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899365: mov eax, dword ptr [ebx + eax*8 + 4] */
  eax = R32((uint32_t)(ebx + eax*8 + 0x4u));
/* 899369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89936a: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899370: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899376: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899378: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 89937b: je 0x89940c */
  if (zf) goto L_89940c;
L_899381: /* 899381: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899388: jne 0x899407 */
  if (!zf) goto L_899407;
L_89938a: /* 89938a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89938c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89938f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899395u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899395: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 89939a: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 89939f: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8993a5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8993a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8993a7: jne 0x8993c1 */
  if (!zf) goto L_8993c1;
L_8993a9: /* 8993a9: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8993ae: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 8993b3: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 8993b8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8993beu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8993be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8993c1: /* 8993c1: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8993c7u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8993c7: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8993cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8993cf: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8993d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8993d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8993da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8993db: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8993e0: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8993e6u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8993e6: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8993ec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8993ef: push 0xce1d34 */
  { uint32_t v = 0xce1d34u; esp -= 4; W32(esp, v); }
/* 8993f4: mov dword ptr [0xce1d34], eax */
  W32((uint32_t)(0xce1d34u), eax);
/* 8993f9: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8993feu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8993fe: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899403: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899407: /* 899407: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
L_89940c: /* 89940c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89940f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899418: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x89941bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89941b: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 89941f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899422: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899425: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942a: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 89942e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899433: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899435: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899438u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89943b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89943d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89943f: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899445: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 89944b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89944d: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899450: jne 0x89945d */
  if (!zf) goto L_89945d;
L_899452: /* 899452: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899457: je 0x899685 */
  if (zf) goto L_899685;
L_89945d: /* 89945d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899460: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899463: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899468u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89946a: jne 0x899685 */
  if (!zf) goto L_899685;
L_899470: /* 899470: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899473: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899476: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899479: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899483: je 0x899685 */
  if (zf) goto L_899685;
L_899489: /* 899489: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89948c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89948e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899490: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899493: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899495: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899497: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x89949au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89949a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89949d: mov ecx, esp */
  ecx = esp;
/* 89949f: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 8994a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8994a7: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8994ae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8994b1: mov edx, esp */
  edx = esp;
/* 8994b3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8994b5: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8994bc: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8994bf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8994c2: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8994c9: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8994cc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8994cf: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8994d5u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8994d5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8994d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8994da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e4: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8994e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8994e7: xor ebx, ebx */
  ebx = 0;
/* 8994e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8994f0: /* 8994f0: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 8994f3: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8994f9: jge 0x8995ee */
  if ((sf == of)) goto L_8995ee;
L_8994ff: /* 8994ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899502: mov edi, eax */
  edi = eax;
/* 899504: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 89950a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 89950d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89950f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899515: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 89951b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899521: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899524: mov ecx, esi */
  ecx = esi;
/* 899526: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899529: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89952eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89952e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899530: jne 0x899592 */
  if (!zf) goto L_899592;
L_899532: /* 899532: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899534: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899535: mov ecx, edi */
  ecx = edi;
/* 899537: call 0x6cb320 */
  esp -= 4; W32(esp, 0x89953cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 89953c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 89953d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89953e: jmp 0x8994f0 */
  goto L_8994f0;
L_899540: /* 899540: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899543: mov ecx, esp */
  ecx = esp;
/* 899545: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 899548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89954a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89954d: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 899554: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 899557: mov eax, esp */
  eax = esp;
/* 899559: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89955b: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 899562: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 899565: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 899568: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 89956f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 899572: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 899575: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x89957bu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 89957b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89957e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899580: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899582: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899584: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899588: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89958a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x89958du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89958d: jmp 0x8991de */
  goto L_8991de;
L_899592: /* 899592: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89959c: je 0x8995a7 */
  if (zf) goto L_8995a7;
L_89959e: /* 89959e: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8995a5: je 0x8995e8 */
  if (zf) goto L_8995e8;
L_8995a7: /* 8995a7: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8995aa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8995ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8995ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995af: mov ecx, esi */
  ecx = esi;
/* 8995b1: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8995b6u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8995b6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995c2: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8995c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8995c5: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8995cb: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8995cf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995d5: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8995d9: movzx eax, word ptr [eax + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 8995dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995df: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8995e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995e5: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8995e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8995e8: /* 8995e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8995e9: jmp 0x8994f0 */
  goto L_8994f0;
L_8995ee: /* 8995ee: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8995f1: mov edi, dword ptr [ebp - 0xc4] */
  edi = R32((uint32_t)(ebp + 0xffffff3cu));
L_8995f7: /* 8995f7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8995f9: je 0x899674 */
  if (zf) goto L_899674;
L_8995fb: /* 8995fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8995fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899600: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899606: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899608: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 89960e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899611: mov ecx, esi */
  ecx = esi;
/* 899613: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899616: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89961bu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89961b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89961d: je 0x89966f */
  if (zf) goto L_89966f;
L_89961f: /* 89961f: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899629: je 0x899634 */
  if (zf) goto L_899634;
L_89962b: /* 89962b: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899632: je 0x89966f */
  if (zf) goto L_89966f;
L_899634: /* 899634: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899637: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 89963a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89963b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89963c: mov ecx, esi */
  ecx = esi;
/* 89963e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899643u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899643: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899646: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899648: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89964f: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899652: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899656: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899659: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89965b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89965c: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899661: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899665: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899666: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899669: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89966a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89966c: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x89966fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89966f: /* 89966f: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899672: jmp 0x8995f7 */
  goto L_8995f7;
L_899674: /* 899674: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899677: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899679: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x89967cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89967c: mov esi, dword ptr [ebp - 0xc4] */
  esi = R32((uint32_t)(ebp + 0xffffff3cu));
/* 899682: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
L_899685: /* 899685: movzx eax, word ptr [esi + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899689: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89968c: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89968f: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 899692: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899695: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 899698: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_89969b: /* 89969b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89969c: jmp 0x89931b */
  goto L_89931b;
L_8996a1: /* 8996a1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8996a3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8996a6: mov edx, dword ptr [0xce83dc] */
  edx = R32((uint32_t)(0xce83dcu));
/* 8996ac: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8996af: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 8996b3: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8996b9: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8996bc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
L_8996bf: /* 8996bf: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8996c2: xor ebx, ebx */
  ebx = 0;
/* 8996c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996c6: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996cc: /* 8996cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8996cf: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 8996d5: mov ecx, dword ptr [edi + 0x1ec] */
  ecx = R32((uint32_t)(edi + 0x1ecu));
/* 8996db: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8996e1: cmp dword ptr [eax + ecx + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996e5: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996eb: /* 8996eb: cmp dword ptr [ebp - 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996f1: je 0x899764 */
  if (zf) goto L_899764;
L_8996f3: /* 8996f3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8996f6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8996f9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8996ffu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8996ff: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899702: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 899708: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89970b: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899715: je 0x899741 */
  if (zf) goto L_899741;
L_899717: /* 899717: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 89971a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89971d: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899720: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89972a: je 0x899741 */
  if (zf) goto L_899741;
L_89972c: /* 89972c: mov byte ptr [ebp - 0x18], 0x4b */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x4bu);
/* 899730: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 899734: mov byte ptr [ebp - 0x16], 0x78 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x78u);
/* 899738: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89973c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89973f: jmp 0x89975b */
  goto L_89975b;
L_899741: /* 899741: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 899747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899748: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89974b: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x899750u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 899750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899751: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 899754: call 0x6c576d */
  esp -= 4; W32(esp, 0x899759u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899759: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_89975b: /* 89975b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89975e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899761: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x899764u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899764: /* 899764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899767: mov eax, dword ptr [eax + 0xf0] */
  eax = R32((uint32_t)(eax + 0xf0u));
/* 89976d: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899773: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899779: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89977c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89977e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89977f: lea eax, [eax + esi + 0x50] */
  eax = (uint32_t)(eax + esi + 0x50u);
/* 899783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899784: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x899787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899787: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89978a: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 899790: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 899796: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 89979c: lea ecx, [edx + eax + 0x6c] */
  ecx = (uint32_t)(edx + eax + 0x6cu);
/* 8997a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8997a2: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8997a5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8997a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8997aa: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8997ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8997af: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8997b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8997b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997b5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8997bbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8997bb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997be: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 8997c4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8997c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8997ce: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8997d4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8997d4: xor esi, esi */
  esi = 0;
/* 8997d6: jmp 0x8997e0 */
  goto L_8997e0;
L_8997e0: /* 8997e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997e3: cmp esi, dword ptr [ecx + 0xb8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8997e9: jge 0x899a96 */
  if ((sf == of)) goto L_899a96;
L_8997ef: /* 8997ef: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8997f5: mov eax, dword ptr [edi + 0x2d4] */
  eax = R32((uint32_t)(edi + 0x2d4u));
/* 8997fb: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8997fe: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899801: fld dword ptr [ecx + edx + 0x14] */
  { double v = F32((uint32_t)(ecx + edx + 0x14u)); FPUSH(v); }
/* 899805: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899807: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899809: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89980b: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89980e: mov edx, esi */
  edx = esi;
/* 899810: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899813: add edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 899816: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 89981c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89981e: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899821: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 899827: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 89982a: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 899830: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 899833: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899835: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899838: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89983a: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 89983d: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 899843: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899845: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899848: fstp dword ptr [ebp - 0x1a4] */
  WF32((uint32_t)(ebp + 0xfffffe5cu), ST0); FPOP();
/* 89984e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899851: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899853: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 899856: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 899859: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89985b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 89985e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 899861: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899864: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 899867: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 89986a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89986d: fadd dword ptr [ebp - 0x1a8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe58u)));
/* 899873: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 899879: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89987c: fadd dword ptr [ebp - 0x1a4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 899882: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 899888: fadd dword ptr [ebp - 0x130] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed0u)));
/* 89988e: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 899894: fadd dword ptr [ebp - 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed4u)));
/* 89989a: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 8998a0: fadd dword ptr [ebp - 0x128] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed8u)));
/* 8998a6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8998ac: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8998af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998b1: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 8998b4: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8998ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998bc: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 8998bf: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8998c5: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 8998c8: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8998ce: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 8998d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998d3: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 8998d6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8998d8: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 8998db: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 8998e1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8998e3: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 8998e6: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 8998ec: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8998ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998f1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8998f4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8998fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998fc: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8998ff: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 899905: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899908: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89990e: fadd dword ptr [ebp - 0x120] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee0u)));
/* 899914: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 89991a: fadd dword ptr [ebp - 0x188] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe78u)));
/* 899920: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 899926: fld dword ptr [ebp - 0x118] */
  { double v = F32((uint32_t)(ebp + 0xfffffee8u)); FPUSH(v); }
/* 89992c: fadd dword ptr [ebp - 0x184] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe7cu)));
/* 899932: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 899938: fadd dword ptr [ebp - 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff10u)));
/* 89993e: fld dword ptr [ebp - 0x178] */
  { double v = F32((uint32_t)(ebp + 0xfffffe88u)); FPUSH(v); }
/* 899944: fadd dword ptr [ebp - 0xec] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff14u)));
/* 89994a: fstp dword ptr [ebp - 0x208] */
  WF32((uint32_t)(ebp + 0xfffffdf8u), ST0); FPOP();
/* 899950: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 899956: fadd dword ptr [ebp - 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff18u)));
/* 89995c: fstp dword ptr [ebp - 0x204] */
  WF32((uint32_t)(ebp + 0xfffffdfcu), ST0); FPOP();
/* 899962: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899965: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899967: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89996a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89996d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89996f: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899972: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 899975: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 899978: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89997b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 89997e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899980: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899983: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 899985: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 899988: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 89998e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899990: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899993: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 899999: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 89999c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89999e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8999a1: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8999a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8999a6: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8999a9: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8999ac: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 8999af: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8999b2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8999b5: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 8999b8: fadd dword ptr [ebp - 0x14c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb4u)));
/* 8999be: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8999c4: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8999c7: fadd dword ptr [ebp - 0x148] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb8u)));
/* 8999cd: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8999d3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8999d6: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 8999dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8999df: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8999e5: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 8999eb: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8999ee: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8999f4: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8999f7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8999fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8999fb: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8999fe: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a01: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a03: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899a06: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a0a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 899a0c: fstp dword ptr [edx + 0x30] */
  WF32((uint32_t)(edx + 0x30u), ST0); FPOP();
/* 899a0f: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 899a12: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a15: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 899a18: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a1d: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 899a20: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a24: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 899a27: fstp dword ptr [edx + 0x34] */
  WF32((uint32_t)(edx + 0x34u), ST0); FPOP();
/* 899a2a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899a2d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a30: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 899a33: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a38: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 899a3b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a3d: mov eax, dword ptr [ebp - 0x208] */
  eax = R32((uint32_t)(ebp + 0xfffffdf8u));
/* 899a43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a45: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 899a48: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 899a4e: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 899a51: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 899a57: fstp dword ptr [edx + 0x38] */
  WF32((uint32_t)(edx + 0x38u), ST0); FPOP();
/* 899a5a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899a5c: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* 899a5f: mov ecx, dword ptr [ebp - 0x204] */
  ecx = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 899a65: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 899a67: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* 899a6a: mov eax, dword ptr [ebp - 0x138] */
  eax = R32((uint32_t)(ebp + 0xfffffec8u));
/* 899a70: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 899a73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899a75: mov dword ptr [edx + 0x3c], 0x3f800000 */
  W32((uint32_t)(edx + 0x3cu), 0x3f800000u);
/* 899a7c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 899a7f: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 899a82: mov dword ptr [edx + 0x1c], ebx */
  W32((uint32_t)(edx + 0x1cu), ebx);
/* 899a85: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 899a88: mov dword ptr [edx + 0x24], ecx */
  W32((uint32_t)(edx + 0x24u), ecx);
/* 899a8b: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* 899a8e: mov dword ptr [edx + 0x2c], ebx */
  W32((uint32_t)(edx + 0x2cu), ebx);
/* 899a91: jmp 0x8997e0 */
  goto L_8997e0;
L_899a96: /* 899a96: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 899a99: xor edx, edx */
  edx = 0;
/* 899a9b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 899a9e: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899aa4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899aa7: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 899aaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899ab0: /* 899ab0: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899ab6: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899abc: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899ac2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899ac4: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ac7: jge 0x899e4a */
  if ((sf == of)) goto L_899e4a;
L_899acd: /* 899acd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899ad0: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 899ad3: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 899ad6: movzx eax, word ptr [ebx + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* 899ada: cmp dword ptr [ebp - 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899add: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 899ae0: je 0x899b3e */
  if (zf) goto L_899b3e;
L_899ae2: /* 899ae2: cmp dword ptr [ecx + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ae8: jle 0x899b3e */
  if ((zf || sf != of)) goto L_899b3e;
L_899aea: /* 899aea: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899aed: mov edi, esp */
  edi = esp;
/* 899aef: mov ecx, 0x10 */
  ecx = 0x10u;
/* 899af4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 899afa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 899afc: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899b03: mov ecx, eax */
  ecx = eax;
/* 899b05: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899b08: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 899b0b: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 899b0e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 899b10: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x899b16u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 899b16: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899b19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b1b: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b24: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 899b28: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x899b2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b2b: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b31: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 899b35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x899b3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 899b3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899b3e: /* 899b3e: cmp word ptr [ebx + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899b43: je 0x899e39 */
  if (zf) goto L_899e39;
L_899b49: /* 899b49: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899b4c: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899b4f: cmp eax, dword ptr [ebp - 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899b55: je 0x899c26 */
  if (zf) goto L_899c26;
L_899b5b: /* 899b5b: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 899b5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 899b61: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899b64: mov edi, dword ptr [edi + 0xcc] */
  edi = R32((uint32_t)(edi + 0xccu));
/* 899b6a: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899b70: mov eax, dword ptr [edi + eax*8 + 4] */
  eax = R32((uint32_t)(edi + eax*8 + 0x4u));
/* 899b74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b75: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899b7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b7b: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899b81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b83: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 899b86: je 0x899c17 */
  if (zf) goto L_899c17;
L_899b8c: /* 899b8c: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b93: jne 0x899c12 */
  if (!zf) goto L_899c12;
L_899b95: /* 899b95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b97: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899b9a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899ba0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899ba0: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899ba5: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 899baa: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x899bb0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 899bb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899bb2: jne 0x899bcc */
  if (!zf) goto L_899bcc;
L_899bb4: /* 899bb4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 899bb9: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 899bbe: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 899bc3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x899bc9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 899bc9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_899bcc: /* 899bcc: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x899bd2u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 899bd2: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 899bd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899bda: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899bdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899be0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899be6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899beb: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x899bf1u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 899bf1: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 899bf7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899bfa: push 0xce1d30 */
  { uint32_t v = 0xce1d30u; esp -= 4; W32(esp, v); }
/* 899bff: mov dword ptr [0xce1d30], eax */
  W32((uint32_t)(0xce1d30u), eax);
/* 899c04: call 0x6c1203 */
  esp -= 4; W32(esp, 0x899c09u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 899c09: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899c0e: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899c12: /* 899c12: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
L_899c17: /* 899c17: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899c23: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899c26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899c26: /* 899c26: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 899c2a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c2d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899c2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c30: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899c34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c35: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3a: movzx edx, word ptr [esi + 2] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 899c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c41: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899c44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 899c47: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 899c49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c4b: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c51: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 899c57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c59: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 899c5c: jne 0x899c69 */
  if (!zf) goto L_899c69;
L_899c5e: /* 899c5e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c63: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c69: /* 899c69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899c6c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899c6f: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899c74u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c76: jne 0x899e36 */
  if (!zf) goto L_899e36;
L_899c7c: /* 899c7c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899c7f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899c82: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899c85: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c8f: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c95: /* 899c95: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c9a: mov dword ptr [ebp - 0xc4], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff3cu), 0xffffffffu);
/* 899ca4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ca6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899ca9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899cab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899cad: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x899cb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cb3: mov ecx, esp */
  ecx = esp;
/* 899cb5: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 899cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cbd: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899cc4: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899cc7: mov edx, esp */
  edx = esp;
/* 899cc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899ccb: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899cd2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899cd5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899cd8: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899cdf: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ce2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ce5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x899cebu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 899ceb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899cee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899cf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cfa: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x899cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cfd: xor ebx, ebx */
  ebx = 0;
/* 899cff: nop  */
L_899d00: /* 899d00: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899d03: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899d09: jge 0x899daa */
  if ((sf == of)) goto L_899daa;
L_899d0f: /* 899d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899d12: mov edi, eax */
  edi = eax;
/* 899d14: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 899d1a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 899d1d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 899d1f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899d25: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 899d2b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899d31: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899d34: mov ecx, esi */
  ecx = esi;
/* 899d36: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899d39: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899d3eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d40: jne 0x899d50 */
  if (!zf) goto L_899d50;
L_899d42: /* 899d42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899d44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899d45: mov ecx, edi */
  ecx = edi;
/* 899d47: call 0x6cb320 */
  esp -= 4; W32(esp, 0x899d4cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 899d4c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 899d4d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899d4e: jmp 0x899d00 */
  goto L_899d00;
L_899d50: /* 899d50: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d5a: je 0x899d65 */
  if (zf) goto L_899d65;
L_899d5c: /* 899d5c: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899d63: je 0x899da4 */
  if (zf) goto L_899da4;
L_899d65: /* 899d65: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899d68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d6d: mov ecx, esi */
  ecx = esi;
/* 899d6f: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899d74u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899d74: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d80: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899d83: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899d86: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 899d8a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d90: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 899d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d95: movzx esi, word ptr [eax + 0x12] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 899d99: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 899d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899da1: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x899da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899da4: /* 899da4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899da5: jmp 0x899d00 */
  goto L_899d00;
L_899daa: /* 899daa: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 899dad: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_899db0: /* 899db0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899db2: je 0x899e2e */
  if (zf) goto L_899e2e;
L_899db4: /* 899db4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899db7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899db9: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899dbf: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899dc1: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 899dc7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899dca: mov ecx, esi */
  ecx = esi;
/* 899dcc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899dcf: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899dd4u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899dd6: je 0x899e29 */
  if (zf) goto L_899e29;
L_899dd8: /* 899dd8: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899de2: je 0x899ded */
  if (zf) goto L_899ded;
L_899de4: /* 899de4: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899deb: je 0x899e29 */
  if (zf) goto L_899e29;
L_899ded: /* 899ded: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899df0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 899df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899df5: mov ecx, esi */
  ecx = esi;
/* 899df7: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899dfcu); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899dfc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899dff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899e08: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899e0b: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899e0f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e12: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e15: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899e19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1a: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899e1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1f: movzx edx, word ptr [edi + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 899e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e26: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899e29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e29: /* 899e29: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899e2c: jmp 0x899db0 */
  goto L_899db0;
L_899e2e: /* 899e2e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e33: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x899e36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e36: /* 899e36: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899e39: /* 899e39: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 899e3c: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899e3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 899e40: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899e43: mov edx, eax */
  edx = eax;
/* 899e45: jmp 0x899ab0 */
  goto L_899ab0;
L_899e4a: /* 899e4a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 899e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e50: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e53: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 899e57: call 0x6c7a18 */
  esp -= 4; W32(esp, 0x899e5cu); SPILL(); f_6c7a18(); if (g_unwind) return; RELOAD();
/* 899e5c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e5f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 899e63: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x899e69u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_899e69: /* 899e69: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899e6b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 899e71: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899e77: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 899e7b: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 899e81: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 899e84: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 899e86: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899e8b: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 899e8e: je 0x89a796 */
  if (zf) goto L_89a796;
L_899e94: /* 899e94: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e97: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e99: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 899e9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899ea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899ea2: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x899ea5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ea5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 899ea8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899eab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899eb1: call 0x6c460b */
  esp -= 4; W32(esp, 0x899eb6u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 899eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899eb9: mov edi, dword ptr [eax + 0x170] */
  edi = R32((uint32_t)(eax + 0x170u));
/* 899ebf: mov ecx, dword ptr [eax + 0x17c] */
  ecx = R32((uint32_t)(eax + 0x17cu));
/* 899ec5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 899ec8: test dword ptr [edx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899ed2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 899ed6: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 899ed9: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 899edc: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 899ee6: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 899eec: je 0x899f0e */
  if (zf) goto L_899f0e;
L_899eee: /* 899eee: mov dword ptr [ebp - 0xac], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3e99999au);
/* 899ef8: mov dword ptr [ebp - 0xa8], 0x3f99999a */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f99999au);
/* 899f02: mov dword ptr [ebp - 0xa4], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3e99999au);
/* 899f0c: jmp 0x899f2c */
  goto L_899f2c;
L_899f0e: /* 899f0e: mov dword ptr [ebp - 0xac], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x40000000u);
/* 899f18: mov dword ptr [ebp - 0xa8], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x40000000u);
/* 899f22: mov dword ptr [ebp - 0xa4], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x40000000u);
L_899f2c: /* 899f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899f2d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899f30: call 0x6c576d */
  esp -= 4; W32(esp, 0x899f35u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899f35: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899f38: xor esi, esi */
  esi = 0;
/* 899f3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899f40: /* 899f40: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899f43: cmp esi, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899f49: jge 0x899f9a */
  if ((sf == of)) goto L_899f9a;
L_899f4b: /* 899f4b: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899f4e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 899f51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899f53: je 0x899f97 */
  if (zf) goto L_899f97;
L_899f55: /* 899f55: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 899f58: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 899f5b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 899f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899f5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f61: mov eax, esp */
  eax = esp;
/* 899f63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899f65: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 899f68: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 899f6b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 899f6e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 899f71: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 899f74: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 899f77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899f79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f7c: mov edx, esp */
  edx = esp;
/* 899f7e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899f80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 899f83: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 899f86: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899f89: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 899f8c: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899f92: call 0x6cc74d */
  esp -= 4; W32(esp, 0x899f97u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_899f97: /* 899f97: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 899f98: jmp 0x899f40 */
  goto L_899f40;
L_899f9a: /* 899f9a: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 899fa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899fa2: je 0x89a003 */
  if (zf) goto L_89a003;
L_899fa4: /* 899fa4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 899fa6: mov byte ptr [ebp - 0x18], 0xf5 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xf5u);
/* 899faa: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 899fae: mov byte ptr [ebp - 0x16], 0xdc */
  W8((uint32_t)(ebp + 0xffffffeau), 0xdcu);
/* 899fb2: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 899fb6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899fb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899fba: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 899fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fc0: mov eax, esp */
  eax = esp;
/* 899fc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899fc4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 899fc7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 899fca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 899fcd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fd0: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899fd7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899fda: mov edx, esp */
  edx = esp;
/* 899fdc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899fde: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899fe5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899fe8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 899feb: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899ff2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ff5: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899ffb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ffe: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a003u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_89a003: /* 89a003: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a005: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a00b: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a010u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a010: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a015: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a01a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a01b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a01d: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a020: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 89a026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a027: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89a02a: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 89a034: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a03e: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a048: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a052: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a057u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a057: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89a05d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a05e: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 89a064: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a06e: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 89a078: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a082: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a08c: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a091u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a091: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 89a097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a098: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 89a09b: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a0a5: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a0af: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 89a0b9: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a0c3: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a0c8u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a0c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89a0cb: xor ebx, ebx */
  ebx = 0;
/* 89a0cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89a0d0: /* 89a0d0: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 89a0d6: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0d8: jge 0x89a769 */
  if ((sf == of)) goto L_89a769;
L_89a0de: /* 89a0de: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 89a0e1: cmp dword ptr [edx + ebx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89a0e4: je 0x89a763 */
  if (zf) goto L_89a763;
L_89a0ea: /* 89a0ea: cmp dword ptr [eax + 0xb8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0f0: jl 0x89a763 */
  if ((sf != of)) goto L_89a763;
L_89a0f6: /* 89a0f6: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89a0f9: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a0fc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89a0ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a101: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 89a104: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89a107: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89a10a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 89a10d: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 89a110: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a117: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a11d: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a120: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89a123: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89a125: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89a12bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89a12b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a12e: mov edi, esp */
  edi = esp;
/* 89a130: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a135: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89a13b: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a141: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a144: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a14a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 89a14e: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89a154u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89a154: mov esi, eax */
  esi = eax;
/* 89a156: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a15b: lea edi, [ebp - 0x264] */
  edi = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a161: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a163: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a169: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a16fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a16f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a172: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a175: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a178: mov dword ptr [ebp - 0x154], ecx */
  W32((uint32_t)(ebp + 0xfffffeacu), ecx);
/* 89a17e: mov dword ptr [ebp - 0x150], edx */
  W32((uint32_t)(ebp + 0xfffffeb0u), edx);
/* 89a184: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89a18a: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a190: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89a196: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89a1a0: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a1a3: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a1a6: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a1a9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a1ac: lea edi, [ebp - 0xe4] */
  edi = (uint32_t)(ebp + 0xffffff1cu);
/* 89a1b2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a1b6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a1bb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1bd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a1c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1c2: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a1c5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1c8: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a1cb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1ce: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a1d1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1d4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a1d7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1da: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a1dd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a1df: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a1e1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a1e7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1ea: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a1ed: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a1f3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a1f9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1fc: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a1ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a201: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a203: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a205: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a207: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a209: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a20c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a20f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a212: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a215: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a218: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a21b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a21e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a221: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a223: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a225: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a227: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a229: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a22b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a22d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a22f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a231: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a237: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a23a: lea eax, [ebp - 0x180] */
  eax = (uint32_t)(ebp + 0xfffffe80u);
/* 89a240: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a246: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 89a24d: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 89a254: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 89a25b: mov dword ptr [ebp - 0x180], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x3f800000u);
/* 89a265: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 89a26f: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 89a279: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 89a283: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 89a286: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 89a289: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a28c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a28f: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 89a295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a297: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a299: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a29b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a29e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a2a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a2a8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2ab: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a2ae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b1: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a2b4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b7: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a2ba: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2bd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a2c0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2c2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2cd: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a2d0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a2d6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a2dc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2df: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a2e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2e4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2e8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2ef: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a2f2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2f5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a2f8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2fb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a2fe: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a301: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a304: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a306: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a308: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a30e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a310: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a312: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a314: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a317: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a31a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a31d: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 89a323: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 89a329: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 89a32f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a332: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a335: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a338: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a33b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a341u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a341: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a344: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a34a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a34d: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a353: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a356: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a359: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a35f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89a365: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a36b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a36e: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a374: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89a37a: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a380: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89a383: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89a386: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89a389: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 89a38c: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a38f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a390: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a393: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a396: mov eax, esp */
  eax = esp;
/* 89a398: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a39a: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a39d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a3a0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a3a3: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a3a9: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a3af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a3b2: mov edx, esp */
  edx = esp;
/* 89a3b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a3b6: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a3bc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a3bf: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a3c5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a3c8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a3cdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a3cd: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89a3d7: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89a3dd: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 89a3e7: mov edx, dword ptr [ebp - 0xec] */
  edx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89a3ed: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 89a3f7: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89a3fd: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a400: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a403: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 89a409: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a40f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a412: mov dword ptr [ebp - 0x190], 0 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x0u);
/* 89a41c: mov dword ptr [ebp - 0x18c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe74u), 0x3f800000u);
/* 89a426: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 89a430: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 89a43a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a43d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a440: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a443: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a446: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89a44c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a44e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a450: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a452: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a455: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a457: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a45a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a45c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a45f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a462: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a465: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a468: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a46b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a46e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a471: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a474: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a477: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a479: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a47b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a481: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a484: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a487: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a48a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a48d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a490: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a493: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a496: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a499: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a49b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a49d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a49f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4a3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4a6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a4a9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4ac: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a4af: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a4b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a4bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a4bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4c5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4c7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a4c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a4cb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a4ce: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a4d1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a4d4: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89a4da: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89a4e0: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89a4e6: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 89a4e9: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a4ec: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 89a4ef: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 89a4f2: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a4f8u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a4f8: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a4fb: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a501: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 89a507: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a50b: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a511: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a514: mov ecx, esp */
  ecx = esp;
/* 89a516: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a519: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a51c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a51f: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a525: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89a52b: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a531: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a534: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a53a: fld dword ptr [ebp - 0x140] */
  { double v = F32((uint32_t)(ebp + 0xfffffec0u)); FPUSH(v); }
/* 89a540: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a546: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 89a54c: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89a552: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a554: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 89a55a: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89a560: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a563: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89a569: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89a56f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a572: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a578: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a57e: mov eax, esp */
  eax = esp;
/* 89a580: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a582: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a588: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a58b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a58e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a594: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a599u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a599: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89a5a3: mov edx, dword ptr [ebp - 0x130] */
  edx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89a5a9: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89a5b3: mov eax, dword ptr [ebp - 0x12c] */
  eax = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89a5b9: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89a5c3: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89a5c9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a5cc: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a5cf: lea edx, [ebp - 0x1a0] */
  edx = (uint32_t)(ebp + 0xfffffe60u);
/* 89a5d5: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a5db: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a5de: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 89a5e8: mov dword ptr [ebp - 0x19c], 0 */
  W32((uint32_t)(ebp + 0xfffffe64u), 0x0u);
/* 89a5f2: mov dword ptr [ebp - 0x198], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe68u), 0x3f800000u);
/* 89a5fc: mov dword ptr [ebp - 0x194], 0 */
  W32((uint32_t)(ebp + 0xfffffe6cu), 0x0u);
/* 89a606: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 89a609: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89a60c: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a60f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a612: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89a618: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a61c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a621: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a623: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a626: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a628: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a62b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a62e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a631: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a634: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a637: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a63a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a63d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a640: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a643: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a645: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a647: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a649: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a64b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a64d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a650: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a653: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a656: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a659: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a65c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a65f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a662: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a665: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a667: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a669: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a66f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a672: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a675: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a678: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a67b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a67e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a681: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a684: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a687: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a689: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a68b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a691: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a693: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a695: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a697: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a69a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a69d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a6a0: mov ecx, dword ptr [ebp - 0x1c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89a6a6: mov edx, dword ptr [ebp - 0x1bc] */
  edx = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89a6ac: mov eax, dword ptr [ebp - 0x1b8] */
  eax = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89a6b2: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a6b5: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a6b8: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a6bb: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a6be: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a6c4u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a6c4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a6c7: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6cd: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 89a6d0: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a6d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a6d4: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6dd: mov edx, esp */
  edx = esp;
/* 89a6df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6e2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a6e5: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a6e8: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6ee: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 89a6f4: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a6fa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a6fd: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a703: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 89a709: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a70f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89a712: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89a715: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a717: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89a71a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89a71d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a720: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89a723: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89a726: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a729: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a72f: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a735: mov ecx, esp */
  ecx = esp;
/* 89a737: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a739: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a73f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a742: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a745: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a74b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a750u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a750: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a756: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 89a75a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a760u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_89a763: /* 89a763: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89a764: jmp 0x89a0d0 */
  goto L_89a0d0;
L_89a769: /* 89a769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a76b: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a771: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a776u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a776: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a779: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89a77b: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a782: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a784: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89a787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a787: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a78d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89a791: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89a796u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89a796: /* 89a796: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89a799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a79b: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7a1: /* 89a7a1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89a7a4: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 89a7aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a7ac: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7b2: /* 89a7b2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89a7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a7b8: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a7be: call 0x6c460b */
  esp -= 4; W32(esp, 0x89a7c3u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89a7c3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 89a7c6: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a7cb: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89a7d1: mov ecx, 7 */
  ecx = 0x7u;
/* 89a7d6: lea edi, [ebp - 0x170] */
  edi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a7dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a7de: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a7e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a7e6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 89a7ea: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a7edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a7ed: mov bl, 0x5a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* 89a7ef: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a7f3: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a7f6: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a7fa: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a7fe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a801: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a802: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a805: mov edi, esp */
  edi = esp;
/* 89a807: mov ecx, 7 */
  ecx = 0x7u;
/* 89a80c: lea esi, [ebp - 0x170] */
  esi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a812: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a814: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a81a: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x89a81fu); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 89a81f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a822: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a828: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a82a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a82b: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a82f: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a832: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a836: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a83a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a83d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a83e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a841: mov edx, esp */
  edx = esp;
/* 89a843: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a84a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a84d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a84f: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89a856: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a859: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a85c: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89a863: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a866: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a869: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a86c: mov edx, esp */
  edx = esp;
/* 89a86e: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a875: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a878: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a87a: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a881: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a884: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a887: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a88c: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a893: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a896: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a899: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89a89b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a89e: mov edx, esp */
  edx = esp;
/* 89a8a0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a8a2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89a8a5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a8a8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a8ab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a8b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a8b4: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a8b9u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a8b9: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a8bd: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a8c0: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a8c4: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a8c8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a8cf: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a8d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a8d9: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a8df: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a8e2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a8e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a8e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a8e6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a8e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a8ec: mov ecx, esp */
  ecx = esp;
/* 89a8ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a8f0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a8f3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a8f6: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a8fd: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a900: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a903: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a906: mov ecx, esp */
  ecx = esp;
/* 89a908: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a90f: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a912: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a914: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a91b: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a91e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a921: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a926: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a92d: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a930: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a933: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a935: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a938: mov ecx, esp */
  ecx = esp;
/* 89a93a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a93c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a93f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a942: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a945: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a948: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a94e: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a953u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a953: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a956: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a95c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a95e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a95f: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a963: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a966: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a96a: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a96e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a971: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a972: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a975: mov ecx, esp */
  ecx = esp;
/* 89a977: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a97e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a981: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a983: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a98a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a98d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a990: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a997: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a99a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a99d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9a0: mov ecx, esp */
  ecx = esp;
/* 89a9a2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 89a9a9: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a9ac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9ae: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 89a9b5: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a9b8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9bb: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a9c0: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a9c7: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a9ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a9cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a9cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9d2: mov ecx, esp */
  ecx = esp;
/* 89a9d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9d6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a9d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a9dc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9df: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a9e2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9e8: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a9edu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a9ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a9ef: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9f5: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a9fau); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a9fa: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aa00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89aa04: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89aa09u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89aa09: /* 89aa09: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89aa0c: fld dword ptr [edi + 0x290] */
  { double v = F32((uint32_t)(edi + 0x290u)); FPUSH(v); }
/* 89aa12: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89aa15: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 89aa1b: mov ecx, dword ptr [edi + 0x284] */
  ecx = R32((uint32_t)(edi + 0x284u));
/* 89aa21: fld dword ptr [edi + 0x28c] */
  { double v = F32((uint32_t)(edi + 0x28cu)); FPUSH(v); }
/* 89aa27: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 89aa2d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 89aa30: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 89aa33: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89aa36: fld dword ptr [edi + 0x288] */
  { double v = F32((uint32_t)(edi + 0x288u)); FPUSH(v); }
/* 89aa3c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 89aa3f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89aa45: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa4b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89aa4e: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa54: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89aa5a: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa60: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 89aa63: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 89aa66: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 89aa69: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x89aa6fu); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 89aa6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa71: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa77: /* 89aa77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89aa7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa7c: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa82: /* 89aa82: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89aa85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa87: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa8d: /* 89aa8d: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89aa90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa92: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa98: /* 89aa98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 89aa9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 89aaa0: jns 0x89b860 */
  if (!sf) goto L_89b860;
L_89aaa6: /* 89aaa6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 89aaa9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89aaab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aaac: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aab2: mov byte ptr [ebp - 0x24], 0xb4 */
  W8((uint32_t)(ebp + 0xffffffdcu), 0xb4u);
/* 89aab6: mov byte ptr [ebp - 0x23], 0xff */
  W8((uint32_t)(ebp + 0xffffffddu), 0xffu);
/* 89aaba: mov byte ptr [ebp - 0x22], 0x48 */
  W8((uint32_t)(ebp + 0xffffffdeu), 0x48u);
/* 89aabe: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 89aac2: call 0x6c460b */
  esp -= 4; W32(esp, 0x89aac7u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89aac7: mov edx, dword ptr [0xcfa350] */
  edx = R32((uint32_t)(0xcfa350u));
/* 89aacd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89aad0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89aad2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aad5: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89aad9: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89aadcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89aadc: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 89aae3: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89aaf0: /* 89aaf0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89aaf3: cmp eax, dword ptr [esi + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89aaf9: jge 0x89af23 */
  if ((sf == of)) goto L_89af23;
L_89aaff: /* 89aaff: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89ab02: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 89ab05: mov eax, dword ptr [edx + 0x310] */
  eax = R32((uint32_t)(edx + 0x310u));
/* 89ab0b: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* 89ab0e: mov ecx, ebx */
  ecx = ebx;
/* 89ab10: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89ab16u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89ab16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab17: mov ecx, esp */
  ecx = esp;
/* 89ab19: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89ab1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ab1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ab1f: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89ab25u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89ab25: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab28: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89ab2du); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89ab2d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ab30: je 0x89af11 */
  if (zf) goto L_89af11;
L_89ab36: /* 89ab36: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab39: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab3f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89ab42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab43: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 89ab49: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ab4c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ab4e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89ab51: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89ab57u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89ab57: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ab5a: mov edi, esp */
  edi = esp;
/* 89ab5c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89ab61: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89ab67: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ab69: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ab6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab70: mov ecx, eax */
  ecx = eax;
/* 89ab72: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 89ab76: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89ab7cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89ab7c: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab82: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89ab86: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ab8cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ab8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab8f: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89ab95: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ab98: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89ab9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ab9f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89aba1: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89aba7u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89aba7: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89abae: mov ecx, eax */
  ecx = eax;
/* 89abb0: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 89abb4: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89abbau); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89abba: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89abbd: mov edi, esp */
  edi = esp;
/* 89abbf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89abc4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89abca: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89abd0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89abd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89abd3: mov ecx, eax */
  ecx = eax;
/* 89abd5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 89abd9: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89abdfu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89abdf: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abe5: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 89abe9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abefu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abef: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89abf5: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 89abf9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abff: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 89ac05: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 89ac0b: mov edx, dword ptr [ebp - 0x26c] */
  edx = R32((uint32_t)(ebp + 0xfffffd94u));
/* 89ac11: mov dword ptr [ebp - 0x234], eax */
  W32((uint32_t)(ebp + 0xfffffdccu), eax);
/* 89ac17: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac1d: mov dword ptr [ebp - 0x230], ecx */
  W32((uint32_t)(ebp + 0xfffffdd0u), ecx);
/* 89ac23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ac24: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac2a: mov dword ptr [ebp - 0x22c], edx */
  W32((uint32_t)(ebp + 0xfffffdd4u), edx);
/* 89ac30: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89ac36u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89ac36: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac3c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ac42u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ac42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 89ac45: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ac48: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 89ac52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89ac55: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 89ac5b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 89ac5e: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ac61: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 89ac64: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 89ac6a: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89ac70: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 89ac76: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac7c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89ac7f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89ac82: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89ac85: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ac88: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 89ac8e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac90: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89ac92: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac94: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89ac97: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac99: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89ac9c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac9e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89aca1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89aca4: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89aca7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acaa: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89acad: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb0: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89acb3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb6: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89acb9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acbb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acbd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acbf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89acc3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acc6: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89acc9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89accc: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89accf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd2: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89acd5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd8: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89acdb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acdd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acdf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ace5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89ace8: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89aceb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acee: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89acf1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acf4: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89acf7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acfa: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89acfd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acff: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89ad01: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad03: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ad07: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89ad09: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89ad0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89ad0d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89ad10: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89ad13: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89ad16: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ad19: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ad1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ad1f: mov esi, dword ptr [ebp - 0xbc] */
  esi = R32((uint32_t)(ebp + 0xffffff44u));
/* 89ad25: mov edi, dword ptr [ebp - 0xb8] */
  edi = R32((uint32_t)(ebp + 0xffffff48u));
/* 89ad2b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ad2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ad2e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ad31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ad32: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad35: mov ecx, esp */
  ecx = esp;
/* 89ad37: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89ad3e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89ad41: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ad43: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89ad4a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89ad4d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ad50: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89ad57: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89ad5a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ad5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad60: mov eax, esp */
  eax = esp;
/* 89ad62: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89ad69: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89ad6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ad6e: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89ad75: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89ad78: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ad7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad7e: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89ad85: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89ad88: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ad8b: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ad91: mov edx, esp */
  edx = esp;
/* 89ad93: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89ad95: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89ad98: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ad9e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89ada1: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ada6u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ada6: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ada9: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89adac: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89adae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adaf: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89adb2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89adb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adb9: mov edx, esp */
  edx = esp;
/* 89adbb: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89adc5: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 89adcb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89adcd: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 89add7: mov ecx, dword ptr [ebp - 0xec] */
  ecx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89addd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89ade0: mov dword ptr [ebp - 0xe8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x3f800000u);
/* 89adea: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89adf0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89adf3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adf6: mov ecx, esp */
  ecx = esp;
/* 89adf8: mov dword ptr [ebp - 0x120], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x3f800000u);
/* 89ae02: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89ae08: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ae0a: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 89ae14: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89ae1a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ae1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae20: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 89ae2a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89ae30: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ae33: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ae39: mov eax, esp */
  eax = esp;
/* 89ae3b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 89ae3d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 89ae40: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae43: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ae49: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ae4eu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ae4e: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89ae58: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ae5b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ae5e: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ae61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ae63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ae64: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89ae6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ae6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae71: mov eax, esp */
  eax = esp;
/* 89ae73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ae75: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89ae7f: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89ae85: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ae88: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89ae92: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89ae98: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae9e: mov edx, esp */
  edx = esp;
/* 89aea0: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 89aea7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89aeaa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89aeac: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 89aeb3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89aeb6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89aeb9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89aebc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 89aec3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89aec6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89aec9: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89aecf: mov ecx, esp */
  ecx = esp;
/* 89aed1: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 89aed3: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 89aed6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89aed9: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aedf: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89aee4u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89aee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aee6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aeec: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89aef1u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89aef1: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89aef7: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89aefb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af01u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89af01: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89af07: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89af0b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af11u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89af11: /* 89af11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89af14: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89af17: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89af1b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89af1e: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89af23: /* 89af23: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 89af2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89af30: /* 89af30: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89af36: cmp eax, dword ptr [esi + 0x320] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89af3c: jge 0x89b851 */
  if ((sf == of)) goto L_89b851;
L_89af42: /* 89af42: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af45: mov ebx, eax */
  ebx = eax;
/* 89af47: mov eax, dword ptr [ecx + 0x31c] */
  eax = R32((uint32_t)(ecx + 0x31cu));
/* 89af4d: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 89af50: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89af52: mov ecx, ebx */
  ecx = ebx;
/* 89af54: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89af5au); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89af5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89af5b: mov ecx, esp */
  ecx = esp;
/* 89af5d: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89af60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89af62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89af63: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89af69u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89af69: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af6c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89af71u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89af71: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89af74: je 0x89b839 */
  if (zf) goto L_89b839;
L_89af7a: /* 89af7a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af7d: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89af83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89af86: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89af89: lea edx, [ebp - 0x2ec] */
  edx = (uint32_t)(ebp + 0xfffffd14u);
/* 89af8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89af90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89af92: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89af95: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89af9bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89af9b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89af9e: mov edi, esp */
  edi = esp;
/* 89afa0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89afa5: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89afab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89afb1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89afb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89afb4: mov ecx, eax */
  ecx = eax;
/* 89afb6: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 89afba: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89afc0u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89afc0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89afc6: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89afca: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89afd0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89afd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89afd3: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89afd9: lea eax, [ebp - 0x3ac] */
  eax = (uint32_t)(ebp + 0xfffffc54u);
/* 89afdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89afe0: add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89afe3: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89afe9u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89afe9: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89afef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aff0: mov ecx, eax */
  ecx = eax;
/* 89aff2: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 89aff6: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89affcu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89affc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89afff: mov edi, esp */
  edi = esp;
/* 89b001: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89b006: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89b00c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89b00e: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b014: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b015: mov ecx, eax */
  ecx = eax;
/* 89b017: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 89b01b: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89b021u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89b021: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89b027: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 89b02b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b031u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b031: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89b037: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 89b03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b041: mov edx, dword ptr [ebp - 0x234] */
  edx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 89b047: mov ecx, dword ptr [ebp - 0x22c] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd4u));
/* 89b04d: mov eax, dword ptr [ebp - 0x230] */
  eax = R32((uint32_t)(ebp + 0xfffffdd0u));
/* 89b053: mov dword ptr [ebp - 0x274], edx */
  W32((uint32_t)(ebp + 0xfffffd8cu), edx);
/* 89b059: lea edx, [ebp - 0x32c] */
  edx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b05f: mov dword ptr [ebp - 0x26c], ecx */
  W32((uint32_t)(ebp + 0xfffffd94u), ecx);
/* 89b065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b066: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b06c: mov dword ptr [ebp - 0x270], eax */
  W32((uint32_t)(ebp + 0xfffffd90u), eax);
/* 89b072: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89b078u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89b078: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b07e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b084u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b084: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 89b08a: mov dword ptr [ebp - 0x54], 2 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x2u);
/* 89b091: lea esi, [ebp - 0x16c] */
  esi = (uint32_t)(ebp + 0xfffffe94u);
L_89b097: /* 89b097: dec dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 89b09a: js 0x89b0a9 */
  if (sf) goto L_89b0a9;
L_89b09c: /* 89b09c: mov ecx, esi */
  ecx = esi;
/* 89b09e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x89b0a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b0a0: mov eax, 0xc */
  eax = 0xcu;
/* 89b0a5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89b0a7: jmp 0x89b097 */
  goto L_89b097;
L_89b0a9: /* 89b0a9: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 89b0ac: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 89b0b6: fsub dword ptr [ebx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x18u)));
/* 89b0b9: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 89b0bc: fsub dword ptr [ebx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x14u)));
/* 89b0bf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b0c2: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 89b0c5: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 89b0c8: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89b0ce: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b0d1: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b0d4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b0d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b0da: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 89b0e0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89b0e3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b0e6: mov dword ptr [ebp - 0x16c], eax */
  W32((uint32_t)(ebp + 0xfffffe94u), eax);
/* 89b0ec: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89b0ef: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b0f2: mov dword ptr [ebp - 0x168], ecx */
  W32((uint32_t)(ebp + 0xfffffe98u), ecx);
/* 89b0f8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89b0fb: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89b0fe: mov dword ptr [ebp - 0x164], edx */
  W32((uint32_t)(ebp + 0xfffffe9cu), edx);
/* 89b104: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 89b107: fadd dword ptr [ebx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xcu)));
/* 89b10a: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 89b10d: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 89b110: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b113: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89b116: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 89b119: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89b11f: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b122: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b125: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b128: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b12b: fmul dword ptr [ebp - 0x140] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffec0u)));
/* 89b131: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89b134: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 89b137: mov dword ptr [ebp - 0x160], eax */
  W32((uint32_t)(ebp + 0xfffffea0u), eax);
/* 89b13d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89b140: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89b143: mov dword ptr [ebp - 0x15c], ecx */
  W32((uint32_t)(ebp + 0xfffffea4u), ecx);
/* 89b149: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89b14c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89b14f: mov dword ptr [ebp - 0x158], edx */
  W32((uint32_t)(ebp + 0xfffffea8u), edx);
/* 89b155: mov eax, 2 */
  eax = 0x2u;
/* 89b15a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89b160: /* 89b160: cmp dword ptr [ebp - 0x98], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b166: jge 0x89b80c */
  if ((sf == of)) goto L_89b80c;
L_89b16c: /* 89b16c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_89b173: /* 89b173: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89b176: mov eax, 2 */
  eax = 0x2u;
/* 89b17b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b17d: jge 0x89b801 */
  if ((sf == of)) goto L_89b801;
L_89b183: /* 89b183: mov ebx, dword ptr [ebp - 0x98] */
  ebx = R32((uint32_t)(ebp + 0xffffff68u));
/* 89b189: mov edx, dword ptr [ebp - 0x164] */
  edx = R32((uint32_t)(ebp + 0xfffffe9cu));
/* 89b18f: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 89b192: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89b195: mov eax, dword ptr [ebp + ebx - 0x16c] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe94u));
/* 89b19c: fld dword ptr [ebp + ebx - 0x16c] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe94u)); FPUSH(v); }
/* 89b1a3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 89b1a6: mov eax, ecx */
  eax = ecx;
/* 89b1a8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89b1ab: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89b1ae: mov ecx, dword ptr [ebp + eax - 0x168] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe98u));
/* 89b1b5: fld dword ptr [ebp + eax - 0x168] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe98u)); FPUSH(v); }
/* 89b1bc: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 89b1bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b1c1: lea eax, [ebp + eax - 0x168] */
  eax = (uint32_t)(ebp + eax + 0xfffffe98u);
/* 89b1c8: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 89b1ce: mov eax, dword ptr [ebp - 0x158] */
  eax = R32((uint32_t)(ebp + 0xfffffea8u));
/* 89b1d4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 89b1d7: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 89b1dd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 89b1e0: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89b1e6: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b1ec: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89b1f2: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89b1fc: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b1ff: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b202: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b205: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b208: lea edi, [ebp - 0x1a0] */
  edi = (uint32_t)(ebp + 0xfffffe60u);
/* 89b20e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b210: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b212: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b214: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b217: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b219: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b21c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b21e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b221: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b224: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b227: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b22a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b22d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b230: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b233: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b236: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b239: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b23b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b23d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b23f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b243: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b246: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b249: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b24c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b24f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b252: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b255: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b258: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b25b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b25d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b25f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b261: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b265: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b268: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b26b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b26e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b271: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b274: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b277: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b27a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b27d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b27f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b281: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b283: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b285: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b287: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b289: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b28b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b28d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b290: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b293: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b296: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 89b29c: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 89b2a2: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 89b2a8: mov dword ptr [ebp - 0x204], edx */
  W32((uint32_t)(ebp + 0xfffffdfcu), edx);
/* 89b2ae: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b2b1: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 89b2b7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b2ba: mov dword ptr [ebp - 0x120], edx */
  W32((uint32_t)(ebp + 0xfffffee0u), edx);
/* 89b2c0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b2c3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 89b2c9: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 89b2cf: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b2d2: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b2d8: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 89b2e2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b2e5: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b2e8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b2eb: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89b2f1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b2f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b2fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2fc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b2ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b301: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b304: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b307: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b30a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b30d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b310: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b313: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b316: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b319: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b31c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b31e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b320: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b322: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b324: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b326: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b329: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b32c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b32f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b332: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b335: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b338: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b33b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b33e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b340: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b342: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b344: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b346: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b348: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b34b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b34e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b351: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b354: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b357: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b35a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b35d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b360: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b362: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b364: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b366: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b36a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b36c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b36e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b370: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b373: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b376: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b379: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b37d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b380: mov edx, esp */
  edx = esp;
/* 89b382: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b384: mov eax, dword ptr [ebp - 0x204] */
  eax = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 89b38a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b38d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b390: mov edx, dword ptr [ebp - 0x1c0] */
  edx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89b396: mov eax, dword ptr [ebp - 0x1bc] */
  eax = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89b39c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b39f: mov ecx, esp */
  ecx = esp;
/* 89b3a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b3a3: mov edx, dword ptr [ebp - 0x1b8] */
  edx = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89b3a9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b3ac: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b3af: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b3b5: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b3bau); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b3ba: fld dword ptr [ebp + ebx - 0x168] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe98u)); FPUSH(v); }
/* 89b3c1: mov eax, dword ptr [ebp + ebx - 0x168] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe98u));
/* 89b3c8: mov edx, dword ptr [ebp - 0x16c] */
  edx = R32((uint32_t)(ebp + 0xfffffe94u));
/* 89b3ce: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b3d1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b3d4: mov ecx, dword ptr [ebp + eax - 0x164] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe9cu));
/* 89b3db: fld dword ptr [ebp + eax - 0x164] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe9cu)); FPUSH(v); }
/* 89b3e2: lea eax, [ebp + eax - 0x164] */
  eax = (uint32_t)(ebp + eax + 0xfffffe9cu);
/* 89b3e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b3eb: mov eax, dword ptr [ebp - 0x160] */
  eax = R32((uint32_t)(ebp + 0xfffffea0u));
/* 89b3f1: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 89b3f7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b3fa: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b3fd: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 89b403: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 89b409: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b40f: mov dword ptr [ebp - 0x180], eax */
  W32((uint32_t)(ebp + 0xfffffe80u), eax);
/* 89b415: mov dword ptr [ebp - 0x174], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x3f800000u);
/* 89b41f: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b422: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b425: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b428: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b42b: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89b431: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b433: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b435: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b437: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b43a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b43c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b43f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b441: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b444: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b447: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b44a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b44d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b450: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b453: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b456: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b459: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b45c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b45e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b460: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b462: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b464: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b466: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b469: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b46c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b46f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b472: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b475: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b478: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b47b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b47e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b480: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b482: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b484: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b486: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b488: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b48b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b48e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b491: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b494: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b497: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b49a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b49d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b4a0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4a2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b4a4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b4aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4ac: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b4ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b4b0: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b4b3: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b4b6: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b4b9: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89b4bf: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89b4c5: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89b4cb: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 89b4d1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b4d4: mov dword ptr [ebp - 0x134], edx */
  W32((uint32_t)(ebp + 0xfffffeccu), edx);
/* 89b4da: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b4dd: mov dword ptr [ebp - 0x130], edx */
  W32((uint32_t)(ebp + 0xfffffed0u), edx);
/* 89b4e3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b4e6: mov dword ptr [ebp - 0x12c], edx */
  W32((uint32_t)(ebp + 0xfffffed4u), edx);
/* 89b4ec: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* 89b4f2: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b4f5: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b4fb: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89b505: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b508: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b50b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b50e: lea edi, [ebp - 0x224] */
  edi = (uint32_t)(ebp + 0xfffffddcu);
/* 89b514: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b516: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b518: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b51d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b522: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b524: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b527: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b52a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b52d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b530: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b533: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b536: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b539: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b53c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b53f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b541: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b543: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b545: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b549: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b54c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b54f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b552: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b555: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b558: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b55b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b55e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b561: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b563: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b565: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b567: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b569: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b56b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b56e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b571: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b574: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b577: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b57a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b57d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b580: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b583: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b585: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b587: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b589: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b58b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b58d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b58f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b591: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b593: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b596: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b599: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b59c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b59f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b5a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5a3: mov edx, esp */
  edx = esp;
/* 89b5a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b5a7: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 89b5ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b5b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b5b3: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 89b5b9: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 89b5bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5c2: mov ecx, esp */
  ecx = esp;
/* 89b5c4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b5c6: mov edx, dword ptr [ebp - 0x21c] */
  edx = R32((uint32_t)(ebp + 0xfffffde4u));
/* 89b5cc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b5cf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b5d2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b5d8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b5ddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b5dd: fld dword ptr [ebp + ebx - 0x164] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe9cu)); FPUSH(v); }
/* 89b5e4: mov ecx, dword ptr [ebp + ebx - 0x164] */
  ecx = R32((uint32_t)(ebp + ebx + 0xfffffe9cu));
/* 89b5eb: lea eax, [ebp + ebx - 0x164] */
  eax = (uint32_t)(ebp + ebx + 0xfffffe9cu);
/* 89b5f2: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b5f5: mov edx, dword ptr [ebp + eax - 0x16c] */
  edx = R32((uint32_t)(ebp + eax + 0xfffffe94u));
/* 89b5fc: fld dword ptr [ebp + eax - 0x16c] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe94u)); FPUSH(v); }
/* 89b603: lea eax, [ebp + eax - 0x16c] */
  eax = (uint32_t)(ebp + eax + 0xfffffe94u);
/* 89b60a: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 89b610: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 89b616: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b619: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 89b61f: mov ecx, dword ptr [ebp - 0x15c] */
  ecx = R32((uint32_t)(ebp + 0xfffffea4u));
/* 89b625: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b628: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b62b: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 89b631: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b637: mov dword ptr [ebp - 0x18c], ecx */
  W32((uint32_t)(ebp + 0xfffffe74u), ecx);
/* 89b63d: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 89b647: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b64a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89b64d: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b650: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b653: lea edi, [ebp - 0xf4] */
  edi = (uint32_t)(ebp + 0xffffff0cu);
/* 89b659: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b65d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b662: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b664: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b667: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b669: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b66c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b66f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b672: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b675: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b678: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b67b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b67e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b681: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b684: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b686: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b688: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b68e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b691: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b694: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b697: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b69a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b69d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b6a0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b6a3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b6a6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6a8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6aa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6b0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b6b6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b6bc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6bf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b6c2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6c5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b6c8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6ca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6cc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6d2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6d4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b6d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b6d8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b6db: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b6de: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b6e1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b6e4: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 89b6ea: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89b6f0: mov ebx, dword ptr [ebp - 0xec] */
  ebx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89b6f6: mov dword ptr [ebp - 0xd4], edx */
  W32((uint32_t)(ebp + 0xffffff2cu), edx);
/* 89b6fc: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b6ff: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 89b705: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b708: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 89b70e: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89b714: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b717: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b71d: mov dword ptr [ebp - 0xc8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x3f800000u);
/* 89b727: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b72a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b72d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b730: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 89b736: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b738: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b73a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b73c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b73f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b741: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b744: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b746: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b749: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b74c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b74f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b752: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b755: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b758: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b75b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b75e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b761: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b763: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b765: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b767: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b769: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b76b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b76e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b771: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b774: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b777: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b77a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b77d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b780: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b783: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b785: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b787: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b789: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b78b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b78d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b790: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b793: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b796: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b799: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b79c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b79f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b7a2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b7a5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7a7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b7a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b7af: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7b1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b7b3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b7b5: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b7b8: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b7bb: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b7be: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b7c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b7c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7c5: mov edx, esp */
  edx = esp;
/* 89b7c7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b7c9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b7cc: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 89b7d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7d5: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 89b7d8: mov eax, esp */
  eax = esp;
/* 89b7da: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 89b7e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89b7e2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 89b7e8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89b7eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89b7ee: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b7f4: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b7f9u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b7f9: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 89b7fc: jmp 0x89b173 */
  goto L_89b173;
L_89b801: /* 89b801: inc dword ptr [ebp - 0x98] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff68u), r);
  }
/* 89b807: jmp 0x89b160 */
  goto L_89b160;
L_89b80c: /* 89b80c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b80e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b814: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89b819u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89b819: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b81f: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89b823: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b829u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b829: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b82f: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89b833: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b839u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89b839: /* 89b839: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89b83f: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89b842: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89b845: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b846: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 89b84c: jmp 0x89af30 */
  goto L_89af30;
L_89b851: /* 89b851: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b857: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b85b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89b860u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89b860: /* 89b860: mov eax, dword ptr [esi + 0x334] */
  eax = R32((uint32_t)(esi + 0x334u));
/* 89b866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b868: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b86e: /* 89b86e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89b870: mov ecx, edi */
  ecx = edi;
/* 89b872: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x89b878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b878: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b87a: je 0x89b899 */
  if (zf) goto L_89b899;
L_89b87c: /* 89b87c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 89b882: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 89b888: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 89b88d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b88e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b88f: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x89b894u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 89b894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b897: jmp 0x89b8fd */
  goto L_89b8fd;
L_89b899: /* 89b899: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b89c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b89e: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a0: /* 89b8a0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b8a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8a5: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a7: /* 89b8a7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89b8aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8ac: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8ae: /* 89b8ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89b8b0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8b7: mov ecx, edi */
  ecx = edi;
/* 89b8b9: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x89b8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8bf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89b8c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b8c7: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 89b8cb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89b8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8ce: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b8d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b8deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b8de: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b8e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89b8e4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 89b8e7: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 89b8ed: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8f2: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 89b8f8: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x89b8fdu); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
L_89b8fd: /* 89b8fd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b900: mov eax, dword ptr [edx + 0x1a0] */
  eax = R32((uint32_t)(edx + 0x1a0u));
/* 89b906: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b908: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b90e: /* 89b90e: mov eax, dword ptr [edx + 0x18c] */
  eax = R32((uint32_t)(edx + 0x18cu));
/* 89b914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b916: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b91c: /* 89b91c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b91f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b922: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89b925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b927: je 0x89b94a */
  if (zf) goto L_89b94a;
L_89b929: /* 89b929: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 89b92f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b932: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b938: /* 89b938: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b93b: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b941: /* 89b941: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b944: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b94a: /* 89b94a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 89b94d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b94f: jne 0x89b9f0 */
  if (!zf) goto L_89b9f0;
L_89b955: /* 89b955: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 89b95b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b95d: je 0x89b9f0 */
  if (zf) goto L_89b9f0;
L_89b963: /* 89b963: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 89b969: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b96f: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b975: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b979: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89b97b: jle 0x89b9f0 */
  if ((zf || sf != of)) goto L_89b9f0;
L_89b97d: /* 89b97d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b980: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89b986u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89b986: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b989: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 89b98f: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b995: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b99b: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9a0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9a2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9a5: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 89b9a9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89b9afu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89b9af: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b9b2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b9b5: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 89b9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9b9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b9bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b9bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89b9be: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89b9c3u); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89b9c3: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b9c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b9c9: xor eax, eax */
  eax = 0;
/* 89b9cb: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d0: /* 89b9d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b9d2: jge 0x89b9d7 */
  if ((sf == of)) goto L_89b9d7;
L_89b9d4: /* 89b9d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b9d5: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d7: /* 89b9d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b9d9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9db: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9de: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89b9e4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89b9e4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9e7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b9eb: call 0x6ccbee */
  esp -= 4; W32(esp, 0x89b9f0u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
L_89b9f0: /* 89b9f0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 89b9f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89b9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9f6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b9fc: call 0x6c460b */
  esp -= 4; W32(esp, 0x89ba01u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89ba01: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89ba04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ba06: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 89ba0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ba0f: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 89ba13: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89ba16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ba16: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 89ba19: xor ebx, ebx */
  ebx = 0;
/* 89ba1b: jmp 0x89ba20 */
  goto L_89ba20;
L_89ba20: /* 89ba20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ba23: cmp ebx, dword ptr [eax + 0x18c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ba29: jge 0x89bc5b */
  if ((sf == of)) goto L_89bc5b;
L_89ba2f: /* 89ba2f: mov ecx, dword ptr [eax + 0x188] */
  ecx = R32((uint32_t)(eax + 0x188u));
/* 89ba35: mov esi, ebx */
  esi = ebx;
/* 89ba37: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ba3a: mov eax, dword ptr [ecx + esi + 0xc] */
  eax = R32((uint32_t)(ecx + esi + 0xcu));
/* 89ba3e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba41: jne 0x89ba82 */
  if (!zf) goto L_89ba82;
L_89ba43: /* 89ba43: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89ba49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ba4a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89ba4d: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89ba57: mov dword ptr [ebp - 0xa8], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f4ccccdu);
/* 89ba61: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89ba6b: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89ba75: call 0x6c576d */
  esp -= 4; W32(esp, 0x89ba7au); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89ba7a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ba7d: jmp 0x89bb8a */
  goto L_89bb8a;
L_89ba82: /* 89ba82: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba85: jne 0x89bac6 */
  if (!zf) goto L_89bac6;
L_89ba87: /* 89ba87: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 89ba8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba8e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89ba91: mov dword ptr [ebp - 0x224], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffddcu), 0x3f4ccccdu);
/* 89ba9b: mov dword ptr [ebp - 0x220], 0x3e4ccccd */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x3e4ccccdu);
/* 89baa5: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 89baaf: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 89bab9: call 0x6c576d */
  esp -= 4; W32(esp, 0x89babeu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89babe: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89bac1: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bac6: /* 89bac6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bac9: jne 0x89bb0a */
  if (!zf) goto L_89bb0a;
L_89bacb: /* 89bacb: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 89bad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bad2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 89bad5: mov dword ptr [ebp - 0x1c0], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x3f4ccccdu);
/* 89badf: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 89bae9: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 89baf3: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 89bafd: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb02u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb02: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 89bb05: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb0a: /* 89bb0a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bb0d: jne 0x89bb4b */
  if (!zf) goto L_89bb4b;
L_89bb0f: /* 89bb0f: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89bb15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bb16: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 89bb19: mov dword ptr [ebp - 0xd4], 0x3e19999a */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x3e19999au);
/* 89bb23: mov dword ptr [ebp - 0xd0], 0x3f400000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f400000u);
/* 89bb2d: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 89bb37: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 89bb41: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb46u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb46: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89bb49: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb4b: /* 89bb4b: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bb4e: jl 0x89bb8a */
  if ((sf != of)) goto L_89bb8a;
L_89bb50: /* 89bb50: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 89bb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bb57: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89bb5a: mov dword ptr [ebp - 0xbc], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f666666u);
/* 89bb64: mov dword ptr [ebp - 0xb8], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f666666u);
/* 89bb6e: mov dword ptr [ebp - 0xb4], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x3f666666u);
/* 89bb78: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 89bb82: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb87u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb87: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
L_89bb8a: /* 89bb8a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89bb8d: mov edx, dword ptr [ecx + 0x188] */
  edx = R32((uint32_t)(ecx + 0x188u));
/* 89bb93: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89bb95: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 89bb98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89bb9a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89bb9d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89bba0: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 89bba3: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bba6: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bba9: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 89bbac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbaf: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 89bbb2: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 89bbb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbb7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbba: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 89bbbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbbf: fcom qword ptr [0xa1a808] */
  fpu_com(ST0, F64((uint32_t)(0xa1a808u)));
/* 89bbc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89bbc7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89bbca: jne 0x89bbff */
  if (!zf) goto L_89bbff;
L_89bbcc: /* 89bbcc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bbcf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bbd2: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89bbd8u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89bbd8: fstp qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 89bbdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bbde: fld qword ptr [0xa18288] */
  { double v = F64((uint32_t)(0xa18288u)); FPUSH(v); }
/* 89bbe4: fdiv qword ptr [ebp - 0x5c] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffa4u)));
/* 89bbe7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89bbef: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbf2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbf4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89bbf7: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bbfa: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89bbfd: jmp 0x89bc01 */
  goto L_89bc01;
L_89bbff: /* 89bbff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89bc01: /* 89bc01: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bc04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bc05: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89bc08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc0b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bc0e: mov ecx, esp */
  ecx = esp;
/* 89bc10: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89bc13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc16: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bc19: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89bc1b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89bc1e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89bc21: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89bc23: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89bc26: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89bc29: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89bc2c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89bc2f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89bc32: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89bc35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89bc37: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 89bc3a: mov eax, esp */
  eax = esp;
/* 89bc3c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89bc3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 89bc41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89bc44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89bc47: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc4d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89bc52u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89bc52: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bc55: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89bc56: jmp 0x89ba20 */
  goto L_89ba20;
L_89bc5b: /* 89bc5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89bc5d: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc63: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89bc68u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89bc68: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc6e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bc72: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89bc77u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 89bc77: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_89bc7a: /* 89bc7a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 89bc7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89bc80: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89bc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89bc89: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 89bc8c: mov ebx, dword ptr [ecx + 0x64] */
  ebx = R32((uint32_t)(ecx + 0x64u));
/* 89bc8f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bc91: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bc97: /* 89bc97: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89bc9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89bc9f: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bca5: /* 89bca5: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* 89bcab: cmp ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bcae: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bcb4: /* 89bcb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcb6: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcbc: /* 89bcbc: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* 89bcc2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcc4: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcca: /* 89bcca: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 89bccd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bccf: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcd5: /* 89bcd5: mov edx, eax */
  edx = eax;
/* 89bcd7: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 89bcda: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bcdd: mov dword ptr [ebp - 0x9c], esi */
  W32((uint32_t)(ebp + 0xffffff64u), esi);
/* 89bce3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x89bce9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 89bce9: mov ecx, dword ptr [ebp - 0x214] */
  ecx = R32((uint32_t)(ebp + 0xfffffdecu));
/* 89bcef: mov bl, 0x1c */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1cu) & 0xffu);
/* 89bcf1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bcf4: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bcfau); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bcfa: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bcfd: mov edi, eax */
  edi = eax;
/* 89bcff: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bd05u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bd05: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 89bd0b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bd0e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bd11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bd12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd13: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89bd19: push 0xae7fe8 */
  { uint32_t v = 0xae7fe8u; esp -= 4; W32(esp, v); }
/* 89bd1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd1f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89bd25u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89bd25: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd29: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd2c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 89bd30: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89bd36u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89bd36: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89bd3c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bd3f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bd45u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bd45: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd48: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 89bd4e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd51: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89bd55: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89bd59: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd5c: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89bd60: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bd64: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bd6au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bd6a: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89bd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd6e: push 0xae8044 */
  { uint32_t v = 0xae8044u; esp -= 4; W32(esp, v); }
/* 89bd73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89bd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bd76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89bd77: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bd7cu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bd7c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd7f: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 89bd85: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 89bd88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd8b: xor edi, edi */
  edi = 0;
/* 89bd8d: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd90: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 89bd97: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89bd9a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89bd9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89bda0: /* 89bda0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bda2: je 0x89becc */
  if (zf) goto L_89becc;
L_89bda8: /* 89bda8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89bdab: xor eax, eax */
  eax = 0;
/* 89bdad: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bdaf: jge 0x89becc */
  if ((sf == of)) goto L_89becc;
L_89bdb5: /* 89bdb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89bdb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bdb9: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdbf: /* 89bdbf: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bdc2: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdc8: /* 89bdc8: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 89bdce: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bdd1: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* 89bdd4: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 89bdda: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* 89bddd: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 89bde3: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* 89bde6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89bde8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bdea: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89bdec: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89bdee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89bdf2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 89bdf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bdf9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdff: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89be05u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89be05: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be07: fst qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 89be0a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 89be0c: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 89be0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be12: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89be18u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89be18: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89be1c: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* 89be1f: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 89be22: movzx edx, byte ptr [edx + 0x29] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x29u)));
/* 89be26: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be29: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89be2d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 89be30: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be33: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 89be37: fld dword ptr [ecx + 0x40] */
  { double v = F32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* 89be3a: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 89be3e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 89be41: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89be45: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 89be48: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 89be4c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 89be4f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 89be53: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 89be56: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89be5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89be5c: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89be62: push 0xae8050 */
  { uint32_t v = 0xae8050u; esp -= 4; W32(esp, v); }
/* 89be67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be68: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89be6eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89be6e: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be72: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be75: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 89be79: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89be7fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89be7f: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89be85: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 89be89: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89be8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89be8f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be92: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89be96: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89be9a: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89be9e: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bea2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bea8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bea8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89beab: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89beb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89beb2: push 0xae80f4 */
  { uint32_t v = 0xae80f4u; esp -= 4; W32(esp, v); }
/* 89beb7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89beb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89beba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bebb: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bec0u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bec0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_89bec3: /* 89bec3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 89bec6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89bec7: jmp 0x89bda0 */
  goto L_89bda0;
L_89becc: /* 89becc: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89becf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bed3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bed9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bed9: jmp 0x898d16 */
  goto L_898d16;
}
