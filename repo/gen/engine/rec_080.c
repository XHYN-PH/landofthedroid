#include "recomp.h"
#include "rec_mod.h"

void f_86df44(void) {
  LOAD_REGS();
  goto L_86df44;
L_86debe: /* 86debe: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86dec1: cmp esi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dec7: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 86deca: jge 0x86e47e */
  if ((sf == of)) goto L_86e47e;
L_86ded0: /* 86ded0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ded3: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ded9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86dedc: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86dee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dee5: je 0x86deeb */
  if (zf) goto L_86deeb;
L_86dee7: /* 86dee7: mov ebx, eax */
  ebx = eax;
/* 86dee9: jmp 0x86def0 */
  goto L_86def0;
L_86deeb: /* 86deeb: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86deee: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
L_86def0: /* 86def0: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86def7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86defa: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df00: /* 86df00: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86df03: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86df09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df0b: je 0x86df2f */
  if (zf) goto L_86df2f;
L_86df0d: /* 86df0d: mov eax, 1 */
  eax = 0x1u;
/* 86df12: xor edx, edx */
  edx = 0;
/* 86df14: mov ecx, esi */
  ecx = esi;
/* 86df16: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86df1bu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86df1b: and eax, dword ptr [ebp - 0x1a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe58u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86df21: and edx, dword ptr [ebp - 0x1a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe5cu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86df27: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86df29: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df2f: /* 86df2f: cmp esi, dword ptr [edi + 0x1cc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df35: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df3b: /* 86df3b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86df42: jmp 0x86df50 */
  goto L_86df50;
L_86df44: /* 86df44: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 86df4b: jmp 0x86df50 */
  goto L_86df50;
L_86df50: /* 86df50: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86df53: cmp edx, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86df59: jge 0x86e475 */
  if ((sf == of)) goto L_86e475;
L_86df5f: /* 86df5f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86df62: mov ecx, dword ptr [eax + 0x35c] */
  ecx = R32((uint32_t)(eax + 0x35cu));
/* 86df68: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 86df6b: mov eax, dword ptr [ebx + 0x1370] */
  eax = R32((uint32_t)(ebx + 0x1370u));
/* 86df71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df73: jne 0x86e3e4 */
  if (!zf) goto L_86e3e4;
L_86df79: /* 86df79: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86df7e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df81: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df87: /* 86df87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86df8a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86df8d: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 86df90: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 86df93: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df95: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df9b: /* 86df9b: mov ecx, edx */
  ecx = edx;
/* 86df9d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 86dfa0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfa3: jae 0x86dfac */
  if (!cf) goto L_86dfac;
L_86dfa5: /* 86dfa5: mov eax, 3 */
  eax = 0x3u;
/* 86dfaa: jmp 0x86dfb6 */
  goto L_86dfb6;
L_86dfac: /* 86dfac: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfaf: jb 0x86dfb6 */
  if (cf) goto L_86dfb6;
L_86dfb1: /* 86dfb1: mov eax, 0xb */
  eax = 0xbu;
L_86dfb6: /* 86dfb6: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 86dfb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86dfbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dfbf: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86dfc2: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 86dfc5: mov eax, 1 */
  eax = 0x1u;
/* 86dfca: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86dfcc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 86dfce: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86dfd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd6: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x86dfdbu); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 86dfdb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86dfde: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dfe0: mov ecx, esi */
  ecx = esi;
/* 86dfe2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86dfe6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86dfe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dfe8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86dfea: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86dff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dff1: mov ecx, esi */
  ecx = esi;
/* 86dff3: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86dff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dff8: je 0x86e3b5 */
  if (zf) goto L_86e3b5;
L_86dffe: /* 86dffe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e002: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e004: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e009: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e00b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e00f: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e013: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e017: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e01b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e01f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e021: mov ecx, esi */
  ecx = esi;
/* 86e023: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86e026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e027: mov eax, esp */
  eax = esp;
/* 86e029: mov dword ptr [ebp - 0x5c], esp */
  W32((uint32_t)(ebp + 0xffffffa4u), esp);
/* 86e02c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e02e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e030: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 86e036: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e03a: mov ecx, esi */
  ecx = esi;
/* 86e03c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86e03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e03f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e041: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e043: mov ecx, esi */
  ecx = esi;
/* 86e045: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86e048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04c: mov ecx, ebx */
  ecx = ebx;
/* 86e04e: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e053u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e053: mov ecx, dword ptr [ebx + 0x1290] */
  ecx = R32((uint32_t)(ebx + 0x1290u));
/* 86e059: mov edx, dword ptr [ebx + 0x128c] */
  edx = R32((uint32_t)(ebx + 0x128cu));
/* 86e05f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 86e060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e061: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 86e062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e063: mov ecx, ebx */
  ecx = ebx;
/* 86e065: mov esi, eax */
  esi = eax;
/* 86e067: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e06cu); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e06c: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 86e072: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e075: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 86e079: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 86e07c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86e07f: fsub dword ptr [ecx + edx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4 + 0x4u)));
/* 86e083: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 86e086: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86e088: mov ecx, dword ptr [ebx + 0x174] */
  ecx = R32((uint32_t)(ebx + 0x174u));
/* 86e08e: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 86e090: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 86e096: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 86e099: mov dword ptr [ebp - 0x160], edx */
  W32((uint32_t)(ebp + 0xfffffea0u), edx);
/* 86e09f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0a5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 86e0af: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 86e0b9: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 86e0c3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 86e0c6: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 86e0d0: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 86e0da: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0e0: mov dword ptr [ebp - 0x140], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0xbf800000u);
/* 86e0ea: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 86e0f4: mov dword ptr [ebp - 0x138], 0 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x0u);
/* 86e0fe: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 86e101: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 86e10b: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 86e111: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 86e11b: fadd dword ptr [0xa149c8] */
  ST0 = ST0 + (F32((uint32_t)(0xa149c8u)));
/* 86e121: mov dword ptr [ebp - 0x12c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0xbf800000u);
/* 86e12b: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 86e135: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 86e13f: fchs  */
  ST0 = -ST0;
/* 86e141: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 86e14b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86e14d: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 86e157: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 86e15d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86e160: fchs  */
  ST0 = -ST0;
/* 86e162: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 86e168: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 86e172: fchs  */
  ST0 = -ST0;
/* 86e174: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 86e17e: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 86e184: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 86e18e: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 86e198: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 86e19e: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 86e1a8: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 86e1b2: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 86e1b8: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 86e1c2: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 86e1cc: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 86e1d6: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 86e1e0: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 86e1ea: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 86e1f4: mov dword ptr [ebp - 0xd8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x3f800000u);
/* 86e1fe: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e201: mov edi, esp */
  edi = esp;
/* 86e203: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e208: lea esi, [ebp - 0x154] */
  esi = (uint32_t)(ebp + 0xfffffeacu);
/* 86e20e: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e214: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e217: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e21d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 86e221: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x86e227u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 86e227: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e22d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 86e231: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e237u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e237: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 86e23d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e241: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e247u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e247: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e24a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e252: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e255: jne 0x86e25f */
  if (!zf) goto L_86e25f;
L_86e257: /* 86e257: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 86e25a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86e25d: jmp 0x86e267 */
  goto L_86e267;
L_86e25f: /* 86e25f: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e262: fchs  */
  ST0 = -ST0;
/* 86e264: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_86e267: /* 86e267: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e26a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e270: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e273: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e275: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e278: je 0x86e27c */
  if (zf) goto L_86e27c;
L_86e27a: /* 86e27a: fchs  */
  ST0 = -ST0;
L_86e27c: /* 86e27c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e282: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e287: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86e28a: lea esi, [ebp - 0xd4] */
  esi = (uint32_t)(ebp + 0xffffff2cu);
/* 86e290: lea edi, [ebp - 0x548] */
  edi = (uint32_t)(ebp + 0xfffffab8u);
/* 86e296: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 86e2a0: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 86e2aa: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 86e2b4: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 86e2be: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 86e2c8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 86e2d2: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 86e2dc: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 86e2e6: mov dword ptr [ebp - 0xac], 0x36000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x36000000u);
/* 86e2f0: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 86e2fa: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 86e304: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 86e30e: mov dword ptr [ebp - 0x9c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f000000u);
/* 86e318: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 86e322: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e328: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 86e32a: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 86e330: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 86e336: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e338: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86e33a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 86e340: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 86e344: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e34au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e34a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e34d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e34f: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e356: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e358: mov ecx, esi */
  ecx = esi;
/* 86e35a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e35du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e35d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e35f: lea eax, [ebp - 0x548] */
  eax = (uint32_t)(ebp + 0xfffffab8u);
/* 86e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e368: mov ecx, esi */
  ecx = esi;
/* 86e36a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e36du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e36d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e36f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e371: mov ecx, esi */
  ecx = esi;
/* 86e373: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e376: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86e379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e385: mov ecx, ebx */
  ecx = ebx;
/* 86e387: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e38cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e38c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e38e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e390: mov ecx, esi */
  ecx = esi;
/* 86e392: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x86e395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e395: lea ecx, [ebp - 0x548] */
  ecx = (uint32_t)(ebp + 0xfffffab8u);
/* 86e39b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e39f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3a5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e3a5: lea ecx, [ebp - 0x508] */
  ecx = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e3ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86e3af: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3b5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_86e3b5: /* 86e3b5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e3b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e3ba: mov ecx, esi */
  ecx = esi;
/* 86e3bc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e3bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e3c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e3c3: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86e3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e3ca: mov ecx, esi */
  ecx = esi;
/* 86e3cc: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x86e3cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3cf: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e3d5: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 86e3db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e3df: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x86e3e4u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
L_86e3e4: /* 86e3e4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e3e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e3e9: mov ecx, edi */
  ecx = edi;
/* 86e3eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e3edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3ed: test byte ptr [ebx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e3f4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86e3f7: je 0x86e41d */
  if (zf) goto L_86e41d;
L_86e3f9: /* 86e3f9: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 86e3ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e405: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e407: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86e40a: jp 0x86e410 */
  if (pf) goto L_86e410;
L_86e40c: /* 86e40c: xor eax, eax */
  eax = 0;
/* 86e40e: jmp 0x86e415 */
  goto L_86e415;
L_86e410: /* 86e410: mov eax, 1 */
  eax = 0x1u;
L_86e415: /* 86e415: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e418: mov ecx, edi */
  ecx = edi;
/* 86e41a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e41du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e41d: /* 86e41d: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 86e423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e425: je 0x86e436 */
  if (zf) goto L_86e436;
L_86e427: /* 86e427: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e42a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e42d: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86e434: jmp 0x86e43c */
  goto L_86e43c;
L_86e436: /* 86e436: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86e43c: /* 86e43c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86e43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e440: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86e443: lea edx, [ebp - 0xd48] */
  edx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86e449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e44b: lea edx, [ebp - 0x948] */
  edx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86e451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e453: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e455: mov ecx, ebx */
  ecx = ebx;
/* 86e457: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e45cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e45c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e45e: mov ecx, edi */
  ecx = edi;
/* 86e460: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e463: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86e466: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86e469: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e46c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86e46d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86e470: jmp 0x86df50 */
  goto L_86df50;
L_86e475: /* 86e475: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e478: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86e479: jmp 0x86debe */
  goto L_86debe;
L_86e47e: /* 86e47e: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86e484: mov edx, dword ptr [0xce83a0] */
  edx = R32((uint32_t)(0xce83a0u));
/* 86e48a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86e48d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e48f: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e494: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e496: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e498: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86e49a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e49d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e49f: mov ecx, edi */
  ecx = edi;
/* 86e4a1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e4a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4a3: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86e4a8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e4ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e4ad: mov ecx, edi */
  ecx = edi;
/* 86e4af: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4b2: mov esi, dword ptr [ebp - 0x170] */
  esi = R32((uint32_t)(ebp + 0xfffffe90u));
L_86e4b8: /* 86e4b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4ba: je 0x86e4d9 */
  if (zf) goto L_86e4d9;
L_86e4bc: /* 86e4bc: mov ecx, dword ptr [ebp - 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86e4c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e4c4: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 86e4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4cc: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86e4cf: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e4d4u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e4d4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4d7: jmp 0x86e4b8 */
  goto L_86e4b8;
L_86e4d9: /* 86e4d9: mov esi, dword ptr [ebp - 0x190] */
  esi = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86e4df: nop  */
L_86e4e0: /* 86e4e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4e2: je 0x86e4fb */
  if (zf) goto L_86e4fb;
L_86e4e4: /* 86e4e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e4e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4e7: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e4ee: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e4f3u); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e4f3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e4f9: jmp 0x86e4e0 */
  goto L_86e4e0;
L_86e4fb: /* 86e4fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e4fd: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e503: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e508u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
/* 86e508: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e50b: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e511: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e513: jne 0x86e532 */
  if (!zf) goto L_86e532;
L_86e515: /* 86e515: mov esi, dword ptr [0xcd8ad8] */
  esi = R32((uint32_t)(0xcd8ad8u));
/* 86e51b: jmp 0x86e520 */
  goto L_86e520;
L_86e520: /* 86e520: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e522: je 0x86e532 */
  if (zf) goto L_86e532;
L_86e524: /* 86e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e528: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e52du); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e52d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e530: jmp 0x86e520 */
  goto L_86e520;
L_86e532: /* 86e532: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e53c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e53e: mov ecx, edi */
  ecx = edi;
/* 86e540: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e543: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86e548: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e54b: jne 0x86e55e */
  if (!zf) goto L_86e55e;
L_86e54d: /* 86e54d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86e553: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 86e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e558: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e55e: /* 86e55e: mov esi, dword ptr [ebp - 0x16c] */
  esi = R32((uint32_t)(ebp + 0xfffffe94u));
L_86e564: /* 86e564: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e566: je 0x86e576 */
  if (zf) goto L_86e576;
L_86e568: /* 86e568: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e56c: call 0x6cb8f7 */
  esp -= 4; W32(esp, 0x86e571u); SPILL(); f_6cb8f7(); if (g_unwind) return; RELOAD();
/* 86e571: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e574: jmp 0x86e564 */
  goto L_86e564;
L_86e576: /* 86e576: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e57e: je 0x86e80a */
  if (zf) goto L_86e80a;
L_86e584: /* 86e584: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e586: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86e589: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e58b: mov ecx, edi */
  ecx = edi;
/* 86e58d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e58f: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e596: jne 0x86e6ae */
  if (!zf) goto L_86e6ae;
L_86e59c: /* 86e59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e59e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e5a1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e5a7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e5a7: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5ac: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86e5b1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e5b7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e5b9: jne 0x86e5d3 */
  if (!zf) goto L_86e5d3;
L_86e5bb: /* 86e5bb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e5c0: push 0xae56d8 */
  { uint32_t v = 0xae56d8u; esp -= 4; W32(esp, v); }
/* 86e5c5: push 0xae571c */
  { uint32_t v = 0xae571cu; esp -= 4; W32(esp, v); }
/* 86e5ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e5d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e5d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e5d3: /* 86e5d3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e5d9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e5d9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e5e1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e5ed: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5f2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e5f8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e5f8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e5fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e601: push 0xcd939c */
  { uint32_t v = 0xcd939cu; esp -= 4; W32(esp, v); }
/* 86e606: mov dword ptr [0xcd939c], eax */
  W32((uint32_t)(0xcd939cu), eax);
/* 86e60b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e610u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e610: test byte ptr [0xcd9398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd9398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e617: jne 0x86e646 */
  if (!zf) goto L_86e646;
L_86e619: /* 86e619: or dword ptr [0xcd9398], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd9398u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd9398u), r);
  }
/* 86e620: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e624: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e628: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e62c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e630: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e634: mov ecx, 0xcd9380 */
  ecx = 0xcd9380u;
/* 86e639: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86e63d: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x86e642u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 86e642: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_86e646: /* 86e646: mov esi, dword ptr [0xcd939c] */
  esi = R32((uint32_t)(0xcd939cu));
/* 86e64c: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 86e64f: mov dword ptr [ebx], 0xcd9380 */
  W32((uint32_t)(ebx), 0xcd9380u);
/* 86e655: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e657: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e659: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x86e65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e65c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e65e: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 86e661: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e663: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86e666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e666: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e668: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 86e66b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e66d: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e670: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e672: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86e675: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e677: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e67a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e67c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 86e67f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 86e682: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e684: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x86e687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e687: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 86e68a: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 86e690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e691: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 86e694: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 86e697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e699: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 86e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e69f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e6a0: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 86e6a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e6a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e6ab: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_86e6ae: /* 86e6ae: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6b5: jne 0x86e759 */
  if (!zf) goto L_86e759;
L_86e6bb: /* 86e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e6bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e6c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e6c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e6c6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e6cb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 86e6d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e6d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6d8: jne 0x86e6f2 */
  if (!zf) goto L_86e6f2;
L_86e6da: /* 86e6da: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e6df: push 0xae5740 */
  { uint32_t v = 0xae5740u; esp -= 4; W32(esp, v); }
/* 86e6e4: push 0xae5784 */
  { uint32_t v = 0xae5784u; esp -= 4; W32(esp, v); }
/* 86e6e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e6efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e6ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e6f2: /* 86e6f2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e6f8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e6f8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e6fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e700: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e70c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e711: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e717u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e717: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e71d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e720: push 0xcd937c */
  { uint32_t v = 0xcd937cu; esp -= 4; W32(esp, v); }
/* 86e725: mov dword ptr [0xcd937c], eax */
  W32((uint32_t)(0xcd937cu), eax);
/* 86e72a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e72fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e72f: mov edx, dword ptr [0xcd937c] */
  edx = R32((uint32_t)(0xcd937cu));
/* 86e735: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e73a: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 86e73d: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e743: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 86e747: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e74c: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 86e750: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e755: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_86e759: /* 86e759: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e75f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e762: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 86e764: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e766: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e768: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86e76a: not eax */
  eax = ~eax;
/* 86e76c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86e76f: mov ecx, edi */
  ecx = edi;
/* 86e771: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x86e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e774: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e778: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e77e: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e784: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x86e789u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 86e789: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e78c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 86e792: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e796: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e79a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e79e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7a6: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e7b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e7bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86e7c1: mov ecx, eax */
  ecx = eax;
/* 86e7c3: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 86e7c9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 86e7cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 86e7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86e7d9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86e7d9: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e7df: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e7e3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x86e7e8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 86e7e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e7ea: mov ecx, edi */
  ecx = edi;
/* 86e7ec: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e7ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86e7f4: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 86e7fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86e7fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e7ff: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e804: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e806: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e808: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e80a: /* 86e80a: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
L_86e810: /* 86e810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e812: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e814: /* 86e814: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e819: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86e81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e81c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e81e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e820: je 0x86e828 */
  if (zf) goto L_86e828;
L_86e822: /* 86e822: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e824: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e826: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e828: /* 86e828: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e82b: jmp 0x86e810 */
  goto L_86e810;
L_86e82d: /* 86e82d: mov ecx, dword ptr [0xcfab30] */
  ecx = R32((uint32_t)(0xcfab30u));
/* 86e833: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e836: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e838: /* 86e838: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e83b: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86e83e: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86e841: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e843: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e845: /* 86e845: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86e848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e84a: jne 0x86e886 */
  if (!zf) goto L_86e886;
L_86e84c: /* 86e84c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e84e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e850: mov ecx, edi */
  ecx = edi;
/* 86e852: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e855: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86e85b: jmp 0x86e860 */
  goto L_86e860;
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e886: /* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}

void f_86df4d(void) {
  LOAD_REGS();
  goto L_86df4d;
L_86debe: /* 86debe: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86dec1: cmp esi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dec7: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 86deca: jge 0x86e47e */
  if ((sf == of)) goto L_86e47e;
L_86ded0: /* 86ded0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ded3: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ded9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86dedc: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86dee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dee5: je 0x86deeb */
  if (zf) goto L_86deeb;
L_86dee7: /* 86dee7: mov ebx, eax */
  ebx = eax;
/* 86dee9: jmp 0x86def0 */
  goto L_86def0;
L_86deeb: /* 86deeb: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86deee: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
L_86def0: /* 86def0: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86def7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86defa: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df00: /* 86df00: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86df03: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86df09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df0b: je 0x86df2f */
  if (zf) goto L_86df2f;
L_86df0d: /* 86df0d: mov eax, 1 */
  eax = 0x1u;
/* 86df12: xor edx, edx */
  edx = 0;
/* 86df14: mov ecx, esi */
  ecx = esi;
/* 86df16: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86df1bu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86df1b: and eax, dword ptr [ebp - 0x1a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe58u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86df21: and edx, dword ptr [ebp - 0x1a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe5cu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86df27: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86df29: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df2f: /* 86df2f: cmp esi, dword ptr [edi + 0x1cc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df35: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df3b: /* 86df3b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86df42: jmp 0x86df50 */
  goto L_86df50;
L_86df4d: /* 86df4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86df50: /* 86df50: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86df53: cmp edx, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86df59: jge 0x86e475 */
  if ((sf == of)) goto L_86e475;
L_86df5f: /* 86df5f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86df62: mov ecx, dword ptr [eax + 0x35c] */
  ecx = R32((uint32_t)(eax + 0x35cu));
/* 86df68: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 86df6b: mov eax, dword ptr [ebx + 0x1370] */
  eax = R32((uint32_t)(ebx + 0x1370u));
/* 86df71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df73: jne 0x86e3e4 */
  if (!zf) goto L_86e3e4;
L_86df79: /* 86df79: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86df7e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df81: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df87: /* 86df87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86df8a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86df8d: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 86df90: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 86df93: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df95: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df9b: /* 86df9b: mov ecx, edx */
  ecx = edx;
/* 86df9d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 86dfa0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfa3: jae 0x86dfac */
  if (!cf) goto L_86dfac;
L_86dfa5: /* 86dfa5: mov eax, 3 */
  eax = 0x3u;
/* 86dfaa: jmp 0x86dfb6 */
  goto L_86dfb6;
L_86dfac: /* 86dfac: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfaf: jb 0x86dfb6 */
  if (cf) goto L_86dfb6;
L_86dfb1: /* 86dfb1: mov eax, 0xb */
  eax = 0xbu;
L_86dfb6: /* 86dfb6: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 86dfb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86dfbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dfbf: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86dfc2: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 86dfc5: mov eax, 1 */
  eax = 0x1u;
/* 86dfca: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86dfcc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 86dfce: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86dfd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd6: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x86dfdbu); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 86dfdb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86dfde: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dfe0: mov ecx, esi */
  ecx = esi;
/* 86dfe2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86dfe6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86dfe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dfe8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86dfea: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86dff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dff1: mov ecx, esi */
  ecx = esi;
/* 86dff3: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86dff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dff8: je 0x86e3b5 */
  if (zf) goto L_86e3b5;
L_86dffe: /* 86dffe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e002: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e004: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e009: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e00b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e00f: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e013: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e017: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e01b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e01f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e021: mov ecx, esi */
  ecx = esi;
/* 86e023: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86e026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e027: mov eax, esp */
  eax = esp;
/* 86e029: mov dword ptr [ebp - 0x5c], esp */
  W32((uint32_t)(ebp + 0xffffffa4u), esp);
/* 86e02c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e02e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e030: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 86e036: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e03a: mov ecx, esi */
  ecx = esi;
/* 86e03c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86e03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e03f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e041: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e043: mov ecx, esi */
  ecx = esi;
/* 86e045: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86e048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04c: mov ecx, ebx */
  ecx = ebx;
/* 86e04e: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e053u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e053: mov ecx, dword ptr [ebx + 0x1290] */
  ecx = R32((uint32_t)(ebx + 0x1290u));
/* 86e059: mov edx, dword ptr [ebx + 0x128c] */
  edx = R32((uint32_t)(ebx + 0x128cu));
/* 86e05f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 86e060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e061: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 86e062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e063: mov ecx, ebx */
  ecx = ebx;
/* 86e065: mov esi, eax */
  esi = eax;
/* 86e067: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e06cu); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e06c: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 86e072: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e075: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 86e079: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 86e07c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86e07f: fsub dword ptr [ecx + edx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4 + 0x4u)));
/* 86e083: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 86e086: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86e088: mov ecx, dword ptr [ebx + 0x174] */
  ecx = R32((uint32_t)(ebx + 0x174u));
/* 86e08e: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 86e090: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 86e096: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 86e099: mov dword ptr [ebp - 0x160], edx */
  W32((uint32_t)(ebp + 0xfffffea0u), edx);
/* 86e09f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0a5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 86e0af: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 86e0b9: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 86e0c3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 86e0c6: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 86e0d0: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 86e0da: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0e0: mov dword ptr [ebp - 0x140], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0xbf800000u);
/* 86e0ea: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 86e0f4: mov dword ptr [ebp - 0x138], 0 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x0u);
/* 86e0fe: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 86e101: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 86e10b: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 86e111: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 86e11b: fadd dword ptr [0xa149c8] */
  ST0 = ST0 + (F32((uint32_t)(0xa149c8u)));
/* 86e121: mov dword ptr [ebp - 0x12c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0xbf800000u);
/* 86e12b: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 86e135: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 86e13f: fchs  */
  ST0 = -ST0;
/* 86e141: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 86e14b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86e14d: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 86e157: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 86e15d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86e160: fchs  */
  ST0 = -ST0;
/* 86e162: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 86e168: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 86e172: fchs  */
  ST0 = -ST0;
/* 86e174: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 86e17e: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 86e184: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 86e18e: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 86e198: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 86e19e: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 86e1a8: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 86e1b2: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 86e1b8: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 86e1c2: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 86e1cc: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 86e1d6: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 86e1e0: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 86e1ea: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 86e1f4: mov dword ptr [ebp - 0xd8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x3f800000u);
/* 86e1fe: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e201: mov edi, esp */
  edi = esp;
/* 86e203: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e208: lea esi, [ebp - 0x154] */
  esi = (uint32_t)(ebp + 0xfffffeacu);
/* 86e20e: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e214: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e217: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e21d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 86e221: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x86e227u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 86e227: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e22d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 86e231: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e237u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e237: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 86e23d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e241: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e247u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e247: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e24a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e252: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e255: jne 0x86e25f */
  if (!zf) goto L_86e25f;
L_86e257: /* 86e257: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 86e25a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86e25d: jmp 0x86e267 */
  goto L_86e267;
L_86e25f: /* 86e25f: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e262: fchs  */
  ST0 = -ST0;
/* 86e264: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_86e267: /* 86e267: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e26a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e270: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e273: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e275: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e278: je 0x86e27c */
  if (zf) goto L_86e27c;
L_86e27a: /* 86e27a: fchs  */
  ST0 = -ST0;
L_86e27c: /* 86e27c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e282: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e287: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86e28a: lea esi, [ebp - 0xd4] */
  esi = (uint32_t)(ebp + 0xffffff2cu);
/* 86e290: lea edi, [ebp - 0x548] */
  edi = (uint32_t)(ebp + 0xfffffab8u);
/* 86e296: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 86e2a0: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 86e2aa: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 86e2b4: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 86e2be: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 86e2c8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 86e2d2: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 86e2dc: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 86e2e6: mov dword ptr [ebp - 0xac], 0x36000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x36000000u);
/* 86e2f0: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 86e2fa: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 86e304: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 86e30e: mov dword ptr [ebp - 0x9c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f000000u);
/* 86e318: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 86e322: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e328: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 86e32a: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 86e330: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 86e336: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e338: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86e33a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 86e340: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 86e344: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e34au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e34a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e34d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e34f: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e356: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e358: mov ecx, esi */
  ecx = esi;
/* 86e35a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e35du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e35d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e35f: lea eax, [ebp - 0x548] */
  eax = (uint32_t)(ebp + 0xfffffab8u);
/* 86e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e368: mov ecx, esi */
  ecx = esi;
/* 86e36a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e36du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e36d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e36f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e371: mov ecx, esi */
  ecx = esi;
/* 86e373: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e376: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86e379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e385: mov ecx, ebx */
  ecx = ebx;
/* 86e387: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e38cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e38c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e38e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e390: mov ecx, esi */
  ecx = esi;
/* 86e392: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x86e395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e395: lea ecx, [ebp - 0x548] */
  ecx = (uint32_t)(ebp + 0xfffffab8u);
/* 86e39b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e39f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3a5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e3a5: lea ecx, [ebp - 0x508] */
  ecx = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e3ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86e3af: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3b5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_86e3b5: /* 86e3b5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e3b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e3ba: mov ecx, esi */
  ecx = esi;
/* 86e3bc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e3bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e3c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e3c3: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86e3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e3ca: mov ecx, esi */
  ecx = esi;
/* 86e3cc: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x86e3cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3cf: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e3d5: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 86e3db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e3df: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x86e3e4u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
L_86e3e4: /* 86e3e4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e3e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e3e9: mov ecx, edi */
  ecx = edi;
/* 86e3eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e3edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3ed: test byte ptr [ebx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e3f4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86e3f7: je 0x86e41d */
  if (zf) goto L_86e41d;
L_86e3f9: /* 86e3f9: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 86e3ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e405: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e407: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86e40a: jp 0x86e410 */
  if (pf) goto L_86e410;
L_86e40c: /* 86e40c: xor eax, eax */
  eax = 0;
/* 86e40e: jmp 0x86e415 */
  goto L_86e415;
L_86e410: /* 86e410: mov eax, 1 */
  eax = 0x1u;
L_86e415: /* 86e415: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e418: mov ecx, edi */
  ecx = edi;
/* 86e41a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e41du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e41d: /* 86e41d: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 86e423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e425: je 0x86e436 */
  if (zf) goto L_86e436;
L_86e427: /* 86e427: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e42a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e42d: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86e434: jmp 0x86e43c */
  goto L_86e43c;
L_86e436: /* 86e436: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86e43c: /* 86e43c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86e43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e440: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86e443: lea edx, [ebp - 0xd48] */
  edx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86e449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e44b: lea edx, [ebp - 0x948] */
  edx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86e451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e453: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e455: mov ecx, ebx */
  ecx = ebx;
/* 86e457: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e45cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e45c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e45e: mov ecx, edi */
  ecx = edi;
/* 86e460: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e463: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86e466: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86e469: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e46c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86e46d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86e470: jmp 0x86df50 */
  goto L_86df50;
L_86e475: /* 86e475: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e478: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86e479: jmp 0x86debe */
  goto L_86debe;
L_86e47e: /* 86e47e: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86e484: mov edx, dword ptr [0xce83a0] */
  edx = R32((uint32_t)(0xce83a0u));
/* 86e48a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86e48d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e48f: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e494: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e496: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e498: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86e49a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e49d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e49f: mov ecx, edi */
  ecx = edi;
/* 86e4a1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e4a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4a3: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86e4a8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e4ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e4ad: mov ecx, edi */
  ecx = edi;
/* 86e4af: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4b2: mov esi, dword ptr [ebp - 0x170] */
  esi = R32((uint32_t)(ebp + 0xfffffe90u));
L_86e4b8: /* 86e4b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4ba: je 0x86e4d9 */
  if (zf) goto L_86e4d9;
L_86e4bc: /* 86e4bc: mov ecx, dword ptr [ebp - 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86e4c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e4c4: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 86e4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4cc: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86e4cf: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e4d4u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e4d4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4d7: jmp 0x86e4b8 */
  goto L_86e4b8;
L_86e4d9: /* 86e4d9: mov esi, dword ptr [ebp - 0x190] */
  esi = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86e4df: nop  */
L_86e4e0: /* 86e4e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4e2: je 0x86e4fb */
  if (zf) goto L_86e4fb;
L_86e4e4: /* 86e4e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e4e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4e7: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e4ee: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e4f3u); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e4f3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e4f9: jmp 0x86e4e0 */
  goto L_86e4e0;
L_86e4fb: /* 86e4fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e4fd: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e503: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e508u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
/* 86e508: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e50b: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e511: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e513: jne 0x86e532 */
  if (!zf) goto L_86e532;
L_86e515: /* 86e515: mov esi, dword ptr [0xcd8ad8] */
  esi = R32((uint32_t)(0xcd8ad8u));
/* 86e51b: jmp 0x86e520 */
  goto L_86e520;
L_86e520: /* 86e520: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e522: je 0x86e532 */
  if (zf) goto L_86e532;
L_86e524: /* 86e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e528: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e52du); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e52d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e530: jmp 0x86e520 */
  goto L_86e520;
L_86e532: /* 86e532: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e53c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e53e: mov ecx, edi */
  ecx = edi;
/* 86e540: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e543: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86e548: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e54b: jne 0x86e55e */
  if (!zf) goto L_86e55e;
L_86e54d: /* 86e54d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86e553: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 86e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e558: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e55e: /* 86e55e: mov esi, dword ptr [ebp - 0x16c] */
  esi = R32((uint32_t)(ebp + 0xfffffe94u));
L_86e564: /* 86e564: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e566: je 0x86e576 */
  if (zf) goto L_86e576;
L_86e568: /* 86e568: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e56c: call 0x6cb8f7 */
  esp -= 4; W32(esp, 0x86e571u); SPILL(); f_6cb8f7(); if (g_unwind) return; RELOAD();
/* 86e571: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e574: jmp 0x86e564 */
  goto L_86e564;
L_86e576: /* 86e576: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e57e: je 0x86e80a */
  if (zf) goto L_86e80a;
L_86e584: /* 86e584: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e586: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86e589: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e58b: mov ecx, edi */
  ecx = edi;
/* 86e58d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e58f: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e596: jne 0x86e6ae */
  if (!zf) goto L_86e6ae;
L_86e59c: /* 86e59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e59e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e5a1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e5a7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e5a7: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5ac: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86e5b1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e5b7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e5b9: jne 0x86e5d3 */
  if (!zf) goto L_86e5d3;
L_86e5bb: /* 86e5bb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e5c0: push 0xae56d8 */
  { uint32_t v = 0xae56d8u; esp -= 4; W32(esp, v); }
/* 86e5c5: push 0xae571c */
  { uint32_t v = 0xae571cu; esp -= 4; W32(esp, v); }
/* 86e5ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e5d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e5d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e5d3: /* 86e5d3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e5d9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e5d9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e5e1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e5ed: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5f2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e5f8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e5f8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e5fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e601: push 0xcd939c */
  { uint32_t v = 0xcd939cu; esp -= 4; W32(esp, v); }
/* 86e606: mov dword ptr [0xcd939c], eax */
  W32((uint32_t)(0xcd939cu), eax);
/* 86e60b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e610u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e610: test byte ptr [0xcd9398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd9398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e617: jne 0x86e646 */
  if (!zf) goto L_86e646;
L_86e619: /* 86e619: or dword ptr [0xcd9398], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd9398u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd9398u), r);
  }
/* 86e620: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e624: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e628: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e62c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e630: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e634: mov ecx, 0xcd9380 */
  ecx = 0xcd9380u;
/* 86e639: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86e63d: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x86e642u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 86e642: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_86e646: /* 86e646: mov esi, dword ptr [0xcd939c] */
  esi = R32((uint32_t)(0xcd939cu));
/* 86e64c: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 86e64f: mov dword ptr [ebx], 0xcd9380 */
  W32((uint32_t)(ebx), 0xcd9380u);
/* 86e655: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e657: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e659: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x86e65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e65c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e65e: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 86e661: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e663: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86e666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e666: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e668: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 86e66b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e66d: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e670: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e672: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86e675: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e677: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e67a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e67c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 86e67f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 86e682: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e684: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x86e687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e687: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 86e68a: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 86e690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e691: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 86e694: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 86e697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e699: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 86e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e69f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e6a0: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 86e6a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e6a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e6ab: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_86e6ae: /* 86e6ae: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6b5: jne 0x86e759 */
  if (!zf) goto L_86e759;
L_86e6bb: /* 86e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e6bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e6c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e6c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e6c6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e6cb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 86e6d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e6d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6d8: jne 0x86e6f2 */
  if (!zf) goto L_86e6f2;
L_86e6da: /* 86e6da: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e6df: push 0xae5740 */
  { uint32_t v = 0xae5740u; esp -= 4; W32(esp, v); }
/* 86e6e4: push 0xae5784 */
  { uint32_t v = 0xae5784u; esp -= 4; W32(esp, v); }
/* 86e6e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e6efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e6ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e6f2: /* 86e6f2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e6f8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e6f8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e6fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e700: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e70c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e711: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e717u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e717: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e71d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e720: push 0xcd937c */
  { uint32_t v = 0xcd937cu; esp -= 4; W32(esp, v); }
/* 86e725: mov dword ptr [0xcd937c], eax */
  W32((uint32_t)(0xcd937cu), eax);
/* 86e72a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e72fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e72f: mov edx, dword ptr [0xcd937c] */
  edx = R32((uint32_t)(0xcd937cu));
/* 86e735: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e73a: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 86e73d: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e743: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 86e747: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e74c: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 86e750: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e755: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_86e759: /* 86e759: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e75f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e762: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 86e764: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e766: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e768: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86e76a: not eax */
  eax = ~eax;
/* 86e76c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86e76f: mov ecx, edi */
  ecx = edi;
/* 86e771: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x86e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e774: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e778: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e77e: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e784: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x86e789u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 86e789: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e78c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 86e792: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e796: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e79a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e79e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7a6: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e7b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e7bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86e7c1: mov ecx, eax */
  ecx = eax;
/* 86e7c3: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 86e7c9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 86e7cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 86e7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86e7d9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86e7d9: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e7df: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e7e3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x86e7e8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 86e7e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e7ea: mov ecx, edi */
  ecx = edi;
/* 86e7ec: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e7ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86e7f4: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 86e7fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86e7fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e7ff: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e804: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e806: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e808: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e80a: /* 86e80a: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
L_86e810: /* 86e810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e812: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e814: /* 86e814: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e819: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86e81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e81c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e81e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e820: je 0x86e828 */
  if (zf) goto L_86e828;
L_86e822: /* 86e822: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e824: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e826: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e828: /* 86e828: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e82b: jmp 0x86e810 */
  goto L_86e810;
L_86e82d: /* 86e82d: mov ecx, dword ptr [0xcfab30] */
  ecx = R32((uint32_t)(0xcfab30u));
/* 86e833: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e836: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e838: /* 86e838: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e83b: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86e83e: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86e841: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e843: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e845: /* 86e845: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86e848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e84a: jne 0x86e886 */
  if (!zf) goto L_86e886;
L_86e84c: /* 86e84c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e84e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e850: mov ecx, edi */
  ecx = edi;
/* 86e852: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e855: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86e85b: jmp 0x86e860 */
  goto L_86e860;
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e886: /* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}

void f_86e51d(void) {
  LOAD_REGS();
L_86e51d: /* 86e51d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86e520: /* 86e520: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e522: je 0x86e532 */
  if (zf) goto L_86e532;
L_86e524: /* 86e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e528: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e52du); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e52d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e530: jmp 0x86e520 */
  goto L_86e520;
L_86e532: /* 86e532: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e53c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e53e: mov ecx, edi */
  ecx = edi;
/* 86e540: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e543: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86e548: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e54b: jne 0x86e55e */
  if (!zf) goto L_86e55e;
L_86e54d: /* 86e54d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86e553: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 86e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e558: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e55e: /* 86e55e: mov esi, dword ptr [ebp - 0x16c] */
  esi = R32((uint32_t)(ebp + 0xfffffe94u));
L_86e564: /* 86e564: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e566: je 0x86e576 */
  if (zf) goto L_86e576;
L_86e568: /* 86e568: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e56c: call 0x6cb8f7 */
  esp -= 4; W32(esp, 0x86e571u); SPILL(); f_6cb8f7(); if (g_unwind) return; RELOAD();
/* 86e571: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e574: jmp 0x86e564 */
  goto L_86e564;
L_86e576: /* 86e576: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e57e: je 0x86e80a */
  if (zf) goto L_86e80a;
L_86e584: /* 86e584: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e586: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86e589: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e58b: mov ecx, edi */
  ecx = edi;
/* 86e58d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e58f: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e596: jne 0x86e6ae */
  if (!zf) goto L_86e6ae;
L_86e59c: /* 86e59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e59e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e5a1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e5a7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e5a7: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5ac: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86e5b1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e5b7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e5b9: jne 0x86e5d3 */
  if (!zf) goto L_86e5d3;
L_86e5bb: /* 86e5bb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e5c0: push 0xae56d8 */
  { uint32_t v = 0xae56d8u; esp -= 4; W32(esp, v); }
/* 86e5c5: push 0xae571c */
  { uint32_t v = 0xae571cu; esp -= 4; W32(esp, v); }
/* 86e5ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e5d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e5d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e5d3: /* 86e5d3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e5d9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e5d9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e5e1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e5ed: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5f2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e5f8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e5f8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e5fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e601: push 0xcd939c */
  { uint32_t v = 0xcd939cu; esp -= 4; W32(esp, v); }
/* 86e606: mov dword ptr [0xcd939c], eax */
  W32((uint32_t)(0xcd939cu), eax);
/* 86e60b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e610u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e610: test byte ptr [0xcd9398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd9398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e617: jne 0x86e646 */
  if (!zf) goto L_86e646;
L_86e619: /* 86e619: or dword ptr [0xcd9398], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd9398u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd9398u), r);
  }
/* 86e620: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e624: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e628: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e62c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e630: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e634: mov ecx, 0xcd9380 */
  ecx = 0xcd9380u;
/* 86e639: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86e63d: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x86e642u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 86e642: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_86e646: /* 86e646: mov esi, dword ptr [0xcd939c] */
  esi = R32((uint32_t)(0xcd939cu));
/* 86e64c: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 86e64f: mov dword ptr [ebx], 0xcd9380 */
  W32((uint32_t)(ebx), 0xcd9380u);
/* 86e655: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e657: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e659: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x86e65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e65c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e65e: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 86e661: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e663: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86e666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e666: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e668: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 86e66b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e66d: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e670: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e672: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86e675: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e677: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e67a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e67c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 86e67f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 86e682: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e684: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x86e687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e687: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 86e68a: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 86e690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e691: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 86e694: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 86e697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e699: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 86e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e69f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e6a0: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 86e6a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e6a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e6ab: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_86e6ae: /* 86e6ae: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6b5: jne 0x86e759 */
  if (!zf) goto L_86e759;
L_86e6bb: /* 86e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e6bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e6c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e6c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e6c6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e6cb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 86e6d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e6d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6d8: jne 0x86e6f2 */
  if (!zf) goto L_86e6f2;
L_86e6da: /* 86e6da: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e6df: push 0xae5740 */
  { uint32_t v = 0xae5740u; esp -= 4; W32(esp, v); }
/* 86e6e4: push 0xae5784 */
  { uint32_t v = 0xae5784u; esp -= 4; W32(esp, v); }
/* 86e6e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e6efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e6ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e6f2: /* 86e6f2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e6f8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e6f8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e6fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e700: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e70c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e711: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e717u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e717: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e71d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e720: push 0xcd937c */
  { uint32_t v = 0xcd937cu; esp -= 4; W32(esp, v); }
/* 86e725: mov dword ptr [0xcd937c], eax */
  W32((uint32_t)(0xcd937cu), eax);
/* 86e72a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e72fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e72f: mov edx, dword ptr [0xcd937c] */
  edx = R32((uint32_t)(0xcd937cu));
/* 86e735: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e73a: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 86e73d: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e743: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 86e747: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e74c: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 86e750: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e755: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_86e759: /* 86e759: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e75f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e762: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 86e764: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e766: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e768: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86e76a: not eax */
  eax = ~eax;
/* 86e76c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86e76f: mov ecx, edi */
  ecx = edi;
/* 86e771: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x86e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e774: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e778: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e77e: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e784: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x86e789u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 86e789: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e78c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 86e792: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e796: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e79a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e79e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7a6: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e7b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e7bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86e7c1: mov ecx, eax */
  ecx = eax;
/* 86e7c3: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 86e7c9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 86e7cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 86e7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86e7d9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86e7d9: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e7df: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e7e3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x86e7e8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 86e7e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e7ea: mov ecx, edi */
  ecx = edi;
/* 86e7ec: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e7ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86e7f4: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 86e7fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86e7fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e7ff: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e804: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e806: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e808: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e80a: /* 86e80a: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
L_86e810: /* 86e810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e812: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e814: /* 86e814: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e819: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86e81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e81c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e81e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e820: je 0x86e828 */
  if (zf) goto L_86e828;
L_86e822: /* 86e822: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e824: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e826: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e828: /* 86e828: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e82b: jmp 0x86e810 */
  goto L_86e810;
L_86e82d: /* 86e82d: mov ecx, dword ptr [0xcfab30] */
  ecx = R32((uint32_t)(0xcfab30u));
/* 86e833: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e836: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e838: /* 86e838: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e83b: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86e83e: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86e841: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e843: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e845: /* 86e845: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86e848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e84a: jne 0x86e886 */
  if (!zf) goto L_86e886;
L_86e84c: /* 86e84c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e84e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e850: mov ecx, edi */
  ecx = edi;
/* 86e852: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e855: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86e85b: jmp 0x86e860 */
  goto L_86e860;
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e886: /* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}

void f_86e85d(void) {
  LOAD_REGS();
L_86e85d: /* 86e85d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}

void f_86eccc(void) {
  LOAD_REGS();
L_86eccc: /* 86eccc: mov edx, dword ptr [ebp - 0x164] */
  edx = R32((uint32_t)(ebp + 0xfffffe9cu));
/* 86ecd2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86ecd7: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 86ecdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ecde: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 86ece4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86ece9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86ece9(); return;
}

void f_86ece9(void) {
  LOAD_REGS();
L_86ece9: /* 86ece9: push 0xa182f8 */
  { uint32_t v = 0xa182f8u; esp -= 4; W32(esp, v); }
/* 86ecee: push 0xae56c0 */
  { uint32_t v = 0xae56c0u; esp -= 4; W32(esp, v); }
/* 86ecf3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86ecf9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86ecf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86ecfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ecfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ed00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86ed05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86ed05: guest_badaddr(0x86ed05); return;
}

void f_86f5b0(void) {
  LOAD_REGS();
L_86f5b0: /* 86f5b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86f5b1: mov ebp, esp */
  ebp = esp;
/* 86f5b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86f5b5: push 0x9d4680 */
  { uint32_t v = 0x9d4680u; esp -= 4; W32(esp, v); }
/* 86f5ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86f5c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f5c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86f5c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f5cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86f5cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86f5cd: mov esi, ecx */
  esi = ecx;
/* 86f5cf: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 86f5d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86f5d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86f5d8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86f5db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86f5e2: je 0x86f6a8 */
  if (zf) goto L_86f6a8;
L_86f5e8: /* 86f5e8: test byte ptr [eax + 0x390], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x390u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86f5ef: jne 0x86f6a8 */
  if (!zf) goto L_86f6a8;
L_86f5f5: /* 86f5f5: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 86f5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f5fc: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 86f602: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f605: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 86f60b: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 86f611: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 86f617: mov eax, esp */
  eax = esp;
/* 86f619: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 86f61f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86f622: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86f625: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86f627: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86f62a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86f62d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86f630: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86f633: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86f636: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86f639: mov ecx, esi */
  ecx = esi;
/* 86f63b: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x86f640u); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 86f640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86f642: je 0x86f6a8 */
  if (zf) goto L_86f6a8;
L_86f644: /* 86f644: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 86f64a: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 86f650: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 86f656: mov dword ptr [esi + 0x3d0], eax */
  W32((uint32_t)(esi + 0x3d0u), eax);
/* 86f65c: mov dword ptr [esi + 0x3c8], ecx */
  W32((uint32_t)(esi + 0x3c8u), ecx);
/* 86f662: mov eax, 1 */
  eax = 0x1u;
/* 86f667: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f66a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f673: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f674: mov esp, ebp */
  esp = ebp;
/* 86f676: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f677: ret  */
  esp += 4; SPILL(); return;
L_86f6a8: /* 86f6a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f6ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f6ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f6ad: xor eax, eax */
  eax = 0;
/* 86f6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f6b7: mov esp, ebp */
  esp = ebp;
/* 86f6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f6ba: ret  */
  esp += 4; SPILL(); return;
}

