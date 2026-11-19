#include "recomp.h"
#include "rec_mod.h"

void f_7332b0(void) {
  LOAD_REGS();
L_7332b0: /* 7332b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7332b2: push 0x9c51f9 */
  { uint32_t v = 0x9c51f9u; esp -= 4; W32(esp, v); }
/* 7332b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7332bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7332be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7332c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7332c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7332c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7332c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7332c9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7332cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7332d0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7332d2: mov esi, ecx */
  esi = ecx;
/* 7332d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7332d5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7332d9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7332dfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7332df: xor ebx, ebx */
  ebx = 0;
/* 7332e1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7332e4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7332e7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7332eb: jle 0x73331b */
  if ((zf || sf != of)) goto L_73331b;
L_7332ed: /* 7332ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7332ee: xor ebp, ebp */
  ebp = 0;
L_7332f0: /* 7332f0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7332f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7332f4: mov ecx, esi */
  ecx = esi;
/* 7332f6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7332fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7332fc: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7332ff: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 733301: je 0x73330f */
  if (zf) goto L_73330f;
L_733303: /* 733303: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 733305: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 733307: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733308: mov ecx, eax */
  ecx = eax;
/* 73330a: call 0x6c73a1 */
  esp -= 4; W32(esp, 0x73330fu); SPILL(); f_6c73a1(); if (g_unwind) return; RELOAD();
L_73330f: /* 73330f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733312: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733313: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 733316: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733318: jl 0x7332f0 */
  if ((sf != of)) goto L_7332f0;
L_73331a: /* 73331a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_73331b: /* 73331b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 73331f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733320: mov eax, esi */
  eax = esi;
/* 733322: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733323: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733324: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73332b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73332e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733370(void) {
  LOAD_REGS();
L_733370: /* 733370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733373: mov esi, ecx */
  esi = ecx;
/* 733375: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73337bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73337b: mov eax, esi */
  eax = esi;
/* 73337d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73337e: ret  */
  esp += 4; SPILL(); return;
}

void f_733390(void) {
  LOAD_REGS();
L_733390: /* 733390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733391: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733393: mov esi, ecx */
  esi = ecx;
/* 733395: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73339bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73339b: mov eax, esi */
  eax = esi;
/* 73339d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73339e: ret  */
  esp += 4; SPILL(); return;
}

void f_7333b0(void) {
  LOAD_REGS();
L_7333b0: /* 7333b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7333b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7333b3: mov esi, ecx */
  esi = ecx;
/* 7333b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7333bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7333bb: mov eax, esi */
  eax = esi;
/* 7333bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7333be: ret  */
  esp += 4; SPILL(); return;
}

void f_7333d0(void) {
  LOAD_REGS();
L_7333d0: /* 7333d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7333d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7333d3: mov esi, ecx */
  esi = ecx;
/* 7333d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7333dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7333db: mov eax, esi */
  eax = esi;
/* 7333dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7333de: ret  */
  esp += 4; SPILL(); return;
}

void f_7333f0(void) {
  LOAD_REGS();
L_7333f0: /* 7333f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7333f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7333f3: mov esi, ecx */
  esi = ecx;
/* 7333f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7333fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7333fb: mov eax, esi */
  eax = esi;
/* 7333fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7333fe: ret  */
  esp += 4; SPILL(); return;
}

void f_733410(void) {
  LOAD_REGS();
L_733410: /* 733410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733413: mov esi, ecx */
  esi = ecx;
/* 733415: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73341bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73341b: mov eax, esi */
  eax = esi;
/* 73341d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73341e: ret  */
  esp += 4; SPILL(); return;
}

void f_733430(void) {
  LOAD_REGS();
L_733430: /* 733430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733433: mov esi, ecx */
  esi = ecx;
/* 733435: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73343bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73343b: mov eax, esi */
  eax = esi;
/* 73343d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73343e: ret  */
  esp += 4; SPILL(); return;
}

void f_733450(void) {
  LOAD_REGS();
L_733450: /* 733450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733451: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733453: mov esi, ecx */
  esi = ecx;
/* 733455: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73345bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73345b: mov eax, esi */
  eax = esi;
/* 73345d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73345e: ret  */
  esp += 4; SPILL(); return;
}

void f_733470(void) {
  LOAD_REGS();
L_733470: /* 733470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733473: mov esi, ecx */
  esi = ecx;
/* 733475: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73347bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73347b: mov eax, esi */
  eax = esi;
/* 73347d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73347e: ret  */
  esp += 4; SPILL(); return;
}

void f_733490(void) {
  LOAD_REGS();
L_733490: /* 733490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733493: mov esi, ecx */
  esi = ecx;
/* 733495: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73349bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73349b: mov eax, esi */
  eax = esi;
/* 73349d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73349e: ret  */
  esp += 4; SPILL(); return;
}

void f_7334b0(void) {
  LOAD_REGS();
L_7334b0: /* 7334b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7334b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7334b3: mov esi, ecx */
  esi = ecx;
/* 7334b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7334bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7334bb: mov eax, esi */
  eax = esi;
/* 7334bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7334be: ret  */
  esp += 4; SPILL(); return;
}

void f_7334d0(void) {
  LOAD_REGS();
L_7334d0: /* 7334d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7334d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7334d3: mov esi, ecx */
  esi = ecx;
/* 7334d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7334dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7334db: mov eax, esi */
  eax = esi;
/* 7334dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7334de: ret  */
  esp += 4; SPILL(); return;
}

void f_7334f0(void) {
  LOAD_REGS();
L_7334f0: /* 7334f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7334f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7334f3: mov esi, ecx */
  esi = ecx;
/* 7334f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7334fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7334fb: mov eax, esi */
  eax = esi;
/* 7334fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7334fe: ret  */
  esp += 4; SPILL(); return;
}

void f_733510(void) {
  LOAD_REGS();
L_733510: /* 733510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733513: mov esi, ecx */
  esi = ecx;
/* 733515: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73351bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73351b: mov eax, esi */
  eax = esi;
/* 73351d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73351e: ret  */
  esp += 4; SPILL(); return;
}

void f_733530(void) {
  LOAD_REGS();
L_733530: /* 733530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733531: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733533: mov esi, ecx */
  esi = ecx;
/* 733535: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73353bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73353b: mov eax, esi */
  eax = esi;
/* 73353d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73353e: ret  */
  esp += 4; SPILL(); return;
}

void f_733550(void) {
  LOAD_REGS();
L_733550: /* 733550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733551: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733553: mov esi, ecx */
  esi = ecx;
/* 733555: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73355bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73355b: mov eax, esi */
  eax = esi;
/* 73355d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73355e: ret  */
  esp += 4; SPILL(); return;
}

void f_733570(void) {
  LOAD_REGS();
L_733570: /* 733570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733573: mov esi, ecx */
  esi = ecx;
/* 733575: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73357bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73357b: mov eax, esi */
  eax = esi;
/* 73357d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73357e: ret  */
  esp += 4; SPILL(); return;
}

void f_733590(void) {
  LOAD_REGS();
L_733590: /* 733590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733593: mov esi, ecx */
  esi = ecx;
/* 733595: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73359bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73359b: mov eax, esi */
  eax = esi;
/* 73359d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73359e: ret  */
  esp += 4; SPILL(); return;
}

void f_7335b0(void) {
  LOAD_REGS();
L_7335b0: /* 7335b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7335b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7335b3: mov esi, ecx */
  esi = ecx;
/* 7335b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7335bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7335bb: mov eax, esi */
  eax = esi;
/* 7335bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7335be: ret  */
  esp += 4; SPILL(); return;
}

void f_7335d0(void) {
  LOAD_REGS();
L_7335d0: /* 7335d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7335d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7335d3: mov esi, ecx */
  esi = ecx;
/* 7335d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7335dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7335db: mov eax, esi */
  eax = esi;
/* 7335dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7335de: ret  */
  esp += 4; SPILL(); return;
}

void f_7335f0(void) {
  LOAD_REGS();
L_7335f0: /* 7335f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7335f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7335f3: mov esi, ecx */
  esi = ecx;
/* 7335f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7335fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7335fb: mov eax, esi */
  eax = esi;
/* 7335fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7335fe: ret  */
  esp += 4; SPILL(); return;
}

void f_733610(void) {
  LOAD_REGS();
L_733610: /* 733610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733613: mov esi, ecx */
  esi = ecx;
/* 733615: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73361bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73361b: mov eax, esi */
  eax = esi;
/* 73361d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73361e: ret  */
  esp += 4; SPILL(); return;
}

void f_733630(void) {
  LOAD_REGS();
L_733630: /* 733630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733633: mov esi, ecx */
  esi = ecx;
/* 733635: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73363bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73363b: mov eax, esi */
  eax = esi;
/* 73363d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73363e: ret  */
  esp += 4; SPILL(); return;
}

void f_733650(void) {
  LOAD_REGS();
L_733650: /* 733650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733653: mov esi, ecx */
  esi = ecx;
/* 733655: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73365bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73365b: mov eax, esi */
  eax = esi;
/* 73365d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73365e: ret  */
  esp += 4; SPILL(); return;
}

void f_733670(void) {
  LOAD_REGS();
L_733670: /* 733670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733673: mov esi, ecx */
  esi = ecx;
/* 733675: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73367bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73367b: mov eax, esi */
  eax = esi;
/* 73367d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73367e: ret  */
  esp += 4; SPILL(); return;
}

void f_733690(void) {
  LOAD_REGS();
L_733690: /* 733690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733693: mov esi, ecx */
  esi = ecx;
/* 733695: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73369bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73369b: mov eax, esi */
  eax = esi;
/* 73369d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73369e: ret  */
  esp += 4; SPILL(); return;
}

void f_7336b0(void) {
  LOAD_REGS();
L_7336b0: /* 7336b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7336b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7336b3: mov esi, ecx */
  esi = ecx;
/* 7336b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7336bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7336bb: mov eax, esi */
  eax = esi;
/* 7336bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7336be: ret  */
  esp += 4; SPILL(); return;
}

void f_7336d0(void) {
  LOAD_REGS();
L_7336d0: /* 7336d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7336d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7336d3: mov esi, ecx */
  esi = ecx;
/* 7336d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7336dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7336db: mov eax, esi */
  eax = esi;
/* 7336dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7336de: ret  */
  esp += 4; SPILL(); return;
}

void f_7336f0(void) {
  LOAD_REGS();
L_7336f0: /* 7336f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7336f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7336f3: mov esi, ecx */
  esi = ecx;
/* 7336f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7336fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7336fb: mov eax, esi */
  eax = esi;
/* 7336fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7336fe: ret  */
  esp += 4; SPILL(); return;
}

