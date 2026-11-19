#include "recomp.h"
#include "rec_mod.h"

void f_782a70(void) {
  LOAD_REGS();
  goto L_782a70;
L_782a4f: /* 782a4f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_782a53: /* 782a53: lea ecx, [ebp - 0x1f8] */
  ecx = (uint32_t)(ebp + 0xfffffe08u);
/* 782a59: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x782a5fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 782a5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782a64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782a6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782a6c: mov esp, ebp */
  esp = ebp;
/* 782a6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782a6f: ret  */
  esp += 4; SPILL(); return;
L_782a70: /* 782a70: fld dword ptr [edi + 0x284] */
  { double v = F32((uint32_t)(edi + 0x284u)); FPUSH(v); }
/* 782a76: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 782a79: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 782a7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782a7c: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 782a82: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 782a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782a89: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 782a8c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 782a8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 782a91: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 782a94: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 782a97: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 782a9a: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 782aa0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 782aa3: fmul dword ptr [edi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x290u)));
/* 782aa9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 782aac: fmul dword ptr [edi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28cu)));
/* 782ab2: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 782ab8: fmul dword ptr [edi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x288u)));
/* 782abe: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 782ac1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 782ac4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 782ac7: call dword ptr [0xcfa570] */
  esp -= 4; W32(esp, 0x782acdu); SPILL(); f_4e19a1(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 782acd: fld dword ptr [0xa093dc] */
  { double v = F32((uint32_t)(0xa093dcu)); FPUSH(v); }
/* 782ad3: mov ebx, dword ptr [esi + 0x328] */
  ebx = R32((uint32_t)(esi + 0x328u));
/* 782ad9: fmul dword ptr [0xa095c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa095c8u)));
/* 782adf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782ae3: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 782aea: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 782aed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_782af0: /* 782af0: cmp ebx, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782af6: jg 0x78316c */
  if ((!zf && sf == of)) goto L_78316c;
L_782afc: /* 782afc: mov ecx, dword ptr [esi + 0x2dc] */
  ecx = R32((uint32_t)(esi + 0x2dcu));
/* 782b02: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782b06: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_782b0c: /* 782b0c: mov edx, ecx */
  edx = ecx;
/* 782b0e: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 782b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b12: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 782b16: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782b1bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782b1b: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 782b21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b26: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782b2bu); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782b2b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b30: jne 0x782be7 */
  if (!zf) goto L_782be7;
L_782b36: /* 782b36: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782b39: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 782b3f: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 782b45: mov ecx, ebx */
  ecx = ebx;
/* 782b47: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b4a: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 782b4d: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 782b50: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 782b53: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b55: jne 0x782bcf */
  if (!zf) goto L_782bcf;
L_782b57: /* 782b57: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b5a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782b5c: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b62u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b62: mov ecx, edi */
  ecx = edi;
/* 782b64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b67: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b6du); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b6d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782b70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 782b76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b78: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 782b7a: push 0xac7510 */
  { uint32_t v = 0xac7510u; esp -= 4; W32(esp, v); }
/* 782b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b80: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x782b86u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 782b86: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782b89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782b8c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782b90: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 782b91: jmp 0x782af0 */
  goto L_782af0;
L_782bcf: /* 782bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782bd0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782bd5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782bd5: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 782bdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782bdd: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782be2u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782be2: jmp 0x782c87 */
  goto L_782c87;
L_782be7: /* 782be7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 782bf1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 782bfb: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 782c05: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 782c0f: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 782c19: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 782c23: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 782c2d: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 782c37: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 782c41: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 782c4b: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 782c55: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 782c5f: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 782c69: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 782c73: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 782c7d: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
L_782c87: /* 782c87: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782c8d: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782c94: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x782c9au); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 782c9a: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 782ca0: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782ca6: call 0x781cd0 */
  esp -= 4; W32(esp, 0x782cabu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
/* 782cab: lea edx, [ebp - 0x238] */
  edx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782cb2: call 0x974350 */
  esp -= 4; W32(esp, 0x782cb7u); SPILL(); f_974350(); if (g_unwind) return; RELOAD();
/* 782cb7: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cbd: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 782cc3: lea edx, [ebp - 0x278] */
  edx = (uint32_t)(ebp + 0xfffffd88u);
/* 782cc9: call 0x781d50 */
  esp -= 4; W32(esp, 0x782cceu); SPILL(); f_781d50(); if (g_unwind) return; RELOAD();
/* 782cce: lea eax, [ebp - 0x278] */
  eax = (uint32_t)(ebp + 0xfffffd88u);
/* 782cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782cd5: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782cdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782cdc: call 0x6c759a */
  esp -= 4; W32(esp, 0x782ce1u); SPILL(); f_6c759a(); if (g_unwind) return; RELOAD();
/* 782ce1: fld dword ptr [ebp - 0x158] */
  { double v = F32((uint32_t)(ebp + 0xfffffea8u)); FPUSH(v); }
/* 782ce7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782cea: xor ecx, ecx */
  ecx = 0;
/* 782cec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782cef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782cf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 782cf5: je 0x782f0a */
  if (zf) goto L_782f0a;
L_782cfb: /* 782cfb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782cfe: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 782d04: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 782d0a: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d11: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 782d17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d18: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782d1e: mov dword ptr [ebp - 0x114], ecx */
  W32((uint32_t)(ebp + 0xfffffeecu), ecx);
/* 782d24: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 782d2a: mov dword ptr [ebp - 0x110], ecx */
  W32((uint32_t)(ebp + 0xfffffef0u), ecx);
/* 782d30: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 782d36: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 782d3c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 782d3f: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 782d45: mov dword ptr [ebp - 0x100], ecx */
  W32((uint32_t)(ebp + 0xffffff00u), ecx);
/* 782d4b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 782d4e: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 782d54: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 782d5a: mov dword ptr [ebp - 0xf4], ecx */
  W32((uint32_t)(ebp + 0xffffff0cu), ecx);
/* 782d60: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 782d63: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 782d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d6a: lea ecx, [ebp - 0x1b8] */
  ecx = (uint32_t)(ebp + 0xfffffe48u);
/* 782d70: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 782d7a: mov dword ptr [ebp - 0xec], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff14u), 0xffffffffu);
/* 782d84: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 782d87: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x782d8du); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 782d8d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 782d8f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 782d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d99: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 782d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782da3: mov ecx, esp */
  ecx = esp;
/* 782da5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 782da7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 782daa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782dad: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 782db0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782db3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 782db6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782db9: mov ecx, esp */
  ecx = esp;
/* 782dbb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 782dbd: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 782dc0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782dc3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 782dc6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782dc9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782dcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782dcd: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 782dd0: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x782dd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782dd6: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 782dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782ddb: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782de1: /* 782de1: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 782de7: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782dea: jne 0x782a4f */
  if (!zf) goto L_782a4f;
L_782df0: /* 782df0: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 782df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782df8: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782dfe: /* 782dfe: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 782e01: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x782e07u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 782e07: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782e09: jne 0x782e31 */
  if (!zf) goto L_782e31;
L_782e0b: /* 782e0b: lea edx, [ebp - 0x1ac] */
  edx = (uint32_t)(ebp + 0xfffffe54u);
/* 782e11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e12: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e18: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e1eu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e1e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 782e20: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 782e23: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 782e26: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 782e29: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782e2c: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 782e2f: jmp 0x782e6e */
  goto L_782e6e;
L_782e31: /* 782e31: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e38: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782e3e: lea edx, [ebp - 0x318] */
  edx = (uint32_t)(ebp + 0xfffffce8u);
/* 782e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e45: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782e48: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782e4eu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782e4e: lea ecx, [ebp - 0x1a0] */
  ecx = (uint32_t)(ebp + 0xfffffe60u);
/* 782e54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e55: mov ecx, eax */
  ecx = eax;
/* 782e57: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e5du); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e5d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 782e5f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 782e62: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 782e65: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 782e68: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 782e6b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_782e6e: /* 782e6e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782e71: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 782e77: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782e7c: mov eax, ebx */
  eax = ebx;
/* 782e7e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 782e81: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* 782e84: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782e87: mov eax, esp */
  eax = esp;
/* 782e89: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 782e90: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 782e93: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 782e95: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 782e9c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 782e9f: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 782ea6: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 782ea9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 782eac: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 782eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782eb0: mov ecx, esi */
  ecx = esi;
/* 782eb2: call 0x6c291e */
  esp -= 4; W32(esp, 0x782eb7u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782eb7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 782eba: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 782ebd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782ec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782ec4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782ec7: mov edx, esp */
  edx = esp;
/* 782ec9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782ecb: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 782ece: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782ed2: mov ecx, esi */
  ecx = esi;
/* 782ed4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782ed7: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782edcu); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
/* 782edc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782edf: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 782ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782ee7: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x782eecu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 782eec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782eef: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 782ef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ef6: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782efd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x782f02u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 782f02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782f05: jmp 0x782fb6 */
  goto L_782fb6;
L_782f0a: /* 782f0a: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 782f0d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782f13: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782f19: lea edx, [ebp - 0x160] */
  edx = (uint32_t)(ebp + 0xfffffea0u);
/* 782f1f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 782f22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782f23: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782f29: lea eax, [ebp - 0x2e8] */
  eax = (uint32_t)(ebp + 0xfffffd18u);
/* 782f2f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 782f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782f33: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782f36: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 782f39: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 782f3c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 782f3f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782f45u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782f45: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 782f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782f4c: mov ecx, eax */
  ecx = eax;
/* 782f4e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782f54u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782f54: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782f57: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 782f5d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 782f60: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f65: mov edx, ebx */
  edx = ebx;
/* 782f67: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 782f6a: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* 782f6d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 782f70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f73: mov edx, esp */
  edx = esp;
/* 782f75: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782f77: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 782f7a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782f7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782f7e: mov ecx, esi */
  ecx = esi;
/* 782f80: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782f83: call 0x6c291e */
  esp -= 4; W32(esp, 0x782f88u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782f88: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 782f8e: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 782f94: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782f9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f9e: mov ecx, esp */
  ecx = esp;
/* 782fa0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 782fa2: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 782fa8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782fab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 782fae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782faf: mov ecx, esi */
  ecx = esi;
/* 782fb1: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782fb6u); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
L_782fb6: /* 782fb6: mov eax, dword ptr [esi + 0x2dc] */
  eax = R32((uint32_t)(esi + 0x2dcu));
/* 782fbc: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 782fbf: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fc7: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 782fcb: call 0x9287f0 */
  esp -= 4; W32(esp, 0x782fd0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 782fd0: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 782fd3: je 0x783041 */
  if (zf) goto L_783041;
L_782fd5: /* 782fd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fd6: call 0x928630 */
  esp -= 4; W32(esp, 0x782fdbu); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 782fdb: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 782fe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782fe2: lea edx, [ebp - 0x178] */
  edx = (uint32_t)(ebp + 0xfffffe88u);
/* 782fe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782fe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fea: call 0x928710 */
  esp -= 4; W32(esp, 0x782fefu); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 782fef: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 782ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ff6: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 782ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ffd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783002u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783002: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783005: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 78300b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78300c: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 783012: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783018u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783018: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 78301e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78301f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 783025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783026: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78302bu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78302b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78302e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 783034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783035: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 78303b: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783041u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783041: /* 783041: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 783044: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 783047: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783049: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x78304eu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 78304e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783051: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 783054: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783057: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78305a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78305c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78305e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783060: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 783062: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 783064: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783066: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 783068: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78306a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78306d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783070: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 783072: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 783074: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 783076: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783079: jne 0x7830b2 */
  if (!zf) goto L_7830b2;
L_78307b: /* 78307b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78307e: call 0x781b80 */
  esp -= 4; W32(esp, 0x783083u); SPILL(); f_781b80(); if (g_unwind) return; RELOAD();
/* 783083: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 783085: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783088: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 78308b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78308e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783091: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783094: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783097: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78309a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78309d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7830a0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7830a3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7830a6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7830a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7830aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7830ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7830ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7830ad: call 0x90ea10 */
  esp -= 4; W32(esp, 0x7830b2u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
L_7830b2: /* 7830b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7830b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7830b7: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7830be: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_7830c0: /* 7830c0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7830c7: /* 7830c7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7830ca: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7830cb: jmp 0x782af0 */
  goto L_782af0;
L_78316c: /* 78316c: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783173: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78317a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78317e: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783180: /* 783180: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 783186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783188: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_78318a: /* 78318a: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 783190: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783192: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783194: /* 783194: mov eax, ecx */
  eax = ecx;
/* 783196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783199: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78319cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78319c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78319f: lea edi, [esi + 0x2fc] */
  edi = (uint32_t)(esi + 0x2fcu);
/* 7831a5: mov ecx, 7 */
  ecx = 0x7u;
/* 7831aa: lea esi, [ebp - 0x194] */
  esi = (uint32_t)(ebp + 0xfffffe6cu);
/* 7831b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7831b2: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7831b8: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7831be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7831c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7831c1: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7831c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7831c4: /* 7831c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7831cb: jmp 0x782a53 */
  goto L_782a53;
}

void f_782b96(void) {
  LOAD_REGS();
L_782b96: /* 782b96: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 782b9c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 782ba1: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 782ba7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782ba8: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 782bae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x782bb3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_782bb3(); return;
}

void f_782bb3(void) {
  LOAD_REGS();
  goto L_782bb3;
L_782a4f: /* 782a4f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_782a53: /* 782a53: lea ecx, [ebp - 0x1f8] */
  ecx = (uint32_t)(ebp + 0xfffffe08u);
/* 782a59: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x782a5fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 782a5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782a64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782a6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782a6c: mov esp, ebp */
  esp = ebp;
/* 782a6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782a6f: ret  */
  esp += 4; SPILL(); return;
L_782af0: /* 782af0: cmp ebx, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782af6: jg 0x78316c */
  if ((!zf && sf == of)) goto L_78316c;
L_782afc: /* 782afc: mov ecx, dword ptr [esi + 0x2dc] */
  ecx = R32((uint32_t)(esi + 0x2dcu));
/* 782b02: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782b06: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_782b0c: /* 782b0c: mov edx, ecx */
  edx = ecx;
/* 782b0e: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 782b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b12: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 782b16: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782b1bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782b1b: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 782b21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b26: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782b2bu); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782b2b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b30: jne 0x782be7 */
  if (!zf) goto L_782be7;
L_782b36: /* 782b36: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782b39: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 782b3f: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 782b45: mov ecx, ebx */
  ecx = ebx;
/* 782b47: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b4a: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 782b4d: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 782b50: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 782b53: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b55: jne 0x782bcf */
  if (!zf) goto L_782bcf;
L_782b57: /* 782b57: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b5a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782b5c: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b62u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b62: mov ecx, edi */
  ecx = edi;
/* 782b64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b67: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b6du); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b6d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782b70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 782b76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b78: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 782b7a: push 0xac7510 */
  { uint32_t v = 0xac7510u; esp -= 4; W32(esp, v); }
/* 782b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b80: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x782b86u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 782b86: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782b89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782b8c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782b90: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 782b91: jmp 0x782af0 */
  goto L_782af0;
L_782bb3: /* 782bb3: push 0xa095a4 */
  { uint32_t v = 0xa095a4u; esp -= 4; W32(esp, v); }
/* 782bb8: push 0xac759c */
  { uint32_t v = 0xac759cu; esp -= 4; W32(esp, v); }
/* 782bbd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x782bc3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 782bc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782bc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782bc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782bca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x782bcfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_782bcf: /* 782bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782bd0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782bd5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782bd5: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 782bdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782bdd: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782be2u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782be2: jmp 0x782c87 */
  goto L_782c87;
L_782be7: /* 782be7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 782bf1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 782bfb: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 782c05: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 782c0f: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 782c19: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 782c23: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 782c2d: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 782c37: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 782c41: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 782c4b: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 782c55: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 782c5f: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 782c69: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 782c73: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 782c7d: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
L_782c87: /* 782c87: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782c8d: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782c94: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x782c9au); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 782c9a: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 782ca0: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782ca6: call 0x781cd0 */
  esp -= 4; W32(esp, 0x782cabu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
/* 782cab: lea edx, [ebp - 0x238] */
  edx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782cb2: call 0x974350 */
  esp -= 4; W32(esp, 0x782cb7u); SPILL(); f_974350(); if (g_unwind) return; RELOAD();
/* 782cb7: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cbd: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 782cc3: lea edx, [ebp - 0x278] */
  edx = (uint32_t)(ebp + 0xfffffd88u);
/* 782cc9: call 0x781d50 */
  esp -= 4; W32(esp, 0x782cceu); SPILL(); f_781d50(); if (g_unwind) return; RELOAD();
/* 782cce: lea eax, [ebp - 0x278] */
  eax = (uint32_t)(ebp + 0xfffffd88u);
/* 782cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782cd5: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782cdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782cdc: call 0x6c759a */
  esp -= 4; W32(esp, 0x782ce1u); SPILL(); f_6c759a(); if (g_unwind) return; RELOAD();
/* 782ce1: fld dword ptr [ebp - 0x158] */
  { double v = F32((uint32_t)(ebp + 0xfffffea8u)); FPUSH(v); }
/* 782ce7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782cea: xor ecx, ecx */
  ecx = 0;
/* 782cec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782cef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782cf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 782cf5: je 0x782f0a */
  if (zf) goto L_782f0a;
L_782cfb: /* 782cfb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782cfe: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 782d04: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 782d0a: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d11: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 782d17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d18: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782d1e: mov dword ptr [ebp - 0x114], ecx */
  W32((uint32_t)(ebp + 0xfffffeecu), ecx);
/* 782d24: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 782d2a: mov dword ptr [ebp - 0x110], ecx */
  W32((uint32_t)(ebp + 0xfffffef0u), ecx);
/* 782d30: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 782d36: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 782d3c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 782d3f: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 782d45: mov dword ptr [ebp - 0x100], ecx */
  W32((uint32_t)(ebp + 0xffffff00u), ecx);
/* 782d4b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 782d4e: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 782d54: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 782d5a: mov dword ptr [ebp - 0xf4], ecx */
  W32((uint32_t)(ebp + 0xffffff0cu), ecx);
/* 782d60: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 782d63: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 782d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d6a: lea ecx, [ebp - 0x1b8] */
  ecx = (uint32_t)(ebp + 0xfffffe48u);
/* 782d70: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 782d7a: mov dword ptr [ebp - 0xec], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff14u), 0xffffffffu);
/* 782d84: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 782d87: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x782d8du); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 782d8d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 782d8f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 782d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d99: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 782d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782da3: mov ecx, esp */
  ecx = esp;
/* 782da5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 782da7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 782daa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782dad: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 782db0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782db3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 782db6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782db9: mov ecx, esp */
  ecx = esp;
/* 782dbb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 782dbd: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 782dc0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782dc3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 782dc6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782dc9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782dcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782dcd: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 782dd0: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x782dd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782dd6: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 782dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782ddb: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782de1: /* 782de1: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 782de7: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782dea: jne 0x782a4f */
  if (!zf) goto L_782a4f;
L_782df0: /* 782df0: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 782df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782df8: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782dfe: /* 782dfe: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 782e01: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x782e07u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 782e07: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782e09: jne 0x782e31 */
  if (!zf) goto L_782e31;
L_782e0b: /* 782e0b: lea edx, [ebp - 0x1ac] */
  edx = (uint32_t)(ebp + 0xfffffe54u);
/* 782e11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e12: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e18: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e1eu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e1e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 782e20: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 782e23: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 782e26: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 782e29: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782e2c: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 782e2f: jmp 0x782e6e */
  goto L_782e6e;
L_782e31: /* 782e31: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e38: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782e3e: lea edx, [ebp - 0x318] */
  edx = (uint32_t)(ebp + 0xfffffce8u);
/* 782e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e45: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782e48: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782e4eu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782e4e: lea ecx, [ebp - 0x1a0] */
  ecx = (uint32_t)(ebp + 0xfffffe60u);
/* 782e54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e55: mov ecx, eax */
  ecx = eax;
/* 782e57: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e5du); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e5d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 782e5f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 782e62: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 782e65: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 782e68: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 782e6b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_782e6e: /* 782e6e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782e71: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 782e77: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782e7c: mov eax, ebx */
  eax = ebx;
/* 782e7e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 782e81: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* 782e84: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782e87: mov eax, esp */
  eax = esp;
/* 782e89: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 782e90: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 782e93: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 782e95: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 782e9c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 782e9f: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 782ea6: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 782ea9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 782eac: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 782eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782eb0: mov ecx, esi */
  ecx = esi;
/* 782eb2: call 0x6c291e */
  esp -= 4; W32(esp, 0x782eb7u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782eb7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 782eba: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 782ebd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782ec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782ec4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782ec7: mov edx, esp */
  edx = esp;
/* 782ec9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782ecb: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 782ece: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782ed2: mov ecx, esi */
  ecx = esi;
/* 782ed4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782ed7: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782edcu); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
/* 782edc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782edf: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 782ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782ee7: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x782eecu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 782eec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782eef: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 782ef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ef6: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782efd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x782f02u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 782f02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782f05: jmp 0x782fb6 */
  goto L_782fb6;
L_782f0a: /* 782f0a: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 782f0d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782f13: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782f19: lea edx, [ebp - 0x160] */
  edx = (uint32_t)(ebp + 0xfffffea0u);
/* 782f1f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 782f22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782f23: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782f29: lea eax, [ebp - 0x2e8] */
  eax = (uint32_t)(ebp + 0xfffffd18u);
/* 782f2f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 782f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782f33: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782f36: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 782f39: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 782f3c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 782f3f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782f45u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782f45: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 782f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782f4c: mov ecx, eax */
  ecx = eax;
/* 782f4e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782f54u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782f54: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782f57: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 782f5d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 782f60: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f65: mov edx, ebx */
  edx = ebx;
/* 782f67: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 782f6a: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* 782f6d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 782f70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f73: mov edx, esp */
  edx = esp;
/* 782f75: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782f77: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 782f7a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782f7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782f7e: mov ecx, esi */
  ecx = esi;
/* 782f80: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782f83: call 0x6c291e */
  esp -= 4; W32(esp, 0x782f88u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782f88: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 782f8e: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 782f94: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782f9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f9e: mov ecx, esp */
  ecx = esp;
/* 782fa0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 782fa2: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 782fa8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782fab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 782fae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782faf: mov ecx, esi */
  ecx = esi;
/* 782fb1: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782fb6u); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
L_782fb6: /* 782fb6: mov eax, dword ptr [esi + 0x2dc] */
  eax = R32((uint32_t)(esi + 0x2dcu));
/* 782fbc: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 782fbf: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fc7: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 782fcb: call 0x9287f0 */
  esp -= 4; W32(esp, 0x782fd0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 782fd0: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 782fd3: je 0x783041 */
  if (zf) goto L_783041;
L_782fd5: /* 782fd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fd6: call 0x928630 */
  esp -= 4; W32(esp, 0x782fdbu); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 782fdb: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 782fe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782fe2: lea edx, [ebp - 0x178] */
  edx = (uint32_t)(ebp + 0xfffffe88u);
/* 782fe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782fe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fea: call 0x928710 */
  esp -= 4; W32(esp, 0x782fefu); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 782fef: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 782ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ff6: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 782ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ffd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783002u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783002: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783005: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 78300b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78300c: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 783012: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783018u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783018: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 78301e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78301f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 783025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783026: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78302bu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78302b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78302e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 783034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783035: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 78303b: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783041u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783041: /* 783041: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 783044: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 783047: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783049: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x78304eu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 78304e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783051: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 783054: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783057: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78305a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78305c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78305e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783060: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 783062: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 783064: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783066: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 783068: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78306a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78306d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783070: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 783072: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 783074: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 783076: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783079: jne 0x7830b2 */
  if (!zf) goto L_7830b2;
L_78307b: /* 78307b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78307e: call 0x781b80 */
  esp -= 4; W32(esp, 0x783083u); SPILL(); f_781b80(); if (g_unwind) return; RELOAD();
/* 783083: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 783085: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783088: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 78308b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78308e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783091: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783094: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783097: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78309a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78309d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7830a0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7830a3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7830a6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7830a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7830aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7830ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7830ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7830ad: call 0x90ea10 */
  esp -= 4; W32(esp, 0x7830b2u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
L_7830b2: /* 7830b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7830b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7830b7: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7830be: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_7830c0: /* 7830c0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7830c7: /* 7830c7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7830ca: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7830cb: jmp 0x782af0 */
  goto L_782af0;
L_78316c: /* 78316c: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783173: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78317a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78317e: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783180: /* 783180: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 783186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783188: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_78318a: /* 78318a: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 783190: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783192: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783194: /* 783194: mov eax, ecx */
  eax = ecx;
/* 783196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783199: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78319cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78319c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78319f: lea edi, [esi + 0x2fc] */
  edi = (uint32_t)(esi + 0x2fcu);
/* 7831a5: mov ecx, 7 */
  ecx = 0x7u;
/* 7831aa: lea esi, [ebp - 0x194] */
  esi = (uint32_t)(ebp + 0xfffffe6cu);
/* 7831b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7831b2: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7831b8: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7831be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7831c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7831c1: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7831c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7831c4: /* 7831c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7831cb: jmp 0x782a53 */
  goto L_782a53;
}

void f_7830d0(void) {
  LOAD_REGS();
L_7830d0: /* 7830d0: mov eax, dword ptr [ebp - 0x118] */
  eax = R32((uint32_t)(ebp + 0xfffffee8u));
/* 7830d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7830db: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7830de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7830df: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7830e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7830e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7830e7(); return;
}

void f_7830e7(void) {
  LOAD_REGS();
L_7830e7: /* 7830e7: push 0xa09588 */
  { uint32_t v = 0xa09588u; esp -= 4; W32(esp, v); }
/* 7830ec: push 0xac75ac */
  { uint32_t v = 0xac75acu; esp -= 4; W32(esp, v); }
/* 7830f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7830f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7830f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7830fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7830fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7830fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x783103u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_783103(); return;
}

void f_783103(void) {
  LOAD_REGS();
L_783103: /* 783103: mov eax, dword ptr [ebp - 0x130] */
  eax = R32((uint32_t)(ebp + 0xfffffed0u));
/* 783109: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78310e: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 783111: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783112: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783115: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78311au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78311a(); return;
}

void f_78311a(void) {
  LOAD_REGS();
L_78311a: /* 78311a: push 0xa09570 */
  { uint32_t v = 0xa09570u; esp -= 4; W32(esp, v); }
/* 78311f: push 0xac75a4 */
  { uint32_t v = 0xac75a4u; esp -= 4; W32(esp, v); }
/* 783124: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78312au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78312a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78312d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78312f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783131: call 0x99caf8 */
  esp -= 4; W32(esp, 0x783136u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_783136(); return;
}

void f_783136(void) {
  LOAD_REGS();
L_783136: /* 783136: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 783139: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78313e: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 783144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783145: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 78314b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x783150u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_783150(); return;
}

void f_783150(void) {
  LOAD_REGS();
  goto L_783150;
L_782a53: /* 782a53: lea ecx, [ebp - 0x1f8] */
  ecx = (uint32_t)(ebp + 0xfffffe08u);
/* 782a59: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x782a5fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 782a5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782a64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782a6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782a6c: mov esp, ebp */
  esp = ebp;
/* 782a6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782a6f: ret  */
  esp += 4; SPILL(); return;
L_783150: /* 783150: push 0xa09554 */
  { uint32_t v = 0xa09554u; esp -= 4; W32(esp, v); }
/* 783155: push 0xac75bc */
  { uint32_t v = 0xac75bcu; esp -= 4; W32(esp, v); }
/* 78315a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x783160u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 783160: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783163: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783165: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783167: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78316cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78316c: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783173: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78317a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78317e: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783180: /* 783180: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 783186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783188: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_78318a: /* 78318a: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 783190: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783192: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783194: /* 783194: mov eax, ecx */
  eax = ecx;
/* 783196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783199: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78319cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78319c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78319f: lea edi, [esi + 0x2fc] */
  edi = (uint32_t)(esi + 0x2fcu);
/* 7831a5: mov ecx, 7 */
  ecx = 0x7u;
/* 7831aa: lea esi, [ebp - 0x194] */
  esi = (uint32_t)(ebp + 0xfffffe6cu);
/* 7831b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7831b2: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7831b8: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7831be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7831c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7831c1: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7831c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7831c4: /* 7831c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7831cb: jmp 0x782a53 */
  goto L_782a53;
}

void f_7831d0(void) {
  LOAD_REGS();
L_7831d0: /* 7831d0: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7831d3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7831d8: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 7831de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7831df: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7831e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7831eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7831ea(); return;
}

void f_7831ea(void) {
  LOAD_REGS();
L_7831ea: /* 7831ea: push 0xa09538 */
  { uint32_t v = 0xa09538u; esp -= 4; W32(esp, v); }
/* 7831ef: push 0xac75c4 */
  { uint32_t v = 0xac75c4u; esp -= 4; W32(esp, v); }
/* 7831f4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7831fau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7831fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7831fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7831ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783201: call 0x99caf8 */
  esp -= 4; W32(esp, 0x783206u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_783206(); return;
}

void f_783206(void) {
  LOAD_REGS();
L_783206: /* 783206: mov eax, dword ptr [ebp - 0x128] */
  eax = R32((uint32_t)(ebp + 0xfffffed8u));
/* 78320c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 783211: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 783214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783215: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 783218: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78321du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78321d(); return;
}

void f_78321d(void) {
  LOAD_REGS();
L_78321d: /* 78321d: push 0xa094ec */
  { uint32_t v = 0xa094ecu; esp -= 4; W32(esp, v); }
/* 783222: push 0xac75cc */
  { uint32_t v = 0xac75ccu; esp -= 4; W32(esp, v); }
/* 783227: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78322du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78322d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783234: call 0x99caf8 */
  esp -= 4; W32(esp, 0x783239u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_783239: guest_badaddr(0x783239); return;
}

void f_783470(void) {
  LOAD_REGS();
L_783470: /* 783470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 783472: push 0x9cc99b */
  { uint32_t v = 0x9cc99bu; esp -= 4; W32(esp, v); }
/* 783477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78347d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78347e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 783485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783487: mov esi, ecx */
  esi = ecx;
/* 783489: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 78348d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 783490: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 783498: call 0x6c117c */
  esp -= 4; W32(esp, 0x78349du); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 78349d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7834a0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7834a8: call 0x6c117c */
  esp -= 4; W32(esp, 0x7834adu); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 7834ad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7834b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7834b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7834b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7834bc: ret  */
  esp += 4; SPILL(); return;
}

void f_7834e0(void) {
  LOAD_REGS();
L_7834e0: /* 7834e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7834e2: push 0x9cc9bb */
  { uint32_t v = 0x9cc9bbu; esp -= 4; W32(esp, v); }
/* 7834e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7834ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7834ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7834f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7834f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7834f7: mov esi, ecx */
  esi = ecx;
/* 7834f9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7834fc: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 783500: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x783506u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 783506: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 783509: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 783511: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x783517u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 783517: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 78351b: mov eax, esi */
  eax = esi;
/* 78351d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78351e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 783525: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783528: ret  */
  esp += 4; SPILL(); return;
}

void f_783550(void) {
  LOAD_REGS();
L_783550: /* 783550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 783551: mov ebp, esp */
  ebp = esp;
/* 783553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 783555: push 0x9cc9d0 */
  { uint32_t v = 0x9cc9d0u; esp -= 4; W32(esp, v); }
/* 78355a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 783560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 783568: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78356b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78356c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78356d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78356e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 783571: xor esi, esi */
  esi = 0;
/* 783573: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 783575: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 783578: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78357eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78357e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 783581: mov edi, eax */
  edi = eax;
/* 783583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783584: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 783587: call 0x97c1e0 */
  esp -= 4; W32(esp, 0x78358cu); SPILL(); f_97c1e0(); if (g_unwind) return; RELOAD();
/* 78358c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 78358f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 783592: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 783595: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783598: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 78359a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 78359c: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 78359f: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 7835a2: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7835a5: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 7835a8: call 0x974dc0 */
  esp -= 4; W32(esp, 0x7835adu); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 7835ad: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 7835af: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 7835b2: call 0x974dc0 */
  esp -= 4; W32(esp, 0x7835b7u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 7835b7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 7835b9: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 7835bc: call 0x974dc0 */
  esp -= 4; W32(esp, 0x7835c1u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 7835c1: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 7835c4: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 7835c7: mov eax, dword ptr [0xb021a4] */
  eax = R32((uint32_t)(0xb021a4u));
/* 7835cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7835cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7835ce: call 0x974ee0 */
  esp -= 4; W32(esp, 0x7835d3u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 7835d3: mov edx, dword ptr [0xb021a4] */
  edx = R32((uint32_t)(0xb021a4u));
/* 7835d9: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7835dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7835dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7835de: call 0x974ee0 */
  esp -= 4; W32(esp, 0x7835e3u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 7835e3: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 7835e9: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7835ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7835ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7835ee: call 0x974ee0 */
  esp -= 4; W32(esp, 0x7835f3u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 7835f3: push 0xac6758 */
  { uint32_t v = 0xac6758u; esp -= 4; W32(esp, v); }
/* 7835f8: call 0x6c7405 */
  esp -= 4; W32(esp, 0x7835fdu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 7835fd: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 783600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783601: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783602: call 0x97c270 */
  esp -= 4; W32(esp, 0x783607u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 783607: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 78360a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78360b: call 0x97c290 */
  esp -= 4; W32(esp, 0x783610u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
L_783610: /* 783610: mov esi, eax */
  esi = eax;
/* 783612: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783614: je 0x783689 */
  if (zf) goto L_783689;
L_783616: /* 783616: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 783619: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78361b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78361d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78361e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78361f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783620: call 0x978030 */
  esp -= 4; W32(esp, 0x783625u); SPILL(); f_978030(); if (g_unwind) return; RELOAD();
/* 783625: mov ebx, eax */
  ebx = eax;
/* 783627: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 78362a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78362c: je 0x783634 */
  if (zf) goto L_783634;
L_78362e: /* 78362e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78362f: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x783634u); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
L_783634: /* 783634: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783637: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 78363a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78363c: je 0x783646 */
  if (zf) goto L_783646;
L_78363e: /* 78363e: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 783641: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783642: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783644: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x783646u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_783646: /* 783646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783647: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x78364cu); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 78364c: mov esi, eax */
  esi = eax;
/* 78364e: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_783651: /* 783651: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 783653: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783654: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783656: jne 0x783651 */
  if (!zf) goto L_783651;
L_783658: /* 783658: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78365a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78365b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78365c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x783662u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783662: mov edx, esi */
  edx = esi;
/* 783664: mov esi, eax */
  esi = eax;
L_783666: /* 783666: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 783668: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 783669: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 78366b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78366c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78366e: jne 0x783666 */
  if (!zf) goto L_783666;
L_783670: /* 783670: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 783673: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783674: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783676: call 0x974f00 */
  esp -= 4; W32(esp, 0x78367bu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 78367b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 78367e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78367f: call 0x97c290 */
  esp -= 4; W32(esp, 0x783684u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 783684: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 783687: jmp 0x783610 */
  goto L_783610;
L_783689: /* 783689: push 0xac6790 */
  { uint32_t v = 0xac6790u; esp -= 4; W32(esp, v); }
/* 78368e: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783693u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783693: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783694: call 0x97c260 */
  esp -= 4; W32(esp, 0x783699u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783699: mov esi, eax */
  esi = eax;
/* 78369b: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 7836a2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7836a5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7836a8: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7836ab: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7836b0u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7836b0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7836b3: mov ebx, esp */
  ebx = esp;
/* 7836b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7836b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7836b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7836ba: call 0x97c510 */
  esp -= 4; W32(esp, 0x7836bfu); SPILL(); f_97c510(); if (g_unwind) return; RELOAD();
/* 7836bf: xor eax, eax */
  eax = 0;
/* 7836c1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7836c4: /* 7836c4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7836c6: jge 0x7837ad */
  if ((sf == of)) goto L_7837ad;
L_7836cc: /* 7836cc: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 7836cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7836d0: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7836d7: call 0x97a4e0 */
  esp -= 4; W32(esp, 0x7836dcu); SPILL(); f_97a4e0(); if (g_unwind) return; RELOAD();
/* 7836dc: mov esi, eax */
  esi = eax;
/* 7836de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7836df: call 0x979f10 */
  esp -= 4; W32(esp, 0x7836e4u); SPILL(); f_979f10(); if (g_unwind) return; RELOAD();
/* 7836e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7836e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7836e8: call 0x979ef0 */
  esp -= 4; W32(esp, 0x7836edu); SPILL(); f_979ef0(); if (g_unwind) return; RELOAD();
/* 7836ed: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7836f0: je 0x78370b */
  if (zf) goto L_78370b;
L_7836f2: /* 7836f2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7836f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7836f7: je 0x78370b */
  if (zf) goto L_78370b;
L_7836f9: /* 7836f9: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7836fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7836fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7836fe: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x783703u); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 783703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783704: call 0x974fe0 */
  esp -= 4; W32(esp, 0x783709u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 783709: jmp 0x783716 */
  goto L_783716;
L_78370b: /* 78370b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78370e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 783710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783711: call 0x9784a0 */
  esp -= 4; W32(esp, 0x783716u); SPILL(); f_9784a0(); if (g_unwind) return; RELOAD();
L_783716: /* 783716: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 783719: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 78371c: mov eax, dword ptr [ebx + edx*4] */
  eax = R32((uint32_t)(ebx + edx*4));
/* 78371f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783720: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x783725u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 783725: mov esi, eax */
  esi = eax;
/* 783727: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 78372a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_783730: /* 783730: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 783732: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783733: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783735: jne 0x783730 */
  if (!zf) goto L_783730;
L_783737: /* 783737: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 783739: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78373a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78373b: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x783741u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783741: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 783744: mov ecx, esi */
  ecx = esi;
/* 783746: mov edx, eax */
  edx = eax;
L_783748: /* 783748: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 78374a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78374b: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 78374d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 78374e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783750: jne 0x783748 */
  if (!zf) goto L_783748;
L_783752: /* 783752: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783755: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 783758: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78375a: je 0x783775 */
  if (zf) goto L_783775;
L_78375c: /* 78375c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 78375f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 783762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783763: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 783766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783767: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78376a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78376b: mov edx, dword ptr [ebx + ecx*4] */
  edx = R32((uint32_t)(ebx + ecx*4));
/* 78376e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78376f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x783771u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783771: mov esi, eax */
  esi = eax;
/* 783773: jmp 0x783778 */
  goto L_783778;
L_783775: /* 783775: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_783778: /* 783778: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78377b: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 78377e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783780: je 0x783790 */
  if (zf) goto L_783790;
L_783782: /* 783782: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 783785: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 783788: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783789: mov ecx, dword ptr [ebx + edx*4] */
  ecx = R32((uint32_t)(ebx + edx*4));
/* 78378c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78378d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78378e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x783790u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_783790: /* 783790: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 783793: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783796: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783797: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783799: call 0x974f00 */
  esp -= 4; W32(esp, 0x78379eu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 78379e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7837a1: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7837a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7837a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7837a8: jmp 0x7836c4 */
  goto L_7836c4;
L_7837ad: /* 7837ad: xor esi, esi */
  esi = 0;
L_7837af: /* 7837af: cmp esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7837b2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7837b5: jge 0x783862 */
  if ((sf == of)) goto L_783862;
L_7837bb: /* 7837bb: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
L_7837be: /* 7837be: cmp edi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7837c1: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7837c4: jge 0x78385c */
  if ((sf == of)) goto L_78385c;
L_7837ca: /* 7837ca: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 7837cd: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 7837d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7837d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7837d2: call 0x97a5f0 */
  esp -= 4; W32(esp, 0x7837d7u); SPILL(); f_97a5f0(); if (g_unwind) return; RELOAD();
/* 7837d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7837d9: jne 0x783856 */
  if (!zf) goto L_783856;
L_7837db: /* 7837db: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7837de: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7837e1: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 7837e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7837e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7837e6: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x7837ebu); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 7837eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7837ec: call 0x974fe0 */
  esp -= 4; W32(esp, 0x7837f1u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 7837f1: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 7837f4: mov esi, eax */
  esi = eax;
/* 7837f6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7837f9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7837fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7837fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7837fe: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x783803u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 783803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783804: call 0x974fe0 */
  esp -= 4; W32(esp, 0x783809u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 783809: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78380b: mov edi, eax */
  edi = eax;
/* 78380d: je 0x783850 */
  if (zf) goto L_783850;
L_78380f: /* 78380f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783811: je 0x783850 */
  if (zf) goto L_783850;
L_783813: /* 783813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783814: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783819u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783819: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78381c: je 0x783850 */
  if (zf) goto L_783850;
L_78381e: /* 78381e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78381f: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783824u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783824: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783827: je 0x783850 */
  if (zf) goto L_783850;
L_783829: /* 783829: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78382a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78382b: call 0x6c5100 */
  esp -= 4; W32(esp, 0x783830u); SPILL(); f_6c5100(); if (g_unwind) return; RELOAD();
/* 783830: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783833: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 783836: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 783839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78383a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 78383d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78383e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 783841: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 783844: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 78384b: call 0x6c30c6 */
  esp -= 4; W32(esp, 0x783850u); SPILL(); f_6c30c6(); if (g_unwind) return; RELOAD();
L_783850: /* 783850: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 783853: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_783856: /* 783856: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 783857: jmp 0x7837be */
  goto L_7837be;
L_78385c: /* 78385c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78385d: jmp 0x7837af */
  goto L_7837af;
L_783862: /* 783862: push 0xac67cc */
  { uint32_t v = 0xac67ccu; esp -= 4; W32(esp, v); }
/* 783867: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78386cu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78386c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78386f: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 783872: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783874: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x783879u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 783879: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 78387c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_78387d: /* 78387d: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x783882u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 783882: mov edi, eax */
  edi = eax;
/* 783884: xor ebx, ebx */
  ebx = 0;
/* 783886: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783888: je 0x783977 */
  if (zf) goto L_783977;
L_78388e: /* 78388e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78388f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783890: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 783893: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 783896: call 0x97ad60 */
  esp -= 4; W32(esp, 0x78389bu); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 78389b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78389d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78389e: mov esi, eax */
  esi = eax;
/* 7838a0: call 0x97ad60 */
  esp -= 4; W32(esp, 0x7838a5u); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 7838a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838a7: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7838aa: je 0x7838c6 */
  if (zf) goto L_7838c6;
L_7838ac: /* 7838ac: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7838af: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7838b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7838b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7838b4: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x7838b9u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 7838b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7838ba: call 0x974fe0 */
  esp -= 4; W32(esp, 0x7838bfu); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 7838bf: mov esi, eax */
  esi = eax;
/* 7838c1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7838c4: jmp 0x7838c9 */
  goto L_7838c9;
L_7838c6: /* 7838c6: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_7838c9: /* 7838c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838cb: je 0x7838e2 */
  if (zf) goto L_7838e2;
L_7838cd: /* 7838cd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7838d0: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7838d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7838d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7838d5: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x7838dau); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 7838da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7838db: call 0x974fe0 */
  esp -= 4; W32(esp, 0x7838e0u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 7838e0: mov ebx, eax */
  ebx = eax;
L_7838e2: /* 7838e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838e4: je 0x7838f0 */
  if (zf) goto L_7838f0;
L_7838e6: /* 7838e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7838e7: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7838ecu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7838ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838ee: jne 0x7838fe */
  if (!zf) goto L_7838fe;
L_7838f0: /* 7838f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838f2: je 0x78396e */
  if (zf) goto L_78396e;
L_7838f4: /* 7838f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7838f5: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7838fau); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7838fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7838fc: je 0x78396e */
  if (zf) goto L_78396e;
L_7838fe: /* 7838fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783901: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 783904: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783906: je 0x783923 */
  if (zf) goto L_783923;
L_783908: /* 783908: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78390b: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 78390e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78390f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783911: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783913: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x783915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783915: mov ebx, eax */
  ebx = eax;
/* 783917: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783919: je 0x783926 */
  if (zf) goto L_783926;
L_78391b: /* 78391b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78391c: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783921u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 783921: jmp 0x783926 */
  goto L_783926;
L_783923: /* 783923: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_783926: /* 783926: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783929: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 78392c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78392e: je 0x783936 */
  if (zf) goto L_783936;
L_783930: /* 783930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783932: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783933: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0x783936u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_783936: /* 783936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783937: call 0x97ad30 */
  esp -= 4; W32(esp, 0x78393cu); SPILL(); f_97ad30(); if (g_unwind) return; RELOAD();
/* 78393c: mov esi, eax */
  esi = eax;
/* 78393e: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_783941: /* 783941: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 783943: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783944: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783946: jne 0x783941 */
  if (!zf) goto L_783941;
L_783948: /* 783948: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78394a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78394b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78394c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x783952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783952: mov edx, esi */
  edx = esi;
/* 783954: mov esi, eax */
  esi = eax;
L_783956: /* 783956: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 783958: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 783959: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 78395b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78395c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78395e: jne 0x783956 */
  if (!zf) goto L_783956;
L_783960: /* 783960: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783963: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 783966: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783967: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783969: call 0x974f00 */
  esp -= 4; W32(esp, 0x78396eu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_78396e: /* 78396e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 783971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783972: jmp 0x78387d */
  goto L_78387d;
L_783977: /* 783977: push 0xac6808 */
  { uint32_t v = 0xac6808u; esp -= 4; W32(esp, v); }
/* 78397c: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783981u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783981: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783984: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 783987: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78398a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 783991: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 783992: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 783993: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 783994: mov esp, ebp */
  esp = ebp;
/* 783996: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 783997: ret  */
  esp += 4; SPILL(); return;
}

void f_783998(void) {
  LOAD_REGS();
L_783998: /* 783998: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 78399b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7839a0: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7839a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7839a4: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7839a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7839acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7839ac(); return;
}

void f_7839ac(void) {
  LOAD_REGS();
L_7839ac: /* 7839ac: push 0xa095cc */
  { uint32_t v = 0xa095ccu; esp -= 4; W32(esp, v); }
/* 7839b1: push 0xac6844 */
  { uint32_t v = 0xac6844u; esp -= 4; W32(esp, v); }
/* 7839b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7839bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7839bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7839bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7839c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7839c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7839c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7839c8: guest_badaddr(0x7839c8); return;
}

void f_783af0(void) {
  LOAD_REGS();
L_783af0: /* 783af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 783af1: mov ebp, esp */
  ebp = esp;
/* 783af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 783af5: push 0x9cc9f6 */
  { uint32_t v = 0x9cc9f6u; esp -= 4; W32(esp, v); }
/* 783afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 783b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 783b08: sub esp, 0x538 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x538u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783b0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 783b0f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 783b12: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 783b14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783b15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783b16: mov ecx, ebx */
  ecx = ebx;
/* 783b18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 783b1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783b22: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x783b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783b28: mov esi, eax */
  esi = eax;
/* 783b2a: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 783b2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783b31: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 783b37: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 783b3a: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 783b3d: je 0x783c70 */
  if (zf) goto L_783c70;
L_783b43: /* 783b43: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783b45: je 0x783c70 */
  if (zf) goto L_783c70;
L_783b4b: /* 783b4b: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 783b51: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783b54: jne 0x783c70 */
  if (!zf) goto L_783c70;
L_783b5a: /* 783b5a: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783b5e: je 0x783b73 */
  if (zf) goto L_783b73;
L_783b60: /* 783b60: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783b66: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783b68: push 0xac6858 */
  { uint32_t v = 0xac6858u; esp -= 4; W32(esp, v); }
/* 783b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783b6e: jmp 0x783c67 */
  goto L_783c67;
L_783b73: /* 783b73: mov eax, dword ptr [ebx + 0x2f4] */
  eax = R32((uint32_t)(ebx + 0x2f4u));
/* 783b79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783b7b: jne 0x783c70 */
  if (!zf) goto L_783c70;
L_783b81: /* 783b81: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 783b83: mov ecx, ebx */
  ecx = ebx;
/* 783b85: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x783b8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783b8c: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x783b91u); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 783b91: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 783b94: mov eax, dword ptr [edi + 0x115c] */
  eax = R32((uint32_t)(edi + 0x115cu));
/* 783b9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783b9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783b9f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 783ba2: jne 0x783bb6 */
  if (!zf) goto L_783bb6;
L_783ba4: /* 783ba4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 783ba9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 783bab: push 0xac68e0 */
  { uint32_t v = 0xac68e0u; esp -= 4; W32(esp, v); }
/* 783bb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783bb1: jmp 0x783c67 */
  goto L_783c67;
L_783bb6: /* 783bb6: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 783bbc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783bbe: je 0x78457c */
  if (zf) goto L_78457c;
L_783bc4: /* 783bc4: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 783bc9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x783bcfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 783bcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783bd1: je 0x78457c */
  if (zf) goto L_78457c;
L_783bd7: /* 783bd7: mov edx, dword ptr [esi + 0x30c] */
  edx = R32((uint32_t)(esi + 0x30cu));
/* 783bdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783bde: call 0x6c75a9 */
  esp -= 4; W32(esp, 0x783be3u); SPILL(); f_6c75a9(); if (g_unwind) return; RELOAD();
/* 783be3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783be6: lea ecx, [eax + 0xac] */
  ecx = (uint32_t)(eax + 0xacu);
/* 783bec: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 783bef: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x783bf5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 783bf5: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783bfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783bfb: lea eax, [ebp - 0x544] */
  eax = (uint32_t)(ebp + 0xfffffabcu);
/* 783c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783c02: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783c08u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783c08: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783c0b: mov edi, dword ptr [ecx + 0x1e0] */
  edi = R32((uint32_t)(ecx + 0x1e0u));
/* 783c11: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 783c13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783c16: xor eax, eax */
  eax = 0;
/* 783c18: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 783c1a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783c1d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 783c20: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 783c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783c27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783c2e: mov ecx, ebx */
  ecx = ebx;
/* 783c30: mov dword ptr [ebp - 0x58], edi */
  W32((uint32_t)(ebp + 0xffffffa8u), edi);
/* 783c33: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x783c39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 783c39: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 783c3f: mov eax, dword ptr [edx + 0x15010] */
  eax = R32((uint32_t)(edx + 0x15010u));
/* 783c45: lea ecx, [ebp - 0x544] */
  ecx = (uint32_t)(ebp + 0xfffffabcu);
/* 783c4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783c4d: call 0x97d870 */
  esp -= 4; W32(esp, 0x783c52u); SPILL(); f_97d870(); if (g_unwind) return; RELOAD();
/* 783c52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783c54: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 783c57: jne 0x783c83 */
  if (!zf) goto L_783c83;
L_783c59: /* 783c59: push 0xac69f0 */
  { uint32_t v = 0xac69f0u; esp -= 4; W32(esp, v); }
L_783c5e: /* 783c5e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 783c64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 783c66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_783c67: /* 783c67: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783c6du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783c6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783c70: /* 783c70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 783c73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 783c7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 783c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 783c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 783c7d: mov esp, ebp */
  esp = ebp;
/* 783c7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 783c80: ret 4 */
  esp += 8; SPILL(); return;
L_783c83: /* 783c83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c89: mov ecx, esi */
  ecx = esi;
/* 783c8b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 783c8f: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x783c94u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 783c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783c95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783c97: lea ecx, [ebx + 0x2dc] */
  ecx = (uint32_t)(ebx + 0x2dcu);
/* 783c9d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783ca4: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783caau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783caa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783cab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783cad: lea ecx, [ebx + 0x2e8] */
  ecx = (uint32_t)(ebx + 0x2e8u);
/* 783cb3: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783cb9u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783cb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783cba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783cbc: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* 783cc2: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783cc8u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783cc8: push 0xac6a54 */
  { uint32_t v = 0xac6a54u; esp -= 4; W32(esp, v); }
/* 783ccd: mov dword ptr [ebx + 0x198], 1 */
  W32((uint32_t)(ebx + 0x198u), 0x1u);
/* 783cd7: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783cdcu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783cdc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783cdf: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783ce2: lea eax, [ebx + 0x330] */
  eax = (uint32_t)(ebx + 0x330u);
/* 783ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ce9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783cec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783ced: mov ecx, dword ptr [eax + 0x1164] */
  ecx = R32((uint32_t)(eax + 0x1164u));
/* 783cf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783cf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783cf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783cf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783cf9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 783cfd: call 0x783550 */
  esp -= 4; W32(esp, 0x783d02u); SPILL(); f_783550(); if (g_unwind) return; RELOAD();
/* 783d02: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d05: mov esi, eax */
  esi = eax;
/* 783d07: push 0xac6a88 */
  { uint32_t v = 0xac6a88u; esp -= 4; W32(esp, v); }
/* 783d0c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 783d0f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783d16: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783d1bu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783d1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783d1d: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783d23: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783d27: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x783d2du); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 783d2d: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 783d34: xor ecx, ecx */
  ecx = 0;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
L_78457c: /* 78457c: push 0xac6950 */
  { uint32_t v = 0xac6950u; esp -= 4; W32(esp, v); }
/* 784581: jmp 0x783c5e */
  goto L_783c5e;
}

void f_783c83(void) {
  LOAD_REGS();
L_783c83: /* 783c83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783c89: mov ecx, esi */
  ecx = esi;
/* 783c8b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 783c8f: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x783c94u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 783c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783c95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783c97: lea ecx, [ebx + 0x2dc] */
  ecx = (uint32_t)(ebx + 0x2dcu);
/* 783c9d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783ca4: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783caau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783caa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783cab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783cad: lea ecx, [ebx + 0x2e8] */
  ecx = (uint32_t)(ebx + 0x2e8u);
/* 783cb3: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783cb9u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783cb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783cba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 783cbc: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* 783cc2: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x783cc8u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 783cc8: push 0xac6a54 */
  { uint32_t v = 0xac6a54u; esp -= 4; W32(esp, v); }
/* 783ccd: mov dword ptr [ebx + 0x198], 1 */
  W32((uint32_t)(ebx + 0x198u), 0x1u);
/* 783cd7: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783cdcu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783cdc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783cdf: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783ce2: lea eax, [ebx + 0x330] */
  eax = (uint32_t)(ebx + 0x330u);
/* 783ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ce9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783cec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783ced: mov ecx, dword ptr [eax + 0x1164] */
  ecx = R32((uint32_t)(eax + 0x1164u));
/* 783cf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783cf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783cf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783cf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783cf9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 783cfd: call 0x783550 */
  esp -= 4; W32(esp, 0x783d02u); SPILL(); f_783550(); if (g_unwind) return; RELOAD();
/* 783d02: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d05: mov esi, eax */
  esi = eax;
/* 783d07: push 0xac6a88 */
  { uint32_t v = 0xac6a88u; esp -= 4; W32(esp, v); }
/* 783d0c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 783d0f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783d16: call 0x6c7405 */
  esp -= 4; W32(esp, 0x783d1bu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 783d1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 783d1d: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783d23: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783d27: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x783d2du); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 783d2d: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 783d34: xor ecx, ecx */
  ecx = 0;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783dc4(void) {
  LOAD_REGS();
  goto L_783dc4;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783e03(void) {
  LOAD_REGS();
  goto L_783e03;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783ec2(void) {
  LOAD_REGS();
  goto L_783ec2;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783ec9(void) {
  LOAD_REGS();
  goto L_783ec9;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783f1c(void) {
  LOAD_REGS();
  goto L_783f1c;
L_783d36: /* 783d36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 783d38: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 783d3b: jge 0x783fa3 */
  if ((sf == of)) goto L_783fa3;
L_783d41: /* 783d41: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 783d44: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 783d4a: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 783d4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 783d4f: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x783d55u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 783d55: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 783d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d5b: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d62: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x783d68u); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 783d68: lea ecx, [ebp - 0x344] */
  ecx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783d6f: call dword ptr [0xcfb158] */
  esp -= 4; W32(esp, 0x783d75u); SPILL(); f_42f951(); if (g_unwind) return; /* MSVCR70!_strlwr */ RELOAD();
/* 783d75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783d78: lea edx, [ebp - 0x344] */
  edx = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d80: call 0x978af0 */
  esp -= 4; W32(esp, 0x783d85u); SPILL(); f_978af0(); if (g_unwind) return; RELOAD();
/* 783d85: mov edi, eax */
  edi = eax;
/* 783d87: lea eax, [ebp - 0x344] */
  eax = (uint32_t)(ebp + 0xfffffcbcu);
/* 783d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783d8f: call 0x978b10 */
  esp -= 4; W32(esp, 0x783d94u); SPILL(); f_978b10(); if (g_unwind) return; RELOAD();
/* 783d94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783d96: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 783d99: je 0x783f94 */
  if (zf) goto L_783f94;
L_783d9f: /* 783d9f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 783da2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 783da3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 783da5: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 783da8: call 0x6c242d */
  esp -= 4; W32(esp, 0x783dadu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 783dad: mov ecx, eax */
  ecx = eax;
/* 783daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783db2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 783db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783db7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 783dbb: je 0x783dc4 */
  if (zf) goto L_783dc4;
L_783dbd: /* 783dbd: call 0x6c4606 */
  esp -= 4; W32(esp, 0x783dc2u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 783dc2: jmp 0x783dc6 */
  goto L_783dc6;
L_783dc4: /* 783dc4: xor eax, eax */
  eax = 0;
L_783dc6: /* 783dc6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 783dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783dcb: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 783dcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 783dd1: call 0x928790 */
  esp -= 4; W32(esp, 0x783dd6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 783dd6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ddb: je 0x783e0a */
  if (zf) goto L_783e0a;
L_783ddd: /* 783ddd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783de0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_783de3: /* 783de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783de5: je 0x783e03 */
  if (zf) goto L_783e03;
L_783de7: /* 783de7: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 783ded: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 783df0: mov eax, dword ptr [eax + edx + 0x34] */
  eax = R32((uint32_t)(eax + edx + 0x34u));
/* 783df4: mov edx, dword ptr [ebx + 0x2d0] */
  edx = R32((uint32_t)(ebx + 0x2d0u));
/* 783dfa: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 783e01: jmp 0x783de3 */
  goto L_783de3;
L_783e03: /* 783e03: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_783e0a: /* 783e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783e0b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x783e10u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 783e10: mov esi, eax */
  esi = eax;
/* 783e12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e1d: mov ecx, ebx */
  ecx = ebx;
/* 783e1f: call 0x6c5060 */
  esp -= 4; W32(esp, 0x783e24u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 783e24: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 783e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783e2b: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 783e31: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x783e37u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 783e37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e3c: mov ecx, esp */
  ecx = esp;
/* 783e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e40: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 783e43: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 783e46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 783e49: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 783e4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 783e52: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 783e58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 783e5b: mov ecx, esp */
  ecx = esp;
/* 783e5d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 783e5f: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 783e65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 783e68: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 783e72: call 0x6c8eae */
  esp -= 4; W32(esp, 0x783e77u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 783e77: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783e7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783e7c: je 0x783ec9 */
  if (zf) goto L_783ec9;
L_783e7e: /* 783e7e: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 783e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e86: call 0x90e790 */
  esp -= 4; W32(esp, 0x783e8bu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 783e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e8c: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x783e91u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 783e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e92: call 0x90f6e0 */
  esp -= 4; W32(esp, 0x783e97u); SPILL(); f_90f6e0(); if (g_unwind) return; RELOAD();
/* 783e97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 783e9a: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 783e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783e9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783e9f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x783ea4u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 783ea4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 783ea7: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 783eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eac: call 0x90ea90 */
  esp -= 4; W32(esp, 0x783eb1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 783eb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 783eb4: test byte ptr [eax + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eb9: je 0x783ec2 */
  if (zf) goto L_783ec2;
L_783ebb: /* 783ebb: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x783ec0u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 783ec0: jmp 0x783edc */
  goto L_783edc;
L_783ec2: /* 783ec2: call 0x90f080 */
  esp -= 4; W32(esp, 0x783ec7u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 783ec7: jmp 0x783edc */
  goto L_783edc;
L_783ec9: /* 783ec9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783eca: call 0x928730 */
  esp -= 4; W32(esp, 0x783ecfu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 783ecf: mov ecx, eax */
  ecx = eax;
/* 783ed1: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 783ed7: call 0x781cd0 */
  esp -= 4; W32(esp, 0x783edcu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_783edc: /* 783edc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 783edf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783ee1: je 0x783f1c */
  if (zf) goto L_783f1c;
L_783ee3: /* 783ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ee4: call 0x90bd20 */
  esp -= 4; W32(esp, 0x783ee9u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 783ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783eeb: jne 0x783ef3 */
  if (!zf) goto L_783ef3;
L_783eed: /* 783eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783eee: call 0x90bc20 */
  esp -= 4; W32(esp, 0x783ef3u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_783ef3: /* 783ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 783ef4: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x783ef9u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 783ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783efb: je 0x783f07 */
  if (zf) goto L_783f07;
L_783efd: /* 783efd: mov dword ptr [eax + 0x168], 1 */
  W32((uint32_t)(eax + 0x168u), 0x1u);
L_783f07: /* 783f07: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 783f0a: mov ecx, dword ptr [ebx + 0x2e8] */
  ecx = R32((uint32_t)(ebx + 0x2e8u));
/* 783f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 783f11: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 783f14: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f17: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 783f1a: jmp 0x783f1f */
  goto L_783f1f;
L_783f1c: /* 783f1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_783f1f: /* 783f1f: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 783f25: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 783f28: mov ecx, dword ptr [ebx + 0x2d0] */
  ecx = R32((uint32_t)(ebx + 0x2d0u));
/* 783f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f2f: mov dword ptr [ecx + eax*4], 1 */
  W32((uint32_t)(ecx + eax*4), 0x1u);
/* 783f36: call 0x9287f0 */
  esp -= 4; W32(esp, 0x783f3bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 783f3b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 783f3e: je 0x783f94 */
  if (zf) goto L_783f94;
L_783f40: /* 783f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f41: call 0x928630 */
  esp -= 4; W32(esp, 0x783f46u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 783f46: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 783f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f4a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 783f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783f4f: call 0x928710 */
  esp -= 4; W32(esp, 0x783f54u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 783f54: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 783f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f58: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f5c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f61u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f64: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f68: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f6e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f74u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783f74: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 783f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783f78: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 783f7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783f7c: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783f81u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783f81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783f84: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 783f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783f88: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 783f8e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783f94u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783f94: /* 783f94: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 783f97: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 783f9a: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 783f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 783f9e: jmp 0x783d36 */
  goto L_783d36;
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_783fa3(void) {
  LOAD_REGS();
L_783fa3: /* 783fa3: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 783fa9: mov ecx, 7 */
  ecx = 0x7u;
/* 783fae: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 783fb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 783fb6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 783fc1: call 0x97c260 */
  esp -= 4; W32(esp, 0x783fc6u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 783fc6: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fc9: je 0x783fe2 */
  if (zf) goto L_783fe2;
L_783fcb: /* 783fcb: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783fd1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783fd3: push 0xac6ac0 */
  { uint32_t v = 0xac6ac0u; esp -= 4; W32(esp, v); }
/* 783fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783fd9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x783fdfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 783fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_783fe2: /* 783fe2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 783fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783fe6: call 0x97c250 */
  esp -= 4; W32(esp, 0x783febu); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 783feb: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 783fee: je 0x784007 */
  if (zf) goto L_784007;
L_783ff0: /* 783ff0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 783ff6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 783ff8: push 0xac6b28 */
  { uint32_t v = 0xac6b28u; esp -= 4; W32(esp, v); }
/* 783ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 783ffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x784004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 784004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784007: /* 784007: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78400d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x784013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 784013: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 784016: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 78401c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78401e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784022: call 0x978b30 */
  esp -= 4; W32(esp, 0x784027u); SPILL(); f_978b30(); if (g_unwind) return; RELOAD();
/* 784027: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 78402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78402e: /* 78402e: call 0x978b50 */
  esp -= 4; W32(esp, 0x784033u); SPILL(); f_978b50(); if (g_unwind) return; RELOAD();
/* 784033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 784038: je 0x78405c */
  if (zf) goto L_78405c;
L_78403a: /* 78403a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78403b: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x784040u); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 784040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784042: jne 0x784053 */
  if (!zf) goto L_784053;
L_784044: /* 784044: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 784047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 784048: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 78404e: call 0x6c65b9 */
  esp -= 4; W32(esp, 0x784053u); SPILL(); f_6c65b9(); if (g_unwind) return; RELOAD();
L_784053: /* 784053: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 784059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78405a: jmp 0x78402e */
  goto L_78402e;
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78405c(void) {
  LOAD_REGS();
L_78405c: /* 78405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78405d: call 0x9788f0 */
  esp -= 4; W32(esp, 0x784062u); SPILL(); f_9788f0(); if (g_unwind) return; RELOAD();
/* 784062: xor esi, esi */
  esi = 0;
L_784064: /* 784064: cmp esi, dword ptr [ebp - 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784067: jge 0x78408b */
  if ((sf == of)) goto L_78408b;
L_784069: /* 784069: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78406f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 784072: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 784078: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78407e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78407f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784080: call 0x6c165e */
  esp -= 4; W32(esp, 0x784085u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 784085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784088: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 784089: jmp 0x784064 */
  goto L_784064;
L_78408b: /* 78408b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78408e: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 784094: mov dword ptr [ebx + 0x32c], ecx */
  W32((uint32_t)(ebx + 0x32cu), ecx);
/* 78409a: xor eax, eax */
  eax = 0;
/* 78409c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7840a0: /* 7840a0: cmp eax, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7840a6: jge 0x7840cb */
  if ((sf == of)) goto L_7840cb;
L_7840a8: /* 7840a8: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7840ae: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840b2: je 0x7840c8 */
  if (zf) goto L_7840c8;
L_7840b4: /* 7840b4: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840ba: jne 0x7840c2 */
  if (!zf) goto L_7840c2;
L_7840bc: /* 7840bc: mov dword ptr [ebx + 0x328], eax */
  W32((uint32_t)(ebx + 0x328u), eax);
L_7840c2: /* 7840c2: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_7840c8: /* 7840c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7840c9: jmp 0x7840a0 */
  goto L_7840a0;
L_7840cb: /* 7840cb: cmp dword ptr [ebx + 0x328], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x328u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d1: je 0x7840db */
  if (zf) goto L_7840db;
L_7840d3: /* 7840d3: cmp dword ptr [ebx + 0x32c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x32cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7840d9: jne 0x7840f3 */
  if (!zf) goto L_7840f3;
L_7840db: /* 7840db: push 0x23a */
  { uint32_t v = 0x23au; esp -= 4; W32(esp, v); }
/* 7840e0: push 0xac6b94 */
  { uint32_t v = 0xac6b94u; esp -= 4; W32(esp, v); }
/* 7840e5: push 0xac6ba8 */
  { uint32_t v = 0xac6ba8u; esp -= 4; W32(esp, v); }
/* 7840ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7840f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7840f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7840f3: /* 7840f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7840f6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7840f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7840fb: mov edi, 1 */
  edi = 0x1u;
/* 784100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 784102: mov dword ptr [ebx + 0x78], edi */
  W32((uint32_t)(ebx + 0x78u), edi);
/* 784105: mov dword ptr [ebx + 0x2f4], edi */
  W32((uint32_t)(ebx + 0x2f4u), edi);
/* 78410b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78410c: mov ecx, esi */
  ecx = esi;
/* 78410e: mov dword ptr [eax + 0x54], 0x7f7fffff */
  W32((uint32_t)(eax + 0x54u), 0x7f7fffffu);
/* 784115: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 784119: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x78411eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 78411e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 784124: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 784127: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78412a: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78412d: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 784133: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 784138: add dword ptr [eax + 0x15230], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78413e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 784144: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 784147: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 784149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78414a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78414b: mov dword ptr [ebp - 4], 8 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 784152: call 0x6c3cab */
  esp -= 4; W32(esp, 0x784157u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 784157: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78415d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78415f: add edi, 0x116c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x116cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 784165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 784167: mov ecx, edi */
  ecx = edi;
/* 784169: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78416fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78416f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 784171: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 784174: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78417a: mov ecx, dword ptr [eax + 0x117c] */
  ecx = R32((uint32_t)(eax + 0x117cu));
/* 784180: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 784182: jle 0x7841ec */
  if ((zf || sf != of)) goto L_7841ec;
L_784184: /* 784184: mov edx, dword ptr [eax + 0x1178] */
  edx = R32((uint32_t)(eax + 0x1178u));
/* 78418a: lea edi, [eax + 0x1178] */
  edi = (uint32_t)(eax + 0x1178u);
/* 784190: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 784192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 784195: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 784198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78419a: jge 0x7841b4 */
  if ((sf == of)) goto L_7841b4;
L_78419c: /* 78419c: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7841a1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841a6: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7841ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841b4: /* 7841b4: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841b8: jge 0x7841d2 */
  if ((sf == of)) goto L_7841d2;
L_7841ba: /* 7841ba: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7841bf: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7841c4: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7841c9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7841cfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7841cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7841d2: /* 7841d2: xor eax, eax */
  eax = 0;
L_7841d4: /* 7841d4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7841d7: jge 0x7841dc */
  if ((sf == of)) goto L_7841dc;
L_7841d9: /* 7841d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7841da: jmp 0x7841d4 */
  goto L_7841d4;
L_7841dc: /* 7841dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7841de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7841e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7841e2: mov ecx, edi */
  ecx = edi;
/* 7841e4: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7841eau); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7841ea: jmp 0x784205 */
  goto L_784205;
L_7841ec: /* 7841ec: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7841f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7841f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7841f6: push 0xac6bfc */
  { uint32_t v = 0xac6bfcu; esp -= 4; W32(esp, v); }
/* 7841fb: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 784200: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x784202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784202: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_784205: /* 784205: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 784208: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78420a: jne 0x784224 */
  if (!zf) goto L_784224;
L_78420c: /* 78420c: push 0x263 */
  { uint32_t v = 0x263u; esp -= 4; W32(esp, v); }
/* 784211: push 0xac6c1c */
  { uint32_t v = 0xac6c1cu; esp -= 4; W32(esp, v); }
/* 784216: push 0xac6c2c */
  { uint32_t v = 0xac6c2cu; esp -= 4; W32(esp, v); }
/* 78421b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x784221u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 784221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_784224: /* 784224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784225: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x78422au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 78422a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78422d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 784230: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784233: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* 784236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784239: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 78423c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78423e: mov edx, esp */
  edx = esp;
/* 784240: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784242: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 784245: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 784248: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78424b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78424e: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 784251: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 784253: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784256: mov eax, esp */
  eax = esp;
/* 784258: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78425a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78425d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 784260: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 784263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 784264: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 784267: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x78426cu); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 78426c: fld dword ptr [edi + 0xdc] */
  { double v = F32((uint32_t)(edi + 0xdcu)); FPUSH(v); }
/* 784272: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 784278: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78427b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78427d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 784280: jne 0x784459 */
  if (!zf) goto L_784459;
L_784286: /* 784286: xor ecx, ecx */
  ecx = 0;
/* 784288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78428a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 78428d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 784290: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 784293: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 784299: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 78429f: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7842a5: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7842ab: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7842b1: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7842b7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7842bd: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7842c3: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7842c9: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 7842cf: lea eax, [edi + 0xc4] */
  eax = (uint32_t)(edi + 0xc4u);
/* 7842d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7842d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842db: mov ecx, esp */
  ecx = esp;
/* 7842dd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842df: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7842e2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842e5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7842e8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7842eb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7842ed: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7842ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7842f2: mov ecx, esp */
  ecx = esp;
/* 7842f4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7842f6: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7842f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7842fc: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7842ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 784302: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 784305: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784308: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78430d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 78430f: mov ecx, esp */
  ecx = esp;
/* 784311: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 784313: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 784316: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 784319: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 78431c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 784320: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 784326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 784327: mov ecx, ebx */
  ecx = ebx;
/* 784329: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 784333: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 78433d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x784340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 784340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784342: jne 0x784459 */
  if (!zf) goto L_784459;
L_784348: /* 784348: mov eax, dword ptr [ebx + 0x2f8] */
  eax = R32((uint32_t)(ebx + 0x2f8u));
/* 78434e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 784351: je 0x784459 */
  if (zf) goto L_784459;
L_784357: /* 784357: cmp eax, dword ptr [ebx + 0x328] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x328u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78435d: jl 0x784367 */
  if ((sf != of)) goto L_784367;
L_78435f: /* 78435f: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 784365: jle 0x78437f */
  if ((zf || sf != of)) goto L_78437f;
L_784367: /* 784367: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 78436c: push 0xac6c34 */
  { uint32_t v = 0xac6c34u; esp -= 4; W32(esp, v); }
/* 784371: push 0xac6c48 */
  { uint32_t v = 0xac6c48u; esp -= 4; W32(esp, v); }
/* 784376: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78437cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78437c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78437f: /* 78437f: mov edx, dword ptr [ebx + 0x2f8] */
  edx = R32((uint32_t)(ebx + 0x2f8u));
/* 784385: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 78438b: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 78438e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 784390: jne 0x7843aa */
  if (!zf) goto L_7843aa;
L_784392: /* 784392: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 784397: push 0xac6ca4 */
  { uint32_t v = 0xac6ca4u; esp -= 4; W32(esp, v); }
/* 78439c: push 0xac6cb4 */
  { uint32_t v = 0xac6cb4u; esp -= 4; W32(esp, v); }
/* 7843a1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7843a7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7843a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7843aa: /* 7843aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7843ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7843b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7843b0: mov edi, eax */
  edi = eax;
/* 7843b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7843b4: je 0x784459 */
  if (zf) goto L_784459;
L_7843ba: /* 7843ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7843bd: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 7843c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7843c6: fsub dword ptr [esi + 0xcc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xccu)));
/* 7843cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7843cd: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7843d3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7843d6: fsub dword ptr [esi + 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc8u)));
/* 7843dc: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* 7843e2: fsub dword ptr [esi + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc4u)));
/* 7843e8: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7843eb: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7843ee: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7843f1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7843f7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7843f7: fld dword ptr [0xa093e4] */
  { double v = F32((uint32_t)(0xa093e4u)); FPUSH(v); }
/* 7843fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 784400: fmul dword ptr [esi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xdcu)));
/* 784406: mov edx, esp */
  edx = esp;
/* 784408: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78440b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78440d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 784410: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 784413: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 784416: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 784418: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78441a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78441d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 784420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 784423: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 784426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 784428: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78442b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78442c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78442f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 784432: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 784435: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 784437: call 0x6c882d */
  esp -= 4; W32(esp, 0x78443cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78443c: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78443f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 784442: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 784445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 784448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 784449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78444b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78444c: call 0x90f480 */
  esp -= 4; W32(esp, 0x784451u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 784451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 784452: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x784457u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 784457: jmp 0x78445c */
  goto L_78445c;
L_784459: /* 784459: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78445c: /* 78445c: mov dword ptr [ebx + 0x344], 0 */
  W32((uint32_t)(ebx + 0x344u), 0x0u);
/* 784466: test byte ptr [esi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78446d: je 0x784490 */
  if (zf) goto L_784490;
L_78446f: /* 78446f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 784475: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x78447bu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 78447b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 78447e: fadd dword ptr [ebx + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x344u)));
/* 784484: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 78448a: fstp dword ptr [ebx + 0x350] */
  WF32((uint32_t)(ebx + 0x350u), ST0); FPOP();
L_784490: /* 784490: push 0xac6cc4 */
  { uint32_t v = 0xac6cc4u; esp -= 4; W32(esp, v); }
/* 784495: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78449au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78449a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7844a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7844a4: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7844a9u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7844a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7844ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7844ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7844ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7844b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7844b6: mov esp, ebp */
  esp = ebp;
/* 7844b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7844b9: ret 4 */
  esp += 8; SPILL(); return;
}