void f_86f678(void) {
  LOAD_REGS();
L_86f678: /* 86f678: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86f67b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86f680: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 86f683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f684: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86f687: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86f68cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86f68c(); return;
}

void f_86f68c(void) {
  LOAD_REGS();
L_86f68c: /* 86f68c: push 0xa18314 */
  { uint32_t v = 0xa18314u; esp -= 4; W32(esp, v); }
/* 86f691: push 0xae5858 */
  { uint32_t v = 0xae5858u; esp -= 4; W32(esp, v); }
/* 86f696: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86f69cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86f69c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86f69f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86f6a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86f6a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86f6a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 86f6a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f6ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f6ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f6ad: xor eax, eax */
  eax = 0;
/* 86f6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f6b7: mov esp, ebp */
  esp = ebp;
/* 86f6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f6ba: ret  */
  esp += 4; SPILL(); return;
}

void f_86f710(void) {
  LOAD_REGS();
L_86f710: /* 86f710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 86f714: test byte ptr [eax + 0x390], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x390u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86f71b: je 0x86f724 */
  if (zf) goto L_86f724;
L_86f71d: /* 86f71d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86f723: ret  */
  esp += 4; SPILL(); return;
L_86f724: /* 86f724: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 86f72a: ret  */
  esp += 4; SPILL(); return;
}

