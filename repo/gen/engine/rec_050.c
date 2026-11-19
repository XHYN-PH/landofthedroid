#include "recomp.h"
#include "rec_mod.h"

void f_7e079a(void) {
  LOAD_REGS();
  goto L_7e079a;
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e079a: /* 7e079a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}

void f_7e0a85(void) {
  LOAD_REGS();
L_7e0a85: /* 7e0a85: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e0a8b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e0a90: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7e0a93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a94: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7e0a97: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0a9cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e0a9c(); return;
}

void f_7e0a9c(void) {
  LOAD_REGS();
L_7e0a9c: /* 7e0a9c: push 0xa0ffcc */
  { uint32_t v = 0xa0ffccu; esp -= 4; W32(esp, v); }
/* 7e0aa1: push 0xadd2cc */
  { uint32_t v = 0xadd2ccu; esp -= 4; W32(esp, v); }
/* 7e0aa6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e0aacu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e0aac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0aaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0ab1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0ab3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0ab8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e0ab8: guest_badaddr(0x7e0ab8); return;
}

void f_7e0c60(void) {
  LOAD_REGS();
L_7e0c60: /* 7e0c60: ret  */
  esp += 4; SPILL(); return;
}

void f_7e0c80(void) {
  LOAD_REGS();
L_7e0c80: /* 7e0c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e0c81: mov ebp, esp */
  ebp = esp;
/* 7e0c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e0c85: push 0x9d0c90 */
  { uint32_t v = 0x9d0c90u; esp -= 4; W32(esp, v); }
/* 7e0c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e0c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e0c98: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e0c9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e0c9f: mov ebx, dword ptr [0xcfa7a0] */
  ebx = R32((uint32_t)(0xcfa7a0u));
/* 7e0ca5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0ca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0ca7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7e0caa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e0cad: mov esi, ecx */
  esi = ecx;
/* 7e0caf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e0cb6: jmp 0x7e0cc0 */
  goto L_7e0cc0;
L_7e0cc0: /* 7e0cc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0cc2: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e0cc7: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 7e0ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0cce: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e0cd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0cd2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e0cd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0cd4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0cd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0cd9: je 0x7e0d61 */
  if (zf) goto L_7e0d61;
L_7e0cdf: /* 7e0cdf: mov eax, dword ptr [esi + 0xea8] */
  eax = R32((uint32_t)(esi + 0xea8u));
/* 7e0ce5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0ce8: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 7e0cee: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 7e0cf1: je 0x7e0d1d */
  if (zf) goto L_7e0d1d;
L_7e0cf3: /* 7e0cf3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0cf6: jne 0x7e0d0e */
  if (!zf) goto L_7e0d0e;
L_7e0cf8: /* 7e0cf8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7e0cfb: push 0xadd5b8 */
  { uint32_t v = 0xadd5b8u; esp -= 4; W32(esp, v); }
/* 7e0d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0d01: call dword ptr [0xcfa5b8] */
  esp -= 4; W32(esp, 0x7e0d07u); SPILL(); f_4e32ec(); if (g_unwind) return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */ RELOAD();
/* 7e0d07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0d0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0d0c: jne 0x7e0d1d */
  if (!zf) goto L_7e0d1d;
L_7e0d0e: /* 7e0d0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e0d11: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 7e0d14: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7e0d17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0d18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0d19: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7e0d1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0d1b: jmp 0x7e0cc0 */
  goto L_7e0cc0;
L_7e0d1d: /* 7e0d1d: mov eax, dword ptr [esi + 0xea0] */
  eax = R32((uint32_t)(esi + 0xea0u));
/* 7e0d23: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0d26: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 7e0d29: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e0d2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0d2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0d2d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7e0d2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0d2f: jmp 0x7e0cc0 */
  goto L_7e0cc0;
L_7e0d61: /* 7e0d61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e0d64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e0d65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e0d66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e0d6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e0d6e: mov esp, ebp */
  esp = ebp;
/* 7e0d70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0d71: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e0cb8(void) {
  LOAD_REGS();
L_7e0cb8: /* 7e0cb8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7e0cbf: nop  */
L_7e0cc0: /* 7e0cc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0cc2: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e0cc7: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 7e0ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0cce: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e0cd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0cd2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e0cd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0cd4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0cd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0cd9: je 0x7e0d61 */
  if (zf) goto L_7e0d61;
L_7e0cdf: /* 7e0cdf: mov eax, dword ptr [esi + 0xea8] */
  eax = R32((uint32_t)(esi + 0xea8u));
/* 7e0ce5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0ce8: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 7e0cee: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 7e0cf1: je 0x7e0d1d */
  if (zf) goto L_7e0d1d;
L_7e0cf3: /* 7e0cf3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0cf6: jne 0x7e0d0e */
  if (!zf) goto L_7e0d0e;
L_7e0cf8: /* 7e0cf8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7e0cfb: push 0xadd5b8 */
  { uint32_t v = 0xadd5b8u; esp -= 4; W32(esp, v); }
/* 7e0d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0d01: call dword ptr [0xcfa5b8] */
  esp -= 4; W32(esp, 0x7e0d07u); SPILL(); f_4e32ec(); if (g_unwind) return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */ RELOAD();
/* 7e0d07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0d0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0d0c: jne 0x7e0d1d */
  if (!zf) goto L_7e0d1d;
L_7e0d0e: /* 7e0d0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e0d11: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 7e0d14: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7e0d17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0d18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0d19: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7e0d1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0d1b: jmp 0x7e0cc0 */
  goto L_7e0cc0;
L_7e0d1d: /* 7e0d1d: mov eax, dword ptr [esi + 0xea0] */
  eax = R32((uint32_t)(esi + 0xea0u));
/* 7e0d23: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0d26: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 7e0d29: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e0d2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0d2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0d2d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7e0d2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0d2f: jmp 0x7e0cc0 */
  goto L_7e0cc0;
L_7e0d61: /* 7e0d61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e0d64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e0d65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e0d66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e0d6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e0d6e: mov esp, ebp */
  esp = ebp;
/* 7e0d70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0d71: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e0d31(void) {
  LOAD_REGS();
L_7e0d31: /* 7e0d31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e0d34: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e0d39: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e0d3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0d3d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e0d40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0d45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e0d45(); return;
}

void f_7e0d45(void) {
  LOAD_REGS();
L_7e0d45: /* 7e0d45: push 0xa1000c */
  { uint32_t v = 0xa1000cu; esp -= 4; W32(esp, v); }
/* 7e0d4a: push 0xadd5cc */
  { uint32_t v = 0xadd5ccu; esp -= 4; W32(esp, v); }
/* 7e0d4f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e0d55u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e0d55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0d58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0d5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0d5c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0d61u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e0d61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e0d64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e0d65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e0d66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e0d6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e0d6e: mov esp, ebp */
  esp = ebp;
/* 7e0d70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0d71: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e0dc0(void) {
  LOAD_REGS();
L_7e0dc0: /* 7e0dc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e0dc1: mov ebp, esp */
  ebp = esp;
/* 7e0dc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e0dc5: push 0x9d0ca0 */
  { uint32_t v = 0x9d0ca0u; esp -= 4; W32(esp, v); }
/* 7e0dca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e0dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0dd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e0dd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e0ddb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e0dde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e0ddf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0de0: mov esi, ecx */
  esi = ecx;
/* 7e0de2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e0de4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0de5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e0de8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e0def: mov dword ptr [esi + 0xea0], eax */
  W32((uint32_t)(esi + 0xea0u), eax);
/* 7e0df5: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7e0dfbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0dfb: mov ecx, dword ptr [esi + 0xea0] */
  ecx = R32((uint32_t)(esi + 0xea0u));
/* 7e0e01: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e0e07u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e0e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0e08: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7e0e0d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0e0f: push 0xadd5d8 */
  { uint32_t v = 0xadd5d8u; esp -= 4; W32(esp, v); }
/* 7e0e14: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 7e0e19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0e1a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7e0e20u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7e0e20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e0e23: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0e26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e0e27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e0e28: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e0e2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e0e30: mov esp, ebp */
  esp = ebp;
/* 7e0e32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0e33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e0e36(void) {
  LOAD_REGS();
L_7e0e36: /* 7e0e36: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e0e39: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e0e3e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e0e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0e42: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e0e45: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0e4au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e0e4a(); return;
}

void f_7e0e4a(void) {
  LOAD_REGS();
L_7e0e4a: /* 7e0e4a: push 0xa1004c */
  { uint32_t v = 0xa1004cu; esp -= 4; W32(esp, v); }
/* 7e0e4f: push 0xadd618 */
  { uint32_t v = 0xadd618u; esp -= 4; W32(esp, v); }
/* 7e0e54: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e0e5au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e0e5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0e5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0e5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0e61: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0e66u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e0e66: guest_badaddr(0x7e0e66); return;
}

void f_7e0ea0(void) {
  LOAD_REGS();
L_7e0ea0: /* 7e0ea0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7e0ea4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7e0ea5: je 0x7e0ecb */
  if (zf) goto L_7e0ecb;
L_7e0ea7: /* 7e0ea7: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e0eaa: jne 0x7e0ee7 */
  if (!zf) goto L_7e0ee7;
L_7e0eac: /* 7e0eac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e0eb0: mov dl, byte ptr [eax + ecx + 0xeb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xeb0u))) & 0xffu);
/* 7e0eb7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0eb9: je 0x7e0eda */
  if (zf) goto L_7e0eda;
L_7e0ebb: /* 7e0ebb: mov byte ptr [eax + ecx + 0xeb0], 0 */
  W8((uint32_t)(eax + ecx + 0xeb0u), 0x0u);
/* 7e0ec3: mov eax, 1 */
  eax = 0x1u;
/* 7e0ec8: ret 0xc */
  esp += 16; SPILL(); return;
L_7e0ecb: /* 7e0ecb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e0ecf: mov dl, byte ptr [eax + ecx + 0xeb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xeb0u))) & 0xffu);
/* 7e0ed6: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0ed8: je 0x7e0edf */
  if (zf) goto L_7e0edf;
L_7e0eda: /* 7e0eda: xor eax, eax */
  eax = 0;
/* 7e0edc: ret 0xc */
  esp += 16; SPILL(); return;
L_7e0edf: /* 7e0edf: mov byte ptr [eax + ecx + 0xeb0], 1 */
  W8((uint32_t)(eax + ecx + 0xeb0u), 0x1u);
L_7e0ee7: /* 7e0ee7: mov eax, 1 */
  eax = 0x1u;
/* 7e0eec: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7e0f10(void) {
  LOAD_REGS();
L_7e0f10: /* 7e0f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e0f11: mov ebp, esp */
  ebp = esp;
/* 7e0f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e0f15: push 0x9d0cb0 */
  { uint32_t v = 0x9d0cb0u; esp -= 4; W32(esp, v); }
/* 7e0f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e0f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e0f28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e0f2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e0f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0f2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e0f30: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e0f32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0f33: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e0f36: mov ebx, ecx */
  ebx = ecx;
/* 7e0f38: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e0f3f: jl 0x7e10a3 */
  if ((sf != of)) goto L_7e10a3;
L_7e0f45: /* 7e0f45: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0f4b: jge 0x7e10a3 */
  if ((sf == of)) goto L_7e10a3;
L_7e0f51: /* 7e0f51: call dword ptr [0xcfa954] */
  esp -= 4; W32(esp, 0x7e0f57u); SPILL(); f_4e292d(); if (g_unwind) return; /* Core!?appStaticString1024@@YAPAGXZ */ RELOAD();
/* 7e0f57: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f5a: mov edi, eax */
  edi = eax;
/* 7e0f5c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7e0f5f: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f65: /* 7e0f65: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f68: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f6e: /* 7e0f6e: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f71: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f73: /* 7e0f73: cmp esi, 0x13 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f76: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f78: /* 7e0f78: cmp esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f7b: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f7d: /* 7e0f7d: cmp esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f80: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f82: /* 7e0f82: cmp esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f85: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f87: /* 7e0f87: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f8a: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f8c: /* 7e0f8c: cmp esi, 0x90 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f92: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f94: /* 7e0f94: cmp esi, 0x1b */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0f97: je 0x7e0fee */
  if (zf) goto L_7e0fee;
L_7e0f99: /* 7e0f99: cmp esi, 0xc8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0f9f: jl 0x7e0fa9 */
  if ((sf != of)) goto L_7e0fa9;
L_7e0fa1: /* 7e0fa1: cmp esi, 0xd7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xd7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fa7: jle 0x7e0fee */
  if ((zf || sf != of)) goto L_7e0fee;
L_7e0fa9: /* 7e0fa9: cmp esi, 0xe4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0faf: jl 0x7e0fb9 */
  if ((sf != of)) goto L_7e0fb9;
L_7e0fb1: /* 7e0fb1: cmp esi, 0xed */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xedu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fb7: jle 0x7e0fee */
  if ((zf || sf != of)) goto L_7e0fee;
L_7e0fb9: /* 7e0fb9: cmp esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fbf: jl 0x7e0fc9 */
  if ((sf != of)) goto L_7e0fc9;
L_7e0fc1: /* 7e0fc1: cmp esi, 0xf3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fc7: jle 0x7e0fee */
  if ((zf || sf != of)) goto L_7e0fee;
L_7e0fc9: /* 7e0fc9: cmp esi, 0x60 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fcc: jl 0x7e0fd3 */
  if ((sf != of)) goto L_7e0fd3;
L_7e0fce: /* 7e0fce: cmp esi, 0x6f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fd1: jle 0x7e0fee */
  if ((zf || sf != of)) goto L_7e0fee;
L_7e0fd3: /* 7e0fd3: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fd6: jl 0x7e0fdd */
  if ((sf != of)) goto L_7e0fdd;
L_7e0fd8: /* 7e0fd8: cmp esi, 0x2f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0fdb: jle 0x7e0fee */
  if ((zf || sf != of)) goto L_7e0fee;
L_7e0fdd: /* 7e0fdd: mov ecx, dword ptr [ebx + 0xea0] */
  ecx = R32((uint32_t)(ebx + 0xea0u));
/* 7e0fe3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e0fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0fe6: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7e0fecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0fec: jmp 0x7e1011 */
  goto L_7e1011;
L_7e0fee: /* 7e0fee: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e0ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0ff1: mov ecx, ebx */
  ecx = ebx;
/* 7e0ff3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7e0ff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0ff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0ffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0ffd: push 0xadd8a8 */
  { uint32_t v = 0xadd8a8u; esp -= 4; W32(esp, v); }
/* 7e1002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1003: push 0xadd8b8 */
  { uint32_t v = 0xadd8b8u; esp -= 4; W32(esp, v); }
/* 7e1008: call dword ptr [0xcfa330] */
  esp -= 4; W32(esp, 0x7e100eu); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* 7e100e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e1011: /* 7e1011: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7e1016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1017: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e1018: mov edi, dword ptr [0xcfa5a4] */
  edi = R32((uint32_t)(0xcfa5a4u));
/* 7e101e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1020: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e1023: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1026: push 0xadd8cc */
  { uint32_t v = 0xadd8ccu; esp -= 4; W32(esp, v); }
/* 7e102b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e102c: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7e1032u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7e1032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1037: jne 0x7e1053 */
  if (!zf) goto L_7e1053;
L_7e1039: /* 7e1039: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e103b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e103c: mov ecx, ebx */
  ecx = ebx;
/* 7e103e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7e1044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1044: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7e1049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e104a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e104d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e104e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1050u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e1053: /* 7e1053: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1056: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1057: call dword ptr [0xcfa958] */
  esp -= 4; W32(esp, 0x7e105du); SPILL(); f_4e1406(); if (g_unwind) return; /* Core!?appStrupr@@YAPAGPAG@Z */ RELOAD();
/* 7e105d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1063: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e106a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e106b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e106c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e106d: mov esp, ebp */
  esp = ebp;
/* 7e106f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1070: ret 4 */
  esp += 8; SPILL(); return;
L_7e10a3: /* 7e10a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e10a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e10a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e10a8: mov eax, 0xb82230 */
  eax = 0xb82230u;
/* 7e10ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e10b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e10b5: mov esp, ebp */
  esp = ebp;
/* 7e10b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e10b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1073(void) {
  LOAD_REGS();
L_7e1073: /* 7e1073: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e1076: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e107b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e107e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e107f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e1082: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1087u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e1087(); return;
}

void f_7e1087(void) {
  LOAD_REGS();
L_7e1087: /* 7e1087: push 0xa1006c */
  { uint32_t v = 0xa1006cu; esp -= 4; W32(esp, v); }
/* 7e108c: push 0xadd8dc */
  { uint32_t v = 0xadd8dcu; esp -= 4; W32(esp, v); }
/* 7e1091: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e1097u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e1097: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e109a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e109c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e109e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e10a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e10a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e10a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e10a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e10a8: mov eax, 0xb82230 */
  eax = 0xb82230u;
/* 7e10ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e10b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e10b5: mov esp, ebp */
  esp = ebp;
/* 7e10b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e10b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1130(void) {
  LOAD_REGS();
L_7e1130: /* 7e1130: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e1133: xor eax, eax */
  eax = 0;
/* 7e1135: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1137: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7e113a: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1150(void) {
  LOAD_REGS();
L_7e1150: /* 7e1150: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e1153: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1170(void) {
  LOAD_REGS();
L_7e1170: /* 7e1170: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e1173: xor eax, eax */
  eax = 0;
/* 7e1175: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1177: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7e117a: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1190(void) {
  LOAD_REGS();
L_7e1190: /* 7e1190: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e1193: ret  */
  esp += 4; SPILL(); return;
}