void f_733710(void) {
  LOAD_REGS();
L_733710: /* 733710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 733714: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733716: mov esi, ecx */
  esi = ecx;
/* 733718: call 0x6ca998 */
  esp -= 4; W32(esp, 0x73371du); SPILL(); f_6ca998(); if (g_unwind) return; RELOAD();
/* 73371d: mov eax, esi */
  eax = esi;
/* 73371f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733720: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733740(void) {
  LOAD_REGS();
L_733740: /* 733740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733742: push 0x9c5219 */
  { uint32_t v = 0x9c5219u; esp -= 4; W32(esp, v); }
/* 733747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73374d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73374e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733756: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733757: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733758: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733759: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 73375d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733760: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 733762: mov esi, ecx */
  esi = ecx;
/* 733764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733765: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 733769: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x73376fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 73376f: xor ebx, ebx */
  ebx = 0;
/* 733771: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 733774: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733777: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 73377b: jle 0x7337ae */
  if ((zf || sf != of)) goto L_7337ae;
L_73377d: /* 73377d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73377e: xor ebp, ebp */
  ebp = 0;
L_733780: /* 733780: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 733782: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733784: mov ecx, esi */
  ecx = esi;
/* 733786: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73378cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73378c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 73378e: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 733791: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 733794: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733796: je 0x7337a2 */
  if (zf) goto L_7337a2;
L_733798: /* 733798: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 73379a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73379c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73379d: call 0x6c8e77 */
  esp -= 4; W32(esp, 0x7337a2u); SPILL(); f_6c8e77(); if (g_unwind) return; RELOAD();
L_7337a2: /* 7337a2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7337a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7337a6: add ebp, 0x48 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7337a9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7337ab: jl 0x733780 */
  if ((sf != of)) goto L_733780;
L_7337ad: /* 7337ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7337ae: /* 7337ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7337b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7337b3: mov eax, esi */
  eax = esi;
/* 7337b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7337b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7337b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7337be: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7337c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733800(void) {
  LOAD_REGS();
L_733800: /* 733800: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733802: push 0x9c5239 */
  { uint32_t v = 0x9c5239u; esp -= 4; W32(esp, v); }
/* 733807: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73380d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73380e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733816: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733819: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 73381d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733820: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 733822: mov esi, ecx */
  esi = ecx;
/* 733824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733825: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 733829: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x73382fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 73382f: xor ebx, ebx */
  ebx = 0;
/* 733831: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 733834: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733837: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 73383b: jle 0x73386e */
  if ((zf || sf != of)) goto L_73386e;
L_73383d: /* 73383d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73383e: xor ebp, ebp */
  ebp = 0;
L_733840: /* 733840: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 733842: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733844: mov ecx, esi */
  ecx = esi;
/* 733846: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73384cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73384c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 73384e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 733851: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 733854: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733856: je 0x733862 */
  if (zf) goto L_733862;
L_733858: /* 733858: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 73385a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73385c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73385d: call 0x6cab5f */
  esp -= 4; W32(esp, 0x733862u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
L_733862: /* 733862: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733865: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733866: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 733869: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73386b: jl 0x733840 */
  if ((sf != of)) goto L_733840;
L_73386d: /* 73386d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_73386e: /* 73386e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 733872: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733873: mov eax, esi */
  eax = esi;
/* 733875: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733876: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733877: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73387e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733881: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7338c0(void) {
  LOAD_REGS();
L_7338c0: /* 7338c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7338c2: push 0x9c5259 */
  { uint32_t v = 0x9c5259u; esp -= 4; W32(esp, v); }
/* 7338c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7338cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7338ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7338d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7338d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7338d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7338d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7338d9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7338dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7338e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7338e2: mov esi, ecx */
  esi = ecx;
/* 7338e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7338e5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7338e9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7338efu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7338ef: xor ebx, ebx */
  ebx = 0;
/* 7338f1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7338f4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7338f7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7338fb: jle 0x73392e */
  if ((zf || sf != of)) goto L_73392e;
L_7338fd: /* 7338fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7338fe: xor ebp, ebp */
  ebp = 0;
L_733900: /* 733900: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 733902: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733904: mov ecx, esi */
  ecx = esi;
/* 733906: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73390cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73390c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 73390e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 733911: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 733914: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733916: je 0x733922 */
  if (zf) goto L_733922;
L_733918: /* 733918: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 73391a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73391c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73391d: call 0x6cab5f */
  esp -= 4; W32(esp, 0x733922u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
L_733922: /* 733922: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733925: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733926: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 733929: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73392b: jl 0x733900 */
  if ((sf != of)) goto L_733900;
L_73392d: /* 73392d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_73392e: /* 73392e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 733932: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733933: mov eax, esi */
  eax = esi;
/* 733935: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73393e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733941: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733980(void) {
  LOAD_REGS();
L_733980: /* 733980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733982: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 733986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733987: mov esi, ecx */
  esi = ecx;
/* 733989: call 0x6c93ae */
  esp -= 4; W32(esp, 0x73398eu); SPILL(); f_6c93ae(); if (g_unwind) return; RELOAD();
/* 73398e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 733991: mov ecx, esi */
  ecx = esi;
/* 733993: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 733996: call 0x6c3fda */
  esp -= 4; W32(esp, 0x73399bu); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 73399b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73399c: mov eax, esi */
  eax = esi;
/* 73399e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73399f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7339c0(void) {
  LOAD_REGS();
L_7339c0: /* 7339c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7339c2: push 0x9c5278 */
  { uint32_t v = 0x9c5278u; esp -= 4; W32(esp, v); }
/* 7339c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7339cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7339ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7339d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7339d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7339d7: mov esi, ecx */
  esi = ecx;
/* 7339d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7339dd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7339e3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7339e3: xor eax, eax */
  eax = 0;
/* 7339e5: mov ecx, esi */
  ecx = esi;
/* 7339e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7339eb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7339ee: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7339f5: call 0x6c3fda */
  esp -= 4; W32(esp, 0x7339fau); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 7339fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7339fe: mov eax, esi */
  eax = esi;
/* 733a00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733a01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733a08: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733a0b: ret  */
  esp += 4; SPILL(); return;
}

void f_733a30(void) {
  LOAD_REGS();
L_733a30: /* 733a30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733a32: push 0x9c5298 */
  { uint32_t v = 0x9c5298u; esp -= 4; W32(esp, v); }
/* 733a37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733a3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733a46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733a47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733a48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 733a4c: mov esi, ecx */
  esi = ecx;
/* 733a4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733a4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 733a53: call 0x6cb6e5 */
  esp -= 4; W32(esp, 0x733a58u); SPILL(); f_6cb6e5(); if (g_unwind) return; RELOAD();
/* 733a58: xor eax, eax */
  eax = 0;
/* 733a5a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 733a5e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 733a61: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 733a64: mov ecx, esi */
  ecx = esi;
/* 733a66: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 733a69: call 0x6c3fda */
  esp -= 4; W32(esp, 0x733a6eu); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 733a6e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 733a72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733a73: mov eax, esi */
  eax = esi;
/* 733a75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733a76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733a7d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733a80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733ab0(void) {
  LOAD_REGS();
L_733ab0: /* 733ab0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733ab2: push 0x9c52b8 */
  { uint32_t v = 0x9c52b8u; esp -= 4; W32(esp, v); }
/* 733ab7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733abe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733ac7: mov esi, ecx */
  esi = ecx;
/* 733ac9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 733acd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 733ad0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733ad2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 733ada: je 0x733aea */
  if (zf) goto L_733aea;
L_733adc: /* 733adc: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 733ae2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 733ae4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 733ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733ae7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x733aeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_733aea: /* 733aea: mov ecx, esi */
  ecx = esi;
/* 733aec: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 733af3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 733afa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 733b02: call 0x6cb0a0 */
  esp -= 4; W32(esp, 0x733b07u); SPILL(); f_6cb0a0(); if (g_unwind) return; RELOAD();
/* 733b07: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 733b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733b0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733b13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733b16: ret  */
  esp += 4; SPILL(); return;
}

void f_733b40(void) {
  LOAD_REGS();
L_733b40: /* 733b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733b41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733b42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 733b46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733b47: mov esi, ecx */
  esi = ecx;
/* 733b49: call 0x6c1947 */
  esp -= 4; W32(esp, 0x733b4eu); SPILL(); f_6c1947(); if (g_unwind) return; RELOAD();
/* 733b4e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 733b51: mov ecx, esi */
  ecx = esi;
/* 733b53: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 733b56: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x733b5bu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 733b5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733b5c: mov eax, esi */
  eax = esi;
/* 733b5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733b5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733b80(void) {
  LOAD_REGS();
L_733b80: /* 733b80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733b82: push 0x9c52d8 */
  { uint32_t v = 0x9c52d8u; esp -= 4; W32(esp, v); }
/* 733b87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733b8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733b95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733b97: mov esi, ecx */
  esi = ecx;
/* 733b99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 733b9d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x733ba3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 733ba3: xor eax, eax */
  eax = 0;
/* 733ba5: mov ecx, esi */
  ecx = esi;
/* 733ba7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 733bab: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 733bae: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 733bb5: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x733bbau); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 733bba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 733bbe: mov eax, esi */
  eax = esi;
/* 733bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733bc1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733bc8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733bcb: ret  */
  esp += 4; SPILL(); return;
}

void f_733bf0(void) {
  LOAD_REGS();
L_733bf0: /* 733bf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733bf2: push 0x9c52f8 */
  { uint32_t v = 0x9c52f8u; esp -= 4; W32(esp, v); }
/* 733bf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733bfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733bfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733c05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733c06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733c07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733c08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 733c0c: mov esi, ecx */
  esi = ecx;
/* 733c0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733c0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 733c13: call 0x6c637f */
  esp -= 4; W32(esp, 0x733c18u); SPILL(); f_6c637f(); if (g_unwind) return; RELOAD();
/* 733c18: xor eax, eax */
  eax = 0;
/* 733c1a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 733c1e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 733c21: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 733c24: mov ecx, esi */
  ecx = esi;
/* 733c26: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 733c29: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x733c2eu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 733c2e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 733c32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733c33: mov eax, esi */
  eax = esi;
/* 733c35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733c36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733c3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733c40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733c70(void) {
  LOAD_REGS();
L_733c70: /* 733c70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733c72: push 0x9c5318 */
  { uint32_t v = 0x9c5318u; esp -= 4; W32(esp, v); }
/* 733c77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733c7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733c85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733c86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733c87: mov esi, ecx */
  esi = ecx;
/* 733c89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 733c8d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 733c90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733c92: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 733c9a: je 0x733caa */
  if (zf) goto L_733caa;
L_733c9c: /* 733c9c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 733ca2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 733ca4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 733ca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733ca7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x733caau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_733caa: /* 733caa: mov ecx, esi */
  ecx = esi;
/* 733cac: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 733cb3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 733cba: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 733cc2: call 0x6c5687 */
  esp -= 4; W32(esp, 0x733cc7u); SPILL(); f_6c5687(); if (g_unwind) return; RELOAD();
/* 733cc7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 733ccb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733ccc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733cd3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_733d00(void) {
  LOAD_REGS();
L_733d00: /* 733d00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733d02: push 0x9c5339 */
  { uint32_t v = 0x9c5339u; esp -= 4; W32(esp, v); }
/* 733d07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733d0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733d0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733d15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733d16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733d17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733d18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733d19: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 733d1d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733d20: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 733d22: mov esi, ecx */
  esi = ecx;
/* 733d24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733d25: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 733d29: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x733d2fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 733d2f: xor ebx, ebx */
  ebx = 0;
/* 733d31: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 733d34: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733d37: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 733d3b: jle 0x733d6e */
  if ((zf || sf != of)) goto L_733d6e;
L_733d3d: /* 733d3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 733d3e: xor ebp, ebp */
  ebp = 0;
L_733d40: /* 733d40: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 733d42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733d44: mov ecx, esi */
  ecx = esi;
/* 733d46: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x733d4cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 733d4c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 733d4e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 733d51: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 733d54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733d56: je 0x733d62 */
  if (zf) goto L_733d62;
L_733d58: /* 733d58: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 733d5a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 733d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733d5d: call 0x6c4746 */
  esp -= 4; W32(esp, 0x733d62u); SPILL(); f_6c4746(); if (g_unwind) return; RELOAD();
L_733d62: /* 733d62: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733d65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733d66: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 733d69: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733d6b: jl 0x733d40 */
  if ((sf != of)) goto L_733d40;
L_733d6d: /* 733d6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_733d6e: /* 733d6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 733d72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733d73: mov eax, esi */
  eax = esi;
/* 733d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733d76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733d77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733d7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733d81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733dc0(void) {
  LOAD_REGS();
L_733dc0: /* 733dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733dc2: push 0x9c5359 */
  { uint32_t v = 0x9c5359u; esp -= 4; W32(esp, v); }
/* 733dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733dd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733dd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733dd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733dd9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 733ddd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733de0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 733de2: mov esi, ecx */
  esi = ecx;
/* 733de4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733de5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 733de9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x733defu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 733def: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 733df6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733df9: xor ebx, ebx */
  ebx = 0;
/* 733dfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 733dfd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 733e05: jle 0x733e2b */
  if ((zf || sf != of)) goto L_733e2b;
L_733e07: /* 733e07: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 733e09: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733e0b: mov ecx, esi */
  ecx = esi;
/* 733e0d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x733e13u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 733e13: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 733e15: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 733e18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733e1a: je 0x733e23 */
  if (zf) goto L_733e23;
L_733e1c: /* 733e1c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 733e1e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 733e21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_733e23: /* 733e23: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733e26: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733e27: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733e29: jl 0x733e07 */
  if ((sf != of)) goto L_733e07;
L_733e2b: /* 733e2b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 733e2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733e30: mov eax, esi */
  eax = esi;
/* 733e32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733e33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733e34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733e3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733e3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733e80(void) {
  LOAD_REGS();
L_733e80: /* 733e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 733e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733e85: mov esi, ecx */
  esi = ecx;
/* 733e87: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 733e89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733e8a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 733e8d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x733e93u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 733e93: xor eax, eax */
  eax = 0;
/* 733e95: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 733e98: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 733e9b: mov dword ptr [esi], 0x9f92a4 */
  W32((uint32_t)(esi), 0x9f92a4u);
/* 733ea1: mov eax, esi */
  eax = esi;
/* 733ea3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733ea4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733ec0(void) {
  LOAD_REGS();
L_733ec0: /* 733ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 733ec1: mov ebp, esp */
  ebp = esp;
/* 733ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733ec5: push 0x9c5397 */
  { uint32_t v = 0x9c5397u; esp -= 4; W32(esp, v); }
/* 733eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733ed8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 733edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733edd: mov esi, ecx */
  esi = ecx;
/* 733edf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733ee0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 733ee3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 733ee6: mov dword ptr [esi], 0x9f92a4 */
  W32((uint32_t)(esi), 0x9f92a4u);
/* 733eec: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 733eef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 733ef1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 733ef8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 733efc: je 0x733f04 */
  if (zf) goto L_733f04;
L_733efe: /* 733efe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 733f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733f01: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x733f04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_733f04: /* 733f04: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 733f07: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 733f0e: call 0x6cad0d */
  esp -= 4; W32(esp, 0x733f13u); SPILL(); f_6cad0d(); if (g_unwind) return; RELOAD();
/* 733f13: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 733f16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733f17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733f18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 733f1f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733f20: mov esp, ebp */
  esp = ebp;
/* 733f22: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 733f23: ret  */
  esp += 4; SPILL(); return;
}

void f_733f24(void) {
  LOAD_REGS();
L_733f24: /* 733f24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 733f27: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 733f2c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 733f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 733f30: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 733f33: call 0x99caf8 */
  esp -= 4; W32(esp, 0x733f38u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_733f38(); return;
}

void f_733f38(void) {
  LOAD_REGS();
L_733f38: /* 733f38: push 0x9f9530 */
  { uint32_t v = 0x9f9530u; esp -= 4; W32(esp, v); }
/* 733f3d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 733f42: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x733f48u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 733f48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733f4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733f4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733f4f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x733f54u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_733f54: guest_badaddr(0x733f54); return;
}

void f_733f90(void) {
  LOAD_REGS();
L_733f90: /* 733f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 733f91: mov ebp, esp */
  ebp = esp;
/* 733f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 733f95: push 0x9c53b0 */
  { uint32_t v = 0x9c53b0u; esp -= 4; W32(esp, v); }
/* 733f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 733fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 733fa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 733fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 733fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733fad: mov esi, ecx */
  esi = ecx;
/* 733faf: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 733fb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 733fb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733fb5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 733fb8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 733fbf: jle 0x733ff8 */
  if ((zf || sf != of)) goto L_733ff8;
L_733fc1: /* 733fc1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 733fc4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 733fc6: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x733fc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 733fc9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 733fcc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 733fce: mov edi, eax */
  edi = eax;
/* 733fd0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 733fd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733fd4: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x733fd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 733fd7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 733fda: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 733fdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733fde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 733fdf: call 0x6cb73a */
  esp -= 4; W32(esp, 0x733fe4u); SPILL(); f_6cb73a(); if (g_unwind) return; RELOAD();
/* 733fe4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 733fe7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 733fea: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 733fec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 733fef: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 733ff2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 733ff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 733ff5: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x733ff8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_733ff8: /* 733ff8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 733ffb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733ffc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733ffd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734004: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734005: mov esp, ebp */
  esp = ebp;
/* 734007: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734008: ret  */
  esp += 4; SPILL(); return;
}

void f_734009(void) {
  LOAD_REGS();
L_734009: /* 734009: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 73400c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734011: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 734014: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734015: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 734018: call 0x99caf8 */
  esp -= 4; W32(esp, 0x73401du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_73401d(); return;
}

void f_73401d(void) {
  LOAD_REGS();
L_73401d: /* 73401d: push 0x9f956c */
  { uint32_t v = 0x9f956cu; esp -= 4; W32(esp, v); }
/* 734022: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 734027: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x73402du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 73402d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734030: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734032: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734034: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734039u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734039: guest_badaddr(0x734039); return;
}

void f_734070(void) {
  LOAD_REGS();
L_734070: /* 734070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734071: mov ebp, esp */
  ebp = esp;
/* 734073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734075: push 0x9c53c0 */
  { uint32_t v = 0x9c53c0u; esp -= 4; W32(esp, v); }
/* 73407a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734088: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73408b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73408c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73408d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 734090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734091: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 734094: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734097: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 734099: xor ebx, ebx */
  ebx = 0;
/* 73409b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73409c: mov ecx, edi */
  ecx = edi;
/* 73409e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7340a1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7340a7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7340a7: mov ecx, esi */
  ecx = esi;
/* 7340a9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7340afu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7340af: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7340b1: je 0x73412a */
  if (zf) goto L_73412a;
L_7340b3: /* 7340b3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7340b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7340b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7340b8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7340beu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7340be: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7340c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7340c4: xor eax, eax */
  eax = 0;
L_7340c6: /* 7340c6: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7340c9: jge 0x7340ce */
  if ((sf == of)) goto L_7340ce;
L_7340cb: /* 7340cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7340cc: jmp 0x7340c6 */
  goto L_7340c6;
L_7340ce: /* 7340ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7340cf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7340d1: mov ecx, edi */
  ecx = edi;
/* 7340d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7340d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7340d9: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7340dc: mov ebx, dword ptr [0xcfa354] */
  ebx = R32((uint32_t)(0xcfa354u));
L_7340e2: /* 7340e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7340e5: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7340e8: jge 0x73416f */
  if ((sf == of)) goto L_73416f;
L_7340ee: /* 7340ee: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7340f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7340f2: mov ecx, edi */
  ecx = edi;
/* 7340f4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7340fau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7340fa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7340fc: lea esi, [edx + eax*8] */
  esi = (uint32_t)(edx + eax*8);
/* 7340ff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 734102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734103: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734104: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x73410au); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 73410a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73410d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 734110: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734112: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734114: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734117: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73411a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73411b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73411c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x73411eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73411e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 734121: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734124: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 734125: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 734128: jmp 0x7340e2 */
  goto L_7340e2;
L_73412a: /* 73412a: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 73412d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73412e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73412f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734135u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734135: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_734138: /* 734138: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73413b: jge 0x73416f */
  if ((sf == of)) goto L_73416f;
L_73413d: /* 73413d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 73413f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 734142: lea esi, [edx + ebx*8] */
  esi = (uint32_t)(edx + ebx*8);
/* 734145: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734147: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x73414du); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 73414d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734150: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 734153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734154: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734155: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x73415bu); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 73415b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73415e: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 734161: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734163: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x734169u); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 734169: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73416c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 73416d: jmp 0x734138 */
  goto L_734138;
L_73416f: /* 73416f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 734172: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 734175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734177: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73417e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73417f: mov esp, ebp */
  esp = ebp;
/* 734181: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734182: ret  */
  esp += 4; SPILL(); return;
}

void f_734183(void) {
  LOAD_REGS();
L_734183: /* 734183: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 734186: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 73418b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 73418e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73418f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 734192: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734197u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_734197(); return;
}

void f_734197(void) {
  LOAD_REGS();
L_734197: /* 734197: push 0x9f9594 */
  { uint32_t v = 0x9f9594u; esp -= 4; W32(esp, v); }
/* 73419c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7341a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7341a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7341a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7341aa: xor ebx, ebx */
  ebx = 0;
/* 7341ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7341ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7341ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7341b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7341b3: guest_badaddr(0x7341b3); return;
}

void f_734220(void) {
  LOAD_REGS();
L_734220: /* 734220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734221: mov ebp, esp */
  ebp = esp;
/* 734223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734225: push 0x9c53d0 */
  { uint32_t v = 0x9c53d0u; esp -= 4; W32(esp, v); }
/* 73422a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734238: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73423b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73423c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73423d: mov esi, ecx */
  esi = ecx;
/* 73423f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734242: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 734244: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734245: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734248: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 73424f: jle 0x734288 */
  if ((zf || sf != of)) goto L_734288;
L_734251: /* 734251: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 734254: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 734256: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x734259u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734259: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73425c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73425e: mov edi, eax */
  edi = eax;
/* 734260: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734264: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734267u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734267: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 73426a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 73426d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73426e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73426f: call 0x6c66ef */
  esp -= 4; W32(esp, 0x734274u); SPILL(); f_6c66ef(); if (g_unwind) return; RELOAD();
/* 734274: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734277: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73427a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 73427c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73427f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 734282: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 734284: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734285: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734288u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_734288: /* 734288: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 73428b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73428c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73428d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734295: mov esp, ebp */
  esp = ebp;
/* 734297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734298: ret  */
  esp += 4; SPILL(); return;
}

void f_734299(void) {
  LOAD_REGS();
L_734299: /* 734299: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 73429c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7342a1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7342a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7342a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7342a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7342adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7342ad(); return;
}

void f_7342ad(void) {
  LOAD_REGS();
L_7342ad: /* 7342ad: push 0x9f95ac */
  { uint32_t v = 0x9f95acu; esp -= 4; W32(esp, v); }
/* 7342b2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7342b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7342bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7342bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7342c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7342c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7342c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7342c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7342c9: guest_badaddr(0x7342c9); return;
}

void f_734300(void) {
  LOAD_REGS();
L_734300: /* 734300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734301: mov ebp, esp */
  ebp = esp;
/* 734303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734305: push 0x9c53e0 */
  { uint32_t v = 0x9c53e0u; esp -= 4; W32(esp, v); }
/* 73430a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734318: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73431b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73431c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 73431f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734320: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 734323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734324: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734327: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734329: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73432a: mov ecx, esi */
  ecx = esi;
/* 73432c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 734333: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x734339u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 734339: mov ecx, ebx */
  ecx = ebx;
/* 73433b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x734341u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 734341: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 734343: je 0x734396 */
  if (zf) goto L_734396;
L_734345: /* 734345: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 734348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734349: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73434a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734350u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734350: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 734353: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734356: xor eax, eax */
  eax = 0;
L_734358: /* 734358: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73435b: jge 0x734360 */
  if ((sf == of)) goto L_734360;
L_73435d: /* 73435d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 73435e: jmp 0x734358 */
  goto L_734358;
L_734360: /* 734360: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734361: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734363: mov ecx, esi */
  ecx = esi;
/* 734365: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x73436bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 73436b: xor edi, edi */
  edi = 0;
/* 73436d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_734370: /* 734370: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734373: jge 0x7343c0 */
  if ((sf == of)) goto L_7343c0;
L_734375: /* 734375: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734377: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734379: mov ecx, esi */
  ecx = esi;
/* 73437b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734381u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734381: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 734383: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 734386: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 734389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73438a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73438b: call 0x6c11ae */
  esp -= 4; W32(esp, 0x734390u); SPILL(); f_6c11ae(); if (g_unwind) return; RELOAD();
/* 734390: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734393: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734394: jmp 0x734370 */
  goto L_734370;
L_734396: /* 734396: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 734399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73439a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73439b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7343a1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7343a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7343a4: xor edi, edi */
  edi = 0;
L_7343a6: /* 7343a6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7343a9: jge 0x7343c0 */
  if ((sf == of)) goto L_7343c0;
L_7343ab: /* 7343ab: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7343ad: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7343b0: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7343b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7343b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7343b5: call 0x6c11ae */
  esp -= 4; W32(esp, 0x7343bau); SPILL(); f_6c11ae(); if (g_unwind) return; RELOAD();
/* 7343ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7343bd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7343be: jmp 0x7343a6 */
  goto L_7343a6;
L_7343c0: /* 7343c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7343c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7343c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7343c5: mov eax, ebx */
  eax = ebx;
/* 7343c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7343ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7343cf: mov esp, ebp */
  esp = ebp;
/* 7343d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7343d2: ret  */
  esp += 4; SPILL(); return;
}

void f_7343d3(void) {
  LOAD_REGS();
L_7343d3: /* 7343d3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7343d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7343db: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7343de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7343df: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7343e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7343e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7343e7(); return;
}

void f_7343e7(void) {
  LOAD_REGS();
L_7343e7: /* 7343e7: push 0x9f95d4 */
  { uint32_t v = 0x9f95d4u; esp -= 4; W32(esp, v); }
/* 7343ec: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7343f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7343f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7343f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7343fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7343fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7343fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734403u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734403: guest_badaddr(0x734403); return;
}

void f_734460(void) {
  LOAD_REGS();
L_734460: /* 734460: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 734464: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734465: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734466: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73446a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73446b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73446c: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 73446f: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x734475u); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 734475: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734478: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73447b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73447c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73447d: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 734483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734484: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x734486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734486: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73448a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73448cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73448c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73448f: mov eax, edi */
  eax = edi;
/* 734491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734493: ret  */
  esp += 4; SPILL(); return;
}

void f_7344b0(void) {
  LOAD_REGS();
L_7344b0: /* 7344b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7344b1: mov ebp, esp */
  ebp = esp;
/* 7344b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7344b5: push 0x9c53f0 */
  { uint32_t v = 0x9c53f0u; esp -= 4; W32(esp, v); }
/* 7344ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7344c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7344c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7344c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7344cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7344cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7344cd: mov esi, ecx */
  esi = ecx;
/* 7344cf: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7344d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7344d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7344d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7344d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7344df: jle 0x734518 */
  if ((zf || sf != of)) goto L_734518;
L_7344e1: /* 7344e1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7344e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7344e6: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7344e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7344e9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7344ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7344ee: mov edi, eax */
  edi = eax;
/* 7344f0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7344f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7344f4: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7344f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7344f7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7344fa: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7344fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7344fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7344ff: call 0x6ca182 */
  esp -= 4; W32(esp, 0x734504u); SPILL(); f_6ca182(); if (g_unwind) return; RELOAD();
/* 734504: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734507: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73450a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 73450c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73450f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 734512: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 734514: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734515: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734518u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_734518: /* 734518: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 73451b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73451c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73451d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734524: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734525: mov esp, ebp */
  esp = ebp;
/* 734527: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734528: ret  */
  esp += 4; SPILL(); return;
}

void f_734529(void) {
  LOAD_REGS();
L_734529: /* 734529: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 73452c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734531: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 734534: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734535: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 734538: call 0x99caf8 */
  esp -= 4; W32(esp, 0x73453du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_73453d(); return;
}

void f_73453d(void) {
  LOAD_REGS();
L_73453d: /* 73453d: push 0x9f95ec */
  { uint32_t v = 0x9f95ecu; esp -= 4; W32(esp, v); }
/* 734542: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 734547: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x73454du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 73454d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734550: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734552: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734554: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734559u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734559: guest_badaddr(0x734559); return;
}

void f_734590(void) {
  LOAD_REGS();
L_734590: /* 734590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734591: mov ebp, esp */
  ebp = esp;
/* 734593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734595: push 0x9c5400 */
  { uint32_t v = 0x9c5400u; esp -= 4; W32(esp, v); }
/* 73459a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7345a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7345a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7345a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7345ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7345ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7345af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7345b0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7345b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7345b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7345b7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7345b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7345ba: mov ecx, esi */
  ecx = esi;
/* 7345bc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7345c3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7345c9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7345c9: mov ecx, ebx */
  ecx = ebx;
/* 7345cb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7345d1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7345d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7345d3: je 0x734623 */
  if (zf) goto L_734623;
L_7345d5: /* 7345d5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7345d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7345d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7345da: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7345e0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7345e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7345e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7345e6: xor eax, eax */
  eax = 0;
L_7345e8: /* 7345e8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7345eb: jge 0x7345f0 */
  if ((sf == of)) goto L_7345f0;
L_7345ed: /* 7345ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7345ee: jmp 0x7345e8 */
  goto L_7345e8;
L_7345f0: /* 7345f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7345f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7345f3: mov ecx, esi */
  ecx = esi;
/* 7345f5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7345fbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7345fb: xor edi, edi */
  edi = 0;
/* 7345fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_734600: /* 734600: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734603: jge 0x73464a */
  if ((sf == of)) goto L_73464a;
L_734605: /* 734605: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 734607: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734609: mov ecx, esi */
  ecx = esi;
/* 73460b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734611u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734611: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 734613: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 734616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734618: call 0x6c6b90 */
  esp -= 4; W32(esp, 0x73461du); SPILL(); f_6c6b90(); if (g_unwind) return; RELOAD();
/* 73461d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734620: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734621: jmp 0x734600 */
  goto L_734600;
L_734623: /* 734623: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 734626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734627: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734628: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x73462eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 73462e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734631: xor edi, edi */
  edi = 0;
L_734633: /* 734633: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734636: jge 0x73464a */
  if ((sf == of)) goto L_73464a;
L_734638: /* 734638: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 73463a: lea eax, [edx + edi*8] */
  eax = (uint32_t)(edx + edi*8);
/* 73463d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73463e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73463f: call 0x6c6b90 */
  esp -= 4; W32(esp, 0x734644u); SPILL(); f_6c6b90(); if (g_unwind) return; RELOAD();
/* 734644: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734647: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734648: jmp 0x734633 */
  goto L_734633;
L_73464a: /* 73464a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 73464d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73464e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73464f: mov eax, ebx */
  eax = ebx;
/* 734651: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734658: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734659: mov esp, ebp */
  esp = ebp;
/* 73465b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73465c: ret  */
  esp += 4; SPILL(); return;
}

void f_73465d(void) {
  LOAD_REGS();
L_73465d: /* 73465d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 734660: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734665: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 734668: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 734669: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 73466c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734671u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_734671(); return;
}

void f_734671(void) {
  LOAD_REGS();
L_734671: /* 734671: push 0x9f9614 */
  { uint32_t v = 0x9f9614u; esp -= 4; W32(esp, v); }
/* 734676: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 73467b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x734681u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 734681: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734686: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734688: call 0x99caf8 */
  esp -= 4; W32(esp, 0x73468du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_73468d: guest_badaddr(0x73468d); return;
}

void f_7346d0(void) {
  LOAD_REGS();
L_7346d0: /* 7346d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7346d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7346d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7346d6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7346da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7346db: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 7346e1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7346e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7346e5: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 7346e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7346e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7346ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7346eb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7346edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7346ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7346f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7346f1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7346f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7346f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7346f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7346f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7346f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7346f9: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7346fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7346fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7346fe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x734700u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734700: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734705: mov eax, ebx */
  eax = ebx;
/* 734707: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734708: ret  */
  esp += 4; SPILL(); return;
}

void f_734720(void) {
  LOAD_REGS();
L_734720: /* 734720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734722: push 0x9c5419 */
  { uint32_t v = 0x9c5419u; esp -= 4; W32(esp, v); }
/* 734727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73472d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73472e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734737: mov esi, ecx */
  esi = ecx;
/* 734739: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73473d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 734740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734741: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734743: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73474b: call 0x6c7847 */
  esp -= 4; W32(esp, 0x734750u); SPILL(); f_6c7847(); if (g_unwind) return; RELOAD();
/* 734750: mov ecx, esi */
  ecx = esi;
/* 734752: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73475a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x734760u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 734760: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 734764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734765: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73476c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73476f: ret  */
  esp += 4; SPILL(); return;
}

void f_734790(void) {
  LOAD_REGS();
L_734790: /* 734790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734793: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 734797: mov esi, ecx */
  esi = ecx;
/* 734799: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 73479b: je 0x7347e0 */
  if (zf) goto L_7347e0;
L_73479d: /* 73479d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7347a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7347a1: call 0x6c65e6 */
  esp -= 4; W32(esp, 0x7347a6u); SPILL(); f_6c65e6(); if (g_unwind) return; RELOAD();
/* 7347a6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7347a9: xor ebx, ebx */
  ebx = 0;
/* 7347ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7347ad: jle 0x7347e0 */
  if ((zf || sf != of)) goto L_7347e0;
L_7347af: /* 7347af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7347b0: xor ebp, ebp */
  ebp = 0;
L_7347b2: /* 7347b2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7347b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7347b6: mov ecx, esi */
  ecx = esi;
/* 7347b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7347beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7347be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7347c0: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7347c3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 7347c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7347c8: je 0x7347d4 */
  if (zf) goto L_7347d4;
L_7347ca: /* 7347ca: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7347cc: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7347ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7347cf: call 0x6c9034 */
  esp -= 4; W32(esp, 0x7347d4u); SPILL(); f_6c9034(); if (g_unwind) return; RELOAD();
L_7347d4: /* 7347d4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7347d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7347d8: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7347db: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7347dd: jl 0x7347b2 */
  if ((sf != of)) goto L_7347b2;
L_7347df: /* 7347df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7347e0: /* 7347e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7347e1: mov eax, esi */
  eax = esi;
/* 7347e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7347e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7347e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_734810(void) {
  LOAD_REGS();
L_734810: /* 734810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 734814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734815: mov esi, ecx */
  esi = ecx;
/* 734817: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 734819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73481a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 73481d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x734823u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 734823: xor eax, eax */
  eax = 0;
/* 734825: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 734828: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 73482b: mov dword ptr [esi], 0x9f9268 */
  W32((uint32_t)(esi), 0x9f9268u);
/* 734831: mov eax, esi */
  eax = esi;
/* 734833: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734834: ret 4 */
  esp += 8; SPILL(); return;
}

void f_734850(void) {
  LOAD_REGS();
L_734850: /* 734850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734851: mov ebp, esp */
  ebp = esp;
/* 734853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734855: push 0x9c5457 */
  { uint32_t v = 0x9c5457u; esp -= 4; W32(esp, v); }
/* 73485a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734868: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73486b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73486c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73486d: mov esi, ecx */
  esi = ecx;
/* 73486f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734870: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734873: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 734876: mov dword ptr [esi], 0x9f9268 */
  W32((uint32_t)(esi), 0x9f9268u);
/* 73487c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73487f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 734881: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 734888: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 73488c: je 0x734894 */
  if (zf) goto L_734894;
L_73488e: /* 73488e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 734890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734891: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x734894u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_734894: /* 734894: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 734897: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 73489e: call 0x6c279d */
  esp -= 4; W32(esp, 0x7348a3u); SPILL(); f_6c279d(); if (g_unwind) return; RELOAD();
/* 7348a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7348a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7348a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7348a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7348af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7348b0: mov esp, ebp */
  esp = ebp;
/* 7348b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7348b3: ret  */
  esp += 4; SPILL(); return;
}

void f_7348b4(void) {
  LOAD_REGS();
L_7348b4: /* 7348b4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7348b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7348bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7348bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7348c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7348c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7348c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7348c8(); return;
}

void f_7348c8(void) {
  LOAD_REGS();
L_7348c8: /* 7348c8: push 0x9f962c */
  { uint32_t v = 0x9f962cu; esp -= 4; W32(esp, v); }
/* 7348cd: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7348d2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7348d8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7348d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7348db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7348dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7348df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7348e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7348e4: guest_badaddr(0x7348e4); return;
}

void f_734920(void) {
  LOAD_REGS();
L_734920: /* 734920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734921: mov ebp, esp */
  ebp = esp;
/* 734923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734925: push 0x9c5470 */
  { uint32_t v = 0x9c5470u; esp -= 4; W32(esp, v); }
/* 73492a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734938: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73493b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73493c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73493d: mov esi, ecx */
  esi = ecx;
/* 73493f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734942: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 734944: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734945: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734948: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 73494f: jle 0x734988 */
  if ((zf || sf != of)) goto L_734988;
L_734951: /* 734951: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 734954: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 734956: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x734959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734959: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73495c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73495e: mov edi, eax */
  edi = eax;
/* 734960: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734964: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734967u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734967: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 73496a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 73496d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73496e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73496f: call 0x6c2b12 */
  esp -= 4; W32(esp, 0x734974u); SPILL(); f_6c2b12(); if (g_unwind) return; RELOAD();
/* 734974: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734977: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 73497a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 73497c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73497f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 734982: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 734984: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734985: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_734988: /* 734988: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 73498b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73498c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73498d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734994: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734995: mov esp, ebp */
  esp = ebp;
/* 734997: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734998: ret  */
  esp += 4; SPILL(); return;
}

void f_734999(void) {
  LOAD_REGS();
L_734999: /* 734999: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 73499c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7349a1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7349a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7349a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7349a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7349adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7349ad(); return;
}

void f_7349ad(void) {
  LOAD_REGS();
L_7349ad: /* 7349ad: push 0x9f9668 */
  { uint32_t v = 0x9f9668u; esp -= 4; W32(esp, v); }
/* 7349b2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7349b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7349bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7349bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7349c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7349c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7349c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7349c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7349c9: guest_badaddr(0x7349c9); return;
}

void f_734a00(void) {
  LOAD_REGS();
L_734a00: /* 734a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734a01: mov ebp, esp */
  ebp = esp;
/* 734a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734a05: push 0x9c5480 */
  { uint32_t v = 0x9c5480u; esp -= 4; W32(esp, v); }
/* 734a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734a18: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 734a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734a1c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 734a1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734a20: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 734a23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734a24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734a27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 734a29: xor edi, edi */
  edi = 0;
/* 734a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734a2c: mov ecx, esi */
  ecx = esi;
/* 734a2e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 734a31: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x734a37u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 734a37: mov ecx, ebx */
  ecx = ebx;
/* 734a39: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x734a3fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 734a3f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 734a41: je 0x734a9b */
  if (zf) goto L_734a9b;
L_734a43: /* 734a43: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 734a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734a48: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734a4eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734a4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 734a51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734a54: xor eax, eax */
  eax = 0;
L_734a56: /* 734a56: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734a59: jge 0x734a5e */
  if ((sf == of)) goto L_734a5e;
L_734a5b: /* 734a5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 734a5c: jmp 0x734a56 */
  goto L_734a56;
L_734a5e: /* 734a5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734a5f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 734a61: mov ecx, esi */
  ecx = esi;
/* 734a63: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x734a69u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 734a69: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 734a6c: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
L_734a72: /* 734a72: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 734a75: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734a78: jge 0x734ac8 */
  if ((sf == of)) goto L_734ac8;
L_734a7a: /* 734a7a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 734a7c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734a7e: mov ecx, esi */
  ecx = esi;
/* 734a80: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734a86u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734a86: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 734a88: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 734a8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734a8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734a8d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x734a8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734a8f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 734a92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734a95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 734a96: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 734a99: jmp 0x734a72 */
  goto L_734a72;
L_734a9b: /* 734a9b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 734a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734a9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734aa0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734aa6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734aa6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734aa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_734ab0: /* 734ab0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734ab3: jge 0x734ac8 */
  if ((sf == of)) goto L_734ac8;
L_734ab5: /* 734ab5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 734ab7: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 734aba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734abc: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x734ac2u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 734ac2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734ac5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734ac6: jmp 0x734ab0 */
  goto L_734ab0;
L_734ac8: /* 734ac8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 734acb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734acc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734acd: mov eax, ebx */
  eax = ebx;
/* 734acf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734ad6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734ad7: mov esp, ebp */
  esp = ebp;
/* 734ad9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734ada: ret  */
  esp += 4; SPILL(); return;
}

void f_734adb(void) {
  LOAD_REGS();
L_734adb: /* 734adb: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 734ade: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734ae3: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 734ae6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 734ae7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 734aea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734aefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_734aef(); return;
}

void f_734aef(void) {
  LOAD_REGS();
L_734aef: /* 734aef: push 0x9f9690 */
  { uint32_t v = 0x9f9690u; esp -= 4; W32(esp, v); }
/* 734af4: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 734af9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x734affu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 734aff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734b02: xor edi, edi */
  edi = 0;
/* 734b04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734b05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734b06: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734b0bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734b0b: guest_badaddr(0x734b0b); return;
}

void f_734b60(void) {
  LOAD_REGS();
L_734b60: /* 734b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734b61: mov ebp, esp */
  ebp = esp;
/* 734b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734b65: push 0x9c5490 */
  { uint32_t v = 0x9c5490u; esp -= 4; W32(esp, v); }
/* 734b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734b78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 734b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734b7d: mov esi, ecx */
  esi = ecx;
/* 734b7f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734b82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 734b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734b85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734b88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 734b8f: jle 0x734bc8 */
  if ((zf || sf != of)) goto L_734bc8;
L_734b91: /* 734b91: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 734b94: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 734b96: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x734b99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734b99: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 734b9c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 734b9e: mov edi, eax */
  edi = eax;
/* 734ba0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734ba4: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734ba7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 734baa: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 734bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734bae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 734baf: call 0x6c830f */
  esp -= 4; W32(esp, 0x734bb4u); SPILL(); f_6c830f(); if (g_unwind) return; RELOAD();
/* 734bb4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 734bb7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 734bba: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 734bbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734bbf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 734bc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 734bc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734bc5: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x734bc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_734bc8: /* 734bc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 734bcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734bcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734bcd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734bd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734bd5: mov esp, ebp */
  esp = ebp;
/* 734bd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_734bd9(void) {
  LOAD_REGS();
L_734bd9: /* 734bd9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 734bdc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734be1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 734be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734be5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 734be8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734bedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_734bed(); return;
}

void f_734bed(void) {
  LOAD_REGS();
L_734bed: /* 734bed: push 0x9f96a8 */
  { uint32_t v = 0x9f96a8u; esp -= 4; W32(esp, v); }
/* 734bf2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 734bf7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x734bfdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 734bfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734c02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734c04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734c09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734c09: guest_badaddr(0x734c09); return;
}

void f_734c40(void) {
  LOAD_REGS();
L_734c40: /* 734c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734c41: mov ebp, esp */
  ebp = esp;
/* 734c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734c45: push 0x9c54a0 */
  { uint32_t v = 0x9c54a0u; esp -= 4; W32(esp, v); }
/* 734c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734c58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 734c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734c5c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 734c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734c60: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 734c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734c64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 734c67: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734c69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734c6a: mov ecx, esi */
  ecx = esi;
/* 734c6c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 734c73: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x734c79u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 734c79: mov ecx, ebx */
  ecx = ebx;
/* 734c7b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x734c81u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 734c81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 734c83: je 0x734cd6 */
  if (zf) goto L_734cd6;
L_734c85: /* 734c85: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 734c88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734c89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734c8a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734c90u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734c90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 734c93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734c96: xor eax, eax */
  eax = 0;
L_734c98: /* 734c98: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734c9b: jge 0x734ca0 */
  if ((sf == of)) goto L_734ca0;
L_734c9d: /* 734c9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 734c9e: jmp 0x734c98 */
  goto L_734c98;
L_734ca0: /* 734ca0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734ca1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734ca3: mov ecx, esi */
  ecx = esi;
/* 734ca5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x734cabu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 734cab: xor edi, edi */
  edi = 0;
/* 734cad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_734cb0: /* 734cb0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734cb3: jge 0x734d00 */
  if ((sf == of)) goto L_734d00;
L_734cb5: /* 734cb5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 734cb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734cb9: mov ecx, esi */
  ecx = esi;
/* 734cbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734cc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734cc1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 734cc3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 734cc6: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 734cc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734cca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734ccb: call 0x6c6f87 */
  esp -= 4; W32(esp, 0x734cd0u); SPILL(); f_6c6f87(); if (g_unwind) return; RELOAD();
/* 734cd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734cd3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734cd4: jmp 0x734cb0 */
  goto L_734cb0;
L_734cd6: /* 734cd6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 734cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734cda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734cdb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x734ce1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 734ce1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734ce4: xor edi, edi */
  edi = 0;
L_734ce6: /* 734ce6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734ce9: jge 0x734d00 */
  if ((sf == of)) goto L_734d00;
L_734ceb: /* 734ceb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 734ced: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 734cf0: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 734cf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 734cf4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734cf5: call 0x6c6f87 */
  esp -= 4; W32(esp, 0x734cfau); SPILL(); f_6c6f87(); if (g_unwind) return; RELOAD();
/* 734cfa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734cfd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 734cfe: jmp 0x734ce6 */
  goto L_734ce6;
L_734d00: /* 734d00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 734d03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734d04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734d05: mov eax, ebx */
  eax = ebx;
/* 734d07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734d0f: mov esp, ebp */
  esp = ebp;
/* 734d11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 734d12: ret  */
  esp += 4; SPILL(); return;
}

void f_734d13(void) {
  LOAD_REGS();
L_734d13: /* 734d13: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 734d16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 734d1b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 734d1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734d1f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 734d22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734d27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_734d27(); return;
}

void f_734d27(void) {
  LOAD_REGS();
L_734d27: /* 734d27: push 0x9f96d0 */
  { uint32_t v = 0x9f96d0u; esp -= 4; W32(esp, v); }
/* 734d2c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 734d31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x734d37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 734d37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734d3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734d3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734d3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x734d43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_734d43: guest_badaddr(0x734d43); return;
}

void f_734da0(void) {
  LOAD_REGS();
L_734da0: /* 734da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734da1: mov ebx, dword ptr [0xcfa354] */
  ebx = R32((uint32_t)(0xcfa354u));
/* 734da7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734da8: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 734dac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734dad: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 734db1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 734db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734db5: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 734db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734db9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734dba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734dbb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734dbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734dbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734dc1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734dc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734dc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734dc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734dc7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734dc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734dc9: mov ebx, dword ptr [0xcfa1b8] */
  ebx = R32((uint32_t)(0xcfa1b8u));
/* 734dcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734dd2: lea edx, [esi + 7] */
  edx = (uint32_t)(esi + 0x7u);
/* 734dd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 734dd6: lea eax, [esi + 6] */
  eax = (uint32_t)(esi + 0x6u);
/* 734dd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734ddb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734dddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734ddd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734de1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x734de3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 734de3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 734de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734de7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734de8: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x734deeu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 734dee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734df1: mov eax, edi */
  eax = edi;
/* 734df3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734df4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734df5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734df6: ret  */
  esp += 4; SPILL(); return;
}

void f_734e20(void) {
  LOAD_REGS();
L_734e20: /* 734e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734e22: push 0x9c54b9 */
  { uint32_t v = 0x9c54b9u; esp -= 4; W32(esp, v); }
/* 734e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734e37: mov esi, ecx */
  esi = ecx;
/* 734e39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 734e3d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 734e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734e41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734e43: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 734e4b: call 0x6c253b */
  esp -= 4; W32(esp, 0x734e50u); SPILL(); f_6c253b(); if (g_unwind) return; RELOAD();
/* 734e50: mov ecx, esi */
  ecx = esi;
/* 734e52: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 734e5a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x734e60u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 734e60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 734e64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734e65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734e6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734e6f: ret  */
  esp += 4; SPILL(); return;
}

void f_734e90(void) {
  LOAD_REGS();
L_734e90: /* 734e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734e92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734e93: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 734e97: mov esi, ecx */
  esi = ecx;
/* 734e99: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 734e9b: je 0x734edf */
  if (zf) goto L_734edf;
L_734e9d: /* 734e9d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 734ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734ea1: call 0x6c4c50 */
  esp -= 4; W32(esp, 0x734ea6u); SPILL(); f_6c4c50(); if (g_unwind) return; RELOAD();
/* 734ea6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 734ea9: xor ebx, ebx */
  ebx = 0;
/* 734eab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 734ead: jle 0x734edf */
  if ((zf || sf != of)) goto L_734edf;
L_734eaf: /* 734eaf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734eb0: xor ebp, ebp */
  ebp = 0;
L_734eb2: /* 734eb2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 734eb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734eb6: mov ecx, esi */
  ecx = esi;
/* 734eb8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734ebeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734ebe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 734ec0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 734ec3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 734ec5: je 0x734ed3 */
  if (zf) goto L_734ed3;
L_734ec7: /* 734ec7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 734ec9: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 734ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734ecc: mov ecx, eax */
  ecx = eax;
/* 734ece: call 0x6c7905 */
  esp -= 4; W32(esp, 0x734ed3u); SPILL(); f_6c7905(); if (g_unwind) return; RELOAD();
L_734ed3: /* 734ed3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 734ed6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 734ed7: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 734eda: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734edc: jl 0x734eb2 */
  if ((sf != of)) goto L_734eb2;
L_734ede: /* 734ede: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_734edf: /* 734edf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734ee0: mov eax, esi */
  eax = esi;
/* 734ee2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734ee3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734ee4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_734f10(void) {
  LOAD_REGS();
L_734f10: /* 734f10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734f12: push 0x9c54d9 */
  { uint32_t v = 0x9c54d9u; esp -= 4; W32(esp, v); }
/* 734f17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734f1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734f26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 734f27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734f28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 734f29: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 734f2d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 734f30: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 734f32: mov esi, ecx */
  esi = ecx;
/* 734f34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734f35: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 734f39: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x734f3fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 734f3f: xor ebx, ebx */
  ebx = 0;
/* 734f41: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 734f44: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734f47: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 734f4b: jle 0x734f7b */
  if ((zf || sf != of)) goto L_734f7b;
L_734f4d: /* 734f4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 734f4e: xor ebp, ebp */
  ebp = 0;
L_734f50: /* 734f50: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 734f52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 734f54: mov ecx, esi */
  ecx = esi;
/* 734f56: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x734f5cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 734f5c: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 734f5f: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 734f61: je 0x734f6f */
  if (zf) goto L_734f6f;
L_734f63: /* 734f63: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 734f65: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 734f67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734f68: mov ecx, eax */
  ecx = eax;
/* 734f6a: call 0x6ca4c5 */
  esp -= 4; W32(esp, 0x734f6fu); SPILL(); f_6ca4c5(); if (g_unwind) return; RELOAD();
L_734f6f: /* 734f6f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 734f72: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 734f73: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 734f76: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 734f78: jl 0x734f50 */
  if ((sf != of)) goto L_734f50;
L_734f7a: /* 734f7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_734f7b: /* 734f7b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 734f7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 734f80: mov eax, esi */
  eax = esi;
/* 734f82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 734f83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 734f84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 734f8b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 734f8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_734fd0(void) {
  LOAD_REGS();
L_734fd0: /* 734fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 734fd2: push 0x9c54f9 */
  { uint32_t v = 0x9c54f9u; esp -= 4; W32(esp, v); }
/* 734fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 734fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 734fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 734fe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 734fe7: mov esi, ecx */
  esi = ecx;
/* 734fe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 734fed: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 734ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 734ff1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 734ff3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 734ffb: call 0x6cab8c */
  esp -= 4; W32(esp, 0x735000u); SPILL(); f_6cab8c(); if (g_unwind) return; RELOAD();
/* 735000: mov ecx, esi */
  ecx = esi;
/* 735002: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73500a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x735010u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 735010: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 735014: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735015: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73501c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73501f: ret  */
  esp += 4; SPILL(); return;
}

void f_735040(void) {
  LOAD_REGS();
L_735040: /* 735040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 735041: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735042: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735043: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 735047: mov esi, ecx */
  esi = ecx;
/* 735049: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 73504b: je 0x735090 */
  if (zf) goto L_735090;
L_73504d: /* 73504d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 735050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735051: call 0x6c7c0c */
  esp -= 4; W32(esp, 0x735056u); SPILL(); f_6c7c0c(); if (g_unwind) return; RELOAD();
/* 735056: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 735059: xor ebx, ebx */
  ebx = 0;
/* 73505b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 73505d: jle 0x735090 */
  if ((zf || sf != of)) goto L_735090;
L_73505f: /* 73505f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 735060: xor ebp, ebp */
  ebp = 0;
L_735062: /* 735062: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 735064: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 735066: mov ecx, esi */
  ecx = esi;
/* 735068: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73506eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73506e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 735070: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 735073: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 735076: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735078: je 0x735084 */
  if (zf) goto L_735084;
L_73507a: /* 73507a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 73507c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73507e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73507f: call 0x6ca8d5 */
  esp -= 4; W32(esp, 0x735084u); SPILL(); f_6ca8d5(); if (g_unwind) return; RELOAD();
L_735084: /* 735084: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 735087: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 735088: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 73508b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73508d: jl 0x735062 */
  if ((sf != of)) goto L_735062;
L_73508f: /* 73508f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_735090: /* 735090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735091: mov eax, esi */
  eax = esi;
/* 735093: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735094: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735095: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7350c0(void) {
  LOAD_REGS();
L_7350c0: /* 7350c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7350c2: push 0x9c5519 */
  { uint32_t v = 0x9c5519u; esp -= 4; W32(esp, v); }
/* 7350c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7350cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7350ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7350d5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7350d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7350d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7350da: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7350de: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7350e1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7350e3: mov ebx, ecx */
  ebx = ecx;
/* 7350e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7350e6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7350ea: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7350f0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7350f0: xor eax, eax */
  eax = 0;
/* 7350f2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7350f5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7350f8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7350fc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 735100: jle 0x735165 */
  if ((zf || sf != of)) goto L_735165;
L_735102: /* 735102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735103: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 735107: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_735108: /* 735108: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 73510a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 73510c: mov ecx, ebx */
  ecx = ebx;
/* 73510e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x735114u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 735114: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 735117: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 735119: mov edi, eax */
  edi = eax;
/* 73511b: je 0x735148 */
  if (zf) goto L_735148;
L_73511d: /* 73511d: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 735120: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 735124: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 735127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735128: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 73512b: mov dword ptr [edi], 0x9f8570 */
  W32((uint32_t)(edi), 0x9f8570u);
/* 735131: call 0x6c46dd */
  esp -= 4; W32(esp, 0x735136u); SPILL(); f_6c46dd(); if (g_unwind) return; RELOAD();
/* 735136: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 735139: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 73513c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 73513f: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 735142: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 735145: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
L_735148: /* 735148: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 73514c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 735150: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 735153: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 735154: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 735157: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 735159: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 73515d: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 735161: jl 0x735108 */
  if ((sf != of)) goto L_735108;
L_735163: /* 735163: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735164: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_735165: /* 735165: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 735169: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73516a: mov eax, ebx */
  eax = ebx;
/* 73516c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73516d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 735174: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 735177: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7351b0(void) {
  LOAD_REGS();
L_7351b0: /* 7351b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7351b2: push 0x9c5539 */
  { uint32_t v = 0x9c5539u; esp -= 4; W32(esp, v); }
/* 7351b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7351bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7351be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7351c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7351c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7351c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7351ca: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7351ce: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7351d1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7351d3: mov ebx, ecx */
  ebx = ecx;
/* 7351d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7351d6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7351da: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7351e0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7351e0: xor eax, eax */
  eax = 0;
/* 7351e2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7351e5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7351e8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7351ec: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7351f0: jle 0x73525d */
  if ((zf || sf != of)) goto L_73525d;
L_7351f2: /* 7351f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7351f3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7351f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_7351f8: /* 7351f8: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7351fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7351fc: mov ecx, ebx */
  ecx = ebx;
/* 7351fe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x735204u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 735204: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 735206: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 735209: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 73520b: mov edi, eax */
  edi = eax;
/* 73520d: je 0x735240 */
  if (zf) goto L_735240;
L_73520f: /* 73520f: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 735212: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 735216: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 735219: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73521a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 73521d: mov dword ptr [edi], 0x9f94a4 */
  W32((uint32_t)(edi), 0x9f94a4u);
/* 735223: call 0x6c4ead */
  esp -= 4; W32(esp, 0x735228u); SPILL(); f_6c4ead(); if (g_unwind) return; RELOAD();
/* 735228: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 73522b: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 73522e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 735231: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 735234: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 735237: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 73523a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 73523d: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
L_735240: /* 735240: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 735244: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 735248: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 73524b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 73524c: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 73524f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 735251: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 735255: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 735259: jl 0x7351f8 */
  if ((sf != of)) goto L_7351f8;
L_73525b: /* 73525b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73525c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_73525d: /* 73525d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 735261: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 735262: mov eax, ebx */
  eax = ebx;
/* 735264: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73526c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73526f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7352c0(void) {
  LOAD_REGS();
L_7352c0: /* 7352c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7352c1: mov ebp, esp */
  ebp = esp;
/* 7352c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7352c5: push 0x9c5577 */
  { uint32_t v = 0x9c5577u; esp -= 4; W32(esp, v); }
/* 7352ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7352d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7352d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7352d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7352db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7352dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7352dd: mov esi, ecx */
  esi = ecx;
/* 7352df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7352e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7352e3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7352e6: mov dword ptr [esi], 0x9f94d0 */
  W32((uint32_t)(esi), 0x9f94d0u);
/* 7352ec: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7352ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7352f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7352f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7352fc: je 0x735304 */
  if (zf) goto L_735304;
L_7352fe: /* 7352fe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 735300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735301: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x735304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_735304: /* 735304: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 735307: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 73530e: call 0x6c14ec */
  esp -= 4; W32(esp, 0x735313u); SPILL(); f_6c14ec(); if (g_unwind) return; RELOAD();
/* 735313: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 735316: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735317: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735318: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73531f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735320: mov esp, ebp */
  esp = ebp;
/* 735322: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 735323: ret  */
  esp += 4; SPILL(); return;
}

void f_735324(void) {
  LOAD_REGS();
L_735324: /* 735324: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 735327: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 73532c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 73532f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 735333: call 0x99caf8 */
  esp -= 4; W32(esp, 0x735338u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_735338(); return;
}

void f_735338(void) {
  LOAD_REGS();
L_735338: /* 735338: push 0x9f96e8 */
  { uint32_t v = 0x9f96e8u; esp -= 4; W32(esp, v); }
/* 73533d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 735342: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x735348u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 735348: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73534b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73534d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73534f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x735354u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_735354: guest_badaddr(0x735354); return;
}

void f_735390(void) {
  LOAD_REGS();
L_735390: /* 735390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 735391: mov ebp, esp */
  ebp = esp;
/* 735393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 735395: push 0x9c5590 */
  { uint32_t v = 0x9c5590u; esp -= 4; W32(esp, v); }
/* 73539a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7353a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7353a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7353a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7353ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7353ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7353ad: mov esi, ecx */
  esi = ecx;
/* 7353af: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7353b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7353b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7353b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7353b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7353bf: jle 0x7353f8 */
  if ((zf || sf != of)) goto L_7353f8;
L_7353c1: /* 7353c1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7353c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7353c6: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7353c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7353c9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7353cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7353ce: mov edi, eax */
  edi = eax;
/* 7353d0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7353d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7353d4: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7353d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7353d7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7353da: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7353dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7353de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7353df: call 0x6cc347 */
  esp -= 4; W32(esp, 0x7353e4u); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 7353e4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7353e7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7353ea: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7353ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7353ef: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7353f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7353f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7353f5: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7353f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7353f8: /* 7353f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7353fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7353fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7353fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 735404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735405: mov esp, ebp */
  esp = ebp;
/* 735407: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 735408: ret  */
  esp += 4; SPILL(); return;
}

void f_735409(void) {
  LOAD_REGS();
L_735409: /* 735409: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 73540c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 735411: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 735414: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735415: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 735418: call 0x99caf8 */
  esp -= 4; W32(esp, 0x73541du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_73541d(); return;
}

void f_73541d(void) {
  LOAD_REGS();
L_73541d: /* 73541d: push 0x9f9724 */
  { uint32_t v = 0x9f9724u; esp -= 4; W32(esp, v); }
/* 735422: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 735427: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x73542du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 73542d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 735430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 735432: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 735434: call 0x99caf8 */
  esp -= 4; W32(esp, 0x735439u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_735439: guest_badaddr(0x735439); return;
}

void f_735470(void) {
  LOAD_REGS();
L_735470: /* 735470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 735471: mov ebp, esp */
  ebp = esp;
/* 735473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 735475: push 0x9c55a0 */
  { uint32_t v = 0x9c55a0u; esp -= 4; W32(esp, v); }
/* 73547a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 735480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 735488: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73548b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73548c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73548d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 735490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735491: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 735494: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 735497: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 73549c: xor ebx, ebx */
  ebx = 0;
/* 73549e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73549f: mov ecx, esi */
  ecx = esi;
/* 7354a1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7354a4: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7354aau); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7354aa: mov ecx, edi */
  ecx = edi;
/* 7354ac: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7354b2u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7354b2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7354b4: je 0x73556f */
  if (zf) goto L_73556f;
L_7354ba: /* 7354ba: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7354bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7354be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7354bf: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7354c5u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7354c5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7354c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7354cb: xor eax, eax */
  eax = 0;
/* 7354cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7354d0: /* 7354d0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7354d3: jge 0x7354d8 */
  if ((sf == of)) goto L_7354d8;
L_7354d5: /* 7354d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7354d6: jmp 0x7354d0 */
  goto L_7354d0;
L_7354d8: /* 7354d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7354d9: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 7354de: mov ecx, esi */
  ecx = esi;
/* 7354e0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7354e6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7354e6: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7354e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7354f0: /* 7354f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7354f3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7354f6: jge 0x7355a3 */
  if ((sf == of)) goto L_7355a3;
L_7354fc: /* 7354fc: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 735501: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 735503: mov ecx, esi */
  ecx = esi;
/* 735505: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73550bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73550b: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 735511: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 735513: mov edi, eax */
  edi = eax;
/* 735515: je 0x735554 */
  if (zf) goto L_735554;
L_735517: /* 735517: mov ebx, dword ptr [0xcfa1e0] */
  ebx = R32((uint32_t)(0xcfa1e0u));
/* 73551d: mov dword ptr [ebp - 0x1c], 3 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3u);
/* 735524: mov esi, edi */
  esi = edi;
L_735526: /* 735526: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 735529: js 0x735538 */
  if (sf) goto L_735538;
L_73552b: /* 73552b: mov ecx, esi */
  ecx = esi;
/* 73552d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x73552fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73552f: mov eax, 0xc */
  eax = 0xcu;
/* 735534: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 735536: jmp 0x735526 */
  goto L_735526;
L_735538: /* 735538: mov edx, 3 */
  edx = 0x3u;
/* 73553d: mov ecx, 4 */
  ecx = 0x4u;
/* 735542: lea eax, [edi + 0xe4] */
  eax = (uint32_t)(edi + 0xe4u);
L_735548: /* 735548: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 735549: js 0x73554f */
  if (sf) goto L_73554f;
L_73554b: /* 73554b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73554d: jmp 0x735548 */
  goto L_735548;
L_73554f: /* 73554f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 735552: jmp 0x735556 */
  goto L_735556;
L_735554: /* 735554: xor edi, edi */
  edi = 0;
L_735556: /* 735556: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 735559: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73555a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73555b: call 0x6c2e37 */
  esp -= 4; W32(esp, 0x735560u); SPILL(); f_6c2e37(); if (g_unwind) return; RELOAD();
/* 735560: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 735563: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 735566: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 735569: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 73556a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 73556d: jmp 0x7354f0 */
  goto L_7354f0;
L_73556f: /* 73556f: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 735572: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 735573: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735574: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x73557au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 73557a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73557d: xor edi, edi */
  edi = 0;
/* 73557f: nop  */
L_735580: /* 735580: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 735582: jge 0x7355a0 */
  if ((sf == of)) goto L_7355a0;
L_735584: /* 735584: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 735586: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 735589: mov eax, edi */
  eax = edi;
/* 73558b: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 735591: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 735593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735594: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735595: call 0x6c2e37 */
  esp -= 4; W32(esp, 0x73559au); SPILL(); f_6c2e37(); if (g_unwind) return; RELOAD();
/* 73559a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73559d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 73559e: jmp 0x735580 */
  goto L_735580;
L_7355a0: /* 7355a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7355a3: /* 7355a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7355a6: mov eax, edi */
  eax = edi;
/* 7355a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7355a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7355aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7355b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7355b2: mov esp, ebp */
  esp = ebp;
/* 7355b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7355b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7355b6(void) {
  LOAD_REGS();
L_7355b6: /* 7355b6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7355b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7355be: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7355c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7355c2: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7355c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7355cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7355ca(); return;
}

void f_7355ca(void) {
  LOAD_REGS();
L_7355ca: /* 7355ca: push 0x9f974c */
  { uint32_t v = 0x9f974cu; esp -= 4; W32(esp, v); }
/* 7355cf: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7355d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7355dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7355da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7355dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7355df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7355e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7355e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7355e6: guest_badaddr(0x7355e6); return;
}

void f_735650(void) {
  LOAD_REGS();
L_735650: /* 735650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 735653: mov esi, ecx */
  esi = ecx;
/* 735655: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73565bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73565b: mov eax, esi */
  eax = esi;
/* 73565d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73565e: ret  */
  esp += 4; SPILL(); return;
}

void f_735670(void) {
  LOAD_REGS();
L_735670: /* 735670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 735672: push 0x9c55b9 */
  { uint32_t v = 0x9c55b9u; esp -= 4; W32(esp, v); }
/* 735677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73567d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73567e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 735685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735686: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 735687: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735688: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735689: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 73568d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 735690: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 735692: mov esi, ecx */
  esi = ecx;
/* 735694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735695: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 735699: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x73569fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 73569f: xor ebx, ebx */
  ebx = 0;
/* 7356a1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7356a4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7356a7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7356ab: jle 0x7356db */
  if ((zf || sf != of)) goto L_7356db;
L_7356ad: /* 7356ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7356ae: xor ebp, ebp */
  ebp = 0;
L_7356b0: /* 7356b0: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7356b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7356b4: mov ecx, esi */
  ecx = esi;
/* 7356b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7356bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7356bc: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 7356bf: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7356c1: je 0x7356cf */
  if (zf) goto L_7356cf;
L_7356c3: /* 7356c3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7356c5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7356c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7356c8: mov ecx, eax */
  ecx = eax;
/* 7356ca: call 0x6c7fdb */
  esp -= 4; W32(esp, 0x7356cfu); SPILL(); f_6c7fdb(); if (g_unwind) return; RELOAD();
L_7356cf: /* 7356cf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7356d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7356d3: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7356d6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7356d8: jl 0x7356b0 */
  if ((sf != of)) goto L_7356b0;
L_7356da: /* 7356da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7356db: /* 7356db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7356df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7356e0: mov eax, esi */
  eax = esi;
/* 7356e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7356e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7356e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7356eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7356ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735730(void) {
  LOAD_REGS();
L_735730: /* 735730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735731: mov esi, ecx */
  esi = ecx;
/* 735733: call 0x6c4273 */
  esp -= 4; W32(esp, 0x735738u); SPILL(); f_6c4273(); if (g_unwind) return; RELOAD();
/* 735738: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73573d: je 0x73574c */
  if (zf) goto L_73574c;
L_73573f: /* 73573f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 735744: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 735746: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 735748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735749: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73574cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73574c: /* 73574c: mov eax, esi */
  eax = esi;
/* 73574e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73574f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735770(void) {
  LOAD_REGS();
L_735770: /* 735770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 735772: push 0x9c55db */
  { uint32_t v = 0x9c55dbu; esp -= 4; W32(esp, v); }
/* 735777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73577d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73577e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 735785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735787: mov esi, ecx */
  esi = ecx;
/* 735789: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73578a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73578e: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 735791: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 735794: mov cx, word ptr [edi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 735798: mov word ptr [esi + 2], cx */
  W16((uint32_t)(esi + 0x2u), (ecx & 0xffffu));
/* 73579c: mov dx, word ptr [edi + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x4u))) & 0xffffu);
/* 7357a0: mov word ptr [esi + 4], dx */
  W16((uint32_t)(esi + 0x4u), (edx & 0xffffu));
/* 7357a4: mov ax, word ptr [edi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x6u))) & 0xffffu);
/* 7357a8: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 7357ac: mov cx, word ptr [edi + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8u))) & 0xffffu);
/* 7357b0: mov word ptr [esi + 8], cx */
  W16((uint32_t)(esi + 0x8u), (ecx & 0xffffu));
/* 7357b4: mov dx, word ptr [edi + 0xa] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xau))) & 0xffffu);
/* 7357b8: mov word ptr [esi + 0xa], dx */
  W16((uint32_t)(esi + 0xau), (edx & 0xffffu));
/* 7357bc: mov ax, word ptr [edi + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xcu))) & 0xffffu);
/* 7357c0: mov word ptr [esi + 0xc], ax */
  W16((uint32_t)(esi + 0xcu), (eax & 0xffffu));
/* 7357c4: mov cx, word ptr [edi + 0xe] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xeu))) & 0xffffu);
/* 7357c8: mov word ptr [esi + 0xe], cx */
  W16((uint32_t)(esi + 0xeu), (ecx & 0xffffu));
/* 7357cc: mov dx, word ptr [edi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x10u))) & 0xffffu);
/* 7357d0: mov word ptr [esi + 0x10], dx */
  W16((uint32_t)(esi + 0x10u), (edx & 0xffffu));
/* 7357d4: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 7357d7: mov dword ptr [esi + 0x14], 0x9f90e4 */
  W32((uint32_t)(esi + 0x14u), 0x9f90e4u);
/* 7357de: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7357e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7357e2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7357e5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7357e9: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7357ec: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x7357f1u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 7357f1: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 7357f4: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 7357f7: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7357fa: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 7357fd: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 735800: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 735803: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 735806: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 735809: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 73580c: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 73580f: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 735812: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 735815: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* 735818: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735819: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 73581c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 735824: mov dword ptr [esi + 0x40], 0x9f7c44 */
  W32((uint32_t)(esi + 0x40u), 0x9f7c44u);
/* 73582b: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x735831u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 735831: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 735834: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 735837: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 73583a: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 73583d: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 735840: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 735844: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 735847: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735848: mov eax, esi */
  eax = esi;
/* 73584a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73584b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 735852: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 735855: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7358a0(void) {
  LOAD_REGS();
L_7358a0: /* 7358a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7358a1: mov esi, ecx */
  esi = ecx;
/* 7358a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7358a4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7358a8: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7358ab: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 7358ae: mov cx, word ptr [edi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 7358b2: mov word ptr [esi + 2], cx */
  W16((uint32_t)(esi + 0x2u), (ecx & 0xffffu));
/* 7358b6: mov dx, word ptr [edi + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x4u))) & 0xffffu);
/* 7358ba: mov word ptr [esi + 4], dx */
  W16((uint32_t)(esi + 0x4u), (edx & 0xffffu));
/* 7358be: mov ax, word ptr [edi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x6u))) & 0xffffu);
/* 7358c2: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 7358c6: mov cx, word ptr [edi + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8u))) & 0xffffu);
/* 7358ca: mov word ptr [esi + 8], cx */
  W16((uint32_t)(esi + 0x8u), (ecx & 0xffffu));
/* 7358ce: mov dx, word ptr [edi + 0xa] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xau))) & 0xffffu);
/* 7358d2: mov word ptr [esi + 0xa], dx */
  W16((uint32_t)(esi + 0xau), (edx & 0xffffu));
/* 7358d6: mov ax, word ptr [edi + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xcu))) & 0xffffu);
/* 7358da: mov word ptr [esi + 0xc], ax */
  W16((uint32_t)(esi + 0xcu), (eax & 0xffffu));
/* 7358de: mov cx, word ptr [edi + 0xe] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xeu))) & 0xffffu);
/* 7358e2: mov word ptr [esi + 0xe], cx */
  W16((uint32_t)(esi + 0xeu), (ecx & 0xffffu));
/* 7358e6: mov dx, word ptr [edi + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x10u))) & 0xffffu);
/* 7358ea: mov word ptr [esi + 0x10], dx */
  W16((uint32_t)(esi + 0x10u), (edx & 0xffffu));
/* 7358ee: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7358f1: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 7358f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7358f5: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7358f8: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7358fb: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x735900u); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 735900: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 735903: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 735906: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 735909: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 73590c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 73590f: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 735912: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 735915: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 735918: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 73591b: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 73591e: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 735921: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* 735924: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 735927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735928: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 73592b: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x735931u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 735931: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 735934: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 735937: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 73593a: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 73593d: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 735940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735941: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 735944: mov eax, esi */
  eax = esi;
/* 735946: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735947: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735980(void) {
  LOAD_REGS();
L_735980: /* 735980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735981: mov esi, ecx */
  esi = ecx;
/* 735983: call 0x6ccf86 */
  esp -= 4; W32(esp, 0x735988u); SPILL(); f_6ccf86(); if (g_unwind) return; RELOAD();
/* 735988: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73598d: je 0x73599c */
  if (zf) goto L_73599c;
L_73598f: /* 73598f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 735994: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 735996: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 735998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735999: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73599cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73599c: /* 73599c: mov eax, esi */
  eax = esi;
/* 73599e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73599f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7359c0(void) {
  LOAD_REGS();
L_7359c0: /* 7359c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7359c2: push 0x9c5673 */
  { uint32_t v = 0x9c5673u; esp -= 4; W32(esp, v); }
/* 7359c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7359cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7359ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7359d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7359d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7359d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7359d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7359d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7359da: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 7359de: mov esi, ecx */
  esi = ecx;
/* 7359e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7359e1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7359e5: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x7359eau); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 7359ea: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 7359ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7359ee: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7359f1: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7359f9: call 0x6c8143 */
  esp -= 4; W32(esp, 0x7359feu); SPILL(); f_6c8143(); if (g_unwind) return; RELOAD();
/* 7359fe: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 735a01: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 735a04: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 735a07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735a08: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 735a0b: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 735a10: call 0x6cb2bc */
  esp -= 4; W32(esp, 0x735a15u); SPILL(); f_6cb2bc(); if (g_unwind) return; RELOAD();
/* 735a15: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 735a18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735a19: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 735a1c: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 735a21: call 0x6cb2bc */
  esp -= 4; W32(esp, 0x735a26u); SPILL(); f_6cb2bc(); if (g_unwind) return; RELOAD();
/* 735a26: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 735a29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735a2a: mov ebx, 0x9f7c44 */
  ebx = 0x9f7c44u;
/* 735a2f: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 735a32: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 735a37: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 735a3a: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x735a40u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 735a40: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 735a43: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 735a46: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 735a49: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 735a4c: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 735a4f: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 735a52: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 735a55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735a56: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 735a59: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 735a5e: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* 735a61: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x735a67u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 735a67: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 735a6a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 735a6d: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 735a70: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 735a73: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 735a76: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 735a79: mov dword ptr [esi + 0x6c], 0x9f91d0 */
  W32((uint32_t)(esi + 0x6cu), 0x9f91d0u);
/* 735a80: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 735a83: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 735a86: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 735a89: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 735a8c: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 735a8f: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 735a92: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 735a95: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 735a98: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 735a9e: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 735aa4: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 735aaa: lea ecx, [edi + 0x8c] */
  ecx = (uint32_t)(edi + 0x8cu);
/* 735ab0: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 735ab6: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 735abc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735abd: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 735ac3: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 735ac8: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 735ace: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x735ad3u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 735ad3: lea edx, [edi + 0x98] */
  edx = (uint32_t)(edi + 0x98u);
/* 735ad9: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 735ade: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735adf: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 735ae5: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x735aebu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 735aeb: lea ebx, [edi + 0xa4] */
  ebx = (uint32_t)(edi + 0xa4u);
/* 735af1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735af3: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 735af8: je 0x735aff */
  if (zf) goto L_735aff;
L_735afa: /* 735afa: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735afd: jmp 0x735b01 */
  goto L_735b01;
L_735aff: /* 735aff: xor eax, eax */
  eax = 0;
L_735b01: /* 735b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735b02: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 735b08: call 0x6c1b59 */
  esp -= 4; W32(esp, 0x735b0du); SPILL(); f_6c1b59(); if (g_unwind) return; RELOAD();
/* 735b0d: mov ebp, 0x9f401c */
  ebp = 0x9f401cu;
/* 735b12: mov dword ptr [esi + 0xa4], ebp */
  W32((uint32_t)(esi + 0xa4u), ebp);
/* 735b18: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 735b1b: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 735b21: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 735b24: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* 735b2a: mov dword ptr [esi + 0xa4], 0x9f92a4 */
  W32((uint32_t)(esi + 0xa4u), 0x9f92a4u);
/* 735b34: lea ebx, [edi + 0xbc] */
  ebx = (uint32_t)(edi + 0xbcu);
/* 735b3a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735b3c: mov byte ptr [esp + 0x1c], 8 */
  W8((uint32_t)(esp + 0x1cu), 0x8u);
/* 735b41: je 0x735b48 */
  if (zf) goto L_735b48;
L_735b43: /* 735b43: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735b46: jmp 0x735b4a */
  goto L_735b4a;
L_735b48: /* 735b48: xor eax, eax */
  eax = 0;
L_735b4a: /* 735b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735b4b: lea ecx, [esi + 0xc8] */
  ecx = (uint32_t)(esi + 0xc8u);
/* 735b51: call 0x6c2a81 */
  esp -= 4; W32(esp, 0x735b56u); SPILL(); f_6c2a81(); if (g_unwind) return; RELOAD();
/* 735b56: mov dword ptr [esi + 0xbc], ebp */
  W32((uint32_t)(esi + 0xbcu), ebp);
/* 735b5c: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 735b5f: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 735b65: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 735b68: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 735b6e: mov dword ptr [esi + 0xbc], 0x9f8368 */
  W32((uint32_t)(esi + 0xbcu), 0x9f8368u);
/* 735b78: lea ebx, [edi + 0xd4] */
  ebx = (uint32_t)(edi + 0xd4u);
/* 735b7e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735b80: mov byte ptr [esp + 0x1c], 9 */
  W8((uint32_t)(esp + 0x1cu), 0x9u);
/* 735b85: je 0x735b8c */
  if (zf) goto L_735b8c;
L_735b87: /* 735b87: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735b8a: jmp 0x735b8e */
  goto L_735b8e;
L_735b8c: /* 735b8c: xor eax, eax */
  eax = 0;
L_735b8e: /* 735b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735b8f: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 735b95: call 0x6ca02e */
  esp -= 4; W32(esp, 0x735b9au); SPILL(); f_6ca02e(); if (g_unwind) return; RELOAD();
/* 735b9a: mov dword ptr [esi + 0xd4], ebp */
  W32((uint32_t)(esi + 0xd4u), ebp);
/* 735ba0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 735ba3: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 735ba9: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 735bac: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 735bb2: mov dword ptr [esi + 0xd4], 0x9f859c */
  W32((uint32_t)(esi + 0xd4u), 0x9f859cu);
/* 735bbc: lea ebx, [edi + 0xec] */
  ebx = (uint32_t)(edi + 0xecu);
/* 735bc2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735bc4: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 735bc9: je 0x735bd0 */
  if (zf) goto L_735bd0;
L_735bcb: /* 735bcb: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735bce: jmp 0x735bd2 */
  goto L_735bd2;
L_735bd0: /* 735bd0: xor eax, eax */
  eax = 0;
L_735bd2: /* 735bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735bd3: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 735bd9: call 0x6cbbae */
  esp -= 4; W32(esp, 0x735bdeu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 735bde: mov dword ptr [esi + 0xec], ebp */
  W32((uint32_t)(esi + 0xecu), ebp);
/* 735be4: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 735be7: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 735bed: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 735bf0: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 735bf6: mov dword ptr [esi + 0xec], 0x9f83e0 */
  W32((uint32_t)(esi + 0xecu), 0x9f83e0u);
/* 735c00: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 735c06: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* 735c0c: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 735c12: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 735c18: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* 735c1e: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* 735c24: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 735c2a: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* 735c30: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 735c36: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 735c3c: mov ecx, dword ptr [edi + 0x118] */
  ecx = R32((uint32_t)(edi + 0x118u));
/* 735c42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735c43: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 735c49: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 735c4d: mov eax, esi */
  eax = esi;
/* 735c4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735c50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 735c51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735c52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 735c59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 735c5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735d10(void) {
  LOAD_REGS();
L_735d10: /* 735d10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 735d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735d12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735d13: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 735d17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 735d18: mov esi, ecx */
  esi = ecx;
/* 735d1a: call 0x6cca95 */
  esp -= 4; W32(esp, 0x735d1fu); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 735d1f: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 735d22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735d23: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 735d26: call 0x6c9ecb */
  esp -= 4; W32(esp, 0x735d2bu); SPILL(); f_6c9ecb(); if (g_unwind) return; RELOAD();
/* 735d2b: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 735d2e: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 735d31: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 735d34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735d35: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 735d38: call 0x6c3aee */
  esp -= 4; W32(esp, 0x735d3du); SPILL(); f_6c3aee(); if (g_unwind) return; RELOAD();
/* 735d3d: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 735d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735d41: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 735d44: call 0x6c3aee */
  esp -= 4; W32(esp, 0x735d49u); SPILL(); f_6c3aee(); if (g_unwind) return; RELOAD();
/* 735d49: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 735d4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735d4d: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 735d50: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x735d56u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 735d56: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 735d59: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 735d5c: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 735d5f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 735d62: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 735d65: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 735d68: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 735d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735d6c: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 735d6f: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x735d75u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 735d75: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 735d78: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 735d7b: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 735d7e: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 735d81: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 735d84: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 735d87: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 735d8a: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 735d8d: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 735d90: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 735d93: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 735d96: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 735d99: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 735d9c: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 735d9f: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 735da5: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 735dab: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 735db1: lea ecx, [edi + 0x8c] */
  ecx = (uint32_t)(edi + 0x8cu);
/* 735db7: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 735dbd: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 735dc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 735dc4: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 735dca: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 735dd0: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x735dd5u); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 735dd5: lea edx, [edi + 0x98] */
  edx = (uint32_t)(edi + 0x98u);
/* 735ddb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 735ddc: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 735de2: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x735de8u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 735de8: lea ebx, [edi + 0xa4] */
  ebx = (uint32_t)(edi + 0xa4u);
/* 735dee: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735df0: je 0x735df7 */
  if (zf) goto L_735df7;
L_735df2: /* 735df2: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735df5: jmp 0x735df9 */
  goto L_735df9;
L_735df7: /* 735df7: xor eax, eax */
  eax = 0;
L_735df9: /* 735df9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735dfa: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 735e00: call 0x6c1fff */
  esp -= 4; W32(esp, 0x735e05u); SPILL(); f_6c1fff(); if (g_unwind) return; RELOAD();
/* 735e05: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 735e08: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 735e0e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 735e11: lea ebx, [edi + 0xbc] */
  ebx = (uint32_t)(edi + 0xbcu);
/* 735e17: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735e19: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* 735e1f: je 0x735e26 */
  if (zf) goto L_735e26;
L_735e21: /* 735e21: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735e24: jmp 0x735e28 */
  goto L_735e28;
L_735e26: /* 735e26: xor eax, eax */
  eax = 0;
L_735e28: /* 735e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735e29: lea ecx, [esi + 0xc8] */
  ecx = (uint32_t)(esi + 0xc8u);
/* 735e2f: call 0x6c9606 */
  esp -= 4; W32(esp, 0x735e34u); SPILL(); f_6c9606(); if (g_unwind) return; RELOAD();
/* 735e34: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 735e37: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 735e3d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 735e40: lea ebx, [edi + 0xd4] */
  ebx = (uint32_t)(edi + 0xd4u);
/* 735e46: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735e48: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 735e4e: je 0x735e55 */
  if (zf) goto L_735e55;
L_735e50: /* 735e50: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735e53: jmp 0x735e57 */
  goto L_735e57;
L_735e55: /* 735e55: xor eax, eax */
  eax = 0;
L_735e57: /* 735e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735e58: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 735e5e: call 0x6c93ef */
  esp -= 4; W32(esp, 0x735e63u); SPILL(); f_6c93ef(); if (g_unwind) return; RELOAD();
/* 735e63: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 735e66: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 735e6c: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 735e6f: lea ebx, [edi + 0xec] */
  ebx = (uint32_t)(edi + 0xecu);
/* 735e75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 735e77: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 735e7d: je 0x735e84 */
  if (zf) goto L_735e84;
L_735e7f: /* 735e7f: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 735e82: jmp 0x735e86 */
  goto L_735e86;
L_735e84: /* 735e84: xor eax, eax */
  eax = 0;
L_735e86: /* 735e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735e87: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 735e8d: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x735e92u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 735e92: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 735e95: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 735e9b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 735e9e: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 735ea4: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 735eaa: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* 735eb0: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 735eb6: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 735ebc: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* 735ec2: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* 735ec8: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 735ece: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* 735ed4: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 735eda: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 735ee0: mov ecx, dword ptr [edi + 0x118] */
  ecx = R32((uint32_t)(edi + 0x118u));
/* 735ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 735ee7: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 735eed: mov eax, esi */
  eax = esi;
/* 735eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735ef0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 735ef1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735f80(void) {
  LOAD_REGS();
L_735f80: /* 735f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 735f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735f85: mov esi, ecx */
  esi = ecx;
/* 735f87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 735f89: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 735f8b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 735f8e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 735f91: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 735f94: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 735f97: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 735f9a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 735f9d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 735fa0: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 735fa3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 735fa6: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 735fa9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 735fac: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 735faf: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 735fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 735fb3: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 735fb6: call 0x6c727f */
  esp -= 4; W32(esp, 0x735fbbu); SPILL(); f_6c727f(); if (g_unwind) return; RELOAD();
/* 735fbb: mov eax, esi */
  eax = esi;
/* 735fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 735fbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_735ff0(void) {
  LOAD_REGS();
L_735ff0: /* 735ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 735ff1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 735ff5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 735ff7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 735ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 735ff9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 735fff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736000: mov ebp, ecx */
  ebp = ecx;
/* 736002: jge 0x736018 */
  if ((sf == of)) goto L_736018;
L_736004: /* 736004: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736009: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73600e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736013: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736015: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736018: /* 736018: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73601b: jle 0x736031 */
  if ((zf || sf != of)) goto L_736031;
L_73601d: /* 73601d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736022: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736027: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73602c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73602eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73602e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736031: /* 736031: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736035: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736038: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73603b: jle 0x736051 */
  if ((zf || sf != of)) goto L_736051;
L_73603d: /* 73603d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736042: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736047: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73604c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73604eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73604e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736051: /* 736051: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736053: jge 0x736070 */
  if ((sf == of)) goto L_736070;
L_736055: /* 736055: mov esi, ebx */
  esi = ebx;
/* 736057: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 73605a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73605c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_736060: /* 736060: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736063: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736065: call 0x6c3eb3 */
  esp -= 4; W32(esp, 0x73606au); SPILL(); f_6c3eb3(); if (g_unwind) return; RELOAD();
/* 73606a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73606d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73606e: jne 0x736060 */
  if (!zf) goto L_736060;
L_736070: /* 736070: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736074: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 736076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736077: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736078: mov ecx, ebp */
  ecx = ebp;
/* 73607a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736080u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736080: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736082: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736083: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736084: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7360c0(void) {
  LOAD_REGS();
L_7360c0: /* 7360c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7360c1: mov esi, ecx */
  esi = ecx;
/* 7360c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7360c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7360c7: xor edi, edi */
  edi = 0;
/* 7360c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7360cb: jle 0x7360e5 */
  if ((zf || sf != of)) goto L_7360e5;
L_7360cd: /* 7360cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7360ce: xor ebx, ebx */
  ebx = 0;
L_7360d0: /* 7360d0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7360d2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7360d4: call 0x6c3eb3 */
  esp -= 4; W32(esp, 0x7360d9u); SPILL(); f_6c3eb3(); if (g_unwind) return; RELOAD();
/* 7360d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7360dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7360dd: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7360e0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7360e2: jl 0x7360d0 */
  if ((sf != of)) goto L_7360d0;
L_7360e4: /* 7360e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7360e5: /* 7360e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7360e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7360ea: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7360ec: mov ecx, esi */
  ecx = esi;
/* 7360ee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7360f4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7360f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7360f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7360f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736110(void) {
  LOAD_REGS();
L_736110: /* 736110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736111: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736115: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736117: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736119: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73611f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736120: mov ebp, ecx */
  ebp = ecx;
/* 736122: jge 0x736138 */
  if ((sf == of)) goto L_736138;
L_736124: /* 736124: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736129: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73612e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736133: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736135: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736138: /* 736138: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73613b: jle 0x736151 */
  if ((zf || sf != of)) goto L_736151;
L_73613d: /* 73613d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736142: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736147: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73614c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73614eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73614e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736151: /* 736151: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736155: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736158: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73615b: jle 0x736171 */
  if ((zf || sf != of)) goto L_736171;
L_73615d: /* 73615d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736162: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736167: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73616c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73616eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73616e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736171: /* 736171: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736173: jge 0x736190 */
  if ((sf == of)) goto L_736190;
L_736175: /* 736175: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 736178: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 73617b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73617d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_736180: /* 736180: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736183: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736185: call 0x6c12b2 */
  esp -= 4; W32(esp, 0x73618au); SPILL(); f_6c12b2(); if (g_unwind) return; RELOAD();
/* 73618a: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73618d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73618e: jne 0x736180 */
  if (!zf) goto L_736180;
L_736190: /* 736190: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736194: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 736196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736197: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736198: mov ecx, ebp */
  ecx = ebp;
/* 73619a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7361a0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7361a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7361a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7361a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7361a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7361a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7361e0(void) {
  LOAD_REGS();
L_7361e0: /* 7361e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7361e1: mov esi, ecx */
  esi = ecx;
/* 7361e3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7361e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7361e7: xor edi, edi */
  edi = 0;
/* 7361e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7361eb: jle 0x736205 */
  if ((zf || sf != of)) goto L_736205;
L_7361ed: /* 7361ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7361ee: xor ebx, ebx */
  ebx = 0;
L_7361f0: /* 7361f0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7361f2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7361f4: call 0x6c12b2 */
  esp -= 4; W32(esp, 0x7361f9u); SPILL(); f_6c12b2(); if (g_unwind) return; RELOAD();
/* 7361f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7361fc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7361fd: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736200: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736202: jl 0x7361f0 */
  if ((sf != of)) goto L_7361f0;
L_736204: /* 736204: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736205: /* 736205: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73620a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 73620c: mov ecx, esi */
  ecx = esi;
/* 73620e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736214u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736214: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736215: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736216: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736230(void) {
  LOAD_REGS();
L_736230: /* 736230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736231: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736235: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736237: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736239: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73623f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736240: mov ebp, ecx */
  ebp = ecx;
/* 736242: jge 0x736258 */
  if ((sf == of)) goto L_736258;
L_736244: /* 736244: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736249: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73624e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736253: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736255: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736258: /* 736258: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73625b: jle 0x736271 */
  if ((zf || sf != of)) goto L_736271;
L_73625d: /* 73625d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736262: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736267: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73626c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73626eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73626e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736271: /* 736271: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736275: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736278: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73627b: jle 0x736291 */
  if ((zf || sf != of)) goto L_736291;
L_73627d: /* 73627d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736282: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736287: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73628c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73628eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73628e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736291: /* 736291: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736293: jge 0x7362b0 */
  if ((sf == of)) goto L_7362b0;
L_736295: /* 736295: mov esi, ebx */
  esi = ebx;
/* 736297: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 73629a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73629c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7362a0: /* 7362a0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7362a3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7362a5: call 0x6c1622 */
  esp -= 4; W32(esp, 0x7362aau); SPILL(); f_6c1622(); if (g_unwind) return; RELOAD();
/* 7362aa: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7362ad: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7362ae: jne 0x7362a0 */
  if (!zf) goto L_7362a0;
L_7362b0: /* 7362b0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7362b4: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7362b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7362b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7362b8: mov ecx, ebp */
  ecx = ebp;
/* 7362ba: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7362c0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7362c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7362c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7362c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7362c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7362c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736300(void) {
  LOAD_REGS();
L_736300: /* 736300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736301: mov esi, ecx */
  esi = ecx;
/* 736303: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736306: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736307: xor edi, edi */
  edi = 0;
/* 736309: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 73630b: jle 0x736325 */
  if ((zf || sf != of)) goto L_736325;
L_73630d: /* 73630d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73630e: xor ebx, ebx */
  ebx = 0;
L_736310: /* 736310: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736312: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736314: call 0x6c1622 */
  esp -= 4; W32(esp, 0x736319u); SPILL(); f_6c1622(); if (g_unwind) return; RELOAD();
/* 736319: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 73631c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 73631d: add ebx, 0x34 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736320: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736322: jl 0x736310 */
  if ((sf != of)) goto L_736310;
L_736324: /* 736324: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736325: /* 736325: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73632a: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 73632c: mov ecx, esi */
  ecx = esi;
/* 73632e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736334u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736334: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736335: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736336: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736350(void) {
  LOAD_REGS();
L_736350: /* 736350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736351: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736355: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736357: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736359: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73635f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736360: mov ebp, ecx */
  ebp = ecx;
/* 736362: jge 0x736378 */
  if ((sf == of)) goto L_736378;
L_736364: /* 736364: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736369: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73636e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736373: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736375u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736375: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736378: /* 736378: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73637b: jle 0x736391 */
  if ((zf || sf != of)) goto L_736391;
L_73637d: /* 73637d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736382: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736387: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73638c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73638eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73638e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736391: /* 736391: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736395: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736398: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73639b: jle 0x7363b1 */
  if ((zf || sf != of)) goto L_7363b1;
L_73639d: /* 73639d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7363a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7363a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7363ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7363aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7363ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7363b1: /* 7363b1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7363b3: jge 0x7363d0 */
  if ((sf == of)) goto L_7363d0;
L_7363b5: /* 7363b5: mov esi, ebx */
  esi = ebx;
/* 7363b7: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7363ba: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7363bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7363c0: /* 7363c0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7363c3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7363c5: call 0x6c8b20 */
  esp -= 4; W32(esp, 0x7363cau); SPILL(); f_6c8b20(); if (g_unwind) return; RELOAD();
/* 7363ca: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7363cd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7363ce: jne 0x7363c0 */
  if (!zf) goto L_7363c0;
L_7363d0: /* 7363d0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7363d4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7363d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7363d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7363d8: mov ecx, ebp */
  ecx = ebp;
/* 7363da: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7363e0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7363e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7363e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7363e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7363e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7363e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736369(void) {
  LOAD_REGS();
L_736369: /* 736369: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73636e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736373: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736375u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736375: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 736378: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73637b: jle 0x736391 */
  if ((zf || sf != of)) goto L_736391;
L_73637d: /* 73637d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736382: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736387: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73638c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73638eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73638e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736391: /* 736391: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736395: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736398: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73639b: jle 0x7363b1 */
  if ((zf || sf != of)) goto L_7363b1;
L_73639d: /* 73639d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7363a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7363a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7363ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7363aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7363ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7363b1: /* 7363b1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7363b3: jge 0x7363d0 */
  if ((sf == of)) goto L_7363d0;
L_7363b5: /* 7363b5: mov esi, ebx */
  esi = ebx;
/* 7363b7: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7363ba: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7363bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7363c0: /* 7363c0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7363c3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7363c5: call 0x6c8b20 */
  esp -= 4; W32(esp, 0x7363cau); SPILL(); f_6c8b20(); if (g_unwind) return; RELOAD();
/* 7363ca: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7363cd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7363ce: jne 0x7363c0 */
  if (!zf) goto L_7363c0;
L_7363d0: /* 7363d0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7363d4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7363d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7363d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7363d8: mov ecx, ebp */
  ecx = ebp;
/* 7363da: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7363e0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7363e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7363e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7363e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7363e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7363e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736420(void) {
  LOAD_REGS();
L_736420: /* 736420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736421: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736425: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736427: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736429: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73642f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736430: mov ebp, ecx */
  ebp = ecx;
/* 736432: jge 0x736448 */
  if ((sf == of)) goto L_736448;
L_736434: /* 736434: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736439: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73643e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736443: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736445: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736448: /* 736448: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73644b: jle 0x736461 */
  if ((zf || sf != of)) goto L_736461;
L_73644d: /* 73644d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736452: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736457: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73645c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73645eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73645e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736461: /* 736461: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736465: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736468: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73646b: jle 0x736481 */
  if ((zf || sf != of)) goto L_736481;
L_73646d: /* 73646d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736472: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736477: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73647c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73647eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73647e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736481: /* 736481: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736483: jge 0x7364a0 */
  if ((sf == of)) goto L_7364a0;
L_736485: /* 736485: mov esi, ebx */
  esi = ebx;
/* 736487: imul esi, esi, 0x6c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x6cu);
  esi = (uint32_t)r;
  }
/* 73648a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73648c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_736490: /* 736490: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736493: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736495: call 0x6caeac */
  esp -= 4; W32(esp, 0x73649au); SPILL(); f_6caeac(); if (g_unwind) return; RELOAD();
/* 73649a: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73649d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73649e: jne 0x736490 */
  if (!zf) goto L_736490;
L_7364a0: /* 7364a0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7364a4: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7364a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7364a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7364a8: mov ecx, ebp */
  ecx = ebp;
/* 7364aa: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7364b0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7364b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7364b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7364b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7364b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7364b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7364f0(void) {
  LOAD_REGS();
L_7364f0: /* 7364f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7364f1: mov esi, ecx */
  esi = ecx;
/* 7364f3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7364f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7364f7: xor edi, edi */
  edi = 0;
/* 7364f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7364fb: jle 0x736515 */
  if ((zf || sf != of)) goto L_736515;
L_7364fd: /* 7364fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7364fe: xor ebx, ebx */
  ebx = 0;
L_736500: /* 736500: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736502: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736504: call 0x6caeac */
  esp -= 4; W32(esp, 0x736509u); SPILL(); f_6caeac(); if (g_unwind) return; RELOAD();
/* 736509: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 73650c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 73650d: add ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736510: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736512: jl 0x736500 */
  if ((sf != of)) goto L_736500;
L_736514: /* 736514: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736515: /* 736515: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73651a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 73651c: mov ecx, esi */
  ecx = esi;
/* 73651e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736524u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736524: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736526: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736540(void) {
  LOAD_REGS();
L_736540: /* 736540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736541: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736545: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736547: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736549: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73654f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736550: mov ebp, ecx */
  ebp = ecx;
/* 736552: jge 0x736568 */
  if ((sf == of)) goto L_736568;
L_736554: /* 736554: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736559: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 73655e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736563: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736565u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736565: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736568: /* 736568: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73656b: jle 0x736581 */
  if ((zf || sf != of)) goto L_736581;
L_73656d: /* 73656d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736572: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736577: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73657c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73657eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73657e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736581: /* 736581: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736585: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736588: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73658b: jle 0x7365a1 */
  if ((zf || sf != of)) goto L_7365a1;
L_73658d: /* 73658d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736592: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736597: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73659c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73659eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73659e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7365a1: /* 7365a1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7365a3: jge 0x7365c0 */
  if ((sf == of)) goto L_7365c0;
L_7365a5: /* 7365a5: mov esi, ebx */
  esi = ebx;
/* 7365a7: imul esi, esi, 0x58 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x58u);
  esi = (uint32_t)r;
  }
/* 7365aa: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7365ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7365b0: /* 7365b0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7365b3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7365b5: call 0x6c4273 */
  esp -= 4; W32(esp, 0x7365bau); SPILL(); f_6c4273(); if (g_unwind) return; RELOAD();
/* 7365ba: add esi, 0x58 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7365bd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7365be: jne 0x7365b0 */
  if (!zf) goto L_7365b0;
L_7365c0: /* 7365c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7365c4: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7365c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7365c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7365c8: mov ecx, ebp */
  ecx = ebp;
/* 7365ca: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7365d0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7365d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7365d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7365d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7365d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7365d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_73656d(void) {
  LOAD_REGS();
L_73656d: /* 73656d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736572: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736577: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73657c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73657eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73657e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 736581: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736585: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736588: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73658b: jle 0x7365a1 */
  if ((zf || sf != of)) goto L_7365a1;
L_73658d: /* 73658d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736592: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736597: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73659c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73659eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73659e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7365a1: /* 7365a1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7365a3: jge 0x7365c0 */
  if ((sf == of)) goto L_7365c0;
L_7365a5: /* 7365a5: mov esi, ebx */
  esi = ebx;
/* 7365a7: imul esi, esi, 0x58 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x58u);
  esi = (uint32_t)r;
  }
/* 7365aa: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7365ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7365b0: /* 7365b0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7365b3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7365b5: call 0x6c4273 */
  esp -= 4; W32(esp, 0x7365bau); SPILL(); f_6c4273(); if (g_unwind) return; RELOAD();
/* 7365ba: add esi, 0x58 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7365bd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7365be: jne 0x7365b0 */
  if (!zf) goto L_7365b0;
L_7365c0: /* 7365c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7365c4: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7365c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7365c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7365c8: mov ecx, ebp */
  ecx = ebp;
/* 7365ca: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7365d0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7365d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7365d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7365d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7365d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7365d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736610(void) {
  LOAD_REGS();
L_736610: /* 736610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736612: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 736616: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736617: mov esi, ecx */
  esi = ecx;
/* 736619: call 0x6c824c */
  esp -= 4; W32(esp, 0x73661eu); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 73661e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 736621: mov ecx, esi */
  ecx = esi;
/* 736623: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 736626: call 0x6cb398 */
  esp -= 4; W32(esp, 0x73662bu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 73662b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73662c: mov eax, esi */
  eax = esi;
/* 73662e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73662f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736650(void) {
  LOAD_REGS();
L_736650: /* 736650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 736652: push 0x9c56a9 */
  { uint32_t v = 0x9c56a9u; esp -= 4; W32(esp, v); }
/* 736657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73665d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73665e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 736665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736667: mov esi, ecx */
  esi = ecx;
/* 736669: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73666d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 736673: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73667b: call 0x6c8049 */
  esp -= 4; W32(esp, 0x736680u); SPILL(); f_6c8049(); if (g_unwind) return; RELOAD();
/* 736680: mov ecx, esi */
  ecx = esi;
/* 736682: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73668a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x736690u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 736690: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 736694: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736695: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73669c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73669f: ret  */
  esp += 4; SPILL(); return;
}

void f_7366c0(void) {
  LOAD_REGS();
L_7366c0: /* 7366c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7366c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7366c5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7366c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7366c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7366c9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7366cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7366d0: mov ebp, ecx */
  ebp = ecx;
/* 7366d2: jge 0x7366e8 */
  if ((sf == of)) goto L_7366e8;
L_7366d4: /* 7366d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7366d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7366de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7366e3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7366e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7366e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7366e8: /* 7366e8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7366eb: jle 0x736701 */
  if ((zf || sf != of)) goto L_736701;
L_7366ed: /* 7366ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7366f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7366f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7366fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7366feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7366fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736701: /* 736701: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736705: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736708: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73670b: jle 0x736721 */
  if ((zf || sf != of)) goto L_736721;
L_73670d: /* 73670d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736712: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736717: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73671c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73671eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73671e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736721: /* 736721: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736723: jge 0x736740 */
  if ((sf == of)) goto L_736740;
L_736725: /* 736725: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 736728: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 73672b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73672d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_736730: /* 736730: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736733: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736735: call 0x6ccf86 */
  esp -= 4; W32(esp, 0x73673au); SPILL(); f_6ccf86(); if (g_unwind) return; RELOAD();
/* 73673a: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73673d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73673e: jne 0x736730 */
  if (!zf) goto L_736730;
L_736740: /* 736740: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736744: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 736746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736747: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736748: mov ecx, ebp */
  ecx = ebp;
/* 73674a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736750u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736750: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736752: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736753: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736754: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736790(void) {
  LOAD_REGS();
L_736790: /* 736790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736791: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736795: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736797: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736799: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 73679f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7367a0: mov ebp, ecx */
  ebp = ecx;
/* 7367a2: jge 0x7367b8 */
  if ((sf == of)) goto L_7367b8;
L_7367a4: /* 7367a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7367a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7367ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7367b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7367b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7367b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7367b8: /* 7367b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7367bb: jle 0x7367d1 */
  if ((zf || sf != of)) goto L_7367d1;
L_7367bd: /* 7367bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7367c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7367c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7367cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7367ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7367ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7367d1: /* 7367d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7367d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7367d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7367db: jle 0x7367f1 */
  if ((zf || sf != of)) goto L_7367f1;
L_7367dd: /* 7367dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7367e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7367e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7367ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7367eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7367ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7367f1: /* 7367f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7367f3: jge 0x736810 */
  if ((sf == of)) goto L_736810;
L_7367f5: /* 7367f5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7367f8: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7367fb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7367fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_736800: /* 736800: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736803: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736805: call 0x6c1f41 */
  esp -= 4; W32(esp, 0x73680au); SPILL(); f_6c1f41(); if (g_unwind) return; RELOAD();
/* 73680a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73680d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73680e: jne 0x736800 */
  if (!zf) goto L_736800;
L_736810: /* 736810: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736814: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 736816: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736817: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736818: mov ecx, ebp */
  ecx = ebp;
/* 73681a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736820u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736820: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736822: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736823: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736824: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736860(void) {
  LOAD_REGS();
L_736860: /* 736860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736861: mov esi, ecx */
  esi = ecx;
/* 736863: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736867: xor edi, edi */
  edi = 0;
/* 736869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 73686b: jle 0x736885 */
  if ((zf || sf != of)) goto L_736885;
L_73686d: /* 73686d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73686e: xor ebx, ebx */
  ebx = 0;
L_736870: /* 736870: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736872: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736874: call 0x6c1f41 */
  esp -= 4; W32(esp, 0x736879u); SPILL(); f_6c1f41(); if (g_unwind) return; RELOAD();
/* 736879: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 73687c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 73687d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736880: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736882: jl 0x736870 */
  if ((sf != of)) goto L_736870;
L_736884: /* 736884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736885: /* 736885: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73688a: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 73688c: mov ecx, esi */
  ecx = esi;
/* 73688e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736894u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736896: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736872(void) {
  LOAD_REGS();
  goto L_736872;
L_736870: /* 736870: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_736872: /* 736872: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736874: call 0x6c1f41 */
  esp -= 4; W32(esp, 0x736879u); SPILL(); f_6c1f41(); if (g_unwind) return; RELOAD();
/* 736879: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 73687c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 73687d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736880: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736882: jl 0x736870 */
  if ((sf != of)) goto L_736870;
L_736884: /* 736884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736885: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73688a: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 73688c: mov ecx, esi */
  ecx = esi;
/* 73688e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736894u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736896: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7368b0(void) {
  LOAD_REGS();
L_7368b0: /* 7368b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7368b2: push 0x9c56c9 */
  { uint32_t v = 0x9c56c9u; esp -= 4; W32(esp, v); }
/* 7368b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7368bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7368be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7368c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7368c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7368c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7368ca: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7368ce: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7368d1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7368d3: mov ebx, ecx */
  ebx = ecx;
/* 7368d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7368d6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7368da: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7368e0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7368e0: xor eax, eax */
  eax = 0;
/* 7368e2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7368e5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7368e8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7368ec: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7368f0: jle 0x736955 */
  if ((zf || sf != of)) goto L_736955;
L_7368f2: /* 7368f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7368f3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7368f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_7368f8: /* 7368f8: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7368fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7368fc: mov ecx, ebx */
  ecx = ebx;
/* 7368fe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x736904u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 736904: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 736907: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 736909: mov edi, eax */
  edi = eax;
/* 73690b: je 0x736938 */
  if (zf) goto L_736938;
L_73690d: /* 73690d: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 736910: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 736914: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736915: mov ecx, edi */
  ecx = edi;
/* 736917: call 0x6c6ee2 */
  esp -= 4; W32(esp, 0x73691cu); SPILL(); f_6c6ee2(); if (g_unwind) return; RELOAD();
/* 73691c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 73691f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 736921: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 736924: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 736926: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 736929: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73692c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73692f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 736932: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 736935: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
L_736938: /* 736938: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 73693c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 736940: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 736943: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 736944: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 736947: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736949: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 73694d: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 736951: jl 0x7368f8 */
  if ((sf != of)) goto L_7368f8;
L_736953: /* 736953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_736955: /* 736955: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 736959: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73695a: mov eax, ebx */
  eax = ebx;
/* 73695c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73695d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 736964: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 736967: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7369a0(void) {
  LOAD_REGS();
L_7369a0: /* 7369a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7369a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7369a5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7369a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7369a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7369a9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7369af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7369b0: mov ebp, ecx */
  ebp = ecx;
/* 7369b2: jge 0x7369c8 */
  if ((sf == of)) goto L_7369c8;
L_7369b4: /* 7369b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7369b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7369be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7369c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7369c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7369c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7369c8: /* 7369c8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7369cb: jle 0x7369e1 */
  if ((zf || sf != of)) goto L_7369e1;
L_7369cd: /* 7369cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7369d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7369d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7369dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7369deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7369de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7369e1: /* 7369e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7369e5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7369e8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7369eb: jle 0x736a01 */
  if ((zf || sf != of)) goto L_736a01;
L_7369ed: /* 7369ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7369f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7369f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7369fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7369feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7369fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736a01: /* 736a01: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736a03: jge 0x736a20 */
  if ((sf == of)) goto L_736a20;
L_736a05: /* 736a05: mov esi, ebx */
  esi = ebx;
/* 736a07: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 736a0a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 736a0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_736a10: /* 736a10: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736a13: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736a15: call 0x6c2fe0 */
  esp -= 4; W32(esp, 0x736a1au); SPILL(); f_6c2fe0(); if (g_unwind) return; RELOAD();
/* 736a1a: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 736a1d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 736a1e: jne 0x736a10 */
  if (!zf) goto L_736a10;
L_736a20: /* 736a20: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736a24: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 736a26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736a27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736a28: mov ecx, ebp */
  ecx = ebp;
/* 736a2a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736a30u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736a30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736a31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736a32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736a33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736a34: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736a70(void) {
  LOAD_REGS();
L_736a70: /* 736a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736a71: mov esi, ecx */
  esi = ecx;
/* 736a73: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736a77: xor edi, edi */
  edi = 0;
/* 736a79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736a7b: jle 0x736a95 */
  if ((zf || sf != of)) goto L_736a95;
L_736a7d: /* 736a7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736a7e: xor ebx, ebx */
  ebx = 0;
L_736a80: /* 736a80: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736a82: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736a84: call 0x6c2fe0 */
  esp -= 4; W32(esp, 0x736a89u); SPILL(); f_6c2fe0(); if (g_unwind) return; RELOAD();
/* 736a89: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736a8c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 736a8d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736a90: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736a92: jl 0x736a80 */
  if ((sf != of)) goto L_736a80;
L_736a94: /* 736a94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736a95: /* 736a95: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736a9a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 736a9c: mov ecx, esi */
  ecx = esi;
/* 736a9e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736aa4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736aa4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736aa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736aa6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736ac0(void) {
  LOAD_REGS();
L_736ac0: /* 736ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736ac1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736ac5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736ac7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736ac9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 736acf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736ad0: mov ebp, ecx */
  ebp = ecx;
/* 736ad2: jge 0x736ae8 */
  if ((sf == of)) goto L_736ae8;
L_736ad4: /* 736ad4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736ad9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736ade: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736ae3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736ae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736ae8: /* 736ae8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736aeb: jle 0x736b01 */
  if ((zf || sf != of)) goto L_736b01;
L_736aed: /* 736aed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736af2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736af7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 736afc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736afe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736b01: /* 736b01: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736b05: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736b08: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736b0b: jle 0x736b21 */
  if ((zf || sf != of)) goto L_736b21;
L_736b0d: /* 736b0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736b12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736b17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 736b1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736b1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736b21: /* 736b21: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736b23: jge 0x736b40 */
  if ((sf == of)) goto L_736b40;
L_736b25: /* 736b25: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 736b28: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 736b2b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 736b2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_736b30: /* 736b30: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736b33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736b35: call 0x6c7711 */
  esp -= 4; W32(esp, 0x736b3au); SPILL(); f_6c7711(); if (g_unwind) return; RELOAD();
/* 736b3a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 736b3d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 736b3e: jne 0x736b30 */
  if (!zf) goto L_736b30;
L_736b40: /* 736b40: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736b44: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 736b46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736b47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736b48: mov ecx, ebp */
  ecx = ebp;
/* 736b4a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736b50u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736b50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736b51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736b52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736b53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736b54: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736b90(void) {
  LOAD_REGS();
L_736b90: /* 736b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736b91: mov esi, ecx */
  esi = ecx;
/* 736b93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736b97: xor edi, edi */
  edi = 0;
/* 736b99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736b9b: jle 0x736bb5 */
  if ((zf || sf != of)) goto L_736bb5;
L_736b9d: /* 736b9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736b9e: xor ebx, ebx */
  ebx = 0;
L_736ba0: /* 736ba0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736ba2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736ba4: call 0x6c7711 */
  esp -= 4; W32(esp, 0x736ba9u); SPILL(); f_6c7711(); if (g_unwind) return; RELOAD();
/* 736ba9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736bac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 736bad: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736bb0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736bb2: jl 0x736ba0 */
  if ((sf != of)) goto L_736ba0;
L_736bb4: /* 736bb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736bb5: /* 736bb5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736bba: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 736bbc: mov ecx, esi */
  ecx = esi;
/* 736bbe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736bc4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736bc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736bc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736bc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736be0(void) {
  LOAD_REGS();
L_736be0: /* 736be0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736be1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 736be5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736be7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 736be8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736be9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 736bef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736bf0: mov ebp, ecx */
  ebp = ecx;
/* 736bf2: jge 0x736c08 */
  if ((sf == of)) goto L_736c08;
L_736bf4: /* 736bf4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 736bf9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736bfe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 736c03: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736c05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736c08: /* 736c08: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736c0b: jle 0x736c21 */
  if ((zf || sf != of)) goto L_736c21;
L_736c0d: /* 736c0d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 736c12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736c17: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 736c1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736c1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736c1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736c21: /* 736c21: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 736c25: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 736c28: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736c2b: jle 0x736c41 */
  if ((zf || sf != of)) goto L_736c41;
L_736c2d: /* 736c2d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 736c32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 736c37: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 736c3c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x736c3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 736c3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_736c41: /* 736c41: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736c43: jge 0x736c60 */
  if ((sf == of)) goto L_736c60;
L_736c45: /* 736c45: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 736c48: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 736c4b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 736c4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_736c50: /* 736c50: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 736c53: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736c55: call 0x6c40e3 */
  esp -= 4; W32(esp, 0x736c5au); SPILL(); f_6c40e3(); if (g_unwind) return; RELOAD();
/* 736c5a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 736c5d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 736c5e: jne 0x736c50 */
  if (!zf) goto L_736c50;
L_736c60: /* 736c60: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 736c64: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 736c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736c67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736c68: mov ecx, ebp */
  ecx = ebp;
/* 736c6a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x736c70u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 736c70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736c71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736c72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 736c73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 736c74: ret 8 */
  esp += 12; SPILL(); return;
}

void f_736cb0(void) {
  LOAD_REGS();
L_736cb0: /* 736cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736cb1: mov esi, ecx */
  esi = ecx;
/* 736cb3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736cb7: xor edi, edi */
  edi = 0;
/* 736cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 736cbb: jle 0x736cd5 */
  if ((zf || sf != of)) goto L_736cd5;
L_736cbd: /* 736cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 736cbe: xor ebx, ebx */
  ebx = 0;
L_736cc0: /* 736cc0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 736cc2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 736cc4: call 0x6c40e3 */
  esp -= 4; W32(esp, 0x736cc9u); SPILL(); f_6c40e3(); if (g_unwind) return; RELOAD();
/* 736cc9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736ccc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 736ccd: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 736cd0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 736cd2: jl 0x736cc0 */
  if ((sf != of)) goto L_736cc0;
L_736cd4: /* 736cd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_736cd5: /* 736cd5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 736cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736cda: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 736cdc: mov ecx, esi */
  ecx = esi;
/* 736cde: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x736ce4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 736ce4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736ce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736ce6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736d00(void) {
  LOAD_REGS();
L_736d00: /* 736d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736d01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736d02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 736d06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 736d07: mov esi, ecx */
  esi = ecx;
/* 736d09: call 0x6c28d3 */
  esp -= 4; W32(esp, 0x736d0eu); SPILL(); f_6c28d3(); if (g_unwind) return; RELOAD();
/* 736d0e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 736d11: mov ecx, esi */
  ecx = esi;
/* 736d13: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 736d16: call 0x6c5fce */
  esp -= 4; W32(esp, 0x736d1bu); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 736d1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 736d1c: mov eax, esi */
  eax = esi;
/* 736d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736d1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736d40(void) {
  LOAD_REGS();
L_736d40: /* 736d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 736d42: push 0x9c56e9 */
  { uint32_t v = 0x9c56e9u; esp -= 4; W32(esp, v); }
/* 736d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 736d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 736d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 736d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736d57: mov esi, ecx */
  esi = ecx;
/* 736d59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 736d5d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 736d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 736d61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 736d63: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 736d6b: call 0x6c3a17 */
  esp -= 4; W32(esp, 0x736d70u); SPILL(); f_6c3a17(); if (g_unwind) return; RELOAD();
/* 736d70: mov ecx, esi */
  ecx = esi;
/* 736d72: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 736d7a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x736d80u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 736d80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 736d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736d85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 736d8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 736d8f: ret  */
  esp += 4; SPILL(); return;
}

void f_736d61(void) {
  LOAD_REGS();
L_736d61: /* 736d61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 736d63: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 736d6b: call 0x6c3a17 */
  esp -= 4; W32(esp, 0x736d70u); SPILL(); f_6c3a17(); if (g_unwind) return; RELOAD();
/* 736d70: mov ecx, esi */
  ecx = esi;
/* 736d72: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 736d7a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x736d80u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 736d80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 736d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736d85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 736d8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 736d8f: ret  */
  esp += 4; SPILL(); return;
}

void f_736db0(void) {
  LOAD_REGS();
L_736db0: /* 736db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736db1: mov esi, ecx */
  esi = ecx;
/* 736db3: call 0x6c2428 */
  esp -= 4; W32(esp, 0x736db8u); SPILL(); f_6c2428(); if (g_unwind) return; RELOAD();
/* 736db8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736dbd: je 0x736dcc */
  if (zf) goto L_736dcc;
L_736dbf: /* 736dbf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736dc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736dc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736dc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736dccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736dcc: /* 736dcc: mov eax, esi */
  eax = esi;
/* 736dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736df0(void) {
  LOAD_REGS();
L_736df0: /* 736df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736df1: mov esi, ecx */
  esi = ecx;
/* 736df3: call 0x6c3418 */
  esp -= 4; W32(esp, 0x736df8u); SPILL(); f_6c3418(); if (g_unwind) return; RELOAD();
/* 736df8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736dfd: je 0x736e0c */
  if (zf) goto L_736e0c;
L_736dff: /* 736dff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736e04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736e06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736e09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736e0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736e0c: /* 736e0c: mov eax, esi */
  eax = esi;
/* 736e0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736e0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736e30(void) {
  LOAD_REGS();
L_736e30: /* 736e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736e31: mov esi, ecx */
  esi = ecx;
/* 736e33: call 0x6c76d5 */
  esp -= 4; W32(esp, 0x736e38u); SPILL(); f_6c76d5(); if (g_unwind) return; RELOAD();
/* 736e38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736e3d: je 0x736e4c */
  if (zf) goto L_736e4c;
L_736e3f: /* 736e3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736e44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736e46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736e49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736e4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736e4c: /* 736e4c: mov eax, esi */
  eax = esi;
/* 736e4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736e4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736e70(void) {
  LOAD_REGS();
L_736e70: /* 736e70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736e71: mov esi, ecx */
  esi = ecx;
/* 736e73: call 0x6c3265 */
  esp -= 4; W32(esp, 0x736e78u); SPILL(); f_6c3265(); if (g_unwind) return; RELOAD();
/* 736e78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736e7d: je 0x736e8c */
  if (zf) goto L_736e8c;
L_736e7f: /* 736e7f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736e84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736e86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736e88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736e89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736e8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736e8c: /* 736e8c: mov eax, esi */
  eax = esi;
/* 736e8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736e8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736eb0(void) {
  LOAD_REGS();
L_736eb0: /* 736eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736eb1: mov esi, ecx */
  esi = ecx;
/* 736eb3: call 0x6c3986 */
  esp -= 4; W32(esp, 0x736eb8u); SPILL(); f_6c3986(); if (g_unwind) return; RELOAD();
/* 736eb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736ebd: je 0x736ecc */
  if (zf) goto L_736ecc;
L_736ebf: /* 736ebf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736ec4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736ec6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736ec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736ec9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736ecc: /* 736ecc: mov eax, esi */
  eax = esi;
/* 736ece: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736ecf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736ef0(void) {
  LOAD_REGS();
L_736ef0: /* 736ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736ef1: mov esi, ecx */
  esi = ecx;
/* 736ef3: call 0x6cc8a6 */
  esp -= 4; W32(esp, 0x736ef8u); SPILL(); f_6cc8a6(); if (g_unwind) return; RELOAD();
/* 736ef8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736efd: je 0x736f0c */
  if (zf) goto L_736f0c;
L_736eff: /* 736eff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736f06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736f09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736f0c: /* 736f0c: mov eax, esi */
  eax = esi;
/* 736f0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736f0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736f30(void) {
  LOAD_REGS();
L_736f30: /* 736f30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736f31: mov esi, ecx */
  esi = ecx;
/* 736f33: call 0x6c4e21 */
  esp -= 4; W32(esp, 0x736f38u); SPILL(); f_6c4e21(); if (g_unwind) return; RELOAD();
/* 736f38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736f3d: je 0x736f4c */
  if (zf) goto L_736f4c;
L_736f3f: /* 736f3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736f44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736f49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736f4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736f4c: /* 736f4c: mov eax, esi */
  eax = esi;
/* 736f4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736f4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736f70(void) {
  LOAD_REGS();
L_736f70: /* 736f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736f71: mov esi, ecx */
  esi = ecx;
/* 736f73: call 0x6cc44b */
  esp -= 4; W32(esp, 0x736f78u); SPILL(); f_6cc44b(); if (g_unwind) return; RELOAD();
/* 736f78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736f7d: je 0x736f8c */
  if (zf) goto L_736f8c;
L_736f7f: /* 736f7f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736f84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736f86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736f88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736f89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736f8c: /* 736f8c: mov eax, esi */
  eax = esi;
/* 736f8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736f8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736fb0(void) {
  LOAD_REGS();
L_736fb0: /* 736fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736fb1: mov esi, ecx */
  esi = ecx;
/* 736fb3: call 0x6c5920 */
  esp -= 4; W32(esp, 0x736fb8u); SPILL(); f_6c5920(); if (g_unwind) return; RELOAD();
/* 736fb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736fbd: je 0x736fcc */
  if (zf) goto L_736fcc;
L_736fbf: /* 736fbf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 736fc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 736fc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 736fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736fc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x736fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_736fcc: /* 736fcc: mov eax, esi */
  eax = esi;
/* 736fce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 736fcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_736ff0(void) {
  LOAD_REGS();
L_736ff0: /* 736ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 736ff1: mov esi, ecx */
  esi = ecx;
/* 736ff3: call 0x6c1028 */
  esp -= 4; W32(esp, 0x736ff8u); SPILL(); f_6c1028(); if (g_unwind) return; RELOAD();
/* 736ff8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 736ffd: je 0x73700c */
  if (zf) goto L_73700c;
L_736fff: /* 736fff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 737004: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 737006: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 737008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737009: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73700cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73700c: /* 73700c: mov eax, esi */
  eax = esi;
/* 73700e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73700f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737030(void) {
  LOAD_REGS();
L_737030: /* 737030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737031: mov esi, ecx */
  esi = ecx;
/* 737033: call 0x6c1f50 */
  esp -= 4; W32(esp, 0x737038u); SPILL(); f_6c1f50(); if (g_unwind) return; RELOAD();
/* 737038: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73703d: je 0x73704c */
  if (zf) goto L_73704c;
L_73703f: /* 73703f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 737044: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 737046: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 737048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737049: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73704cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73704c: /* 73704c: mov eax, esi */
  eax = esi;
/* 73704e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73704f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737070(void) {
  LOAD_REGS();
L_737070: /* 737070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737071: mov esi, ecx */
  esi = ecx;
/* 737073: call 0x6c56b9 */
  esp -= 4; W32(esp, 0x737078u); SPILL(); f_6c56b9(); if (g_unwind) return; RELOAD();
/* 737078: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73707d: je 0x73708c */
  if (zf) goto L_73708c;
L_73707f: /* 73707f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 737084: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 737086: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 737088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737089: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73708cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73708c: /* 73708c: mov eax, esi */
  eax = esi;
/* 73708e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73708f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7370b0(void) {
  LOAD_REGS();
L_7370b0: /* 7370b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7370b1: mov esi, ecx */
  esi = ecx;
/* 7370b3: call 0x6cb780 */
  esp -= 4; W32(esp, 0x7370b8u); SPILL(); f_6cb780(); if (g_unwind) return; RELOAD();
/* 7370b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7370bd: je 0x7370cc */
  if (zf) goto L_7370cc;
L_7370bf: /* 7370bf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7370c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7370c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7370c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7370c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7370ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7370cc: /* 7370cc: mov eax, esi */
  eax = esi;
/* 7370ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7370cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7370f0(void) {
  LOAD_REGS();
L_7370f0: /* 7370f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7370f2: push 0x9c570b */
  { uint32_t v = 0x9c570bu; esp -= 4; W32(esp, v); }
/* 7370f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7370fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7370fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737107: mov esi, ecx */
  esi = ecx;
/* 737109: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73710d: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 737110: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 737118: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x73711eu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 73711e: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 737121: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 737129: call 0x6ccbee */
  esp -= 4; W32(esp, 0x73712eu); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 73712e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 737132: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737133: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73713a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73713d: ret  */
  esp += 4; SPILL(); return;
}

void f_737160(void) {
  LOAD_REGS();
L_737160: /* 737160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737162: push 0x9c57a3 */
  { uint32_t v = 0x9c57a3u; esp -= 4; W32(esp, v); }
/* 737167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73716d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73716e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737177: mov esi, ecx */
  esi = ecx;
/* 737179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73717d: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 737183: mov dword ptr [esp + 0x10], 0xa */
  W32((uint32_t)(esp + 0x10u), 0xau);
/* 73718b: call 0x6c89c7 */
  esp -= 4; W32(esp, 0x737190u); SPILL(); f_6c89c7(); if (g_unwind) return; RELOAD();
/* 737190: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 737196: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73719b: call 0x6c1596 */
  esp -= 4; W32(esp, 0x7371a0u); SPILL(); f_6c1596(); if (g_unwind) return; RELOAD();
/* 7371a0: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 7371a6: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7371ab: call 0x6c2dd8 */
  esp -= 4; W32(esp, 0x7371b0u); SPILL(); f_6c2dd8(); if (g_unwind) return; RELOAD();
/* 7371b0: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 7371b6: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7371bb: call 0x6c26e9 */
  esp -= 4; W32(esp, 0x7371c0u); SPILL(); f_6c26e9(); if (g_unwind) return; RELOAD();
/* 7371c0: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 7371c6: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7371cb: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7371d1u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7371d1: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 7371d7: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7371dc: call 0x6ccbee */
  esp -= 4; W32(esp, 0x7371e1u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 7371e1: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7371e4: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7371e9: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7371efu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7371ef: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7371f2: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7371f7: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7371fdu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7371fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 737200: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 737205: call 0x6c7202 */
  esp -= 4; W32(esp, 0x73720au); SPILL(); f_6c7202(); if (g_unwind) return; RELOAD();
/* 73720a: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 73720d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 737212: call 0x6c7202 */
  esp -= 4; W32(esp, 0x737217u); SPILL(); f_6c7202(); if (g_unwind) return; RELOAD();
/* 737217: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 73721a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73721f: call 0x6c7fc2 */
  esp -= 4; W32(esp, 0x737224u); SPILL(); f_6c7fc2(); if (g_unwind) return; RELOAD();
/* 737224: mov ecx, esi */
  ecx = esi;
/* 737226: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73722e: call 0x6cbadc */
  esp -= 4; W32(esp, 0x737233u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 737233: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 737237: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737238: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73723f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737242: ret  */
  esp += 4; SPILL(); return;
}

void f_737290(void) {
  LOAD_REGS();
L_737290: /* 737290: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 737295: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737296: mov esi, ecx */
  esi = ecx;
/* 737298: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 73729a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 73729c: je 0x7372bc */
  if (zf) goto L_7372bc;
L_73729e: /* 73729e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7372a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7372a3: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 7372a8: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 7372ad: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7372af: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7372b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7372b2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7372b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7372b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7372b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7372b9: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7372bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7372bc: /* 7372bc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7372c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7372c1: mov ecx, esi */
  ecx = esi;
/* 7372c3: call 0x6c9273 */
  esp -= 4; W32(esp, 0x7372c8u); SPILL(); f_6c9273(); if (g_unwind) return; RELOAD();
/* 7372c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7372c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7372e0(void) {
  LOAD_REGS();
L_7372e0: /* 7372e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7372e1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7372e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7372e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7372e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7372e9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7372ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7372f0: mov ebp, ecx */
  ebp = ecx;
/* 7372f2: jge 0x737308 */
  if ((sf == of)) goto L_737308;
L_7372f4: /* 7372f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7372f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7372fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 737303: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x737305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 737305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_737308: /* 737308: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73730b: jle 0x737321 */
  if ((zf || sf != of)) goto L_737321;
L_73730d: /* 73730d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 737312: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 737317: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 73731c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73731eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73731e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_737321: /* 737321: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 737325: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 737328: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 73732b: jle 0x737341 */
  if ((zf || sf != of)) goto L_737341;
L_73732d: /* 73732d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 737332: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 737337: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 73733c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73733eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73733e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_737341: /* 737341: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 737343: jge 0x737360 */
  if ((sf == of)) goto L_737360;
L_737345: /* 737345: mov esi, ebx */
  esi = ebx;
/* 737347: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 73734a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73734c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_737350: /* 737350: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 737353: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 737355: call 0x6c5920 */
  esp -= 4; W32(esp, 0x73735au); SPILL(); f_6c5920(); if (g_unwind) return; RELOAD();
/* 73735a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73735d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 73735e: jne 0x737350 */
  if (!zf) goto L_737350;
L_737360: /* 737360: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 737364: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 737366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737367: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737368: mov ecx, ebp */
  ecx = ebp;
/* 73736a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x737370u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 737370: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 737371: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737372: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 737373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 737374: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7373b0(void) {
  LOAD_REGS();
L_7373b0: /* 7373b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7373b4: jmp 0x6c3418 */
  SPILL(); f_6c3418(); return;
}

void f_7373d0(void) {
  LOAD_REGS();
L_7373d0: /* 7373d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7373d1: mov esi, ecx */
  esi = ecx;
/* 7373d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7373d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7373d7: xor edi, edi */
  edi = 0;
/* 7373d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7373db: jle 0x7373f5 */
  if ((zf || sf != of)) goto L_7373f5;
L_7373dd: /* 7373dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7373de: xor ebx, ebx */
  ebx = 0;
L_7373e0: /* 7373e0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7373e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7373e4: call 0x6c3418 */
  esp -= 4; W32(esp, 0x7373e9u); SPILL(); f_6c3418(); if (g_unwind) return; RELOAD();
/* 7373e9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7373ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7373ed: add ebx, 0x78 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7373f0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7373f2: jl 0x7373e0 */
  if ((sf != of)) goto L_7373e0;
L_7373f4: /* 7373f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7373f5: /* 7373f5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7373f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7373fa: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7373fc: mov ecx, esi */
  ecx = esi;
/* 7373fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x737404u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 737404: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 737405: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737406: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737420(void) {
  LOAD_REGS();
L_737420: /* 737420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737421: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 737425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737426: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 737428: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 73742a: mov ecx, esi */
  ecx = esi;
/* 73742c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x737432u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 737432: mov edi, eax */
  edi = eax;
/* 737434: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 737439: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 73743b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 73743d: je 0x73745a */
  if (zf) goto L_73745a;
L_73743f: /* 73743f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 737442: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 737444: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 737449: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 73744e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 737450: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 737452: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 737454: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737455: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737457: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x73745au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73745a: /* 73745a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 73745c: mov eax, edi */
  eax = edi;
/* 73745e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 737461: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 737462: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 737464: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737465: ret  */
  esp += 4; SPILL(); return;
}

void f_737465(void) {
  LOAD_REGS();
L_737465: /* 737465: ret  */
  esp += 4; SPILL(); return;
}

void f_737490(void) {
  LOAD_REGS();
L_737490: /* 737490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737491: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 737495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737497: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 737499: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73749a: mov esi, ecx */
  esi = ecx;
/* 73749c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7374a2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7374a2: mov edi, eax */
  edi = eax;
/* 7374a4: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7374a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7374ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7374ad: je 0x7374c9 */
  if (zf) goto L_7374c9;
L_7374af: /* 7374af: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7374b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7374b4: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 7374b9: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 7374be: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7374c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7374c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7374c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7374c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7374c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7374c6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7374c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7374c9: /* 7374c9: mov eax, edi */
  eax = edi;
/* 7374cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7374cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7374cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7374ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737500(void) {
  LOAD_REGS();
L_737500: /* 737500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737502: push 0x9c57e4 */
  { uint32_t v = 0x9c57e4u; esp -= 4; W32(esp, v); }
/* 737507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73750d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73750e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737517: mov esi, ecx */
  esi = ecx;
/* 737519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73751d: mov dword ptr [esi], 0x9f9768 */
  W32((uint32_t)(esi), 0x9f9768u);
/* 737523: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 73752b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x737531u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 737531: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 737534: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 737539: call 0x6c25d6 */
  esp -= 4; W32(esp, 0x73753eu); SPILL(); f_6c25d6(); if (g_unwind) return; RELOAD();
/* 73753e: mov ecx, esi */
  ecx = esi;
/* 737540: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 737548: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x73754eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 73754e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 737552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737553: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73755a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73755d: ret  */
  esp += 4; SPILL(); return;
}

void f_737580(void) {
  LOAD_REGS();
L_737580: /* 737580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737582: push 0x9c5809 */
  { uint32_t v = 0x9c5809u; esp -= 4; W32(esp, v); }
/* 737587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73758d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73758e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737597: mov esi, ecx */
  esi = ecx;
/* 737599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73759a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 73759e: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7375a4u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7375a4: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 7375a9: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 7375ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7375ae: mov ecx, edi */
  ecx = edi;
/* 7375b0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7375b8: mov dword ptr [esi], 0x9f9768 */
  W32((uint32_t)(esi), 0x9f9768u);
/* 7375be: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7375c4u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7375c4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7375c8: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 7375cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7375cc: mov eax, esi */
  eax = esi;
/* 7375ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7375cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7375d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7375d9: ret  */
  esp += 4; SPILL(); return;
}

void f_737600(void) {
  LOAD_REGS();
L_737600: /* 737600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 737601: mov ebp, esp */
  ebp = esp;
/* 737603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737605: push 0x9c5820 */
  { uint32_t v = 0x9c5820u; esp -= 4; W32(esp, v); }
/* 73760a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 737610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737618: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73761b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73761c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73761d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73761e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 737621: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 737624: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737625: mov ebx, ecx */
  ebx = ecx;
/* 737627: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 73762e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x737634u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 737634: mov ecx, edi */
  ecx = edi;
/* 737636: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x73763cu); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 73763c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 73763e: je 0x737660 */
  if (zf) goto L_737660;
L_737640: /* 737640: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 737643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737644: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737645: call 0x6c83b4 */
  esp -= 4; W32(esp, 0x73764au); SPILL(); f_6c83b4(); if (g_unwind) return; RELOAD();
/* 73764a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73764d: /* 73764d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 737650: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 737651: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737652: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 737659: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73765a: mov esp, ebp */
  esp = ebp;
/* 73765c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73765d: ret 4 */
  esp += 8; SPILL(); return;
L_737660: /* 737660: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 737665: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 737668: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737669: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x73766fu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 73766f: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 737672: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 737678: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 73767b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 73767e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 737681: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737683: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x737685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 737685: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737688: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 73768b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73768c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73768d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73768fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73768f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737692: mov ecx, edi */
  ecx = edi;
/* 737694: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x73769au); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 73769a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 73769c: je 0x7376b7 */
  if (zf) goto L_7376b7;
L_73769e: /* 73769e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7376a1: lea esi, [ebx + 0x28] */
  esi = (uint32_t)(ebx + 0x28u);
/* 7376a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7376a5: mov ecx, esi */
  ecx = esi;
/* 7376a7: call 0x6c8c65 */
  esp -= 4; W32(esp, 0x7376acu); SPILL(); f_6c8c65(); if (g_unwind) return; RELOAD();
/* 7376ac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7376af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7376b0: mov ecx, esi */
  ecx = esi;
/* 7376b2: call 0x6c2ca2 */
  esp -= 4; W32(esp, 0x7376b7u); SPILL(); f_6c2ca2(); if (g_unwind) return; RELOAD();
L_7376b7: /* 7376b7: xor esi, esi */
  esi = 0;
/* 7376b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7376c0: /* 7376c0: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7376c3: jge 0x73764d */
  if ((sf == of)) goto L_73764d;
L_7376c5: /* 7376c5: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 7376c8: mov ecx, esi */
  ecx = esi;
/* 7376ca: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 7376d0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7376d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7376d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7376d4: call 0x6c9246 */
  esp -= 4; W32(esp, 0x7376d9u); SPILL(); f_6c9246(); if (g_unwind) return; RELOAD();
/* 7376d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7376dc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7376dd: jmp 0x7376c0 */
  goto L_7376c0;
}

void f_7376df(void) {
  LOAD_REGS();
L_7376df: /* 7376df: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7376e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7376e7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7376ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7376eb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7376ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7376f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7376f3(); return;
}

void f_7376f3(void) {
  LOAD_REGS();
L_7376f3: /* 7376f3: push 0x9f97e4 */
  { uint32_t v = 0x9f97e4u; esp -= 4; W32(esp, v); }
/* 7376f8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7376fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x737703u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 737703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73770a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x73770fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_73770f: guest_badaddr(0x73770f); return;
}

void f_737760(void) {
  LOAD_REGS();
L_737760: /* 737760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737762: push 0x9c5839 */
  { uint32_t v = 0x9c5839u; esp -= 4; W32(esp, v); }
/* 737767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73776d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73776e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737776: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737778: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737779: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 73777d: mov esi, ecx */
  esi = ecx;
/* 73777f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737780: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 737784: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x73778au); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 73778a: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73778d: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 737790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737791: mov ecx, ebx */
  ecx = ebx;
/* 737793: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 73779b: mov dword ptr [esi], 0x9f9768 */
  W32((uint32_t)(esi), 0x9f9768u);
/* 7377a1: call 0x6ca0c9 */
  esp -= 4; W32(esp, 0x7377a6u); SPILL(); f_6ca0c9(); if (g_unwind) return; RELOAD();
/* 7377a6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 7377a9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7377ad: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 7377b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7377b1: mov eax, esi */
  eax = esi;
/* 7377b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7377b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7377b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7377bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7377bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7377f0(void) {
  LOAD_REGS();
L_7377f0: /* 7377f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7377f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7377f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7377f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7377f7: mov esi, ecx */
  esi = ecx;
/* 7377f9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7377ffu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7377ff: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 737802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737803: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 737806: call 0x6c2cf2 */
  esp -= 4; W32(esp, 0x73780bu); SPILL(); f_6c2cf2(); if (g_unwind) return; RELOAD();
/* 73780b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73780c: mov eax, esi */
  eax = esi;
/* 73780e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73780f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737830(void) {
  LOAD_REGS();
L_737830: /* 737830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737831: mov esi, ecx */
  esi = ecx;
/* 737833: call 0x6c37fb */
  esp -= 4; W32(esp, 0x737838u); SPILL(); f_6c37fb(); if (g_unwind) return; RELOAD();
/* 737838: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73783d: je 0x73784b */
  if (zf) goto L_73784b;
L_73783f: /* 73783f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 737841: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737842: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x737848u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 737848: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73784b: /* 73784b: mov eax, esi */
  eax = esi;
/* 73784d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73784e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737870(void) {
  LOAD_REGS();
L_737870: /* 737870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737871: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 737875: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 737878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737879: mov esi, ecx */
  esi = ecx;
/* 73787b: je 0x7378ad */
  if (zf) goto L_7378ad;
L_73787d: /* 73787d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 737880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737881: push 0x6c37fb */
  { uint32_t v = 0x6c37fbu; esp -= 4; W32(esp, v); }
/* 737886: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 737889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73788a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 73788c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73788d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x737892u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 737892: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 737895: je 0x7378a5 */
  if (zf) goto L_7378a5;
L_737897: /* 737897: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73789d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73789f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7378a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7378a2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7378a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7378a5: /* 7378a5: mov eax, edi */
  eax = edi;
/* 7378a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7378a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7378a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7378aa: ret 4 */
  esp += 8; SPILL(); return;
L_7378ad: /* 7378ad: mov ecx, esi */
  ecx = esi;
/* 7378af: call 0x6c37fb */
  esp -= 4; W32(esp, 0x7378b4u); SPILL(); f_6c37fb(); if (g_unwind) return; RELOAD();
/* 7378b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7378b7: je 0x7378c5 */
  if (zf) goto L_7378c5;
L_7378b9: /* 7378b9: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7378bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7378bc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7378c2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7378c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7378c5: /* 7378c5: mov eax, esi */
  eax = esi;
/* 7378c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7378c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7378c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7378f0(void) {
  LOAD_REGS();
L_7378f0: /* 7378f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7378f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7378f6: je 0x7378fd */
  if (zf) goto L_7378fd;
L_7378f8: /* 7378f8: jmp 0x6c7bf3 */
  SPILL(); f_6c7bf3(); return;
L_7378fd: /* 7378fd: ret  */
  esp += 4; SPILL(); return;
}

void f_737910(void) {
  LOAD_REGS();
L_737910: /* 737910: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 737914: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 737916: je 0x73791d */
  if (zf) goto L_73791d;
L_737918: /* 737918: jmp 0x6cc0a9 */
  SPILL(); f_6cc0a9(); return;
L_73791d: /* 73791d: ret  */
  esp += 4; SPILL(); return;
}

void f_737930(void) {
  LOAD_REGS();
L_737930: /* 737930: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 737934: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 737936: je 0x73793d */
  if (zf) goto L_73793d;
L_737938: /* 737938: jmp 0x6c383c */
  SPILL(); f_6c383c(); return;
L_73793d: /* 73793d: ret  */
  esp += 4; SPILL(); return;
}

void f_737950(void) {
  LOAD_REGS();
L_737950: /* 737950: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 737954: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 737956: je 0x73795d */
  if (zf) goto L_73795d;
L_737958: /* 737958: jmp 0x6c4633 */
  SPILL(); f_6c4633(); return;
L_73795d: /* 73795d: ret  */
  esp += 4; SPILL(); return;
}

void f_737970(void) {
  LOAD_REGS();
L_737970: /* 737970: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 737974: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 737976: je 0x73797d */
  if (zf) goto L_73797d;
L_737978: /* 737978: jmp 0x6c3fd5 */
  SPILL(); f_6c3fd5(); return;
L_73797d: /* 73797d: ret  */
  esp += 4; SPILL(); return;
}

void f_737990(void) {
  LOAD_REGS();
L_737990: /* 737990: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 737994: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 737996: je 0x73799d */
  if (zf) goto L_73799d;
L_737998: /* 737998: jmp 0x6c7360 */
  SPILL(); f_6c7360(); return;
L_73799d: /* 73799d: ret  */
  esp += 4; SPILL(); return;
}

void f_7379b0(void) {
  LOAD_REGS();
L_7379b0: /* 7379b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7379b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7379b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7379b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7379b4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7379b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7379b9: mov esi, ecx */
  esi = ecx;
/* 7379bb: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7379c1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7379c1: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 7379c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7379c5: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7379c8: call 0x6c6dac */
  esp -= 4; W32(esp, 0x7379cdu); SPILL(); f_6c6dac(); if (g_unwind) return; RELOAD();
/* 7379cd: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 7379d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7379d1: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7379d4: call 0x6c2bbc */
  esp -= 4; W32(esp, 0x7379d9u); SPILL(); f_6c2bbc(); if (g_unwind) return; RELOAD();
/* 7379d9: lea ebp, [edi + 0x40] */
  ebp = (uint32_t)(edi + 0x40u);
/* 7379dc: lea ebx, [esi + 0x40] */
  ebx = (uint32_t)(esi + 0x40u);
/* 7379df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7379e0: mov ecx, ebx */
  ecx = ebx;
/* 7379e2: call 0x6c5e0c */
  esp -= 4; W32(esp, 0x7379e7u); SPILL(); f_6c5e0c(); if (g_unwind) return; RELOAD();
/* 7379e7: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7379ea: mov ecx, ebx */
  ecx = ebx;
/* 7379ec: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 7379ef: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7379f4u); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 7379f4: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 7379f7: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 7379fa: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 7379fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7379fe: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 737a01: mov eax, esi */
  eax = esi;
/* 737a03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737a04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 737a05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 737a06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737a30(void) {
  LOAD_REGS();
L_737a30: /* 737a30: jmp 0x6cb56e */
  SPILL(); f_6cb56e(); return;
}

void f_737a50(void) {
  LOAD_REGS();
L_737a50: /* 737a50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 737a54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737a56: mov esi, ecx */
  esi = ecx;
/* 737a58: call 0x6c83c3 */
  esp -= 4; W32(esp, 0x737a5du); SPILL(); f_6c83c3(); if (g_unwind) return; RELOAD();
/* 737a5d: mov eax, esi */
  eax = esi;
/* 737a5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737a60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_737a80(void) {
  LOAD_REGS();
L_737a80: /* 737a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737a82: push 0x9c590c */
  { uint32_t v = 0x9c590cu; esp -= 4; W32(esp, v); }
/* 737a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 737a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737a97: mov esi, ecx */
  esi = ecx;
/* 737a99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 737a9d: mov dword ptr [esi], 0x9f9810 */
  W32((uint32_t)(esi), 0x9f9810u);
/* 737aa3: mov dword ptr [esp + 0x10], 0xd */
  W32((uint32_t)(esp + 0x10u), 0xdu);
/* 737aab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x737ab1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 737ab1: lea ecx, [esi + 0x330] */
  ecx = (uint32_t)(esi + 0x330u);
/* 737ab7: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 737abc: call 0x6c3ef4 */
  esp -= 4; W32(esp, 0x737ac1u); SPILL(); f_6c3ef4(); if (g_unwind) return; RELOAD();
/* 737ac1: lea ecx, [esi + 0x2a0] */
  ecx = (uint32_t)(esi + 0x2a0u);
/* 737ac7: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 737acc: call 0x6c1b7c */
  esp -= 4; W32(esp, 0x737ad1u); SPILL(); f_6c1b7c(); if (g_unwind) return; RELOAD();
/* 737ad1: lea ecx, [esi + 0x26c] */
  ecx = (uint32_t)(esi + 0x26cu);
/* 737ad7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 737adc: call 0x6cb474 */
  esp -= 4; W32(esp, 0x737ae1u); SPILL(); f_6cb474(); if (g_unwind) return; RELOAD();
/* 737ae1: lea ecx, [esi + 0x260] */
  ecx = (uint32_t)(esi + 0x260u);
/* 737ae7: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 737aec: call 0x6cafce */
  esp -= 4; W32(esp, 0x737af1u); SPILL(); f_6cafce(); if (g_unwind) return; RELOAD();
/* 737af1: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* 737af7: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 737afc: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x737b02u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 737b02: lea ecx, [esi + 0x1fc] */
  ecx = (uint32_t)(esi + 0x1fcu);
/* 737b08: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 737b0d: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x737b12u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 737b12: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 737b18: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 737b1d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x737b23u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 737b23: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 737b29: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 737b2e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x737b33u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 737b33: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 737b39: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 737b3e: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x737b43u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 737b43: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 737b49: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 737b4e: call 0x6c633e */
  esp -= 4; W32(esp, 0x737b53u); SPILL(); f_6c633e(); if (g_unwind) return; RELOAD();
/* 737b53: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 737b59: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 737b5e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x737b63u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 737b63: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 737b66: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 737b6b: call 0x6c536c */
  esp -= 4; W32(esp, 0x737b70u); SPILL(); f_6c536c(); if (g_unwind) return; RELOAD();
/* 737b70: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 737b73: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 737b78: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x737b7eu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 737b7e: mov ecx, esi */
  ecx = esi;
/* 737b80: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 737b88: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x737b8eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 737b8e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 737b92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737b93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 737b9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737b9d: ret  */
  esp += 4; SPILL(); return;
}

void f_737bf0(void) {
  LOAD_REGS();
L_737bf0: /* 737bf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737bf2: push 0x9c59fe */
  { uint32_t v = 0x9c59feu; esp -= 4; W32(esp, v); }
/* 737bf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 737bfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737bfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737c05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737c06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737c07: mov esi, ecx */
  esi = ecx;
/* 737c09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 737c0d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x737c13u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 737c13: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 737c16: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 737c1e: mov dword ptr [esi], 0x9f9810 */
  W32((uint32_t)(esi), 0x9f9810u);
/* 737c24: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x737c2au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 737c2a: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 737c2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737c2f: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 737c34: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737c3au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737c3a: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* 737c3d: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 737c42: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c48u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c48: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 737c4e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c54u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c54: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 737c5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737c5c: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737c62u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737c62: lea ecx, [esi + 0xf4] */
  ecx = (uint32_t)(esi + 0xf4u);
/* 737c68: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 737c6d: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c73u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c73: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 737c79: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c7fu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c7f: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 737c85: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c8bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c8b: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 737c91: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737c97u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737c97: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 737c9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737c9f: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737ca5u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737ca5: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 737cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737cad: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 737cb2: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737cb8u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737cb8: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 737cbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737cc0: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 737cc5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737ccbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737ccb: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 737cd1: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 737cd6: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x737cdcu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 737cdc: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 737ce2: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x737ce8u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 737ce8: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 737cee: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x737cf4u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 737cf4: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 737cfa: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 737cff: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737d05u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737d05: lea ecx, [esi + 0x1fc] */
  ecx = (uint32_t)(esi + 0x1fcu);
/* 737d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737d0d: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737d13u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737d13: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 737d19: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 737d1e: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x737d24u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 737d24: lea ecx, [esi + 0x260] */
  ecx = (uint32_t)(esi + 0x260u);
/* 737d2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737d2c: mov byte ptr [esp + 0x14], 9 */
  W8((uint32_t)(esp + 0x14u), 0x9u);
/* 737d31: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737d37u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737d37: lea ecx, [esi + 0x26c] */
  ecx = (uint32_t)(esi + 0x26cu);
/* 737d3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737d3f: mov byte ptr [esp + 0x14], 0xa */
  W8((uint32_t)(esp + 0x14u), 0xau);
/* 737d44: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737d4au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737d4a: lea ecx, [esi + 0x2a0] */
  ecx = (uint32_t)(esi + 0x2a0u);
/* 737d50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737d52: mov byte ptr [esp + 0x14], 0xb */
  W8((uint32_t)(esp + 0x14u), 0xbu);
/* 737d57: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737d5du); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737d5d: lea ecx, [esi + 0x2e4] */
  ecx = (uint32_t)(esi + 0x2e4u);
/* 737d63: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 737d68: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x737d6eu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 737d6e: lea ecx, [esi + 0x2f0] */
  ecx = (uint32_t)(esi + 0x2f0u);
/* 737d74: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x737d7au); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 737d7a: lea ecx, [esi + 0x314] */
  ecx = (uint32_t)(esi + 0x314u);
/* 737d80: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x737d86u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 737d86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 737d88: lea ecx, [esi + 0x330] */
  ecx = (uint32_t)(esi + 0x330u);
/* 737d8e: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x737d94u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 737d94: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 737d98: mov eax, esi */
  eax = esi;
/* 737d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 737d9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 737da2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 737da5: ret  */
  esp += 4; SPILL(); return;
}

void f_737e20(void) {
  LOAD_REGS();
L_737e20: /* 737e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 737e22: push 0x9c5aee */
  { uint32_t v = 0x9c5aeeu; esp -= 4; W32(esp, v); }
/* 737e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 737e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 737e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737e36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 737e37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 737e38: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 737e3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 737e3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 737e3e: mov ebx, ecx */
  ebx = ecx;
/* 737e40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 737e41: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 737e45: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x737e4bu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 737e4b: mov dword ptr [ebx], 0x9f9810 */
  W32((uint32_t)(ebx), 0x9f9810u);
/* 737e51: mov al, byte ptr [ebp + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 737e54: mov byte ptr [ebx + 0x28], al */
  W8((uint32_t)(ebx + 0x28u), (eax & 0xffu));
/* 737e57: mov cl, byte ptr [ebp + 0x29] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x29u))) & 0xffu);
/* 737e5a: mov byte ptr [ebx + 0x29], cl */
  W8((uint32_t)(ebx + 0x29u), (ecx & 0xffu));
/* 737e5d: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 737e60: mov dword ptr [ebx + 0x2c], edx */
  W32((uint32_t)(ebx + 0x2cu), edx);
/* 737e63: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 737e66: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* 737e69: mov cl, byte ptr [ebp + 0x34] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 737e6c: mov byte ptr [ebx + 0x34], cl */
  W8((uint32_t)(ebx + 0x34u), (ecx & 0xffu));
/* 737e6f: mov dl, byte ptr [ebp + 0x35] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x35u))) & 0xffu);
/* 737e72: mov byte ptr [ebx + 0x35], dl */
  W8((uint32_t)(ebx + 0x35u), (edx & 0xffu));
/* 737e75: mov al, byte ptr [ebp + 0x36] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x36u))) & 0xffu);
/* 737e78: mov byte ptr [ebx + 0x36], al */
  W8((uint32_t)(ebx + 0x36u), (eax & 0xffu));
/* 737e7b: mov cl, byte ptr [ebp + 0x37] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x37u))) & 0xffu);
/* 737e7e: mov byte ptr [ebx + 0x37], cl */
  W8((uint32_t)(ebx + 0x37u), (ecx & 0xffu));
/* 737e81: mov dl, byte ptr [ebp + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x38u))) & 0xffu);
/* 737e84: lea ecx, [ebp + 0x40] */
  ecx = (uint32_t)(ebp + 0x40u);
/* 737e87: mov byte ptr [ebx + 0x38], dl */
  W8((uint32_t)(ebx + 0x38u), (edx & 0xffu));
/* 737e8a: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 737e8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 737e8e: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 737e91: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 737e99: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 737e9c: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x737ea2u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 737ea2: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 737ea5: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 737ea8: mov al, byte ptr [ebp + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x50u))) & 0xffu);
/* 737eab: mov byte ptr [ebx + 0x50], al */
  W8((uint32_t)(ebx + 0x50u), (eax & 0xffu));
/* 737eae: mov cl, byte ptr [ebp + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x51u))) & 0xffu);
/* 737eb1: mov byte ptr [ebx + 0x51], cl */
  W8((uint32_t)(ebx + 0x51u), (ecx & 0xffu));
/* 737eb4: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* 737eb7: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
/* 737eba: mov eax, dword ptr [ebp + 0x58] */
  eax = R32((uint32_t)(ebp + 0x58u));
/* 737ebd: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 737ec0: mov ecx, dword ptr [ebp + 0x5c] */
  ecx = R32((uint32_t)(ebp + 0x5cu));
/* 737ec3: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* 737ec6: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* 737ec9: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 737ecc: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 737ecf: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 737ed2: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 737ed5: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* 737ed8: mov dl, byte ptr [ebp + 0x6c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x6cu))) & 0xffu);
/* 737edb: lea eax, [ebp + 0x70] */
  eax = (uint32_t)(ebp + 0x70u);
/* 737ede: lea ecx, [ebx + 0x70] */
  ecx = (uint32_t)(ebx + 0x70u);
/* 737ee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 737ee2: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 737ee7: mov byte ptr [ebx + 0x6c], dl */
  W8((uint32_t)(ebx + 0x6cu), (edx & 0xffu));
/* 737eea: call 0x6c9d5e */
  esp -= 4; W32(esp, 0x737eefu); SPILL(); f_6c9d5e(); if (g_unwind) return; RELOAD();
/* 737eef: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 737ef2: mov edx, dword ptr [ebx + 0x80] */
  edx = R32((uint32_t)(ebx + 0x80u));
/* 737ef8: mov esi, dword ptr [ebx + 0x80] */
  esi = R32((uint32_t)(ebx + 0x80u));
/* 737efe: mov dword ptr [ebx + 0x7c], ecx */
  W32((uint32_t)(ebx + 0x7cu), ecx);
/* 737f01: xor edx, dword ptr [ebp + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 737f07: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 737f0a: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 737f0c: mov dword ptr [ebx + 0x80], esi */
  W32((uint32_t)(ebx + 0x80u), esi);
/* 737f12: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737f18: mov ecx, esi */
  ecx = esi;
/* 737f1a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f1c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737f1f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f21: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737f27: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737f2d: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 737f32: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f34: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 737f37: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f39: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 737f3f: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737f45: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f47: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737f4a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f4c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737f52: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737f58: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f5a: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 737f5d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f5f: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 737f65: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737f6b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f6d: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737f70: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f72: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737f78: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737f7e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f80: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 737f83: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737f85: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 737f8b: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737f91: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f93: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737f98: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737f9a: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737fa0: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737fa6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737fa8: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 737fae: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737fb0: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 737fb6: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737fbc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737fbe: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737fc3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737fc5: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737fcb: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737fd1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737fd3: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 737fd9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737fdb: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 737fe1: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 737fe7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737fe9: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 737fee: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 737ff0: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 737ff6: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 737ffc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 737ffe: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738004: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738006: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73800c: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 738012: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738014: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738019: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73801b: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 738021: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 738027: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738029: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73802f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738031: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 738037: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73803d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73803f: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738044: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738046: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73804c: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 738052: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738054: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73805a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73805c: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 738062: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 738068: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73806a: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73806f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738071: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 738077: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73807d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73807f: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738085: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738087: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73808d: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 738093: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738095: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73809a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73809c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7380a2: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7380a8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7380aa: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7380b0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7380b2: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7380b8: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7380be: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7380c0: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7380c5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7380c7: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7380cd: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7380d3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7380d5: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7380db: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7380dd: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7380e3: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7380e9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7380eb: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7380f0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7380f2: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7380f8: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7380fe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738100: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738106: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738108: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73810e: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 738114: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738116: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73811b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73811d: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 738123: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 738129: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73812b: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738131: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738133: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 738139: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73813f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738141: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738148: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73814e: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 738154: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738156: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73815c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73815e: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 738164: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73816a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73816c: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738171: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738173: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 738179: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73817f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738181: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738187: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738189: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73818f: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 738195: mov edi, dword ptr [ebp + 0x80] */
  edi = R32((uint32_t)(ebp + 0x80u));
/* 73819b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73819d: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7381a3: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7381a8: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381aa: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7381b0: mov esi, dword ptr [ebp + 0x84] */
  esi = R32((uint32_t)(ebp + 0x84u));
/* 7381b6: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7381bc: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7381be: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7381c1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381c3: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7381c9: mov ecx, eax */
  ecx = eax;
/* 7381cb: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7381d1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381d3: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7381d6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381d8: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7381de: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7381e4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7381e6: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7381e9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7381eb: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7381f1: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7381f7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381f9: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7381fc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7381fe: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 738204: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 73820a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73820c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73820f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738211: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738217: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73821d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73821f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738222: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738224: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73822a: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738230: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738232: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738235: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738237: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73823d: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 738243: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738245: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73824a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73824c: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 738252: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738258: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73825a: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738260: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738262: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738268: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73826e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738270: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738275: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738277: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73827d: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738283: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738285: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73828b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73828d: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738293: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 738299: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73829b: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7382a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7382a2: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7382a8: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7382ae: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7382b0: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7382b6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7382b8: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7382be: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7382c4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7382c6: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7382cb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7382cd: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7382d3: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7382d9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7382db: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7382e1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7382e3: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7382e9: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7382ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7382f1: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7382f6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7382f8: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7382fe: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738304: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738306: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73830c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73830e: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738314: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73831a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73831c: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738321: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738323: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 738329: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 73832f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738331: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738337: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738339: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73833f: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 738345: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738347: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73834c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73834e: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 738354: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 73835a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73835c: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738362: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738364: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73836a: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 738370: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738372: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738377: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738379: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73837f: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738385: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738387: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73838d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73838f: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738395: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73839b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73839d: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7383a2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7383a4: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7383aa: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7383b0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7383b2: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7383b8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7383ba: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7383c0: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7383c6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7383c8: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7383cd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7383cf: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7383d5: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7383db: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7383dd: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7383e3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7383e5: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7383eb: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7383f1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7383f3: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7383f8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7383fa: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 738400: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738406: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738408: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73840e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738410: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 738416: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73841c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73841e: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738423: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738425: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73842b: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 738431: mov edi, dword ptr [ebx + 0x88] */
  edi = R32((uint32_t)(ebx + 0x88u));
/* 738437: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738439: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73843f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738441: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 738447: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73844d: mov edx, dword ptr [ebp + 0x84] */
  edx = R32((uint32_t)(ebp + 0x84u));
/* 738453: mov esi, dword ptr [ebp + 0x84] */
  esi = R32((uint32_t)(ebp + 0x84u));
/* 738459: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73845b: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 738461: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 738463: mov dword ptr [ebx + 0x84], edx */
  W32((uint32_t)(ebx + 0x84u), edx);
/* 738469: xor eax, dword ptr [ebp + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73846f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738472: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 738474: mov dword ptr [ebx + 0x88], edi */
  W32((uint32_t)(ebx + 0x88u), edi);
/* 73847a: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 738480: mov ecx, edi */
  ecx = edi;
/* 738482: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738484: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738487: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738489: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73848f: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 738495: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738497: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73849a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73849c: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7384a2: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7384a8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384aa: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7384ad: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384af: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7384b5: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7384bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7384bd: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7384c0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7384c2: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7384c8: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7384ce: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384d0: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7384d3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384d5: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7384db: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7384e1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7384e3: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7384e6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7384e8: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7384ee: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7384f4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384f6: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7384fb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7384fd: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738503: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 738509: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73850b: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738511: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738513: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 738519: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73851f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738521: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738526: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738528: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73852e: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 738534: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738536: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73853c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73853e: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 738544: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73854a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73854c: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738551: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738553: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738559: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73855f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738561: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738567: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738569: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73856f: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 738575: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738577: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73857c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73857e: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738584: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73858a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73858c: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738592: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738594: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73859a: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7385a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385a2: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7385a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385a9: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7385af: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7385b5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7385b7: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7385bd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7385bf: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7385c5: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7385cb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385cd: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7385d2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385d4: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7385da: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7385e0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7385e2: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7385e8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7385ea: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7385f0: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7385f6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385f8: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7385fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7385ff: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738605: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73860b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73860d: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738613: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738615: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73861b: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 738621: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738623: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738628: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73862a: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738630: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 738636: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738638: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73863e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738640: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 738646: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73864c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73864e: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738653: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738655: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73865b: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 738661: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738663: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738669: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73866b: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 738671: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 738677: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738679: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73867e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738680: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 738686: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73868c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73868e: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738694: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738696: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73869c: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7386a2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7386a4: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7386a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7386ab: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7386b1: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7386b7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7386b9: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7386bf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7386c1: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7386c7: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7386cd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7386cf: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7386d4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7386d6: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7386dc: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7386e2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7386e4: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7386ea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7386ec: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 7386f2: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7386f8: mov edx, dword ptr [ebp + 0x88] */
  edx = R32((uint32_t)(ebp + 0x88u));
/* 7386fe: mov edi, dword ptr [ebp + 0x88] */
  edi = R32((uint32_t)(ebp + 0x88u));
/* 738704: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 738706: mov ecx, dword ptr [ebx + 0x8c] */
  ecx = R32((uint32_t)(ebx + 0x8cu));
/* 73870c: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 738712: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 738714: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 73871a: xor eax, dword ptr [ebp + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738720: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738723: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738725: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 73872b: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 738731: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738733: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738736: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738738: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 73873e: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 738744: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738746: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738749: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73874b: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 738751: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 738757: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738759: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73875c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73875e: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 738764: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 73876a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73876c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73876f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738771: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 738777: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 73877d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73877f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 738782: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 738784: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 73878a: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 738790: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738792: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 738795: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 738797: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 73879d: mov dl, byte ptr [ebp + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x90u))) & 0xffu);
/* 7387a3: mov byte ptr [ebx + 0x90], dl */
  W8((uint32_t)(ebx + 0x90u), (edx & 0xffu));
/* 7387a9: mov al, byte ptr [ebp + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x91u))) & 0xffu);
/* 7387af: mov byte ptr [ebx + 0x91], al */
  W8((uint32_t)(ebx + 0x91u), (eax & 0xffu));
/* 7387b5: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* 7387bb: mov dword ptr [ebx + 0x94], ecx */
  W32((uint32_t)(ebx + 0x94u), ecx);
/* 7387c1: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* 7387c7: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
/* 7387cd: mov eax, dword ptr [ebp + 0x9c] */
  eax = R32((uint32_t)(ebp + 0x9cu));
/* 7387d3: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
/* 7387d9: mov ecx, dword ptr [ebp + 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xa0u));
/* 7387df: mov dword ptr [ebx + 0xa0], ecx */
  W32((uint32_t)(ebx + 0xa0u), ecx);
/* 7387e5: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 7387eb: mov dword ptr [ebx + 0xa4], edx */
  W32((uint32_t)(ebx + 0xa4u), edx);
/* 7387f1: mov eax, dword ptr [ebp + 0xa8] */
  eax = R32((uint32_t)(ebp + 0xa8u));
/* 7387f7: mov dword ptr [ebx + 0xa8], eax */
  W32((uint32_t)(ebx + 0xa8u), eax);
/* 7387fd: mov ecx, dword ptr [ebp + 0xac] */
  ecx = R32((uint32_t)(ebp + 0xacu));
/* 738803: mov dword ptr [ebx + 0xac], ecx */
  W32((uint32_t)(ebx + 0xacu), ecx);
/* 738809: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 73880f: mov dword ptr [ebx + 0xb0], edx */
  W32((uint32_t)(ebx + 0xb0u), edx);
/* 738815: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 73881b: mov dword ptr [ebx + 0xb4], eax */
  W32((uint32_t)(ebx + 0xb4u), eax);
/* 738821: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 738827: mov dword ptr [ebx + 0xb8], ecx */
  W32((uint32_t)(ebx + 0xb8u), ecx);
/* 73882d: mov edx, dword ptr [ebp + 0xbc] */
  edx = R32((uint32_t)(ebp + 0xbcu));
/* 738833: mov dword ptr [ebx + 0xbc], edx */
  W32((uint32_t)(ebx + 0xbcu), edx);
/* 738839: lea eax, [ebp + 0xc0] */
  eax = (uint32_t)(ebp + 0xc0u);
/* 73883f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 738841: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 738847: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738849: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73884c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73884f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738852: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738855: mov ecx, dword ptr [ebp + 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xccu));
/* 73885b: mov dword ptr [ebx + 0xcc], ecx */
  W32((uint32_t)(ebx + 0xccu), ecx);
/* 738861: mov edx, dword ptr [ebp + 0xd0] */
  edx = R32((uint32_t)(ebp + 0xd0u));
/* 738867: mov dword ptr [ebx + 0xd0], edx */
  W32((uint32_t)(ebx + 0xd0u), edx);
/* 73886d: mov eax, dword ptr [ebp + 0xd4] */
  eax = R32((uint32_t)(ebp + 0xd4u));
/* 738873: lea edx, [ebp + 0xd8] */
  edx = (uint32_t)(ebp + 0xd8u);
/* 738879: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 73887f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 738880: mov dword ptr [ebx + 0xd4], eax */
  W32((uint32_t)(ebx + 0xd4u), eax);
/* 738886: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x73888bu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 73888b: mov eax, dword ptr [ebp + 0xe4] */
  eax = R32((uint32_t)(ebp + 0xe4u));
/* 738891: mov dword ptr [ebx + 0xe4], eax */
  W32((uint32_t)(ebx + 0xe4u), eax);
/* 738897: mov ecx, dword ptr [ebp + 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xe8u));
/* 73889d: mov dword ptr [ebx + 0xe8], ecx */
  W32((uint32_t)(ebx + 0xe8u), ecx);
/* 7388a3: mov edx, dword ptr [ebp + 0xec] */
  edx = R32((uint32_t)(ebp + 0xecu));
/* 7388a9: mov dword ptr [ebx + 0xec], edx */
  W32((uint32_t)(ebx + 0xecu), edx);
/* 7388af: mov eax, dword ptr [ebp + 0xf0] */
  eax = R32((uint32_t)(ebp + 0xf0u));
/* 7388b5: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 7388ba: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7388c0: mov ecx, dword ptr [ebp + 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xf4u));
/* 7388c6: mov dword ptr [ebx + 0xf4], ecx */
  W32((uint32_t)(ebx + 0xf4u), ecx);
/* 7388cc: mov edx, dword ptr [ebp + 0xf8] */
  edx = R32((uint32_t)(ebp + 0xf8u));
/* 7388d2: mov dword ptr [ebx + 0xf8], edx */
  W32((uint32_t)(ebx + 0xf8u), edx);
/* 7388d8: mov eax, dword ptr [ebp + 0xfc] */
  eax = R32((uint32_t)(ebp + 0xfcu));
/* 7388de: mov dword ptr [ebx + 0xfc], eax */
  W32((uint32_t)(ebx + 0xfcu), eax);
/* 7388e4: mov ecx, dword ptr [ebp + 0x100] */
  ecx = R32((uint32_t)(ebp + 0x100u));
/* 7388ea: lea edx, [ebp + 0x104] */
  edx = (uint32_t)(ebp + 0x104u);
/* 7388f0: mov dword ptr [ebx + 0x100], ecx */
  W32((uint32_t)(ebx + 0x100u), ecx);
/* 7388f6: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 7388fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7388fd: call 0x6c6253 */
  esp -= 4; W32(esp, 0x738902u); SPILL(); f_6c6253(); if (g_unwind) return; RELOAD();
/* 738902: lea eax, [ebp + 0x110] */
  eax = (uint32_t)(ebp + 0x110u);
/* 738908: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 73890e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73890f: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 738914: call 0x6cab5f */
  esp -= 4; W32(esp, 0x738919u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 738919: lea edx, [ebp + 0x11c] */
  edx = (uint32_t)(ebp + 0x11cu);
/* 73891f: lea ecx, [ebx + 0x11c] */
  ecx = (uint32_t)(ebx + 0x11cu);
/* 738925: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 738926: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 73892b: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x738930u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 738930: lea esi, [ebp + 0x128] */
  esi = (uint32_t)(ebp + 0x128u);
/* 738936: lea edi, [ebx + 0x128] */
  edi = (uint32_t)(ebx + 0x128u);
/* 73893c: mov ecx, 7 */
  ecx = 0x7u;
/* 738941: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 738943: lea eax, [ebp + 0x144] */
  eax = (uint32_t)(ebp + 0x144u);
/* 738949: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73894b: lea ecx, [ebx + 0x144] */
  ecx = (uint32_t)(ebx + 0x144u);
/* 738951: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738953: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738956: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738959: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73895c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73895f: lea ecx, [ebp + 0x150] */
  ecx = (uint32_t)(ebp + 0x150u);
/* 738965: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 738967: lea edx, [ebx + 0x150] */
  edx = (uint32_t)(ebx + 0x150u);
/* 73896d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73896f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 738972: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 738975: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 738978: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73897b: mov edx, dword ptr [ebp + 0x15c] */
  edx = R32((uint32_t)(ebp + 0x15cu));
/* 738981: mov dword ptr [ebx + 0x15c], edx */
  W32((uint32_t)(ebx + 0x15cu), edx);
/* 738987: mov eax, dword ptr [ebp + 0x160] */
  eax = R32((uint32_t)(ebp + 0x160u));
/* 73898d: mov dword ptr [ebx + 0x160], eax */
  W32((uint32_t)(ebx + 0x160u), eax);
/* 738993: mov ecx, dword ptr [ebp + 0x164] */
  ecx = R32((uint32_t)(ebp + 0x164u));
/* 738999: mov dword ptr [ebx + 0x164], ecx */
  W32((uint32_t)(ebx + 0x164u), ecx);
/* 73899f: mov edx, dword ptr [ebp + 0x168] */
  edx = R32((uint32_t)(ebp + 0x168u));
/* 7389a5: mov dword ptr [ebx + 0x168], edx */
  W32((uint32_t)(ebx + 0x168u), edx);
/* 7389ab: mov eax, dword ptr [ebp + 0x16c] */
  eax = R32((uint32_t)(ebp + 0x16cu));
/* 7389b1: mov dword ptr [ebx + 0x16c], eax */
  W32((uint32_t)(ebx + 0x16cu), eax);
/* 7389b7: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 7389bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7389bf: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 7389c5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7389c7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7389ca: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7389cd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7389d0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7389d3: lea edx, [ebp + 0x17c] */
  edx = (uint32_t)(ebp + 0x17cu);
/* 7389d9: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7389db: lea eax, [ebx + 0x17c] */
  eax = (uint32_t)(ebx + 0x17cu);
/* 7389e1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7389e3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7389e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7389e9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7389ec: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7389ef: lea eax, [ebp + 0x188] */
  eax = (uint32_t)(ebp + 0x188u);
/* 7389f5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7389f7: lea ecx, [ebx + 0x188] */
  ecx = (uint32_t)(ebx + 0x188u);
/* 7389fd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7389ff: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738a02: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738a05: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738a08: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738a0b: lea ecx, [ebp + 0x194] */
  ecx = (uint32_t)(ebp + 0x194u);
/* 738a11: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 738a13: lea edx, [ebx + 0x194] */
  edx = (uint32_t)(ebx + 0x194u);
/* 738a19: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 738a1b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 738a1e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 738a21: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 738a24: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 738a27: lea edx, [ebp + 0x1a0] */
  edx = (uint32_t)(ebp + 0x1a0u);
/* 738a2d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 738a2f: lea eax, [ebx + 0x1a0] */
  eax = (uint32_t)(ebx + 0x1a0u);
/* 738a35: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 738a37: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 738a3a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 738a3d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 738a40: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 738a43: lea eax, [ebp + 0x1ac] */
  eax = (uint32_t)(ebp + 0x1acu);
/* 738a49: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 738a4b: lea ecx, [ebx + 0x1ac] */
  ecx = (uint32_t)(ebx + 0x1acu);
/* 738a51: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738a53: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738a56: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738a59: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738a5c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738a5f: lea esi, [ebp + 0x1b8] */
  esi = (uint32_t)(ebp + 0x1b8u);
/* 738a65: lea edi, [ebx + 0x1b8] */
  edi = (uint32_t)(ebx + 0x1b8u);
/* 738a6b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 738a70: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 738a72: mov ecx, dword ptr [ebp + 0x1f8] */
  ecx = R32((uint32_t)(ebp + 0x1f8u));
/* 738a78: lea edx, [ebp + 0x1fc] */
  edx = (uint32_t)(ebp + 0x1fcu);
/* 738a7e: mov dword ptr [ebx + 0x1f8], ecx */
  W32((uint32_t)(ebx + 0x1f8u), ecx);
/* 738a84: lea ecx, [ebx + 0x1fc] */
  ecx = (uint32_t)(ebx + 0x1fcu);
/* 738a8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 738a8b: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 738a90: call 0x6cab5f */
  esp -= 4; W32(esp, 0x738a95u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 738a95: lea eax, [ebp + 0x208] */
  eax = (uint32_t)(ebp + 0x208u);
/* 738a9b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 738a9d: lea ecx, [ebx + 0x208] */
  ecx = (uint32_t)(ebx + 0x208u);
/* 738aa3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738aa5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738aa8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738aab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738aae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738ab1: lea ecx, [ebp + 0x214] */
  ecx = (uint32_t)(ebp + 0x214u);
/* 738ab7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 738ab9: lea edx, [ebx + 0x214] */
  edx = (uint32_t)(ebx + 0x214u);
/* 738abf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 738ac1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 738ac4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 738ac7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 738aca: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 738acd: lea esi, [ebp + 0x220] */
  esi = (uint32_t)(ebp + 0x220u);
/* 738ad3: lea edi, [ebx + 0x220] */
  edi = (uint32_t)(ebx + 0x220u);
/* 738ad9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 738ade: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 738ae0: lea edx, [ebp + 0x260] */
  edx = (uint32_t)(ebp + 0x260u);
/* 738ae6: lea ecx, [ebx + 0x260] */
  ecx = (uint32_t)(ebx + 0x260u);
/* 738aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 738aed: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 738af2: call 0x6c8af8 */
  esp -= 4; W32(esp, 0x738af7u); SPILL(); f_6c8af8(); if (g_unwind) return; RELOAD();
/* 738af7: lea eax, [ebp + 0x26c] */
  eax = (uint32_t)(ebp + 0x26cu);
/* 738afd: lea ecx, [ebx + 0x26c] */
  ecx = (uint32_t)(ebx + 0x26cu);
/* 738b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 738b04: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 738b09: call 0x6c3a71 */
  esp -= 4; W32(esp, 0x738b0eu); SPILL(); f_6c3a71(); if (g_unwind) return; RELOAD();
/* 738b0e: mov ecx, dword ptr [ebp + 0x278] */
  ecx = R32((uint32_t)(ebp + 0x278u));
/* 738b14: mov dword ptr [ebx + 0x278], ecx */
  W32((uint32_t)(ebx + 0x278u), ecx);
/* 738b1a: mov edx, dword ptr [ebp + 0x27c] */
  edx = R32((uint32_t)(ebp + 0x27cu));
/* 738b20: mov dword ptr [ebx + 0x27c], edx */
  W32((uint32_t)(ebx + 0x27cu), edx);
/* 738b26: mov eax, dword ptr [ebp + 0x280] */
  eax = R32((uint32_t)(ebp + 0x280u));
/* 738b2c: mov dword ptr [ebx + 0x280], eax */
  W32((uint32_t)(ebx + 0x280u), eax);
/* 738b32: mov ecx, dword ptr [ebp + 0x284] */
  ecx = R32((uint32_t)(ebp + 0x284u));
/* 738b38: lea edx, [ebp + 0x288] */
  edx = (uint32_t)(ebp + 0x288u);
/* 738b3e: mov dword ptr [ebx + 0x284], ecx */
  W32((uint32_t)(ebx + 0x284u), ecx);
/* 738b44: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 738b46: mov byte ptr [esp + 0x1c], 0xb */
  W8((uint32_t)(esp + 0x1cu), 0xbu);
/* 738b4b: lea eax, [ebx + 0x288] */
  eax = (uint32_t)(ebx + 0x288u);
/* 738b51: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 738b53: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 738b56: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 738b59: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 738b5c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 738b5f: lea eax, [ebp + 0x294] */
  eax = (uint32_t)(ebp + 0x294u);
/* 738b65: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 738b67: lea ecx, [ebx + 0x294] */
  ecx = (uint32_t)(ebx + 0x294u);
/* 738b6d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738b6f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738b72: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738b75: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738b78: lea edx, [ebp + 0x2a0] */
  edx = (uint32_t)(ebp + 0x2a0u);
/* 738b7e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738b81: lea ecx, [ebx + 0x2a0] */
  ecx = (uint32_t)(ebx + 0x2a0u);
/* 738b87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 738b88: call 0x6c925f */
  esp -= 4; W32(esp, 0x738b8du); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 738b8d: mov eax, dword ptr [ebp + 0x2ac] */
  eax = R32((uint32_t)(ebp + 0x2acu));
/* 738b93: mov dword ptr [ebx + 0x2ac], eax */
  W32((uint32_t)(ebx + 0x2acu), eax);
/* 738b99: mov cl, byte ptr [ebp + 0x2b0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b0u))) & 0xffu);
/* 738b9f: mov byte ptr [ebx + 0x2b0], cl */
  W8((uint32_t)(ebx + 0x2b0u), (ecx & 0xffu));
/* 738ba5: mov dl, byte ptr [ebp + 0x2b1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b1u))) & 0xffu);
/* 738bab: mov byte ptr [ebx + 0x2b1], dl */
  W8((uint32_t)(ebx + 0x2b1u), (edx & 0xffu));
/* 738bb1: mov eax, dword ptr [ebp + 0x2b4] */
  eax = R32((uint32_t)(ebp + 0x2b4u));
/* 738bb7: mov dword ptr [ebx + 0x2b4], eax */
  W32((uint32_t)(ebx + 0x2b4u), eax);
/* 738bbd: mov ecx, dword ptr [ebp + 0x2b8] */
  ecx = R32((uint32_t)(ebp + 0x2b8u));
/* 738bc3: mov dword ptr [ebx + 0x2b8], ecx */
  W32((uint32_t)(ebx + 0x2b8u), ecx);
/* 738bc9: mov edx, dword ptr [ebp + 0x2bc] */
  edx = R32((uint32_t)(ebp + 0x2bcu));
/* 738bcf: mov dword ptr [ebx + 0x2bc], edx */
  W32((uint32_t)(ebx + 0x2bcu), edx);
/* 738bd5: mov al, byte ptr [ebp + 0x2c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c0u))) & 0xffu);
/* 738bdb: mov byte ptr [ebx + 0x2c0], al */
  W8((uint32_t)(ebx + 0x2c0u), (eax & 0xffu));
/* 738be1: mov ecx, dword ptr [ebp + 0x2c4] */
  ecx = R32((uint32_t)(ebp + 0x2c4u));
/* 738be7: mov dword ptr [ebx + 0x2c4], ecx */
  W32((uint32_t)(ebx + 0x2c4u), ecx);
/* 738bed: mov dl, byte ptr [ebp + 0x2c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c8u))) & 0xffu);
/* 738bf3: mov byte ptr [ebx + 0x2c8], dl */
  W8((uint32_t)(ebx + 0x2c8u), (edx & 0xffu));
/* 738bf9: mov al, byte ptr [ebp + 0x2c9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c9u))) & 0xffu);
/* 738bff: mov byte ptr [ebx + 0x2c9], al */
  W8((uint32_t)(ebx + 0x2c9u), (eax & 0xffu));
/* 738c05: mov cl, byte ptr [ebp + 0x2ca] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cau))) & 0xffu);
/* 738c0b: mov byte ptr [ebx + 0x2ca], cl */
  W8((uint32_t)(ebx + 0x2cau), (ecx & 0xffu));
/* 738c11: mov edx, dword ptr [ebp + 0x2cc] */
  edx = R32((uint32_t)(ebp + 0x2ccu));
/* 738c17: mov dword ptr [ebx + 0x2cc], edx */
  W32((uint32_t)(ebx + 0x2ccu), edx);
/* 738c1d: mov eax, dword ptr [ebp + 0x2d0] */
  eax = R32((uint32_t)(ebp + 0x2d0u));
/* 738c23: mov dword ptr [ebx + 0x2d0], eax */
  W32((uint32_t)(ebx + 0x2d0u), eax);
/* 738c29: mov ecx, dword ptr [ebp + 0x2d4] */
  ecx = R32((uint32_t)(ebp + 0x2d4u));
/* 738c2f: mov dword ptr [ebx + 0x2d4], ecx */
  W32((uint32_t)(ebx + 0x2d4u), ecx);
/* 738c35: mov edx, dword ptr [ebp + 0x2d8] */
  edx = R32((uint32_t)(ebp + 0x2d8u));
/* 738c3b: mov dword ptr [ebx + 0x2d8], edx */
  W32((uint32_t)(ebx + 0x2d8u), edx);
/* 738c41: mov eax, dword ptr [ebp + 0x2dc] */
  eax = R32((uint32_t)(ebp + 0x2dcu));
/* 738c47: mov dword ptr [ebx + 0x2dc], eax */
  W32((uint32_t)(ebx + 0x2dcu), eax);
/* 738c4d: mov ecx, dword ptr [ebp + 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0x2e0u));
/* 738c53: mov dword ptr [ebx + 0x2e0], ecx */
  W32((uint32_t)(ebx + 0x2e0u), ecx);
/* 738c59: lea edx, [ebp + 0x2e4] */
  edx = (uint32_t)(ebp + 0x2e4u);
/* 738c5f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 738c61: lea eax, [ebx + 0x2e4] */
  eax = (uint32_t)(ebx + 0x2e4u);
/* 738c67: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 738c69: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 738c6c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 738c6f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 738c72: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 738c75: lea eax, [ebp + 0x2f0] */
  eax = (uint32_t)(ebp + 0x2f0u);
/* 738c7b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 738c7d: lea ecx, [ebx + 0x2f0] */
  ecx = (uint32_t)(ebx + 0x2f0u);
/* 738c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 738c85: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 738c88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 738c8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 738c8e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 738c91: mov ecx, dword ptr [ebp + 0x2fc] */
  ecx = R32((uint32_t)(ebp + 0x2fcu));
/* 738c97: mov dword ptr [ebx + 0x2fc], ecx */
  W32((uint32_t)(ebx + 0x2fcu), ecx);
/* 738c9d: lea edx, [ebp + 0x300] */
  edx = (uint32_t)(ebp + 0x300u);
/* 738ca3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 738ca5: lea eax, [ebx + 0x300] */
  eax = (uint32_t)(ebx + 0x300u);
/* 738cab: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 738cad: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 738cb0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 738cb3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 738cb6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 738cb9: mov eax, dword ptr [ebp + 0x30c] */
  eax = R32((uint32_t)(ebp + 0x30cu));
/* 738cbf: mov byte ptr [esp + 0x1c], 0xc */
  W8((uint32_t)(esp + 0x1cu), 0xcu);
/* 738cc4: mov dword ptr [ebx + 0x30c], eax */
  W32((uint32_t)(ebx + 0x30cu), eax);
/* 738cca: mov ecx, dword ptr [ebp + 0x310] */
  ecx = R32((uint32_t)(ebp + 0x310u));
/* 738cd0: mov dword ptr [ebx + 0x310], ecx */
  W32((uint32_t)(ebx + 0x310u), ecx);
/* 738cd6: lea edx, [ebp + 0x314] */
  edx = (uint32_t)(ebp + 0x314u);
/* 738cdc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 738cde: lea eax, [ebx + 0x314] */
  eax = (uint32_t)(ebx + 0x314u);
/* 738ce4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 738ce6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 738ce9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 738cec: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 738cef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 738cf2: mov al, byte ptr [ebp + 0x320] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x320u))) & 0xffu);
/* 738cf8: mov byte ptr [ebx + 0x320], al */
  W8((uint32_t)(ebx + 0x320u), (eax & 0xffu));
/* 738cfe: mov ecx, dword ptr [ebp + 0x324] */
  ecx = R32((uint32_t)(ebp + 0x324u));
/* 738d04: mov dword ptr [ebx + 0x324], ecx */
  W32((uint32_t)(ebx + 0x324u), ecx);
/* 738d0a: mov edx, dword ptr [ebp + 0x328] */
  edx = R32((uint32_t)(ebp + 0x328u));
/* 738d10: mov dword ptr [ebx + 0x328], edx */
  W32((uint32_t)(ebx + 0x328u), edx);
/* 738d16: mov eax, dword ptr [ebp + 0x32c] */
  eax = R32((uint32_t)(ebp + 0x32cu));
/* 738d1c: add ebp, 0x330 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x330u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 738d22: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 738d23: lea ecx, [ebx + 0x330] */
  ecx = (uint32_t)(ebx + 0x330u);
/* 738d29: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 738d2f: call 0x6c4426 */
  esp -= 4; W32(esp, 0x738d34u); SPILL(); f_6c4426(); if (g_unwind) return; RELOAD();
/* 738d34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 738d38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 738d39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 738d3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 738d3b: mov eax, ebx */
  eax = ebx;
/* 738d3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 738d3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 738d45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 738d48: ret 4 */
  esp += 8; SPILL(); return;
}

void f_739120(void) {
  LOAD_REGS();
L_739120: /* 739120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 739121: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 739122: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 739126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 739127: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 739128: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 739129: mov ebx, ecx */
  ebx = ecx;
/* 73912b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x739131u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 739131: mov al, byte ptr [ebp + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 739134: mov byte ptr [ebx + 0x28], al */
  W8((uint32_t)(ebx + 0x28u), (eax & 0xffu));
/* 739137: mov cl, byte ptr [ebp + 0x29] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x29u))) & 0xffu);
/* 73913a: mov byte ptr [ebx + 0x29], cl */
  W8((uint32_t)(ebx + 0x29u), (ecx & 0xffu));
/* 73913d: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 739140: mov dword ptr [ebx + 0x2c], edx */
  W32((uint32_t)(ebx + 0x2cu), edx);
/* 739143: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 739146: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* 739149: mov cl, byte ptr [ebp + 0x34] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 73914c: mov byte ptr [ebx + 0x34], cl */
  W8((uint32_t)(ebx + 0x34u), (ecx & 0xffu));
/* 73914f: mov dl, byte ptr [ebp + 0x35] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x35u))) & 0xffu);
/* 739152: mov byte ptr [ebx + 0x35], dl */
  W8((uint32_t)(ebx + 0x35u), (edx & 0xffu));
/* 739155: mov al, byte ptr [ebp + 0x36] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x36u))) & 0xffu);
/* 739158: mov byte ptr [ebx + 0x36], al */
  W8((uint32_t)(ebx + 0x36u), (eax & 0xffu));
/* 73915b: mov cl, byte ptr [ebp + 0x37] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x37u))) & 0xffu);
/* 73915e: mov byte ptr [ebx + 0x37], cl */
  W8((uint32_t)(ebx + 0x37u), (ecx & 0xffu));
/* 739161: mov dl, byte ptr [ebp + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x38u))) & 0xffu);
/* 739164: lea ecx, [ebp + 0x40] */
  ecx = (uint32_t)(ebp + 0x40u);
/* 739167: mov byte ptr [ebx + 0x38], dl */
  W8((uint32_t)(ebx + 0x38u), (edx & 0xffu));
/* 73916a: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 73916d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73916e: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 739171: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 739174: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73917au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73917a: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 73917d: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 739180: mov al, byte ptr [ebp + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x50u))) & 0xffu);
/* 739183: mov byte ptr [ebx + 0x50], al */
  W8((uint32_t)(ebx + 0x50u), (eax & 0xffu));
/* 739186: mov cl, byte ptr [ebp + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x51u))) & 0xffu);
/* 739189: mov byte ptr [ebx + 0x51], cl */
  W8((uint32_t)(ebx + 0x51u), (ecx & 0xffu));
/* 73918c: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* 73918f: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
/* 739192: mov eax, dword ptr [ebp + 0x58] */
  eax = R32((uint32_t)(ebp + 0x58u));
/* 739195: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 739198: mov ecx, dword ptr [ebp + 0x5c] */
  ecx = R32((uint32_t)(ebp + 0x5cu));
/* 73919b: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* 73919e: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* 7391a1: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 7391a4: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 7391a7: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 7391aa: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 7391ad: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* 7391b0: mov dl, byte ptr [ebp + 0x6c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x6cu))) & 0xffu);
/* 7391b3: lea eax, [ebp + 0x70] */
  eax = (uint32_t)(ebp + 0x70u);
/* 7391b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7391b7: lea ecx, [ebx + 0x70] */
  ecx = (uint32_t)(ebx + 0x70u);
/* 7391ba: mov byte ptr [ebx + 0x6c], dl */
  W8((uint32_t)(ebx + 0x6cu), (edx & 0xffu));
/* 7391bd: call 0x6c2f09 */
  esp -= 4; W32(esp, 0x7391c2u); SPILL(); f_6c2f09(); if (g_unwind) return; RELOAD();
/* 7391c2: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 7391c5: mov edx, dword ptr [ebx + 0x80] */
  edx = R32((uint32_t)(ebx + 0x80u));
/* 7391cb: mov esi, dword ptr [ebx + 0x80] */
  esi = R32((uint32_t)(ebx + 0x80u));
/* 7391d1: mov dword ptr [ebx + 0x7c], ecx */
  W32((uint32_t)(ebx + 0x7cu), ecx);
/* 7391d4: xor edx, dword ptr [ebp + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7391da: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7391dd: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7391df: mov dword ptr [ebx + 0x80], esi */
  W32((uint32_t)(ebx + 0x80u), esi);
/* 7391e5: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7391eb: mov ecx, esi */
  ecx = esi;
/* 7391ed: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7391ef: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7391f2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7391f4: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7391fa: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739200: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739202: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739205: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739207: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73920d: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739213: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739215: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739218: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73921a: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739220: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739226: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739228: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73922b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73922d: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739233: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739239: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73923b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73923e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739240: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739246: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73924c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73924e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739251: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739253: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739259: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73925f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739261: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739266: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739268: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73926e: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739274: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739276: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73927c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73927e: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739284: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73928a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73928c: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739291: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739293: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739299: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73929f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392a1: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7392a7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392a9: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7392af: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7392b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7392b7: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7392bc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7392be: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7392c4: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7392ca: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392cc: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7392d2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392d4: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7392da: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7392e0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7392e2: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7392e7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7392e9: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7392ef: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7392f5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392f7: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7392fd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7392ff: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739305: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73930b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73930d: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739312: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739314: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73931a: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739320: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739322: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739328: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73932a: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739330: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739336: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739338: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73933d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73933f: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739345: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73934b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73934d: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739353: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739355: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73935b: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739361: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739363: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739368: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73936a: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739370: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739376: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739378: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73937e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739380: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739386: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73938c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73938e: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739393: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739395: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73939b: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7393a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7393a3: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7393a9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7393ab: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7393b1: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7393b7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7393b9: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7393be: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7393c0: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7393c6: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7393cc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7393ce: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7393d4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7393d6: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 7393dc: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7393e2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7393e4: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7393e9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7393eb: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7393f1: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 7393f7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7393f9: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7393ff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739401: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739407: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 73940d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73940f: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739414: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739416: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73941c: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 739422: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739424: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73942a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73942c: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 739432: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739438: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73943a: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73943f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739441: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 739447: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* 73944d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73944f: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739455: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739457: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 73945d: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 739463: mov edi, dword ptr [ebp + 0x80] */
  edi = R32((uint32_t)(ebp + 0x80u));
/* 739469: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73946b: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 739471: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739476: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739478: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 73947e: mov esi, dword ptr [ebp + 0x84] */
  esi = R32((uint32_t)(ebp + 0x84u));
/* 739484: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 73948a: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73948c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73948f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739491: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 739497: mov ecx, eax */
  ecx = eax;
/* 739499: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73949f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394a1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7394a4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394a6: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7394ac: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7394b2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7394b4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7394b7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7394b9: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7394bf: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7394c5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394c7: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7394ca: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394cc: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7394d2: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7394d8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7394da: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7394dd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7394df: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7394e5: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7394eb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394ed: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7394f0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7394f2: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7394f8: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7394fe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739500: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739503: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739505: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73950b: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739511: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739513: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739518: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73951a: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 739520: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 739526: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739528: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73952e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739530: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 739536: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73953c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73953e: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739543: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739545: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73954b: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 739551: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739553: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739559: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73955b: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 739561: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739567: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739569: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73956e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739570: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 739576: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 73957c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73957e: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739584: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739586: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73958c: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739592: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739594: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739599: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73959b: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7395a1: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7395a7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7395a9: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7395af: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7395b1: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7395b7: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7395bd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7395bf: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7395c4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7395c6: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7395cc: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7395d2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7395d4: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7395da: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7395dc: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7395e2: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7395e8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7395ea: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7395ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7395f1: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7395f7: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7395fd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7395ff: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739605: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739607: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73960d: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739613: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739615: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73961a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73961c: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 739622: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 739628: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73962a: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739630: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739632: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 739638: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 73963e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739640: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739645: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739647: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 73964d: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 739653: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739655: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73965b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73965d: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 739663: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739669: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73966b: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739670: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739672: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 739678: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 73967e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739680: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739686: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739688: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73968e: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 739694: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739696: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73969b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73969d: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7396a3: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7396a9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7396ab: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7396b1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7396b3: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7396b9: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7396bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7396c1: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7396c6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7396c8: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7396ce: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7396d4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7396d6: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7396dc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7396de: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7396e4: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 7396ea: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7396ec: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7396f1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7396f3: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 7396f9: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7396ff: mov edi, dword ptr [ebx + 0x88] */
  edi = R32((uint32_t)(ebx + 0x88u));
/* 739705: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739707: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73970d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73970f: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 739715: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 73971b: mov edx, dword ptr [ebp + 0x84] */
  edx = R32((uint32_t)(ebp + 0x84u));
/* 739721: mov esi, dword ptr [ebp + 0x84] */
  esi = R32((uint32_t)(ebp + 0x84u));
/* 739727: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 739729: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73972f: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 739731: mov dword ptr [ebx + 0x84], edx */
  W32((uint32_t)(ebx + 0x84u), edx);
/* 739737: xor eax, dword ptr [ebp + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x88u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73973d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739740: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 739742: mov dword ptr [ebx + 0x88], edi */
  W32((uint32_t)(ebx + 0x88u), edi);
/* 739748: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73974e: mov ecx, edi */
  ecx = edi;
/* 739750: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739752: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739755: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739757: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73975d: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739763: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739765: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739768: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73976a: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739770: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739776: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739778: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73977b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73977d: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 739783: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739789: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73978b: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73978e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739790: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739796: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73979c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73979e: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7397a1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7397a3: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7397a9: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7397af: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7397b1: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7397b4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7397b6: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7397bc: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7397c2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7397c4: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7397c9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7397cb: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7397d1: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7397d7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7397d9: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7397df: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7397e1: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7397e7: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7397ed: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7397ef: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7397f4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7397f6: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7397fc: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739802: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739804: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73980a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73980c: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739812: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739818: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73981a: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73981f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739821: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 739827: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73982d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73982f: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739835: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739837: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73983d: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739843: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739845: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73984a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73984c: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 739852: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739858: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73985a: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739860: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739862: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739868: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73986e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739870: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739875: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739877: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73987d: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739883: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739885: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73988b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73988d: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739893: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739899: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73989b: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7398a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7398a2: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7398a8: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7398ae: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7398b0: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7398b6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7398b8: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7398be: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7398c4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7398c6: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7398cb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7398cd: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7398d3: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7398d9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7398db: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7398e1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7398e3: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7398e9: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 7398ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7398f1: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7398f6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7398f8: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7398fe: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739904: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739906: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73990c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73990e: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739914: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73991a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73991c: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739921: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739923: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 739929: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73992f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739931: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739937: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739939: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73993f: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739945: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739947: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73994c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73994e: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 739954: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 73995a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73995c: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739962: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739964: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 73996a: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 739970: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739972: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739977: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739979: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 73997f: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 739985: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739987: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73998d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73998f: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 739995: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 73999b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73999d: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7399a2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7399a4: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7399aa: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 7399b0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7399b2: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7399b8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7399ba: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 7399c0: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 7399c6: mov edx, dword ptr [ebp + 0x88] */
  edx = R32((uint32_t)(ebp + 0x88u));
/* 7399cc: mov edi, dword ptr [ebp + 0x88] */
  edi = R32((uint32_t)(ebp + 0x88u));
/* 7399d2: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7399d4: mov ecx, dword ptr [ebx + 0x8c] */
  ecx = R32((uint32_t)(ebx + 0x8cu));
/* 7399da: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7399e0: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7399e2: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 7399e8: xor eax, dword ptr [ebp + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7399ee: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7399f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7399f3: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 7399f9: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 7399ff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a01: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739a04: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a06: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 739a0c: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 739a12: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a14: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739a17: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a19: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 739a1f: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 739a25: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a27: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739a2a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a2c: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 739a32: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 739a38: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a3a: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739a3d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a3f: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 739a45: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 739a4b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a4d: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 739a50: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 739a52: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 739a58: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 739a5e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a60: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 739a63: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 739a65: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 739a6b: mov dl, byte ptr [ebp + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x90u))) & 0xffu);
/* 739a71: mov byte ptr [ebx + 0x90], dl */
  W8((uint32_t)(ebx + 0x90u), (edx & 0xffu));
/* 739a77: mov al, byte ptr [ebp + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x91u))) & 0xffu);
/* 739a7d: mov byte ptr [ebx + 0x91], al */
  W8((uint32_t)(ebx + 0x91u), (eax & 0xffu));
/* 739a83: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* 739a89: mov dword ptr [ebx + 0x94], ecx */
  W32((uint32_t)(ebx + 0x94u), ecx);
/* 739a8f: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* 739a95: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
/* 739a9b: mov eax, dword ptr [ebp + 0x9c] */
  eax = R32((uint32_t)(ebp + 0x9cu));
/* 739aa1: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
/* 739aa7: mov ecx, dword ptr [ebp + 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xa0u));
/* 739aad: mov dword ptr [ebx + 0xa0], ecx */
  W32((uint32_t)(ebx + 0xa0u), ecx);
/* 739ab3: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 739ab9: mov dword ptr [ebx + 0xa4], edx */
  W32((uint32_t)(ebx + 0xa4u), edx);
/* 739abf: mov eax, dword ptr [ebp + 0xa8] */
  eax = R32((uint32_t)(ebp + 0xa8u));
/* 739ac5: mov dword ptr [ebx + 0xa8], eax */
  W32((uint32_t)(ebx + 0xa8u), eax);
/* 739acb: mov ecx, dword ptr [ebp + 0xac] */
  ecx = R32((uint32_t)(ebp + 0xacu));
/* 739ad1: mov dword ptr [ebx + 0xac], ecx */
  W32((uint32_t)(ebx + 0xacu), ecx);
/* 739ad7: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 739add: mov dword ptr [ebx + 0xb0], edx */
  W32((uint32_t)(ebx + 0xb0u), edx);
/* 739ae3: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 739ae9: mov dword ptr [ebx + 0xb4], eax */
  W32((uint32_t)(ebx + 0xb4u), eax);
/* 739aef: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 739af5: mov dword ptr [ebx + 0xb8], ecx */
  W32((uint32_t)(ebx + 0xb8u), ecx);
/* 739afb: mov edx, dword ptr [ebp + 0xbc] */
  edx = R32((uint32_t)(ebp + 0xbcu));
/* 739b01: mov dword ptr [ebx + 0xbc], edx */
  W32((uint32_t)(ebx + 0xbcu), edx);
/* 739b07: lea eax, [ebp + 0xc0] */
  eax = (uint32_t)(ebp + 0xc0u);
/* 739b0d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 739b0f: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 739b15: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 739b17: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 739b1a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 739b1d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 739b20: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 739b23: mov ecx, dword ptr [ebp + 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xccu));
/* 739b29: mov dword ptr [ebx + 0xcc], ecx */
  W32((uint32_t)(ebx + 0xccu), ecx);
/* 739b2f: mov edx, dword ptr [ebp + 0xd0] */
  edx = R32((uint32_t)(ebp + 0xd0u));
/* 739b35: lea ecx, [ebp + 0xd8] */
  ecx = (uint32_t)(ebp + 0xd8u);
/* 739b3b: mov dword ptr [ebx + 0xd0], edx */
  W32((uint32_t)(ebx + 0xd0u), edx);
/* 739b41: mov eax, dword ptr [ebp + 0xd4] */
  eax = R32((uint32_t)(ebp + 0xd4u));
/* 739b47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 739b48: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 739b4e: mov dword ptr [ebx + 0xd4], eax */
  W32((uint32_t)(ebx + 0xd4u), eax);
/* 739b54: call 0x6c5eac */
  esp -= 4; W32(esp, 0x739b59u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 739b59: mov edx, dword ptr [ebp + 0xe4] */
  edx = R32((uint32_t)(ebp + 0xe4u));
/* 739b5f: mov dword ptr [ebx + 0xe4], edx */
  W32((uint32_t)(ebx + 0xe4u), edx);
/* 739b65: mov eax, dword ptr [ebp + 0xe8] */
  eax = R32((uint32_t)(ebp + 0xe8u));
/* 739b6b: mov dword ptr [ebx + 0xe8], eax */
  W32((uint32_t)(ebx + 0xe8u), eax);
/* 739b71: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* 739b77: mov dword ptr [ebx + 0xec], ecx */
  W32((uint32_t)(ebx + 0xecu), ecx);
/* 739b7d: mov edx, dword ptr [ebp + 0xf0] */
  edx = R32((uint32_t)(ebp + 0xf0u));
/* 739b83: mov dword ptr [ebx + 0xf0], edx */
  W32((uint32_t)(ebx + 0xf0u), edx);
/* 739b89: mov eax, dword ptr [ebp + 0xf4] */
  eax = R32((uint32_t)(ebp + 0xf4u));
/* 739b8f: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* 739b95: mov ecx, dword ptr [ebp + 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xf8u));
/* 739b9b: mov dword ptr [ebx + 0xf8], ecx */
  W32((uint32_t)(ebx + 0xf8u), ecx);
/* 739ba1: mov edx, dword ptr [ebp + 0xfc] */
  edx = R32((uint32_t)(ebp + 0xfcu));
/* 739ba7: mov dword ptr [ebx + 0xfc], edx */
  W32((uint32_t)(ebx + 0xfcu), edx);
/* 739bad: mov eax, dword ptr [ebp + 0x100] */
  eax = R32((uint32_t)(ebp + 0x100u));
/* 739bb3: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 739bb9: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
/* 739bbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 739bc0: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 739bc6: call 0x6c76f3 */
  esp -= 4; W32(esp, 0x739bcbu); SPILL(); f_6c76f3(); if (g_unwind) return; RELOAD();
/* 739bcb: lea edx, [ebp + 0x110] */
  edx = (uint32_t)(ebp + 0x110u);
/* 739bd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 739bd2: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 739bd8: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x739bddu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 739bdd: lea eax, [ebp + 0x11c] */
  eax = (uint32_t)(ebp + 0x11cu);
/* 739be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 739be4: lea ecx, [ebx + 0x11c] */
  ecx = (uint32_t)(ebx + 0x11cu);
/* 739bea: call 0x6c5eac */
  esp -= 4; W32(esp, 0x739befu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 739bef: lea esi, [ebp + 0x128] */
  esi = (uint32_t)(ebp + 0x128u);
/* 739bf5: lea edi, [ebx + 0x128] */
  edi = (uint32_t)(ebx + 0x128u);
/* 739bfb: mov ecx, 7 */
  ecx = 0x7u;
/* 739c00: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 739c02: lea ecx, [ebp + 0x144] */
  ecx = (uint32_t)(ebp + 0x144u);
/* 739c08: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 739c0a: lea edx, [ebx + 0x144] */
  edx = (uint32_t)(ebx + 0x144u);
/* 739c10: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 739c12: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 739c15: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 739c18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 739c1b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 739c1e: lea edx, [ebp + 0x150] */
  edx = (uint32_t)(ebp + 0x150u);
/* 739c24: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739c26: lea eax, [ebx + 0x150] */
  eax = (uint32_t)(ebx + 0x150u);
/* 739c2c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739c2e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739c31: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739c34: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739c37: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739c3a: mov eax, dword ptr [ebp + 0x15c] */
  eax = R32((uint32_t)(ebp + 0x15cu));
/* 739c40: mov dword ptr [ebx + 0x15c], eax */
  W32((uint32_t)(ebx + 0x15cu), eax);
/* 739c46: mov ecx, dword ptr [ebp + 0x160] */
  ecx = R32((uint32_t)(ebp + 0x160u));
/* 739c4c: mov dword ptr [ebx + 0x160], ecx */
  W32((uint32_t)(ebx + 0x160u), ecx);
/* 739c52: mov edx, dword ptr [ebp + 0x164] */
  edx = R32((uint32_t)(ebp + 0x164u));
/* 739c58: mov dword ptr [ebx + 0x164], edx */
  W32((uint32_t)(ebx + 0x164u), edx);
/* 739c5e: mov eax, dword ptr [ebp + 0x168] */
  eax = R32((uint32_t)(ebp + 0x168u));
/* 739c64: mov dword ptr [ebx + 0x168], eax */
  W32((uint32_t)(ebx + 0x168u), eax);
/* 739c6a: mov ecx, dword ptr [ebp + 0x16c] */
  ecx = R32((uint32_t)(ebp + 0x16cu));
/* 739c70: mov dword ptr [ebx + 0x16c], ecx */
  W32((uint32_t)(ebx + 0x16cu), ecx);
/* 739c76: lea edx, [ebp + 0x170] */
  edx = (uint32_t)(ebp + 0x170u);
/* 739c7c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739c7e: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 739c84: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739c86: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739c89: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739c8c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739c8f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739c92: lea eax, [ebp + 0x17c] */
  eax = (uint32_t)(ebp + 0x17cu);
/* 739c98: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 739c9a: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 739ca0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 739ca2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 739ca5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 739ca8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 739cab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 739cae: lea ecx, [ebp + 0x188] */
  ecx = (uint32_t)(ebp + 0x188u);
/* 739cb4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 739cb6: lea edx, [ebx + 0x188] */
  edx = (uint32_t)(ebx + 0x188u);
/* 739cbc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 739cbe: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 739cc1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 739cc4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 739cc7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 739cca: lea edx, [ebp + 0x194] */
  edx = (uint32_t)(ebp + 0x194u);
/* 739cd0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739cd2: lea eax, [ebx + 0x194] */
  eax = (uint32_t)(ebx + 0x194u);
/* 739cd8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739cda: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739cdd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739ce0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739ce3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739ce6: lea eax, [ebp + 0x1a0] */
  eax = (uint32_t)(ebp + 0x1a0u);
/* 739cec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 739cee: lea ecx, [ebx + 0x1a0] */
  ecx = (uint32_t)(ebx + 0x1a0u);
/* 739cf4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 739cf6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 739cf9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 739cfc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 739cff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 739d02: lea ecx, [ebp + 0x1ac] */
  ecx = (uint32_t)(ebp + 0x1acu);
/* 739d08: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 739d0a: lea edx, [ebx + 0x1ac] */
  edx = (uint32_t)(ebx + 0x1acu);
/* 739d10: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 739d12: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 739d15: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 739d18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 739d1b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 739d1e: lea esi, [ebp + 0x1b8] */
  esi = (uint32_t)(ebp + 0x1b8u);
/* 739d24: lea edi, [ebx + 0x1b8] */
  edi = (uint32_t)(ebx + 0x1b8u);
/* 739d2a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 739d2f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 739d31: mov edx, dword ptr [ebp + 0x1f8] */
  edx = R32((uint32_t)(ebp + 0x1f8u));
/* 739d37: lea eax, [ebp + 0x1fc] */
  eax = (uint32_t)(ebp + 0x1fcu);
/* 739d3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 739d3e: lea ecx, [ebx + 0x1fc] */
  ecx = (uint32_t)(ebx + 0x1fcu);
/* 739d44: mov dword ptr [ebx + 0x1f8], edx */
  W32((uint32_t)(ebx + 0x1f8u), edx);
/* 739d4a: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x739d4fu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 739d4f: lea ecx, [ebp + 0x208] */
  ecx = (uint32_t)(ebp + 0x208u);
/* 739d55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 739d57: lea edx, [ebx + 0x208] */
  edx = (uint32_t)(ebx + 0x208u);
/* 739d5d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 739d5f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 739d62: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 739d65: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 739d68: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 739d6b: lea edx, [ebp + 0x214] */
  edx = (uint32_t)(ebp + 0x214u);
/* 739d71: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739d73: lea eax, [ebx + 0x214] */
  eax = (uint32_t)(ebx + 0x214u);
/* 739d79: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739d7b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739d7e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739d81: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739d84: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739d87: lea esi, [ebp + 0x220] */
  esi = (uint32_t)(ebp + 0x220u);
/* 739d8d: lea edi, [ebx + 0x220] */
  edi = (uint32_t)(ebx + 0x220u);
/* 739d93: mov ecx, 0x10 */
  ecx = 0x10u;
/* 739d98: lea eax, [ebp + 0x260] */
  eax = (uint32_t)(ebp + 0x260u);
/* 739d9e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 739da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 739da1: lea ecx, [ebx + 0x260] */
  ecx = (uint32_t)(ebx + 0x260u);
/* 739da7: call 0x6c6d57 */
  esp -= 4; W32(esp, 0x739dacu); SPILL(); f_6c6d57(); if (g_unwind) return; RELOAD();
/* 739dac: lea ecx, [ebp + 0x26c] */
  ecx = (uint32_t)(ebp + 0x26cu);
/* 739db2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 739db3: lea ecx, [ebx + 0x26c] */
  ecx = (uint32_t)(ebx + 0x26cu);
/* 739db9: call 0x6c725c */
  esp -= 4; W32(esp, 0x739dbeu); SPILL(); f_6c725c(); if (g_unwind) return; RELOAD();
/* 739dbe: mov edx, dword ptr [ebp + 0x278] */
  edx = R32((uint32_t)(ebp + 0x278u));
/* 739dc4: mov dword ptr [ebx + 0x278], edx */
  W32((uint32_t)(ebx + 0x278u), edx);
/* 739dca: mov eax, dword ptr [ebp + 0x27c] */
  eax = R32((uint32_t)(ebp + 0x27cu));
/* 739dd0: mov dword ptr [ebx + 0x27c], eax */
  W32((uint32_t)(ebx + 0x27cu), eax);
/* 739dd6: mov ecx, dword ptr [ebp + 0x280] */
  ecx = R32((uint32_t)(ebp + 0x280u));
/* 739ddc: mov dword ptr [ebx + 0x280], ecx */
  W32((uint32_t)(ebx + 0x280u), ecx);
/* 739de2: mov edx, dword ptr [ebp + 0x284] */
  edx = R32((uint32_t)(ebp + 0x284u));
/* 739de8: mov dword ptr [ebx + 0x284], edx */
  W32((uint32_t)(ebx + 0x284u), edx);
/* 739dee: lea eax, [ebp + 0x288] */
  eax = (uint32_t)(ebp + 0x288u);
/* 739df4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 739df6: lea ecx, [ebx + 0x288] */
  ecx = (uint32_t)(ebx + 0x288u);
/* 739dfc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 739dfe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 739e01: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 739e04: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 739e07: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 739e0a: lea ecx, [ebp + 0x294] */
  ecx = (uint32_t)(ebp + 0x294u);
/* 739e10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 739e12: lea edx, [ebx + 0x294] */
  edx = (uint32_t)(ebx + 0x294u);
/* 739e18: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 739e1a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 739e1d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 739e20: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 739e23: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 739e26: lea edx, [ebp + 0x2a0] */
  edx = (uint32_t)(ebp + 0x2a0u);
/* 739e2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 739e2d: lea ecx, [ebx + 0x2a0] */
  ecx = (uint32_t)(ebx + 0x2a0u);
/* 739e33: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x739e38u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 739e38: mov eax, dword ptr [ebp + 0x2ac] */
  eax = R32((uint32_t)(ebp + 0x2acu));
/* 739e3e: mov dword ptr [ebx + 0x2ac], eax */
  W32((uint32_t)(ebx + 0x2acu), eax);
/* 739e44: mov cl, byte ptr [ebp + 0x2b0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b0u))) & 0xffu);
/* 739e4a: mov byte ptr [ebx + 0x2b0], cl */
  W8((uint32_t)(ebx + 0x2b0u), (ecx & 0xffu));
/* 739e50: mov dl, byte ptr [ebp + 0x2b1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b1u))) & 0xffu);
/* 739e56: mov byte ptr [ebx + 0x2b1], dl */
  W8((uint32_t)(ebx + 0x2b1u), (edx & 0xffu));
/* 739e5c: mov eax, dword ptr [ebp + 0x2b4] */
  eax = R32((uint32_t)(ebp + 0x2b4u));
/* 739e62: mov dword ptr [ebx + 0x2b4], eax */
  W32((uint32_t)(ebx + 0x2b4u), eax);
/* 739e68: mov ecx, dword ptr [ebp + 0x2b8] */
  ecx = R32((uint32_t)(ebp + 0x2b8u));
/* 739e6e: mov dword ptr [ebx + 0x2b8], ecx */
  W32((uint32_t)(ebx + 0x2b8u), ecx);
/* 739e74: mov edx, dword ptr [ebp + 0x2bc] */
  edx = R32((uint32_t)(ebp + 0x2bcu));
/* 739e7a: mov dword ptr [ebx + 0x2bc], edx */
  W32((uint32_t)(ebx + 0x2bcu), edx);
/* 739e80: mov al, byte ptr [ebp + 0x2c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c0u))) & 0xffu);
/* 739e86: mov byte ptr [ebx + 0x2c0], al */
  W8((uint32_t)(ebx + 0x2c0u), (eax & 0xffu));
/* 739e8c: mov ecx, dword ptr [ebp + 0x2c4] */
  ecx = R32((uint32_t)(ebp + 0x2c4u));
/* 739e92: mov dword ptr [ebx + 0x2c4], ecx */
  W32((uint32_t)(ebx + 0x2c4u), ecx);
/* 739e98: mov dl, byte ptr [ebp + 0x2c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c8u))) & 0xffu);
/* 739e9e: mov byte ptr [ebx + 0x2c8], dl */
  W8((uint32_t)(ebx + 0x2c8u), (edx & 0xffu));
/* 739ea4: mov al, byte ptr [ebp + 0x2c9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2c9u))) & 0xffu);
/* 739eaa: mov byte ptr [ebx + 0x2c9], al */
  W8((uint32_t)(ebx + 0x2c9u), (eax & 0xffu));
/* 739eb0: mov cl, byte ptr [ebp + 0x2ca] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cau))) & 0xffu);
/* 739eb6: mov byte ptr [ebx + 0x2ca], cl */
  W8((uint32_t)(ebx + 0x2cau), (ecx & 0xffu));
/* 739ebc: mov edx, dword ptr [ebp + 0x2cc] */
  edx = R32((uint32_t)(ebp + 0x2ccu));
/* 739ec2: mov dword ptr [ebx + 0x2cc], edx */
  W32((uint32_t)(ebx + 0x2ccu), edx);
/* 739ec8: mov eax, dword ptr [ebp + 0x2d0] */
  eax = R32((uint32_t)(ebp + 0x2d0u));
/* 739ece: mov dword ptr [ebx + 0x2d0], eax */
  W32((uint32_t)(ebx + 0x2d0u), eax);
/* 739ed4: mov ecx, dword ptr [ebp + 0x2d4] */
  ecx = R32((uint32_t)(ebp + 0x2d4u));
/* 739eda: mov dword ptr [ebx + 0x2d4], ecx */
  W32((uint32_t)(ebx + 0x2d4u), ecx);
/* 739ee0: mov edx, dword ptr [ebp + 0x2d8] */
  edx = R32((uint32_t)(ebp + 0x2d8u));
/* 739ee6: mov dword ptr [ebx + 0x2d8], edx */
  W32((uint32_t)(ebx + 0x2d8u), edx);
/* 739eec: mov eax, dword ptr [ebp + 0x2dc] */
  eax = R32((uint32_t)(ebp + 0x2dcu));
/* 739ef2: mov dword ptr [ebx + 0x2dc], eax */
  W32((uint32_t)(ebx + 0x2dcu), eax);
/* 739ef8: mov ecx, dword ptr [ebp + 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0x2e0u));
/* 739efe: mov dword ptr [ebx + 0x2e0], ecx */
  W32((uint32_t)(ebx + 0x2e0u), ecx);
/* 739f04: lea edx, [ebp + 0x2e4] */
  edx = (uint32_t)(ebp + 0x2e4u);
/* 739f0a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739f0c: lea eax, [ebx + 0x2e4] */
  eax = (uint32_t)(ebx + 0x2e4u);
/* 739f12: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739f14: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739f17: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739f1a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739f1d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739f20: lea eax, [ebp + 0x2f0] */
  eax = (uint32_t)(ebp + 0x2f0u);
/* 739f26: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 739f28: lea ecx, [ebx + 0x2f0] */
  ecx = (uint32_t)(ebx + 0x2f0u);
/* 739f2e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 739f30: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 739f33: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 739f36: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 739f39: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 739f3c: mov ecx, dword ptr [ebp + 0x2fc] */
  ecx = R32((uint32_t)(ebp + 0x2fcu));
/* 739f42: mov dword ptr [ebx + 0x2fc], ecx */
  W32((uint32_t)(ebx + 0x2fcu), ecx);
/* 739f48: lea edx, [ebp + 0x300] */
  edx = (uint32_t)(ebp + 0x300u);
/* 739f4e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739f50: lea eax, [ebx + 0x300] */
  eax = (uint32_t)(ebx + 0x300u);
/* 739f56: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739f58: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739f5b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739f5e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739f61: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739f64: mov eax, dword ptr [ebp + 0x30c] */
  eax = R32((uint32_t)(ebp + 0x30cu));
/* 739f6a: mov dword ptr [ebx + 0x30c], eax */
  W32((uint32_t)(ebx + 0x30cu), eax);
/* 739f70: mov ecx, dword ptr [ebp + 0x310] */
  ecx = R32((uint32_t)(ebp + 0x310u));
/* 739f76: mov dword ptr [ebx + 0x310], ecx */
  W32((uint32_t)(ebx + 0x310u), ecx);
/* 739f7c: lea edx, [ebp + 0x314] */
  edx = (uint32_t)(ebp + 0x314u);
/* 739f82: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 739f84: lea eax, [ebx + 0x314] */
  eax = (uint32_t)(ebx + 0x314u);
/* 739f8a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 739f8c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 739f8f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 739f92: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 739f95: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 739f98: mov al, byte ptr [ebp + 0x320] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x320u))) & 0xffu);
/* 739f9e: mov byte ptr [ebx + 0x320], al */
  W8((uint32_t)(ebx + 0x320u), (eax & 0xffu));
/* 739fa4: mov ecx, dword ptr [ebp + 0x324] */
  ecx = R32((uint32_t)(ebp + 0x324u));
/* 739faa: mov dword ptr [ebx + 0x324], ecx */
  W32((uint32_t)(ebx + 0x324u), ecx);
/* 739fb0: mov edx, dword ptr [ebp + 0x328] */
  edx = R32((uint32_t)(ebp + 0x328u));
/* 739fb6: mov dword ptr [ebx + 0x328], edx */
  W32((uint32_t)(ebx + 0x328u), edx);
/* 739fbc: mov eax, dword ptr [ebp + 0x32c] */
  eax = R32((uint32_t)(ebp + 0x32cu));
/* 739fc2: add ebp, 0x330 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x330u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 739fc8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 739fc9: lea ecx, [ebx + 0x330] */
  ecx = (uint32_t)(ebx + 0x330u);
/* 739fcf: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 739fd5: call 0x6c6708 */
  esp -= 4; W32(esp, 0x739fdau); SPILL(); f_6c6708(); if (g_unwind) return; RELOAD();
/* 739fda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 739fdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 739fdc: mov eax, ebx */
  eax = ebx;
/* 739fde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 739fdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 739fe0: ret 4 */
  esp += 8; SPILL(); return;
}