void f_86f740(void) {
  LOAD_REGS();
L_86f740: /* 86f740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86f741: mov ebp, esp */
  ebp = esp;
/* 86f743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86f745: push 0x9d4690 */
  { uint32_t v = 0x9d4690u; esp -= 4; W32(esp, v); }
/* 86f74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86f750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86f758: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86f75c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 86f75f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86f760: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86f761: mov edi, ecx */
  edi = ecx;
/* 86f763: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86f769: xor esi, esi */
  esi = 0;
/* 86f76b: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f76e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86f771: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86f778: jle 0x86f7c0 */
  if ((zf || sf != of)) goto L_86f7c0;
L_86f77a: /* 86f77a: mov eax, ecx */
  eax = ecx;
/* 86f77c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86f77d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86f77f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86f781: cmp ebx, dword ptr [edi + eax*4 + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax*4 + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f788: jle 0x86f7a0 */
  if ((zf || sf != of)) goto L_86f7a0;
L_86f78a: /* 86f78a: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f78d: mov esi, eax */
  esi = eax;
/* 86f78f: jle 0x86f7c0 */
  if ((zf || sf != of)) goto L_86f7c0;
L_86f791: /* 86f791: mov eax, ecx */
  eax = ecx;
/* 86f793: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86f794: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86f797: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86f799: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86f79c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86f79e: jmp 0x86f7b0 */
  goto L_86f7b0;
L_86f7a0: /* 86f7a0: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7a3: jle 0x86f7c0 */
  if ((zf || sf != of)) goto L_86f7c0;
L_86f7a5: /* 86f7a5: mov eax, ecx */
  eax = ecx;
/* 86f7a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86f7a8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86f7ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86f7ad: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_86f7b0: /* 86f7b0: cmp ebx, dword ptr [edi + eax*4 + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax*4 + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7b7: jle 0x86f7c0 */
  if ((zf || sf != of)) goto L_86f7c0;
L_86f7b9: /* 86f7b9: mov esi, eax */
  esi = eax;
/* 86f7bb: jmp 0x86f7c0 */
  goto L_86f7c0;
L_86f7c0: /* 86f7c0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7c2: jge 0x86f7d0 */
  if ((sf == of)) goto L_86f7d0;
L_86f7c4: /* 86f7c4: cmp ebx, dword ptr [edi + esi*4 + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + esi*4 + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7cb: jle 0x86f7d0 */
  if ((zf || sf != of)) goto L_86f7d0;
L_86f7cd: /* 86f7cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86f7ce: jmp 0x86f7c0 */
  goto L_86f7c0;
L_86f7d0: /* 86f7d0: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7d3: jge 0x86f86e */
  if ((sf == of)) goto L_86f86e;
L_86f7d9: /* 86f7d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86f7dc: fild dword ptr [edi + esi*4 + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + esi*4 + 0x80u)); FPUSH(v); }
/* 86f7e3: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 86f7e6: mov dword ptr [edi + esi*4], ecx */
  W32((uint32_t)(edi + esi*4), ecx);
/* 86f7e9: mov dword ptr [edi + esi*4 + 0x80], ebx */
  W32((uint32_t)(edi + esi*4 + 0x80u), ebx);
/* 86f7f0: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 86f7f3: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86f7f9: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7fc: jge 0x86f805 */
  if ((sf == of)) goto L_86f805;
L_86f7fe: /* 86f7fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86f7ff: mov dword ptr [edi + 0x100], ecx */
  W32((uint32_t)(edi + 0x100u), ecx);
L_86f805: /* 86f805: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86f80b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86f80c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f80e: jge 0x86f86e */
  if ((sf == of)) goto L_86f86e;
L_86f810: /* 86f810: fild dword ptr [edi + esi*4 + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + esi*4 + 0x80u)); FPUSH(v); }
/* 86f817: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86f81a: mov ebx, dword ptr [edi + esi*4] */
  ebx = R32((uint32_t)(edi + esi*4));
/* 86f81d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86f81e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 86f821: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
/* 86f824: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x86f82au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 86f82a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86f82d: mov dword ptr [edi + esi*4 + 0x80], eax */
  W32((uint32_t)(edi + esi*4 + 0x80u), eax);
/* 86f834: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86f837: mov eax, ebx */
  eax = ebx;
/* 86f839: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 86f83c: jmp 0x86f805 */
  goto L_86f805;
L_86f86e: /* 86f86e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f87a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f87b: mov esp, ebp */
  esp = ebp;
/* 86f87d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f87e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_86f7bd(void) {
  LOAD_REGS();
L_86f7bd: /* 86f7bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86f7c0: /* 86f7c0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7c2: jge 0x86f7d0 */
  if ((sf == of)) goto L_86f7d0;
L_86f7c4: /* 86f7c4: cmp ebx, dword ptr [edi + esi*4 + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + esi*4 + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7cb: jle 0x86f7d0 */
  if ((zf || sf != of)) goto L_86f7d0;
L_86f7cd: /* 86f7cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86f7ce: jmp 0x86f7c0 */
  goto L_86f7c0;
L_86f7d0: /* 86f7d0: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7d3: jge 0x86f86e */
  if ((sf == of)) goto L_86f86e;
L_86f7d9: /* 86f7d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86f7dc: fild dword ptr [edi + esi*4 + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + esi*4 + 0x80u)); FPUSH(v); }
/* 86f7e3: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 86f7e6: mov dword ptr [edi + esi*4], ecx */
  W32((uint32_t)(edi + esi*4), ecx);
/* 86f7e9: mov dword ptr [edi + esi*4 + 0x80], ebx */
  W32((uint32_t)(edi + esi*4 + 0x80u), ebx);
/* 86f7f0: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 86f7f3: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86f7f9: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f7fc: jge 0x86f805 */
  if ((sf == of)) goto L_86f805;
L_86f7fe: /* 86f7fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86f7ff: mov dword ptr [edi + 0x100], ecx */
  W32((uint32_t)(edi + 0x100u), ecx);
L_86f805: /* 86f805: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86f80b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86f80c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f80e: jge 0x86f86e */
  if ((sf == of)) goto L_86f86e;
L_86f810: /* 86f810: fild dword ptr [edi + esi*4 + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + esi*4 + 0x80u)); FPUSH(v); }
/* 86f817: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86f81a: mov ebx, dword ptr [edi + esi*4] */
  ebx = R32((uint32_t)(edi + esi*4));
/* 86f81d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86f81e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 86f821: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
/* 86f824: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x86f82au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 86f82a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86f82d: mov dword ptr [edi + esi*4 + 0x80], eax */
  W32((uint32_t)(edi + esi*4 + 0x80u), eax);
/* 86f834: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86f837: mov eax, ebx */
  eax = ebx;
/* 86f839: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 86f83c: jmp 0x86f805 */
  goto L_86f805;
L_86f86e: /* 86f86e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f87a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f87b: mov esp, ebp */
  esp = ebp;
/* 86f87d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f87e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_86f83e(void) {
  LOAD_REGS();
L_86f83e: /* 86f83e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86f841: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86f846: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 86f849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f84a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86f84d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86f852u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86f852(); return;
}

void f_86f852(void) {
  LOAD_REGS();
L_86f852: /* 86f852: push 0xa18344 */
  { uint32_t v = 0xa18344u; esp -= 4; W32(esp, v); }
/* 86f857: push 0xae5868 */
  { uint32_t v = 0xae5868u; esp -= 4; W32(esp, v); }
/* 86f85c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86f862u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86f862: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86f865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86f867: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86f869: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86f86eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 86f86e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86f871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86f872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86f873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86f87a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86f87b: mov esp, ebp */
  esp = ebp;
/* 86f87d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86f87e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_86f8f0(void) {
  LOAD_REGS();
L_86f8f0: /* 86f8f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86f8f1: mov ebp, esp */
  ebp = esp;
/* 86f8f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86f8f5: push 0x9d46a0 */
  { uint32_t v = 0x9d46a0u; esp -= 4; W32(esp, v); }
/* 86f8fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86f900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86f908: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f90b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86f90c: xor ebx, ebx */
  ebx = 0;
/* 86f90e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86f90f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86f912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86f913: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86f916: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86f919: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 86f91c: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 86f91f: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 86f922: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 86f925: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 86f928: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 86f92b: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 86f92e: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 86f931: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 86f934: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86f937: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 86f93e: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 86f945: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 86f948: jmp 0x86f950 */
  goto L_86f950;
L_86f950: /* 86f950: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f953: cmp ebx, dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f959: jge 0x86fabc */
  if ((sf == of)) goto L_86fabc;
L_86f95f: /* 86f95f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 86f965: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86f967: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f96a: mov eax, esp */
  eax = esp;
/* 86f96c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 86f973: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86f976: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86f978: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 86f97f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86f982: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86f985: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86f98c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86f98f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86f992: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f995: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 86f998: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86f99d: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 86f9a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86f9a4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86f9aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86f9ab: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 86f9b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86f9b2: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 86f9b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f9b6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x86f9bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86f9bc: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 86f9bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86f9c1: je 0x86fa57 */
  if (zf) goto L_86fa57;
L_86f9c7: /* 86f9c7: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 86f9cd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86f9cf: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 86f9d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f9d5: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86f9d8: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 86f9db: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 86f9de: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 86f9e4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 86f9e7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86f9ea: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 86f9f0: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 86f9f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f9f9: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 86f9ff: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 86fa06: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 86fa0c: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 86fa0f: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86fa12: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 86fa15: mov edx, esp */
  edx = esp;
/* 86fa17: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 86fa19: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 86fa1c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86fa1e: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86fa25: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86fa28: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 86fa2b: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86fa32: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86fa35: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 86fa38: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86fa3d: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 86fa40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa41: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 86fa44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fa46: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 86fa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa4a: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x86fa50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fa50: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 86fa53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fa55: jne 0x86fa86 */
  if (!zf) goto L_86fa86;
L_86fa57: /* 86fa57: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fa5a: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 86fa5d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86fa5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fa61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fa63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fa64: mov ecx, esi */
  ecx = esi;
/* 86fa66: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x86fa6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fa6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fa6e: je 0x86fa86 */
  if (zf) goto L_86fa86;
L_86fa70: /* 86fa70: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 86fa73: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fa76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86fa7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fa7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fa7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86fa80: mov esp, ebp */
  esp = ebp;
/* 86fa82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86fa83: ret 4 */
  esp += 8; SPILL(); return;
L_86fa86: /* 86fa86: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86fa87: jmp 0x86f950 */
  goto L_86f950;
L_86fabc: /* 86fabc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fabf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fac1: xor eax, eax */
  eax = 0;
/* 86fac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86faca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86facb: mov esp, ebp */
  esp = ebp;
/* 86facd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86face: ret 4 */
  esp += 8; SPILL(); return;
}