void f_7e11b0(void) {
  LOAD_REGS();
L_7e11b0: /* 7e11b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e11b1: mov esi, ecx */
  esi = ecx;
/* 7e11b3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e11b6: je 0x7e11fb */
  if (zf) goto L_7e11fb;
L_7e11b8: /* 7e11b8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e11bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e11bd: je 0x7e11e3 */
  if (zf) goto L_7e11e3;
L_7e11bf: /* 7e11bf: nop  */
L_7e11c0: /* 7e11c0: call dword ptr [0xcfa95c] */
  esp -= 4; W32(esp, 0x7e11c6u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e11c6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e11c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e11ca: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e11d0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e11d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e11d2: jne 0x7e11fb */
  if (!zf) goto L_7e11fb;
L_7e11d4: /* 7e11d4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e11d7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e11da: mov eax, ecx */
  eax = ecx;
/* 7e11dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e11de: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e11e1: jne 0x7e11c0 */
  if (!zf) goto L_7e11c0;
L_7e11e3: /* 7e11e3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7e11e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e11e7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e11eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e11ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e11ec: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e11ee: je 0x7e11f6 */
  if (zf) goto L_7e11f6;
L_7e11f0: /* 7e11f0: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7e11f3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_7e11f6: /* 7e11f6: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e11f9: jne 0x7e11b8 */
  if (!zf) goto L_7e11b8;
L_7e11fb: /* 7e11fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e11fc: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1220(void) {
  LOAD_REGS();
L_7e1220: /* 7e1220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1221: mov esi, ecx */
  esi = ecx;
/* 7e1223: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1226: je 0x7e126b */
  if (zf) goto L_7e126b;
L_7e1228: /* 7e1228: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e122b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e122d: je 0x7e1253 */
  if (zf) goto L_7e1253;
L_7e122f: /* 7e122f: nop  */
L_7e1230: /* 7e1230: call dword ptr [0xcfa960] */
  esp -= 4; W32(esp, 0x7e1236u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e1236: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e1239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e123a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e1240u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e1240: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1242: jne 0x7e126b */
  if (!zf) goto L_7e126b;
L_7e1244: /* 7e1244: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e1247: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e124a: mov eax, ecx */
  eax = ecx;
/* 7e124c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e124e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e1251: jne 0x7e1230 */
  if (!zf) goto L_7e1230;
L_7e1253: /* 7e1253: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7e1255: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e1257: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e125au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e125a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e125c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e125e: je 0x7e1266 */
  if (zf) goto L_7e1266;
L_7e1260: /* 7e1260: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7e1263: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_7e1266: /* 7e1266: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1269: jne 0x7e1228 */
  if (!zf) goto L_7e1228;
L_7e126b: /* 7e126b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e126c: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1290(void) {
  LOAD_REGS();
L_7e1290: /* 7e1290: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7e1294: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7e1298: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7e129c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e129d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e129e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e129f: call dword ptr [0xcfa964] */
  esp -= 4; W32(esp, 0x7e12a5u); SPILL(); f_4e1e06(); if (g_unwind) return; /* Core!?StaticClass@UEnum@@SAPAVUClass@@XZ */ RELOAD();
/* 7e12a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e12a6: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7e12acu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7e12ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e12af: ret  */
  esp += 4; SPILL(); return;
}

void f_7e12c0(void) {
  LOAD_REGS();
L_7e12c0: /* 7e12c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e12c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e12c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e12c7: je 0x7e12e0 */
  if (zf) goto L_7e12e0;
L_7e12c9: /* 7e12c9: call dword ptr [0xcfa95c] */
  esp -= 4; W32(esp, 0x7e12cfu); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e12cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e12d0: mov ecx, esi */
  ecx = esi;
/* 7e12d2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e12d8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e12d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e12da: je 0x7e12e0 */
  if (zf) goto L_7e12e0;
L_7e12dc: /* 7e12dc: mov eax, esi */
  eax = esi;
/* 7e12de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e12df: ret  */
  esp += 4; SPILL(); return;
L_7e12e0: /* 7e12e0: xor eax, eax */
  eax = 0;
/* 7e12e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e12e3: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1300(void) {
  LOAD_REGS();
L_7e1300: /* 7e1300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1301: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e1305: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1307: je 0x7e1320 */
  if (zf) goto L_7e1320;
L_7e1309: /* 7e1309: call dword ptr [0xcfa960] */
  esp -= 4; W32(esp, 0x7e130fu); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e130f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1310: mov ecx, esi */
  ecx = esi;
/* 7e1312: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e1318u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e1318: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e131a: je 0x7e1320 */
  if (zf) goto L_7e1320;
L_7e131c: /* 7e131c: mov eax, esi */
  eax = esi;
/* 7e131e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e131f: ret  */
  esp += 4; SPILL(); return;
L_7e1320: /* 7e1320: xor eax, eax */
  eax = 0;
/* 7e1322: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1323: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1340(void) {
  LOAD_REGS();
L_7e1340: /* 7e1340: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7e1344: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7e1348: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e134a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e134b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7e134eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e134e: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1360(void) {
  LOAD_REGS();
L_7e1360: /* 7e1360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1361: mov esi, ecx */
  esi = ecx;
/* 7e1363: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7e1369u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7e1369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e136b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7e136e: call dword ptr [0xcfa968] */
  esp -= 4; W32(esp, 0x7e1374u); SPILL(); f_4e2856(); if (g_unwind) return; /* Core!??0FString@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7e1374: mov eax, esi */
  eax = esi;
/* 7e1376: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1377: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1390(void) {
  LOAD_REGS();
L_7e1390: /* 7e1390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e1391: mov ebp, esp */
  ebp = esp;
/* 7e1393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e1395: push 0x9d0cc9 */
  { uint32_t v = 0x9d0cc9u; esp -= 4; W32(esp, v); }
/* 7e139a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e13a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e13a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e13a8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e13ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e13ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e13ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e13ae: xor edi, edi */
  edi = 0;
/* 7e13b0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7e13b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e13b6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e13b9: call dword ptr [0xcfaa40] */
  esp -= 4; W32(esp, 0x7e13bfu); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* 7e13bf: mov ebx, dword ptr [0xcfa33c] */
  ebx = R32((uint32_t)(0xcfa33cu));
/* 7e13c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e13c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e13c7: mov ecx, esp */
  ecx = esp;
/* 7e13c9: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7e13cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e13ce: push 0xadd4b0 */
  { uint32_t v = 0xadd4b0u; esp -= 4; W32(esp, v); }
/* 7e13d3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e13d7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e13d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e13d9: push 0xb82238 */
  { uint32_t v = 0xb82238u; esp -= 4; W32(esp, v); }
/* 7e13de: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7e13e3: call dword ptr [0xcfaa3c] */
  esp -= 4; W32(esp, 0x7e13e9u); SPILL(); f_4e3535(); if (g_unwind) return; /* Core!??2UStruct@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7e13e9: mov esi, eax */
  esi = eax;
/* 7e13eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e13ee: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e13f0: je 0x7e1403 */
  if (zf) goto L_7e1403;
L_7e13f2: /* 7e13f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e13f3: mov ecx, esi */
  ecx = esi;
/* 7e13f5: call dword ptr [0xcfaa38] */
  esp -= 4; W32(esp, 0x7e13fbu); SPILL(); f_4e15a5(); if (g_unwind) return; /* Core!??0UStruct@@QAE@PAV0@@Z */ RELOAD();
/* 7e13fb: mov dword ptr [esi], 0xa10390 */
  W32((uint32_t)(esi), 0xa10390u);
/* 7e1401: mov edi, esi */
  edi = esi;
L_7e1403: /* 7e1403: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7e1405: mov ecx, edi */
  ecx = edi;
/* 7e1407: call dword ptr [0xcfaa34] */
  esp -= 4; W32(esp, 0x7e140du); SPILL(); f_4e33eb(); if (g_unwind) return; /* Core!?SetPropertiesSize@UStruct@@QAEXH@Z */ RELOAD();
/* 7e140d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e140f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1410: mov ecx, esp */
  ecx = esp;
/* 7e1412: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7e1415: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e1417: push 0xadd4bc */
  { uint32_t v = 0xadd4bcu; esp -= 4; W32(esp, v); }
/* 7e141c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e141eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e141e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e141f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7e1421: call dword ptr [0xcfaa30] */
  esp -= 4; W32(esp, 0x7e1427u); SPILL(); f_4e21df(); if (g_unwind) return; /* Core!??2UNameProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7e1427: mov esi, eax */
  esi = eax;
/* 7e1429: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e142c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e142e: je 0x7e144c */
  if (zf) goto L_7e144c;
L_7e1430: /* 7e1430: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7e1435: push 0xb82220 */
  { uint32_t v = 0xb82220u; esp -= 4; W32(esp, v); }
/* 7e143a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e143c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e143e: mov ecx, esi */
  ecx = esi;
/* 7e1440: call dword ptr [0xcfaa2c] */
  esp -= 4; W32(esp, 0x7e1446u); SPILL(); f_4e4273(); if (g_unwind) return; /* Core!??0UNameProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7e1446: mov dword ptr [esi], 0xa102b0 */
  W32((uint32_t)(esi), 0xa102b0u);
L_7e144c: /* 7e144c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e144e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e144f: mov ecx, esp */
  ecx = esp;
/* 7e1451: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7e1454: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e1456: push 0xadd4c8 */
  { uint32_t v = 0xadd4c8u; esp -= 4; W32(esp, v); }
/* 7e145b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e145du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e145d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e145e: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7e1460: call dword ptr [0xcfaa28] */
  esp -= 4; W32(esp, 0x7e1466u); SPILL(); f_4e16bd(); if (g_unwind) return; /* Core!??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7e1466: mov esi, eax */
  esi = eax;
/* 7e1468: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e146b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e146d: je 0x7e148b */
  if (zf) goto L_7e148b;
L_7e146f: /* 7e146f: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7e1474: push 0xb82224 */
  { uint32_t v = 0xb82224u; esp -= 4; W32(esp, v); }
/* 7e1479: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e147b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e147d: mov ecx, esi */
  ecx = esi;
/* 7e147f: call dword ptr [0xcfaa24] */
  esp -= 4; W32(esp, 0x7e1485u); SPILL(); f_4e44c1(); if (g_unwind) return; /* Core!??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7e1485: mov dword ptr [esi], 0xa101d0 */
  W32((uint32_t)(esi), 0xa101d0u);
L_7e148b: /* 7e148b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e148d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e148f: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7e1492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1493: mov ecx, edi */
  ecx = edi;
/* 7e1495: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7e149bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e149b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e149d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e149e: mov ecx, esp */
  ecx = esp;
/* 7e14a0: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7e14a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e14a5: push 0xadd4d8 */
  { uint32_t v = 0xadd4d8u; esp -= 4; W32(esp, v); }
/* 7e14aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e14acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e14ac: push 0xb82238 */
  { uint32_t v = 0xb82238u; esp -= 4; W32(esp, v); }
/* 7e14b1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7e14b3: call dword ptr [0xcfaa20] */
  esp -= 4; W32(esp, 0x7e14b9u); SPILL(); f_4e17fd(); if (g_unwind) return; /* Core!??2UStructProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7e14b9: mov esi, eax */
  esi = eax;
/* 7e14bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e14be: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e14c0: je 0x7e14e1 */
  if (zf) goto L_7e14e1;
L_7e14c2: /* 7e14c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e14c3: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7e14c8: push 0xadd4e8 */
  { uint32_t v = 0xadd4e8u; esp -= 4; W32(esp, v); }
/* 7e14cd: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7e14cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e14d1: mov ecx, esi */
  ecx = esi;
/* 7e14d3: call dword ptr [0xcfaa1c] */
  esp -= 4; W32(esp, 0x7e14d9u); SPILL(); f_4e26e9(); if (g_unwind) return; /* Core!??0UStructProperty@@QAE@W4ECppProperty@@HPBGKPAVUStruct@@@Z */ RELOAD();
/* 7e14d9: mov dword ptr [esi], 0xa100f0 */
  W32((uint32_t)(esi), 0xa100f0u);
/* 7e14df: jmp 0x7e14e3 */
  goto L_7e14e3;
L_7e14e1: /* 7e14e1: xor esi, esi */
  esi = 0;
L_7e14e3: /* 7e14e3: mov dword ptr [esi + 0x34], 0x28 */
  W32((uint32_t)(esi + 0x34u), 0x28u);
/* 7e14ea: call dword ptr [0xcfa964] */
  esp -= 4; W32(esp, 0x7e14f0u); SPILL(); f_4e1e06(); if (g_unwind) return; /* Core!?StaticClass@UEnum@@SAPAVUClass@@XZ */ RELOAD();
/* 7e14f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e14f2: push 0xadd4f8 */
  { uint32_t v = 0xadd4f8u; esp -= 4; W32(esp, v); }
/* 7e14f7: push 0xb83b30 */
  { uint32_t v = 0xb83b30u; esp -= 4; W32(esp, v); }
/* 7e14fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e14fd: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7e1503u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7e1503: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1506: mov ebx, eax */
  ebx = eax;
/* 7e1508: xor edi, edi */
  edi = 0;
/* 7e150a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7e1510: /* 7e1510: cmp edi, 0xff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e1516: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1518: jge 0x7e15a1 */
  if ((sf == of)) goto L_7e15a1;
L_7e151e: /* 7e151e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1521: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e1527u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e1527: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7e152a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e152d: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
/* 7e1534: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1535: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e1537: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e153du); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e153d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e153f: je 0x7e159b */
  if (zf) goto L_7e159b;
L_7e1541: /* 7e1541: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7e1544: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e1546: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7e154cu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7e154c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e154e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e154f: mov ecx, esp */
  ecx = esp;
/* 7e1551: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7e1554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e1556: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e1559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e155a: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e1560u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e1560: push 0xb82238 */
  { uint32_t v = 0xb82238u; esp -= 4; W32(esp, v); }
/* 7e1565: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7e1567: call dword ptr [0xcfaa28] */
  esp -= 4; W32(esp, 0x7e156du); SPILL(); f_4e16bd(); if (g_unwind) return; /* Core!??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7e156d: mov esi, eax */
  esi = eax;
/* 7e156f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1572: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1574: je 0x7e159b */
  if (zf) goto L_7e159b;
L_7e1576: /* 7e1576: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7e157b: push 0xadd50c */
  { uint32_t v = 0xadd50cu; esp -= 4; W32(esp, v); }
/* 7e1580: lea eax, [edi + edi*2 + 0xab] */
  eax = (uint32_t)(edi + edi*2 + 0xabu);
/* 7e1587: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7e158a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e158b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e158d: mov ecx, esi */
  ecx = esi;
/* 7e158f: call dword ptr [0xcfaa24] */
  esp -= 4; W32(esp, 0x7e1595u); SPILL(); f_4e44c1(); if (g_unwind) return; /* Core!??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7e1595: mov dword ptr [esi], 0xa101d0 */
  W32((uint32_t)(esi), 0xa101d0u);
L_7e159b: /* 7e159b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e159c: jmp 0x7e1510 */
  goto L_7e1510;
L_7e15a1: /* 7e15a1: mov edx, dword ptr [0xb82238] */
  edx = R32((uint32_t)(0xb82238u));
/* 7e15a7: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7e15aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e15ab: mov ecx, 0xb82238 */
  ecx = 0xb82238u;
/* 7e15b0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7e15b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e15b6: mov ecx, 0xb82238 */
  ecx = 0xb82238u;
/* 7e15bb: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7e15c1u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7e15c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e15c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e15c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e15c7: mov ecx, eax */
  ecx = eax;
/* 7e15c9: call dword ptr [0xcfaa18] */
  esp -= 4; W32(esp, 0x7e15cfu); SPILL(); f_4e2743(); if (g_unwind) return; /* Core!?LoadConfig@UObject@@QAEXHPAVUClass@@PBG@Z */ RELOAD();
/* 7e15cf: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7e15d2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e15d6: call dword ptr [0xcfaa14] */
  esp -= 4; W32(esp, 0x7e15dcu); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 7e15dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e15df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e15e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e15e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e15e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e15e9: mov esp, ebp */
  esp = ebp;
/* 7e15eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e15ec: ret  */
  esp += 4; SPILL(); return;
}

void f_7e15ed(void) {
  LOAD_REGS();
L_7e15ed: /* 7e15ed: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e15f0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e15f5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e15f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e15f9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e15fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1601u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e1601(); return;
}

void f_7e1601(void) {
  LOAD_REGS();
L_7e1601: /* 7e1601: push 0xa100b0 */
  { uint32_t v = 0xa100b0u; esp -= 4; W32(esp, v); }
/* 7e1606: push 0xadd51c */
  { uint32_t v = 0xadd51cu; esp -= 4; W32(esp, v); }
/* 7e160b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e1611u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e1611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1618: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e161du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e161d: guest_badaddr(0x7e161d); return;
}

void f_7e16d0(void) {
  LOAD_REGS();
L_7e16d0: /* 7e16d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e16d1: mov esi, ecx */
  esi = ecx;
/* 7e16d3: call dword ptr [0xcfaa44] */
  esp -= 4; W32(esp, 0x7e16d9u); SPILL(); f_4e337d(); if (g_unwind) return; /* Core!??1UStruct@@UAE@XZ */ RELOAD();
/* 7e16d9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e16de: je 0x7e16ef */
  if (zf) goto L_7e16ef;
L_7e16e0: /* 7e16e0: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7e16e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e16e6: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7e16ecu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7e16ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e16ef: /* 7e16ef: mov eax, esi */
  eax = esi;
/* 7e16f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e16f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1710(void) {
  LOAD_REGS();
L_7e1710: /* 7e1710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1711: mov esi, ecx */
  esi = ecx;
/* 7e1713: call dword ptr [0xcfaa48] */
  esp -= 4; W32(esp, 0x7e1719u); SPILL(); f_4e41dd(); if (g_unwind) return; /* Core!??1UNameProperty@@UAE@XZ */ RELOAD();
/* 7e1719: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e171e: je 0x7e172c */
  if (zf) goto L_7e172c;
L_7e1720: /* 7e1720: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7e1722: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1723: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7e1729u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7e1729: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e172c: /* 7e172c: mov eax, esi */
  eax = esi;
/* 7e172e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e172f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1750(void) {
  LOAD_REGS();
L_7e1750: /* 7e1750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1751: mov esi, ecx */
  esi = ecx;
/* 7e1753: call dword ptr [0xcfaa4c] */
  esp -= 4; W32(esp, 0x7e1759u); SPILL(); f_4e1712(); if (g_unwind) return; /* Core!??1UStrProperty@@UAE@XZ */ RELOAD();
/* 7e1759: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e175e: je 0x7e176c */
  if (zf) goto L_7e176c;
L_7e1760: /* 7e1760: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7e1762: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1763: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7e1769u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7e1769: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e176c: /* 7e176c: mov eax, esi */
  eax = esi;
/* 7e176e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e176f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1790(void) {
  LOAD_REGS();
L_7e1790: /* 7e1790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1791: mov esi, ecx */
  esi = ecx;
/* 7e1793: call dword ptr [0xcfaa50] */
  esp -= 4; W32(esp, 0x7e1799u); SPILL(); f_4e44da(); if (g_unwind) return; /* Core!??1UStructProperty@@UAE@XZ */ RELOAD();
/* 7e1799: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e179e: je 0x7e17ac */
  if (zf) goto L_7e17ac;
L_7e17a0: /* 7e17a0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7e17a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e17a3: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7e17a9u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7e17a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e17ac: /* 7e17ac: mov eax, esi */
  eax = esi;
/* 7e17ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e17af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e17d0(void) {
  LOAD_REGS();
L_7e17d0: /* 7e17d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e17d1: mov ebp, esp */
  ebp = esp;
/* 7e17d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e17d5: push 0x9d0d1c */
  { uint32_t v = 0x9d0d1cu; esp -= 4; W32(esp, v); }
/* 7e17da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e17e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e17e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e17e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e17eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e17ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e17ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e17ee: mov esi, ecx */
  esi = ecx;
/* 7e17f0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e17f3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7e17f6: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x7e17fcu); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 7e17fc: push 0x6c8e22 */
  { uint32_t v = 0x6c8e22u; esp -= 4; W32(esp, v); }
/* 7e1801: push 0x6ccf1d */
  { uint32_t v = 0x6ccf1du; esp -= 4; W32(esp, v); }
/* 7e1806: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7e1808: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7e180a: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 7e180d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e180e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e1815: mov dword ptr [esi], 0x9f7dd8 */
  W32((uint32_t)(esi), 0x9f7dd8u);
/* 7e181b: mov dword ptr [esi + 0x28], 0x9f7dd4 */
  W32((uint32_t)(esi + 0x28u), 0x9f7dd4u);
/* 7e1822: call 0x99cafe */
  esp -= 4; W32(esp, 0x7e1827u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 7e1827: mov ecx, dword ptr [0xcfa304] */
  ecx = R32((uint32_t)(0xcfa304u));
/* 7e182d: mov edx, dword ptr [0xcfa300] */
  edx = R32((uint32_t)(0xcfa300u));
/* 7e1833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1834: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1835: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 7e183a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7e183c: lea eax, [esi + 0x2ac] */
  eax = (uint32_t)(esi + 0x2acu);
/* 7e1842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1843: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1847: call 0x99cafe */
  esp -= 4; W32(esp, 0x7e184cu); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 7e184c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e1850: call dword ptr [0xcfa964] */
  esp -= 4; W32(esp, 0x7e1856u); SPILL(); f_4e1e06(); if (g_unwind) return; /* Core!?StaticClass@UEnum@@SAPAVUClass@@XZ */ RELOAD();
/* 7e1856: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1858: push 0xadd524 */
  { uint32_t v = 0xadd524u; esp -= 4; W32(esp, v); }
/* 7e185d: push 0xb83b30 */
  { uint32_t v = 0xb83b30u; esp -= 4; W32(esp, v); }
/* 7e1862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1863: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7e1869u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7e1869: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e186c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e186f: mov dword ptr [esi + 0xea4], eax */
  W32((uint32_t)(esi + 0xea4u), eax);
/* 7e1875: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1876: mov eax, esi */
  eax = esi;
/* 7e1878: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1879: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1880: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1881: mov esp, ebp */
  esp = ebp;
/* 7e1883: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1884: ret  */
  esp += 4; SPILL(); return;
}

void f_7e1885(void) {
  LOAD_REGS();
L_7e1885: /* 7e1885: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e1888: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e188d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1890: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1891: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e1894: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1899u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e1899(); return;
}

void f_7e1899(void) {
  LOAD_REGS();
L_7e1899: /* 7e1899: push 0xa10448 */
  { uint32_t v = 0xa10448u; esp -= 4; W32(esp, v); }
/* 7e189e: push 0xadd538 */
  { uint32_t v = 0xadd538u; esp -= 4; W32(esp, v); }
/* 7e18a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e18a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e18a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e18ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e18ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e18b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e18b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e18b5: guest_badaddr(0x7e18b5); return;
}

void f_7e1900(void) {
  LOAD_REGS();
L_7e1900: /* 7e1900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e1901: mov ebp, esp */
  ebp = esp;
/* 7e1903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e1905: push 0x9d0d40 */
  { uint32_t v = 0x9d0d40u; esp -= 4; W32(esp, v); }
/* 7e190a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e1910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e1918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e191b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e191c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e191d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e191e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e1921: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e1924: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e1925: mov esi, ecx */
  esi = ecx;
/* 7e1927: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e192e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7e1934u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7e1934: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e1936: add esi, 0xea4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xea4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e193c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e193d: mov ecx, edi */
  ecx = edi;
/* 7e193f: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7e1942u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1942: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1945: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1946: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1947: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e194e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e194f: mov esp, ebp */
  esp = ebp;
/* 7e1951: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e1955(void) {
  LOAD_REGS();
L_7e1955: /* 7e1955: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e1958: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e195d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1960: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1961: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e1964: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1969u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e1969(); return;
}

void f_7e1969(void) {
  LOAD_REGS();
L_7e1969: /* 7e1969: push 0xa1046c */
  { uint32_t v = 0xa1046cu; esp -= 4; W32(esp, v); }
/* 7e196e: push 0xadd548 */
  { uint32_t v = 0xadd548u; esp -= 4; W32(esp, v); }
/* 7e1973: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e1979u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e1979: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e197c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e197e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1980: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1985u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e1985: guest_badaddr(0x7e1985); return;
}

void f_7e19c0(void) {
  LOAD_REGS();
L_7e19c0: /* 7e19c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e19c1: mov ebp, esp */
  ebp = esp;
/* 7e19c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e19c5: push 0x9d0d50 */
  { uint32_t v = 0x9d0d50u; esp -= 4; W32(esp, v); }
/* 7e19ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e19d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e19d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e19d8: sub esp, 0x21c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x21cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e19de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e19df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e19e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e19e1: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 7e19e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e19ea: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e19ed: push 0xadd620 */
  { uint32_t v = 0xadd620u; esp -= 4; W32(esp, v); }
/* 7e19f2: xor ebx, ebx */
  ebx = 0;
/* 7e19f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e19f5: mov esi, ecx */
  esi = ecx;
/* 7e19f7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e19fa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e19fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e19fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e19ff: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a01: je 0x7e1abd */
  if (zf) goto L_7e1abd;
L_7e1a07: /* 7e1a07: mov ecx, dword ptr [esi + 0xe78] */
  ecx = R32((uint32_t)(esi + 0xe78u));
/* 7e1a0d: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a10: je 0x7e1ab3 */
  if (zf) goto L_7e1ab3;
L_7e1a16: /* 7e1a16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1a17: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1a1c: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1a22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1a23: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1a26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1a27: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1a2du); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1a2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1a30: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a32: je 0x7e1ab3 */
  if (zf) goto L_7e1ab3;
L_7e1a34: /* 7e1a34: mov ecx, dword ptr [esi + 0xe78] */
  ecx = R32((uint32_t)(esi + 0xe78u));
/* 7e1a3a: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1a3d: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1a43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1a44: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7e1a47: lea edi, [esi - 0x28] */
  edi = (uint32_t)(esi + 0xffffffd8u);
/* 7e1a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1a4b: mov ecx, edi */
  ecx = edi;
/* 7e1a4d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7e1a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1a53: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a55: jne 0x7e1a80 */
  if (!zf) goto L_7e1a80;
L_7e1a57: /* 7e1a57: mov ecx, dword ptr [esi + 0xe78] */
  ecx = R32((uint32_t)(esi + 0xe78u));
/* 7e1a5d: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7e1a60: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 7e1a66: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a68: je 0x7e1aa9 */
  if (zf) goto L_7e1aa9;
L_7e1a6a: /* 7e1a6a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e1a6c: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1a73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1a74: mov ecx, edi */
  ecx = edi;
/* 7e1a76: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7e1a7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1a7c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a7e: je 0x7e1aa9 */
  if (zf) goto L_7e1aa9;
L_7e1a80: /* 7e1a80: mov esi, dword ptr [esi + 0xe80] */
  esi = R32((uint32_t)(esi + 0xe80u));
/* 7e1a86: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a89: je 0x7e1b59 */
  if (zf) goto L_7e1b59;
L_7e1a8f: /* 7e1a8f: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a92: jne 0x7e1e5c */
  if (!zf) goto L_7e1e5c;
L_7e1a98: /* 7e1a98: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1a9b: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1aa1: /* 7e1aa1: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 7e1aa4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1aa9: /* 7e1aa9: push 0xadd630 */
  { uint32_t v = 0xadd630u; esp -= 4; W32(esp, v); }
/* 7e1aae: jmp 0x7e1e53 */
  goto L_7e1e53;
L_7e1ab3: /* 7e1ab3: push 0xadd658 */
  { uint32_t v = 0xadd658u; esp -= 4; W32(esp, v); }
/* 7e1ab8: jmp 0x7e1e53 */
  goto L_7e1e53;
L_7e1abd: /* 7e1abd: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e1ac0: push 0xadd680 */
  { uint32_t v = 0xadd680u; esp -= 4; W32(esp, v); }
/* 7e1ac5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1ac6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1ac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1acb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1acd: je 0x7e1b75 */
  if (zf) goto L_7e1b75;
L_7e1ad3: /* 7e1ad3: mov eax, dword ptr [esi + 0xe78] */
  eax = R32((uint32_t)(esi + 0xe78u));
/* 7e1ad9: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1adc: je 0x7e1b6b */
  if (zf) goto L_7e1b6b;
L_7e1ae2: /* 7e1ae2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1ae3: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1ae8: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1aef: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e1af2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1af3: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1af9u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1af9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1afc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1afe: je 0x7e1b6b */
  if (zf) goto L_7e1b6b;
L_7e1b00: /* 7e1b00: mov edx, dword ptr [esi + 0xe78] */
  edx = R32((uint32_t)(esi + 0xe78u));
/* 7e1b06: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1b09: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1b0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1b10: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7e1b13: lea edi, [esi - 0x28] */
  edi = (uint32_t)(esi + 0xffffffd8u);
/* 7e1b16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1b17: mov ecx, edi */
  ecx = edi;
/* 7e1b19: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7e1b1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1b1f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b21: jne 0x7e1b4c */
  if (!zf) goto L_7e1b4c;
L_7e1b23: /* 7e1b23: mov edx, dword ptr [esi + 0xe78] */
  edx = R32((uint32_t)(esi + 0xe78u));
/* 7e1b29: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7e1b2c: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7e1b32: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b34: je 0x7e1b61 */
  if (zf) goto L_7e1b61;
L_7e1b36: /* 7e1b36: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e1b38: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1b3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1b3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1b40: mov ecx, edi */
  ecx = edi;
/* 7e1b42: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7e1b48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1b48: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b4a: je 0x7e1b61 */
  if (zf) goto L_7e1b61;
L_7e1b4c: /* 7e1b4c: cmp dword ptr [esi + 0xe80], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xe80u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b53: jne 0x7e1e5c */
  if (!zf) goto L_7e1e5c;
L_7e1b59: /* 7e1b59: mov byte ptr [eax], 1 */
  W8((uint32_t)(eax), 0x1u);
/* 7e1b5c: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1b61: /* 7e1b61: push 0xadd68c */
  { uint32_t v = 0xadd68cu; esp -= 4; W32(esp, v); }
/* 7e1b66: jmp 0x7e1e53 */
  goto L_7e1e53;
L_7e1b6b: /* 7e1b6b: push 0xadd6b4 */
  { uint32_t v = 0xadd6b4u; esp -= 4; W32(esp, v); }
/* 7e1b70: jmp 0x7e1e53 */
  goto L_7e1e53;
L_7e1b75: /* 7e1b75: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e1b78: push 0xadd6dc */
  { uint32_t v = 0xadd6dcu; esp -= 4; W32(esp, v); }
/* 7e1b7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1b7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1b80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1b83: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b85: je 0x7e1bf0 */
  if (zf) goto L_7e1bf0;
L_7e1b87: /* 7e1b87: mov eax, dword ptr [esi + 0xe78] */
  eax = R32((uint32_t)(esi + 0xe78u));
/* 7e1b8d: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1b90: je 0x7e1be6 */
  if (zf) goto L_7e1be6;
L_7e1b92: /* 7e1b92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1b93: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1b98: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1b9f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e1ba2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1ba3: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1ba9u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1ba9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1bac: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1bae: je 0x7e1be6 */
  if (zf) goto L_7e1be6;
L_7e1bb0: /* 7e1bb0: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1bb3: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1bb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1bba: mov edx, dword ptr [esi + 0xe78] */
  edx = R32((uint32_t)(esi + 0xe78u));
/* 7e1bc0: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 7e1bc3: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1bc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1bc7: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7e1bcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1bcd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1bcf: je 0x7e1be6 */
  if (zf) goto L_7e1be6;
L_7e1bd1: /* 7e1bd1: cmp dword ptr [esi + 0xe80], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xe80u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1bd8: jne 0x7e1e5c */
  if (!zf) goto L_7e1e5c;
L_7e1bde: /* 7e1bde: xor byte ptr [eax], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a ^ b);
  W8((uint32_t)(eax), r);
  }
/* 7e1be1: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1be6: /* 7e1be6: push 0xadd6ec */
  { uint32_t v = 0xadd6ecu; esp -= 4; W32(esp, v); }
/* 7e1beb: jmp 0x7e1e53 */
  goto L_7e1e53;
L_7e1bf0: /* 7e1bf0: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1bf3: push 0xadd714 */
  { uint32_t v = 0xadd714u; esp -= 4; W32(esp, v); }
/* 7e1bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1bf9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1bfbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1bfb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1bfe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1c00: je 0x7e1dae */
  if (zf) goto L_7e1dae;
L_7e1c06: /* 7e1c06: mov ecx, dword ptr [esi + 0xe78] */
  ecx = R32((uint32_t)(esi + 0xe78u));
/* 7e1c0c: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1c0f: je 0x7e1d93 */
  if (zf) goto L_7e1d93;
L_7e1c15: /* 7e1c15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1c16: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1c1b: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1c21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1c22: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1c25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1c26: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1c2cu); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1c2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1c2f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1c31: je 0x7e1d93 */
  if (zf) goto L_7e1d93;
L_7e1c37: /* 7e1c37: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1c3a: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1c41: mov eax, dword ptr [esi + 0xe78] */
  eax = R32((uint32_t)(esi + 0xe78u));
/* 7e1c47: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7e1c4a: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1c4e: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7e1c54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1c54: mov edi, eax */
  edi = eax;
/* 7e1c56: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1c58: je 0x7e1d93 */
  if (zf) goto L_7e1d93;
L_7e1c5e: /* 7e1c5e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e1c61: mov ebx, dword ptr [0xcfaa58] */
  ebx = R32((uint32_t)(0xcfaa58u));
/* 7e1c67: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e1c6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1c6b: push 0xadd720 */
  { uint32_t v = 0xadd720u; esp -= 4; W32(esp, v); }
/* 7e1c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1c71: mov dword ptr [ebp + 0xc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xcu), 0x3f800000u);
/* 7e1c78: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7e1c7f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e1c86: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 7e1c8d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e1c8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1c8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1c92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1c95: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e1c98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1c99: push 0xadd730 */
  { uint32_t v = 0xadd730u; esp -= 4; W32(esp, v); }
/* 7e1c9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1c9f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e1ca1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ca1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e1ca4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1ca7: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1caa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1cab: push 0xadd748 */
  { uint32_t v = 0xadd748u; esp -= 4; W32(esp, v); }
/* 7e1cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1cb1: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x7e1cb7u); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 7e1cb7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e1cba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1cbd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e1cc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1cc1: push 0xadd758 */
  { uint32_t v = 0xadd758u; esp -= 4; W32(esp, v); }
/* 7e1cc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1cc7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e1cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1cc9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7e1ccc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e1cd2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1cd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e1cd7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1cda: jne 0x7e1d4f */
  if (!zf) goto L_7e1d4f;
L_7e1cdc: /* 7e1cdc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e1cdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ce0: call 0x6cae61 */
  esp -= 4; W32(esp, 0x7e1ce5u); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 7e1ce5: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 7e1ce8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1ceb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e1ced: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1cf0: jne 0x7e1e5c */
  if (!zf) goto L_7e1e5c;
L_7e1cf6: /* 7e1cf6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e1cf9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e1cff: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e1d02: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e1d04: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1d07: jne 0x7e1d2a */
  if (!zf) goto L_7e1d2a;
L_7e1d09: /* 7e1d09: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e1d0c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7e1d12: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e1d15: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7e1d17: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e1d1a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7e1d1d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e1d1f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e1d21: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e1d23: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e1d25: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1d2a: /* 7e1d2a: fchs  */
  ST0 = -ST0;
/* 7e1d2c: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e1d2f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7e1d35: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e1d38: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7e1d3a: fchs  */
  ST0 = -ST0;
/* 7e1d3c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e1d3f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7e1d42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e1d44: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e1d46: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e1d48: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e1d4a: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1d4f: /* 7e1d4f: mov eax, dword ptr [esi + 0xe80] */
  eax = R32((uint32_t)(esi + 0xe80u));
/* 7e1d55: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1d58: jne 0x7e1d75 */
  if (!zf) goto L_7e1d75;
L_7e1d5a: /* 7e1d5a: fld dword ptr [esi + 0xe84] */
  { double v = F32((uint32_t)(esi + 0xe84u)); FPUSH(v); }
/* 7e1d60: fimul dword ptr [ebp - 0x18] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)));
/* 7e1d63: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7e1d66: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 7e1d6c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e1d6e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e1d70: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1d75: /* 7e1d75: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1d78: jne 0x7e1e5c */
  if (!zf) goto L_7e1e5c;
L_7e1d7e: /* 7e1d7e: fld dword ptr [esi + 0xe84] */
  { double v = F32((uint32_t)(esi + 0xe84u)); FPUSH(v); }
/* 7e1d84: fimul dword ptr [ebp - 0x18] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)));
/* 7e1d87: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7e1d8a: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e1d8c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e1d8e: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1d93: /* 7e1d93: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1d96: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e1d99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1d9a: push 0xadd76c */
  { uint32_t v = 0xadd76cu; esp -= 4; W32(esp, v); }
/* 7e1d9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1da0: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e1da6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e1da6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1da9: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1dae: /* 7e1dae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1db1: push 0xadd794 */
  { uint32_t v = 0xadd794u; esp -= 4; W32(esp, v); }
/* 7e1db6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1db7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1db9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1db9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1dbc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1dbe: je 0x7e1e26 */
  if (zf) goto L_7e1e26;
L_7e1dc0: /* 7e1dc0: mov ecx, dword ptr [esi + 0xe78] */
  ecx = R32((uint32_t)(esi + 0xe78u));
/* 7e1dc6: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1dc9: je 0x7e1e0e */
  if (zf) goto L_7e1e0e;
L_7e1dcb: /* 7e1dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1dcc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1dd1: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1dd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1dd8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ddc: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1de2u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1de2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1de5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1de7: je 0x7e1e0e */
  if (zf) goto L_7e1e0e;
L_7e1de9: /* 7e1de9: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1dec: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1df2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1df3: mov eax, dword ptr [esi + 0xe78] */
  eax = R32((uint32_t)(esi + 0xe78u));
/* 7e1df9: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7e1dfc: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e00: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7e1e06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1e06: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1e08: je 0x7e1e0e */
  if (zf) goto L_7e1e0e;
L_7e1e0a: /* 7e1e0a: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 7e1e0c: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1e0e: /* 7e1e0e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1e11: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e1e14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1e15: push 0xadd7a0 */
  { uint32_t v = 0xadd7a0u; esp -= 4; W32(esp, v); }
/* 7e1e1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1e1b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e1e21u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e1e21: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e24: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1e26: /* 7e1e26: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1e29: push 0xadd7cc */
  { uint32_t v = 0xadd7ccu; esp -= 4; W32(esp, v); }
/* 7e1e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e2f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1e31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e34: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1e36: je 0x7e1e74 */
  if (zf) goto L_7e1e74;
L_7e1e38: /* 7e1e38: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1e3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1e3c: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7e1e42u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7e1e42: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1e45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e48: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e4c: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7e1e52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e1e52: /* 7e1e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7e1e53: /* 7e1e53: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e1e56: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7e1e5cu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_7e1e5c: /* 7e1e5c: mov eax, 1 */
  eax = 0x1u;
/* 7e1e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1e64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1e6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1e6e: mov esp, ebp */
  esp = ebp;
/* 7e1e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1e71: ret 8 */
  esp += 12; SPILL(); return;
L_7e1e74: /* 7e1e74: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1e77: push 0xadd7dc */
  { uint32_t v = 0xadd7dcu; esp -= 4; W32(esp, v); }
/* 7e1e7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e7d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1e7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1e7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e82: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1e84: je 0x7e1ea2 */
  if (zf) goto L_7e1ea2;
L_7e1e86: /* 7e1e86: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1e89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1e8a: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7e1e90u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7e1e90: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1e93: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e96: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e9a: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e1ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ea0: jmp 0x7e1e52 */
  goto L_7e1e52;
L_7e1ea2: /* 7e1ea2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1ea5: push 0xadd800 */
  { uint32_t v = 0xadd800u; esp -= 4; W32(esp, v); }
/* 7e1eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1eab: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ead: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1eb0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eb2: je 0x7e1eff */
  if (zf) goto L_7e1eff;
L_7e1eb4: /* 7e1eb4: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1eb7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e1eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ebb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e1ebe: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ec2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7e1ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ec8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eca: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ecc: /* 7e1ecc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1ecf: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7e1ed2: lea ecx, [esi + ecx*4 + 0x284] */
  ecx = (uint32_t)(esi + ecx*4 + 0x284u);
/* 7e1ed9: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e1edfu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e1edf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1ee1: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ee7: /* 7e1ee7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1eea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7e1eed: lea ecx, [esi + edx*4 + 0x284] */
  ecx = (uint32_t)(esi + edx*4 + 0x284u);
/* 7e1ef4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1efau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1efa: jmp 0x7e1e52 */
  goto L_7e1e52;
L_7e1eff: /* 7e1eff: cmp dword ptr [0xb82878], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb82878u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f05: jne 0x7e1fef */
  if (!zf) goto L_7e1fef;
L_7e1f0b: /* 7e1f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f0c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1f11: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f18: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e1f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1f1c: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1f22u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1f22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1f25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f27: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f2d: /* 7e1f2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f2e: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f35: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f38: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e1f3eu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e1f3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f3f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e1f48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e1f48: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f4f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e1f55u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f55: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f57: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f5d: /* 7e1f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e1f60: /* 7e1f60: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e1f63: jae 0x7e1fef */
  if (!cf) goto L_7e1fef;
L_7e1f69: /* 7e1f69: mov ecx, ebx */
  ecx = ebx;
/* 7e1f6b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7e1f6e: lea edi, [ecx + esi] */
  edi = (uint32_t)(ecx + esi);
/* 7e1f71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7e1f78: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e1f7eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1f80: je 0x7e1fe9 */
  if (zf) goto L_7e1fe9;
L_7e1f82: /* 7e1f82: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7e1f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1f89: mov dword ptr [0xb82878], 1 */
  W32((uint32_t)(0xb82878u), 0x1u);
/* 7e1f93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1f99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1f99: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1f9c: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1f9f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e1fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1fa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1fa4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e1faau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1faa: mov dword ptr [0xb82878], 0 */
  W32((uint32_t)(0xb82878u), 0x0u);
/* 7e1fb4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1fe9: /* 7e1fe9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e1fea: jmp 0x7e1f60 */
  goto L_7e1f60;
L_7e1fef: /* 7e1fef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1ff4: xor eax, eax */
  eax = 0;
/* 7e1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1ffe: mov esp, ebp */
  esp = ebp;
/* 7e2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e1e74(void) {
  LOAD_REGS();
  goto L_7e1e74;
L_7e1e52: /* 7e1e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e53: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e1e56: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7e1e5cu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_7e1e5c: /* 7e1e5c: mov eax, 1 */
  eax = 0x1u;
/* 7e1e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1e64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1e6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1e6e: mov esp, ebp */
  esp = ebp;
/* 7e1e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1e71: ret 8 */
  esp += 12; SPILL(); return;
L_7e1e74: /* 7e1e74: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1e77: push 0xadd7dc */
  { uint32_t v = 0xadd7dcu; esp -= 4; W32(esp, v); }
/* 7e1e7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e7d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1e7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1e7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e82: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1e84: je 0x7e1ea2 */
  if (zf) goto L_7e1ea2;
L_7e1e86: /* 7e1e86: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e1e89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1e8a: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7e1e90u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7e1e90: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1e93: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1e96: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e9a: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e1ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ea0: jmp 0x7e1e52 */
  goto L_7e1e52;
L_7e1ea2: /* 7e1ea2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1ea5: push 0xadd800 */
  { uint32_t v = 0xadd800u; esp -= 4; W32(esp, v); }
/* 7e1eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1eab: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ead: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1eb0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eb2: je 0x7e1eff */
  if (zf) goto L_7e1eff;
L_7e1eb4: /* 7e1eb4: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1eb7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e1eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ebb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e1ebe: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ec2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7e1ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ec8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eca: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ecc: /* 7e1ecc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1ecf: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7e1ed2: lea ecx, [esi + ecx*4 + 0x284] */
  ecx = (uint32_t)(esi + ecx*4 + 0x284u);
/* 7e1ed9: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e1edfu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e1edf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1ee1: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ee7: /* 7e1ee7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1eea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7e1eed: lea ecx, [esi + edx*4 + 0x284] */
  ecx = (uint32_t)(esi + edx*4 + 0x284u);
/* 7e1ef4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1efau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1efa: jmp 0x7e1e52 */
  goto L_7e1e52;
L_7e1eff: /* 7e1eff: cmp dword ptr [0xb82878], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb82878u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f05: jne 0x7e1fef */
  if (!zf) goto L_7e1fef;
L_7e1f0b: /* 7e1f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f0c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1f11: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f18: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e1f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1f1c: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1f22u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1f22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1f25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f27: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f2d: /* 7e1f2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f2e: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f35: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f38: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e1f3eu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e1f3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f3f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e1f48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e1f48: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f4f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e1f55u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f55: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f57: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f5d: /* 7e1f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e1f60: /* 7e1f60: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e1f63: jae 0x7e1fef */
  if (!cf) goto L_7e1fef;
L_7e1f69: /* 7e1f69: mov ecx, ebx */
  ecx = ebx;
/* 7e1f6b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7e1f6e: lea edi, [ecx + esi] */
  edi = (uint32_t)(ecx + esi);
/* 7e1f71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7e1f78: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e1f7eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1f80: je 0x7e1fe9 */
  if (zf) goto L_7e1fe9;
L_7e1f82: /* 7e1f82: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7e1f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1f89: mov dword ptr [0xb82878], 1 */
  W32((uint32_t)(0xb82878u), 0x1u);
/* 7e1f93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1f99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1f99: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1f9c: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1f9f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e1fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1fa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1fa4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e1faau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1faa: mov dword ptr [0xb82878], 0 */
  W32((uint32_t)(0xb82878u), 0x0u);
/* 7e1fb4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1fe9: /* 7e1fe9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e1fea: jmp 0x7e1f60 */
  goto L_7e1f60;
L_7e1fef: /* 7e1fef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1ff4: xor eax, eax */
  eax = 0;
/* 7e1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1ffe: mov esp, ebp */
  esp = ebp;
/* 7e2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e1ea2(void) {
  LOAD_REGS();
  goto L_7e1ea2;
L_7e1e52: /* 7e1e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1e53: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e1e56: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7e1e5cu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_7e1e5c: /* 7e1e5c: mov eax, 1 */
  eax = 0x1u;
/* 7e1e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1e64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1e6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1e6e: mov esp, ebp */
  esp = ebp;
/* 7e1e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1e71: ret 8 */
  esp += 12; SPILL(); return;
L_7e1ea2: /* 7e1ea2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e1ea5: push 0xadd800 */
  { uint32_t v = 0xadd800u; esp -= 4; W32(esp, v); }
/* 7e1eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1eab: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e1eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ead: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1eb0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eb2: je 0x7e1eff */
  if (zf) goto L_7e1eff;
L_7e1eb4: /* 7e1eb4: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1eb7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e1eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ebb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e1ebe: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1ec2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7e1ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1ec8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1eca: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ecc: /* 7e1ecc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1ecf: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7e1ed2: lea ecx, [esi + ecx*4 + 0x284] */
  ecx = (uint32_t)(esi + ecx*4 + 0x284u);
/* 7e1ed9: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e1edfu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e1edf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1ee1: je 0x7e1e5c */
  if (zf) goto L_7e1e5c;
L_7e1ee7: /* 7e1ee7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e1eea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7e1eed: lea ecx, [esi + edx*4 + 0x284] */
  ecx = (uint32_t)(esi + edx*4 + 0x284u);
/* 7e1ef4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1efau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1efa: jmp 0x7e1e52 */
  goto L_7e1e52;
L_7e1eff: /* 7e1eff: cmp dword ptr [0xb82878], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb82878u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f05: jne 0x7e1fef */
  if (!zf) goto L_7e1fef;
L_7e1f0b: /* 7e1f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f0c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1f11: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f18: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e1f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1f1c: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1f22u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1f22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1f25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f27: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f2d: /* 7e1f2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f2e: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f35: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f38: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e1f3eu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e1f3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f3f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e1f48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e1f48: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f4f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e1f55u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f55: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f57: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f5d: /* 7e1f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e1f60: /* 7e1f60: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e1f63: jae 0x7e1fef */
  if (!cf) goto L_7e1fef;
L_7e1f69: /* 7e1f69: mov ecx, ebx */
  ecx = ebx;
/* 7e1f6b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7e1f6e: lea edi, [ecx + esi] */
  edi = (uint32_t)(ecx + esi);
/* 7e1f71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7e1f78: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e1f7eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1f80: je 0x7e1fe9 */
  if (zf) goto L_7e1fe9;
L_7e1f82: /* 7e1f82: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7e1f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1f89: mov dword ptr [0xb82878], 1 */
  W32((uint32_t)(0xb82878u), 0x1u);
/* 7e1f93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1f99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1f99: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1f9c: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1f9f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e1fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1fa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1fa4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e1faau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1faa: mov dword ptr [0xb82878], 0 */
  W32((uint32_t)(0xb82878u), 0x0u);
/* 7e1fb4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1fe9: /* 7e1fe9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e1fea: jmp 0x7e1f60 */
  goto L_7e1f60;
L_7e1fef: /* 7e1fef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1ff4: xor eax, eax */
  eax = 0;
/* 7e1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1ffe: mov esp, ebp */
  esp = ebp;
/* 7e2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e1eff(void) {
  LOAD_REGS();
  goto L_7e1eff;
L_7e1e5c: /* 7e1e5c: mov eax, 1 */
  eax = 0x1u;
/* 7e1e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1e64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1e6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1e6e: mov esp, ebp */
  esp = ebp;
/* 7e1e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1e71: ret 8 */
  esp += 12; SPILL(); return;
L_7e1eff: /* 7e1eff: cmp dword ptr [0xb82878], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb82878u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f05: jne 0x7e1fef */
  if (!zf) goto L_7e1fef;
L_7e1f0b: /* 7e1f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f0c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e1f11: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f18: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e1f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1f1c: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7e1f22u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7e1f22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1f25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f27: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f2d: /* 7e1f2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f2e: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7e1f34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f35: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f38: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e1f3eu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e1f3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e1f3f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e1f48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e1f48: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e1f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1f4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f4f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e1f55u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f55: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e1f57: je 0x7e1fef */
  if (zf) goto L_7e1fef;
L_7e1f5d: /* 7e1f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e1f60: /* 7e1f60: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e1f63: jae 0x7e1fef */
  if (!cf) goto L_7e1fef;
L_7e1f69: /* 7e1f69: mov ecx, ebx */
  ecx = ebx;
/* 7e1f6b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7e1f6e: lea edi, [ecx + esi] */
  edi = (uint32_t)(ecx + esi);
/* 7e1f71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7e1f78: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e1f7eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1f80: je 0x7e1fe9 */
  if (zf) goto L_7e1fe9;
L_7e1f82: /* 7e1f82: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7e1f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1f89: mov dword ptr [0xb82878], 1 */
  W32((uint32_t)(0xb82878u), 0x1u);
/* 7e1f93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1f99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1f99: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1f9c: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1f9f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e1fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1fa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1fa4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e1faau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1faa: mov dword ptr [0xb82878], 0 */
  W32((uint32_t)(0xb82878u), 0x0u);
/* 7e1fb4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1fe9: /* 7e1fe9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e1fea: jmp 0x7e1f60 */
  goto L_7e1f60;
L_7e1fef: /* 7e1fef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1ff4: xor eax, eax */
  eax = 0;
/* 7e1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1ffe: mov esp, ebp */
  esp = ebp;
/* 7e2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e1fb9(void) {
  LOAD_REGS();
L_7e1fb9: /* 7e1fb9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e1fbc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e1fc1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e1fc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e1fc5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e1fc8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1fcdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e1fcd(); return;
}

void f_7e1fcd(void) {
  LOAD_REGS();
  goto L_7e1fcd;
L_7e1e5c: /* 7e1e5c: mov eax, 1 */
  eax = 0x1u;
/* 7e1e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1e64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1e6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1e6e: mov esp, ebp */
  esp = ebp;
/* 7e1e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e1e71: ret 8 */
  esp += 12; SPILL(); return;
L_7e1f60: /* 7e1f60: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e1f63: jae 0x7e1fef */
  if (!cf) goto L_7e1fef;
L_7e1f69: /* 7e1f69: mov ecx, ebx */
  ecx = ebx;
/* 7e1f6b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7e1f6e: lea edi, [ecx + esi] */
  edi = (uint32_t)(ecx + esi);
/* 7e1f71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e1f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e1f75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7e1f78: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e1f7eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e1f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e1f80: je 0x7e1fe9 */
  if (zf) goto L_7e1fe9;
L_7e1f82: /* 7e1f82: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7e1f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e1f89: mov dword ptr [0xb82878], 1 */
  W32((uint32_t)(0xb82878u), 0x1u);
/* 7e1f93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e1f99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e1f99: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7e1f9c: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7e1f9f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e1fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e1fa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e1fa4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e1faau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e1faa: mov dword ptr [0xb82878], 0 */
  W32((uint32_t)(0xb82878u), 0x0u);
/* 7e1fb4: jmp 0x7e1e5c */
  goto L_7e1e5c;
L_7e1fcd: /* 7e1fcd: push 0xa104b8 */
  { uint32_t v = 0xa104b8u; esp -= 4; W32(esp, v); }
/* 7e1fd2: push 0xadd818 */
  { uint32_t v = 0xadd818u; esp -= 4; W32(esp, v); }
/* 7e1fd7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e1fddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e1fdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e1fe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1fe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e1fe4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e1fe9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e1fe9: /* 7e1fe9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e1fea: jmp 0x7e1f60 */
  goto L_7e1f60;
L_7e1fef: /* 7e1fef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e1ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e1ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e1ff4: xor eax, eax */
  eax = 0;
/* 7e1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e1ffe: mov esp, ebp */
  esp = ebp;
/* 7e2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2004(void) {
  LOAD_REGS();
L_7e2004: /* 7e2004: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e2007: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e200c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7e200f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2010: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e2013: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2018u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e2018(); return;
}

void f_7e2018(void) {
  LOAD_REGS();
L_7e2018: /* 7e2018: push 0xa10498 */
  { uint32_t v = 0xa10498u; esp -= 4; W32(esp, v); }
/* 7e201d: push 0xadd820 */
  { uint32_t v = 0xadd820u; esp -= 4; W32(esp, v); }
/* 7e2022: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e2028u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e2028: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e202b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e202d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e202f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2034u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e2034: guest_badaddr(0x7e2034); return;
}

void f_7e21e0(void) {
  LOAD_REGS();
L_7e21e0: /* 7e21e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e21e1: mov ebp, esp */
  ebp = esp;
/* 7e21e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e21e5: push 0x9d0d60 */
  { uint32_t v = 0x9d0d60u; esp -= 4; W32(esp, v); }
/* 7e21ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e21f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e21f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e21f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e21fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e21fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e21fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e21fe: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7e2201: xor ebx, ebx */
  ebx = 0;
/* 7e2203: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2205: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e2208: mov esi, ecx */
  esi = ecx;
/* 7e220a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e220d: jl 0x7e2217 */
  if ((sf != of)) goto L_7e2217;
L_7e220f: /* 7e220f: cmp edi, 0xff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2215: jl 0x7e222f */
  if ((sf != of)) goto L_7e222f;
L_7e2217: /* 7e2217: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 7e221c: push 0xadd830 */
  { uint32_t v = 0xadd830u; esp -= 4; W32(esp, v); }
/* 7e2221: push 0xadd83c */
  { uint32_t v = 0xadd83cu; esp -= 4; W32(esp, v); }
/* 7e2226: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e222cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e222c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e222f: /* 7e222f: lea eax, [edi + edi*2 + 0xab] */
  eax = (uint32_t)(edi + edi*2 + 0xabu);
/* 7e2236: lea edi, [esi + eax*4] */
  edi = (uint32_t)(esi + eax*4);
/* 7e2239: mov ecx, edi */
  ecx = edi;
/* 7e223b: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e2241u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e2241: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2243: je 0x7e2292 */
  if (zf) goto L_7e2292;
L_7e2245: /* 7e2245: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e2248: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e224b: mov dword ptr [esi + 0xea8], ecx */
  W32((uint32_t)(esi + 0xea8u), ecx);
/* 7e2251: mov ecx, edi */
  ecx = edi;
/* 7e2253: mov dword ptr [esi + 0xeac], edx */
  W32((uint32_t)(esi + 0xeacu), edx);
/* 7e2259: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e225fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e225f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e2262: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e2264: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2266: mov ecx, esi */
  ecx = esi;
/* 7e2268: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7e226eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e226e: mov dword ptr [esi + 0xea8], ebx */
  W32((uint32_t)(esi + 0xea8u), ebx);
/* 7e2274: mov dword ptr [esi + 0xeac], ebx */
  W32((uint32_t)(esi + 0xeacu), ebx);
/* 7e227a: mov eax, 1 */
  eax = 0x1u;
/* 7e227f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2282: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2289: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e228a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e228b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e228c: mov esp, ebp */
  esp = ebp;
/* 7e228e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e228f: ret 0x10 */
  esp += 20; SPILL(); return;
L_7e2292: /* 7e2292: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2295: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2296: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2297: xor eax, eax */
  eax = 0;
/* 7e2299: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e22a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e22a1: mov esp, ebp */
  esp = ebp;
/* 7e22a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e22a4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7e22a7(void) {
  LOAD_REGS();
L_7e22a7: /* 7e22a7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e22aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e22af: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e22b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e22b3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e22b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e22bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e22bb(); return;
}

void f_7e22bb(void) {
  LOAD_REGS();
L_7e22bb: /* 7e22bb: push 0xa104d0 */
  { uint32_t v = 0xa104d0u; esp -= 4; W32(esp, v); }
/* 7e22c0: push 0xadd854 */
  { uint32_t v = 0xadd854u; esp -= 4; W32(esp, v); }
/* 7e22c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e22cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e22cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e22ce: xor ebx, ebx */
  ebx = 0;
/* 7e22d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e22d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e22d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e22d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e22d7: guest_badaddr(0x7e22d7); return;
}

void f_7e2320(void) {
  LOAD_REGS();
L_7e2320: /* 7e2320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2321: mov ebp, esp */
  ebp = esp;
/* 7e2323: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 7e2326: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2328: push 0x9d0d9d */
  { uint32_t v = 0x9d0d9du; esp -= 4; W32(esp, v); }
/* 7e232d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2334: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e233b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e233e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e2341: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2342: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2343: mov esi, ecx */
  esi = ecx;
/* 7e2345: lea eax, [eax + eax*2 + 0xab] */
  eax = (uint32_t)(eax + eax*2 + 0xabu);
/* 7e234c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e234d: lea ecx, [esi + eax*4] */
  ecx = (uint32_t)(esi + eax*4);
/* 7e2350: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e2356u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e2356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2357: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7e235b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e2361u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e2361: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e2365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2366: xor edi, edi */
  edi = 0;
/* 7e2368: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7e236c: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 7e2370: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e2376u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e2376: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 7e237a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e237b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 7e237f: mov byte ptr [esp + 0x58], 1 */
  W8((uint32_t)(esp + 0x58u), 0x1u);
/* 7e2384: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e238au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e238a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e238e: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 7e2393: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e2399u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e2399: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e239b: je 0x7e24a3 */
  if (zf) goto L_7e24a3;
L_7e23a1: /* 7e23a1: push 0xadd85c */
  { uint32_t v = 0xadd85cu; esp -= 4; W32(esp, v); }
/* 7e23a6: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7e23aa: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e23b0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e23b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e23b1: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 7e23b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e23b6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7e23ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e23bb: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 7e23bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e23c0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7e23c4: mov byte ptr [esp + 0x64], 3 */
  W8((uint32_t)(esp + 0x64u), 0x3u);
/* 7e23c9: call dword ptr [0xcfaa5c] */
  esp -= 4; W32(esp, 0x7e23cfu); SPILL(); f_4e443a(); if (g_unwind) return; /* Core!?Split@FString@@QBEHABV1@PAV1@1H@Z */ RELOAD();
/* 7e23cf: mov ebx, eax */
  ebx = eax;
/* 7e23d1: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 7e23d3: sbb bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 7e23d5: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 7e23d9: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 7e23db: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 7e23e0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e23e6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e23e6: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e23e8: je 0x7e240a */
  if (zf) goto L_7e240a;
L_7e23ea: /* 7e23ea: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7e23ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e23ef: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7e23f3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e23f9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e23f9: push 0xb82228 */
  { uint32_t v = 0xb82228u; esp -= 4; W32(esp, v); }
/* 7e23fe: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7e2402: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e2408u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7e2408: jmp 0x7e2419 */
  goto L_7e2419;
L_7e240a: /* 7e240a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7e240e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e240f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7e2413: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e2419u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_7e2419: /* 7e2419: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e241c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e241f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7e2423: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7e2426: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e242cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e242c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e242d: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 7e2431: push 0xadd860 */
  { uint32_t v = 0xadd860u; esp -= 4; W32(esp, v); }
/* 7e2436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2437: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7e243du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7e243d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2440: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e2443: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 7e2445: mov dword ptr [esi + 0xea8], 2 */
  W32((uint32_t)(esi + 0xea8u), 0x2u);
/* 7e244f: mov dword ptr [esi + 0xeac], eax */
  W32((uint32_t)(esi + 0xeacu), eax);
/* 7e2455: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7e245b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e245d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e245e: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 7e2462: mov byte ptr [esp + 0x58], 4 */
  W8((uint32_t)(esp + 0x58u), 0x4u);
/* 7e2467: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e246du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e246d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e246e: mov ecx, esi */
  ecx = esi;
/* 7e2470: call dword ptr [ebx + 0x98] */
  { uint32_t t = R32((uint32_t)(ebx + 0x98u)); esp -= 4; W32(esp, 0x7e2476u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e2476: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 7e247a: mov dword ptr [esi + 0xea8], edi */
  W32((uint32_t)(esi + 0xea8u), edi);
/* 7e2480: mov dword ptr [esi + 0xeac], edi */
  W32((uint32_t)(esi + 0xeacu), edi);
/* 7e2486: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 7e248b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e2491u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e2491: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e2495: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e249bu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e249b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e249d: jne 0x7e23a1 */
  if (!zf) goto L_7e23a1;
L_7e24a3: /* 7e24a3: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7e24a7: mov byte ptr [esp + 0x54], 1 */
  W8((uint32_t)(esp + 0x54u), 0x1u);
/* 7e24ac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e24b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e24b2: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7e24b6: mov byte ptr [esp + 0x54], 0 */
  W8((uint32_t)(esp + 0x54u), 0x0u);
/* 7e24bb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e24c1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e24c1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e24c5: mov dword ptr [esp + 0x54], 0xffffffff */
  W32((uint32_t)(esp + 0x54u), 0xffffffffu);
/* 7e24cd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e24d3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e24d3: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 7e24d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e24d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e24d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e24e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e24e1: mov esp, ebp */
  esp = ebp;
/* 7e24e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e24e4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7e2570(void) {
  LOAD_REGS();
L_7e2570: /* 7e2570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2571: mov ebp, esp */
  ebp = esp;
/* 7e2573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2575: push 0x9d0dc0 */
  { uint32_t v = 0x9d0dc0u; esp -= 4; W32(esp, v); }
/* 7e257a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e2588: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e258b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e258e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e2590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2591: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2592: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2593: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e2596: mov edi, ecx */
  edi = ecx;
/* 7e2598: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e259f: jl 0x7e262a */
  if ((sf != of)) goto L_7e262a;
L_7e25a5: /* 7e25a5: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e25aa: jge 0x7e262a */
  if ((sf == of)) goto L_7e262a;
L_7e25ac: /* 7e25ac: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* 7e25b3: mov eax, dword ptr [edi + 0xea4] */
  eax = R32((uint32_t)(edi + 0xea4u));
/* 7e25b9: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7e25bc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e25be: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7e25c4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7e25c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e25c5: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7e25cbu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7e25cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e25ce: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e25d1: jle 0x7e262a */
  if ((zf || sf != of)) goto L_7e262a;
L_7e25d3: /* 7e25d3: mov ecx, dword ptr [edi + 0xea4] */
  ecx = R32((uint32_t)(edi + 0xea4u));
/* 7e25d9: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 7e25dc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e25de: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7e25e4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7e25e4: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e25e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e25ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e25f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e25f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e25f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e25f4: mov esp, ebp */
  esp = ebp;
/* 7e25f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e25f7: ret 4 */
  esp += 8; SPILL(); return;
L_7e262a: /* 7e262a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e262d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e262e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e262f: mov eax, 0xb8222c */
  eax = 0xb8222cu;
/* 7e2634: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e263b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e263c: mov esp, ebp */
  esp = ebp;
/* 7e263e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e263f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e25fa(void) {
  LOAD_REGS();
L_7e25fa: /* 7e25fa: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e25fd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e2602: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e2605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2606: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e2609: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e260eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e260e(); return;
}

void f_7e260e(void) {
  LOAD_REGS();
L_7e260e: /* 7e260e: push 0xa104f8 */
  { uint32_t v = 0xa104f8u; esp -= 4; W32(esp, v); }
/* 7e2613: push 0xadd8a0 */
  { uint32_t v = 0xadd8a0u; esp -= 4; W32(esp, v); }
/* 7e2618: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e261eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e261e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2621: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2625: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e262au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e262a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e262d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e262e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e262f: mov eax, 0xb8222c */
  eax = 0xb8222cu;
/* 7e2634: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e263b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e263c: mov esp, ebp */
  esp = ebp;
/* 7e263e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e263f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e2690(void) {
  LOAD_REGS();
L_7e2690: /* 7e2690: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2691: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2692: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7e2696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2697: mov edi, ecx */
  edi = ecx;
/* 7e2699: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 7e269f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7e26a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e26a4: jle 0x7e26d0 */
  if ((zf || sf != of)) goto L_7e26d0;
L_7e26a6: /* 7e26a6: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7e26aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7e26b0: /* 7e26b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e26b2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7e26b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e26b5: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7e26b8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e26beu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e26be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e26c0: jne 0x7e26d8 */
  if (!zf) goto L_7e26d8;
L_7e26c2: /* 7e26c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7e26c4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e26c5: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7e26c7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7e26ca: mov edx, ecx */
  edx = ecx;
/* 7e26cc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e26ce: jl 0x7e26b0 */
  if ((sf != of)) goto L_7e26b0;
L_7e26d0: /* 7e26d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e26d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e26d2: xor eax, eax */
  eax = 0;
/* 7e26d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e26d5: ret 8 */
  esp += 12; SPILL(); return;
L_7e26d8: /* 7e26d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e26d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e26da: mov eax, 1 */
  eax = 0x1u;
/* 7e26df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e26e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2710(void) {
  LOAD_REGS();
L_7e2710: /* 7e2710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e2714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2717: mov esi, ecx */
  esi = ecx;
/* 7e2719: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e271b: je 0x7e272e */
  if (zf) goto L_7e272e;
L_7e271d: /* 7e271d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7e2720: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7e2723: call 0x6c3788 */
  esp -= 4; W32(esp, 0x7e2728u); SPILL(); f_6c3788(); if (g_unwind) return; RELOAD();
/* 7e2728: mov eax, esi */
  eax = esi;
/* 7e272a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e272b: ret 4 */
  esp += 8; SPILL(); return;
L_7e272e: /* 7e272e: xor eax, eax */
  eax = 0;
/* 7e2730: mov ecx, esi */
  ecx = esi;
/* 7e2732: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7e2735: call 0x6c3788 */
  esp -= 4; W32(esp, 0x7e273au); SPILL(); f_6c3788(); if (g_unwind) return; RELOAD();
/* 7e273a: mov eax, esi */
  eax = esi;
/* 7e273c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e273d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e2750(void) {
  LOAD_REGS();
L_7e2750: /* 7e2750: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e2753: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e2756: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e2759: jmp 0x6c3788 */
  SPILL(); f_6c3788(); return;
}

void f_7e2770(void) {
  LOAD_REGS();
L_7e2770: /* 7e2770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e2774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2777: mov esi, ecx */
  esi = ecx;
/* 7e2779: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e277b: je 0x7e278e */
  if (zf) goto L_7e278e;
L_7e277d: /* 7e277d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7e2780: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7e2783: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7e2788u); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7e2788: mov eax, esi */
  eax = esi;
/* 7e278a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e278b: ret 4 */
  esp += 8; SPILL(); return;
L_7e278e: /* 7e278e: xor eax, eax */
  eax = 0;
/* 7e2790: mov ecx, esi */
  ecx = esi;
/* 7e2792: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7e2795: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7e279au); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7e279a: mov eax, esi */
  eax = esi;
/* 7e279c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e279d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e27b0(void) {
  LOAD_REGS();
L_7e27b0: /* 7e27b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e27b3: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e27b6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e27b9: jmp 0x6c1ef6 */
  SPILL(); f_6c1ef6(); return;
}

void f_7e27d0(void) {
  LOAD_REGS();
L_7e27d0: /* 7e27d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e27d1: mov ebp, esp */
  ebp = esp;
/* 7e27d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 7e27d6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e27d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e27da: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7e27dd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e27df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e27e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e27e1: je 0x7e27ed */
  if (zf) goto L_7e27ed;
L_7e27e3: /* 7e27e3: mov ecx, ebx */
  ecx = ebx;
/* 7e27e5: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7e27ebu); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7e27eb: jmp 0x7e27ef */
  goto L_7e27ef;
L_7e27ed: /* 7e27ed: xor eax, eax */
  eax = 0;
L_7e27ef: /* 7e27ef: xor ecx, ecx */
  ecx = 0;
/* 7e27f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e27f2: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e27f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e27f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e27f9: call 0x99c910 */
  esp -= 4; W32(esp, 0x7e27feu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7e27fe: mov esi, eax */
  esi = eax;
/* 7e2800: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e2803: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7e2805: mov edi, edx */
  edi = edx;
/* 7e2807: add esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 7e280a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e280b: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 7e280e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e280f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2810: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7e2815: call dword ptr [0xcfaa64] */
  esp -= 4; W32(esp, 0x7e281bu); SPILL(); f_4e102d(); if (g_unwind) return; /* Core!?Get@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@H@Z */ RELOAD();
/* 7e281b: xor ecx, ecx */
  ecx = 0;
/* 7e281d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e281f: jne 0x7e28f5 */
  if (!zf) goto L_7e28f5;
L_7e2825: /* 7e2825: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2827: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7e282b: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7e282f: je 0x7e2834 */
  if (zf) goto L_7e2834;
L_7e2831: /* 7e2831: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
L_7e2834: /* 7e2834: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7e2838: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7e283c: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7e2841u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7e2841: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7e2845: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2847: je 0x7e2872 */
  if (zf) goto L_7e2872;
L_7e2849: /* 7e2849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e2850: /* 7e2850: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2854: je 0x7e285a */
  if (zf) goto L_7e285a;
L_7e2856: /* 7e2856: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_7e285a: /* 7e285a: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e285d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7e2861: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 7e2865: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7e286au); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7e286a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7e286e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2870: jne 0x7e2850 */
  if (!zf) goto L_7e2850;
L_7e2872: /* 7e2872: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7e2876: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e2879: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e287b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7e287d: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 7e2884: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2885: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2888: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7e288d: call dword ptr [0xcfaa60] */
  esp -= 4; W32(esp, 0x7e2893u); SPILL(); f_4e24af(); if (g_unwind) return; /* Core!?Create@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@HHH@Z */ RELOAD();
/* 7e2893: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2895: mov esi, eax */
  esi = eax;
/* 7e2897: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7e289b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e289d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7e28a1: je 0x7e28ac */
  if (zf) goto L_7e28ac;
L_7e28a3: /* 7e28a3: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7e28a6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7e28aa: jmp 0x7e28b4 */
  goto L_7e28b4;
L_7e28ac: /* 7e28ac: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_7e28b4: /* 7e28b4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7e28b8: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7e28bdu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7e28bd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7e28c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e28c3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7e28c7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7e28cb: je 0x7e28f3 */
  if (zf) goto L_7e28f3;
L_7e28cd: /* 7e28cd: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
L_7e28d0: /* 7e28d0: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e28d4: je 0x7e28db */
  if (zf) goto L_7e28db;
L_7e28d6: /* 7e28d6: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7e28d8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7e28db: /* 7e28db: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e28de: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7e28e2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7e28e6: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7e28ebu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7e28eb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7e28ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e28f1: jne 0x7e28d0 */
  if (!zf) goto L_7e28d0;
L_7e28f3: /* 7e28f3: mov eax, esi */
  eax = esi;
L_7e28f5: /* 7e28f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e28f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e28f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e28f8: mov esp, ebp */
  esp = ebp;
/* 7e28fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e28fb: ret  */
  esp += 4; SPILL(); return;
}

void f_7e2950(void) {
  LOAD_REGS();
L_7e2950: /* 7e2950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2951: mov ebp, esp */
  ebp = esp;
/* 7e2953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2955: push 0x9d0dd0 */
  { uint32_t v = 0x9d0dd0u; esp -= 4; W32(esp, v); }
/* 7e295a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e2968: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e296b: mov eax, dword ptr [ecx + 0xea0] */
  eax = R32((uint32_t)(ecx + 0xea0u));
/* 7e2971: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2973: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2974: xor edi, edi */
  edi = 0;
/* 7e2976: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2978: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e297b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e297e: jne 0x7e2995 */
  if (!zf) goto L_7e2995;
L_7e2980: /* 7e2980: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 7e2982: push 0xadd550 */
  { uint32_t v = 0xadd550u; esp -= 4; W32(esp, v); }
/* 7e2987: push 0xadd55c */
  { uint32_t v = 0xadd55cu; esp -= 4; W32(esp, v); }
/* 7e298c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e2992u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e2992: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e2995: /* 7e2995: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e2998: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e299a: jne 0x7e29b4 */
  if (!zf) goto L_7e29b4;
L_7e299c: /* 7e299c: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7e29a1: push 0xadd568 */
  { uint32_t v = 0xadd568u; esp -= 4; W32(esp, v); }
/* 7e29a6: push 0xadd574 */
  { uint32_t v = 0xadd574u; esp -= 4; W32(esp, v); }
/* 7e29ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e29b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e29b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e29b4: /* 7e29b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e29b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e29b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e29b9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e29bc: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e29c2u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e29c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e29c3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e29c6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e29ccu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e29cc: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e29cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e29d0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e29d3: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e29d9u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e29d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e29db: je 0x7e2a62 */
  if (zf) goto L_7e2a62;
L_7e29e1: /* 7e29e1: mov ecx, esi */
  ecx = esi;
/* 7e29e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e29e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e29e9: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7e29ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e29ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e29ee: call 0x6c6a5a */
  esp -= 4; W32(esp, 0x7e29f3u); SPILL(); f_6c6a5a(); if (g_unwind) return; RELOAD();
/* 7e29f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e29f6: mov ebx, eax */
  ebx = eax;
L_7e29f8: /* 7e29f8: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e29fa: jge 0x7e2a38 */
  if ((sf == of)) goto L_7e2a38;
L_7e29fc: /* 7e29fc: mov ecx, dword ptr [ebx + edi*4 + 4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2a00: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e2a03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2a04: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e2a0au); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e2a0a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2a0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2a0e: mov ecx, eax */
  ecx = eax;
/* 7e2a10: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e2a16u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e2a16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2a18: je 0x7e2a35 */
  if (zf) goto L_7e2a35;
L_7e2a1a: /* 7e2a1a: mov esi, dword ptr [ebx + edi*4 + 4] */
  esi = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2a1e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2a20: je 0x7e2a35 */
  if (zf) goto L_7e2a35;
L_7e2a22: /* 7e2a22: call dword ptr [0xcfa95c] */
  esp -= 4; W32(esp, 0x7e2a28u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e2a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2a29: mov ecx, esi */
  ecx = esi;
/* 7e2a2b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e2a31u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e2a31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2a33: jne 0x7e2a38 */
  if (!zf) goto L_7e2a38;
L_7e2a35: /* 7e2a35: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e2a36: jmp 0x7e29f8 */
  goto L_7e29f8;
L_7e2a38: /* 7e2a38: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e2a3b: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x7e2a41u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 7e2a41: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2a43: jge 0x7e2a62 */
  if ((sf == of)) goto L_7e2a62;
L_7e2a45: /* 7e2a45: mov edx, dword ptr [ebx + edi*4 + 4] */
  edx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2a49: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 7e2a4c: add eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e2a4f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2a52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2a59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2a5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2a5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2a5c: mov esp, ebp */
  esp = ebp;
/* 7e2a5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2a5f: ret 8 */
  esp += 12; SPILL(); return;
L_7e2a62: /* 7e2a62: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2a65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2a67: xor eax, eax */
  eax = 0;
/* 7e2a69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2a70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2a71: mov esp, ebp */
  esp = ebp;
/* 7e2a73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2a74: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2a77(void) {
  LOAD_REGS();
L_7e2a77: /* 7e2a77: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e2a7a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e2a7f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e2a82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2a83: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e2a86: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2a8bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e2a8b(); return;
}

void f_7e2a8b(void) {
  LOAD_REGS();
L_7e2a8b: /* 7e2a8b: push 0xa10528 */
  { uint32_t v = 0xa10528u; esp -= 4; W32(esp, v); }
/* 7e2a90: push 0xadd57c */
  { uint32_t v = 0xadd57cu; esp -= 4; W32(esp, v); }
/* 7e2a95: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e2a9bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e2a9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2a9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2aa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2aa2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2aa7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e2aa7: guest_badaddr(0x7e2aa7); return;
}

void f_7e2b10(void) {
  LOAD_REGS();
L_7e2b10: /* 7e2b10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2b11: mov ebp, esp */
  ebp = esp;
/* 7e2b13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2b15: push 0x9d0de0 */
  { uint32_t v = 0x9d0de0u; esp -= 4; W32(esp, v); }
/* 7e2b1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2b21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e2b28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e2b2b: mov eax, dword ptr [ecx + 0xea0] */
  eax = R32((uint32_t)(ecx + 0xea0u));
/* 7e2b31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2b32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2b33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2b34: xor edi, edi */
  edi = 0;
/* 7e2b36: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2b38: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e2b3b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e2b3e: jne 0x7e2b58 */
  if (!zf) goto L_7e2b58;
L_7e2b40: /* 7e2b40: push 0x9a */
  { uint32_t v = 0x9au; esp -= 4; W32(esp, v); }
/* 7e2b45: push 0xadd584 */
  { uint32_t v = 0xadd584u; esp -= 4; W32(esp, v); }
/* 7e2b4a: push 0xadd590 */
  { uint32_t v = 0xadd590u; esp -= 4; W32(esp, v); }
/* 7e2b4f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e2b55u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e2b55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e2b58: /* 7e2b58: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e2b5b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2b5d: jne 0x7e2b77 */
  if (!zf) goto L_7e2b77;
L_7e2b5f: /* 7e2b5f: push 0x9b */
  { uint32_t v = 0x9bu; esp -= 4; W32(esp, v); }
/* 7e2b64: push 0xadd59c */
  { uint32_t v = 0xadd59cu; esp -= 4; W32(esp, v); }
/* 7e2b69: push 0xadd5a8 */
  { uint32_t v = 0xadd5a8u; esp -= 4; W32(esp, v); }
/* 7e2b6e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e2b74u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e2b74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e2b77: /* 7e2b77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e2b7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2b7c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2b7f: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e2b85u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e2b85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2b86: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e2b89: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e2b8fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e2b8f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e2b92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2b93: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2b96: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e2b9cu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e2b9c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2b9e: je 0x7e2c2a */
  if (zf) goto L_7e2c2a;
L_7e2ba4: /* 7e2ba4: mov ecx, esi */
  ecx = esi;
/* 7e2ba6: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e2bacu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e2bac: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7e2baf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2bb1: call 0x6c6a5a */
  esp -= 4; W32(esp, 0x7e2bb6u); SPILL(); f_6c6a5a(); if (g_unwind) return; RELOAD();
/* 7e2bb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2bb9: mov ebx, eax */
  ebx = eax;
/* 7e2bbb: jmp 0x7e2bc0 */
  goto L_7e2bc0;
L_7e2bc0: /* 7e2bc0: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2bc2: jge 0x7e2c00 */
  if ((sf == of)) goto L_7e2c00;
L_7e2bc4: /* 7e2bc4: mov ecx, dword ptr [ebx + edi*4 + 4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2bc8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e2bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2bcc: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e2bd2u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e2bd2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2bd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2bd6: mov ecx, eax */
  ecx = eax;
/* 7e2bd8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e2bdeu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e2bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2be0: je 0x7e2bfd */
  if (zf) goto L_7e2bfd;
L_7e2be2: /* 7e2be2: mov esi, dword ptr [ebx + edi*4 + 4] */
  esi = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2be6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2be8: je 0x7e2bfd */
  if (zf) goto L_7e2bfd;
L_7e2bea: /* 7e2bea: call dword ptr [0xcfa960] */
  esp -= 4; W32(esp, 0x7e2bf0u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e2bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2bf1: mov ecx, esi */
  ecx = esi;
/* 7e2bf3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e2bf9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e2bf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2bfb: jne 0x7e2c00 */
  if (!zf) goto L_7e2c00;
L_7e2bfd: /* 7e2bfd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e2bfe: jmp 0x7e2bc0 */
  goto L_7e2bc0;
L_7e2c00: /* 7e2c00: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e2c03: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x7e2c09u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 7e2c09: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2c0b: jge 0x7e2c2a */
  if ((sf == of)) goto L_7e2c2a;
L_7e2c0d: /* 7e2c0d: mov edx, dword ptr [ebx + edi*4 + 4] */
  edx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2c11: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 7e2c14: add eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e2c17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2c1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2c23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2c24: mov esp, ebp */
  esp = ebp;
/* 7e2c26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2c27: ret 8 */
  esp += 12; SPILL(); return;
L_7e2c2a: /* 7e2c2a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2c2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2c2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2c2f: xor eax, eax */
  eax = 0;
/* 7e2c31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2c38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2c39: mov esp, ebp */
  esp = ebp;
/* 7e2c3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2c3c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2bbd(void) {
  LOAD_REGS();
L_7e2bbd: /* 7e2bbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e2bc0: /* 7e2bc0: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2bc2: jge 0x7e2c00 */
  if ((sf == of)) goto L_7e2c00;
L_7e2bc4: /* 7e2bc4: mov ecx, dword ptr [ebx + edi*4 + 4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2bc8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e2bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2bcc: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e2bd2u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e2bd2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2bd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2bd6: mov ecx, eax */
  ecx = eax;
/* 7e2bd8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e2bdeu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e2bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2be0: je 0x7e2bfd */
  if (zf) goto L_7e2bfd;
L_7e2be2: /* 7e2be2: mov esi, dword ptr [ebx + edi*4 + 4] */
  esi = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2be6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2be8: je 0x7e2bfd */
  if (zf) goto L_7e2bfd;
L_7e2bea: /* 7e2bea: call dword ptr [0xcfa960] */
  esp -= 4; W32(esp, 0x7e2bf0u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e2bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2bf1: mov ecx, esi */
  ecx = esi;
/* 7e2bf3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e2bf9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e2bf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2bfb: jne 0x7e2c00 */
  if (!zf) goto L_7e2c00;
L_7e2bfd: /* 7e2bfd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e2bfe: jmp 0x7e2bc0 */
  goto L_7e2bc0;
L_7e2c00: /* 7e2c00: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e2c03: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x7e2c09u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 7e2c09: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2c0b: jge 0x7e2c2a */
  if ((sf == of)) goto L_7e2c2a;
L_7e2c0d: /* 7e2c0d: mov edx, dword ptr [ebx + edi*4 + 4] */
  edx = R32((uint32_t)(ebx + edi*4 + 0x4u));
/* 7e2c11: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* 7e2c14: add eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e2c17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2c1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2c23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2c24: mov esp, ebp */
  esp = ebp;
/* 7e2c26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2c27: ret 8 */
  esp += 12; SPILL(); return;
L_7e2c2a: /* 7e2c2a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2c2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2c2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2c2f: xor eax, eax */
  eax = 0;
/* 7e2c31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2c38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2c39: mov esp, ebp */
  esp = ebp;
/* 7e2c3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2c3c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2c3f(void) {
  LOAD_REGS();
L_7e2c3f: /* 7e2c3f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e2c42: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e2c47: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e2c4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e2c4b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e2c4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2c53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e2c53(); return;
}

void f_7e2c53(void) {
  LOAD_REGS();
L_7e2c53: /* 7e2c53: push 0xa10560 */
  { uint32_t v = 0xa10560u; esp -= 4; W32(esp, v); }
/* 7e2c58: push 0xadd5b0 */
  { uint32_t v = 0xadd5b0u; esp -= 4; W32(esp, v); }
/* 7e2c5d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e2c63u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e2c63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2c66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2c68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2c6a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2c6fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e2c6f: guest_badaddr(0x7e2c6f); return;
}

void f_7e2cd0(void) {
  LOAD_REGS();
L_7e2cd0: /* 7e2cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2cd1: mov ebp, esp */
  ebp = esp;
/* 7e2cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2cd5: push 0x9d0df0 */
  { uint32_t v = 0x9d0df0u; esp -= 4; W32(esp, v); }
/* 7e2cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e2ce8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e2ceb: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 7e2cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2cf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2cf2: mov ebx, ecx */
  ebx = ecx;
/* 7e2cf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e2cf6: xor esi, esi */
  esi = 0;
/* 7e2cf8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2cfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2cfb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e2cfe: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7e2d01: je 0x7e2ddc */
  if (zf) goto L_7e2ddc;
L_7e2d07: /* 7e2d07: mov ecx, dword ptr [ebx + 0xea0] */
  ecx = R32((uint32_t)(ebx + 0xea0u));
/* 7e2d0d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7e2d10: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7e2d13: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e2d19u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e2d19: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e2d1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2d1e: call 0x6c6a5a */
  esp -= 4; W32(esp, 0x7e2d23u); SPILL(); f_6c6a5a(); if (g_unwind) return; RELOAD();
/* 7e2d23: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7e2d26: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 7e2d2c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e2d2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2d32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e2d34: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e2d37: jnp 0x7e2d88 */
  if (!pf) goto L_7e2d88;
L_7e2d39: /* 7e2d39: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e2d3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e2d40: /* 7e2d40: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2d46: jge 0x7e2d6a */
  if ((sf == of)) goto L_7e2d6a;
L_7e2d48: /* 7e2d48: mov al, byte ptr [esi + ebx + 0xeb0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebx + 0xeb0u))) & 0xffu);
/* 7e2d4f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2d51: je 0x7e2d67 */
  if (zf) goto L_7e2d67;
L_7e2d53: /* 7e2d53: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7e2d59: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e2d5b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e2d5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2d5e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7e2d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2d61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2d62: mov ecx, ebx */
  ecx = ebx;
/* 7e2d64: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7e2d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e2d67: /* 7e2d67: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e2d68: jmp 0x7e2d40 */
  goto L_7e2d40;
L_7e2d6a: /* 7e2d6a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7e2d6d: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 7e2d73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e2d75: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e2d78: jnp 0x7e2d88 */
  if (!pf) goto L_7e2d88;
L_7e2d7a: /* 7e2d7a: fld dword ptr [0xa105c0] */
  { double v = F32((uint32_t)(0xa105c0u)); FPUSH(v); }
/* 7e2d80: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 7e2d83: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7e2d86: jmp 0x7e2d8f */
  goto L_7e2d8f;
L_7e2d88: /* 7e2d88: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_7e2d8f: /* 7e2d8f: xor edi, edi */
  edi = 0;
L_7e2d91: /* 7e2d91: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e2d94: cmp edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2d96: jge 0x7e2dd3 */
  if ((sf == of)) goto L_7e2dd3;
L_7e2d98: /* 7e2d98: mov esi, dword ptr [eax + edi*4 + 4] */
  esi = R32((uint32_t)(eax + edi*4 + 0x4u));
/* 7e2d9c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2d9e: je 0x7e2dd0 */
  if (zf) goto L_7e2dd0;
L_7e2da0: /* 7e2da0: call dword ptr [0xcfa960] */
  esp -= 4; W32(esp, 0x7e2da6u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7e2da6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2da7: mov ecx, esi */
  ecx = esi;
/* 7e2da9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e2dafu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e2daf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2db1: je 0x7e2dd0 */
  if (zf) goto L_7e2dd0;
L_7e2db3: /* 7e2db3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e2db6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7e2db9: mov eax, dword ptr [ebx + 0xea0] */
  eax = R32((uint32_t)(ebx + 0xea0u));
/* 7e2dbf: mov edx, dword ptr [ecx + edi*4 + 4] */
  edx = R32((uint32_t)(ecx + edi*4 + 0x4u));
/* 7e2dc3: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7e2dc6: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* 7e2dc9: fmul dword ptr [eax + ecx] */
  ST0 = ST0 * (F32((uint32_t)(eax + ecx)));
/* 7e2dcc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e2dce: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_7e2dd0: /* 7e2dd0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e2dd1: jmp 0x7e2d91 */
  goto L_7e2d91;
L_7e2dd3: /* 7e2dd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e2dd6: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x7e2ddcu); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
L_7e2ddc: /* 7e2ddc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2ddf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2de0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2de1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2de8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2de9: mov esp, ebp */
  esp = ebp;
/* 7e2deb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2dec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e2def(void) {
  LOAD_REGS();
L_7e2def: /* 7e2def: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e2df2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e2df7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e2dfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2dfb: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e2dfe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2e03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e2e03(); return;
}

void f_7e2e03(void) {
  LOAD_REGS();
L_7e2e03: /* 7e2e03: push 0xa10594 */
  { uint32_t v = 0xa10594u; esp -= 4; W32(esp, v); }
/* 7e2e08: push 0xadd878 */
  { uint32_t v = 0xadd878u; esp -= 4; W32(esp, v); }
/* 7e2e0d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e2e13u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e2e13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2e16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e2e1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2e1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e2e1f: guest_badaddr(0x7e2e1f); return;
}

void f_7e2e80(void) {
  LOAD_REGS();
L_7e2e80: /* 7e2e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e2e81: mov ebp, esp */
  ebp = esp;
/* 7e2e83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e2e85: push 0x9d0e00 */
  { uint32_t v = 0x9d0e00u; esp -= 4; W32(esp, v); }
/* 7e2e8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e2e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e2e91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e2e98: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e2e9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2e9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e2e9d: mov esi, ecx */
  esi = ecx;
/* 7e2e9f: mov eax, dword ptr [esi + 0xea0] */
  eax = R32((uint32_t)(esi + 0xea0u));
/* 7e2ea5: xor ebx, ebx */
  ebx = 0;
/* 7e2ea7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e2eaa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e2ead: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e2eb0: jne 0x7e2eca */
  if (!zf) goto L_7e2eca;
L_7e2eb2: /* 7e2eb2: push 0x1fe */
  { uint32_t v = 0x1feu; esp -= 4; W32(esp, v); }
/* 7e2eb7: push 0xadd880 */
  { uint32_t v = 0xadd880u; esp -= 4; W32(esp, v); }
/* 7e2ebc: push 0xadd88c */
  { uint32_t v = 0xadd88cu; esp -= 4; W32(esp, v); }
/* 7e2ec1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e2ec7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e2ec7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e2eca: /* 7e2eca: xor eax, eax */
  eax = 0;
/* 7e2ecc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e2ed0: /* 7e2ed0: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e2ed5: jge 0x7e2ee1 */
  if ((sf == of)) goto L_7e2ee1;
L_7e2ed7: /* 7e2ed7: mov byte ptr [eax + esi + 0xeb0], bl */
  W8((uint32_t)(eax + esi + 0xeb0u), (ebx & 0xffu));
/* 7e2ede: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e2edf: jmp 0x7e2ed0 */
  goto L_7e2ed0;
L_7e2ee1: /* 7e2ee1: mov eax, dword ptr [esi + 0xea0] */
  eax = R32((uint32_t)(esi + 0xea0u));
/* 7e2ee7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e2eea: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e2ef0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e2ef0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2ef2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e2ef5: je 0x7e2eff */
  if (zf) goto L_7e2eff;
L_7e2ef7: /* 7e2ef7: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7e2efa: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e2efd: jmp 0x7e2f02 */
  goto L_7e2f02;
L_7e2eff: /* 7e2eff: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_7e2f02: /* 7e2f02: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e2f05: call 0x6c3788 */
  esp -= 4; W32(esp, 0x7e2f0au); SPILL(); f_6c3788(); if (g_unwind) return; RELOAD();
/* 7e2f0a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e2f0d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2f0f: je 0x7e2f2e */
  if (zf) goto L_7e2f2e;
L_7e2f11: /* 7e2f11: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2f15: je 0x7e2f26 */
  if (zf) goto L_7e2f26;
L_7e2f17: /* 7e2f17: mov edx, dword ptr [esi + 0xea0] */
  edx = R32((uint32_t)(esi + 0xea0u));
/* 7e2f1d: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7e2f20: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 7e2f23: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
L_7e2f26: /* 7e2f26: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e2f29: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7e2f2c: jmp 0x7e2f02 */
  goto L_7e2f02;
L_7e2f2e: /* 7e2f2e: mov ecx, dword ptr [esi + 0xea0] */
  ecx = R32((uint32_t)(esi + 0xea0u));
/* 7e2f34: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7e2f37: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e2f3du); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e2f3d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2f3f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e2f42: je 0x7e2f4c */
  if (zf) goto L_7e2f4c;
L_7e2f44: /* 7e2f44: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7e2f47: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e2f4a: jmp 0x7e2f4f */
  goto L_7e2f4f;
L_7e2f4c: /* 7e2f4c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_7e2f4f: /* 7e2f4f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e2f52: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7e2f57u); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7e2f57: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e2f5a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e2f5c: je 0x7e2f7b */
  if (zf) goto L_7e2f7b;
L_7e2f5e: /* 7e2f5e: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e2f62: je 0x7e2f73 */
  if (zf) goto L_7e2f73;
L_7e2f64: /* 7e2f64: mov ecx, dword ptr [esi + 0xea0] */
  ecx = R32((uint32_t)(esi + 0xea0u));
/* 7e2f6a: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7e2f6d: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7e2f70: mov dword ptr [edx + ecx], ebx */
  W32((uint32_t)(edx + ecx), ebx);
L_7e2f73: /* 7e2f73: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e2f76: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e2f79: jmp 0x7e2f4f */
  goto L_7e2f4f;
L_7e2f7b: /* 7e2f7b: mov ecx, dword ptr [esi + 0xea0] */
  ecx = R32((uint32_t)(esi + 0xea0u));
/* 7e2f81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2f82: mov dword ptr [esi + 0xea8], ebx */
  W32((uint32_t)(esi + 0xea8u), ebx);
/* 7e2f88: mov dword ptr [esi + 0xeac], ebx */
  W32((uint32_t)(esi + 0xeacu), ebx);
/* 7e2f8e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e2f90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e2f92: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x7e2f98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e2f98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e2f9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e2f9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e2f9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e2fa4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e2fa5: mov esp, ebp */
  esp = ebp;
/* 7e2fa7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e2fa8: ret  */
  esp += 4; SPILL(); return;
}

void f_7e2fa9(void) {
  LOAD_REGS();
L_7e2fa9: /* 7e2fa9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e2fac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e2fb1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e2fb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e2fb5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e2fb8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2fbdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e2fbd(); return;
}

void f_7e2fbd(void) {
  LOAD_REGS();
L_7e2fbd: /* 7e2fbd: push 0xa105c4 */
  { uint32_t v = 0xa105c4u; esp -= 4; W32(esp, v); }
/* 7e2fc2: push 0xadd898 */
  { uint32_t v = 0xadd898u; esp -= 4; W32(esp, v); }
/* 7e2fc7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e2fcdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e2fcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e2fd0: xor ebx, ebx */
  ebx = 0;
/* 7e2fd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2fd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e2fd4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e2fd9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e2fd9: guest_badaddr(0x7e2fd9); return;
}

void f_7e3040(void) {
  LOAD_REGS();
L_7e3040: /* 7e3040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e3041: mov ebp, esp */
  ebp = esp;
/* 7e3043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3045: push 0x9d0e10 */
  { uint32_t v = 0x9d0e10u; esp -= 4; W32(esp, v); }
/* 7e304a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3058: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e305e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3062: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3064: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e3067: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3068: mov esi, ecx */
  esi = ecx;
/* 7e306a: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 7e3070: push 0xadd8e4 */
  { uint32_t v = 0xadd8e4u; esp -= 4; W32(esp, v); }
/* 7e3075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3076: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e307d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7e3083u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7e3083: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3086: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3088: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 7e308e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e308f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e3092: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7e3098u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7e3098: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e309a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e309d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e30a3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e30a3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e30a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e30a7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e30aa: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e30b0u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e30b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e30b2: je 0x7e30dd */
  if (zf) goto L_7e30dd;
L_7e30b4: /* 7e30b4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e30b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e30b8: mov ecx, dword ptr [esi + 0xea4] */
  ecx = R32((uint32_t)(esi + 0xea4u));
/* 7e30be: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e30c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e30c2: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e30c5: call 0x6c9390 */
  esp -= 4; W32(esp, 0x7e30cau); SPILL(); f_6c9390(); if (g_unwind) return; RELOAD();
/* 7e30ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e30cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e30d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e30d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e30d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e30d7: mov esp, ebp */
  esp = ebp;
/* 7e30d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e30da: ret 8 */
  esp += 12; SPILL(); return;
L_7e30dd: /* 7e30dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e30e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e30e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e30e2: xor eax, eax */
  eax = 0;
/* 7e30e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e30eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e30ec: mov esp, ebp */
  esp = ebp;
/* 7e30ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e30ef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e30f2(void) {
  LOAD_REGS();
L_7e30f2: /* 7e30f2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e30f5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e30fa: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e30fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e30fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e3101: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3106u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e3106(); return;
}

void f_7e3106(void) {
  LOAD_REGS();
L_7e3106: /* 7e3106: push 0xa105f4 */
  { uint32_t v = 0xa105f4u; esp -= 4; W32(esp, v); }
/* 7e310b: push 0xadd8f0 */
  { uint32_t v = 0xadd8f0u; esp -= 4; W32(esp, v); }
/* 7e3110: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e3116u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e3116: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e311b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e311d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3122u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e3122: guest_badaddr(0x7e3122); return;
}

void f_7e3170(void) {
  LOAD_REGS();
L_7e3170: /* 7e3170: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 7e3174: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e317au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e317a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7e3190(void) {
  LOAD_REGS();
L_7e3190: /* 7e3190: xor eax, eax */
  eax = 0;
/* 7e3192: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e31b0(void) {
  LOAD_REGS();
L_7e31b0: /* 7e31b0: xor eax, eax */
  eax = 0;
/* 7e31b2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7e31d0(void) {
  LOAD_REGS();
L_7e31d0: /* 7e31d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e31f0(void) {
  LOAD_REGS();
L_7e31f0: /* 7e31f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e3210(void) {
  LOAD_REGS();
L_7e3210: /* 7e3210: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e3230(void) {
  LOAD_REGS();
L_7e3230: /* 7e3230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e3231: mov ebp, esp */
  ebp = esp;
/* 7e3233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3235: push 0x9d0e20 */
  { uint32_t v = 0x9d0e20u; esp -= 4; W32(esp, v); }
/* 7e323a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e324b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e324e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e3251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3252: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e3253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3254: mov esi, ecx */
  esi = ecx;
/* 7e3256: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e3259: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e325c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e325d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e3260: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3267: jne 0x7e327e */
  if (!zf) goto L_7e327e;
L_7e3269: /* 7e3269: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e326c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e326d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e326f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e3272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3273: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e3278: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7e327eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e327e: /* 7e327e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e3280: mov ecx, esi */
  ecx = esi;
/* 7e3282: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7e3285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e3285: mov eax, dword ptr [0xb7e468] */
  eax = R32((uint32_t)(0xb7e468u));
/* 7e328a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e328c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e328d: mov ecx, esi */
  ecx = esi;
/* 7e328f: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e3295u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e3295: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e3297: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e329b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e329c: mov ecx, esi */
  ecx = esi;
/* 7e329e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e32a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e32a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e32a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e32a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e32a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e32ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e32ae: mov esp, ebp */
  esp = ebp;
/* 7e32b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e32b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e32b4(void) {
  LOAD_REGS();
L_7e32b4: /* 7e32b4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e32b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e32bc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e32bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e32c0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e32c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e32c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e32c8(); return;
}

void f_7e32c8(void) {
  LOAD_REGS();
L_7e32c8: /* 7e32c8: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7e32ce: push 0xa10624 */
  { uint32_t v = 0xa10624u; esp -= 4; W32(esp, v); }
/* 7e32d3: push 0xadda30 */
  { uint32_t v = 0xadda30u; esp -= 4; W32(esp, v); }
/* 7e32d8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e32dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e32da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e32dd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e32e0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7e32e3: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7e32e6: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7e32ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e32ef: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e32f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e32f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e32f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e32f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e32f6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e32f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e32fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e32fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e32feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e32fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e32ff: push 0xadda38 */
  { uint32_t v = 0xadda38u; esp -= 4; W32(esp, v); }
/* 7e3304: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e3306u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e3306: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3309: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e330b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e330d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3312u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e3312: guest_badaddr(0x7e3312); return;
}

void f_7e3360(void) {
  LOAD_REGS();
L_7e3360: /* 7e3360: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3362: push 0x9d0e39 */
  { uint32_t v = 0x9d0e39u; esp -= 4; W32(esp, v); }
/* 7e3367: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e336d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e336e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3375: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3379: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e337a: mov edi, ecx */
  edi = ecx;
/* 7e337c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7e3380: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7e3386u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7e3386: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 7e338a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e338d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e3390: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e3393: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e3394: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e3397: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7e339b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e339c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e33a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e33a2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7e33aa: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e33adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e33ad: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7e33b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e33b1: mov eax, edx */
  eax = edx;
/* 7e33b3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7e33b6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e33b9: jne 0x7e33d1 */
  if (!zf) goto L_7e33d1;
L_7e33bb: /* 7e33bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e33be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e33bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e33c1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e33c4: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e33ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e33cb: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7e33d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e33d1: /* 7e33d1: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e33d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e33d6: jne 0x7e33f0 */
  if (!zf) goto L_7e33f0;
L_7e33d8: /* 7e33d8: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7e33dd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e33df: push 0xadda60 */
  { uint32_t v = 0xadda60u; esp -= 4; W32(esp, v); }
/* 7e33e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e33e5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e33ebu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e33eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e33ee: jmp 0x7e3443 */
  goto L_7e3443;
L_7e33f0: /* 7e33f0: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7e33f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e33f5: je 0x7e3416 */
  if (zf) goto L_7e3416;
L_7e33f7: /* 7e33f7: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e33fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e33fb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e33ff: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e3405u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e3405: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e3408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3409: call 0x6c5a60 */
  esp -= 4; W32(esp, 0x7e340eu); SPILL(); f_6c5a60(); if (g_unwind) return; RELOAD();
/* 7e340e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7e3412: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e3414: jmp 0x7e3443 */
  goto L_7e3443;
L_7e3416: /* 7e3416: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 7e3419: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e341c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e341e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3420: je 0x7e3427 */
  if (zf) goto L_7e3427;
L_7e3422: /* 7e3422: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e3425: jmp 0x7e3429 */
  goto L_7e3429;
L_7e3427: /* 7e3427: xor eax, eax */
  eax = 0;
L_7e3429: /* 7e3429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e342a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e342e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e3434u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e3434: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e3437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3438: call 0x6c5a60 */
  esp -= 4; W32(esp, 0x7e343du); SPILL(); f_6c5a60(); if (g_unwind) return; RELOAD();
/* 7e343d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7e3441: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_7e3443: /* 7e3443: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7e3447: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 7e344f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e3455u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e3455: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7e3459: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e345a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e345b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e3462: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3465: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e34c0(void) {
  LOAD_REGS();
L_7e34c0: /* 7e34c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e34c1: mov esi, ecx */
  esi = ecx;
/* 7e34c3: and dword ptr [esi + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 7e34c7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7e34cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e34ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e34cf: push 0xaddb1c */
  { uint32_t v = 0xaddb1cu; esp -= 4; W32(esp, v); }
/* 7e34d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e34d5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e34dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e34db: mov edx, dword ptr [0xb7e524] */
  edx = R32((uint32_t)(0xb7e524u));
/* 7e34e1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7e34e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e34e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e34e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e34ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e34ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e34ed: mov ecx, esi */
  ecx = esi;
/* 7e34ef: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e34f5u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e34f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e34f6: mov ecx, esi */
  ecx = esi;
/* 7e34f8: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7e34fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e34fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e34fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e34fd: ret  */
  esp += 4; SPILL(); return;
}

void f_7e3510(void) {
  LOAD_REGS();
L_7e3510: /* 7e3510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e3511: mov ebp, esp */
  ebp = esp;
/* 7e3513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3515: push 0x9d0e66 */
  { uint32_t v = 0x9d0e66u; esp -= 4; W32(esp, v); }
/* 7e351a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3528: sub esp, 0x2f8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2f8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e352e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3531: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3532: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e3535: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e3538: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e353b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e353c: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7e353f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e3540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3541: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e3544: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e3547: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e354a: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7e354d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e354e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e3553: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3554: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e355b: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x7e355eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e355e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e3561: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7e3564: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3566: jne 0x7e3573 */
  if (!zf) goto L_7e3573;
L_7e3568: /* 7e3568: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e356b: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 7e356e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e3571: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
L_7e3573: /* 7e3573: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7e3576: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7e357c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e357e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e3581: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e3584: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e3587: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e358a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e358d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e3590: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e3593: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* 7e3596: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e3599: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e359a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e359d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e35a0: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e35a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e35a4: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e35aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e35ab: call dword ptr [edx + ebx*4] */
  { uint32_t t = R32((uint32_t)(edx + ebx*4)); esp -= 4; W32(esp, 0x7e35aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e35ae: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7e35b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e35b6: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e35b9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e35bc: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7e35bf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e35c2: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e35c5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e35c8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e35cb: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* 7e35ce: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e35d1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e35d2: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e35d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e35d8: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e35db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e35dc: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e35e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e35e3: call dword ptr [edx + ebx*4] */
  { uint32_t t = R32((uint32_t)(edx + ebx*4)); esp -= 4; W32(esp, 0x7e35e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e35e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e35e9: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7e35ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e35ef: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e35f2: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e35f5: jne 0x7e3610 */
  if (!zf) goto L_7e3610;
L_7e35f7: /* 7e35f7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e35fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e35fb: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e35fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3601: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e3607: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e360a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7e3610u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e3610: /* 7e3610: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7e3613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3614: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e3617: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3618: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e361b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e361c: mov ecx, esi */
  ecx = esi;
/* 7e361e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7e3625: call 0x6c204a */
  esp -= 4; W32(esp, 0x7e362au); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7e362a: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7e3630: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e3633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3634: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e3637: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e363a: mov ecx, esp */
  ecx = esp;
/* 7e363c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e363e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e3641: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e3644: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e3647: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e364a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e364d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3650: mov eax, esp */
  eax = esp;
/* 7e3652: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e3654: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e3657: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e365a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e365d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e365e: lea ebx, [edi + 0xd0] */
  ebx = (uint32_t)(edi + 0xd0u);
/* 7e3664: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3665: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e3668: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3669: lea ecx, [ebp - 0x304] */
  ecx = (uint32_t)(ebp + 0xfffffcfcu);
/* 7e366f: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x7e3674u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 7e3674: mov eax, dword ptr [edi + 0x148] */
  eax = R32((uint32_t)(edi + 0x148u));
/* 7e367a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e367b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e367c: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 7e3682: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e3686: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7e368bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7e368b: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e368e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e3691: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3694: mov ecx, esp */
  ecx = esp;
/* 7e3696: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e3698: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e369b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e369e: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7e36a1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e36a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e36a5: lea ecx, [ebp - 0x304] */
  ecx = (uint32_t)(ebp + 0xfffffcfcu);
/* 7e36ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e36af: call 0x6c6221 */
  esp -= 4; W32(esp, 0x7e36b4u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 7e36b4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e36b7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e36ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e36bc: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7e36bf: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7e36c2: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 7e36c8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e36cb: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 7e36ce: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 7e36d5: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e36d8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e36db: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e36de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e36e1: lea edi, [ebp - 0x64] */
  edi = (uint32_t)(ebp + 0xffffff9cu);
/* 7e36e4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e36e6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7e36e8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e36ea: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7e36ed: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e36ef: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7e36f2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e36f4: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7e36f7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e36fa: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7e36fd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3700: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7e3703: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3706: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7e3709: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e370c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7e370f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3711: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3713: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3715: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3717: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e3719: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e371c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7e371f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3722: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e3725: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3728: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7e372b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e372e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7e3731: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3733: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3735: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3737: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3739: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e373b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e373e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7e3741: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3744: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7e3747: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e374a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7e374d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3750: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7e3753: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3755: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3757: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3759: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e375b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e375d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e375f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e3761: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e3763: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7e3766: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7e3769: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7e376c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e376f: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e3772: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e3774: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e3777: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e377a: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7e377d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e3780: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 7e3786: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e378a: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7e378fu); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 7e378f: lea ecx, [ebp - 0x304] */
  ecx = (uint32_t)(ebp + 0xfffffcfcu);
/* 7e3795: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3799: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7e379eu); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 7e379e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e37a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e37a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e37a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e37aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e37ab: mov esp, ebp */
  esp = ebp;
/* 7e37ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e37ae: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e37b1(void) {
  LOAD_REGS();
L_7e37b1: /* 7e37b1: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e37b4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e37b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e37bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e37bd: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7e37c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e37c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e37c5(); return;
}

void f_7e37c5(void) {
  LOAD_REGS();
L_7e37c5: /* 7e37c5: push 0xa10658 */
  { uint32_t v = 0xa10658u; esp -= 4; W32(esp, v); }
/* 7e37ca: push 0xaddb0c */
  { uint32_t v = 0xaddb0cu; esp -= 4; W32(esp, v); }
/* 7e37cf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e37d5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e37d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e37d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e37da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e37dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e37e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e37e1: guest_badaddr(0x7e37e1); return;
}

void f_7e38b0(void) {
  LOAD_REGS();
L_7e38b0: /* 7e38b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e38b1: mov ebp, esp */
  ebp = esp;
/* 7e38b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e38b5: push 0x9d0e96 */
  { uint32_t v = 0x9d0e96u; esp -= 4; W32(esp, v); }
/* 7e38ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e38c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e38c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e38c8: sub esp, 0x2f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e38ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e38d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e38d2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e38d5: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e38d8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e38db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e38dc: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7e38df: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e38e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e38e1: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e38e4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e38e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e38ea: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7e38ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e38ee: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e38f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e38f4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e38fb: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x7e38feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e38fe: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e3901: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7e3904: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3906: jne 0x7e3913 */
  if (!zf) goto L_7e3913;
L_7e3908: /* 7e3908: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e390b: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 7e390e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e3911: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
L_7e3913: /* 7e3913: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7e3916: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7e391c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e391e: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7e3921: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e3924: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e3927: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e392a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e392d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e3930: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e3933: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* 7e3936: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e3939: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e393a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e393d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3940: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7e3943: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3944: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e394a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e394b: call dword ptr [edx + ebx*4] */
  { uint32_t t = R32((uint32_t)(edx + ebx*4)); esp -= 4; W32(esp, 0x7e394eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e394e: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7e3954: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e3956: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7e3959: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e395c: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7e395f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e3962: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7e3965: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3968: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e396b: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* 7e396e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e3971: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e3972: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e3975: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3978: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e397b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e397c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e3982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3983: call dword ptr [edx + ebx*4] */
  { uint32_t t = R32((uint32_t)(edx + ebx*4)); esp -= 4; W32(esp, 0x7e3986u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e3986: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e3989: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7e398c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e398f: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7e3992: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e3995: jne 0x7e39b0 */
  if (!zf) goto L_7e39b0;
L_7e3997: /* 7e3997: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7e399a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e399b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7e399e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e39a1: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e39a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e39a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e39aa: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7e39b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e39b0: /* 7e39b0: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7e39b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e39b4: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7e39b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e39b8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e39bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e39bc: mov ecx, esi */
  ecx = esi;
/* 7e39be: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7e39c5: call 0x6c204a */
  esp -= 4; W32(esp, 0x7e39cau); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7e39ca: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7e39d0: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e39d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e39d4: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e39d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e39da: mov ecx, esp */
  ecx = esp;
/* 7e39dc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e39de: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e39e1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e39e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e39e7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e39ea: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e39ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e39f0: mov eax, esp */
  eax = esp;
/* 7e39f2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e39f4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e39f7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e39fa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e39fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e39fe: lea ebx, [edi + 0xd0] */
  ebx = (uint32_t)(edi + 0xd0u);
/* 7e3a04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3a05: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e3a08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3a09: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 7e3a0f: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x7e3a14u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 7e3a14: mov eax, dword ptr [edi + 0x148] */
  eax = R32((uint32_t)(edi + 0x148u));
/* 7e3a1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3a1c: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7e3a22: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e3a26: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7e3a2bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7e3a2b: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e3a2e: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7e3a31: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e3a34: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7e3a37: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7e3a3a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e3a3d: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 7e3a43: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e3a47: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7e3a4a: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 7e3a51: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e3a54: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e3a57: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7e3a5a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e3a5d: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 7e3a60: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e3a62: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7e3a64: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e3a66: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7e3a69: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e3a6b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7e3a6e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e3a70: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7e3a73: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3a76: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7e3a79: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3a7c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7e3a7f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3a82: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7e3a85: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e3a88: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7e3a8b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3a8d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3a8f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3a91: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3a93: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e3a95: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3a98: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7e3a9b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3a9e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e3aa1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3aa4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7e3aa7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e3aaa: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7e3aad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3aaf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3ab1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3ab3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e3ab7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3aba: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7e3abd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3ac0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7e3ac3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3ac6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7e3ac9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e3acc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7e3acf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3ad1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e3ad3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3ad5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e3ad7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e3ad9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e3adb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e3add: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e3adf: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7e3ae2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7e3ae5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7e3ae8: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 7e3aed: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7e3aef: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7e3af2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3af5: mov eax, esp */
  eax = esp;
/* 7e3af7: mov ecx, eax */
  ecx = eax;
/* 7e3af9: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 7e3afc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e3afe: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e3b01: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e3b04: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e3b07: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7e3b0a: mov dword ptr [ebp - 0x50], esp */
  W32((uint32_t)(ebp + 0xffffffb0u), esp);
/* 7e3b0d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e3b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3b11: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 7e3b17: call 0x6c7018 */
  esp -= 4; W32(esp, 0x7e3b1cu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 7e3b1c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e3b1f: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e3b22: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e3b25: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e3b28: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e3b2b: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e3b2e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7e3b31: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e3b34: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e3b37: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e3b3a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e3b3d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e3b40: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e3b43: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7e3b46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3b47: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e3b4a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e3b4d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e3b50: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7e3b56u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7e3b56: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e3b59: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e3b5c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e3b5e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e3b61: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e3b64: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e3b67: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7e3b6d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e3b70: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e3b74: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7e3b79u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 7e3b79: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 7e3b7f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3b83: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7e3b88u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 7e3b88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e3b8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e3b8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e3b8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e3b94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e3b95: mov esp, ebp */
  esp = ebp;
/* 7e3b97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e3b98: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e3b9b(void) {
  LOAD_REGS();
L_7e3b9b: /* 7e3b9b: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7e3b9e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e3ba3: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7e3ba6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3ba7: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 7e3baa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3bafu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e3baf(); return;
}

void f_7e3baf(void) {
  LOAD_REGS();
L_7e3baf: /* 7e3baf: push 0xa106a8 */
  { uint32_t v = 0xa106a8u; esp -= 4; W32(esp, v); }
/* 7e3bb4: push 0xaddb14 */
  { uint32_t v = 0xaddb14u; esp -= 4; W32(esp, v); }
/* 7e3bb9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e3bbfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e3bbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3bc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3bc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3bc6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3bcbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e3bcb: guest_badaddr(0x7e3bcb); return;
}

void f_7e3ca0(void) {
  LOAD_REGS();
L_7e3ca0: /* 7e3ca0: ret  */
  esp += 4; SPILL(); return;
}

void f_7e3cc0(void) {
  LOAD_REGS();
L_7e3cc0: /* 7e3cc0: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e3cc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3cc5: je 0x7e3cdb */
  if (zf) goto L_7e3cdb;
L_7e3cc7: /* 7e3cc7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e3cca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3ccc: je 0x7e3cdb */
  if (zf) goto L_7e3cdb;
L_7e3cce: /* 7e3cce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e3cd1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e3cd3: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e3cd6: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 7e3cd9: jmp dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); SPILL(); call_ind(t); return; }
L_7e3cdb: /* 7e3cdb: xor eax, eax */
  eax = 0;
/* 7e3cdd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e3cf0(void) {
  LOAD_REGS();
L_7e3cf0: /* 7e3cf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3cf2: push 0x9d0eb9 */
  { uint32_t v = 0x9d0eb9u; esp -= 4; W32(esp, v); }
/* 7e3cf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3cfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3d05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3d09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3d0a: mov edi, ecx */
  edi = ecx;
/* 7e3d0c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7e3d10: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7e3d16u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7e3d16: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 7e3d1a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e3d1d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e3d20: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e3d23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e3d24: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e3d27: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7e3d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3d2c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e3d31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3d32: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7e3d3a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e3d3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e3d3d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7e3d40: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e3d41: mov eax, edx */
  eax = edx;
/* 7e3d43: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7e3d46: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e3d49: jne 0x7e3d61 */
  if (!zf) goto L_7e3d61;
L_7e3d4b: /* 7e3d4b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e3d4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e3d4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3d51: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e3d54: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e3d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3d5b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7e3d61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e3d61: /* 7e3d61: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e3d64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3d66: je 0x7e3da9 */
  if (zf) goto L_7e3da9;
L_7e3d68: /* 7e3d68: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e3d6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3d6d: je 0x7e3da9 */
  if (zf) goto L_7e3da9;
L_7e3d6f: /* 7e3d6f: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e3d72: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7e3d76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3d77: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e3d79: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e3d7f: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x7e3d85u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 7e3d85: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e3d88: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e3d8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e3d8d: mov dword ptr [edx + 0x124], 0 */
  W32((uint32_t)(edx + 0x124u), 0x0u);
/* 7e3d97: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e3d9a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e3d9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e3d9f: mov dword ptr [edx + 0x134], 0 */
  W32((uint32_t)(edx + 0x134u), 0x0u);
L_7e3da9: /* 7e3da9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7e3dad: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 7e3db5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e3dbbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e3dbb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7e3dbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e3dc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e3dc1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e3dc8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3dcb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e3e10(void) {
  LOAD_REGS();
L_7e3e10: /* 7e3e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e3e11: mov ebp, esp */
  ebp = esp;
/* 7e3e13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3e15: push 0x9d0ee2 */
  { uint32_t v = 0x9d0ee2u; esp -= 4; W32(esp, v); }
/* 7e3e1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3e21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3e28: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3e2b: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7e3e2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e3e30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e3e31: mov edi, ecx */
  edi = ecx;
/* 7e3e33: movzx ecx, word ptr [ebp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* 7e3e37: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e3e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3e3b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e3e3e: push 0xaddbe8 */
  { uint32_t v = 0xaddbe8u; esp -= 4; W32(esp, v); }
/* 7e3e43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3e44: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3e4b: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 7e3e4e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7e3e54u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7e3e54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3e58: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 7e3e5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3e5c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3e5f: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 7e3e62: mov ecx, esp */
  ecx = esp;
/* 7e3e64: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e3e67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e3e68: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e3e6c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e3e71u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e3e71: mov ecx, edi */
  ecx = edi;
/* 7e3e73: call 0x6c2743 */
  esp -= 4; W32(esp, 0x7e3e78u); SPILL(); f_6c2743(); if (g_unwind) return; RELOAD();
/* 7e3e78: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e3e7b: mov esi, eax */
  esi = eax;
/* 7e3e7d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3e81: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e3e87u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e3e87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3e89: je 0x7e3ea3 */
  if (zf) goto L_7e3ea3;
L_7e3e8b: /* 7e3e8b: mov eax, 1 */
  eax = 0x1u;
/* 7e3e90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e3e93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e3e9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e3e9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e3e9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e3e9d: mov esp, ebp */
  esp = ebp;
/* 7e3e9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e3ea0: ret 8 */
  esp += 12; SPILL(); return;
L_7e3ea3: /* 7e3ea3: xor esi, esi */
  esi = 0;
L_7e3ea5: /* 7e3ea5: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e3ea8: jge 0x7e3ece */
  if ((sf == of)) goto L_7e3ece;
L_7e3eaa: /* 7e3eaa: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7e3eac: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7e3eaf: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e3eb2: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3eb4: je 0x7e3ecb */
  if (zf) goto L_7e3ecb;
L_7e3eb6: /* 7e3eb6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3eb8: je 0x7e3ecb */
  if (zf) goto L_7e3ecb;
L_7e3eba: /* 7e3eba: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e3ebd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e3ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3ec0: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 7e3ec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3ec4: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7e3ec7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e3ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3ec9: jne 0x7e3e8b */
  if (!zf) goto L_7e3e8b;
L_7e3ecb: /* 7e3ecb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e3ecc: jmp 0x7e3ea5 */
  goto L_7e3ea5;
L_7e3ece: /* 7e3ece: xor esi, esi */
  esi = 0;
L_7e3ed0: /* 7e3ed0: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7e3ed3: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e3ed6: jge 0x7e3f33 */
  if ((sf == of)) goto L_7e3f33;
L_7e3ed8: /* 7e3ed8: movzx edx, word ptr [ebp + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* 7e3edc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3edd: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7e3ee0: push 0xaddbf0 */
  { uint32_t v = 0xaddbf0u; esp -= 4; W32(esp, v); }
/* 7e3ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3ee6: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7e3eecu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7e3eec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3eef: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 7e3ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3ef3: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e3ef6: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e3ef9: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 7e3efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3efd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3f00: add edx, 0x58 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e3f03: mov ecx, esp */
  ecx = esp;
/* 7e3f05: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e3f08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e3f09: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e3f0d: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e3f12u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e3f12: mov ecx, edi */
  ecx = edi;
/* 7e3f14: call 0x6c2743 */
  esp -= 4; W32(esp, 0x7e3f19u); SPILL(); f_6c2743(); if (g_unwind) return; RELOAD();
/* 7e3f19: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e3f1c: mov ebx, eax */
  ebx = eax;
/* 7e3f1e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e3f22: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e3f28u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e3f28: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e3f2a: jne 0x7e3e8b */
  if (!zf) goto L_7e3e8b;
L_7e3f30: /* 7e3f30: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e3f31: jmp 0x7e3ed0 */
  goto L_7e3ed0;
L_7e3f33: /* 7e3f33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e3f36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e3f37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e3f38: xor eax, eax */
  eax = 0;
/* 7e3f3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e3f41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e3f42: mov esp, ebp */
  esp = ebp;
/* 7e3f44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e3f45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e3f48(void) {
  LOAD_REGS();
L_7e3f48: /* 7e3f48: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e3f4b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e3f50: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e3f53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e3f54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e3f57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3f5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e3f5c(); return;
}

void f_7e3f5c(void) {
  LOAD_REGS();
L_7e3f5c: /* 7e3f5c: push 0xa106f8 */
  { uint32_t v = 0xa106f8u; esp -= 4; W32(esp, v); }
/* 7e3f61: push 0xaddbf8 */
  { uint32_t v = 0xaddbf8u; esp -= 4; W32(esp, v); }
/* 7e3f66: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e3f6cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e3f6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e3f6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3f71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e3f73: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e3f78u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e3f78: guest_badaddr(0x7e3f78); return;
}

void f_7e3fe0(void) {
  LOAD_REGS();
L_7e3fe0: /* 7e3fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e3fe1: mov ebp, esp */
  ebp = esp;
/* 7e3fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e3fe5: push 0x9d0f00 */
  { uint32_t v = 0x9d0f00u; esp -= 4; W32(esp, v); }
/* 7e3fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e3ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e3ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e3ff8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e3ffb: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7e3ffe: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e4001: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4004: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e4007: mov edi, ecx */
  edi = ecx;
/* 7e4009: mov cl, byte ptr [ebp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 7e400c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e400d: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 7e4010: mov byte ptr [ebp + 0xb], cl */
  W8((uint32_t)(ebp + 0xbu), (ecx & 0xffu));
/* 7e4013: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 7e4016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4017: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 7e401a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e401b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e401e: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 7e4021: mov ecx, esp */
  ecx = esp;
/* 7e4023: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7e4026: xor esi, esi */
  esi = 0;
/* 7e4028: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4029: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7e402c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4031u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4031: mov ecx, edi */
  ecx = edi;
/* 7e4033: call 0x6cb168 */
  esp -= 4; W32(esp, 0x7e4038u); SPILL(); f_6cb168(); if (g_unwind) return; RELOAD();
/* 7e4038: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e403a: je 0x7e4054 */
  if (zf) goto L_7e4054;
L_7e403c: /* 7e403c: mov eax, 1 */
  eax = 0x1u;
/* 7e4041: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4044: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e404b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e404c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e404d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e404e: mov esp, ebp */
  esp = ebp;
/* 7e4050: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4051: ret 0xc */
  esp += 16; SPILL(); return;
L_7e4054: /* 7e4054: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4057: jge 0x7e4081 */
  if ((sf == of)) goto L_7e4081;
L_7e4059: /* 7e4059: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e405b: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7e405e: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e4061: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4063: je 0x7e407e */
  if (zf) goto L_7e407e;
L_7e4065: /* 7e4065: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4067: je 0x7e407e */
  if (zf) goto L_7e407e;
L_7e4069: /* 7e4069: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e406c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e406e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e406f: lea edx, [ebp + 0xb] */
  edx = (uint32_t)(ebp + 0xbu);
/* 7e4072: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4073: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* 7e4076: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4077: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7e407au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e407a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e407c: jne 0x7e403c */
  if (!zf) goto L_7e403c;
L_7e407e: /* 7e407e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e407f: jmp 0x7e4054 */
  goto L_7e4054;
L_7e4081: /* 7e4081: xor esi, esi */
  esi = 0;
L_7e4083: /* 7e4083: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e4086: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4089: jge 0x7e40bc */
  if ((sf == of)) goto L_7e40bc;
L_7e408b: /* 7e408b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e408e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e408f: lea edx, [ebp + 0xb] */
  edx = (uint32_t)(ebp + 0xbu);
/* 7e4092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4093: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e4096: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e4099: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 7e409c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e409d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e40a0: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e40a3: mov ecx, esp */
  ecx = esp;
/* 7e40a5: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7e40a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e40a9: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e40aeu); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e40ae: mov ecx, edi */
  ecx = edi;
/* 7e40b0: call 0x6cb168 */
  esp -= 4; W32(esp, 0x7e40b5u); SPILL(); f_6cb168(); if (g_unwind) return; RELOAD();
/* 7e40b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e40b7: jne 0x7e403c */
  if (!zf) goto L_7e403c;
L_7e40b9: /* 7e40b9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e40ba: jmp 0x7e4083 */
  goto L_7e4083;
L_7e40bc: /* 7e40bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e40bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e40c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e40c1: xor eax, eax */
  eax = 0;
/* 7e40c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e40ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e40cb: mov esp, ebp */
  esp = ebp;
/* 7e40cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e40ce: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7e40d1(void) {
  LOAD_REGS();
L_7e40d1: /* 7e40d1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e40d4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e40d9: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e40dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e40dd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e40e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e40e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e40e5(); return;
}

void f_7e40e5(void) {
  LOAD_REGS();
L_7e40e5: /* 7e40e5: push 0xa10760 */
  { uint32_t v = 0xa10760u; esp -= 4; W32(esp, v); }
/* 7e40ea: push 0xaddc00 */
  { uint32_t v = 0xaddc00u; esp -= 4; W32(esp, v); }
/* 7e40ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e40f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e40f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e40f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e40fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e40fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4101u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e4101: guest_badaddr(0x7e4101); return;
}

void f_7e4160(void) {
  LOAD_REGS();
L_7e4160: /* 7e4160: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7e4164: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7e4168: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4169: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e416b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e416c: call 0x6cccd9 */
  esp -= 4; W32(esp, 0x7e4171u); SPILL(); f_6cccd9(); if (g_unwind) return; RELOAD();
/* 7e4171: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7e4190(void) {
  LOAD_REGS();
L_7e4190: /* 7e4190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e4191: mov ebp, esp */
  ebp = esp;
/* 7e4193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e4195: push 0x9d0f10 */
  { uint32_t v = 0x9d0f10u; esp -= 4; W32(esp, v); }
/* 7e419a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e41a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e41a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e41a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e41ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e41ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e41af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e41b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e41b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e41b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e41b5: mov ebx, ecx */
  ebx = ecx;
/* 7e41b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e41ba: lea edi, [ebx + 0x34] */
  edi = (uint32_t)(ebx + 0x34u);
/* 7e41bd: mov ecx, esp */
  ecx = esp;
/* 7e41bf: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e41c2: xor esi, esi */
  esi = 0;
/* 7e41c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e41c5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7e41c8: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e41cdu); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e41cd: mov ecx, ebx */
  ecx = ebx;
/* 7e41cf: call 0x6c13a2 */
  esp -= 4; W32(esp, 0x7e41d4u); SPILL(); f_6c13a2(); if (g_unwind) return; RELOAD();
L_7e41d4: /* 7e41d4: cmp esi, dword ptr [ebx + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e41d7: jge 0x7e41f5 */
  if ((sf == of)) goto L_7e41f5;
L_7e41d9: /* 7e41d9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7e41db: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7e41de: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e41e1: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e41e3: je 0x7e41f2 */
  if (zf) goto L_7e41f2;
L_7e41e5: /* 7e41e5: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e41e7: je 0x7e41f2 */
  if (zf) goto L_7e41f2;
L_7e41e9: /* 7e41e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e41ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e41ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e41ef: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7e41f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e41f2: /* 7e41f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e41f3: jmp 0x7e41d4 */
  goto L_7e41d4;
L_7e41f5: /* 7e41f5: xor esi, esi */
  esi = 0;
L_7e41f7: /* 7e41f7: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 7e41fa: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e41fd: jge 0x7e4256 */
  if ((sf == of)) goto L_7e4256;
L_7e41ff: /* 7e41ff: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e4202: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e4205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4206: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 7e4209: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e420b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e420e: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e4211: mov ecx, esp */
  ecx = esp;
/* 7e4213: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e4216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4217: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e421cu); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e421c: mov ecx, ebx */
  ecx = ebx;
/* 7e421e: call 0x6c13a2 */
  esp -= 4; W32(esp, 0x7e4223u); SPILL(); f_6c13a2(); if (g_unwind) return; RELOAD();
/* 7e4223: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e4224: jmp 0x7e41f7 */
  goto L_7e41f7;
L_7e4256: /* 7e4256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e425a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e425b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4263: mov esp, ebp */
  esp = ebp;
/* 7e4265: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4266: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4226(void) {
  LOAD_REGS();
L_7e4226: /* 7e4226: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e4229: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e422e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e4231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4232: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e4235: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e423au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e423a(); return;
}

void f_7e423a(void) {
  LOAD_REGS();
L_7e423a: /* 7e423a: push 0xa107c8 */
  { uint32_t v = 0xa107c8u; esp -= 4; W32(esp, v); }
/* 7e423f: push 0xaddc08 */
  { uint32_t v = 0xaddc08u; esp -= 4; W32(esp, v); }
/* 7e4244: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e424au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e424a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e424d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e424f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4251: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4256u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e4256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e425a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e425b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4263: mov esp, ebp */
  esp = ebp;
/* 7e4265: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4266: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e42b0(void) {
  LOAD_REGS();
L_7e42b0: /* 7e42b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e42b1: mov ebp, esp */
  ebp = esp;
/* 7e42b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e42b5: push 0x9d0f20 */
  { uint32_t v = 0x9d0f20u; esp -= 4; W32(esp, v); }
/* 7e42ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e42c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e42c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e42c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e42cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e42cc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7e42cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e42d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e42d1: xor esi, esi */
  esi = 0;
/* 7e42d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e42d6: mov edi, ecx */
  edi = ecx;
/* 7e42d8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7e42db: jmp 0x7e42e0 */
  goto L_7e42e0;
L_7e42e0: /* 7e42e0: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e42e3: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e42e6: jge 0x7e430d */
  if ((sf == of)) goto L_7e430d;
L_7e42e8: /* 7e42e8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e42eb: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e42ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e42ef: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 7e42f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e42f5: add edx, 0x58 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e42f8: mov ecx, esp */
  ecx = esp;
/* 7e42fa: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e42fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e42fe: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4303u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4303: mov ecx, edi */
  ecx = edi;
/* 7e4305: call 0x6c3468 */
  esp -= 4; W32(esp, 0x7e430au); SPILL(); f_6c3468(); if (g_unwind) return; RELOAD();
/* 7e430a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e430b: jmp 0x7e42e0 */
  goto L_7e42e0;
L_7e430d: /* 7e430d: xor esi, esi */
  esi = 0;
/* 7e430f: nop  */
L_7e4310: /* 7e4310: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4313: jge 0x7e432f */
  if ((sf == of)) goto L_7e432f;
L_7e4315: /* 7e4315: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7e4318: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7e431b: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e431e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4320: je 0x7e432c */
  if (zf) goto L_7e432c;
L_7e4322: /* 7e4322: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4324: je 0x7e432c */
  if (zf) goto L_7e432c;
L_7e4326: /* 7e4326: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4328: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4329: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7e432cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e432c: /* 7e432c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e432d: jmp 0x7e4310 */
  goto L_7e4310;
L_7e432f: /* 7e432f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4330: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4333: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 7e4336: mov ecx, esp */
  ecx = esp;
/* 7e4338: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e433b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e433c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4341u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4341: mov ecx, edi */
  ecx = edi;
/* 7e4343: call 0x6c3468 */
  esp -= 4; W32(esp, 0x7e4348u); SPILL(); f_6c3468(); if (g_unwind) return; RELOAD();
/* 7e4348: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e434b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e434c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e434d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4354: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4355: mov esp, ebp */
  esp = ebp;
/* 7e4357: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4358: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e42dd(void) {
  LOAD_REGS();
L_7e42dd: /* 7e42dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e42e0: /* 7e42e0: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e42e3: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e42e6: jge 0x7e430d */
  if ((sf == of)) goto L_7e430d;
L_7e42e8: /* 7e42e8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e42eb: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e42ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e42ef: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 7e42f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e42f5: add edx, 0x58 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e42f8: mov ecx, esp */
  ecx = esp;
/* 7e42fa: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e42fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e42fe: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4303u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4303: mov ecx, edi */
  ecx = edi;
/* 7e4305: call 0x6c3468 */
  esp -= 4; W32(esp, 0x7e430au); SPILL(); f_6c3468(); if (g_unwind) return; RELOAD();
/* 7e430a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e430b: jmp 0x7e42e0 */
  goto L_7e42e0;
L_7e430d: /* 7e430d: xor esi, esi */
  esi = 0;
/* 7e430f: nop  */
L_7e4310: /* 7e4310: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4313: jge 0x7e432f */
  if ((sf == of)) goto L_7e432f;
L_7e4315: /* 7e4315: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7e4318: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7e431b: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e431e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4320: je 0x7e432c */
  if (zf) goto L_7e432c;
L_7e4322: /* 7e4322: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4324: je 0x7e432c */
  if (zf) goto L_7e432c;
L_7e4326: /* 7e4326: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4328: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4329: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7e432cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e432c: /* 7e432c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e432d: jmp 0x7e4310 */
  goto L_7e4310;
L_7e432f: /* 7e432f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4330: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4333: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 7e4336: mov ecx, esp */
  ecx = esp;
/* 7e4338: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e433b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e433c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4341u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4341: mov ecx, edi */
  ecx = edi;
/* 7e4343: call 0x6c3468 */
  esp -= 4; W32(esp, 0x7e4348u); SPILL(); f_6c3468(); if (g_unwind) return; RELOAD();
/* 7e4348: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e434b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e434c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e434d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4354: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4355: mov esp, ebp */
  esp = ebp;
/* 7e4357: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4358: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e435b(void) {
  LOAD_REGS();
L_7e435b: /* 7e435b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e435e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4363: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e4366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4367: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e436a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e436fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e436f(); return;
}

void f_7e436f(void) {
  LOAD_REGS();
L_7e436f: /* 7e436f: push 0xa10828 */
  { uint32_t v = 0xa10828u; esp -= 4; W32(esp, v); }
/* 7e4374: push 0xaddc10 */
  { uint32_t v = 0xaddc10u; esp -= 4; W32(esp, v); }
/* 7e4379: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e437fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e437f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4386: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e438bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e438b: guest_badaddr(0x7e438b); return;
}

void f_7e43d0(void) {
  LOAD_REGS();
L_7e43d0: /* 7e43d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e43d1: mov ebp, esp */
  ebp = esp;
/* 7e43d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e43d5: push 0x9d0f30 */
  { uint32_t v = 0x9d0f30u; esp -= 4; W32(esp, v); }
/* 7e43da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e43e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e43e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e43e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e43eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e43ec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7e43ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e43f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e43f1: xor esi, esi */
  esi = 0;
/* 7e43f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e43f6: mov edi, ecx */
  edi = ecx;
/* 7e43f8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7e43fb: jmp 0x7e4400 */
  goto L_7e4400;
L_7e4400: /* 7e4400: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e4403: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4406: jge 0x7e442d */
  if ((sf == of)) goto L_7e442d;
L_7e4408: /* 7e4408: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e440b: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e440e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e440f: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 7e4412: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4415: add edx, 0x58 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e4418: mov ecx, esp */
  ecx = esp;
/* 7e441a: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e441d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e441e: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4423u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4423: mov ecx, edi */
  ecx = edi;
/* 7e4425: call 0x6ca1aa */
  esp -= 4; W32(esp, 0x7e442au); SPILL(); f_6ca1aa(); if (g_unwind) return; RELOAD();
/* 7e442a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e442b: jmp 0x7e4400 */
  goto L_7e4400;
L_7e442d: /* 7e442d: xor esi, esi */
  esi = 0;
/* 7e442f: nop  */
L_7e4430: /* 7e4430: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4433: jge 0x7e444f */
  if ((sf == of)) goto L_7e444f;
L_7e4435: /* 7e4435: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7e4438: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7e443b: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e443e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4440: je 0x7e444c */
  if (zf) goto L_7e444c;
L_7e4442: /* 7e4442: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4444: je 0x7e444c */
  if (zf) goto L_7e444c;
L_7e4446: /* 7e4446: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4448: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4449: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e444cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e444c: /* 7e444c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e444d: jmp 0x7e4430 */
  goto L_7e4430;
L_7e444f: /* 7e444f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4450: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4453: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 7e4456: mov ecx, esp */
  ecx = esp;
/* 7e4458: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e445b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e445c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4461u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4461: mov ecx, edi */
  ecx = edi;
/* 7e4463: call 0x6ca1aa */
  esp -= 4; W32(esp, 0x7e4468u); SPILL(); f_6ca1aa(); if (g_unwind) return; RELOAD();
/* 7e4468: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e446b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e446c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e446d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4474: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4475: mov esp, ebp */
  esp = ebp;
/* 7e4477: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4478: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e43fd(void) {
  LOAD_REGS();
L_7e43fd: /* 7e43fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e4400: /* 7e4400: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7e4403: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4406: jge 0x7e442d */
  if ((sf == of)) goto L_7e442d;
L_7e4408: /* 7e4408: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e440b: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e440e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e440f: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 7e4412: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4415: add edx, 0x58 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e4418: mov ecx, esp */
  ecx = esp;
/* 7e441a: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e441d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e441e: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4423u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4423: mov ecx, edi */
  ecx = edi;
/* 7e4425: call 0x6ca1aa */
  esp -= 4; W32(esp, 0x7e442au); SPILL(); f_6ca1aa(); if (g_unwind) return; RELOAD();
/* 7e442a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e442b: jmp 0x7e4400 */
  goto L_7e4400;
L_7e442d: /* 7e442d: xor esi, esi */
  esi = 0;
/* 7e442f: nop  */
L_7e4430: /* 7e4430: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4433: jge 0x7e444f */
  if ((sf == of)) goto L_7e444f;
L_7e4435: /* 7e4435: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7e4438: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7e443b: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7e443e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4440: je 0x7e444c */
  if (zf) goto L_7e444c;
L_7e4442: /* 7e4442: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4444: je 0x7e444c */
  if (zf) goto L_7e444c;
L_7e4446: /* 7e4446: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4448: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4449: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e444cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e444c: /* 7e444c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e444d: jmp 0x7e4430 */
  goto L_7e4430;
L_7e444f: /* 7e444f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4450: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4453: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 7e4456: mov ecx, esp */
  ecx = esp;
/* 7e4458: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e445b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e445c: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4461u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4461: mov ecx, edi */
  ecx = edi;
/* 7e4463: call 0x6ca1aa */
  esp -= 4; W32(esp, 0x7e4468u); SPILL(); f_6ca1aa(); if (g_unwind) return; RELOAD();
/* 7e4468: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e446b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e446c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e446d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4474: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4475: mov esp, ebp */
  esp = ebp;
/* 7e4477: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4478: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e447b(void) {
  LOAD_REGS();
L_7e447b: /* 7e447b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e447e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4483: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e4486: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4487: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e448a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e448fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e448f(); return;
}

void f_7e448f(void) {
  LOAD_REGS();
L_7e448f: /* 7e448f: push 0xa10890 */
  { uint32_t v = 0xa10890u; esp -= 4; W32(esp, v); }
/* 7e4494: push 0xaddc18 */
  { uint32_t v = 0xaddc18u; esp -= 4; W32(esp, v); }
/* 7e4499: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e449fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e449f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e44a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e44a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e44a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e44abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e44ab: guest_badaddr(0x7e44ab); return;
}

void f_7e44f0(void) {
  LOAD_REGS();
L_7e44f0: /* 7e44f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e44f1: mov ebp, esp */
  ebp = esp;
/* 7e44f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e44f5: push 0x9d0f40 */
  { uint32_t v = 0x9d0f40u; esp -= 4; W32(esp, v); }
/* 7e44fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e4500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4501: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e4508: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e450b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e450c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e450d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e450e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e4511: mov esi, ecx */
  esi = ecx;
/* 7e4513: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4516: lea eax, [esi + 0x34] */
  eax = (uint32_t)(esi + 0x34u);
/* 7e4519: mov ecx, esp */
  ecx = esp;
/* 7e451b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e451e: xor edi, edi */
  edi = 0;
/* 7e4520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4521: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e4524: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4529u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4529: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7e452c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e452f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4531: mov ecx, esi */
  ecx = esi;
/* 7e4533: call 0x6c4656 */
  esp -= 4; W32(esp, 0x7e4538u); SPILL(); f_6c4656(); if (g_unwind) return; RELOAD();
L_7e4538: /* 7e4538: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7e453b: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e453e: jge 0x7e4568 */
  if ((sf == of)) goto L_7e4568;
L_7e4540: /* 7e4540: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7e4543: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 7e4546: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e4548: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e454b: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e454e: mov ecx, esp */
  ecx = esp;
/* 7e4550: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e4553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4554: call 0x6c407f */
  esp -= 4; W32(esp, 0x7e4559u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7e4559: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e455c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e455d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e455e: mov ecx, esi */
  ecx = esi;
/* 7e4560: call 0x6c4656 */
  esp -= 4; W32(esp, 0x7e4565u); SPILL(); f_6c4656(); if (g_unwind) return; RELOAD();
/* 7e4565: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e4566: jmp 0x7e4538 */
  goto L_7e4538;
L_7e4568: /* 7e4568: xor edi, edi */
  edi = 0;
/* 7e456a: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 7e456c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e4570: /* 7e4570: cmp edi, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4573: jge 0x7e45d4 */
  if ((sf == of)) goto L_7e45d4;
L_7e4575: /* 7e4575: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 7e4578: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7e457b: test byte ptr [eax + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e457e: je 0x7e45a1 */
  if (zf) goto L_7e45a1;
L_7e4580: /* 7e4580: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e4583: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e4586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4587: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e458a: mov ecx, esp */
  ecx = esp;
/* 7e458c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e458f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4590: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e4596u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e4596: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 7e4599: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7e459c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e459e: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e45a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e45a1: /* 7e45a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e45a2: jmp 0x7e4570 */
  goto L_7e4570;
L_7e45d4: /* 7e45d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e45d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e45d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e45d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e45e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e45e1: mov esp, ebp */
  esp = ebp;
/* 7e45e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e45e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e45a4(void) {
  LOAD_REGS();
L_7e45a4: /* 7e45a4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e45a7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e45ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e45af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e45b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e45b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e45b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e45b8(); return;
}

void f_7e45b8(void) {
  LOAD_REGS();
L_7e45b8: /* 7e45b8: push 0xa10900 */
  { uint32_t v = 0xa10900u; esp -= 4; W32(esp, v); }
/* 7e45bd: push 0xaddc20 */
  { uint32_t v = 0xaddc20u; esp -= 4; W32(esp, v); }
/* 7e45c2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e45c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e45c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e45cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e45cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e45cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e45d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e45d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e45d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e45d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e45d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e45e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e45e1: mov esp, ebp */
  esp = ebp;
/* 7e45e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e45e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e4630(void) {
  LOAD_REGS();
L_7e4630: /* 7e4630: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 7e4635: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7e4639: jb 0x7e4641 */
  if (cf) goto L_7e4641;
L_7e463b: /* 7e463b: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7e463f: jbe 0x7e4659 */
  if ((cf | zf)) goto L_7e4659;
L_7e4641: /* 7e4641: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7e4645: jb 0x7e464d */
  if (cf) goto L_7e464d;
L_7e4647: /* 7e4647: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7e464b: jbe 0x7e4659 */
  if ((cf | zf)) goto L_7e4659;
L_7e464d: /* 7e464d: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7e4651: jb 0x7e465f */
  if (cf) goto L_7e465f;
L_7e4653: /* 7e4653: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7e4657: ja 0x7e465f */
  if ((!cf && !zf)) goto L_7e465f;
L_7e4659: /* 7e4659: mov eax, 1 */
  eax = 0x1u;
/* 7e465e: ret  */
  esp += 4; SPILL(); return;
L_7e465f: /* 7e465f: xor eax, eax */
  eax = 0;
/* 7e4661: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4680(void) {
  LOAD_REGS();
L_7e4680: /* 7e4680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e4681: mov ebp, esp */
  ebp = esp;
/* 7e4683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e4685: push 0x9d0f50 */
  { uint32_t v = 0x9d0f50u; esp -= 4; W32(esp, v); }
/* 7e468a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e4690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e4698: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e469b: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e46a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e46a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e46a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e46a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e46a6: mov esi, ecx */
  esi = ecx;
/* 7e46a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e46a9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e46ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e46b3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e46b9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e46b9: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e46bc: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7e46bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e46c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e46c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e46c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e46c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e46c7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7e46ca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e46cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e46cf: mov eax, esp */
  eax = esp;
/* 7e46d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e46d3: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e46d6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e46d9: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7e46dc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e46df: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e46e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e46e5: mov eax, esp */
  eax = esp;
/* 7e46e7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e46e9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e46ec: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e46ef: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7e46f2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e46f5: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e46fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e46fb: mov ecx, esi */
  ecx = esi;
/* 7e46fd: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x7e4703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4703: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4705: jne 0x7e4725 */
  if (!zf) goto L_7e4725;
L_7e4707: /* 7e4707: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e470a: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e4710u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e4710: xor eax, eax */
  eax = 0;
/* 7e4712: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4715: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e471c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e471d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e471e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e471f: mov esp, ebp */
  esp = ebp;
/* 7e4721: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4722: ret 0x24 */
  esp += 40; SPILL(); return;
L_7e4725: /* 7e4725: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e4728: mov esi, eax */
  esi = eax;
/* 7e472a: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e472f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e4731: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e4734: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e473au); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e473a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e473d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e473e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e473f: mov eax, 1 */
  eax = 0x1u;
/* 7e4744: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e474b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e474c: mov esp, ebp */
  esp = ebp;
/* 7e474e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e474f: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_7e4752(void) {
  LOAD_REGS();
L_7e4752: /* 7e4752: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e4755: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e475a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e475d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e475e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e4761: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4766u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4766(); return;
}

void f_7e4766(void) {
  LOAD_REGS();
L_7e4766: /* 7e4766: push 0xa10968 */
  { uint32_t v = 0xa10968u; esp -= 4; W32(esp, v); }
/* 7e476b: push 0xade410 */
  { uint32_t v = 0xade410u; esp -= 4; W32(esp, v); }
/* 7e4770: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4776u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4776: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e477b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e477d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4782u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e4782: guest_badaddr(0x7e4782); return;
}

void f_7e47e0(void) {
  LOAD_REGS();
L_7e47e0: /* 7e47e0: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4800(void) {
  LOAD_REGS();
L_7e4800: /* 7e4800: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4820(void) {
  LOAD_REGS();
L_7e4820: /* 7e4820: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4840(void) {
  LOAD_REGS();
L_7e4840: /* 7e4840: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4860(void) {
  LOAD_REGS();
L_7e4860: /* 7e4860: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4880(void) {
  LOAD_REGS();
L_7e4880: /* 7e4880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4881: mov esi, ecx */
  esi = ecx;
/* 7e4883: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7e4889u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7e4889: mov eax, esi */
  eax = esi;
/* 7e488b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e488c: ret  */
  esp += 4; SPILL(); return;
}

void f_7e48a0(void) {
  LOAD_REGS();
L_7e48a0: /* 7e48a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e48a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e48a6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7e48a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e48ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e48c0(void) {
  LOAD_REGS();
L_7e48c0: /* 7e48c0: mov eax, 1 */
  eax = 0x1u;
/* 7e48c5: ret  */
  esp += 4; SPILL(); return;
}

void f_7e48e0(void) {
  LOAD_REGS();
L_7e48e0: /* 7e48e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e48e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7e48e5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7e48e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e48e9: mov ecx, esi */
  ecx = esi;
/* 7e48eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7e48f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7e48f1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7e48f4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e48f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e48f7: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4910(void) {
  LOAD_REGS();
L_7e4910: /* 7e4910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7e4914: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e4919: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4930(void) {
  LOAD_REGS();
L_7e4930: /* 7e4930: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7e4934: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7e4938: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 7e493b: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e493e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e4940: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e4943: jp 0x7e494b */
  if (pf) goto L_7e494b;
L_7e4945: /* 7e4945: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 7e494a: ret  */
  esp += 4; SPILL(); return;
L_7e494b: /* 7e494b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 7e494e: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e4951: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e4953: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4956: jne 0x7e495e */
  if (!zf) goto L_7e495e;
L_7e4958: /* 7e4958: mov eax, 1 */
  eax = 0x1u;
/* 7e495d: ret  */
  esp += 4; SPILL(); return;
L_7e495e: /* 7e495e: xor eax, eax */
  eax = 0;
/* 7e4960: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4980(void) {
  LOAD_REGS();
L_7e4980: /* 7e4980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e4981: mov ebp, esp */
  ebp = esp;
/* 7e4983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e4985: push 0x9d0f60 */
  { uint32_t v = 0x9d0f60u; esp -= 4; W32(esp, v); }
/* 7e498a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e4990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e4998: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e499b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e499c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e499d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e499e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e49a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49af: mov esi, ecx */
  esi = ecx;
/* 7e49b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e49b3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e49b6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e49bd: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7e49c4: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e49cb: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e49d2: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e49d8u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e49d8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e49da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e49dd: mov ecx, esp */
  ecx = esp;
/* 7e49df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e49e1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e49e4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e49e7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e49ea: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e49ed: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e49f0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e49f3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e49f6: mov ecx, esp */
  ecx = esp;
/* 7e49f8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e49fa: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e49fd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e4a00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4a01: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e4a04: mov ecx, esp */
  ecx = esp;
/* 7e4a06: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e4a09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4a0b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e4a11u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e4a11: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e4a13: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 7e4a18: mov ecx, esi */
  ecx = esi;
/* 7e4a1a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7e4a20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4a20: mov esi, eax */
  esi = eax;
/* 7e4a22: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4a24: jne 0x7e4a3e */
  if (!zf) goto L_7e4a3e;
L_7e4a26: /* 7e4a26: push 0xba */
  { uint32_t v = 0xbau; esp -= 4; W32(esp, v); }
/* 7e4a2b: push 0xadde50 */
  { uint32_t v = 0xadde50u; esp -= 4; W32(esp, v); }
/* 7e4a30: push 0xadde60 */
  { uint32_t v = 0xadde60u; esp -= 4; W32(esp, v); }
/* 7e4a35: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e4a3bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e4a3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4a3e: /* 7e4a3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4a42: mov eax, esi */
  eax = esi;
/* 7e4a44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4a45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4a4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4a4d: mov esp, ebp */
  esp = ebp;
/* 7e4a4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4a50: ret  */
  esp += 4; SPILL(); return;
}

void f_7e4a51(void) {
  LOAD_REGS();
L_7e4a51: /* 7e4a51: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e4a54: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4a59: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e4a5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4a5d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e4a60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4a65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4a65(); return;
}

void f_7e4a65(void) {
  LOAD_REGS();
L_7e4a65: /* 7e4a65: push 0xa109b8 */
  { uint32_t v = 0xa109b8u; esp -= 4; W32(esp, v); }
/* 7e4a6a: push 0xadde68 */
  { uint32_t v = 0xadde68u; esp -= 4; W32(esp, v); }
/* 7e4a6f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4a75u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4a75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4a7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4a7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4a81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e4a81: guest_badaddr(0x7e4a81); return;
}

void f_7e4ae0(void) {
  LOAD_REGS();
L_7e4ae0: /* 7e4ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e4ae1: mov ebp, esp */
  ebp = esp;
/* 7e4ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e4ae5: push 0x9d0f70 */
  { uint32_t v = 0x9d0f70u; esp -= 4; W32(esp, v); }
/* 7e4aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e4af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e4af8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4afb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7e4b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4b01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4b02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4b03: mov ebx, ecx */
  ebx = ecx;
/* 7e4b05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e4b07: xor edi, edi */
  edi = 0;
/* 7e4b09: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b0b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e4b0e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e4b11: jne 0x7e4b22 */
  if (!zf) goto L_7e4b22;
L_7e4b13: /* 7e4b13: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b16: jne 0x7e4b22 */
  if (!zf) goto L_7e4b22;
L_7e4b18: /* 7e4b18: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e4b1a: mov ecx, ebx */
  ecx = ebx;
/* 7e4b1c: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7e4b22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e4b22: /* 7e4b22: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 7e4b28: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b2a: je 0x7e4d02 */
  if (zf) goto L_7e4d02;
L_7e4b30: /* 7e4b30: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b33: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e4b37: jne 0x7e4b59 */
  if (!zf) goto L_7e4b59;
L_7e4b39: /* 7e4b39: xor ecx, ecx */
  ecx = 0;
/* 7e4b3b: jmp 0x7e4b40 */
  goto L_7e4b40;
L_7e4b40: /* 7e4b40: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b42: je 0x7e4b4d */
  if (zf) goto L_7e4b4d;
L_7e4b44: /* 7e4b44: mov eax, dword ptr [eax + 0x15c] */
  eax = R32((uint32_t)(eax + 0x15cu));
/* 7e4b4a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e4b4b: jmp 0x7e4b40 */
  goto L_7e4b40;
L_7e4b4d: /* 7e4b4d: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4b53: jl 0x7e4d02 */
  if ((sf != of)) goto L_7e4d02;
L_7e4b59: /* 7e4b59: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e4b5c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_7e4b60: /* 7e4b60: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4b63: jge 0x7e4bb5 */
  if ((sf == of)) goto L_7e4bb5;
L_7e4b65: /* 7e4b65: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7e4b68: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7e4b6b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4b6d: je 0x7e4b82 */
  if (zf) goto L_7e4b82;
L_7e4b6f: /* 7e4b6f: mov ecx, esi */
  ecx = esi;
/* 7e4b71: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e4b77u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e4b77: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e4b79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4b7a: mov ecx, eax */
  ecx = eax;
/* 7e4b7c: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7e4b82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e4b82: /* 7e4b82: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e4b83: jmp 0x7e4b60 */
  goto L_7e4b60;
L_7e4bb5: /* 7e4bb5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 7e4bbb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4bbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e4bc5: jne 0x7e4d02 */
  if (!zf) goto L_7e4d02;
L_7e4bcb: /* 7e4bcb: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7e4bd1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4bd5: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4be0: /* 7e4be0: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 7e4be6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4be8: je 0x7e4d02 */
  if (zf) goto L_7e4d02;
L_7e4bee: /* 7e4bee: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e4bf4: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4bf7: jne 0x7e4c0d */
  if (!zf) goto L_7e4c0d;
L_7e4bf9: /* 7e4bf9: push 0x1e3 */
  { uint32_t v = 0x1e3u; esp -= 4; W32(esp, v); }
/* 7e4bfe: push 0xaddf7c */
  { uint32_t v = 0xaddf7cu; esp -= 4; W32(esp, v); }
/* 7e4c03: push 0xaddf8c */
  { uint32_t v = 0xaddf8cu; esp -= 4; W32(esp, v); }
/* 7e4c08: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c0d: /* 7e4c0d: mov esi, dword ptr [ebx + 0xf0] */
  esi = R32((uint32_t)(ebx + 0xf0u));
/* 7e4c13: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 7e4c19: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7e4c1f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e4c25: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c28: jne 0x7e4c3e */
  if (!zf) goto L_7e4c3e;
L_7e4c2a: /* 7e4c2a: push 0x1e6 */
  { uint32_t v = 0x1e6u; esp -= 4; W32(esp, v); }
/* 7e4c2f: push 0xaddfa4 */
  { uint32_t v = 0xaddfa4u; esp -= 4; W32(esp, v); }
/* 7e4c34: push 0xaddfb4 */
  { uint32_t v = 0xaddfb4u; esp -= 4; W32(esp, v); }
/* 7e4c39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c3e: /* 7e4c3e: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7e4c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c46: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e4c4a: je 0x7e4c5d */
  if (zf) goto L_7e4c5d;
L_7e4c4c: /* 7e4c4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4c4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c53: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7e4c5d: /* 7e4c5d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e4c5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c61: mov ecx, esi */
  ecx = esi;
/* 7e4c63: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4c6a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c6d: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4d02: /* 7e4d02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4d0f: mov esp, ebp */
  esp = ebp;
/* 7e4d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4b3d(void) {
  LOAD_REGS();
L_7e4b3d: /* 7e4b3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e4b40: /* 7e4b40: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4b42: je 0x7e4b4d */
  if (zf) goto L_7e4b4d;
L_7e4b44: /* 7e4b44: mov eax, dword ptr [eax + 0x15c] */
  eax = R32((uint32_t)(eax + 0x15cu));
/* 7e4b4a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e4b4b: jmp 0x7e4b40 */
  goto L_7e4b40;
L_7e4b4d: /* 7e4b4d: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4b53: jl 0x7e4d02 */
  if ((sf != of)) goto L_7e4d02;
L_7e4b59: /* 7e4b59: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e4b5c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_7e4b60: /* 7e4b60: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e4b63: jge 0x7e4bb5 */
  if ((sf == of)) goto L_7e4bb5;
L_7e4b65: /* 7e4b65: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7e4b68: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7e4b6b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4b6d: je 0x7e4b82 */
  if (zf) goto L_7e4b82;
L_7e4b6f: /* 7e4b6f: mov ecx, esi */
  ecx = esi;
/* 7e4b71: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7e4b77u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7e4b77: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e4b79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4b7a: mov ecx, eax */
  ecx = eax;
/* 7e4b7c: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7e4b82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e4b82: /* 7e4b82: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e4b83: jmp 0x7e4b60 */
  goto L_7e4b60;
L_7e4bb5: /* 7e4bb5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 7e4bbb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4bbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e4bc5: jne 0x7e4d02 */
  if (!zf) goto L_7e4d02;
L_7e4bcb: /* 7e4bcb: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7e4bd1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4bd5: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4be0: /* 7e4be0: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 7e4be6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4be8: je 0x7e4d02 */
  if (zf) goto L_7e4d02;
L_7e4bee: /* 7e4bee: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e4bf4: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4bf7: jne 0x7e4c0d */
  if (!zf) goto L_7e4c0d;
L_7e4bf9: /* 7e4bf9: push 0x1e3 */
  { uint32_t v = 0x1e3u; esp -= 4; W32(esp, v); }
/* 7e4bfe: push 0xaddf7c */
  { uint32_t v = 0xaddf7cu; esp -= 4; W32(esp, v); }
/* 7e4c03: push 0xaddf8c */
  { uint32_t v = 0xaddf8cu; esp -= 4; W32(esp, v); }
/* 7e4c08: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c0d: /* 7e4c0d: mov esi, dword ptr [ebx + 0xf0] */
  esi = R32((uint32_t)(ebx + 0xf0u));
/* 7e4c13: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 7e4c19: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7e4c1f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e4c25: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c28: jne 0x7e4c3e */
  if (!zf) goto L_7e4c3e;
L_7e4c2a: /* 7e4c2a: push 0x1e6 */
  { uint32_t v = 0x1e6u; esp -= 4; W32(esp, v); }
/* 7e4c2f: push 0xaddfa4 */
  { uint32_t v = 0xaddfa4u; esp -= 4; W32(esp, v); }
/* 7e4c34: push 0xaddfb4 */
  { uint32_t v = 0xaddfb4u; esp -= 4; W32(esp, v); }
/* 7e4c39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c3e: /* 7e4c3e: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7e4c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c46: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e4c4a: je 0x7e4c5d */
  if (zf) goto L_7e4c5d;
L_7e4c4c: /* 7e4c4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4c4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c53: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7e4c5d: /* 7e4c5d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e4c5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c61: mov ecx, esi */
  ecx = esi;
/* 7e4c63: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4c6a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c6d: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4d02: /* 7e4d02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4d0f: mov esp, ebp */
  esp = ebp;
/* 7e4d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4b85(void) {
  LOAD_REGS();
L_7e4b85: /* 7e4b85: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e4b88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4b8d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e4b90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4b91: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e4b94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4b99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4b99(); return;
}

void f_7e4b99(void) {
  LOAD_REGS();
L_7e4b99: /* 7e4b99: push 0xa10a84 */
  { uint32_t v = 0xa10a84u; esp -= 4; W32(esp, v); }
/* 7e4b9e: push 0xaddf74 */
  { uint32_t v = 0xaddf74u; esp -= 4; W32(esp, v); }
/* 7e4ba3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4ba9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4ba9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4bac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4bae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4bb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4bb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e4bb5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 7e4bbb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e4bbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e4bc5: jne 0x7e4d02 */
  if (!zf) goto L_7e4d02;
L_7e4bcb: /* 7e4bcb: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7e4bd1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4bd5: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4be0: /* 7e4be0: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 7e4be6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4be8: je 0x7e4d02 */
  if (zf) goto L_7e4d02;
L_7e4bee: /* 7e4bee: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e4bf4: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4bf7: jne 0x7e4c0d */
  if (!zf) goto L_7e4c0d;
L_7e4bf9: /* 7e4bf9: push 0x1e3 */
  { uint32_t v = 0x1e3u; esp -= 4; W32(esp, v); }
/* 7e4bfe: push 0xaddf7c */
  { uint32_t v = 0xaddf7cu; esp -= 4; W32(esp, v); }
/* 7e4c03: push 0xaddf8c */
  { uint32_t v = 0xaddf8cu; esp -= 4; W32(esp, v); }
/* 7e4c08: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c0d: /* 7e4c0d: mov esi, dword ptr [ebx + 0xf0] */
  esi = R32((uint32_t)(ebx + 0xf0u));
/* 7e4c13: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 7e4c19: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7e4c1f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e4c25: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c28: jne 0x7e4c3e */
  if (!zf) goto L_7e4c3e;
L_7e4c2a: /* 7e4c2a: push 0x1e6 */
  { uint32_t v = 0x1e6u; esp -= 4; W32(esp, v); }
/* 7e4c2f: push 0xaddfa4 */
  { uint32_t v = 0xaddfa4u; esp -= 4; W32(esp, v); }
/* 7e4c34: push 0xaddfb4 */
  { uint32_t v = 0xaddfb4u; esp -= 4; W32(esp, v); }
/* 7e4c39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c3e: /* 7e4c3e: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7e4c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c46: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e4c4a: je 0x7e4c5d */
  if (zf) goto L_7e4c5d;
L_7e4c4c: /* 7e4c4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4c4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c53: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7e4c5d: /* 7e4c5d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e4c5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c61: mov ecx, esi */
  ecx = esi;
/* 7e4c63: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4c6a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c6d: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4d02: /* 7e4d02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4d0f: mov esp, ebp */
  esp = ebp;
/* 7e4d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4bd7(void) {
  LOAD_REGS();
L_7e4bd7: /* 7e4bd7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7e4bde: mov edi, edi */
  edi = edi;
L_7e4be0: /* 7e4be0: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 7e4be6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4be8: je 0x7e4d02 */
  if (zf) goto L_7e4d02;
L_7e4bee: /* 7e4bee: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e4bf4: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4bf7: jne 0x7e4c0d */
  if (!zf) goto L_7e4c0d;
L_7e4bf9: /* 7e4bf9: push 0x1e3 */
  { uint32_t v = 0x1e3u; esp -= 4; W32(esp, v); }
/* 7e4bfe: push 0xaddf7c */
  { uint32_t v = 0xaddf7cu; esp -= 4; W32(esp, v); }
/* 7e4c03: push 0xaddf8c */
  { uint32_t v = 0xaddf8cu; esp -= 4; W32(esp, v); }
/* 7e4c08: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c0d: /* 7e4c0d: mov esi, dword ptr [ebx + 0xf0] */
  esi = R32((uint32_t)(ebx + 0xf0u));
/* 7e4c13: mov eax, dword ptr [esi + 0x15c] */
  eax = R32((uint32_t)(esi + 0x15cu));
/* 7e4c19: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7e4c1f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e4c25: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c28: jne 0x7e4c3e */
  if (!zf) goto L_7e4c3e;
L_7e4c2a: /* 7e4c2a: push 0x1e6 */
  { uint32_t v = 0x1e6u; esp -= 4; W32(esp, v); }
/* 7e4c2f: push 0xaddfa4 */
  { uint32_t v = 0xaddfa4u; esp -= 4; W32(esp, v); }
/* 7e4c34: push 0xaddfb4 */
  { uint32_t v = 0xaddfb4u; esp -= 4; W32(esp, v); }
/* 7e4c39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7e4c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e4c3e: /* 7e4c3e: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7e4c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4c46: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e4c4a: je 0x7e4c5d */
  if (zf) goto L_7e4c5d;
L_7e4c4c: /* 7e4c4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e4c4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c53: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7e4c5d: /* 7e4c5d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e4c5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e4c61: mov ecx, esi */
  ecx = esi;
/* 7e4c63: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e4c6a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e4c6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4c6d: jmp 0x7e4be0 */
  goto L_7e4be0;
L_7e4d02: /* 7e4d02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4d0f: mov esp, ebp */
  esp = ebp;
/* 7e4d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4c72(void) {
  LOAD_REGS();
L_7e4c72: /* 7e4c72: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e4c75: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4c7a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e4c7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4c7e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e4c81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4c86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4c86(); return;
}

void f_7e4c86(void) {
  LOAD_REGS();
L_7e4c86: /* 7e4c86: push 0xa10a58 */
  { uint32_t v = 0xa10a58u; esp -= 4; W32(esp, v); }
/* 7e4c8b: push 0xaddfcc */
  { uint32_t v = 0xaddfccu; esp -= 4; W32(esp, v); }
/* 7e4c90: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4c96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4c96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4c99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4c9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4c9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4ca2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4ca2(); return;
}

void f_7e4ca2(void) {
  LOAD_REGS();
L_7e4ca2: /* 7e4ca2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e4ca5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4caa: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e4cad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4cae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7e4cb1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4cb6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4cb6(); return;
}

void f_7e4cb6(void) {
  LOAD_REGS();
L_7e4cb6: /* 7e4cb6: push 0xa10a24 */
  { uint32_t v = 0xa10a24u; esp -= 4; W32(esp, v); }
/* 7e4cbb: push 0xaddfd4 */
  { uint32_t v = 0xaddfd4u; esp -= 4; W32(esp, v); }
/* 7e4cc0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4cc6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4cc6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4ccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4ccd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4cd2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4cd2(); return;
}

void f_7e4cd2(void) {
  LOAD_REGS();
L_7e4cd2: /* 7e4cd2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e4cd5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4cda: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7e4cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4cde: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e4ce1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4ce6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4ce6(); return;
}

void f_7e4ce6(void) {
  LOAD_REGS();
L_7e4ce6: /* 7e4ce6: push 0xa109e8 */
  { uint32_t v = 0xa109e8u; esp -= 4; W32(esp, v); }
/* 7e4ceb: push 0xaddfdc */
  { uint32_t v = 0xaddfdcu; esp -= 4; W32(esp, v); }
/* 7e4cf0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4cf6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4cf6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4cf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4cfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4cfd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4d02u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e4d02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4d0f: mov esp, ebp */
  esp = ebp;
/* 7e4d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4db0(void) {
  LOAD_REGS();
L_7e4db0: /* 7e4db0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4db1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4db2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4db4: mov esi, ecx */
  esi = ecx;
/* 7e4db6: mov ecx, esp */
  ecx = esp;
/* 7e4db8: push 0x13b */
  { uint32_t v = 0x13bu; esp -= 4; W32(esp, v); }
/* 7e4dbd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e4dc3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e4dc3: mov ecx, esi */
  ecx = esi;
/* 7e4dc5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e4dcbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e4dcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4dcd: je 0x7e4df7 */
  if (zf) goto L_7e4df7;
L_7e4dcf: /* 7e4dcf: mov edx, dword ptr [0xb7e2bc] */
  edx = R32((uint32_t)(0xb7e2bcu));
/* 7e4dd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7e4dd9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7e4ddb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4ddd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7e4de1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4de4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e4de5: mov ecx, esi */
  ecx = esi;
/* 7e4de7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7e4deb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e4df1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e4df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4df2: mov ecx, esi */
  ecx = esi;
/* 7e4df4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7e4df7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e4df7: /* 7e4df7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4df8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4df9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7e4dfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4e20(void) {
  LOAD_REGS();
L_7e4e20: /* 7e4e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4e21: mov esi, ecx */
  esi = ecx;
/* 7e4e23: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7e4e29: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4e2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4e2c: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7e4e30: je 0x7e4e3c */
  if (zf) goto L_7e4e3c;
L_7e4e32: /* 7e4e32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4e33: call 0x6c8d23 */
  esp -= 4; W32(esp, 0x7e4e38u); SPILL(); f_6c8d23(); if (g_unwind) return; RELOAD();
/* 7e4e38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4e3a: jne 0x7e4e44 */
  if (!zf) goto L_7e4e44;
L_7e4e3c: /* 7e4e3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4e3d: mov ecx, esi */
  ecx = esi;
/* 7e4e3f: call 0x6c32f1 */
  esp -= 4; W32(esp, 0x7e4e44u); SPILL(); f_6c32f1(); if (g_unwind) return; RELOAD();
L_7e4e44: /* 7e4e44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4e45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4e46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e4e60(void) {
  LOAD_REGS();
L_7e4e60: /* 7e4e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e4e61: mov ebp, esp */
  ebp = esp;
/* 7e4e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e4e65: push 0x9d0f80 */
  { uint32_t v = 0x9d0f80u; esp -= 4; W32(esp, v); }
/* 7e4e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e4e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e4e78: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4e7b: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e4e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e4e81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e4e82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e4e83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e4e86: mov esi, ecx */
  esi = ecx;
/* 7e4e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4e89: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e4e8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e4e93: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e4e99u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e4e99: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 7e4e9c: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e4e9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4ea1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4ea4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e4ea7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4ea9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e4eac: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e4eae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4eb1: mov ecx, esp */
  ecx = esp;
/* 7e4eb3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e4eb5: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 7e4eb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e4ebb: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e4ebe: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e4ec1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e4ec4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e4ec7: mov ecx, esp */
  ecx = esp;
/* 7e4ec9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e4ecb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e4ece: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e4ed1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e4ed4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e4ed7: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e4edd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e4ede: mov ecx, esi */
  ecx = esi;
/* 7e4ee0: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x7e4ee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e4ee6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4ee8: jne 0x7e4f0b */
  if (!zf) goto L_7e4f0b;
L_7e4eea: /* 7e4eea: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e4eed: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e4ef3u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e4ef3: mov eax, 1 */
  eax = 0x1u;
/* 7e4ef8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4efb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4f02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4f03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4f04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4f05: mov esp, ebp */
  esp = ebp;
/* 7e4f07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4f08: ret 0x28 */
  esp += 44; SPILL(); return;
L_7e4f0b: /* 7e4f0b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e4f0e: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e4f13: mov esi, eax */
  esi = eax;
/* 7e4f15: mov edi, edx */
  edi = edx;
/* 7e4f17: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e4f19: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e4f1b: jmp 0x7e4f20 */
  goto L_7e4f20;
L_7e4f20: /* 7e4f20: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4f22: je 0x7e4f92 */
  if (zf) goto L_7e4f92;
L_7e4f24: /* 7e4f24: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 7e4f27: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e4f2a: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7e4f2d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 7e4f30: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7e4f33: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 7e4f36: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7e4f39: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 7e4f3c: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 7e4f3f: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 7e4f42: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 7e4f45: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7e4f48: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 7e4f4b: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7e4f4e: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 7e4f51: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7e4f54: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7e4f57: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e4f5a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e4f5d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7e4f63u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7e4f63: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e4f66: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 7e4f69: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7e4f6fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7e4f6f: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 7e4f72: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 7e4f75: fcomp dword ptr [ebp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x28u)));
  FPOP();
/* 7e4f78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e4f7a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e4f7d: jp 0x7e4f8b */
  if (pf) goto L_7e4f8b;
L_7e4f7f: /* 7e4f7f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e4f82: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e4f87: mov esi, ebx */
  esi = ebx;
/* 7e4f89: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7e4f8b: /* 7e4f8b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 7e4f8d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e4f90: jmp 0x7e4f20 */
  goto L_7e4f20;
L_7e4f92: /* 7e4f92: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e4f95: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e4f9bu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e4f9b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4f9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4f9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4fa0: xor eax, eax */
  eax = 0;
/* 7e4fa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4fa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4faa: mov esp, ebp */
  esp = ebp;
/* 7e4fac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4fad: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_7e4f1d(void) {
  LOAD_REGS();
L_7e4f1d: /* 7e4f1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e4f20: /* 7e4f20: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e4f22: je 0x7e4f92 */
  if (zf) goto L_7e4f92;
L_7e4f24: /* 7e4f24: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 7e4f27: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e4f2a: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7e4f2d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 7e4f30: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7e4f33: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 7e4f36: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7e4f39: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 7e4f3c: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 7e4f3f: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 7e4f42: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 7e4f45: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7e4f48: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 7e4f4b: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7e4f4e: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 7e4f51: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7e4f54: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7e4f57: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e4f5a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e4f5d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7e4f63u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7e4f63: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e4f66: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 7e4f69: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7e4f6fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7e4f6f: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 7e4f72: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 7e4f75: fcomp dword ptr [ebp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x28u)));
  FPOP();
/* 7e4f78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e4f7a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e4f7d: jp 0x7e4f8b */
  if (pf) goto L_7e4f8b;
L_7e4f7f: /* 7e4f7f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e4f82: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e4f87: mov esi, ebx */
  esi = ebx;
/* 7e4f89: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7e4f8b: /* 7e4f8b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 7e4f8d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e4f90: jmp 0x7e4f20 */
  goto L_7e4f20;
L_7e4f92: /* 7e4f92: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e4f95: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e4f9bu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e4f9b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e4f9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e4f9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e4fa0: xor eax, eax */
  eax = 0;
/* 7e4fa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e4fa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e4faa: mov esp, ebp */
  esp = ebp;
/* 7e4fac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e4fad: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_7e4fb0(void) {
  LOAD_REGS();
L_7e4fb0: /* 7e4fb0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e4fb3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e4fb8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e4fbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e4fbc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e4fbf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4fc4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e4fc4(); return;
}

void f_7e4fc4(void) {
  LOAD_REGS();
L_7e4fc4: /* 7e4fc4: push 0xa10aa0 */
  { uint32_t v = 0xa10aa0u; esp -= 4; W32(esp, v); }
/* 7e4fc9: push 0xade408 */
  { uint32_t v = 0xade408u; esp -= 4; W32(esp, v); }
/* 7e4fce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e4fd4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e4fd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e4fd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4fd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e4fdb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e4fe0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e4fe0: guest_badaddr(0x7e4fe0); return;
}

void f_7e5060(void) {
  LOAD_REGS();
L_7e5060: /* 7e5060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e5061: mov ebp, esp */
  ebp = esp;
/* 7e5063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e5065: push 0x9d0f90 */
  { uint32_t v = 0x9d0f90u; esp -= 4; W32(esp, v); }
/* 7e506a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e5070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e5078: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e507b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e507c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e507d: mov esi, ecx */
  esi = ecx;
/* 7e507f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e5085: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5088: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e5089: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e508c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5093: jne 0x7e5155 */
  if (!zf) goto L_7e5155;
L_7e5099: /* 7e5099: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e509c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e509e: je 0x7e50be */
  if (zf) goto L_7e50be;
L_7e50a0: /* 7e50a0: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7e50a6: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 7e50ac: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e50ae: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7e50b1: mov byte ptr [ebp - 0x1c], 0 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e50b5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e50b8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e50bb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_7e50be: /* 7e50be: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7e50c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e50c7: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7e50cd: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e50cf: mov edx, esp */
  edx = esp;
/* 7e50d1: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e50d3: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e50d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e50d9: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e50dc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e50df: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7e50e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e50e6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e50e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e50ea: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7e50f0: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7e50f5u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7e50f5: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 7e50fb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e50fe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5100: lea edi, [esi + 0xc0] */
  edi = (uint32_t)(esi + 0xc0u);
/* 7e5106: je 0x7e5141 */
  if (zf) goto L_7e5141;
L_7e5108: /* 7e5108: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7e510b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e510d: jne 0x7e5123 */
  if (!zf) goto L_7e5123;
L_7e510f: /* 7e510f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5110: call 0x6c6523 */
  esp -= 4; W32(esp, 0x7e5115u); SPILL(); f_6c6523(); if (g_unwind) return; RELOAD();
/* 7e5115: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e5118: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5119: mov ecx, esi */
  ecx = esi;
/* 7e511b: call 0x6c7cf7 */
  esp -= 4; W32(esp, 0x7e5120u); SPILL(); f_6c7cf7(); if (g_unwind) return; RELOAD();
/* 7e5120: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_7e5123: /* 7e5123: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5125: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e5128: mov ecx, edi */
  ecx = edi;
/* 7e512a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e512c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e512f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e5132: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e5135: jne 0x7e514f */
  if (!zf) goto L_7e514f;
L_7e5137: /* 7e5137: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7e5139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e513a: call 0x6c86f2 */
  esp -= 4; W32(esp, 0x7e513fu); SPILL(); f_6c86f2(); if (g_unwind) return; RELOAD();
/* 7e513f: jmp 0x7e514f */
  goto L_7e514f;
L_7e5141: /* 7e5141: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e5144: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e5147: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7e5149: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 7e514c: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_7e514f: /* 7e514f: mov dword ptr [esi + 0x16c], esi */
  W32((uint32_t)(esi + 0x16cu), esi);
L_7e5155: /* 7e5155: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5158: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5159: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e515a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5161: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5162: mov esp, ebp */
  esp = ebp;
/* 7e5164: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5165: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e5168(void) {
  LOAD_REGS();
L_7e5168: /* 7e5168: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e516b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e5170: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e5173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5174: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e5177: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e517cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e517c(); return;
}

void f_7e517c(void) {
  LOAD_REGS();
L_7e517c: /* 7e517c: push 0xa10adc */
  { uint32_t v = 0xa10adcu; esp -= 4; W32(esp, v); }
/* 7e5181: push 0xade458 */
  { uint32_t v = 0xade458u; esp -= 4; W32(esp, v); }
/* 7e5186: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e518cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e518c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e518f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5193: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5198u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e5198: guest_badaddr(0x7e5198); return;
}

void f_7e51f0(void) {
  LOAD_REGS();
L_7e51f0: /* 7e51f0: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e51f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e51f9: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e51fc: jne 0x7e521e */
  if (!zf) goto L_7e521e;
L_7e51fe: /* 7e51fe: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7e5204: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7e5207: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e520d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e520f: mov byte ptr [esp + 8], 0 */
  W8((uint32_t)(esp + 0x8u), 0x0u);
/* 7e5214: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7e5218: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e521b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_7e521e: /* 7e521e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5221: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e5240(void) {
  LOAD_REGS();
L_7e5240: /* 7e5240: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7e5245: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e5247: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5249: je 0x7e526e */
  if (zf) goto L_7e526e;
L_7e524b: /* 7e524b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e524d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e524e: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e5252: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7e5257: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7e525c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e525e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5260: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5262: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5263: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5264: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 7e5267: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5268: mov ecx, eax */
  ecx = eax;
/* 7e526a: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7e526du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e526d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7e526e: /* 7e526e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e5290(void) {
  LOAD_REGS();
L_7e5290: /* 7e5290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5291: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e5295: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5297: je 0x7e52ae */
  if (zf) goto L_7e52ae;
L_7e5299: /* 7e5299: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7e529e: mov ecx, esi */
  ecx = esi;
/* 7e52a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e52a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e52a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e52a8: je 0x7e52ae */
  if (zf) goto L_7e52ae;
L_7e52aa: /* 7e52aa: mov eax, esi */
  eax = esi;
/* 7e52ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e52ad: ret  */
  esp += 4; SPILL(); return;
L_7e52ae: /* 7e52ae: xor eax, eax */
  eax = 0;
/* 7e52b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e52b1: ret  */
  esp += 4; SPILL(); return;
}

void f_7e52d0(void) {
  LOAD_REGS();
L_7e52d0: /* 7e52d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e52d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e52d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e52d7: je 0x7e52ee */
  if (zf) goto L_7e52ee;
L_7e52d9: /* 7e52d9: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 7e52de: mov ecx, esi */
  ecx = esi;
/* 7e52e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e52e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e52e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e52e8: je 0x7e52ee */
  if (zf) goto L_7e52ee;
L_7e52ea: /* 7e52ea: mov eax, esi */
  eax = esi;
/* 7e52ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e52ed: ret  */
  esp += 4; SPILL(); return;
L_7e52ee: /* 7e52ee: xor eax, eax */
  eax = 0;
/* 7e52f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e52f1: ret  */
  esp += 4; SPILL(); return;
}

void f_7e5310(void) {
  LOAD_REGS();
L_7e5310: /* 7e5310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5311: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7e5315: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5317: je 0x7e532e */
  if (zf) goto L_7e532e;
L_7e5319: /* 7e5319: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7e531e: mov ecx, esi */
  ecx = esi;
/* 7e5320: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e5326u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e5326: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5328: je 0x7e532e */
  if (zf) goto L_7e532e;
L_7e532a: /* 7e532a: mov eax, esi */
  eax = esi;
/* 7e532c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e532d: ret  */
  esp += 4; SPILL(); return;
L_7e532e: /* 7e532e: xor eax, eax */
  eax = 0;
/* 7e5330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5331: ret  */
  esp += 4; SPILL(); return;
}

void f_7e5350(void) {
  LOAD_REGS();
L_7e5350: /* 7e5350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e5351: mov ebp, esp */
  ebp = esp;
/* 7e5353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e5355: push 0x9d0fa0 */
  { uint32_t v = 0x9d0fa0u; esp -= 4; W32(esp, v); }
/* 7e535a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e5360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e5368: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e536b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e536c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7e536f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e5373: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e5376: mov edi, ecx */
  edi = ecx;
/* 7e5378: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e537f: jne 0x7e539e */
  if (!zf) goto L_7e539e;
L_7e5381: /* 7e5381: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7e5386: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e5388: push 0xaddc48 */
  { uint32_t v = 0xaddc48u; esp -= 4; W32(esp, v); }
/* 7e538d: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7e5392: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5393: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7e5399u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7e5399: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e539c: jmp 0x7e53f9 */
  goto L_7e53f9;
L_7e539e: /* 7e539e: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e53a5: mov ecx, ebx */
  ecx = ebx;
/* 7e53a7: je 0x7e53c5 */
  if (zf) goto L_7e53c5;
L_7e53a9: /* 7e53a9: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e53afu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e53af: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e53b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e53b6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e53b8: push 0xaddcb0 */
  { uint32_t v = 0xaddcb0u; esp -= 4; W32(esp, v); }
/* 7e53bd: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7e53c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e53c3: jmp 0x7e53f0 */
  goto L_7e53f0;
L_7e53c5: /* 7e53c5: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7e53ca: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7e53d0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7e53d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e53d2: jne 0x7e540e */
  if (!zf) goto L_7e540e;
L_7e53d4: /* 7e53d4: mov ecx, ebx */
  ecx = ebx;
/* 7e53d6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e53dcu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e53dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e53dd: push 0xaddd10 */
  { uint32_t v = 0xaddd10u; esp -= 4; W32(esp, v); }
L_7e53e2: /* 7e53e2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7e53e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e53ea: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7e53ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_7e53f0: /* 7e53f0: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7e53f6u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7e53f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e53f9: /* 7e53f9: xor eax, eax */
  eax = 0;
/* 7e53fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e53fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5405: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5406: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5407: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5408: mov esp, ebp */
  esp = ebp;
/* 7e540a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e540b: ret 0x34 */
  esp += 56; SPILL(); return;
L_7e540e: /* 7e540e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7e5413: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5416: jne 0x7e5492 */
  if (!zf) goto L_7e5492;
L_7e5418: /* 7e5418: mov ecx, ebx */
  ecx = ebx;
/* 7e541a: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7e5420u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7e5420: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5427: jne 0x7e543c */
  if (!zf) goto L_7e543c;
L_7e5429: /* 7e5429: mov ecx, ebx */
  ecx = ebx;
/* 7e542b: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7e5431u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7e5431: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5437: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e543a: je 0x7e544c */
  if (zf) goto L_7e544c;
L_7e543c: /* 7e543c: mov ecx, ebx */
  ecx = ebx;
/* 7e543e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e5444u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e5444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5445: push 0xaddd78 */
  { uint32_t v = 0xaddd78u; esp -= 4; W32(esp, v); }
/* 7e544a: jmp 0x7e53e2 */
  goto L_7e53e2;
L_7e544c: /* 7e544c: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7e5451: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5454: jne 0x7e5492 */
  if (!zf) goto L_7e5492;
L_7e5456: /* 7e5456: mov ecx, ebx */
  ecx = ebx;
/* 7e5458: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7e545eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7e545e: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5464: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5467: je 0x7e5492 */
  if (zf) goto L_7e5492;
L_7e5469: /* 7e5469: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7e546c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e546e: mov cl, byte ptr [eax + 0x448] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x448u))) & 0xffu);
/* 7e5474: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5476: je 0x7e53f9 */
  if (zf) goto L_7e53f9;
L_7e5478: /* 7e5478: test byte ptr [eax + 0x44c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e547f: jne 0x7e53f9 */
  if (!zf) goto L_7e53f9;
L_7e5485: /* 7e5485: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e548c: je 0x7e53f9 */
  if (zf) goto L_7e53f9;
L_7e5492: /* 7e5492: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 7e5495: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5497: jne 0x7e54bc */
  if (!zf) goto L_7e54bc;
L_7e5499: /* 7e5499: mov ecx, ebx */
  ecx = ebx;
/* 7e549b: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7e54a1u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7e54a1: mov esi, eax */
  esi = eax;
/* 7e54a3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e54a5: jne 0x7e54bc */
  if (!zf) goto L_7e54bc;
L_7e54a7: /* 7e54a7: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* 7e54a9: push 0xadddf0 */
  { uint32_t v = 0xadddf0u; esp -= 4; W32(esp, v); }
/* 7e54ae: push 0xadde00 */
  { uint32_t v = 0xadde00u; esp -= 4; W32(esp, v); }
/* 7e54b3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e54b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e54b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e54bc: /* 7e54bc: test byte ptr [esi + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e54c3: jne 0x7e54df */
  if (!zf) goto L_7e54df;
L_7e54c5: /* 7e54c5: test dword ptr [esi + 0x84], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e54cf: je 0x7e551c */
  if (zf) goto L_7e551c;
L_7e54d1: /* 7e54d1: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7e54d4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e54d6: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e54dd: je 0x7e551c */
  if (zf) goto L_7e551c;
L_7e54df: /* 7e54df: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 7e54e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e54e4: jne 0x7e551c */
  if (!zf) goto L_7e551c;
L_7e54e6: /* 7e54e6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7e54e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e54ea: mov ecx, esi */
  ecx = esi;
/* 7e54ec: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x7e54f1u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 7e54f1: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e54f3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e54f5: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7e54f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e54f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e54fc: mov ecx, esp */
  ecx = esp;
/* 7e54fe: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e5500: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7e5503: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e5506: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e5509: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e550c: mov ecx, edi */
  ecx = edi;
/* 7e550e: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0x7e5514u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5516: je 0x7e53f9 */
  if (zf) goto L_7e53f9;
L_7e551c: /* 7e551c: lea ebx, [edi + 0x2c] */
  ebx = (uint32_t)(edi + 0x2cu);
/* 7e551f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5521: mov ecx, ebx */
  ecx = ebx;
/* 7e5523: call 0x6c1938 */
  esp -= 4; W32(esp, 0x7e5528u); SPILL(); f_6c1938(); if (g_unwind) return; RELOAD();
/* 7e5528: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7e552a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7e552d: mov ecx, edi */
  ecx = edi;
/* 7e552f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e5532: mov dword ptr [ebp + 0x28], edx */
  W32((uint32_t)(ebp + 0x28u), edx);
/* 7e5535: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7e553bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7e553b: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7e5541: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5543: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e5546: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5548: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5549: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e554c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e554d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e554f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5551: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5552: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7e5558u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7e5558: mov esi, eax */
  esi = eax;
/* 7e555a: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e555d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5560: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5562: mov ecx, esi */
  ecx = esi;
/* 7e5564: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e5566: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7e556cu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7e556c: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 7e556f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5570: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5573: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e5579u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e5579: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e557b: mov dword ptr [esi + 0x100], edx */
  W32((uint32_t)(esi + 0x100u), edx);
/* 7e5581: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e5583: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e5585: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7e5588: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 7e558e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e5590: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e5593: mov byte ptr [ebp - 0x20], 0 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e5597: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e559a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e559d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7e559f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e55a1: xor edx, edx */
  edx = 0;
/* 7e55a3: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* 7e55a9: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 7e55af: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7e55b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e55b7: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 7e55bd: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e55c0: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* 7e55c6: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7e55c9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7e55cb: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e55d1: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7e55d3: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e55d5: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 7e55db: je 0x7e55f2 */
  if (zf) goto L_7e55f2;
L_7e55dd: /* 7e55dd: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 7e55df: push 0xadde10 */
  { uint32_t v = 0xadde10u; esp -= 4; W32(esp, v); }
/* 7e55e4: push 0xadde20 */
  { uint32_t v = 0xadde20u; esp -= 4; W32(esp, v); }
/* 7e55e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e55efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e55ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e55f2: /* 7e55f2: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e55f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e55f7: je 0x7e5611 */
  if (zf) goto L_7e5611;
L_7e55f9: /* 7e55f9: mov cl, byte ptr [esi + 0x90] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7e55ff: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7e5605: mov byte ptr [esi + 0x91], cl */
  W8((uint32_t)(esi + 0x91u), (ecx & 0xffu));
/* 7e560b: mov byte ptr [esi + 0x90], al */
  W8((uint32_t)(esi + 0x90u), (eax & 0xffu));
L_7e5611: /* 7e5611: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 7e5617: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5619: je 0x7e5625 */
  if (zf) goto L_7e5625;
L_7e561b: /* 7e561b: mov dword ptr [esi + 0x280], 0 */
  W32((uint32_t)(esi + 0x280u), 0x0u);
L_7e5625: /* 7e5625: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e5628: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7e562e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e5630: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7e5633: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e5636: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e5639: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e563c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e563f: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e5642: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7e5648: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e564a: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7e564d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e5650: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e5653: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e565a: je 0x7e566c */
  if (zf) goto L_7e566c;
L_7e565c: /* 7e565c: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 7e5662: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5664: je 0x7e566c */
  if (zf) goto L_7e566c;
L_7e5666: /* 7e5666: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5669: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e566cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e566c: /* 7e566c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e566e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e5670: mov ecx, dword ptr [eax + 0x16c] */
  ecx = R32((uint32_t)(eax + 0x16cu));
/* 7e5676: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 7e5679: mov dword ptr [esi + 0x16c], ecx */
  W32((uint32_t)(esi + 0x16cu), ecx);
/* 7e567f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5680: mov ecx, esi */
  ecx = esi;
/* 7e5682: call 0x6c1de3 */
  esp -= 4; W32(esp, 0x7e5687u); SPILL(); f_6c1de3(); if (g_unwind) return; RELOAD();
/* 7e5687: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 7e568a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e568b: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 7e5691: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x7e5696u); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 7e5696: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e5698: mov ecx, esi */
  ecx = esi;
/* 7e569a: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7e569du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e569d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e569f: mov ecx, esi */
  ecx = esi;
/* 7e56a1: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7e56a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e56a7: mov ecx, esi */
  ecx = esi;
/* 7e56a9: call 0x6c4cff */
  esp -= 4; W32(esp, 0x7e56aeu); SPILL(); f_6c4cff(); if (g_unwind) return; RELOAD();
/* 7e56ae: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7e56b4: mov ebx, 0x200 */
  ebx = 0x200u;
/* 7e56b9: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e56bb: jne 0x7e53f9 */
  if (!zf) goto L_7e53f9;
L_7e56c1: /* 7e56c1: mov ecx, esi */
  ecx = esi;
/* 7e56c3: call 0x6c5051 */
  esp -= 4; W32(esp, 0x7e56c8u); SPILL(); f_6c5051(); if (g_unwind) return; RELOAD();
/* 7e56c8: test dword ptr [esi + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e56ce: jne 0x7e53f9 */
  if (!zf) goto L_7e53f9;
L_7e56d4: /* 7e56d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e56d7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e56d9: xor eax, eax */
  eax = 0;
/* 7e56db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e56dd: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e56e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e56e2: mov ecx, esi */
  ecx = esi;
/* 7e56e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e56e5: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e56ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e56eb: mov ecx, esi */
  ecx = esi;
/* 7e56ed: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e56f2u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7e56f2: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 7e56f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e56f7: jne 0x7e5790 */
  if (!zf) goto L_7e5790;
L_7e56fd: /* 7e56fd: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5704: je 0x7e5716 */
  if (zf) goto L_7e5716;
L_7e5706: /* 7e5706: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 7e570c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e570e: je 0x7e5716 */
  if (zf) goto L_7e5716;
L_7e5710: /* 7e5710: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5712: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5713: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e5716u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5716: /* 7e5716: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 7e571c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e571e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5720: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e5723: mov ecx, esp */
  ecx = esp;
/* 7e5725: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e5727: mov edx, dword ptr [esi + 0x180] */
  edx = R32((uint32_t)(esi + 0x180u));
/* 7e572d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e5730: mov edx, dword ptr [esi + 0x184] */
  edx = R32((uint32_t)(esi + 0x184u));
/* 7e5736: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e5739: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 7e573f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e5742: mov ecx, esp */
  ecx = esp;
/* 7e5744: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e5746: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7e574c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e574f: mov edx, dword ptr [esi + 0x178] */
  edx = R32((uint32_t)(esi + 0x178u));
/* 7e5755: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e5758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5759: mov ecx, edi */
  ecx = edi;
/* 7e575b: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x7e5761u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5763: je 0x7e5777 */
  if (zf) goto L_7e5777;
L_7e5765: /* 7e5765: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e5767: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5769: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e576a: mov ecx, edi */
  ecx = edi;
/* 7e576c: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x7e5772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5772: jmp 0x7e53f9 */
  goto L_7e53f9;
L_7e5777: /* 7e5777: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e577e: je 0x7e5790 */
  if (zf) goto L_7e5790;
L_7e5780: /* 7e5780: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 7e5786: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5788: je 0x7e5790 */
  if (zf) goto L_7e5790;
L_7e578a: /* 7e578a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e578c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e578d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e5790u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5790: /* 7e5790: mov ecx, esi */
  ecx = esi;
/* 7e5792: call 0x6c74eb */
  esp -= 4; W32(esp, 0x7e5797u); SPILL(); f_6c74eb(); if (g_unwind) return; RELOAD();
/* 7e5797: test dword ptr [esi + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e579d: jne 0x7e53f9 */
  if (!zf) goto L_7e53f9;
L_7e57a3: /* 7e57a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e57a5: mov ecx, esi */
  ecx = esi;
/* 7e57a7: call dword ptr [eax + 0x110] */
  { uint32_t t = R32((uint32_t)(eax + 0x110u)); esp -= 4; W32(esp, 0x7e57adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e57ad: mov ecx, esi */
  ecx = esi;
/* 7e57af: call 0x6ca6fa */
  esp -= 4; W32(esp, 0x7e57b4u); SPILL(); f_6ca6fa(); if (g_unwind) return; RELOAD();
/* 7e57b4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e57ba: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e57bd: jne 0x7e57ea */
  if (!zf) goto L_7e57ea;
L_7e57bf: /* 7e57bf: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7e57c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e57c4: jne 0x7e57ea */
  if (!zf) goto L_7e57ea;
L_7e57c6: /* 7e57c6: test byte ptr [esi + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e57cd: je 0x7e57ea */
  if (zf) goto L_7e57ea;
L_7e57cf: /* 7e57cf: test byte ptr [esi + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e57d6: je 0x7e57ea */
  if (zf) goto L_7e57ea;
L_7e57d8: /* 7e57d8: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7e57db: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e57dd: je 0x7e57e3 */
  if (zf) goto L_7e57e3;
L_7e57df: /* 7e57df: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e57e1: jne 0x7e57ea */
  if (!zf) goto L_7e57ea;
L_7e57e3: /* 7e57e3: mov ecx, esi */
  ecx = esi;
/* 7e57e5: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7e57eau); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7e57ea: /* 7e57ea: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 7e57f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e57f2: je 0x7e581c */
  if (zf) goto L_7e581c;
L_7e57f4: /* 7e57f4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7e57f6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7e57f8: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7e57fd: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7e5803u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7e5803: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5805: je 0x7e5814 */
  if (zf) goto L_7e5814;
L_7e5807: /* 7e5807: mov ecx, dword ptr [edi + 0xf4] */
  ecx = R32((uint32_t)(edi + 0xf4u));
/* 7e580d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e580f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e5812: jmp 0x7e5816 */
  goto L_7e5816;
L_7e5814: /* 7e5814: xor eax, eax */
  eax = 0;
L_7e5816: /* 7e5816: mov dword ptr [edi + 0xf4], eax */
  W32((uint32_t)(edi + 0xf4u), eax);
L_7e581c: /* 7e581c: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e581f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5821: jne 0x7e582a */
  if (!zf) goto L_7e582a;
L_7e5823: /* 7e5823: mov ecx, esi */
  ecx = esi;
/* 7e5825: call 0x6c1b63 */
  esp -= 4; W32(esp, 0x7e582au); SPILL(); f_6c1b63(); if (g_unwind) return; RELOAD();
L_7e582a: /* 7e582a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e582d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e582e: mov eax, esi */
  eax = esi;
/* 7e5830: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5831: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5838: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5839: mov esp, ebp */
  esp = ebp;
/* 7e583b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e583c: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7e583f(void) {
  LOAD_REGS();
L_7e583f: /* 7e583f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e5842: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e5847: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e584a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e584b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7e584e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5853u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e5853(); return;
}

void f_7e5853(void) {
  LOAD_REGS();
L_7e5853: /* 7e5853: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7e5859: push 0xa10b18 */
  { uint32_t v = 0xa10b18u; esp -= 4; W32(esp, v); }
/* 7e585e: push 0xadde3c */
  { uint32_t v = 0xadde3cu; esp -= 4; W32(esp, v); }
/* 7e5863: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e5865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5865: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5868: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e586b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e5871u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e5871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5872: push 0xadde44 */
  { uint32_t v = 0xadde44u; esp -= 4; W32(esp, v); }
/* 7e5877: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e5879u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5879: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e587c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e587e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5880: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5885u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e5885: guest_badaddr(0x7e5885); return;
}

void f_7e59e0(void) {
  LOAD_REGS();
L_7e59e0: /* 7e59e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e59e1: mov ebp, esp */
  ebp = esp;
/* 7e59e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e59e5: push 0x9d0fb0 */
  { uint32_t v = 0x9d0fb0u; esp -= 4; W32(esp, v); }
/* 7e59ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e59f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e59f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e59f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e59fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e59fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e59fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e5a00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e5a03: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e5a06: mov edi, ecx */
  edi = ecx;
/* 7e5a08: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5a0f: jne 0x7e5a29 */
  if (!zf) goto L_7e5a29;
L_7e5a11: /* 7e5a11: push 0xc6 */
  { uint32_t v = 0xc6u; esp -= 4; W32(esp, v); }
/* 7e5a16: push 0xadde70 */
  { uint32_t v = 0xadde70u; esp -= 4; W32(esp, v); }
/* 7e5a1b: push 0xadde80 */
  { uint32_t v = 0xadde80u; esp -= 4; W32(esp, v); }
/* 7e5a20: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5a26u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5a26: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5a29: /* 7e5a29: mov ecx, esi */
  ecx = esi;
/* 7e5a2b: call dword ptr [0xcfa600] */
  esp -= 4; W32(esp, 0x7e5a31u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* 7e5a31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a33: jne 0x7e5a4d */
  if (!zf) goto L_7e5a4d;
L_7e5a35: /* 7e5a35: push 0xc7 */
  { uint32_t v = 0xc7u; esp -= 4; W32(esp, v); }
/* 7e5a3a: push 0xadde8c */
  { uint32_t v = 0xadde8cu; esp -= 4; W32(esp, v); }
/* 7e5a3f: push 0xadde9c */
  { uint32_t v = 0xadde9cu; esp -= 4; W32(esp, v); }
/* 7e5a44: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5a4au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5a4a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5a4d: /* 7e5a4d: mov cl, byte ptr [esi + 0x8c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x8cu))) & 0xffu);
/* 7e5a53: mov al, 8 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 7e5a55: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a57: je 0x7e5a61 */
  if (zf) goto L_7e5a61;
L_7e5a59: /* 7e5a59: test byte ptr [esi + 0x88], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a5f: jne 0x7e5a83 */
  if (!zf) goto L_7e5a83;
L_7e5a61: /* 7e5a61: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7e5a66: mov ecx, esi */
  ecx = esi;
/* 7e5a68: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e5a6eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e5a6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a70: jne 0x7e5a83 */
  if (!zf) goto L_7e5a83;
L_7e5a72: /* 7e5a72: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 7e5a77: mov ecx, esi */
  ecx = esi;
/* 7e5a79: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e5a7fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e5a7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5a81: je 0x7e5a8f */
  if (zf) goto L_7e5a8f;
L_7e5a83: /* 7e5a83: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7e5a86: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e5a88: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
L_7e5a8f: /* 7e5a8f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e5a91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5a93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5a94: mov ecx, edi */
  ecx = edi;
/* 7e5a96: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7e5a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5a9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5a9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5aa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5aa1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5aa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5aa9: mov esp, ebp */
  esp = ebp;
/* 7e5aab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5aac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e5aaf(void) {
  LOAD_REGS();
L_7e5aaf: /* 7e5aaf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e5ab2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e5ab7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7e5aba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5abb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e5abe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5ac3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e5ac3(); return;
}

void f_7e5ac3(void) {
  LOAD_REGS();
L_7e5ac3: /* 7e5ac3: push 0xa10b48 */
  { uint32_t v = 0xa10b48u; esp -= 4; W32(esp, v); }
/* 7e5ac8: push 0xaddeb4 */
  { uint32_t v = 0xaddeb4u; esp -= 4; W32(esp, v); }
/* 7e5acd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e5ad3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e5ad3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5ad8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5ada: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5adfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e5adf: guest_badaddr(0x7e5adf); return;
}

void f_7e5b20(void) {
  LOAD_REGS();
L_7e5b20: /* 7e5b20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e5b21: mov ebp, esp */
  ebp = esp;
/* 7e5b23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e5b25: push 0x9d0fc0 */
  { uint32_t v = 0x9d0fc0u; esp -= 4; W32(esp, v); }
/* 7e5b2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e5b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5b31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e5b38: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e5b3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5b3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e5b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e5b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e5b43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e5b46: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e5b49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5b50: jne 0x7e5b6a */
  if (!zf) goto L_7e5b6a;
L_7e5b52: /* 7e5b52: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 7e5b57: push 0xaddebc */
  { uint32_t v = 0xaddebcu; esp -= 4; W32(esp, v); }
/* 7e5b5c: push 0xaddecc */
  { uint32_t v = 0xaddeccu; esp -= 4; W32(esp, v); }
/* 7e5b61: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5b67u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5b67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5b6a: /* 7e5b6a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5b6d: call dword ptr [0xcfa600] */
  esp -= 4; W32(esp, 0x7e5b73u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* 7e5b73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5b75: jne 0x7e5b8f */
  if (!zf) goto L_7e5b8f;
L_7e5b77: /* 7e5b77: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* 7e5b7c: push 0xadded8 */
  { uint32_t v = 0xadded8u; esp -= 4; W32(esp, v); }
/* 7e5b81: push 0xaddee8 */
  { uint32_t v = 0xaddee8u; esp -= 4; W32(esp, v); }
/* 7e5b86: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5b8cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5b8c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5b8f: /* 7e5b8f: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7e5b94: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5b97: jne 0x7e5c3c */
  if (!zf) goto L_7e5c3c;
L_7e5b9d: /* 7e5b9d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5ba0: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5ba6: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ba8: jne 0x7e5c27 */
  if (!zf) goto L_7e5c27;
L_7e5baa: /* 7e5baa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bad: jne 0x7e5c27 */
  if (!zf) goto L_7e5c27;
L_7e5baf: /* 7e5baf: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bb2: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5bb8: /* 7e5bb8: cmp byte ptr [ecx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5bbf: je 0x7e5bcf */
  if (zf) goto L_7e5bcf;
L_7e5bc1: /* 7e5bc1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e5bc4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bc6: jne 0x7e5bcf */
  if (!zf) goto L_7e5bcf;
L_7e5bc8: /* 7e5bc8: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bcd: je 0x7e5c27 */
  if (zf) goto L_7e5c27;
L_7e5bcf: /* 7e5bcf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5bd1: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x7e5bd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5bd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bd9: je 0x7e5c3c */
  if (zf) goto L_7e5c3c;
L_7e5bdb: /* 7e5bdb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5bde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5bdf: call 0x6c1582 */
  esp -= 4; W32(esp, 0x7e5be4u); SPILL(); f_6c1582(); if (g_unwind) return; RELOAD();
/* 7e5be4: mov esi, eax */
  esi = eax;
/* 7e5be6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5be9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5beb: je 0x7e5c3c */
  if (zf) goto L_7e5c3c;
L_7e5bed: /* 7e5bed: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7e5bf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5bf4: call 0x6c8ff3 */
  esp -= 4; W32(esp, 0x7e5bf9u); SPILL(); f_6c8ff3(); if (g_unwind) return; RELOAD();
/* 7e5bf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5bfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5bfe: je 0x7e5c3c */
  if (zf) goto L_7e5c3c;
L_7e5c00: /* 7e5c00: mov ecx, dword ptr [eax + 0xeb4] */
  ecx = R32((uint32_t)(eax + 0xeb4u));
/* 7e5c06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5c08: je 0x7e5c3c */
  if (zf) goto L_7e5c3c;
L_7e5c0a: /* 7e5c0a: cmp dword ptr [eax + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5c0e: je 0x7e5c3c */
  if (zf) goto L_7e5c3c;
L_7e5c10: /* 7e5c10: or dword ptr [esi + 0x4c4], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4c4u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4c4u), r);
  }
/* 7e5c1a: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7e5c20: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e5c22: mov ecx, eax */
  ecx = eax;
/* 7e5c24: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7e5c27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5c27: /* 7e5c27: xor eax, eax */
  eax = 0;
/* 7e5c29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5c2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5c33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5c34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5c35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5c36: mov esp, ebp */
  esp = ebp;
/* 7e5c38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5c39: ret 8 */
  esp += 12; SPILL(); return;
L_7e5c3c: /* 7e5c3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5c3f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5c42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5c43: call 0x6c6131 */
  esp -= 4; W32(esp, 0x7e5c48u); SPILL(); f_6c6131(); if (g_unwind) return; RELOAD();
/* 7e5c48: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7e5c4e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e5c50: mov ebx, eax */
  ebx = eax;
/* 7e5c52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5c55: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5c58: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5c5a: je 0x7e5c77 */
  if (zf) goto L_7e5c77;
L_7e5c5c: /* 7e5c5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5c5e: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7e5c63: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7e5c68: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e5c6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5c6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5c6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e5c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5c70: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7e5c73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5c74: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7e5c77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5c77: /* 7e5c77: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5c7a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5c7c: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x7e5c7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5c7f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5c82: or dword ptr [eax + 0x84], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x84u), r);
  }
/* 7e5c8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5c8f: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7e5c95u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7e5c95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5c97: je 0x7e5cc4 */
  if (zf) goto L_7e5cc4;
L_7e5c99: /* 7e5c99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5c9c: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7e5ca2u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7e5ca2: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 7e5ca5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ca7: je 0x7e5cc4 */
  if (zf) goto L_7e5cc4;
L_7e5ca9: /* 7e5ca9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5cac: call dword ptr [0xcfaa6c] */
  esp -= 4; W32(esp, 0x7e5cb2u); SPILL(); f_4e2ac7(); if (g_unwind) return; /* Core!?eventEndState@UObject@@QAEXXZ */ RELOAD();
/* 7e5cb2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5cb5: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5cbb: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5cbe: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5cc4: /* 7e5cc4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e5cc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5cc8: mov ecx, esp */
  ecx = esp;
/* 7e5cca: push 0x12d */
  { uint32_t v = 0x12du; esp -= 4; W32(esp, v); }
/* 7e5ccf: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e5cd5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e5cd5: mov ecx, esi */
  ecx = esi;
/* 7e5cd7: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e5cddu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e5cdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5cdf: je 0x7e5cfe */
  if (zf) goto L_7e5cfe;
L_7e5ce1: /* 7e5ce1: mov ecx, dword ptr [0xb7e28c] */
  ecx = R32((uint32_t)(0xb7e28cu));
/* 7e5ce7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5ce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5cea: mov ecx, esi */
  ecx = esi;
/* 7e5cec: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e5cf2u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e5cf2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e5cf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5cf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5cf9: mov ecx, esi */
  ecx = esi;
/* 7e5cfb: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e5cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5cfe: /* 7e5cfe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5d01: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e5d03: call dword ptr [eax + 0xc0] */
  { uint32_t t = R32((uint32_t)(eax + 0xc0u)); esp -= 4; W32(esp, 0x7e5d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5d09: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5d0c: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e5d0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5d11: je 0x7e5d5c */
  if (zf) goto L_7e5d5c;
L_7e5d13: /* 7e5d13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5d15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5d17: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e5d1a: mov eax, esp */
  eax = esp;
/* 7e5d1c: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7e5d23: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e5d26: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e5d28: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7e5d2f: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e5d32: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e5d35: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 7e5d3c: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e5d3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5d41: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e5d44: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e5d4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5d4a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5d4d: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5d53: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5d56: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5d5c: /* 7e5d5c: mov eax, dword ptr [ecx + 0x200] */
  eax = R32((uint32_t)(ecx + 0x200u));
/* 7e5d62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e5d64: jle 0x7e5dbc */
  if ((zf || sf != of)) goto L_7e5dbc;
L_7e5d66: /* 7e5d66: xor esi, esi */
  esi = 0;
L_7e5d68: /* 7e5d68: cmp esi, dword ptr [ecx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5d6e: jge 0x7e5dbc */
  if ((sf == of)) goto L_7e5dbc;
L_7e5d70: /* 7e5d70: mov edx, dword ptr [ecx + 0x1fc] */
  edx = R32((uint32_t)(ecx + 0x1fcu));
/* 7e5d76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e5d79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5d7b: je 0x7e5db9 */
  if (zf) goto L_7e5db9;
L_7e5d7d: /* 7e5d7d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e5d7f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5d81: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e5d84: mov ecx, esp */
  ecx = esp;
/* 7e5d86: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7e5d8d: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e5d90: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e5d92: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7e5d99: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e5d9c: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e5d9f: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 7e5da6: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e5da9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e5dac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5dae: mov ecx, eax */
  ecx = eax;
/* 7e5db0: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e5db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5db6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e5db9: /* 7e5db9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e5dba: jmp 0x7e5d68 */
  goto L_7e5d68;
L_7e5dbc: /* 7e5dbc: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5dc2: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5dc5: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5dcb: /* 7e5dcb: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e5dd1: mov eax, dword ptr [0xce8468] */
  eax = R32((uint32_t)(0xce8468u));
/* 7e5dd6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e5dda: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e5ddd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5ddf: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7e5de1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5de4: xor esi, esi */
  esi = 0;
/* 7e5de6: jmp 0x7e5df0 */
  goto L_7e5df0;
L_7e5df0: /* 7e5df0: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5df6: jge 0x7e5eb1 */
  if ((sf == of)) goto L_7e5eb1;
L_7e5dfc: /* 7e5dfc: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e5e02: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e5e05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e07: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e0d: /* 7e5e0d: xor edx, edx */
  edx = 0;
/* 7e5e0f: nop  */
L_7e5e10: /* 7e5e10: cmp edx, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5e16: jge 0x7e5eab */
  if ((sf == of)) goto L_7e5eab;
L_7e5e1c: /* 7e5e1c: mov edi, dword ptr [eax + 0x110] */
  edi = R32((uint32_t)(eax + 0x110u));
/* 7e5e22: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5e25: je 0x7e5e2a */
  if (zf) goto L_7e5e2a;
L_7e5e27: /* 7e5e27: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e5e28: jmp 0x7e5e10 */
  goto L_7e5e10;
L_7e5e2a: /* 7e5e2a: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e5e30: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e5e33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5e36: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e5e3bu); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e5e3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5e3e: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5e44: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7e5e45: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e48: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e4a: /* 7e5e4a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e5e4f: mov ecx, dword ptr [0xce8468] */
  ecx = R32((uint32_t)(0xce8468u));
/* 7e5e55: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e5e58: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5e5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5e5c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5e5f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5e61: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7e5e63: /* 7e5e63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5e68: mov eax, 1 */
  eax = 0x1u;
/* 7e5e6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5e74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5e75: mov esp, ebp */
  esp = ebp;
/* 7e5e77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5e78: ret 8 */
  esp += 12; SPILL(); return;
L_7e5eab: /* 7e5eab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e5eac: jmp 0x7e5df0 */
  goto L_7e5df0;
L_7e5eb1: /* 7e5eb1: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e5eb7: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7e5ebd: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e5ec0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5ec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5ec4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5ec7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5ec9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e5ecb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5ece: mov esi, dword ptr [eax + 0x58] */
  esi = R32((uint32_t)(eax + 0x58u));
/* 7e5ed1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ed3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5eda: je 0x7e5f2b */
  if (zf) goto L_7e5f2b;
L_7e5edc: /* 7e5edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5edd: mov ecx, esp */
  ecx = esp;
/* 7e5edf: push 0x12f */
  { uint32_t v = 0x12fu; esp -= 4; W32(esp, v); }
/* 7e5ee4: mov edi, eax */
  edi = eax;
/* 7e5ee6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e5eecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e5eec: mov ecx, esi */
  ecx = esi;
/* 7e5eee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e5ef4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e5ef4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ef6: je 0x7e5f19 */
  if (zf) goto L_7e5f19;
L_7e5ef8: /* 7e5ef8: mov eax, dword ptr [0xb7e294] */
  eax = R32((uint32_t)(0xb7e294u));
/* 7e5efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f00: mov ecx, esi */
  ecx = esi;
/* 7e5f02: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7e5f05: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e5f0bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e5f0b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e5f0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5f0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e5f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f14: mov ecx, esi */
  ecx = esi;
/* 7e5f16: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e5f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5f19: /* 7e5f19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5f1c: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5f22: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f25: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5f2b: /* 7e5f2b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f2e: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7e5f31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f33: je 0x7e5f41 */
  if (zf) goto L_7e5f41;
L_7e5f35: /* 7e5f35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f38: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f41: /* 7e5f41: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f44: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7e5f4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f4c: je 0x7e5f61 */
  if (zf) goto L_7e5f61;
L_7e5f4e: /* 7e5f4e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 7e5f51: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f53: jne 0x7e5f61 */
  if (!zf) goto L_7e5f61;
L_7e5f55: /* 7e5f55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f58: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f61: /* 7e5f61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f64: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e5f6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f6c: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f6e: /* 7e5f6e: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f75: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f77: /* 7e5f77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f7a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e5f7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f80: /* 7e5f80: mov ecx, eax */
  ecx = eax;
/* 7e5f82: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e5f87u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7e5f87: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f8a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5f8d: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7e5f90: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5f93: je 0x7e5fad */
  if (zf) goto L_7e5fad;
L_7e5f95: /* 7e5f95: push 0x173 */
  { uint32_t v = 0x173u; esp -= 4; W32(esp, v); }
/* 7e5f9a: push 0xaddf08 */
  { uint32_t v = 0xaddf08u; esp -= 4; W32(esp, v); }
/* 7e5f9f: push 0xaddf18 */
  { uint32_t v = 0xaddf18u; esp -= 4; W32(esp, v); }
/* 7e5fa4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5faau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5faa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5fad: /* 7e5fad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fb0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5fb3: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
/* 7e5fba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fbd: or dword ptr [eax + 0x80], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7e5fc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fca: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 7e5fcd: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7e5fd0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5fd2: je 0x7e5fe0 */
  if (zf) goto L_7e5fe0;
L_7e5fd4: /* 7e5fd4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5fda: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7e5fe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5fe0: /* 7e5fe0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5fe3: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7e5fe9u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7e5fe9: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e5fef: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5ff2: jne 0x7e6017 */
  if (!zf) goto L_7e6017;
L_7e5ff4: /* 7e5ff4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5ff7: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 7e5ffd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6000: mov dword ptr [ecx + 0x15c], eax */
  W32((uint32_t)(ecx + 0x15cu), eax);
/* 7e6006: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6009: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e600c: mov dword ptr [edx + 0xf0], eax */
  W32((uint32_t)(edx + 0xf0u), eax);
/* 7e6012: jmp 0x7e5e63 */
  goto L_7e5e63;
L_7e6017: /* 7e6017: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e601a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e601c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e601e: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7e6024u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6024: jmp 0x7e5e63 */
  goto L_7e5e63;
}