void f_86f94a(void) {
  LOAD_REGS();
L_86f94a: /* 86f94a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86f950: /* 86f950: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f953: cmp ebx, dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86f959: jge 0x86fabc */
  if ((sf == of)) goto L_86fabc;
L_86f95f: /* 86f95f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 86f965: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86f967: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f96a: mov eax, esp */
  eax = esp;
/* 86f96c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 86f973: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86f976: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86f978: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 86f97f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86f982: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86f985: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86f98c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86f98f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86f992: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f995: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 86f998: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86f99d: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 86f9a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86f9a4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86f9aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86f9ab: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 86f9b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86f9b2: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 86f9b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86f9b6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x86f9bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86f9bc: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 86f9bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86f9c1: je 0x86fa57 */
  if (zf) goto L_86fa57;
L_86f9c7: /* 86f9c7: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 86f9cd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86f9cf: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 86f9d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86f9d5: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86f9d8: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 86f9db: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 86f9de: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 86f9e4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 86f9e7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86f9ea: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 86f9f0: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 86f9f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86f9f9: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 86f9ff: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 86fa06: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 86fa0c: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 86fa0f: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86fa12: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 86fa15: mov edx, esp */
  edx = esp;
/* 86fa17: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 86fa19: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 86fa1c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86fa1e: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86fa25: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86fa28: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 86fa2b: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86fa32: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86fa35: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 86fa38: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86fa3d: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 86fa40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa41: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 86fa44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fa46: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 86fa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fa4a: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x86fa50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fa50: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 86fa53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fa55: jne 0x86fa86 */
  if (!zf) goto L_86fa86;
L_86fa57: /* 86fa57: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fa5a: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 86fa5d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86fa5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fa61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fa63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fa64: mov ecx, esi */
  ecx = esi;
/* 86fa66: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x86fa6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fa6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fa6e: je 0x86fa86 */
  if (zf) goto L_86fa86;
L_86fa70: /* 86fa70: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 86fa73: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fa76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86fa7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fa7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fa7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86fa80: mov esp, ebp */
  esp = ebp;
/* 86fa82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86fa83: ret 4 */
  esp += 8; SPILL(); return;
L_86fa86: /* 86fa86: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86fa87: jmp 0x86f950 */
  goto L_86f950;
L_86fabc: /* 86fabc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fabf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fac1: xor eax, eax */
  eax = 0;
/* 86fac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86faca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86facb: mov esp, ebp */
  esp = ebp;
/* 86facd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86face: ret 4 */
  esp += 8; SPILL(); return;
}

void f_86fa8c(void) {
  LOAD_REGS();
L_86fa8c: /* 86fa8c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86fa8f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86fa94: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 86fa97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fa98: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86fa9b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86faa0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86faa0(); return;
}

void f_86faa0(void) {
  LOAD_REGS();
L_86faa0: /* 86faa0: push 0xa18380 */
  { uint32_t v = 0xa18380u; esp -= 4; W32(esp, v); }
/* 86faa5: push 0xae5848 */
  { uint32_t v = 0xae5848u; esp -= 4; W32(esp, v); }
/* 86faaa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86fab0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86fab0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86fab3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fab5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fab7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86fabcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 86fabc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fabf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fac1: xor eax, eax */
  eax = 0;
/* 86fac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86faca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86facb: mov esp, ebp */
  esp = ebp;
/* 86facd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86face: ret 4 */
  esp += 8; SPILL(); return;
}

void f_86fb60(void) {
  LOAD_REGS();
L_86fb60: /* 86fb60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86fb61: mov ebp, esp */
  ebp = esp;
/* 86fb63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86fb65: push 0x9d46b0 */
  { uint32_t v = 0x9d46b0u; esp -= 4; W32(esp, v); }
/* 86fb6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86fb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fb71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86fb78: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fb7e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 86fb81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86fb82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fb83: xor ebx, ebx */
  ebx = 0;
/* 86fb85: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86fb87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86fb88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86fb8b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86fb8e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 86fb91: je 0x86fbad */
  if (zf) goto L_86fbad;
L_86fb93: /* 86fb93: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86fb96: jne 0x86fbad */
  if (!zf) goto L_86fbad;
L_86fb98: /* 86fb98: xor eax, eax */
  eax = 0;
/* 86fb9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fb9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86fba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fba5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86fba7: mov esp, ebp */
  esp = ebp;
/* 86fba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86fbaa: ret 0x1c */
  esp += 32; SPILL(); return;
L_86fbad: /* 86fbad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86fbb0: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 86fbb6: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 86fbbc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86fbbe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86fbc1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86fbc4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86fbc7: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86fbca: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 86fbcd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86fbd0: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 86fbd6: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 86fbdc: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 86fbe3: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 86fbea: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 86fbf1: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86fbf8: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 86fbff: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 86fc06: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 86fc09: mov dword ptr [ebp - 0x64], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f800000u);
/* 86fc10: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 86fc17: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86fc1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86fc20: /* 86fc20: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fc23: cmp ebx, dword ptr [ecx + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86fc29: jge 0x86fedf */
  if ((sf == of)) goto L_86fedf;
L_86fc2f: /* 86fc2f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86fc31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fc34: mov eax, esp */
  eax = esp;
/* 86fc36: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 86fc3d: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 86fc40: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86fc42: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 86fc49: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86fc4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86fc4f: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 86fc56: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86fc59: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86fc5c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fc5f: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 86fc62: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86fc67: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86fc6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fc6e: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 86fc71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fc72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fc73: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 86fc79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fc7a: mov ecx, edi */
  ecx = edi;
/* 86fc7c: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x86fc82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fc82: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 86fc88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fc8a: je 0x86fdc6 */
  if (zf) goto L_86fdc6;
L_86fc90: /* 86fc90: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86fc93: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fc96: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fc98: je 0x86fd3e */
  if (zf) goto L_86fd3e;
L_86fc9e: /* 86fc9e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fca1: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 86fca4: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 86fcaa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86fcac: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 86fcb2: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 86fcb9: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 86fcbf: mov eax, dword ptr [eax + 0x170] */
  eax = R32((uint32_t)(eax + 0x170u));
/* 86fcc5: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 86fccb: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 86fcd1: mov eax, esp */
  eax = esp;
/* 86fcd3: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 86fcd9: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 86fce0: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 86fce6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86fce9: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 86fcec: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 86fcf2: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86fcf5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 86fcf8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86fcfa: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 86fd00: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86fd03: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86fd06: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 86fd0c: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 86fd13: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86fd16: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86fd19: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86fd1e: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 86fd24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fd25: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 86fd2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fd2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fd2d: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 86fd33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fd34: mov ecx, edi */
  ecx = edi;
/* 86fd36: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x86fd3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fd3c: jmp 0x86fdb8 */
  goto L_86fdb8;
L_86fd3e: /* 86fd3e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fd41: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 86fd44: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 86fd4a: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 86fd50: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 86fd56: mov ecx, esp */
  ecx = esp;
/* 86fd58: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 86fd5e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86fd60: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 86fd66: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 86fd6c: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 86fd73: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86fd76: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 86fd7c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86fd7e: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86fd85: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86fd88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86fd8b: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 86fd92: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86fd95: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86fd98: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 86fd9d: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 86fda3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fda4: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 86fda7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86fda8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fda9: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 86fdaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86fdb0: mov ecx, edi */
  ecx = edi;
/* 86fdb2: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x86fdb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86fdb8: /* 86fdb8: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 86fdbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fdc0: jne 0x86fed9 */
  if (!zf) goto L_86fed9;
L_86fdc6: /* 86fdc6: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 86fdc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fdcb: je 0x86fde6 */
  if (zf) goto L_86fde6;
L_86fdcd: /* 86fdcd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fdd0: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 86fdd3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86fdd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86fddd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86fdde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86fddf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86fde0: mov esp, ebp */
  esp = ebp;
/* 86fde2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86fde3: ret 0x1c */
  esp += 32; SPILL(); return;
L_86fde6: /* 86fde6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fde9: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 86fdec: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 86fdf2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86fdf4: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 86fdf7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86fdfa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86fdfd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 86fe00: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86fe03: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 86fe09: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86fe0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fe0e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe10: fsub dword ptr [eax + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2d8u)));
/* 86fe16: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fe1b: mov eax, esp */
  eax = esp;
/* 86fe1d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86fe1f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 86fe22: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 86fe25: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86fe28: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86fe2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86fe2d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86fe30: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86fe33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fe34: mov ecx, edi */
  ecx = edi;
/* 86fe36: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x86fe3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fe3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fe3e: je 0x86fed9 */
  if (zf) goto L_86fed9;
L_86fe44: /* 86fe44: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86fe47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fe49: je 0x86fe5c */
  if (zf) goto L_86fe5c;
L_86fe4b: /* 86fe4b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86fe4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fe4f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fe52: mov ecx, esi */
  ecx = esi;
/* 86fe54: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x86fe5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fe5a: jmp 0x86fe7e */
  goto L_86fe7e;
L_86fe5c: /* 86fe5c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86fe5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86fe61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe63: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fe66: mov ecx, esp */
  ecx = esp;
/* 86fe68: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86fe6a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 86fe6d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86fe70: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86fe73: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86fe76: mov ecx, esi */
  ecx = esi;
/* 86fe78: call dword ptr [eax + 0x198] */
  { uint32_t t = R32((uint32_t)(eax + 0x198u)); esp -= 4; W32(esp, 0x86fe7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86fe7e: /* 86fe7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fe80: je 0x86fec2 */
  if (zf) goto L_86fec2;
L_86fe82: /* 86fe82: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86fe85: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86fe87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fe89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe8b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fe8d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86fe90: mov ecx, esp */
  ecx = esp;
/* 86fe92: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86fe94: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86fe97: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86fe9a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86fe9d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86fea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86fea1: mov ecx, edi */
  ecx = edi;
/* 86fea3: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x86fea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86fea9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86feac: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 86feaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86feb2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86feb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86feba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86febb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86febc: mov esp, ebp */
  esp = ebp;
/* 86febe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86febf: ret 0x1c */
  esp += 32; SPILL(); return;
L_86fec2: /* 86fec2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 86fec5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fec7: je 0x86fed9 */
  if (zf) goto L_86fed9;
L_86fec9: /* 86fec9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86fecc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fece: jne 0x86fed9 */
  if (!zf) goto L_86fed9;
L_86fed0: /* 86fed0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86fed3: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 86fed6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_86fed9: /* 86fed9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86feda: jmp 0x86fc20 */
  goto L_86fc20;
L_86fedf: /* 86fedf: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 86fee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86fee3: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 86fee9: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x86feefu); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 86feef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86fef1: je 0x86ff1a */
  if (zf) goto L_86ff1a;
L_86fef3: /* 86fef3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86fef6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86fef8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86fefa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fefc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86fefe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86ff01: mov eax, esp */
  eax = esp;
/* 86ff03: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86ff05: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86ff08: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86ff0b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ff0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86ff11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86ff12: mov ecx, edi */
  ecx = edi;
/* 86ff14: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x86ff1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ff1a: /* 86ff1a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ff1d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ff20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ff21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ff22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ff29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ff2a: mov esp, ebp */
  esp = ebp;
/* 86ff2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86ff2d: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_86ff30(void) {
  LOAD_REGS();
L_86ff30: /* 86ff30: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 86ff36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86ff3b: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 86ff3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ff3f: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 86ff42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86ff47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86ff47(); return;
}

void f_86ff47(void) {
  LOAD_REGS();
L_86ff47: /* 86ff47: push 0xa183d0 */
  { uint32_t v = 0xa183d0u; esp -= 4; W32(esp, v); }
/* 86ff4c: push 0xae5850 */
  { uint32_t v = 0xae5850u; esp -= 4; W32(esp, v); }
/* 86ff51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86ff57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86ff57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86ff5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ff5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ff5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86ff63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86ff63: guest_badaddr(0x86ff63); return;
}

void f_870080(void) {
  LOAD_REGS();
L_870080: /* 870080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 870081: mov ebp, esp */
  ebp = esp;
/* 870083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 870085: push 0x9d46c0 */
  { uint32_t v = 0x9d46c0u; esp -= 4; W32(esp, v); }
/* 87008a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 870090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 870098: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87009b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 87009e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87009f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8700a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8700a1: xor edi, edi */
  edi = 0;
/* 8700a3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8700a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8700a8: mov ebx, ecx */
  ebx = ecx;
/* 8700aa: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8700ad: je 0x870259 */
  if (zf) goto L_870259;
L_8700b3: /* 8700b3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8700b6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8700b8: je 0x870259 */
  if (zf) goto L_870259;
L_8700be: /* 8700be: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8700c1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8700c3: je 0x87025c */
  if (zf) goto L_87025c;
L_8700c9: /* 8700c9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8700cb: je 0x87025c */
  if (zf) goto L_87025c;
L_8700d1: /* 8700d1: cmp dword ptr [ebx + 0x3c4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3c4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8700d7: je 0x87025c */
  if (zf) goto L_87025c;
L_8700dd: /* 8700dd: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8700e0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8700e3: jmp 0x8700f0 */
  goto L_8700f0;
L_8700f0: /* 8700f0: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 8700f6: cmp edi, dword ptr [edx + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8700fc: jge 0x870159 */
  if ((sf == of)) goto L_870159;
L_8700fe: /* 8700fe: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 870104: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 870107: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 87010a: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870110: fcomp dword ptr [0xa1844c] */
  fpu_com(ST0, F32((uint32_t)(0xa1844cu)));
  FPOP();
/* 870116: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870118: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87011b: jp 0x870153 */
  if (pf) goto L_870153;
L_87011d: /* 87011d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87011e: call 0x6c413d */
  esp -= 4; W32(esp, 0x870123u); SPILL(); f_6c413d(); if (g_unwind) return; RELOAD();
/* 870123: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870125: je 0x870153 */
  if (zf) goto L_870153;
L_870127: /* 870127: test byte ptr [eax + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87012b: jne 0x870153 */
  if (!zf) goto L_870153;
L_87012d: /* 87012d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 870130: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870136: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 870137: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 87013a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87013b: call 0x6c6eb0 */
  esp -= 4; W32(esp, 0x870140u); SPILL(); f_6c6eb0(); if (g_unwind) return; RELOAD();
/* 870140: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 870143: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 870146: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870148: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87014b: jne 0x870153 */
  if (!zf) goto L_870153;
L_87014d: /* 87014d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 870150: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_870153: /* 870153: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 870156: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 870157: jmp 0x8700f0 */
  goto L_8700f0;
L_870159: /* 870159: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 87015c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87015e: mov eax, ecx */
  eax = ecx;
/* 870160: je 0x87025e */
  if (zf) goto L_87025e;
L_870166: /* 870166: mov esi, ecx */
  esi = ecx;
L_870168: /* 870168: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87016a: je 0x87017f */
  if (zf) goto L_87017f;
L_87016c: /* 87016c: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87016f: mov esi, eax */
  esi = eax;
/* 870171: je 0x87025c */
  if (zf) goto L_87025c;
L_870177: /* 870177: mov eax, dword ptr [eax + 0x37c] */
  eax = R32((uint32_t)(eax + 0x37cu));
/* 87017d: jmp 0x870168 */
  goto L_870168;
L_87017f: /* 87017f: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 870185: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870187: je 0x87025c */
  if (zf) goto L_87025c;
L_87018d: /* 87018d: mov dword ptr [eax + 0x438], ecx */
  W32((uint32_t)(eax + 0x438u), ecx);
/* 870193: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870199: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 87019f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8701a2: fstp dword ptr [edx + 0x43c] */
  WF32((uint32_t)(edx + 0x43cu), ST0); FPOP();
/* 8701a8: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 8701ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8701af: call 0x6c32fb */
  esp -= 4; W32(esp, 0x8701b4u); SPILL(); f_6c32fb(); if (g_unwind) return; RELOAD();
/* 8701b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8701b6: jne 0x8701ce */
  if (!zf) goto L_8701ce;
L_8701b8: /* 8701b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8701bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8701be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8701c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8701c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8701c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8701c8: mov esp, ebp */
  esp = ebp;
/* 8701ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8701cb: ret 0xc */
  esp += 16; SPILL(); return;
L_8701ce: /* 8701ce: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 8701d4: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8701d6: je 0x8701f9 */
  if (zf) goto L_8701f9;
L_8701d8: /* 8701d8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8701db: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 8701e1: mov ecx, dword ptr [ebx + 0x3c4] */
  ecx = R32((uint32_t)(ebx + 0x3c4u));
/* 8701e7: mov dword ptr [ecx + 0x37c], eax */
  W32((uint32_t)(ecx + 0x37cu), eax);
/* 8701ed: mov dword ptr [eax + 0x37c], 0 */
  W32((uint32_t)(eax + 0x37cu), 0x0u);
/* 8701f7: jmp 0x8701b8 */
  goto L_8701b8;
L_8701f9: /* 8701f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8701fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_870200: /* 870200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870202: je 0x8701b8 */
  if (zf) goto L_8701b8;
L_870204: /* 870204: mov ecx, dword ptr [eax + 0x37c] */
  ecx = R32((uint32_t)(eax + 0x37cu));
/* 87020a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87020c: jne 0x870225 */
  if (!zf) goto L_870225;
L_87020e: /* 87020e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 870211: mov dword ptr [eax + 0x37c], ecx */
  W32((uint32_t)(eax + 0x37cu), ecx);
/* 870217: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 87021d: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 870223: jmp 0x8701b8 */
  goto L_8701b8;
L_870225: /* 870225: mov eax, ecx */
  eax = ecx;
/* 870227: jmp 0x870200 */
  goto L_870200;
L_870259: /* 870259: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_87025c: /* 87025c: mov eax, ecx */
  eax = ecx;
L_87025e: /* 87025e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870262: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870263: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87026a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87026b: mov esp, ebp */
  esp = ebp;
/* 87026d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87026e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8700e5(void) {
  LOAD_REGS();
L_8700e5: /* 8700e5: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8700ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8700f0: /* 8700f0: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 8700f6: cmp edi, dword ptr [edx + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8700fc: jge 0x870159 */
  if ((sf == of)) goto L_870159;
L_8700fe: /* 8700fe: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 870104: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 870107: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 87010a: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870110: fcomp dword ptr [0xa1844c] */
  fpu_com(ST0, F32((uint32_t)(0xa1844cu)));
  FPOP();
/* 870116: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870118: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87011b: jp 0x870153 */
  if (pf) goto L_870153;
L_87011d: /* 87011d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87011e: call 0x6c413d */
  esp -= 4; W32(esp, 0x870123u); SPILL(); f_6c413d(); if (g_unwind) return; RELOAD();
/* 870123: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870125: je 0x870153 */
  if (zf) goto L_870153;
L_870127: /* 870127: test byte ptr [eax + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87012b: jne 0x870153 */
  if (!zf) goto L_870153;
L_87012d: /* 87012d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 870130: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870136: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 870137: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 87013a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87013b: call 0x6c6eb0 */
  esp -= 4; W32(esp, 0x870140u); SPILL(); f_6c6eb0(); if (g_unwind) return; RELOAD();
/* 870140: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 870143: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 870146: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870148: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87014b: jne 0x870153 */
  if (!zf) goto L_870153;
L_87014d: /* 87014d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 870150: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_870153: /* 870153: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 870156: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 870157: jmp 0x8700f0 */
  goto L_8700f0;
L_870159: /* 870159: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 87015c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87015e: mov eax, ecx */
  eax = ecx;
/* 870160: je 0x87025e */
  if (zf) goto L_87025e;
L_870166: /* 870166: mov esi, ecx */
  esi = ecx;
L_870168: /* 870168: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87016a: je 0x87017f */
  if (zf) goto L_87017f;
L_87016c: /* 87016c: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87016f: mov esi, eax */
  esi = eax;
/* 870171: je 0x87025c */
  if (zf) goto L_87025c;
L_870177: /* 870177: mov eax, dword ptr [eax + 0x37c] */
  eax = R32((uint32_t)(eax + 0x37cu));
/* 87017d: jmp 0x870168 */
  goto L_870168;
L_87017f: /* 87017f: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 870185: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870187: je 0x87025c */
  if (zf) goto L_87025c;
L_87018d: /* 87018d: mov dword ptr [eax + 0x438], ecx */
  W32((uint32_t)(eax + 0x438u), ecx);
/* 870193: fild dword ptr [ecx + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x368u)); FPUSH(v); }
/* 870199: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 87019f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8701a2: fstp dword ptr [edx + 0x43c] */
  WF32((uint32_t)(edx + 0x43cu), ST0); FPOP();
/* 8701a8: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 8701ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8701af: call 0x6c32fb */
  esp -= 4; W32(esp, 0x8701b4u); SPILL(); f_6c32fb(); if (g_unwind) return; RELOAD();
/* 8701b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8701b6: jne 0x8701ce */
  if (!zf) goto L_8701ce;
L_8701b8: /* 8701b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8701bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8701be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8701c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8701c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8701c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8701c8: mov esp, ebp */
  esp = ebp;
/* 8701ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8701cb: ret 0xc */
  esp += 16; SPILL(); return;
L_8701ce: /* 8701ce: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 8701d4: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8701d6: je 0x8701f9 */
  if (zf) goto L_8701f9;
L_8701d8: /* 8701d8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8701db: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 8701e1: mov ecx, dword ptr [ebx + 0x3c4] */
  ecx = R32((uint32_t)(ebx + 0x3c4u));
/* 8701e7: mov dword ptr [ecx + 0x37c], eax */
  W32((uint32_t)(ecx + 0x37cu), eax);
/* 8701ed: mov dword ptr [eax + 0x37c], 0 */
  W32((uint32_t)(eax + 0x37cu), 0x0u);
/* 8701f7: jmp 0x8701b8 */
  goto L_8701b8;
L_8701f9: /* 8701f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8701fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_870200: /* 870200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870202: je 0x8701b8 */
  if (zf) goto L_8701b8;
L_870204: /* 870204: mov ecx, dword ptr [eax + 0x37c] */
  ecx = R32((uint32_t)(eax + 0x37cu));
/* 87020a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87020c: jne 0x870225 */
  if (!zf) goto L_870225;
L_87020e: /* 87020e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 870211: mov dword ptr [eax + 0x37c], ecx */
  W32((uint32_t)(eax + 0x37cu), ecx);
/* 870217: mov edx, dword ptr [ebx + 0x3c4] */
  edx = R32((uint32_t)(ebx + 0x3c4u));
/* 87021d: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 870223: jmp 0x8701b8 */
  goto L_8701b8;
L_870225: /* 870225: mov eax, ecx */
  eax = ecx;
/* 870227: jmp 0x870200 */
  goto L_870200;
L_87025c: /* 87025c: mov eax, ecx */
  eax = ecx;
L_87025e: /* 87025e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870262: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870263: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87026a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87026b: mov esp, ebp */
  esp = ebp;
/* 87026d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87026e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_870229(void) {
  LOAD_REGS();
L_870229: /* 870229: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87022c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 870231: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 870234: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 870235: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 870238: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87023du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87023d(); return;
}

void f_87023d(void) {
  LOAD_REGS();
L_87023d: /* 87023d: push 0xa1841c */
  { uint32_t v = 0xa1841cu; esp -= 4; W32(esp, v); }
/* 870242: push 0xae5878 */
  { uint32_t v = 0xae5878u; esp -= 4; W32(esp, v); }
/* 870247: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87024du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87024d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870252: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870254: call 0x99caf8 */
  esp -= 4; W32(esp, 0x870259u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 870259: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 87025c: mov eax, ecx */
  eax = ecx;
/* 87025e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870262: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870263: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87026a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87026b: mov esp, ebp */
  esp = ebp;
/* 87026d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87026e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_870300(void) {
  LOAD_REGS();
L_870300: /* 870300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 870301: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 870305: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870307: je 0x87031e */
  if (zf) goto L_87031e;
L_870309: /* 870309: push 0xb72fb8 */
  { uint32_t v = 0xb72fb8u; esp -= 4; W32(esp, v); }
/* 87030e: mov ecx, esi */
  ecx = esi;
/* 870310: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x870316u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 870316: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870318: je 0x87031e */
  if (zf) goto L_87031e;
L_87031a: /* 87031a: mov eax, esi */
  eax = esi;
/* 87031c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87031d: ret  */
  esp += 4; SPILL(); return;
L_87031e: /* 87031e: xor eax, eax */
  eax = 0;
/* 870320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870321: ret  */
  esp += 4; SPILL(); return;
}

void f_870340(void) {
  LOAD_REGS();
L_870340: /* 870340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 870341: mov ebp, esp */
  ebp = esp;
/* 870343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 870345: push 0x9d46d0 */
  { uint32_t v = 0x9d46d0u; esp -= 4; W32(esp, v); }
/* 87034a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 870350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 870358: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87035b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87035c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 87035f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 870360: mov esi, dword ptr [0xcfa3dc] */
  esi = R32((uint32_t)(0xcfa3dcu));
/* 870366: xor eax, eax */
  eax = 0;
/* 870368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 870369: mov edi, ecx */
  edi = ecx;
/* 87036b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 87036e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 870371: mov eax, dword ptr [edi + 0x2d4] */
  eax = R32((uint32_t)(edi + 0x2d4u));
/* 870377: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87037b: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 87037e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 870381: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x870383u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870383: mov ecx, dword ptr [edi + 0x2d8] */
  ecx = R32((uint32_t)(edi + 0x2d8u));
/* 870389: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87038c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87038d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 870390: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x870392u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870392: mov edx, dword ptr [edi + 0x41c] */
  edx = R32((uint32_t)(edi + 0x41cu));
/* 870398: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87039b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87039c: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 87039f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8703a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8703a1: fld dword ptr [0xa10ca8] */
  { double v = F32((uint32_t)(0xa10ca8u)); FPUSH(v); }
/* 8703a7: fdiv dword ptr [edi + 0x414] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x414u)));
/* 8703ad: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8703b0: mov al, byte ptr [edi + 0x390] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x390u))) & 0xffu);
/* 8703b6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8703b9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8703bb: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8703be: jns 0x8703de */
  if (!sf) goto L_8703de;
L_8703c0: /* 8703c0: mov eax, dword ptr [edi + 0x45c] */
  eax = R32((uint32_t)(edi + 0x45cu));
/* 8703c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8703c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8703c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8703c9: mov ecx, dword ptr [edi + 0x460] */
  ecx = R32((uint32_t)(edi + 0x460u));
/* 8703cf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8703d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8703d3: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8703d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8703d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8703d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8703db: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_8703de: /* 8703de: mov esi, dword ptr [edi + 0x33c] */
  esi = R32((uint32_t)(edi + 0x33cu));
/* 8703e4: xor eax, eax */
  eax = 0;
/* 8703e6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8703e8: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8703eb: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8703ee: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 8703f5: je 0x870413 */
  if (zf) goto L_870413;
L_8703f7: /* 8703f7: mov edx, dword ptr [0xb7e504] */
  edx = R32((uint32_t)(0xb7e504u));
/* 8703fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8703fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8703ff: mov ecx, esi */
  ecx = esi;
/* 870401: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x870407u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 870407: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 870409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87040b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87040d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87040e: mov ecx, esi */
  ecx = esi;
/* 870410: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x870413u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_870413: /* 870413: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_870416: /* 870416: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870418: je 0x87048f */
  if (zf) goto L_87048f;
L_87041a: /* 87041a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 87041c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87041d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87041e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87041f: call dword ptr [ebp + 8] */
  { uint32_t t = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, 0x870422u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870422: fcom dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
/* 870424: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870427: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 87042a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87042c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87042f: jne 0x870438 */
  if (!zf) goto L_870438;
L_870431: /* 870431: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 870433: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 870436: jmp 0x87043a */
  goto L_87043a;
L_870438: /* 870438: fstp st(0) */
  STI(0) = ST0; FPOP();
L_87043a: /* 87043a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87043c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 870442: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870444: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870447: jne 0x87046f */
  if (!zf) goto L_87046f;
L_870449: /* 870449: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 87044c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 87044f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 870452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 870453: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_870455: /* 870455: mov ecx, edi */
  ecx = edi;
/* 870457: call 0x6c5dbc */
  esp -= 4; W32(esp, 0x87045cu); SPILL(); f_6c5dbc(); if (g_unwind) return; RELOAD();
/* 87045c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87045f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870466: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870468: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870469: mov esp, ebp */
  esp = ebp;
/* 87046b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87046c: ret 0x14 */
  esp += 24; SPILL(); return;
L_87046f: /* 87046f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 870472: mov ecx, eax */
  ecx = eax;
/* 870474: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870475: cmp ecx, 0xfa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87047b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 87047e: jle 0x8704a4 */
  if ((zf || sf != of)) goto L_8704a4;
L_870480: /* 870480: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 870482: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 870488: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87048a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87048d: jne 0x87049d */
  if (!zf) goto L_87049d;
L_87048f: /* 87048f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 870492: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 870495: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 870498: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87049a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87049b: jmp 0x870455 */
  goto L_870455;
L_87049d: /* 87049d: mov dword ptr [ebp - 0x24], 0xc8 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xc8u);
L_8704a4: /* 8704a4: test byte ptr [ebx + 0x390], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x390u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8704ab: jne 0x8706ba */
  if (!zf) goto L_8706ba;
L_8704b1: /* 8704b1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8704b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8704b4: mov ecx, edi */
  ecx = edi;
/* 8704b6: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x8704bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8704bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8704be: jne 0x8706ba */
  if (!zf) goto L_8706ba;
L_8704c4: /* 8704c4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8704c7: jmp 0x8704d0 */
  goto L_8704d0;
L_8704d0: /* 8704d0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8704d3: cmp eax, dword ptr [ebx + 0x340] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8704d9: jge 0x8706ba */
  if ((sf == of)) goto L_8706ba;
L_8704df: /* 8704df: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 8704e5: mov edx, eax */
  edx = eax;
/* 8704e7: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 8704ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8704ec: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_8704f2: /* 8704f2: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8704f5: cmp dword ptr [edi + 0x34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8704f8: jl 0x8706a8 */
  if ((sf != of)) goto L_8706a8;
L_8704fe: /* 8704fe: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 870501: cmp dword ptr [edi + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870504: jl 0x8706a8 */
  if ((sf != of)) goto L_8706a8;
L_87050a: /* 87050a: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 87050d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 870510: mov edx, eax */
  edx = eax;
/* 870512: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 870514: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870516: jne 0x8706a8 */
  if (!zf) goto L_8706a8;
L_87051c: /* 87051c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 87051f: cmp dword ptr [edi + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870522: jle 0x87052e */
  if ((zf || sf != of)) goto L_87052e;
L_870524: /* 870524: test byte ptr [edi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870528: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_87052e: /* 87052e: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 870531: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870533: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_870539: /* 870539: test byte ptr [edi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87053d: je 0x87055d */
  if (zf) goto L_87055d;
L_87053f: /* 87053f: test byte ptr [esi + 0x392], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x392u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870546: je 0x87055d */
  if (zf) goto L_87055d;
L_870548: /* 870548: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 87054b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87054c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87054d: mov ecx, esi */
  ecx = esi;
/* 87054f: call 0x6c7fef */
  esp -= 4; W32(esp, 0x870554u); SPILL(); f_6c7fef(); if (g_unwind) return; RELOAD();
/* 870554: mov ecx, eax */
  ecx = eax;
/* 870556: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 870559: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87055b: jmp 0x87059a */
  goto L_87059a;
L_87055d: /* 87055d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 870560: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x870566u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 870566: mov ecx, eax */
  ecx = eax;
/* 870568: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x87056eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 87056e: fild dword ptr [edi + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 870571: fcomp dword ptr [eax + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x2d8u)));
  FPOP();
/* 870577: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870579: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87057c: jne 0x870589 */
  if (!zf) goto L_870589;
L_87057e: /* 87057e: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 870584: add eax, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 870587: jmp 0x87059a */
  goto L_87059a;
L_870589: /* 870589: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 87058c: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 87058f: fiadd dword ptr [esi + 0x380] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esi + 0x380u)));
/* 870595: call 0x99c958 */
  esp -= 4; W32(esp, 0x87059au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
L_87059a: /* 87059a: mov ecx, dword ptr [ebx + 0x368] */
  ecx = R32((uint32_t)(ebx + 0x368u));
/* 8705a0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8705a2: cmp dword ptr [esi + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8705a8: jle 0x8706a8 */
  if ((zf || sf != of)) goto L_8706a8;
L_8705ae: /* 8705ae: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 8705b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8705b6: mov dword ptr [esi + 0x37c], ebx */
  W32((uint32_t)(esi + 0x37cu), ebx);
/* 8705bc: je 0x870667 */
  if (zf) goto L_870667;
L_8705c2: /* 8705c2: mov edx, dword ptr [esi + 0x374] */
  edx = R32((uint32_t)(esi + 0x374u));
/* 8705c8: mov dword ptr [eax + 0x374], edx */
  W32((uint32_t)(eax + 0x374u), edx);
/* 8705ce: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 8705d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8705d6: je 0x8705e4 */
  if (zf) goto L_8705e4;
L_8705d8: /* 8705d8: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 8705de: mov dword ptr [eax + 0x378], edx */
  W32((uint32_t)(eax + 0x378u), edx);
L_8705e4: /* 8705e4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8705e7: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8705e9: jne 0x870600 */
  if (!zf) goto L_870600;
L_8705eb: /* 8705eb: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 8705f1: cmp dword ptr [eax + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8705f7: jle 0x870619 */
  if ((zf || sf != of)) goto L_870619;
L_8705f9: /* 8705f9: mov edx, eax */
  edx = eax;
/* 8705fb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8705fe: jmp 0x870619 */
  goto L_870619;
L_870600: /* 870600: mov eax, dword ptr [edx + 0x368] */
  eax = R32((uint32_t)(edx + 0x368u));
/* 870606: cmp dword ptr [esi + 0x368], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87060c: jle 0x870619 */
  if ((zf || sf != of)) goto L_870619;
L_87060e: /* 87060e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870610: jge 0x870619 */
  if ((sf == of)) goto L_870619;
L_870612: /* 870612: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 870615: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_870616: /* 870616: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_870619: /* 870619: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 87061f: cmp dword ptr [edx + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870625: mov eax, edx */
  eax = edx;
/* 870627: jl 0x87062b */
  if ((sf != of)) goto L_87062b;
L_870629: /* 870629: mov eax, ebx */
  eax = ebx;
L_87062b: /* 87062b: xor edx, edx */
  edx = 0;
/* 87062d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_870630: /* 870630: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870638: je 0x87067c */
  if (zf) goto L_87067c;
L_87063a: /* 87063a: mov edi, dword ptr [ecx + 0x368] */
  edi = R32((uint32_t)(ecx + 0x368u));
/* 870640: cmp edi, dword ptr [esi + 0x368] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x368u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870646: jge 0x87067c */
  if ((sf == of)) goto L_87067c;
L_870648: /* 870648: mov eax, edx */
  eax = edx;
/* 87064a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87064b: cmp eax, 0x1f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870650: jle 0x870678 */
  if ((zf || sf != of)) goto L_870678;
L_870652: /* 870652: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870655: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870657: xor eax, eax */
  eax = 0;
/* 870659: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870660: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870661: mov esp, ebp */
  esp = ebp;
/* 870663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 870664: ret 0x14 */
  esp += 24; SPILL(); return;
L_870667: /* 870667: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87066a: cmp ecx, dword ptr [edx + 0x368] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x368u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870670: jle 0x870612 */
  if ((zf || sf != of)) goto L_870612;
L_870672: /* 870672: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 870675: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870676: jmp 0x870616 */
  goto L_870616;
L_870678: /* 870678: mov eax, ecx */
  eax = ecx;
/* 87067a: jmp 0x870630 */
  goto L_870630;
L_87067c: /* 87067c: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870682: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870684: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_870686: /* 870686: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870688: je 0x870690 */
  if (zf) goto L_870690;
L_87068a: /* 87068a: mov dword ptr [ecx + 0x378], esi */
  W32((uint32_t)(ecx + 0x378u), esi);
L_870690: /* 870690: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870696: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 87069c: mov dword ptr [eax + 0x374], esi */
  W32((uint32_t)(eax + 0x374u), esi);
/* 8706a2: mov dword ptr [esi + 0x378], eax */
  W32((uint32_t)(esi + 0x378u), eax);
L_8706a8: /* 8706a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8706ab: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8706ae: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8706b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8706b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8706b5: jmp 0x8704d0 */
  goto L_8704d0;
L_8706ba: /* 8706ba: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8706bd: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8706c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8706c1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8706c7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8706ca: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8706d0u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8706d0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8706d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8706d6: /* 8706d6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8706d9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8706db: jge 0x8706f2 */
  if ((sf == of)) goto L_8706f2;
L_8706dd: /* 8706dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8706de: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8706e1: mov ecx, dword ptr [edx + 0x374] */
  ecx = R32((uint32_t)(edx + 0x374u));
/* 8706e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8706e9: je 0x8706d6 */
  if (zf) goto L_8706d6;
L_8706eb: /* 8706eb: mov edx, ecx */
  edx = ecx;
/* 8706ed: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8706f0: jmp 0x8706d6 */
  goto L_8706d6;
L_8706f2: /* 8706f2: mov ebx, dword ptr [ebx + 0x374] */
  ebx = R32((uint32_t)(ebx + 0x374u));
/* 8706f8: jmp 0x870416 */
  goto L_870416;
}

void f_8704c9(void) {
  LOAD_REGS();
  goto L_8704c9;
L_870416: /* 870416: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870418: je 0x87048f */
  if (zf) goto L_87048f;
L_87041a: /* 87041a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 87041c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87041d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87041e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87041f: call dword ptr [ebp + 8] */
  { uint32_t t = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, 0x870422u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870422: fcom dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
/* 870424: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870427: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 87042a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87042c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87042f: jne 0x870438 */
  if (!zf) goto L_870438;
L_870431: /* 870431: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 870433: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 870436: jmp 0x87043a */
  goto L_87043a;
L_870438: /* 870438: fstp st(0) */
  STI(0) = ST0; FPOP();
L_87043a: /* 87043a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87043c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 870442: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870444: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870447: jne 0x87046f */
  if (!zf) goto L_87046f;
L_870449: /* 870449: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 87044c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 87044f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 870452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 870453: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_870455: /* 870455: mov ecx, edi */
  ecx = edi;
/* 870457: call 0x6c5dbc */
  esp -= 4; W32(esp, 0x87045cu); SPILL(); f_6c5dbc(); if (g_unwind) return; RELOAD();
/* 87045c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87045f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870466: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870468: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870469: mov esp, ebp */
  esp = ebp;
/* 87046b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87046c: ret 0x14 */
  esp += 24; SPILL(); return;
L_87046f: /* 87046f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 870472: mov ecx, eax */
  ecx = eax;
/* 870474: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870475: cmp ecx, 0xfa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87047b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 87047e: jle 0x8704a4 */
  if ((zf || sf != of)) goto L_8704a4;
L_870480: /* 870480: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 870482: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 870488: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87048a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87048d: jne 0x87049d */
  if (!zf) goto L_87049d;
L_87048f: /* 87048f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 870492: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 870495: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 870498: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87049a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87049b: jmp 0x870455 */
  goto L_870455;
L_87049d: /* 87049d: mov dword ptr [ebp - 0x24], 0xc8 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xc8u);
L_8704a4: /* 8704a4: test byte ptr [ebx + 0x390], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x390u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8704ab: jne 0x8706ba */
  if (!zf) goto L_8706ba;
L_8704b1: /* 8704b1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8704b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8704b4: mov ecx, edi */
  ecx = edi;
/* 8704b6: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x8704bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8704bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8704be: jne 0x8706ba */
  if (!zf) goto L_8706ba;
L_8704c4: /* 8704c4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8704c7: jmp 0x8704d0 */
  goto L_8704d0;
L_8704c9: /* 8704c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8704d0: /* 8704d0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8704d3: cmp eax, dword ptr [ebx + 0x340] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8704d9: jge 0x8706ba */
  if ((sf == of)) goto L_8706ba;
L_8704df: /* 8704df: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 8704e5: mov edx, eax */
  edx = eax;
/* 8704e7: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 8704ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8704ec: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_8704f2: /* 8704f2: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8704f5: cmp dword ptr [edi + 0x34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8704f8: jl 0x8706a8 */
  if ((sf != of)) goto L_8706a8;
L_8704fe: /* 8704fe: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 870501: cmp dword ptr [edi + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870504: jl 0x8706a8 */
  if ((sf != of)) goto L_8706a8;
L_87050a: /* 87050a: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 87050d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 870510: mov edx, eax */
  edx = eax;
/* 870512: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 870514: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870516: jne 0x8706a8 */
  if (!zf) goto L_8706a8;
L_87051c: /* 87051c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 87051f: cmp dword ptr [edi + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870522: jle 0x87052e */
  if ((zf || sf != of)) goto L_87052e;
L_870524: /* 870524: test byte ptr [edi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870528: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_87052e: /* 87052e: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 870531: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870533: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_870539: /* 870539: test byte ptr [edi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87053d: je 0x87055d */
  if (zf) goto L_87055d;
L_87053f: /* 87053f: test byte ptr [esi + 0x392], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x392u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870546: je 0x87055d */
  if (zf) goto L_87055d;
L_870548: /* 870548: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 87054b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87054c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87054d: mov ecx, esi */
  ecx = esi;
/* 87054f: call 0x6c7fef */
  esp -= 4; W32(esp, 0x870554u); SPILL(); f_6c7fef(); if (g_unwind) return; RELOAD();
/* 870554: mov ecx, eax */
  ecx = eax;
/* 870556: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 870559: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87055b: jmp 0x87059a */
  goto L_87059a;
L_87055d: /* 87055d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 870560: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x870566u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 870566: mov ecx, eax */
  ecx = eax;
/* 870568: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x87056eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 87056e: fild dword ptr [edi + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 870571: fcomp dword ptr [eax + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x2d8u)));
  FPOP();
/* 870577: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870579: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87057c: jne 0x870589 */
  if (!zf) goto L_870589;
L_87057e: /* 87057e: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 870584: add eax, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 870587: jmp 0x87059a */
  goto L_87059a;
L_870589: /* 870589: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 87058c: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 87058f: fiadd dword ptr [esi + 0x380] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esi + 0x380u)));
/* 870595: call 0x99c958 */
  esp -= 4; W32(esp, 0x87059au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
L_87059a: /* 87059a: mov ecx, dword ptr [ebx + 0x368] */
  ecx = R32((uint32_t)(ebx + 0x368u));
/* 8705a0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8705a2: cmp dword ptr [esi + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8705a8: jle 0x8706a8 */
  if ((zf || sf != of)) goto L_8706a8;
L_8705ae: /* 8705ae: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 8705b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8705b6: mov dword ptr [esi + 0x37c], ebx */
  W32((uint32_t)(esi + 0x37cu), ebx);
/* 8705bc: je 0x870667 */
  if (zf) goto L_870667;
L_8705c2: /* 8705c2: mov edx, dword ptr [esi + 0x374] */
  edx = R32((uint32_t)(esi + 0x374u));
/* 8705c8: mov dword ptr [eax + 0x374], edx */
  W32((uint32_t)(eax + 0x374u), edx);
/* 8705ce: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 8705d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8705d6: je 0x8705e4 */
  if (zf) goto L_8705e4;
L_8705d8: /* 8705d8: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 8705de: mov dword ptr [eax + 0x378], edx */
  W32((uint32_t)(eax + 0x378u), edx);
L_8705e4: /* 8705e4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8705e7: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8705e9: jne 0x870600 */
  if (!zf) goto L_870600;
L_8705eb: /* 8705eb: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 8705f1: cmp dword ptr [eax + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8705f7: jle 0x870619 */
  if ((zf || sf != of)) goto L_870619;
L_8705f9: /* 8705f9: mov edx, eax */
  edx = eax;
/* 8705fb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8705fe: jmp 0x870619 */
  goto L_870619;
L_870600: /* 870600: mov eax, dword ptr [edx + 0x368] */
  eax = R32((uint32_t)(edx + 0x368u));
/* 870606: cmp dword ptr [esi + 0x368], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87060c: jle 0x870619 */
  if ((zf || sf != of)) goto L_870619;
L_87060e: /* 87060e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870610: jge 0x870619 */
  if ((sf == of)) goto L_870619;
L_870612: /* 870612: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 870615: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_870616: /* 870616: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_870619: /* 870619: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 87061f: cmp dword ptr [edx + 0x368], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x368u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870625: mov eax, edx */
  eax = edx;
/* 870627: jl 0x87062b */
  if ((sf != of)) goto L_87062b;
L_870629: /* 870629: mov eax, ebx */
  eax = ebx;
L_87062b: /* 87062b: xor edx, edx */
  edx = 0;
/* 87062d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_870630: /* 870630: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870638: je 0x87067c */
  if (zf) goto L_87067c;
L_87063a: /* 87063a: mov edi, dword ptr [ecx + 0x368] */
  edi = R32((uint32_t)(ecx + 0x368u));
/* 870640: cmp edi, dword ptr [esi + 0x368] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x368u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870646: jge 0x87067c */
  if ((sf == of)) goto L_87067c;
L_870648: /* 870648: mov eax, edx */
  eax = edx;
/* 87064a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87064b: cmp eax, 0x1f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870650: jle 0x870678 */
  if ((zf || sf != of)) goto L_870678;
L_870652: /* 870652: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870655: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870657: xor eax, eax */
  eax = 0;
/* 870659: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870660: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870661: mov esp, ebp */
  esp = ebp;
/* 870663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 870664: ret 0x14 */
  esp += 24; SPILL(); return;
L_870667: /* 870667: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87066a: cmp ecx, dword ptr [edx + 0x368] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x368u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870670: jle 0x870612 */
  if ((zf || sf != of)) goto L_870612;
L_870672: /* 870672: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 870675: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870676: jmp 0x870616 */
  goto L_870616;
L_870678: /* 870678: mov eax, ecx */
  eax = ecx;
/* 87067a: jmp 0x870630 */
  goto L_870630;
L_87067c: /* 87067c: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870682: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870684: je 0x8706a8 */
  if (zf) goto L_8706a8;
L_870686: /* 870686: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870688: je 0x870690 */
  if (zf) goto L_870690;
L_87068a: /* 87068a: mov dword ptr [ecx + 0x378], esi */
  W32((uint32_t)(ecx + 0x378u), esi);
L_870690: /* 870690: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 870696: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 87069c: mov dword ptr [eax + 0x374], esi */
  W32((uint32_t)(eax + 0x374u), esi);
/* 8706a2: mov dword ptr [esi + 0x378], eax */
  W32((uint32_t)(esi + 0x378u), eax);
L_8706a8: /* 8706a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8706ab: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8706ae: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8706b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8706b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8706b5: jmp 0x8704d0 */
  goto L_8704d0;
L_8706ba: /* 8706ba: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8706bd: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8706c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8706c1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8706c7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8706ca: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8706d0u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8706d0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8706d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8706d6: /* 8706d6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8706d9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8706db: jge 0x8706f2 */
  if ((sf == of)) goto L_8706f2;
L_8706dd: /* 8706dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8706de: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8706e1: mov ecx, dword ptr [edx + 0x374] */
  ecx = R32((uint32_t)(edx + 0x374u));
/* 8706e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8706e9: je 0x8706d6 */
  if (zf) goto L_8706d6;
L_8706eb: /* 8706eb: mov edx, ecx */
  edx = ecx;
/* 8706ed: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8706f0: jmp 0x8706d6 */
  goto L_8706d6;
L_8706f2: /* 8706f2: mov ebx, dword ptr [ebx + 0x374] */
  ebx = R32((uint32_t)(ebx + 0x374u));
/* 8706f8: jmp 0x870416 */
  goto L_870416;
}

void f_8706fd(void) {
  LOAD_REGS();
L_8706fd: /* 8706fd: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 870700: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 870705: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 870708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870709: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 87070c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x870711u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_870711(); return;
}

void f_870711(void) {
  LOAD_REGS();
L_870711: /* 870711: push 0xa18450 */
  { uint32_t v = 0xa18450u; esp -= 4; W32(esp, v); }
/* 870716: push 0xae5870 */
  { uint32_t v = 0xae5870u; esp -= 4; W32(esp, v); }
/* 87071b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x870721u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 870721: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870724: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870726: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870728: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87072du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87072d: guest_badaddr(0x87072d); return;
}

void f_870830(void) {
  LOAD_REGS();
L_870830: /* 870830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 870831: mov ebp, esp */
  ebp = esp;
/* 870833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 870835: push 0x9d46e0 */
  { uint32_t v = 0x9d46e0u; esp -= 4; W32(esp, v); }
/* 87083a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 870840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 870848: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87084b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87084c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87084d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 870850: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 870851: xor ebx, ebx */
  ebx = 0;
/* 870853: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870855: mov edi, ecx */
  edi = ecx;
/* 870857: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87085a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 87085d: mov dword ptr [edi + 0x438], esi */
  W32((uint32_t)(edi + 0x438u), esi);
/* 870863: je 0x870b38 */
  if (zf) goto L_870b38;
L_870869: /* 870869: fild dword ptr [esi + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x368u)); FPUSH(v); }
/* 87086f: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 870872: fstp dword ptr [edi + 0x43c] */
  WF32((uint32_t)(edi + 0x43cu), ST0); FPOP();
/* 870878: mov dword ptr [esi + 0x374], ebx */
  W32((uint32_t)(esi + 0x374u), ebx);
/* 87087e: mov edi, edi */
  edi = edi;
L_870880: /* 870880: mov eax, dword ptr [esi + 0x37c] */
  eax = R32((uint32_t)(esi + 0x37cu));
/* 870886: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870888: je 0x870898 */
  if (zf) goto L_870898;
L_87088a: /* 87088a: mov dword ptr [eax + 0x374], esi */
  W32((uint32_t)(eax + 0x374u), esi);
/* 870890: mov esi, dword ptr [esi + 0x37c] */
  esi = R32((uint32_t)(esi + 0x37cu));
/* 870896: jmp 0x870880 */
  goto L_870880;
L_870898: /* 870898: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 87089e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8708a0: je 0x870a5c */
  if (zf) goto L_870a5c;
L_8708a6: /* 8708a6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8708a9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8708af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8708b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8708b4: jne 0x870a5c */
  if (!zf) goto L_870a5c;
L_8708ba: /* 8708ba: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 8708c0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8708c2: je 0x870a41 */
  if (zf) goto L_870a41;
L_8708c8: /* 8708c8: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 8708ce: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8708d4: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 8708da: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 8708e0: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 8708e6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8708e9: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 8708ef: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8708f2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8708f5: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8708f8: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8708feu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8708fe: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 870901: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 870904: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 870907: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 87090d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 870910: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 870916: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 87091c: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 870921: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 870927: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 87092a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 870930: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 870932: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 870935: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 870938: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87093b: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x870941u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 870941: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 870944: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 870947: fcomp dword ptr [0xa184c8] */
  fpu_com(ST0, F32((uint32_t)(0xa184c8u)));
  FPOP();
/* 87094d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87094f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870952: jp 0x870a41 */
  if (pf) goto L_870a41;
L_870958: /* 870958: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87095b: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 87095e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870960: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870963: jp 0x870a41 */
  if (pf) goto L_870a41;
L_870969: /* 870969: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 87096f: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 870975: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 870977: jne 0x8709ac */
  if (!zf) goto L_8709ac;
L_870979: /* 870979: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 87097f: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870985: fsub dword ptr [ecx + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xd4u)));
/* 87098b: fcomp dword ptr [0xa07fe4] */
  fpu_com(ST0, F32((uint32_t)(0xa07fe4u)));
  FPOP();
/* 870991: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870993: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870996: jnp 0x8709ac */
  if (!pf) goto L_8709ac;
L_870998: /* 870998: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 87099b: fcomp dword ptr [0xa184c4] */
  fpu_com(ST0, F32((uint32_t)(0xa184c4u)));
  FPOP();
/* 8709a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8709a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8709a6: jne 0x870a41 */
  if (!zf) goto L_870a41;
L_8709ac: /* 8709ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8709ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8709b2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8709b5: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x8709bau); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 8709ba: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8709c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8709c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8709c5: mov eax, esp */
  eax = esp;
/* 8709c7: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8709ce: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8709d1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8709d3: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8709da: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8709dd: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8709e0: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8709e7: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8709ea: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8709ed: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 8709f3: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 8709f8: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8709fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8709fe: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 870a04: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 870a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870a0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 870a0b: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 870a0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870a0f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x870a15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870a15: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 870a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870a1a: jne 0x870a3f */
  if (!zf) goto L_870a3f;
L_870a1c: /* 870a1c: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870a22: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 870a28: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 870a2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 870a2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 870a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870a2f: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x870a35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870a35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870a37: je 0x870a3f */
  if (zf) goto L_870a3f;
L_870a39: /* 870a39: mov esi, dword ptr [esi + 0x374] */
  esi = R32((uint32_t)(esi + 0x374u));
L_870a3f: /* 870a3f: xor ebx, ebx */
  ebx = 0;
L_870a41: /* 870a41: xor eax, eax */
  eax = 0;
L_870a43: /* 870a43: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 870a46: jge 0x870a74 */
  if ((sf == of)) goto L_870a74;
L_870a48: /* 870a48: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870a4a: je 0x870a6a */
  if (zf) goto L_870a6a;
L_870a4c: /* 870a4c: mov dword ptr [edi + eax*4 + 0x3e8], esi */
  W32((uint32_t)(edi + eax*4 + 0x3e8u), esi);
/* 870a53: mov esi, dword ptr [esi + 0x374] */
  esi = R32((uint32_t)(esi + 0x374u));
/* 870a59: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870a5a: jmp 0x870a43 */
  goto L_870a43;
L_870a5c: /* 870a5c: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 870a62: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870a64: je 0x870a41 */
  if (zf) goto L_870a41;
L_870a66: /* 870a66: mov esi, eax */
  esi = eax;
/* 870a68: jmp 0x870a41 */
  goto L_870a41;
L_870a6a: /* 870a6a: mov dword ptr [edi + eax*4 + 0x3e8], ebx */
  W32((uint32_t)(edi + eax*4 + 0x3e8u), ebx);
/* 870a71: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 870a72: jmp 0x870a43 */
  goto L_870a43;
L_870a74: /* 870a74: cmp dword ptr [edi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870a7a: je 0x870b38 */
  if (zf) goto L_870b38;
L_870a80: /* 870a80: cmp dword ptr [edi + 0x3ec], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3ecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870a86: je 0x870b38 */
  if (zf) goto L_870b38;
L_870a8c: /* 870a8c: mov ebx, dword ptr [edi + 0x3e8] */
  ebx = R32((uint32_t)(edi + 0x3e8u));
/* 870a92: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870a94: je 0x870b28 */
  if (zf) goto L_870b28;
L_870a9a: /* 870a9a: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 870a9f: mov ecx, ebx */
  ecx = ebx;
/* 870aa1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x870aa7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 870aa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870aa9: je 0x870b28 */
  if (zf) goto L_870b28;
L_870aaf: /* 870aaf: mov esi, dword ptr [edi + 0x3ec] */
  esi = R32((uint32_t)(edi + 0x3ecu));
/* 870ab5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870ab7: je 0x870b28 */
  if (zf) goto L_870b28;
L_870ab9: /* 870ab9: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 870abe: mov ecx, esi */
  ecx = esi;
/* 870ac0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x870ac6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 870ac6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870ac8: je 0x870b28 */
  if (zf) goto L_870b28;
L_870aca: /* 870aca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 870acb: mov ecx, ebx */
  ecx = ebx;
/* 870acd: call 0x6c413d */
  esp -= 4; W32(esp, 0x870ad2u); SPILL(); f_6c413d(); if (g_unwind) return; RELOAD();
/* 870ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870ad4: je 0x870b28 */
  if (zf) goto L_870b28;
L_870ad6: /* 870ad6: fild dword ptr [eax + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 870ad9: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 870adf: fstp dword ptr [eax + 0x3d8] */
  WF32((uint32_t)(eax + 0x3d8u), ST0); FPOP();
/* 870ae5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870ae8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870aef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870af0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870af1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870af2: mov esp, ebp */
  esp = ebp;
/* 870af4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 870af5: ret 0xc */
  esp += 16; SPILL(); return;
L_870b28: /* 870b28: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870b2e: mov dword ptr [ecx + 0x3d8], 0 */
  W32((uint32_t)(ecx + 0x3d8u), 0x0u);
L_870b38: /* 870b38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870b3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870b3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870b3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870b45: mov esp, ebp */
  esp = ebp;
/* 870b47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 870b48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_870af8(void) {
  LOAD_REGS();
L_870af8: /* 870af8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 870afb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 870b00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 870b03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870b04: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 870b07: call 0x99caf8 */
  esp -= 4; W32(esp, 0x870b0cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_870b0c(); return;
}

void f_870b0c(void) {
  LOAD_REGS();
L_870b0c: /* 870b0c: push 0xa18484 */
  { uint32_t v = 0xa18484u; esp -= 4; W32(esp, v); }
/* 870b11: push 0xae5880 */
  { uint32_t v = 0xae5880u; esp -= 4; W32(esp, v); }
/* 870b16: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x870b1cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 870b1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870b1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870b21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870b23: call 0x99caf8 */
  esp -= 4; W32(esp, 0x870b28u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 870b28: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870b2e: mov dword ptr [ecx + 0x3d8], 0 */
  W32((uint32_t)(ecx + 0x3d8u), 0x0u);
/* 870b38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 870b3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 870b3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 870b3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 870b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 870b45: mov esp, ebp */
  esp = ebp;
/* 870b47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 870b48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_870c20(void) {
  LOAD_REGS();
L_870c20: /* 870c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 870c21: mov ebp, esp */
  ebp = esp;
/* 870c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 870c25: push 0x9d46f0 */
  { uint32_t v = 0x9d46f0u; esp -= 4; W32(esp, v); }
/* 870c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 870c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 870c38: sub esp, 0x280 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x280u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 870c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 870c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 870c40: mov esi, ecx */
  esi = ecx;
/* 870c42: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 870c48: xor ebx, ebx */
  ebx = 0;
/* 870c4a: mov dword ptr [esi + 0x3d8], ebx */
  W32((uint32_t)(esi + 0x3d8u), ebx);
/* 870c50: cmp dword ptr [eax + 0x510], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x510u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 870c57: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 870c5a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 870c5d: je 0x87115b */
  if (zf) goto L_87115b;
L_870c63: /* 870c63: fld dword ptr [esi + 0x3cc] */
  { double v = F32((uint32_t)(esi + 0x3ccu)); FPUSH(v); }
/* 870c69: fcomp dword ptr [eax + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3acu)));
  FPOP();
/* 870c6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870c71: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870c74: jnp 0x87115b */
  if (!pf) goto L_87115b;
L_870c7a: /* 870c7a: cmp dword ptr [esi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870c80: je 0x87115b */
  if (zf) goto L_87115b;
L_870c86: /* 870c86: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 870c89: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 870c8c: xor eax, eax */
  eax = 0;
/* 870c8e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870c90: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 870c93: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870c95: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 870c9b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 870c9d: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 870ca0: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 870ca3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 870ca6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 870ca9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 870cac: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 870caf: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 870cb2: je 0x870cc9 */
  if (zf) goto L_870cc9;
L_870cb4: /* 870cb4: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 870cb9: mov ecx, edi */
  ecx = edi;
/* 870cbb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x870cc1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 870cc1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870cc3: je 0x870cc9 */
  if (zf) goto L_870cc9;
L_870cc5: /* 870cc5: mov eax, edi */
  eax = edi;
/* 870cc7: jmp 0x870ccb */
  goto L_870ccb;
L_870cc9: /* 870cc9: xor eax, eax */
  eax = 0;
L_870ccb: /* 870ccb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870ccd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 870cd0: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 870cd7: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 870cde: je 0x870fae */
  if (zf) goto L_870fae;
L_870ce4: /* 870ce4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870ce6: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 870cec: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 870cee: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 870cf1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 870cf4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 870cf7: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 870cfa: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 870cfd: jne 0x870fae */
  if (!zf) goto L_870fae;
L_870d03: /* 870d03: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 870d05: mov ecx, edi */
  ecx = edi;
/* 870d07: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x870d0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870d0d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870d0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 870d10: je 0x870f27 */
  if (zf) goto L_870f27;
L_870d16: /* 870d16: call 0x6cacdb */
  esp -= 4; W32(esp, 0x870d1bu); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 870d1b: mov edi, eax */
  edi = eax;
/* 870d1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870d20: mov ecx, edi */
  ecx = edi;
/* 870d22: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x870d27u); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 870d27: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870d29: je 0x870d6c */
  if (zf) goto L_870d6c;
L_870d2b: /* 870d2b: mov ebx, dword ptr [edi + 0x3c4] */
  ebx = R32((uint32_t)(edi + 0x3c4u));
/* 870d31: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 870d37: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 870d3a: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 870d3d: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 870d40: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 870d46: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 870d49: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 870d4f: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 870d52: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 870d55: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 870d58: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 870d5b: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x870d61u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 870d61: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 870d64: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 870d67: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 870d6a: jmp 0x870da6 */
  goto L_870da6;
L_870d6c: /* 870d6c: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 870d72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870d73: call 0x6cb4b5 */
  esp -= 4; W32(esp, 0x870d78u); SPILL(); f_6cb4b5(); if (g_unwind) return; RELOAD();
/* 870d78: mov ebx, eax */
  ebx = eax;
/* 870d7a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870d7d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870d7f: je 0x870dae */
  if (zf) goto L_870dae;
L_870d81: /* 870d81: mov ecx, ebx */
  ecx = ebx;
/* 870d83: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x870d89u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 870d89: cmp dword ptr [eax + 0x28], 0x1f7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870d90: jne 0x870dae */
  if (!zf) goto L_870dae;
L_870d92: /* 870d92: mov eax, dword ptr [ebx + 0x370] */
  eax = R32((uint32_t)(ebx + 0x370u));
/* 870d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870d99: call 0x6c4944 */
  esp -= 4; W32(esp, 0x870d9eu); SPILL(); f_6c4944(); if (g_unwind) return; RELOAD();
/* 870d9e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870da1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 870da4: mov ebx, eax */
  ebx = eax;
L_870da6: /* 870da6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870da8: jne 0x870fae */
  if (!zf) goto L_870fae;
L_870dae: /* 870dae: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 870db4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870db6: je 0x870e40 */
  if (zf) goto L_870e40;
L_870dbc: /* 870dbc: cmp dword ptr [esi + 0x3c4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870dc2: je 0x870e40 */
  if (zf) goto L_870e40;
L_870dc4: /* 870dc4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 870dca: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 870dd0: fsub dword ptr [edi + 0x3d0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x3d0u)));
/* 870dd6: fcomp dword ptr [0xa0e1c0] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1c0u)));
  FPOP();
/* 870ddc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870dde: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870de1: jp 0x870e40 */
  if (pf) goto L_870e40;
L_870de3: /* 870de3: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870de9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870deb: je 0x870e40 */
  if (zf) goto L_870e40;
L_870ded: /* 870ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870def: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870df0: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x870df5u); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 870df5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870df7: je 0x870e40 */
  if (zf) goto L_870e40;
L_870df9: /* 870df9: mov ebx, dword ptr [edi + 0x3c8] */
  ebx = R32((uint32_t)(edi + 0x3c8u));
/* 870dff: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 870e05: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 870e08: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 870e0b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 870e0e: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 870e14: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 870e17: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 870e1d: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 870e20: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 870e23: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 870e26: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 870e29: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x870e2fu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 870e2f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870e31: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 870e34: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 870e37: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 870e3a: jne 0x870fae */
  if (!zf) goto L_870fae;
L_870e40: /* 870e40: cmp byte ptr [edi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 870e44: jne 0x870ee8 */
  if (!zf) goto L_870ee8;
L_870e4a: /* 870e4a: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 870e50: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870e52: je 0x870f1e */
  if (zf) goto L_870f1e;
L_870e58: /* 870e58: cmp dword ptr [esi + 0x3c4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870e5e: je 0x870f1e */
  if (zf) goto L_870f1e;
L_870e64: /* 870e64: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 870e6a: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 870e70: fsub dword ptr [edi + 0x3d0] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x3d0u)));
/* 870e76: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 870e7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870e7e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870e81: jp 0x870f1e */
  if (pf) goto L_870f1e;
L_870e87: /* 870e87: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 870e8d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870e8f: je 0x870f1e */
  if (zf) goto L_870f1e;
L_870e95: /* 870e95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 870e97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870e98: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x870e9du); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 870e9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870e9f: je 0x870f1e */
  if (zf) goto L_870f1e;
L_870ea1: /* 870ea1: mov ebx, dword ptr [edi + 0x3c8] */
  ebx = R32((uint32_t)(edi + 0x3c8u));
/* 870ea7: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 870ead: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 870eb0: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 870eb3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 870eb6: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 870ebc: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 870ebf: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 870ec5: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 870ec8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 870ecb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 870ece: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 870ed1: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x870ed7u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 870ed7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870ed9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 870edc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 870edf: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 870ee2: jne 0x870fae */
  if (!zf) goto L_870fae;
L_870ee8: /* 870ee8: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 870eee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 870eef: call 0x6c1582 */
  esp -= 4; W32(esp, 0x870ef4u); SPILL(); f_6c1582(); if (g_unwind) return; RELOAD();
/* 870ef4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870ef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870ef9: je 0x870fae */
  if (zf) goto L_870fae;
L_870eff: /* 870eff: add eax, 0x794 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x794u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 870f04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 870f05: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 870f0b: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x870f11u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 870f11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870f13: je 0x870fae */
  if (zf) goto L_870fae;
L_870f19: /* 870f19: jmp 0x870fa7 */
  goto L_870fa7;
L_870f1e: /* 870f1e: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 870f25: jmp 0x870ee8 */
  goto L_870ee8;
L_870f27: /* 870f27: call 0x6c22ac */
  esp -= 4; W32(esp, 0x870f2cu); SPILL(); f_6c22ac(); if (g_unwind) return; RELOAD();
/* 870f2c: mov ecx, eax */
  ecx = eax;
/* 870f2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 870f31: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870f33: je 0x870fa0 */
  if (zf) goto L_870fa0;
L_870f35: /* 870f35: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 870f3b: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 870f3d: je 0x870f9b */
  if (zf) goto L_870f9b;
L_870f3f: /* 870f3f: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 870f45: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 870f4b: fsub dword ptr [ecx + 0x34c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34cu)));
/* 870f51: fcomp dword ptr [0xa0e1c0] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1c0u)));
  FPOP();
/* 870f57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 870f59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 870f5c: jp 0x870f9b */
  if (pf) goto L_870f9b;
L_870f5e: /* 870f5e: mov eax, edx */
  eax = edx;
/* 870f60: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 870f66: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 870f69: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 870f6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 870f6f: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 870f75: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 870f78: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 870f7e: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 870f81: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 870f84: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 870f87: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 870f8a: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x870f90u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 870f90: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 870f93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 870f96: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 870f99: jmp 0x870fae */
  goto L_870fae;
L_870f9b: /* 870f9b: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 870f9e: jmp 0x870fa3 */
  goto L_870fa3;
L_870fa0: /* 870fa0: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
L_870fa3: /* 870fa3: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 870fa5: jne 0x870fae */
  if (!zf) goto L_870fae;
L_870fa7: /* 870fa7: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
L_870fae: /* 870fae: mov ecx, esi */
  ecx = esi;
/* 870fb0: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x870fb5u); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 870fb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870fb7: jne 0x870fbf */
  if (!zf) goto L_870fbf;
L_870fb9: /* 870fb9: mov dword ptr [esi + 0x3c4], eax */
  W32((uint32_t)(esi + 0x3c4u), eax);
L_870fbf: /* 870fbf: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 870fc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870fc7: je 0x870ffd */
  if (zf) goto L_870ffd;
L_870fc9: /* 870fc9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 870fcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870fce: jne 0x870fd7 */
  if (!zf) goto L_870fd7;
L_870fd0: /* 870fd0: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 870fd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870fd5: jne 0x870ffd */
  if (!zf) goto L_870ffd;
L_870fd7: /* 870fd7: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 870fdd: mov edi, dword ptr [edx + 0x510] */
  edi = R32((uint32_t)(edx + 0x510u));
L_870fe3: /* 870fe3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 870fe5: je 0x871506 */
  if (zf) goto L_871506;
L_870feb: /* 870feb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 870fed: mov ecx, edi */
  ecx = edi;
/* 870fef: call dword ptr [eax + 0x1b8] */
  { uint32_t t = R32((uint32_t)(eax + 0x1b8u)); esp -= 4; W32(esp, 0x870ff5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 870ff5: mov edi, dword ptr [edi + 0x370] */
  edi = R32((uint32_t)(edi + 0x370u));
/* 870ffb: jmp 0x870fe3 */
  goto L_870fe3;
L_870ffd: /* 870ffd: xor edi, edi */
  edi = 0;
/* 870fff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 871000: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 871005: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 87100b: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x871010u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 871010: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 871016: mov ebx, dword ptr [0xcfa5d8] */
  ebx = R32((uint32_t)(0xcfa5d8u));
/* 87101c: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 871022: mov dword ptr [ebp - 0x18c], edi */
  W32((uint32_t)(ebp + 0xfffffe74u), edi);
/* 871028: mov edi, dword ptr [ecx + 0x510] */
  edi = R32((uint32_t)(ecx + 0x510u));
/* 87102e: mov edi, edi */
  edi = edi;
L_871030: /* 871030: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871032: je 0x871115 */
  if (zf) goto L_871115;
L_871038: /* 871038: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 87103a: mov ecx, edi */
  ecx = edi;
/* 87103c: call dword ptr [edx + 0x1b8] */
  { uint32_t t = R32((uint32_t)(edx + 0x1b8u)); esp -= 4; W32(esp, 0x871042u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 871042: test byte ptr [edi + 0x390], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x390u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 871049: jne 0x87110a */
  if (!zf) goto L_87110a;
L_87104f: /* 87104f: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 871055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871057: jne 0x8710af */
  if (!zf) goto L_8710af;
L_871059: /* 871059: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 87105f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 871062: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 871068: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 87106e: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 871074: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 87107a: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 871080: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 871083: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 871086: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 871089: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x87108fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 87108f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 871092: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 871095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871096: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x871098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 871098: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87109b: cmp eax, 0x15f900 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15f900u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8710a0: jge 0x8710af */
  if ((sf == of)) goto L_8710af;
L_8710a2: /* 8710a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8710a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8710a4: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8710aa: call 0x6c13c0 */
  esp -= 4; W32(esp, 0x8710afu); SPILL(); f_6c13c0(); if (g_unwind) return; RELOAD();
L_8710af: /* 8710af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8710b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8710b4: jne 0x87110a */
  if (!zf) goto L_87110a;
L_8710b6: /* 8710b6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8710b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8710bb: je 0x87110a */
  if (zf) goto L_87110a;
L_8710bd: /* 8710bd: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8710c0: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8710c3: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 8710c9: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8710cc: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 8710d2: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8710d5: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 8710db: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8710de: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8710e1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8710e4: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8710eau); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8710ea: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8710ed: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8710f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8710f1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8710f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8710f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8710f6: cmp eax, 0x15f900 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15f900u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8710fb: jge 0x87110a */
  if ((sf == of)) goto L_87110a;
L_8710fd: /* 8710fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8710fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8710ff: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 871105: call 0x6c13c0 */
  esp -= 4; W32(esp, 0x87110au); SPILL(); f_6c13c0(); if (g_unwind) return; RELOAD();
L_87110a: /* 87110a: mov edi, dword ptr [edi + 0x370] */
  edi = R32((uint32_t)(edi + 0x370u));
/* 871110: jmp 0x871030 */
  goto L_871030;
L_871115: /* 871115: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 87111b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87111d: jne 0x871272 */
  if (!zf) goto L_871272;
L_871123: /* 871123: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 871129: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87112b: jle 0x87113f */
  if ((zf || sf != of)) goto L_87113f;
L_87112d: /* 87112d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87112e: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 871134: call 0x6cb91a */
  esp -= 4; W32(esp, 0x871139u); SPILL(); f_6cb91a(); if (g_unwind) return; RELOAD();
/* 871139: mov dword ptr [esi + 0x3c4], eax */
  W32((uint32_t)(esi + 0x3c4u), eax);
L_87113f: /* 87113f: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 871145: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871147: jne 0x871174 */
  if (!zf) goto L_871174;
L_871149: /* 871149: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 87114f: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 871155: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
L_87115b: /* 87115b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 871161: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 871164: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87116b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87116c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87116d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87116e: mov esp, ebp */
  esp = ebp;
/* 871170: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871171: ret 0x1c */
  esp += 32; SPILL(); return;
L_871174: /* 871174: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 87117a: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 871180: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 871186: mov dword ptr [esi + 0x3c8], eax */
  W32((uint32_t)(esi + 0x3c8u), eax);
/* 87118c: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 871192: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 871198: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 87119b: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 8711a1: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8711a7: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 8711ad: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8711b3: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8711b6: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8711b9: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8711bc: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8711c2u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8711c2: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 8711c8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8711cb: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 8711d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8711d4: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8711da: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8711dd: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8711e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8711e5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8711e8: je 0x8711ec */
  if (zf) goto L_8711ec;
L_8711ea: /* 8711ea: fchs  */
  ST0 = -ST0;
L_8711ec: /* 8711ec: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 8711f2: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8711f8: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8711fb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8711fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8711ff: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 871202: jne 0x871209 */
  if (!zf) goto L_871209;
L_871204: /* 871204: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 871206: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_871209: /* 871209: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87120b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 87120d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87120f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 871211: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 871214: jp 0x871272 */
  if (pf) goto L_871272;
L_871216: /* 871216: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 87121c: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 871222: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 871228: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 87122e: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 871234: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 871237: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 87123d: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 871240: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 871243: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 871246: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x87124cu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 87124c: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 871252: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 871255: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 87125b: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 871261: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 871264: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 871266: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 871269: jne 0x871272 */
  if (!zf) goto L_871272;
L_87126b: /* 87126b: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
L_871272: /* 871272: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 871275: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871277: jne 0x87137f */
  if (!zf) goto L_87137f;
L_87127d: /* 87127d: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 871280: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871282: je 0x87137f */
  if (zf) goto L_87137f;
L_871288: /* 871288: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 87128e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 871290: jle 0x87115b */
  if ((zf || sf != of)) goto L_87115b;
L_871296: /* 871296: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 871299: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87129b: je 0x8712b7 */
  if (zf) goto L_8712b7;
L_87129d: /* 87129d: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8712a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8712a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8712a6: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x8712acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8712ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8712ae: je 0x8712b7 */
  if (zf) goto L_8712b7;
L_8712b0: /* 8712b0: mov eax, 1 */
  eax = 0x1u;
/* 8712b5: jmp 0x8712b9 */
  goto L_8712b9;
L_8712b7: /* 8712b7: xor eax, eax */
  eax = 0;
L_8712b9: /* 8712b9: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8712bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8712bd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8712c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8712c1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8712c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8712c7: mov edx, esp */
  edx = esp;
/* 8712c9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8712cb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8712ce: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8712d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8712d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8712d3: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 8712d9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8712dc: call 0x6c37d8 */
  esp -= 4; W32(esp, 0x8712e1u); SPILL(); f_6c37d8(); if (g_unwind) return; RELOAD();
/* 8712e1: mov edi, eax */
  edi = eax;
/* 8712e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8712e5: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8712e8: je 0x87115b */
  if (zf) goto L_87115b;
L_8712ee: /* 8712ee: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8712f0: je 0x871347 */
  if (zf) goto L_871347;
L_8712f2: /* 8712f2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8712f4: mov ecx, ebx */
  ecx = ebx;
/* 8712f6: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x8712fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8712fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8712fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8712ff: je 0x871323 */
  if (zf) goto L_871323;
L_871301: /* 871301: call 0x6cacdb */
  esp -= 4; W32(esp, 0x871306u); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 871306: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 87130c: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 871312: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871315: mov dword ptr [eax + 0x3d0], edx */
  W32((uint32_t)(eax + 0x3d0u), edx);
/* 87131b: mov dword ptr [eax + 0x3c8], edi */
  W32((uint32_t)(eax + 0x3c8u), edi);
/* 871321: jmp 0x871347 */
  goto L_871347;
L_871323: /* 871323: call 0x6c22ac */
  esp -= 4; W32(esp, 0x871328u); SPILL(); f_6c22ac(); if (g_unwind) return; RELOAD();
/* 871328: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87132b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87132d: je 0x871347 */
  if (zf) goto L_871347;
L_87132f: /* 87132f: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 871335: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 87133b: mov dword ptr [eax + 0x34c], edx */
  W32((uint32_t)(eax + 0x34cu), edx);
/* 871341: mov dword ptr [eax + 0x348], edi */
  W32((uint32_t)(eax + 0x348u), edi);
L_871347: /* 871347: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 87134d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 871350: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 871353: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 871359: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 87135c: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 871362: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 871365: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 871368: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 87136b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 87136e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x871374u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 871374: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 871377: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87137a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 87137d: jmp 0x871382 */
  goto L_871382;
L_87137f: /* 87137f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_871382: /* 871382: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 871388: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87138b: jne 0x871506 */
  if (!zf) goto L_871506;
L_871391: /* 871391: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 871397: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871398: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 87139e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8713a1: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 8713a7: mov ecx, esp */
  ecx = esp;
/* 8713a9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8713af: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 8713b5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8713bb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8713be: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8713c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8713c3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8713c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8713c9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8713cc: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8713cf: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8713d2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8713d5: mov ecx, esi */
  ecx = esi;
/* 8713d7: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x8713dcu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 8713dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8713de: je 0x8713ed */
  if (zf) goto L_8713ed;
L_8713e0: /* 8713e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8713e2: jne 0x8714a3 */
  if (!zf) goto L_8714a3;
L_8713e8: /* 8713e8: jmp 0x87115b */
  goto L_87115b;
L_8713ed: /* 8713ed: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 8713f3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8713f6: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8713fc: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 871402: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 871405: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87140a: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 87140d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 871410: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 871413: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 871415: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 871418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871419: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 87141c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 87141f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 871422: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x871424u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 871424: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 871426: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 87142c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 87142f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 871432: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 871435: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 871438: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 87143b: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 871441: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 871447: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87144c: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 871452: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 871455: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 871458: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871459: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 87145f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 871462: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 871464: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 871467: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 87146a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87146d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87146fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87146f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 871471: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 871474: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 871477: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 87147a: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 87147d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 871480: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 871483: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 871486: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 871489: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 87148c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87148e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 871491: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 871494: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 871496: fcomp qword ptr [0xa0d178] */
  fpu_com(ST0, F64((uint32_t)(0xa0d178u)));
  FPOP();
/* 87149c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87149e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8714a1: jne 0x8714b1 */
  if (!zf) goto L_8714b1;
L_8714a3: /* 8714a3: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8714a9: mov dword ptr [eax + 0x3e8], ebx */
  W32((uint32_t)(eax + 0x3e8u), ebx);
/* 8714af: jmp 0x8714c3 */
  goto L_8714c3;
L_8714b1: /* 8714b1: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8714b7: mov edx, dword ptr [esi + 0x3c4] */
  edx = R32((uint32_t)(esi + 0x3c4u));
/* 8714bd: mov dword ptr [ecx + 0x3e8], edx */
  W32((uint32_t)(ecx + 0x3e8u), edx);
L_8714c3: /* 8714c3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8714c6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8714c9: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8714cf: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8714d2: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8714d8: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8714db: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8714e1: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8714e4: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8714e7: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8714ea: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8714f0u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8714f0: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8714f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8714f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8714fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8714fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8714ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 871500: mov esp, ebp */
  esp = ebp;
/* 871502: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871503: ret 0x1c */
  esp += 32; SPILL(); return;
L_871506: /* 871506: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 871509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87150b: je 0x871514 */
  if (zf) goto L_871514;
L_87150d: /* 87150d: or dword ptr [eax + 0x390], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x390u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x390u), r);
  }
L_871514: /* 871514: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 871517: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 87151d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87151f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871521: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 871523: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 871525: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871528: mov edx, esp */
  edx = esp;
/* 87152a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 87152c: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 87152f: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 871532: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 871535: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871536: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 871539: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x87153fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87153f: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 871542: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871543: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x871549u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 871549: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 87154f: mov dword ptr [ecx + 0x368], eax */
  W32((uint32_t)(ecx + 0x368u), eax);
/* 871555: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 871558: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87155b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87155d: mov edi, 0x86f710 */
  edi = 0x86f710u;
/* 871562: jne 0x871567 */
  if (!zf) goto L_871567;
L_871564: /* 871564: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
L_871567: /* 871567: mov ecx, esi */
  ecx = esi;
/* 871569: call 0x6cc653 */
  esp -= 4; W32(esp, 0x87156eu); SPILL(); f_6cc653(); if (g_unwind) return; RELOAD();
/* 87156e: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 871571: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 871572: mov edx, dword ptr [esi + 0x3c4] */
  edx = R32((uint32_t)(esi + 0x3c4u));
/* 871578: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 87157b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87157c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87157d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87157e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87157f: mov ecx, esi */
  ecx = esi;
/* 871581: call 0x6c1325 */
  esp -= 4; W32(esp, 0x871586u); SPILL(); f_6c1325(); if (g_unwind) return; RELOAD();
/* 871586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 871588: je 0x87115b */
  if (zf) goto L_87115b;
L_87158e: /* 87158e: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 871591: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871592: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 871598: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87159a: call 0x6c9926 */
  esp -= 4; W32(esp, 0x87159fu); SPILL(); f_6c9926(); if (g_unwind) return; RELOAD();
/* 87159f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8715a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8715a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8715a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8715a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8715ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8715af: mov esp, ebp */
  esp = ebp;
/* 8715b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8715b2: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_8715b5(void) {
  LOAD_REGS();
L_8715b5: /* 8715b5: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8715b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8715bd: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8715c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8715c1: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 8715c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8715c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8715c9(); return;
}

void f_8715c9(void) {
  LOAD_REGS();
L_8715c9: /* 8715c9: push 0xa184cc */
  { uint32_t v = 0xa184ccu; esp -= 4; W32(esp, v); }
/* 8715ce: push 0xae5860 */
  { uint32_t v = 0xae5860u; esp -= 4; W32(esp, v); }
/* 8715d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8715d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8715d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8715dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8715de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8715e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8715e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8715e5: guest_badaddr(0x8715e5); return;
}

void f_871870(void) {
  LOAD_REGS();
L_871870: /* 871870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 871871: mov ebp, esp */
  ebp = esp;
/* 871873: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 871875: push 0x9d4700 */
  { uint32_t v = 0x9d4700u; esp -= 4; W32(esp, v); }
/* 87187a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 871880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871881: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 871888: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87188b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87188c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87188d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 871890: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 871893: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 87189a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87189d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87189e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87189f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8718a2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8718a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8718a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8718a9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8718ae: mov edi, ecx */
  edi = ecx;
/* 8718b0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8718b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8718b4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8718bb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8718beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8718be: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8718c1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8718c2: mov eax, edx */
  eax = edx;
/* 8718c4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8718c7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8718ca: jne 0x8718e2 */
  if (!zf) goto L_8718e2;
L_8718cc: /* 8718cc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8718cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8718d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8718d2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8718d5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8718db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8718dc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8718e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8718e2: /* 8718e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8718e5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8718e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8718e8: mov ecx, edi */
  ecx = edi;
/* 8718ea: call dword ptr [eax + 0x1b0] */
  { uint32_t t = R32((uint32_t)(eax + 0x1b0u)); esp -= 4; W32(esp, 0x8718f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8718f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8718f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8718f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8718f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8718fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8718fd: mov esp, ebp */
  esp = ebp;
/* 8718ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871900: ret 8 */
  esp += 12; SPILL(); return;
}

void f_871903(void) {
  LOAD_REGS();
L_871903: /* 871903: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 871906: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87190b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 87190e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87190f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 871912: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871917u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_871917(); return;
}

void f_871917(void) {
  LOAD_REGS();
L_871917: /* 871917: push 0xa1850c */
  { uint32_t v = 0xa1850cu; esp -= 4; W32(esp, v); }
/* 87191c: push 0xae58cc */
  { uint32_t v = 0xae58ccu; esp -= 4; W32(esp, v); }
/* 871921: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x871927u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 871927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87192a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87192c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87192e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871933u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_871933: guest_badaddr(0x871933); return;
}

void f_871980(void) {
  LOAD_REGS();
L_871980: /* 871980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 871981: mov ebp, esp */
  ebp = esp;
/* 871983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 871985: push 0x9d4722 */
  { uint32_t v = 0x9d4722u; esp -= 4; W32(esp, v); }
/* 87198a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 871990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 871998: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87199b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87199c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87199d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87199e: mov edi, ecx */
  edi = ecx;
/* 8719a0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8719a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8719a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8719ad: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8719b3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8719b3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8719b6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8719b9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8719bc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8719bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8719c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8719c3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8719c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8719c7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8719cc: mov ebx, 1 */
  ebx = 0x1u;
/* 8719d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8719d2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8719d5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8719d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8719d8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8719db: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8719de: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8719e5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8719e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8719e9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8719ec: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8719ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8719f0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8719f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8719f6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8719f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8719f9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8719fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8719fd: mov eax, edx */
  eax = edx;
/* 8719ff: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 871a02: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 871a05: jne 0x871a1d */
  if (!zf) goto L_871a1d;
L_871a07: /* 871a07: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 871a0a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 871a0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871a0d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 871a10: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 871a16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871a17: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x871a1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_871a1d: /* 871a1d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 871a20: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x871a26u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 871a26: mov ecx, eax */
  ecx = eax;
/* 871a28: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x871a2eu); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 871a2e: mov ecx, edi */
  ecx = edi;
/* 871a30: mov esi, eax */
  esi = eax;
/* 871a32: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x871a38u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 871a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871a3a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 871a3d: push 0xae58d4 */
  { uint32_t v = 0xae58d4u; esp -= 4; W32(esp, v); }
/* 871a42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871a43: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x871a49u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 871a49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871a4c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 871a4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871a50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871a51: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871a54: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 871a57: mov ecx, esp */
  ecx = esp;
/* 871a59: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 871a5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 871a5d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 871a61: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x871a67u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 871a67: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 871a6d: call 0x6ca8df */
  esp -= 4; W32(esp, 0x871a72u); SPILL(); f_6ca8df(); if (g_unwind) return; RELOAD();
/* 871a72: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 871a75: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 871a78: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x871a7eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 871a7e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 871a81: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 871a85: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x871a8bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 871a8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 871a8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 871a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 871a90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 871a97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 871a98: mov esp, ebp */
  esp = ebp;
/* 871a9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871a9b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_871a9e(void) {
  LOAD_REGS();
L_871a9e: /* 871a9e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 871aa1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 871aa6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 871aa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871aaa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 871aad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871ab2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_871ab2(); return;
}

void f_871ab2(void) {
  LOAD_REGS();
L_871ab2: /* 871ab2: push 0xa18554 */
  { uint32_t v = 0xa18554u; esp -= 4; W32(esp, v); }
/* 871ab7: push 0xae58e0 */
  { uint32_t v = 0xae58e0u; esp -= 4; W32(esp, v); }
/* 871abc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x871ac2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 871ac2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871ac5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871ac7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871ac9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871aceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_871ace: guest_badaddr(0x871ace); return;
}

void f_871b30(void) {
  LOAD_REGS();
L_871b30: /* 871b30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_871b50(void) {
  LOAD_REGS();
L_871b50: /* 871b50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 871b51: mov ebp, esp */
  ebp = esp;
/* 871b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 871b55: push 0x9d4740 */
  { uint32_t v = 0x9d4740u; esp -= 4; W32(esp, v); }
/* 871b5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 871b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871b61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 871b68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871b6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871b6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 871b6e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 871b71: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 871b78: call 0x6c1ee7 */
  esp -= 4; W32(esp, 0x871b7du); SPILL(); f_6c1ee7(); if (g_unwind) return; RELOAD();
/* 871b7d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 871b80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 871b81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 871b82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 871b89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 871b8a: mov esp, ebp */
  esp = ebp;
/* 871b8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871b8d: ret  */
  esp += 4; SPILL(); return;
}

void f_871b8e(void) {
  LOAD_REGS();
L_871b8e: /* 871b8e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 871b91: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 871b96: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 871b99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871b9a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 871b9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871ba2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_871ba2(); return;
}

void f_871ba2(void) {
  LOAD_REGS();
L_871ba2: /* 871ba2: push 0xa18590 */
  { uint32_t v = 0xa18590u; esp -= 4; W32(esp, v); }
/* 871ba7: push 0xae5b2c */
  { uint32_t v = 0xae5b2cu; esp -= 4; W32(esp, v); }
/* 871bac: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x871bb2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 871bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871bb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871bb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871bb9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871bbeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_871bbe: guest_badaddr(0x871bbe); return;
}

void f_871be0(void) {
  LOAD_REGS();
L_871be0: /* 871be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 871be1: mov ebp, esp */
  ebp = esp;
/* 871be3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 871be5: push 0x9d4750 */
  { uint32_t v = 0x9d4750u; esp -= 4; W32(esp, v); }
/* 871bea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 871bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871bf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 871bf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871bfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871bfd: mov esi, ecx */
  esi = ecx;
/* 871bff: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 871c03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 871c04: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 871c07: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 871c0e: je 0x871c28 */
  if (zf) goto L_871c28;
L_871c10: /* 871c10: push 0x243 */
  { uint32_t v = 0x243u; esp -= 4; W32(esp, v); }
/* 871c15: push 0xae5b44 */
  { uint32_t v = 0xae5b44u; esp -= 4; W32(esp, v); }
/* 871c1a: push 0xae5b54 */
  { uint32_t v = 0xae5b54u; esp -= 4; W32(esp, v); }
/* 871c1f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x871c25u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 871c25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_871c28: /* 871c28: mov bl, byte ptr [ebp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 871c2b: cmp bl, 0xd */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 871c2e: je 0x871c54 */
  if (zf) goto L_871c54;
L_871c30: /* 871c30: mov ecx, esi */
  ecx = esi;
/* 871c32: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x871c38u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 871c38: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 871c3e: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 871c41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871c42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871c43: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 871c45: push 0xae5b70 */
  { uint32_t v = 0xae5b70u; esp -= 4; W32(esp, v); }
/* 871c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871c4b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x871c51u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 871c51: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_871c54: /* 871c54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 871c57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 871c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 871c59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 871c60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 871c61: mov esp, ebp */
  esp = ebp;
/* 871c63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871c64: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_871c67(void) {
  LOAD_REGS();
L_871c67: /* 871c67: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 871c6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 871c6f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 871c72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 871c73: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 871c76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871c7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_871c7b(); return;
}

void f_871c7b(void) {
  LOAD_REGS();
L_871c7b: /* 871c7b: push 0xa185c0 */
  { uint32_t v = 0xa185c0u; esp -= 4; W32(esp, v); }
/* 871c80: push 0xae5bf8 */
  { uint32_t v = 0xae5bf8u; esp -= 4; W32(esp, v); }
/* 871c85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x871c8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 871c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871c8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871c92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871c97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_871c97: guest_badaddr(0x871c97); return;
}

void f_871cd0(void) {
  LOAD_REGS();
L_871cd0: /* 871cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 871cd1: mov ebp, esp */
  ebp = esp;
/* 871cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 871cd5: push 0x9d4760 */
  { uint32_t v = 0x9d4760u; esp -= 4; W32(esp, v); }
/* 871cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 871ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 871ce8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871ceb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 871cee: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 871cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 871cf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 871cf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 871cf3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 871cf6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 871cf7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 871cfe: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x871d04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 871d04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 871d07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 871d08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 871d09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 871d10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 871d11: mov esp, ebp */
  esp = ebp;
/* 871d13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 871d14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_871d17(void) {
  LOAD_REGS();
L_871d17: /* 871d17: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 871d1a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 871d1f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 871d22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 871d23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 871d26: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871d2bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_871d2b(); return;
}

void f_871d2b(void) {
  LOAD_REGS();
L_871d2b: /* 871d2b: push 0xa185f4 */
  { uint32_t v = 0xa185f4u; esp -= 4; W32(esp, v); }
/* 871d30: push 0xae5c30 */
  { uint32_t v = 0xae5c30u; esp -= 4; W32(esp, v); }
/* 871d35: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x871d3bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 871d3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871d3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871d40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 871d42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x871d47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_871d47: guest_badaddr(0x871d47); return;
}

void f_871d70(void) {
  LOAD_REGS();
L_871d70: /* 871d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 871d74: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 871d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 871d77: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x871d7du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 871d7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_871d90(void) {
  LOAD_REGS();
L_871d90: /* 871d90: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 871d93: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 871d97: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 871d99: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 871d9d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 871d9f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 871da2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 871da4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 871da7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 871da9: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 871dad: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 871daf: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871db1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 871db5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 871db7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871db9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 871dbd: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 871dc1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871dc3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 871dc7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 871dc9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871dcc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 871dd0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 871dd4: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871dd7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 871ddb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 871ddf: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 871de2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 871de6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 871de8: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 871deb: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 871def: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 871df2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 871df6: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 871df9: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 871dfd: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 871e01: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 871e05: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 871e0b: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 871e0e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 871e12: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 871e16: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 871e1c: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 871e1f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871e23: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 871e27: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 871e2d: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 871e30: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 871e34: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 871e36: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 871e39: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 871e3d: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 871e40: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 871e44: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 871e46: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 871e49: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 871e4d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 871e4f: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 871e52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 871e54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 871e58: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 871e5c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 871e5f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 871e63: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 871e67: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 871e6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 871e6c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 871e6e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 871e71: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 871e74: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 871e77: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 871e7a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 871e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_871ec0(void) {
  LOAD_REGS();
L_871ec0: /* 871ec0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871ec4: call 0x99cc96 */
  esp -= 4; W32(esp, 0x871ec9u); SPILL(); hle_CIacos(); RELOAD();
/* 871ec9: ret  */
  esp += 4; SPILL(); return;
}

void f_871ee0(void) {
  LOAD_REGS();
L_871ee0: /* 871ee0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 871ee2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 871ee4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 871ee7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 871eea: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 871eed: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 871ef0: ret  */
  esp += 4; SPILL(); return;
}

void f_871f10(void) {
  LOAD_REGS();
L_871f10: /* 871f10: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 871f13: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 871f16: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 871f19: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871f1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 871f1e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 871f20: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871f22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 871f24: ret  */
  esp += 4; SPILL(); return;
}

void f_871f40(void) {
  LOAD_REGS();
L_871f40: /* 871f40: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 871f43: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 871f46: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 871f49: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871f4c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 871f4e: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 871f50: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 871f53: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871f55: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 871f58: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 871f5a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 871f5c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 871f5f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 871f61: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871f64: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 871f66: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 871f69: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 871f6b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 871f6e: ret  */
  esp += 4; SPILL(); return;
}

void f_871f80(void) {
  LOAD_REGS();
L_871f80: /* 871f80: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 871f83: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 871f85: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 871f88: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 871f8a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 871f8c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 871f8e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 871f90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 871f92: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 871f94: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 871f96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 871f98: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 871f9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 871f9c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 871f9e: ret  */
  esp += 4; SPILL(); return;
}

void f_871fb0(void) {
  LOAD_REGS();
L_871fb0: /* 871fb0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871fb4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 871fb6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 871fb8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871fbc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 871fbf: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 871fc2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871fc6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 871fc9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 871fcc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_871fe0(void) {
  LOAD_REGS();
L_871fe0: /* 871fe0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871fe4: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 871fe6: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 871fe8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 871fea: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871fee: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 871ff1: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 871ff4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 871ff7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 871ffb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 871ffe: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 872001: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 872004: ret 4 */
  esp += 8; SPILL(); return;
}

void f_872020(void) {
  LOAD_REGS();
L_872020: /* 872020: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 872022: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 872025: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 872028: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 87202a: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 87202c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 87202e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 872030: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 872032: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872034: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 872036: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 872038: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87203a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87203c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 872042: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 872044: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872047: jne 0x872068 */
  if (!zf) goto L_872068;
L_872049: /* 872049: fsqrt  */
  ST0 = sqrt(ST0);
/* 87204b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 872051: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 872053: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872055: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 872057: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 872059: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 87205b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 87205e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 872061: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 872064: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 872067: ret  */
  esp += 4; SPILL(); return;
L_872068: /* 872068: xor eax, eax */
  eax = 0;
/* 87206a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87206c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 872072: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 872078: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 87207b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87207e: ret  */
  esp += 4; SPILL(); return;
}

void f_8720a0(void) {
  LOAD_REGS();
L_8720a0: /* 8720a0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8720a2: fabs  */
  ST0 = fabs(ST0);
/* 8720a4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8720a7: fabs  */
  ST0 = fabs(ST0);
/* 8720a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8720ab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8720ad: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8720af: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8720b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8720b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8720b7: jp 0x872105 */
  if (pf) goto L_872105;
L_8720b9: /* 8720b9: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8720bb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8720bd: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 8720bf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8720c1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8720c3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8720c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8720c7: fsqrt  */
  ST0 = sqrt(ST0);
/* 8720c9: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8720cb: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8720d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8720d3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8720d6: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 8720dd: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 8720df: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8720e1: fchs  */
  ST0 = -ST0;
/* 8720e3: fst dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0);
/* 8720e6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8720e9: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8720eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8720ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8720f0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8720f2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8720f5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8720f7: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 8720fa: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8720fd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8720ff: fchs  */
  ST0 = -ST0;
/* 872101: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 872104: ret  */
  esp += 4; SPILL(); return;
L_872105: /* 872105: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 872108: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 87210e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 872110: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 872112: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872114: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 872116: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 872118: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87211a: fsqrt  */
  ST0 = sqrt(ST0);
/* 87211c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 87211e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 872124: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872126: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 872129: fchs  */
  ST0 = -ST0;
/* 87212b: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 87212e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 872131: fst dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0);
/* 872134: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 872137: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 87213a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 87213d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 87213f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 872141: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 872143: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 872146: fchs  */
  ST0 = -ST0;
/* 872148: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 87214b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 87214d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 872150: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 872153: ret  */
  esp += 4; SPILL(); return;
}
