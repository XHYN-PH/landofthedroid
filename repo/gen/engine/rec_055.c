#include "recomp.h"
#include "rec_mod.h"

void f_7f1310(void) {
  LOAD_REGS();
L_7f1310: /* 7f1310: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7f1314: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7f1318: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f131a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f131b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f131eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f131e: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1330(void) {
  LOAD_REGS();
L_7f1330: /* 7f1330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1331: mov ebp, esp */
  ebp = esp;
/* 7f1333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1335: push 0x9d12c0 */
  { uint32_t v = 0x9d12c0u; esp -= 4; W32(esp, v); }
/* 7f133a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f134b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f134c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f134d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f134e: mov esi, ecx */
  esi = ecx;
/* 7f1350: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7f1353: xor edi, edi */
  edi = 0;
/* 7f1355: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f1357: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f135a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f135d: je 0x7f1369 */
  if (zf) goto L_7f1369;
L_7f135f: /* 7f135f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f1361: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f1363: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7f1366u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1366: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
L_7f1369: /* 7f1369: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7f136f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f1371: je 0x7f1380 */
  if (zf) goto L_7f1380;
L_7f1373: /* 7f1373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f1375: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f1377: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f137au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f137a: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
L_7f1380: /* 7f1380: mov ecx, esi */
  ecx = esi;
/* 7f1382: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7f1388u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7f1388: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f138b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f138c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f138d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1394: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1395: mov esp, ebp */
  esp = ebp;
/* 7f1397: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1398: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1399(void) {
  LOAD_REGS();
L_7f1399: /* 7f1399: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f139c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f13a1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f13a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f13a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f13a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f13adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f13ad(); return;
}

void f_7f13ad(void) {
  LOAD_REGS();
L_7f13ad: /* 7f13ad: push 0xa11468 */
  { uint32_t v = 0xa11468u; esp -= 4; W32(esp, v); }
/* 7f13b2: push 0xadea38 */
  { uint32_t v = 0xadea38u; esp -= 4; W32(esp, v); }
/* 7f13b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f13bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f13bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f13c0: xor edi, edi */
  edi = 0;
/* 7f13c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f13c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f13c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f13c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f13c9: guest_badaddr(0x7f13c9); return;
}

void f_7f1400(void) {
  LOAD_REGS();
L_7f1400: /* 7f1400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1401: mov ebp, esp */
  ebp = esp;
/* 7f1403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1405: push 0x9d12d0 */
  { uint32_t v = 0x9d12d0u; esp -= 4; W32(esp, v); }
/* 7f140a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f141b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7f141e: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 7f1421: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f1423: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f1426: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f142a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f142d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f142e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f1431: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1432: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f1439: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7f143fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f143f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1442: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1443: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1444: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f144b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f144c: mov esp, ebp */
  esp = ebp;
/* 7f144e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f144f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7f1452(void) {
  LOAD_REGS();
L_7f1452: /* 7f1452: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1455: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f145a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f145d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f145e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f1461: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1466u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1466(); return;
}

void f_7f1466(void) {
  LOAD_REGS();
L_7f1466: /* 7f1466: push 0xa11498 */
  { uint32_t v = 0xa11498u; esp -= 4; W32(esp, v); }
/* 7f146b: push 0xadea40 */
  { uint32_t v = 0xadea40u; esp -= 4; W32(esp, v); }
/* 7f1470: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1476u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1479: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f147b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f147d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1482u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1482: guest_badaddr(0x7f1482); return;
}

void f_7f14c0(void) {
  LOAD_REGS();
L_7f14c0: /* 7f14c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f14c1: mov ebp, esp */
  ebp = esp;
/* 7f14c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f14c5: push 0x9d12e0 */
  { uint32_t v = 0x9d12e0u; esp -= 4; W32(esp, v); }
/* 7f14ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f14d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f14d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f14d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f14db: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7f14e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f14e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f14e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f14e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f14e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f14ee: call 0x6c90f7 */
  esp -= 4; W32(esp, 0x7f14f3u); SPILL(); f_6c90f7(); if (g_unwind) return; RELOAD();
/* 7f14f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f14f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f14f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f14f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f14ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1500: mov esp, ebp */
  esp = ebp;
/* 7f1502: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1503: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1504(void) {
  LOAD_REGS();
L_7f1504: /* 7f1504: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1507: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f150c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f150f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1510: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f1513: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1518u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1518(); return;
}

void f_7f1518(void) {
  LOAD_REGS();
L_7f1518: /* 7f1518: push 0xa114d8 */
  { uint32_t v = 0xa114d8u; esp -= 4; W32(esp, v); }
/* 7f151d: push 0xadeaac */
  { uint32_t v = 0xadeaacu; esp -= 4; W32(esp, v); }
/* 7f1522: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1528u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1528: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f152b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f152d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f152f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1534u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1534: guest_badaddr(0x7f1534); return;
}

void f_7f1560(void) {
  LOAD_REGS();
L_7f1560: /* 7f1560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1561: mov ebp, esp */
  ebp = esp;
/* 7f1563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1565: push 0x9d12f0 */
  { uint32_t v = 0x9d12f0u; esp -= 4; W32(esp, v); }
/* 7f156a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1578: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f157b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f157c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f157d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f157e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1581: mov esi, ecx */
  esi = ecx;
/* 7f1583: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f158a: call dword ptr [0xcfa234] */
  esp -= 4; W32(esp, 0x7f1590u); SPILL(); f_4e4318(); if (g_unwind) return; /* Core!?Modify@UObject@@UAEXXZ */ RELOAD();
/* 7f1590: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 7f1596: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1598: call 0x6cb460 */
  esp -= 4; W32(esp, 0x7f159du); SPILL(); f_6cb460(); if (g_unwind) return; RELOAD();
/* 7f159d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f15a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f15a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f15a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f15a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f15aa: mov esp, ebp */
  esp = ebp;
/* 7f15ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f15ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f15b0(void) {
  LOAD_REGS();
L_7f15b0: /* 7f15b0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f15b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f15b8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f15bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f15bc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f15bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f15c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f15c4(); return;
}

void f_7f15c4(void) {
  LOAD_REGS();
L_7f15c4: /* 7f15c4: push 0xa114fc */
  { uint32_t v = 0xa114fcu; esp -= 4; W32(esp, v); }
/* 7f15c9: push 0xadeabc */
  { uint32_t v = 0xadeabcu; esp -= 4; W32(esp, v); }
/* 7f15ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f15d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f15d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f15d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f15d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f15db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f15e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f15e0: guest_badaddr(0x7f15e0); return;
}

void f_7f1620(void) {
  LOAD_REGS();
L_7f1620: /* 7f1620: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7f1623: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1625: je 0x7f162e */
  if (zf) goto L_7f162e;
L_7f1627: /* 7f1627: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 7f162a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f162c: jne 0x7f163f */
  if (!zf) goto L_7f163f;
L_7f162e: /* 7f162e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7f1634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1636: je 0x7f1642 */
  if (zf) goto L_7f1642;
L_7f1638: /* 7f1638: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f163b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f163d: je 0x7f1642 */
  if (zf) goto L_7f1642;
L_7f163f: /* 7f163f: xor eax, eax */
  eax = 0;
/* 7f1641: ret  */
  esp += 4; SPILL(); return;
L_7f1642: /* 7f1642: mov eax, 1 */
  eax = 0x1u;
/* 7f1647: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1660(void) {
  LOAD_REGS();
L_7f1660: /* 7f1660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1661: mov ebp, esp */
  ebp = esp;
/* 7f1663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1665: push 0x9d1309 */
  { uint32_t v = 0x9d1309u; esp -= 4; W32(esp, v); }
/* 7f166a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1678: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f167b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f167c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f167d: mov esi, ecx */
  esi = ecx;
/* 7f167f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7f1682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1684: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f1685: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1688: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f168f: jne 0x7f16a9 */
  if (!zf) goto L_7f16a9;
L_7f1691: /* 7f1691: push 0x33a */
  { uint32_t v = 0x33au; esp -= 4; W32(esp, v); }
/* 7f1696: push 0xadf080 */
  { uint32_t v = 0xadf080u; esp -= 4; W32(esp, v); }
/* 7f169b: push 0xadf08c */
  { uint32_t v = 0xadf08cu; esp -= 4; W32(esp, v); }
/* 7f16a0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f16a6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f16a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f16a9: /* 7f16a9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7f16ac: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f16af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f16b1: je 0x7f16cb */
  if (zf) goto L_7f16cb;
L_7f16b3: /* 7f16b3: push 0x33b */
  { uint32_t v = 0x33bu; esp -= 4; W32(esp, v); }
/* 7f16b8: push 0xadf09c */
  { uint32_t v = 0xadf09cu; esp -= 4; W32(esp, v); }
/* 7f16bd: push 0xadf0a8 */
  { uint32_t v = 0xadf0a8u; esp -= 4; W32(esp, v); }
/* 7f16c2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f16c8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f16c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f16cb: /* 7f16cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f16ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f16d0: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7f16d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f16d4: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7f16d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f16d7: mov ecx, eax */
  ecx = eax;
/* 7f16d9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f16dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f16e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f16e3: mov edi, eax */
  edi = eax;
/* 7f16e5: call dword ptr [0xcfaa84] */
  esp -= 4; W32(esp, 0x7f16ebu); SPILL(); f_4e1ebf(); if (g_unwind) return; /* Core!?appTimestamp@@YAPBGXZ */ RELOAD();
/* 7f16eb: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7f16ee: mov ebx, eax */
  ebx = eax;
/* 7f16f0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f16f6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f16f6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f16fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f16fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f16ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1701: push 0xadf0cc */
  { uint32_t v = 0xadf0ccu; esp -= 4; W32(esp, v); }
/* 7f1706: push 0x313 */
  { uint32_t v = 0x313u; esp -= 4; W32(esp, v); }
/* 7f170b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f170c: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f1712u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f1712: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1715: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f1718: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f171c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f1722u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f1722: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1725: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1726: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1727: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f172e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f172f: mov esp, ebp */
  esp = ebp;
/* 7f1731: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1732: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1735(void) {
  LOAD_REGS();
L_7f1735: /* 7f1735: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1738: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f173d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f1740: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1741: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f1744: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1749u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1749(); return;
}

void f_7f1749(void) {
  LOAD_REGS();
L_7f1749: /* 7f1749: push 0xa11520 */
  { uint32_t v = 0xa11520u; esp -= 4; W32(esp, v); }
/* 7f174e: push 0xadf0e8 */
  { uint32_t v = 0xadf0e8u; esp -= 4; W32(esp, v); }
/* 7f1753: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1759u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1759: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f175c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f175e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1760: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1765u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1765: guest_badaddr(0x7f1765); return;
}

void f_7f17c0(void) {
  LOAD_REGS();
L_7f17c0: /* 7f17c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f17c1: mov ebp, esp */
  ebp = esp;
/* 7f17c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f17c5: push 0x9d1320 */
  { uint32_t v = 0x9d1320u; esp -= 4; W32(esp, v); }
/* 7f17ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f17d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f17d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f17d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f17db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f17dc: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7f17e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f17e3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f17e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f17e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f17e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f17ec: mov edi, ecx */
  edi = ecx;
/* 7f17ee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f17f5: jne 0x7f180b */
  if (!zf) goto L_7f180b;
L_7f17f7: /* 7f17f7: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7f17fc: push 0xadf0f0 */
  { uint32_t v = 0xadf0f0u; esp -= 4; W32(esp, v); }
/* 7f1801: push 0xadf0fc */
  { uint32_t v = 0xadf0fcu; esp -= 4; W32(esp, v); }
/* 7f1806: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f1808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1808: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f180b: /* 7f180b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7f180e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1810: jne 0x7f1826 */
  if (!zf) goto L_7f1826;
L_7f1812: /* 7f1812: push 0x349 */
  { uint32_t v = 0x349u; esp -= 4; W32(esp, v); }
/* 7f1817: push 0xadf104 */
  { uint32_t v = 0xadf104u; esp -= 4; W32(esp, v); }
/* 7f181c: push 0xadf110 */
  { uint32_t v = 0xadf110u; esp -= 4; W32(esp, v); }
/* 7f1821: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f1823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1823: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f1826: /* 7f1826: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7f1829: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 7f182c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f182e: jne 0x7f1844 */
  if (!zf) goto L_7f1844;
L_7f1830: /* 7f1830: push 0x34a */
  { uint32_t v = 0x34au; esp -= 4; W32(esp, v); }
/* 7f1835: push 0xadf124 */
  { uint32_t v = 0xadf124u; esp -= 4; W32(esp, v); }
/* 7f183a: push 0xadf130 */
  { uint32_t v = 0xadf130u; esp -= 4; W32(esp, v); }
/* 7f183f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f1841u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1841: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f1844: /* 7f1844: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7f1847: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 7f184a: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f184d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f184f: je 0x7f188b */
  if (zf) goto L_7f188b;
L_7f1851: /* 7f1851: mov esi, dword ptr [esi + 0x44] */
  esi = R32((uint32_t)(esi + 0x44u));
/* 7f1854: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f1857: je 0x7f18c4 */
  if (zf) goto L_7f18c4;
L_7f1859: /* 7f1859: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f185f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f1861: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1862: push 0xadf150 */
  { uint32_t v = 0xadf150u; esp -= 4; W32(esp, v); }
/* 7f1867: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f186c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f186d: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f1873u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f1873: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f1876: /* 7f1876: xor eax, eax */
  eax = 0;
/* 7f1878: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f187b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1882: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1883: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1885: mov esp, ebp */
  esp = ebp;
/* 7f1887: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1888: ret 4 */
  esp += 8; SPILL(); return;
L_7f188b: /* 7f188b: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 7f188e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1890: jne 0x7f18dc */
  if (!zf) goto L_7f18dc;
L_7f1892: /* 7f1892: cmp dword ptr [esi + 0x44], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f1896: jne 0x7f18dc */
  if (!zf) goto L_7f18dc;
L_7f1898: /* 7f1898: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f189a: lea ecx, [edi - 0x28] */
  ecx = (uint32_t)(edi + 0xffffffd8u);
/* 7f189d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f18a3u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f18a3: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7f18a6: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f18ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f18ad: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f18af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f18b0: push 0xadf1a8 */
  { uint32_t v = 0xadf1a8u; esp -= 4; W32(esp, v); }
/* 7f18b5: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f18ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f18bb: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f18c1u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f18c1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f18c4: /* 7f18c4: mov eax, 1 */
  eax = 0x1u;
/* 7f18c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f18cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f18d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f18d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f18d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f18d6: mov esp, ebp */
  esp = ebp;
/* 7f18d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f18d9: ret 4 */
  esp += 8; SPILL(); return;
L_7f18dc: /* 7f18dc: cmp dword ptr [esi + 0x44], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f18e0: lea ecx, [edi - 0x28] */
  ecx = (uint32_t)(edi + 0xffffffd8u);
/* 7f18e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f18e5: jne 0x7f1926 */
  if (!zf) goto L_7f1926;
L_7f18e7: /* 7f18e7: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f18edu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f18ed: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7f18f0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f18f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f18f7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f18f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f18fa: push 0xadf218 */
  { uint32_t v = 0xadf218u; esp -= 4; W32(esp, v); }
/* 7f18ff: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f1904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1905: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f190bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f190b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f190e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1913: mov eax, 1 */
  eax = 0x1u;
/* 7f1918: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f191f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1920: mov esp, ebp */
  esp = ebp;
/* 7f1922: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1923: ret 4 */
  esp += 8; SPILL(); return;
L_7f1926: /* 7f1926: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f192cu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f192c: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7f192f: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 7f1932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1933: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f1938: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1939: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f193b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f193c: push 0xadf280 */
  { uint32_t v = 0xadf280u; esp -= 4; W32(esp, v); }
/* 7f1941: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f1946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1947: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f194du); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f194d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1950: jmp 0x7f1876 */
  goto L_7f1876;
}

void f_7f1955(void) {
  LOAD_REGS();
L_7f1955: /* 7f1955: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1958: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f195d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f1960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1961: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f1964: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1969u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1969(); return;
}

void f_7f1969(void) {
  LOAD_REGS();
L_7f1969: /* 7f1969: push 0xa11570 */
  { uint32_t v = 0xa11570u; esp -= 4; W32(esp, v); }
/* 7f196e: push 0xadf2e0 */
  { uint32_t v = 0xadf2e0u; esp -= 4; W32(esp, v); }
/* 7f1973: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1979u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1979: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f197c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f197e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1980: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1985u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1985: guest_badaddr(0x7f1985); return;
}

void f_7f1a10(void) {
  LOAD_REGS();
L_7f1a10: /* 7f1a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1a11: mov ebp, esp */
  ebp = esp;
/* 7f1a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1a15: push 0x9d1330 */
  { uint32_t v = 0x9d1330u; esp -= 4; W32(esp, v); }
/* 7f1a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1a28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1a2b: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7f1a30: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f1a32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1a33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f1a35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1a38: push 0xadf884 */
  { uint32_t v = 0xadf884u; esp -= 4; W32(esp, v); }
/* 7f1a3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1a3e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f1a45: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f1a4bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f1a4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1a4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1a51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1a52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1a53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1a5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1a5b: mov esp, ebp */
  esp = ebp;
/* 7f1a5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1a5e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7f1a61(void) {
  LOAD_REGS();
L_7f1a61: /* 7f1a61: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1a64: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f1a69: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f1a6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1a6d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f1a70: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1a75u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1a75(); return;
}

void f_7f1a75(void) {
  LOAD_REGS();
L_7f1a75: /* 7f1a75: push 0xa115bc */
  { uint32_t v = 0xa115bcu; esp -= 4; W32(esp, v); }
/* 7f1a7a: push 0xadf8c4 */
  { uint32_t v = 0xadf8c4u; esp -= 4; W32(esp, v); }
/* 7f1a7f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1a85u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1a85: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1a88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1a8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1a8c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1a91u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1a91: guest_badaddr(0x7f1a91); return;
}

void f_7f1ad0(void) {
  LOAD_REGS();
L_7f1ad0: /* 7f1ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1ad1: mov ebp, esp */
  ebp = esp;
/* 7f1ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1ad5: push 0x9d1340 */
  { uint32_t v = 0x9d1340u; esp -= 4; W32(esp, v); }
/* 7f1ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1ae8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1aeb: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 7f1aee: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f1af1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1af3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1af4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1af5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f1af6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1af9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f1b00: je 0x7f1b33 */
  if (zf) goto L_7f1b33;
L_7f1b02: /* 7f1b02: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f1b08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f1b0a: push 0xadf8cc */
  { uint32_t v = 0xadf8ccu; esp -= 4; W32(esp, v); }
/* 7f1b0f: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f1b14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1b15: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f1b1bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f1b1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1b1e: xor eax, eax */
  eax = 0;
/* 7f1b20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1b23: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1b2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1b2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1b2d: mov esp, ebp */
  esp = ebp;
/* 7f1b2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1b30: ret 0x14 */
  esp += 24; SPILL(); return;
L_7f1b33: /* 7f1b33: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f1b38: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f1b3a: push 0xadf90c */
  { uint32_t v = 0xadf90cu; esp -= 4; W32(esp, v); }
/* 7f1b3f: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f1b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1b45: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f1b4bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f1b4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1b4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1b51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1b52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1b53: mov eax, 1 */
  eax = 0x1u;
/* 7f1b58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1b5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1b60: mov esp, ebp */
  esp = ebp;
/* 7f1b62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1b63: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7f1b66(void) {
  LOAD_REGS();
L_7f1b66: /* 7f1b66: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1b69: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f1b6e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f1b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1b72: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f1b75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1b7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1b7a(); return;
}

void f_7f1b7a(void) {
  LOAD_REGS();
L_7f1b7a: /* 7f1b7a: push 0xa11600 */
  { uint32_t v = 0xa11600u; esp -= 4; W32(esp, v); }
/* 7f1b7f: push 0xadf94c */
  { uint32_t v = 0xadf94cu; esp -= 4; W32(esp, v); }
/* 7f1b84: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1b8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1b8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1b8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1b8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1b91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1b96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1b96: guest_badaddr(0x7f1b96); return;
}

void f_7f1be0(void) {
  LOAD_REGS();
L_7f1be0: /* 7f1be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1be4: lea ecx, [eax + 0x3cc] */
  ecx = (uint32_t)(eax + 0x3ccu);
/* 7f1bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1beb: lea edx, [eax + 0x3c8] */
  edx = (uint32_t)(eax + 0x3c8u);
/* 7f1bf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1bf2: lea ecx, [eax + 0x3c4] */
  ecx = (uint32_t)(eax + 0x3c4u);
/* 7f1bf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1bf9: lea edx, [eax + 0x3c0] */
  edx = (uint32_t)(eax + 0x3c0u);
/* 7f1bff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1c00: lea ecx, [eax + 0x3b8] */
  ecx = (uint32_t)(eax + 0x3b8u);
/* 7f1c06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1c07: lea edx, [eax + 0x3bc] */
  edx = (uint32_t)(eax + 0x3bcu);
/* 7f1c0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1c0e: lea ecx, [eax + 0x3b4] */
  ecx = (uint32_t)(eax + 0x3b4u);
/* 7f1c14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1c15: add eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1c1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1c1b: call dword ptr [0xcfaa88] */
  esp -= 4; W32(esp, 0x7f1c21u); SPILL(); f_4e3e31(); if (g_unwind) return; /* Core!?appSystemTime@@YAXAAH0000000@Z */ RELOAD();
/* 7f1c21: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1c24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1c50(void) {
  LOAD_REGS();
L_7f1c50: /* 7f1c50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1c51: mov ebp, esp */
  ebp = esp;
/* 7f1c53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1c55: push 0x9d1350 */
  { uint32_t v = 0x9d1350u; esp -= 4; W32(esp, v); }
/* 7f1c5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1c61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1c68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1c6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f1c6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1c6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f1c71: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7f1c74: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f1c77: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1c79: movzx eax, byte ptr [eax + ecx + 0x110] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x110u)));
/* 7f1c81: mov ecx, eax */
  ecx = eax;
/* 7f1c83: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7f1c86: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7f1c89: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f1c8c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1c8f: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f1c92: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f1c99: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f1c9c: push 0x3feb3333 */
  { uint32_t v = 0x3feb3333u; esp -= 4; W32(esp, v); }
/* 7f1ca1: push 0x33333333 */
  { uint32_t v = 0x33333333u; esp -= 4; W32(esp, v); }
/* 7f1ca6: call dword ptr [0xcfaa8c] */
  esp -= 4; W32(esp, 0x7f1cacu); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* 7f1cac: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 7f1caf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f1cb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1cb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f1cb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1cb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f1cbf: mov esp, ebp */
  esp = ebp;
/* 7f1cc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f1cc2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f1cc5(void) {
  LOAD_REGS();
L_7f1cc5: /* 7f1cc5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f1cc8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f1ccd: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f1cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1cd1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f1cd4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1cd9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f1cd9(); return;
}

void f_7f1cd9(void) {
  LOAD_REGS();
L_7f1cd9: /* 7f1cd9: push 0xa11640 */
  { uint32_t v = 0xa11640u; esp -= 4; W32(esp, v); }
/* 7f1cde: push 0xadf95c */
  { uint32_t v = 0xadf95cu; esp -= 4; W32(esp, v); }
/* 7f1ce3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f1ce9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f1ce9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1cf0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f1cf5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f1cf5: guest_badaddr(0x7f1cf5); return;
}

void f_7f1d30(void) {
  LOAD_REGS();
L_7f1d30: /* 7f1d30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1d34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f1d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1d37: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f1d3du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f1d3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1d50(void) {
  LOAD_REGS();
L_7f1d50: /* 7f1d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1d51: mov esi, ecx */
  esi = ecx;
/* 7f1d53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f1d59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f1d59: mov eax, esi */
  eax = esi;
/* 7f1d5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1d5c: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1d70(void) {
  LOAD_REGS();
L_7f1d70: /* 7f1d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1d74: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f1d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1d77: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f1d7du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f1d7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1d90(void) {
  LOAD_REGS();
L_7f1d90: /* 7f1d90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1d94: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f1d96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1d97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f1d9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f1d9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1db0(void) {
  LOAD_REGS();
L_7f1db0: /* 7f1db0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1db4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f1db6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7f1db9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1dbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1dd0(void) {
  LOAD_REGS();
L_7f1dd0: /* 7f1dd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1dd4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f1dd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1dd7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f1dddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f1ddd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1df0(void) {
  LOAD_REGS();
L_7f1df0: /* 7f1df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1df4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f1df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1df7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f1dfdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f1dfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1e10(void) {
  LOAD_REGS();
L_7f1e10: /* 7f1e10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1e12: push 0x9d136c */
  { uint32_t v = 0x9d136cu; esp -= 4; W32(esp, v); }
/* 7f1e17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1e1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1e25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1e26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1e27: mov esi, ecx */
  esi = ecx;
/* 7f1e29: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7f1e2c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7f1e30: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f1e36u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f1e36: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7f1e39: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7f1e41: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f1e47u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f1e47: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7f1e4b: mov eax, esi */
  eax = esi;
/* 7f1e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1e4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f1e55: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1e58: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1e80(void) {
  LOAD_REGS();
L_7f1e80: /* 7f1e80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7f1e84: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7f1e88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1e89: mov esi, dword ptr [0xcfa2dc] */
  esi = R32((uint32_t)(0xcfa2dcu));
/* 7f1e8f: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7f1e92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1e93: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1e97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1e98: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f1e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1e9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1e9e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f1ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1ea0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1ea3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1ea4: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1ec0(void) {
  LOAD_REGS();
L_7f1ec0: /* 7f1ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f1ec4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7f1ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1ec7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f1ecdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f1ecd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1ee0(void) {
  LOAD_REGS();
L_7f1ee0: /* 7f1ee0: mov eax, 1 */
  eax = 0x1u;
/* 7f1ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1f00(void) {
  LOAD_REGS();
L_7f1f00: /* 7f1f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1f01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f1f05: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 7f1f0a: mov ecx, esi */
  ecx = esi;
/* 7f1f0c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7f1f12u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7f1f12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1f14: jne 0x7f1f2e */
  if (!zf) goto L_7f1f2e;
L_7f1f16: /* 7f1f16: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7f1f1b: push 0xadf968 */
  { uint32_t v = 0xadf968u; esp -= 4; W32(esp, v); }
/* 7f1f20: push 0xadf9ac */
  { uint32_t v = 0xadf9acu; esp -= 4; W32(esp, v); }
/* 7f1f25: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f1f2bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f1f2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f1f2e: /* 7f1f2e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f1f32: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f1f35: jne 0x7f1f3d */
  if (!zf) goto L_7f1f3d;
L_7f1f37: /* 7f1f37: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f1f3du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7f1f3d: /* 7f1f3d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f1f43: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f1f45: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f1f49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1f4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1f4c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f1f50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f1f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f1f53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1f54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1f55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1f56: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f1f5cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f1f5c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f1f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1f60: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1f90(void) {
  LOAD_REGS();
L_7f1f90: /* 7f1f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f1f91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7f1f95: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f1f97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f1f99: mov ecx, esi */
  ecx = esi;
/* 7f1f9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f1fa1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f1fa1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7f1fa4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1fa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f1fa7: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1fc0(void) {
  LOAD_REGS();
L_7f1fc0: /* 7f1fc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7f1fc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7f1fc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f1fca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f1fcb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f1fceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f1fce: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1fe0(void) {
  LOAD_REGS();
L_7f1fe0: /* 7f1fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f1fe1: mov ebp, esp */
  ebp = esp;
/* 7f1fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f1fe5: push 0x9d1380 */
  { uint32_t v = 0x9d1380u; esp -= 4; W32(esp, v); }
/* 7f1fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f1ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f1ff8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1ffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f1ffc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f1fff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2000: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f2003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2004: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 7f200a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f200d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f200e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f200f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f2016: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f2018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2018: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f201a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f201d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7f2020: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2021: mov ecx, eax */
  ecx = eax;
/* 7f2023: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f2026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2026: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f2028: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 7f202b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f202c: mov ecx, eax */
  ecx = eax;
/* 7f202e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f2031u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2031: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 7f2034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f2035: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2036: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f2038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2038: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f203b: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7f203e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f203f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2040: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f2042u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2042: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2045: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 7f2048: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f2049: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f204a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f204cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f204c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f204f: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f2052: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2054: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x7f205au); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 7f205a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f205d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2062: mov eax, ebx */
  eax = ebx;
/* 7f2064: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f206b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f206c: mov esp, ebp */
  esp = ebp;
/* 7f206e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f206f: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2070(void) {
  LOAD_REGS();
L_7f2070: /* 7f2070: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2073: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2078: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f207b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f207c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f207f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2084u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2084(); return;
}

void f_7f2084(void) {
  LOAD_REGS();
L_7f2084: /* 7f2084: push 0xa11694 */
  { uint32_t v = 0xa11694u; esp -= 4; W32(esp, v); }
/* 7f2089: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f208e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2094u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2094: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2097: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f209b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f20a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f20a0: guest_badaddr(0x7f20a0); return;
}

void f_7f20f0(void) {
  LOAD_REGS();
L_7f20f0: /* 7f20f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f20f1: mov esi, ecx */
  esi = ecx;
/* 7f20f3: call dword ptr [0xcfaa90] */
  esp -= 4; W32(esp, 0x7f20f9u); SPILL(); f_4e4057(); if (g_unwind) return; /* Core!??1FPackageInfo@@QAE@XZ */ RELOAD();
/* 7f20f9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f20fe: je 0x7f210d */
  if (zf) goto L_7f210d;
L_7f2100: /* 7f2100: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7f2105: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f2107: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f2109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f210a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f210du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f210d: /* 7f210d: mov eax, esi */
  eax = esi;
/* 7f210f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2110: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f2130(void) {
  LOAD_REGS();
L_7f2130: /* 7f2130: mov eax, 1 */
  eax = 0x1u;
/* 7f2135: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2150(void) {
  LOAD_REGS();
L_7f2150: /* 7f2150: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 7f2153: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7f2156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2158: je 0x7f21d5 */
  if (zf) goto L_7f21d5;
L_7f215a: /* 7f215a: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7f215d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f215e: xor esi, esi */
  esi = 0;
/* 7f2160: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f2162: jle 0x7f21d4 */
  if ((zf || sf != of)) goto L_7f21d4;
L_7f2164: /* 7f2164: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_7f2165: /* 7f2165: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f2168: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7f216b: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7f216e: cmp dword ptr [edx + 0xb4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xb4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2174: jne 0x7f21c5 */
  if (!zf) goto L_7f21c5;
L_7f2176: /* 7f2176: mov ebx, dword ptr [edx + 0x544] */
  ebx = R32((uint32_t)(edx + 0x544u));
/* 7f217c: mov dword ptr [eax + 0x17c], ebx */
  W32((uint32_t)(eax + 0x17cu), ebx);
/* 7f2182: mov ebx, dword ptr [edx + 0x348] */
  ebx = R32((uint32_t)(edx + 0x348u));
/* 7f2188: mov dword ptr [eax + 0x180], ebx */
  W32((uint32_t)(eax + 0x180u), ebx);
/* 7f218e: mov ebx, dword ptr [edx + 0x534] */
  ebx = R32((uint32_t)(edx + 0x534u));
/* 7f2194: mov dword ptr [eax + 0x184], ebx */
  W32((uint32_t)(eax + 0x184u), ebx);
/* 7f219a: mov ebx, dword ptr [edx + 0x540] */
  ebx = R32((uint32_t)(edx + 0x540u));
/* 7f21a0: mov dword ptr [eax + 0x188], ebx */
  W32((uint32_t)(eax + 0x188u), ebx);
/* 7f21a6: mov ebx, dword ptr [edx + 0x538] */
  ebx = R32((uint32_t)(edx + 0x538u));
/* 7f21ac: mov dword ptr [eax + 0x18c], ebx */
  W32((uint32_t)(eax + 0x18cu), ebx);
/* 7f21b2: mov edx, dword ptr [edx + 0x53c] */
  edx = R32((uint32_t)(edx + 0x53cu));
/* 7f21b8: mov dword ptr [eax + 0x190], edx */
  W32((uint32_t)(eax + 0x190u), edx);
/* 7f21be: mov dword ptr [eax + 0x30], 0 */
  W32((uint32_t)(eax + 0x30u), 0x0u);
L_7f21c5: /* 7f21c5: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 7f21c8: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7f21cb: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7f21ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f21cf: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f21d1: jl 0x7f2165 */
  if ((sf != of)) goto L_7f2165;
L_7f21d3: /* 7f21d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7f21d4: /* 7f21d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7f21d5: /* 7f21d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2210(void) {
  LOAD_REGS();
L_7f2210: /* 7f2210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2211: mov ebp, esp */
  ebp = esp;
/* 7f2213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f2215: push 0x9d1390 */
  { uint32_t v = 0x9d1390u; esp -= 4; W32(esp, v); }
/* 7f221a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f2220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f2228: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f222b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f222c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f222d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f222e: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7f2231: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2233: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f2236: mov esi, ecx */
  esi = ecx;
/* 7f2238: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f223f: jne 0x7f2248 */
  if (!zf) goto L_7f2248;
L_7f2241: /* 7f2241: mov eax, 2 */
  eax = 0x2u;
/* 7f2246: jmp 0x7f2261 */
  goto L_7f2261;
L_7f2248: /* 7f2248: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7f224d: mov ecx, edi */
  ecx = edi;
/* 7f224f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2255u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2255: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2257: mov eax, 1 */
  eax = 0x1u;
/* 7f225c: jne 0x7f2261 */
  if (!zf) goto L_7f2261;
L_7f225e: /* 7f225e: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
L_7f2261: /* 7f2261: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7f2264: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7f226b: je 0x7f22e7 */
  if (zf) goto L_7f22e7;
L_7f226d: /* 7f226d: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7f2270: je 0x7f22e7 */
  if (zf) goto L_7f22e7;
L_7f2272: /* 7f2272: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7f2273: je 0x7f228d */
  if (zf) goto L_7f228d;
L_7f2275: /* 7f2275: mov eax, 1 */
  eax = 0x1u;
/* 7f227a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f227d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2284: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2285: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2286: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2287: mov esp, ebp */
  esp = ebp;
/* 7f2289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f228a: ret 0x20 */
  esp += 36; SPILL(); return;
L_7f228d: /* 7f228d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f228f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f2292: mov ecx, esp */
  ecx = esp;
/* 7f2294: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7f229b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7f229e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f22a0: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7f22a7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f22aa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f22ad: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7f22b4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f22b7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7f22ba: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7f22bf: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 7f22c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f22c3: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7f22c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f22c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f22c8: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7f22cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f22cc: mov ecx, esi */
  ecx = esi;
/* 7f22ce: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7f22d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f22d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f22d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f22de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f22df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f22e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f22e1: mov esp, ebp */
  esp = ebp;
/* 7f22e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f22e4: ret 0x20 */
  esp += 36; SPILL(); return;
L_7f22e7: /* 7f22e7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7f22ea: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7f22ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f22f0: mov edx, esp */
  edx = esp;
/* 7f22f2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7f22f4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 7f22f7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7f22fa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7f22fd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f2300: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f2303: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f2306: mov ecx, esp */
  ecx = esp;
/* 7f2308: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f230a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7f230d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7f2310: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7f2313: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 7f2319: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7f231eu); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7f231e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2321: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2322: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2323: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 7f2326: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f232d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f232e: mov esp, ebp */
  esp = ebp;
/* 7f2330: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2331: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7f2334(void) {
  LOAD_REGS();
L_7f2334: /* 7f2334: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2337: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f233c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f233f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2340: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f2343: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2348u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2348(); return;
}

void f_7f2348(void) {
  LOAD_REGS();
L_7f2348: /* 7f2348: push 0xa116b4 */
  { uint32_t v = 0xa116b4u; esp -= 4; W32(esp, v); }
/* 7f234d: push 0xadf954 */
  { uint32_t v = 0xadf954u; esp -= 4; W32(esp, v); }
/* 7f2352: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2358u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2358: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f235b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f235d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f235f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2364u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f2364: guest_badaddr(0x7f2364); return;
}

void f_7f23d0(void) {
  LOAD_REGS();
L_7f23d0: /* 7f23d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f23d1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f23d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f23d5: mov esi, ecx */
  esi = ecx;
/* 7f23d7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f23ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f23dd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f23df: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7f23e3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7f23e5: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 7f23e8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7f23eb: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 7f23ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f23f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f2410(void) {
  LOAD_REGS();
L_7f2410: /* 7f2410: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7f2413: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7f2419: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f241b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7f241e: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2430(void) {
  LOAD_REGS();
L_7f2430: /* 7f2430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2431: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f2433: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f2435: mov esi, ecx */
  esi = ecx;
/* 7f2437: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f243du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f243d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7f2441: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f2443: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7f2445: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7f2448: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2449: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f2460(void) {
  LOAD_REGS();
L_7f2460: /* 7f2460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2462: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7f2468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f246a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7f246e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f2470: mov esi, ecx */
  esi = ecx;
/* 7f2472: jge 0x7f2488 */
  if ((sf == of)) goto L_7f2488;
L_7f2474: /* 7f2474: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7f2479: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f247e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7f2483: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f2485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2485: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f2488: /* 7f2488: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f248b: jle 0x7f24a1 */
  if ((zf || sf != of)) goto L_7f24a1;
L_7f248d: /* 7f248d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7f2492: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f2497: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7f249c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f249eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f249e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f24a1: /* 7f24a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7f24a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7f24a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7f24ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f24ad: jle 0x7f24c3 */
  if ((zf || sf != of)) goto L_7f24c3;
L_7f24af: /* 7f24af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7f24b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f24b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7f24be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f24c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f24c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f24c3: /* 7f24c3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f24c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f24c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f24c7: mov ecx, esi */
  ecx = esi;
/* 7f24c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7f24cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7f24cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f24d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f24d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f24d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f24d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f2500(void) {
  LOAD_REGS();
L_7f2500: /* 7f2500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f2504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2505: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f2507: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f250du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f250d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f2520(void) {
  LOAD_REGS();
L_7f2520: /* 7f2520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2521: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f2525: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2527: je 0x7f253e */
  if (zf) goto L_7f253e;
L_7f2529: /* 7f2529: push 0xb6e718 */
  { uint32_t v = 0xb6e718u; esp -= 4; W32(esp, v); }
/* 7f252e: mov ecx, esi */
  ecx = esi;
/* 7f2530: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2536u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2536: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2538: je 0x7f253e */
  if (zf) goto L_7f253e;
L_7f253a: /* 7f253a: mov eax, esi */
  eax = esi;
/* 7f253c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f253d: ret  */
  esp += 4; SPILL(); return;
L_7f253e: /* 7f253e: xor eax, eax */
  eax = 0;
/* 7f2540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2541: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2560(void) {
  LOAD_REGS();
L_7f2560: /* 7f2560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2561: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f2565: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2567: je 0x7f257e */
  if (zf) goto L_7f257e;
L_7f2569: /* 7f2569: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7f256e: mov ecx, esi */
  ecx = esi;
/* 7f2570: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2576u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2578: je 0x7f257e */
  if (zf) goto L_7f257e;
L_7f257a: /* 7f257a: mov eax, esi */
  eax = esi;
/* 7f257c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f257d: ret  */
  esp += 4; SPILL(); return;
L_7f257e: /* 7f257e: xor eax, eax */
  eax = 0;
/* 7f2580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2581: ret  */
  esp += 4; SPILL(); return;
}

void f_7f25a0(void) {
  LOAD_REGS();
L_7f25a0: /* 7f25a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f25a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7f25a5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f25a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f25a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f25a9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7f25af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f25b0: mov ebp, ecx */
  ebp = ecx;
/* 7f25b2: jge 0x7f25c8 */
  if ((sf == of)) goto L_7f25c8;
L_7f25b4: /* 7f25b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7f25b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f25be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7f25c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f25c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f25c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f25c8: /* 7f25c8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f25cb: jle 0x7f25e1 */
  if ((zf || sf != of)) goto L_7f25e1;
L_7f25cd: /* 7f25cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7f25d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f25d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7f25dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f25deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f25de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f25e1: /* 7f25e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7f25e5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7f25e8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f25eb: jle 0x7f2601 */
  if ((zf || sf != of)) goto L_7f2601;
L_7f25ed: /* 7f25ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7f25f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f25f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7f25fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f25feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f25fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f2601: /* 7f2601: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2603: jge 0x7f2621 */
  if ((sf == of)) goto L_7f2621;
L_7f2605: /* 7f2605: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 7f2608: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7f260b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7f260d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f2610: /* 7f2610: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7f2613: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f2615: call dword ptr [0xcfaa90] */
  esp -= 4; W32(esp, 0x7f261bu); SPILL(); f_4e4057(); if (g_unwind) return; /* Core!??1FPackageInfo@@QAE@XZ */ RELOAD();
/* 7f261b: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f261e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7f261f: jne 0x7f2610 */
  if (!zf) goto L_7f2610;
L_7f2621: /* 7f2621: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7f2625: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7f2627: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2628: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2629: mov ecx, ebp */
  ecx = ebp;
/* 7f262b: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7f2631u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7f2631: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2632: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2633: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2634: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2635: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f2670(void) {
  LOAD_REGS();
L_7f2670: /* 7f2670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2671: mov ebp, esp */
  ebp = esp;
/* 7f2673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f2675: push 0x9d13a0 */
  { uint32_t v = 0x9d13a0u; esp -= 4; W32(esp, v); }
/* 7f267a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f2680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f2688: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f268b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f268c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f268d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f268e: mov esi, ecx */
  esi = ecx;
/* 7f2690: xor ebx, ebx */
  ebx = 0;
/* 7f2692: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 7f2697: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f269a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f269d: call 0x6cce96 */
  esp -= 4; W32(esp, 0x7f26a2u); SPILL(); f_6cce96(); if (g_unwind) return; RELOAD();
/* 7f26a2: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f26a5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f26a7: mov cl, byte ptr [ebp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7f26aa: mov byte ptr [eax + 0x448], cl */
  W8((uint32_t)(eax + 0x448u), (ecx & 0xffu));
/* 7f26b0: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f26b3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f26b5: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7f26bb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f26bd: je 0x7f26d8 */
  if (zf) goto L_7f26d8;
L_7f26bf: /* 7f26bf: mov eax, dword ptr [0xb7e3c0] */
  eax = R32((uint32_t)(0xb7e3c0u));
/* 7f26c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f26c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f26c6: mov edi, ecx */
  edi = ecx;
/* 7f26c8: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7f26ceu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7f26ce: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f26d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f26d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f26d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f26d3: mov ecx, edi */
  ecx = edi;
/* 7f26d5: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7f26d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f26d8: /* 7f26d8: xor ecx, ecx */
  ecx = 0;
/* 7f26da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f26e0: /* 7f26e0: cmp ecx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f26e3: jge 0x7f2725 */
  if ((sf == of)) goto L_7f2725;
L_7f26e5: /* 7f26e5: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f26e8: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7f26eb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f26ed: je 0x7f26f2 */
  if (zf) goto L_7f26f2;
L_7f26ef: /* 7f26ef: mov byte ptr [eax + 0x6c], bl */
  W8((uint32_t)(eax + 0x6cu), (ebx & 0xffu));
L_7f26f2: /* 7f26f2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f26f3: jmp 0x7f26e0 */
  goto L_7f26e0;
L_7f2725: /* 7f2725: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f272a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2731: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2732: mov esp, ebp */
  esp = ebp;
/* 7f2734: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2735: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f26f5(void) {
  LOAD_REGS();
L_7f26f5: /* 7f26f5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f26f8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f26fd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f2700: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f2701: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f2704: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2709u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2709(); return;
}

void f_7f2709(void) {
  LOAD_REGS();
L_7f2709: /* 7f2709: push 0xa116e4 */
  { uint32_t v = 0xa116e4u; esp -= 4; W32(esp, v); }
/* 7f270e: push 0xadeab4 */
  { uint32_t v = 0xadeab4u; esp -= 4; W32(esp, v); }
/* 7f2713: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2719u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2719: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f271c: xor ebx, ebx */
  ebx = 0;
/* 7f271e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f271f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2720: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2725u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f2725: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f272a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2731: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2732: mov esp, ebp */
  esp = ebp;
/* 7f2734: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2735: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f2780(void) {
  LOAD_REGS();
L_7f2780: /* 7f2780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2781: mov ebp, esp */
  ebp = esp;
/* 7f2783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f2785: push 0x9d13b0 */
  { uint32_t v = 0x9d13b0u; esp -= 4; W32(esp, v); }
/* 7f278a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f2790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f2798: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f279b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7f27a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f27a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f27a2: mov esi, ecx */
  esi = ecx;
/* 7f27a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f27a6: xor ebx, ebx */
  ebx = 0;
/* 7f27a8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f27aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f27ab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f27ae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f27b1: je 0x7f27f1 */
  if (zf) goto L_7f27f1;
L_7f27b3: /* 7f27b3: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f27b6: jge 0x7f27f1 */
  if ((sf == of)) goto L_7f27f1;
L_7f27b8: /* 7f27b8: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7f27bb: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7f27be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f27c0: je 0x7f27ee */
  if (zf) goto L_7f27ee;
L_7f27c2: /* 7f27c2: push 0xb6e718 */
  { uint32_t v = 0xb6e718u; esp -= 4; W32(esp, v); }
/* 7f27c7: mov ecx, edi */
  ecx = edi;
/* 7f27c9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f27cfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f27cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f27d1: je 0x7f27ee */
  if (zf) goto L_7f27ee;
L_7f27d3: /* 7f27d3: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f27d6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f27d8: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7f27ddu); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7f27dd: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f27df: je 0x7f27ee */
  if (zf) goto L_7f27ee;
L_7f27e1: /* 7f27e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f27e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f27e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f27e6: mov ecx, esi */
  ecx = esi;
/* 7f27e8: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x7f27eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f27ee: /* 7f27ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f27ef: jmp 0x7f27b3 */
  goto L_7f27b3;
L_7f27f1: /* 7f27f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f27f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f27f6: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f27fc: je 0x7f286f */
  if (zf) goto L_7f286f;
L_7f27fe: /* 7f27fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2800: jne 0x7f2873 */
  if (!zf) goto L_7f2873;
L_7f2802: /* 7f2802: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f2806: call 0x6c1aa5 */
  esp -= 4; W32(esp, 0x7f280bu); SPILL(); f_6c1aa5(); if (g_unwind) return; RELOAD();
/* 7f280b: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 7f2811: xor edi, edi */
  edi = 0;
/* 7f2813: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
L_7f2815: /* 7f2815: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2818: jge 0x7f28c6 */
  if ((sf == of)) goto L_7f28c6;
L_7f281e: /* 7f281e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7f2821: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 7f2824: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2826: je 0x7f283c */
  if (zf) goto L_7f283c;
L_7f2828: /* 7f2828: test byte ptr [eax + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f282e: je 0x7f283c */
  if (zf) goto L_7f283c;
L_7f2830: /* 7f2830: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f2836: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f2838: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2839: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7f283cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f283c: /* 7f283c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f283d: jmp 0x7f2815 */
  goto L_7f2815;
L_7f286f: /* 7f286f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2871: je 0x7f28c6 */
  if (zf) goto L_7f28c6;
L_7f2873: /* 7f2873: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2875: jne 0x7f28c6 */
  if (!zf) goto L_7f28c6;
L_7f2877: /* 7f2877: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f287a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f287c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f2880: jne 0x7f28ac */
  if (!zf) goto L_7f28ac;
L_7f2882: /* 7f2882: xor edi, edi */
  edi = 0;
/* 7f2884: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
L_7f2886: /* 7f2886: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2889: jge 0x7f28ac */
  if ((sf == of)) goto L_7f28ac;
L_7f288b: /* 7f288b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f288e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7f2891: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2893: je 0x7f28a9 */
  if (zf) goto L_7f28a9;
L_7f2895: /* 7f2895: test byte ptr [eax + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f289b: je 0x7f28a9 */
  if (zf) goto L_7f28a9;
L_7f289d: /* 7f289d: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f28a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f28a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f28a6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f28a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f28a9: /* 7f28a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f28aa: jmp 0x7f2886 */
  goto L_7f2886;
L_7f28ac: /* 7f28ac: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f28b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f28b4: je 0x7f28bc */
  if (zf) goto L_7f28bc;
L_7f28b6: /* 7f28b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f28b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f28ba: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7f28bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f28bc: /* 7f28bc: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7f28c6: /* 7f28c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f28c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f28ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f28cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f28d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f28d3: mov esp, ebp */
  esp = ebp;
/* 7f28d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f28d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f283f(void) {
  LOAD_REGS();
L_7f283f: /* 7f283f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f2842: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2847: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f284a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f284b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f284e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2853u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2853(); return;
}

void f_7f2853(void) {
  LOAD_REGS();
L_7f2853: /* 7f2853: push 0xa11778 */
  { uint32_t v = 0xa11778u; esp -= 4; W32(esp, v); }
/* 7f2858: push 0xadeb44 */
  { uint32_t v = 0xadeb44u; esp -= 4; W32(esp, v); }
/* 7f285d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2863u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2863: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2866: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2868: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f286a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f286fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f286f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2871: je 0x7f28c6 */
  if (zf) goto L_7f28c6;
L_7f2873: /* 7f2873: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2875: jne 0x7f28c6 */
  if (!zf) goto L_7f28c6;
L_7f2877: /* 7f2877: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f287a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f287c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f2880: jne 0x7f28ac */
  if (!zf) goto L_7f28ac;
L_7f2882: /* 7f2882: xor edi, edi */
  edi = 0;
/* 7f2884: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
L_7f2886: /* 7f2886: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2889: jge 0x7f28ac */
  if ((sf == of)) goto L_7f28ac;
L_7f288b: /* 7f288b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f288e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7f2891: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2893: je 0x7f28a9 */
  if (zf) goto L_7f28a9;
L_7f2895: /* 7f2895: test byte ptr [eax + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f289b: je 0x7f28a9 */
  if (zf) goto L_7f28a9;
L_7f289d: /* 7f289d: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f28a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f28a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f28a6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f28a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f28a9: /* 7f28a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f28aa: jmp 0x7f2886 */
  goto L_7f2886;
L_7f28ac: /* 7f28ac: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7f28b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f28b4: je 0x7f28bc */
  if (zf) goto L_7f28bc;
L_7f28b6: /* 7f28b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f28b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f28ba: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7f28bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f28bc: /* 7f28bc: mov dword ptr [esi + 0xec], 0 */
  W32((uint32_t)(esi + 0xecu), 0x0u);
L_7f28c6: /* 7f28c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f28c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f28ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f28cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f28d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f28d3: mov esp, ebp */
  esp = ebp;
/* 7f28d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f28d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f28d9(void) {
  LOAD_REGS();
L_7f28d9: /* 7f28d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f28dc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f28e1: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f28e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f28e5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f28e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f28edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f28ed(); return;
}

void f_7f28ed(void) {
  LOAD_REGS();
L_7f28ed: /* 7f28ed: push 0xa11758 */
  { uint32_t v = 0xa11758u; esp -= 4; W32(esp, v); }
/* 7f28f2: push 0xadeb4c */
  { uint32_t v = 0xadeb4cu; esp -= 4; W32(esp, v); }
/* 7f28f7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f28fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f28fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2900: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2904: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2909u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2909(); return;
}

void f_7f2909(void) {
  LOAD_REGS();
L_7f2909: /* 7f2909: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f290c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2911: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f2914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2915: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f2918: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f291du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f291d(); return;
}

void f_7f291d(void) {
  LOAD_REGS();
L_7f291d: /* 7f291d: push 0xa11718 */
  { uint32_t v = 0xa11718u; esp -= 4; W32(esp, v); }
/* 7f2922: push 0xadeb54 */
  { uint32_t v = 0xadeb54u; esp -= 4; W32(esp, v); }
/* 7f2927: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f292du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f292d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2930: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2934: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2939u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f2939: guest_badaddr(0x7f2939); return;
}

void f_7f29b0(void) {
  LOAD_REGS();
L_7f29b0: /* 7f29b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f29b1: mov ebp, esp */
  ebp = esp;
/* 7f29b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f29b5: push 0x9d13c0 */
  { uint32_t v = 0x9d13c0u; esp -= 4; W32(esp, v); }
/* 7f29ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f29c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f29c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f29c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f29cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f29cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f29cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f29ce: mov edi, ecx */
  edi = ecx;
/* 7f29d0: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 7f29d6: xor ebx, ebx */
  ebx = 0;
/* 7f29d8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f29da: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f29dd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f29e0: je 0x7f29f0 */
  if (zf) goto L_7f29f0;
L_7f29e2: /* 7f29e2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f29e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f29e6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7f29e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f29e8: mov dword ptr [edi + 0xec], ebx */
  W32((uint32_t)(edi + 0xecu), ebx);
/* 7f29ee: mov edi, edi */
  edi = edi;
L_7f29f0: /* 7f29f0: cmp ebx, dword ptr [edi + 0x1138] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1138u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f29f6: jge 0x7f2a1e */
  if ((sf == of)) goto L_7f2a1e;
L_7f29f8: /* 7f29f8: mov ecx, dword ptr [edi + 0x1134] */
  ecx = R32((uint32_t)(edi + 0x1134u));
/* 7f29fe: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7f2a01: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 7f2a04: jne 0x7f2a1b */
  if (!zf) goto L_7f2a1b;
L_7f2a06: /* 7f2a06: mov ecx, esi */
  ecx = esi;
/* 7f2a08: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x7f2a0du); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 7f2a0d: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7f2a13: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f2a15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f2a17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2a18: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7f2a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f2a1b: /* 7f2a1b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f2a1c: jmp 0x7f29f0 */
  goto L_7f29f0;
L_7f2a1e: /* 7f2a1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2a1f: call 0x6c4f48 */
  esp -= 4; W32(esp, 0x7f2a24u); SPILL(); f_6c4f48(); if (g_unwind) return; RELOAD();
/* 7f2a24: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 7f2a29: call 0x6cce96 */
  esp -= 4; W32(esp, 0x7f2a2eu); SPILL(); f_6cce96(); if (g_unwind) return; RELOAD();
/* 7f2a2e: mov ecx, edi */
  ecx = edi;
/* 7f2a30: call 0x6cb519 */
  esp -= 4; W32(esp, 0x7f2a35u); SPILL(); f_6cb519(); if (g_unwind) return; RELOAD();
/* 7f2a35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2a38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2a39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2a41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2a42: mov esp, ebp */
  esp = ebp;
/* 7f2a44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2a45: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2a46(void) {
  LOAD_REGS();
L_7f2a46: /* 7f2a46: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2a49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2a4e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f2a51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f2a52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f2a55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2a5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2a5a(); return;
}

void f_7f2a5a(void) {
  LOAD_REGS();
L_7f2a5a: /* 7f2a5a: push 0xa1179c */
  { uint32_t v = 0xa1179cu; esp -= 4; W32(esp, v); }
/* 7f2a5f: push 0xadeb64 */
  { uint32_t v = 0xadeb64u; esp -= 4; W32(esp, v); }
/* 7f2a64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2a6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2a6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2a6d: xor ebx, ebx */
  ebx = 0;
/* 7f2a6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2a70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2a71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2a76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f2a76: guest_badaddr(0x7f2a76); return;
}

void f_7f2ac0(void) {
  LOAD_REGS();
L_7f2ac0: /* 7f2ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2ac1: mov ebp, esp */
  ebp = esp;
/* 7f2ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f2ac5: push 0x9d13d0 */
  { uint32_t v = 0x9d13d0u; esp -= 4; W32(esp, v); }
/* 7f2aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f2ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f2ad8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f2adb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7f2ae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2ae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2ae3: mov ebx, ecx */
  ebx = ecx;
/* 7f2ae5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f2ae7: xor edi, edi */
  edi = 0;
/* 7f2ae9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2aeb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f2aee: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2af1: jne 0x7f2b0b */
  if (!zf) goto L_7f2b0b;
L_7f2af3: /* 7f2af3: push 0x1c7 */
  { uint32_t v = 0x1c7u; esp -= 4; W32(esp, v); }
/* 7f2af8: push 0xadeb84 */
  { uint32_t v = 0xadeb84u; esp -= 4; W32(esp, v); }
/* 7f2afd: push 0xadeb90 */
  { uint32_t v = 0xadeb90u; esp -= 4; W32(esp, v); }
/* 7f2b02: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f2b08u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f2b08: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f2b0b: /* 7f2b0b: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 7f2b10: call 0x6cce96 */
  esp -= 4; W32(esp, 0x7f2b15u); SPILL(); f_6cce96(); if (g_unwind) return; RELOAD();
/* 7f2b15: xor esi, esi */
  esi = 0;
L_7f2b17: /* 7f2b17: cmp esi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2b1a: jge 0x7f2b49 */
  if ((sf == of)) goto L_7f2b49;
L_7f2b1c: /* 7f2b1c: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7f2b1f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7f2b22: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2b24: je 0x7f2b46 */
  if (zf) goto L_7f2b46;
L_7f2b26: /* 7f2b26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f2b28: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x7f2b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2b2e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2b30: je 0x7f2b46 */
  if (zf) goto L_7f2b46;
L_7f2b32: /* 7f2b32: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f2b35: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7f2b38: cmp dword ptr [eax + 0x4c0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2b3e: je 0x7f2b46 */
  if (zf) goto L_7f2b46;
L_7f2b40: /* 7f2b40: mov dword ptr [eax + 0x4c0], edi */
  W32((uint32_t)(eax + 0x4c0u), edi);
L_7f2b46: /* 7f2b46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f2b47: jmp 0x7f2b17 */
  goto L_7f2b17;
L_7f2b49: /* 7f2b49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f2b4d: xor ecx, ecx */
  ecx = 0;
L_7f2b4f: /* 7f2b4f: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 7f2b52: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7f2b55: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2b58: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7f2b5b: jge 0x7f2c3b */
  if ((sf == of)) goto L_7f2c3b;
L_7f2b61: /* 7f2b61: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7f2b64: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7f2b67: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2b6a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f2b6d: jne 0x7f2bf7 */
  if (!zf) goto L_7f2bf7;
L_7f2b73: /* 7f2b73: xor eax, eax */
  eax = 0;
L_7f2b75: /* 7f2b75: cmp eax, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2b78: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f2b7b: jge 0x7f2bf7 */
  if ((sf == of)) goto L_7f2bf7;
L_7f2b7d: /* 7f2b7d: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7f2b80: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7f2b83: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2b85: je 0x7f2c32 */
  if (zf) goto L_7f2c32;
L_7f2b8b: /* 7f2b8b: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f2b90: mov ecx, esi */
  ecx = esi;
/* 7f2b92: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2b98u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2b98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2b9a: je 0x7f2c32 */
  if (zf) goto L_7f2c32;
L_7f2ba0: /* 7f2ba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2ba3: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f2ba9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f2ba9: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7f2baf: mov edi, eax */
  edi = eax;
/* 7f2bb1: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7f2bb7u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7f2bb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2bb9: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7f2bbfu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7f2bbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2bc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2bc4: jne 0x7f2c32 */
  if (!zf) goto L_7f2c32;
L_7f2bc6: /* 7f2bc6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2bc9: mov ecx, edi */
  ecx = edi;
/* 7f2bcb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f2bd1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f2bd1: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f2bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2bd8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f2bda: push 0xadeb9c */
  { uint32_t v = 0xadeb9cu; esp -= 4; W32(esp, v); }
/* 7f2bdf: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7f2be4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2be5: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f2bebu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f2beb: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 7f2bee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2bf1: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
L_7f2bf7: /* 7f2bf7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f2bfa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f2bfb: xor edi, edi */
  edi = 0;
/* 7f2bfd: jmp 0x7f2b4f */
  goto L_7f2b4f;
L_7f2c32: /* 7f2c32: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2c35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f2c36: jmp 0x7f2b75 */
  goto L_7f2b75;
L_7f2c3b: /* 7f2c3b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2c3e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f2c42: xor esi, esi */
  esi = 0;
L_7f2c44: /* 7f2c44: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 7f2c47: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7f2c4a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2c4d: jge 0x7f2c98 */
  if ((sf == of)) goto L_7f2c98;
L_7f2c4f: /* 7f2c4f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7f2c52: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7f2c55: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2c58: jne 0x7f2c65 */
  if (!zf) goto L_7f2c65;
L_7f2c5a: /* 7f2c5a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2c5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2c5d: mov ecx, ebx */
  ecx = ebx;
/* 7f2c5f: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x7f2c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f2c65: /* 7f2c65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f2c66: jmp 0x7f2c44 */
  goto L_7f2c44;
L_7f2c98: /* 7f2c98: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2c9b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f2c9f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_7f2ca2: /* 7f2ca2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2ca5: cmp edx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2ca8: jge 0x7f2dcf */
  if ((sf == of)) goto L_7f2dcf;
L_7f2cae: /* 7f2cae: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f2cb1: mov ecx, edx */
  ecx = edx;
/* 7f2cb3: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7f2cb6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cb8: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cbe: /* 7f2cbe: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f2cc3: mov ecx, edi */
  ecx = edi;
/* 7f2cc5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ccbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2ccd: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cd3: /* 7f2cd3: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 7f2cd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cdb: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cdd: /* 7f2cdd: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f2ce2: mov ecx, esi */
  ecx = esi;
/* 7f2ce4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ceau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2cea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cec: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cee: /* 7f2cee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f2cf0: mov ecx, edi */
  ecx = edi;
/* 7f2cf2: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7f2cf8u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f2cf8: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2cfb: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 7f2d01: mov dword ptr [edx + 0x544], eax */
  W32((uint32_t)(edx + 0x544u), eax);
/* 7f2d07: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d0a: mov edx, dword ptr [esi + 0x180] */
  edx = R32((uint32_t)(esi + 0x180u));
/* 7f2d10: mov dword ptr [ecx + 0x348], edx */
  W32((uint32_t)(ecx + 0x348u), edx);
/* 7f2d16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d19: mov ecx, dword ptr [esi + 0x184] */
  ecx = R32((uint32_t)(esi + 0x184u));
/* 7f2d1f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 7f2d25: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2d28: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 7f2d2e: mov dword ptr [edx + 0x540], eax */
  W32((uint32_t)(edx + 0x540u), eax);
/* 7f2d34: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d37: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 7f2d3d: mov dword ptr [ecx + 0x538], edx */
  W32((uint32_t)(ecx + 0x538u), edx);
/* 7f2d43: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d46: mov ecx, dword ptr [esi + 0x190] */
  ecx = R32((uint32_t)(esi + 0x190u));
/* 7f2d4c: mov dword ptr [eax + 0x53c], ecx */
  W32((uint32_t)(eax + 0x53cu), ecx);
L_7f2d52: /* 7f2d52: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d55: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2d5a: /* 7f2d5a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2d5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2d5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2d5f: mov ecx, ebx */
  ecx = ebx;
/* 7f2d61: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7f2d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2d67: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d6a: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2dcf: /* 7f2dcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2dd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2ddb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2ddc: mov esp, ebp */
  esp = ebp;
/* 7f2dde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2c02(void) {
  LOAD_REGS();
L_7f2c02: /* 7f2c02: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f2c05: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2c0a: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7f2c0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f2c0e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7f2c11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2c16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2c16(); return;
}

void f_7f2c16(void) {
  LOAD_REGS();
  goto L_7f2c16;
L_7f2b4f: /* 7f2b4f: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 7f2b52: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7f2b55: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2b58: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7f2b5b: jge 0x7f2c3b */
  if ((sf == of)) goto L_7f2c3b;
L_7f2b61: /* 7f2b61: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7f2b64: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7f2b67: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2b6a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f2b6d: jne 0x7f2bf7 */
  if (!zf) goto L_7f2bf7;
L_7f2b73: /* 7f2b73: xor eax, eax */
  eax = 0;
L_7f2b75: /* 7f2b75: cmp eax, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2b78: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f2b7b: jge 0x7f2bf7 */
  if ((sf == of)) goto L_7f2bf7;
L_7f2b7d: /* 7f2b7d: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7f2b80: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7f2b83: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2b85: je 0x7f2c32 */
  if (zf) goto L_7f2c32;
L_7f2b8b: /* 7f2b8b: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f2b90: mov ecx, esi */
  ecx = esi;
/* 7f2b92: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2b98u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2b98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2b9a: je 0x7f2c32 */
  if (zf) goto L_7f2c32;
L_7f2ba0: /* 7f2ba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2ba3: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f2ba9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f2ba9: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7f2baf: mov edi, eax */
  edi = eax;
/* 7f2bb1: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7f2bb7u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7f2bb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2bb9: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7f2bbfu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7f2bbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2bc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2bc4: jne 0x7f2c32 */
  if (!zf) goto L_7f2c32;
L_7f2bc6: /* 7f2bc6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2bc9: mov ecx, edi */
  ecx = edi;
/* 7f2bcb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f2bd1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f2bd1: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f2bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2bd8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f2bda: push 0xadeb9c */
  { uint32_t v = 0xadeb9cu; esp -= 4; W32(esp, v); }
/* 7f2bdf: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7f2be4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2be5: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f2bebu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f2beb: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 7f2bee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2bf1: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
L_7f2bf7: /* 7f2bf7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f2bfa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f2bfb: xor edi, edi */
  edi = 0;
/* 7f2bfd: jmp 0x7f2b4f */
  goto L_7f2b4f;
L_7f2c16: /* 7f2c16: push 0xa11840 */
  { uint32_t v = 0xa11840u; esp -= 4; W32(esp, v); }
/* 7f2c1b: push 0xadebc4 */
  { uint32_t v = 0xadebc4u; esp -= 4; W32(esp, v); }
/* 7f2c20: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2c26u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2c26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2c29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2c2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2c2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2c32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f2c32: /* 7f2c32: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2c35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f2c36: jmp 0x7f2b75 */
  goto L_7f2b75;
L_7f2c3b: /* 7f2c3b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2c3e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f2c42: xor esi, esi */
  esi = 0;
L_7f2c44: /* 7f2c44: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 7f2c47: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7f2c4a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2c4d: jge 0x7f2c98 */
  if ((sf == of)) goto L_7f2c98;
L_7f2c4f: /* 7f2c4f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7f2c52: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7f2c55: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2c58: jne 0x7f2c65 */
  if (!zf) goto L_7f2c65;
L_7f2c5a: /* 7f2c5a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2c5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2c5d: mov ecx, ebx */
  ecx = ebx;
/* 7f2c5f: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x7f2c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f2c65: /* 7f2c65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f2c66: jmp 0x7f2c44 */
  goto L_7f2c44;
L_7f2c98: /* 7f2c98: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2c9b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f2c9f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_7f2ca2: /* 7f2ca2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2ca5: cmp edx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2ca8: jge 0x7f2dcf */
  if ((sf == of)) goto L_7f2dcf;
L_7f2cae: /* 7f2cae: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f2cb1: mov ecx, edx */
  ecx = edx;
/* 7f2cb3: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7f2cb6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cb8: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cbe: /* 7f2cbe: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f2cc3: mov ecx, edi */
  ecx = edi;
/* 7f2cc5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ccbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2ccd: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cd3: /* 7f2cd3: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 7f2cd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cdb: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cdd: /* 7f2cdd: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f2ce2: mov ecx, esi */
  ecx = esi;
/* 7f2ce4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ceau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2cea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cec: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cee: /* 7f2cee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f2cf0: mov ecx, edi */
  ecx = edi;
/* 7f2cf2: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7f2cf8u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f2cf8: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2cfb: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 7f2d01: mov dword ptr [edx + 0x544], eax */
  W32((uint32_t)(edx + 0x544u), eax);
/* 7f2d07: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d0a: mov edx, dword ptr [esi + 0x180] */
  edx = R32((uint32_t)(esi + 0x180u));
/* 7f2d10: mov dword ptr [ecx + 0x348], edx */
  W32((uint32_t)(ecx + 0x348u), edx);
/* 7f2d16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d19: mov ecx, dword ptr [esi + 0x184] */
  ecx = R32((uint32_t)(esi + 0x184u));
/* 7f2d1f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 7f2d25: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2d28: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 7f2d2e: mov dword ptr [edx + 0x540], eax */
  W32((uint32_t)(edx + 0x540u), eax);
/* 7f2d34: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d37: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 7f2d3d: mov dword ptr [ecx + 0x538], edx */
  W32((uint32_t)(ecx + 0x538u), edx);
/* 7f2d43: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d46: mov ecx, dword ptr [esi + 0x190] */
  ecx = R32((uint32_t)(esi + 0x190u));
/* 7f2d4c: mov dword ptr [eax + 0x53c], ecx */
  W32((uint32_t)(eax + 0x53cu), ecx);
L_7f2d52: /* 7f2d52: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d55: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2d5a: /* 7f2d5a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2d5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2d5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2d5f: mov ecx, ebx */
  ecx = ebx;
/* 7f2d61: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7f2d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2d67: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d6a: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2dcf: /* 7f2dcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2dd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2ddb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2ddc: mov esp, ebp */
  esp = ebp;
/* 7f2dde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2c68(void) {
  LOAD_REGS();
L_7f2c68: /* 7f2c68: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f2c6b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2c70: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f2c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2c74: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7f2c77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2c7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2c7c(); return;
}

void f_7f2c7c(void) {
  LOAD_REGS();
L_7f2c7c: /* 7f2c7c: push 0xa11818 */
  { uint32_t v = 0xa11818u; esp -= 4; W32(esp, v); }
/* 7f2c81: push 0xadebcc */
  { uint32_t v = 0xadebccu; esp -= 4; W32(esp, v); }
/* 7f2c86: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2c8cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2c8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2c91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2c93: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2c98u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f2c98: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f2c9b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f2c9f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_7f2ca2: /* 7f2ca2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2ca5: cmp edx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f2ca8: jge 0x7f2dcf */
  if ((sf == of)) goto L_7f2dcf;
L_7f2cae: /* 7f2cae: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f2cb1: mov ecx, edx */
  ecx = edx;
/* 7f2cb3: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7f2cb6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cb8: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cbe: /* 7f2cbe: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f2cc3: mov ecx, edi */
  ecx = edi;
/* 7f2cc5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ccbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2ccd: je 0x7f2d52 */
  if (zf) goto L_7f2d52;
L_7f2cd3: /* 7f2cd3: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 7f2cd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cdb: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cdd: /* 7f2cdd: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f2ce2: mov ecx, esi */
  ecx = esi;
/* 7f2ce4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f2ceau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f2cea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f2cec: je 0x7f2d5a */
  if (zf) goto L_7f2d5a;
L_7f2cee: /* 7f2cee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f2cf0: mov ecx, edi */
  ecx = edi;
/* 7f2cf2: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7f2cf8u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f2cf8: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2cfb: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 7f2d01: mov dword ptr [edx + 0x544], eax */
  W32((uint32_t)(edx + 0x544u), eax);
/* 7f2d07: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d0a: mov edx, dword ptr [esi + 0x180] */
  edx = R32((uint32_t)(esi + 0x180u));
/* 7f2d10: mov dword ptr [ecx + 0x348], edx */
  W32((uint32_t)(ecx + 0x348u), edx);
/* 7f2d16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d19: mov ecx, dword ptr [esi + 0x184] */
  ecx = R32((uint32_t)(esi + 0x184u));
/* 7f2d1f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 7f2d25: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7f2d28: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 7f2d2e: mov dword ptr [edx + 0x540], eax */
  W32((uint32_t)(edx + 0x540u), eax);
/* 7f2d34: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7f2d37: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 7f2d3d: mov dword ptr [ecx + 0x538], edx */
  W32((uint32_t)(ecx + 0x538u), edx);
/* 7f2d43: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7f2d46: mov ecx, dword ptr [esi + 0x190] */
  ecx = R32((uint32_t)(esi + 0x190u));
/* 7f2d4c: mov dword ptr [eax + 0x53c], ecx */
  W32((uint32_t)(eax + 0x53cu), ecx);
L_7f2d52: /* 7f2d52: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d55: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2d5a: /* 7f2d5a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2d5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2d5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2d5f: mov ecx, ebx */
  ecx = ebx;
/* 7f2d61: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7f2d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2d67: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7f2d6a: jmp 0x7f2ca2 */
  goto L_7f2ca2;
L_7f2dcf: /* 7f2dcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2dd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2ddb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2ddc: mov esp, ebp */
  esp = ebp;
/* 7f2dde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2d6f(void) {
  LOAD_REGS();
L_7f2d6f: /* 7f2d6f: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f2d72: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2d77: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f2d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2d7b: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7f2d7e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2d83u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2d83(); return;
}

void f_7f2d83(void) {
  LOAD_REGS();
L_7f2d83: /* 7f2d83: push 0xa11800 */
  { uint32_t v = 0xa11800u; esp -= 4; W32(esp, v); }
/* 7f2d88: push 0xadebd4 */
  { uint32_t v = 0xadebd4u; esp -= 4; W32(esp, v); }
/* 7f2d8d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2d93u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2d93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2d96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2d9a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2d9fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2d9f(); return;
}

void f_7f2d9f(void) {
  LOAD_REGS();
L_7f2d9f: /* 7f2d9f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7f2da2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f2da7: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7f2daa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2dab: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7f2dae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2db3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f2db3(); return;
}

void f_7f2db3(void) {
  LOAD_REGS();
L_7f2db3: /* 7f2db3: push 0xa117c4 */
  { uint32_t v = 0xa117c4u; esp -= 4; W32(esp, v); }
/* 7f2db8: push 0xadebdc */
  { uint32_t v = 0xadebdcu; esp -= 4; W32(esp, v); }
/* 7f2dbd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f2dc3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f2dc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f2dc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2dc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f2dca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f2dcfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f2dcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f2dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f2dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f2dd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f2ddb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f2ddc: mov esp, ebp */
  esp = ebp;
/* 7f2dde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f2ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_7f2eb0(void) {
  LOAD_REGS();
L_7f2eb0: /* 7f2eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f2eb1: mov ebp, esp */
  ebp = esp;
/* 7f2eb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f2eb5: push 0x9d13e0 */
  { uint32_t v = 0x9d13e0u; esp -= 4; W32(esp, v); }
/* 7f2eba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f2ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2ec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f2ec8: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f2ece: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f2ecf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2ed1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f2ed4: xor esi, esi */
  esi = 0;
/* 7f2ed6: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2ed8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f2edb: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7f2ede: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f2ee1: jne 0x7f2efb */
  if (!zf) goto L_7f2efb;
L_7f2ee3: /* 7f2ee3: push 0x291 */
  { uint32_t v = 0x291u; esp -= 4; W32(esp, v); }
/* 7f2ee8: push 0xadee48 */
  { uint32_t v = 0xadee48u; esp -= 4; W32(esp, v); }
/* 7f2eed: push 0xadee54 */
  { uint32_t v = 0xadee54u; esp -= 4; W32(esp, v); }
/* 7f2ef2: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f2ef8u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f2ef8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f2efb: /* 7f2efb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2efd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2efe: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7f2f04: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7f2f0au); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7f2f0a: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 7f2f10: fld dword ptr [edi + 0x2d4] */
  { double v = F32((uint32_t)(edi + 0x2d4u)); FPUSH(v); }
/* 7f2f16: mov eax, dword ptr [edi + 0x2d4] */
  eax = R32((uint32_t)(edi + 0x2d4u));
/* 7f2f1c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7f2f1f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f2f22: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f2f25: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7f2f28: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7f2f2eu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7f2f2e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2f30: je 0x7f2f87 */
  if (zf) goto L_7f2f87;
L_7f2f32: /* 7f2f32: cmp byte ptr [edi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2f36: jne 0x7f2f87 */
  if (!zf) goto L_7f2f87;
L_7f2f38: /* 7f2f38: mov ebx, dword ptr [edi + 0x54] */
  ebx = R32((uint32_t)(edi + 0x54u));
/* 7f2f3b: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f2f3d: je 0x7f2f87 */
  if (zf) goto L_7f2f87;
L_7f2f3f: /* 7f2f3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f2f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2f42: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 7f2f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2f46: mov ecx, ebx */
  ecx = ebx;
/* 7f2f48: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7f2f4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2f4b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f2f4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2f4f: mov ecx, eax */
  ecx = eax;
/* 7f2f51: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x7f2f57u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 7f2f57: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7f2f5a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7f2f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f2f5d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f2f60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2f61: mov ecx, ebx */
  ecx = ebx;
/* 7f2f63: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7f2f66: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7f2f69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f2f69: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 7f2f6c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f2f6f: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 7f2f72: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7f2f75: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7f2f78: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7f2f7b: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7f2f7e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f2f81: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f2f84: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_7f2f87: /* 7f2f87: mov ecx, dword ptr [edi + 0x170] */
  ecx = R32((uint32_t)(edi + 0x170u));
/* 7f2f8d: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 7f2f93: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f2f96: fsub dword ptr [0xa1188c] */
  ST0 = ST0 - (F32((uint32_t)(0xa1188cu)));
/* 7f2f9c: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 7f2fa2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f2fa5: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7f2fa7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7f2faa: lea eax, [edi + 0x170] */
  eax = (uint32_t)(edi + 0x170u);
/* 7f2fb0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f2fb3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7f2fb6: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7f2fb9: mov ecx, esp */
  ecx = esp;
/* 7f2fbb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7f2fbd: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f2fc0: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7f2fc5: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7f2fc8: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f2fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2fcc: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7f2fcf: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7f2fd2: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f2fd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f2fd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f2fd7: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7f2fda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f2fdb: mov ecx, ebx */
  ecx = ebx;
/* 7f2fdd: mov dword ptr [ebp - 0x64], esi */
  W32((uint32_t)(ebp + 0xffffff9cu), esi);
/* 7f2fe0: mov dword ptr [ebp - 0x60], esi */
  W32((uint32_t)(ebp + 0xffffffa0u), esi);
/* 7f2fe3: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7f2fea: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7f2ff1: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7f2ff8: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7f2fff: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7f3006: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7f300d: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 7f3010: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 7f3017: mov dword ptr [ebp - 0x3c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc4u), 0xffffffffu);
/* 7f301e: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 7f3021: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7f3027u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3027: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3029: jne 0x7f30dc */
  if (!zf) goto L_7f30dc;
L_7f302f: /* 7f302f: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 7f3032: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f3034: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7f3037: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3039: jne 0x7f30f4 */
  if (!zf) goto L_7f30f4;
L_7f303f: /* 7f303f: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f3042: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3043: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f3046: mov edx, esp */
  edx = esp;
/* 7f3048: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7f304a: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f304d: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7f3050: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3053: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7f3056: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7f3059: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f305c: mov edx, esp */
  edx = esp;
/* 7f305e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7f3060: mov ebx, dword ptr [ebp - 0x58] */
  ebx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7f3063: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7f3066: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7f3069: mov dword ptr [ebp - 0x94], esi */
  W32((uint32_t)(ebp + 0xffffff6cu), esi);
/* 7f306f: mov dword ptr [ebp - 0x90], esi */
  W32((uint32_t)(ebp + 0xffffff70u), esi);
/* 7f3075: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 7f307f: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 7f3089: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 7f3093: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 7f309a: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7f30a1: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7f30a8: mov dword ptr [ebp - 0x74], esi */
  W32((uint32_t)(ebp + 0xffffff8cu), esi);
/* 7f30ab: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 7f30b2: mov dword ptr [ebp - 0x6c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff94u), 0xffffffffu);
/* 7f30b9: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 7f30bc: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7f30c2: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7f30c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f30ca: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7f30cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f30ce: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7f30d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f30d5: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f30d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f30d8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f30da: jne 0x7f30f1 */
  if (!zf) goto L_7f30f1;
L_7f30dc: /* 7f30dc: xor eax, eax */
  eax = 0;
/* 7f30de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f30e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f30e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f30e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f30ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f30eb: mov esp, ebp */
  esp = ebp;
/* 7f30ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f30ee: ret 0xc */
  esp += 16; SPILL(); return;
L_7f30f1: /* 7f30f1: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
L_7f30f4: /* 7f30f4: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7f30f7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7f30f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f30fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f30fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f30fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f30ff: mov ecx, esp */
  ecx = esp;
/* 7f3101: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f3103: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7f3106: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f3109: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7f310c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7f310f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3110: mov ecx, ebx */
  ecx = ebx;
/* 7f3112: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x7f3118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3118: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f311b: je 0x7f3148 */
  if (zf) goto L_7f3148;
L_7f311d: /* 7f311d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7f3120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3121: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7f3124: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x7f312au); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 7f312a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7f312c: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 7f3132: mov edx, ecx */
  edx = ecx;
/* 7f3134: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7f3136: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7f3139: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7f313c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f313f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7f3142: add dword ptr [ecx], 0xffffc000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
L_7f3148: /* 7f3148: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f314b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f314c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f314d: mov eax, 1 */
  eax = 0x1u;
/* 7f3152: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3159: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f315a: mov esp, ebp */
  esp = ebp;
/* 7f315c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f315d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7f3160(void) {
  LOAD_REGS();
L_7f3160: /* 7f3160: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 7f3166: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f316b: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7f316e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f316f: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7f3172: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3177u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f3177(); return;
}

void f_7f3177(void) {
  LOAD_REGS();
L_7f3177: /* 7f3177: push 0xa11864 */
  { uint32_t v = 0xa11864u; esp -= 4; W32(esp, v); }
/* 7f317c: push 0xadee5c */
  { uint32_t v = 0xadee5cu; esp -= 4; W32(esp, v); }
/* 7f3181: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f3187u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f3187: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f318a: xor esi, esi */
  esi = 0;
/* 7f318c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f318d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f318e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3193u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3193: guest_badaddr(0x7f3193); return;
}

void f_7f3260(void) {
  LOAD_REGS();
L_7f3260: /* 7f3260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3261: mov ebp, esp */
  ebp = esp;
/* 7f3263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3265: push 0x9d13fe */
  { uint32_t v = 0x9d13feu; esp -= 4; W32(esp, v); }
/* 7f326a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3278: sub esp, 0x21c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x21cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f327e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f327f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3281: mov edi, ecx */
  edi = ecx;
/* 7f3283: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7f3286: xor ebx, ebx */
  ebx = 0;
/* 7f3288: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f328a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f328d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7f3290: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f3293: je 0x7f32c8 */
  if (zf) goto L_7f32c8;
L_7f3295: /* 7f3295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3296: push 0xadee64 */
  { uint32_t v = 0xadee64u; esp -= 4; W32(esp, v); }
/* 7f329b: push 0xadee74 */
  { uint32_t v = 0xadee74u; esp -= 4; W32(esp, v); }
L_7f32a0: /* 7f32a0: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7f32a6u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7f32a6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f32a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f32ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f32ad: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7f32b3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_7f32b3: /* 7f32b3: xor eax, eax */
  eax = 0;
/* 7f32b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f32b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f32bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f32c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f32c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f32c2: mov esp, ebp */
  esp = ebp;
/* 7f32c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f32c5: ret 4 */
  esp += 8; SPILL(); return;
L_7f32c8: /* 7f32c8: mov ecx, edi */
  ecx = edi;
/* 7f32ca: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7f32d0u); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7f32d0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f32d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f32d3: jne 0x7f32e1 */
  if (!zf) goto L_7f32e1;
L_7f32d5: /* 7f32d5: push 0xadee8c */
  { uint32_t v = 0xadee8cu; esp -= 4; W32(esp, v); }
/* 7f32da: push 0xadee9c */
  { uint32_t v = 0xadee9cu; esp -= 4; W32(esp, v); }
/* 7f32df: jmp 0x7f32a0 */
  goto L_7f32a0;
L_7f32e1: /* 7f32e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f32e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f32e4: push 0xadeeb0 */
  { uint32_t v = 0xadeeb0u; esp -= 4; W32(esp, v); }
/* 7f32e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f32ea: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 7f32ef: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7f32f5u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7f32f5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f32f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f32f9: mov esi, eax */
  esi = eax;
/* 7f32fb: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7f3300: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f3302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3303: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3304: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3306: mov ecx, esp */
  ecx = esp;
/* 7f3308: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7f330b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f330c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f3312u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f3312: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f3318u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7f3318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3319: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f331a: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f3320u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f3320: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f3323: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3327: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 7f332a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f332b: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 7f332e: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 7f3331: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f3333: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3334: mov ecx, eax */
  ecx = eax;
/* 7f3336: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7f3339u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3339: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f333b: jne 0x7f3373 */
  if (!zf) goto L_7f3373;
L_7f333d: /* 7f333d: mov ecx, esi */
  ecx = esi;
/* 7f333f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f3345u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f3345: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f334b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f334c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f334e: push 0xadeef0 */
  { uint32_t v = 0xadeef0u; esp -= 4; W32(esp, v); }
/* 7f3353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3354: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f335au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f335a: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7f335d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3360: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3362: je 0x7f336b */
  if (zf) goto L_7f336b;
L_7f3364: /* 7f3364: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f3366: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3368: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f336bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f336b: /* 7f336b: mov dword ptr [edi + 0x3c], ebx */
  W32((uint32_t)(edi + 0x3cu), ebx);
/* 7f336e: jmp 0x7f32b3 */
  goto L_7f32b3;
L_7f3373: /* 7f3373: test byte ptr [0xb85468], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb85468u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f337a: jne 0x7f33a5 */
  if (!zf) goto L_7f33a5;
L_7f337c: /* 7f337c: or dword ptr [0xb85468], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb85468u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb85468u), r);
  }
/* 7f3383: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f3387: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x7f338du); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 7f338d: push 0xadef1c */
  { uint32_t v = 0xadef1cu; esp -= 4; W32(esp, v); }
/* 7f3392: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3393: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x7f3399u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 7f3399: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f339c: mov dword ptr [0xb85464], eax */
  W32((uint32_t)(0xb85464u), eax);
/* 7f33a1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7f33a5: /* 7f33a5: cmp dword ptr [0xb85464], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb85464u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f33ab: jne 0x7f33c3 */
  if (!zf) goto L_7f33c3;
L_7f33ad: /* 7f33ad: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7f33b0: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 7f33b3: cmp ecx, dword ptr [eax + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f33b6: jge 0x7f33c3 */
  if ((sf == of)) goto L_7f33c3;
L_7f33b8: /* 7f33b8: cmp ecx, 0x9c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9c4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f33be: jle 0x7f33c3 */
  if ((zf || sf != of)) goto L_7f33c3;
L_7f33c0: /* 7f33c0: mov dword ptr [eax + 0x64], ecx */
  W32((uint32_t)(eax + 0x64u), ecx);
L_7f33c3: /* 7f33c3: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 7f33c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f33c7: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f33ccu); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f33cc: mov ebx, eax */
  ebx = eax;
/* 7f33ce: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7f33d1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f33d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f33d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f33d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f33d8: mov ecx, ebx */
  ecx = ebx;
/* 7f33da: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7f33dd: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7f33e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f33e3: xor esi, esi */
  esi = 0;
L_7f33e5: /* 7f33e5: cmp esi, dword ptr [ebx + 0x15c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x15cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f33eb: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 7f33ee: jge 0x7f35a7 */
  if ((sf == of)) goto L_7f35a7;
L_7f33f4: /* 7f33f4: mov edx, dword ptr [ebx + 0x158] */
  edx = R32((uint32_t)(ebx + 0x158u));
/* 7f33fa: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7f33fd: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7f3400: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f3406u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f3406: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3408: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7f340b: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 7f3410: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f3416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3417: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f341a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f341b: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7f3421u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7f3421: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3424: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3426: je 0x7f35a1 */
  if (zf) goto L_7f35a1;
L_7f342c: /* 7f342c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f3431: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f3433: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f3439: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f343a: push 0xadef2c */
  { uint32_t v = 0xadef2cu; esp -= 4; W32(esp, v); }
/* 7f343f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3440: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f3446u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f3446: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3449: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f344b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f344d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f344f: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f3455: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f3456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3458: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7f345d: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7f3463u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7f3463: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3466: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f346a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f346c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f346e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3470: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3476: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7f3479: mov esi, eax */
  esi = eax;
/* 7f347b: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7f3482: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7f3489: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7f3490: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7f3496u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7f3496: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f3498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f349b: mov ecx, esp */
  ecx = esp;
/* 7f349d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f349f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7f34a2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f34a5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f34a8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7f34ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7f34ae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f34b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f34b4: mov ecx, esp */
  ecx = esp;
/* 7f34b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f34b8: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7f34bb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7f34be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f34bf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7f34c2: mov ecx, esp */
  ecx = esp;
/* 7f34c4: mov dword ptr [ebp - 0x38], esp */
  W32((uint32_t)(ebp + 0xffffffc8u), esp);
/* 7f34c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f34c9: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f34cfu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f34cf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7f34d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f34d2: mov ecx, edi */
  ecx = edi;
/* 7f34d4: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7f34dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f34da: mov ebx, eax */
  ebx = eax;
/* 7f34dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7f34e0: /* 7f34e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f34e2: je 0x7f3598 */
  if (zf) goto L_7f3598;
L_7f34e8: /* 7f34e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f34ea: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 7f34ef: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f34f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f34f6: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f34f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f34fa: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7f3500u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7f3500: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3503: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3505: je 0x7f3598 */
  if (zf) goto L_7f3598;
L_7f350b: /* 7f350b: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f3511: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 7f3513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3514: call dword ptr [0xcfaa98] */
  esp -= 4; W32(esp, 0x7f351au); SPILL(); f_4e1abe(); if (g_unwind) return; /* Core!?appStrchr@@YAPAGPBGH@Z */ RELOAD();
/* 7f351a: mov edi, eax */
  edi = eax;
/* 7f351c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f351f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3521: je 0x7f34e0 */
  if (zf) goto L_7f34e0;
L_7f3523: /* 7f3523: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 7f3528: mov ecx, ebx */
  ecx = ebx;
/* 7f352a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f352d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7f3533u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7f3533: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3535: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f3538: je 0x7f3542 */
  if (zf) goto L_7f3542;
L_7f353a: /* 7f353a: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7f353d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f3540: jmp 0x7f3549 */
  goto L_7f3549;
L_7f3542: /* 7f3542: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7f3549: /* 7f3549: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f354c: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7f3551u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7f3551: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f3554: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3556: je 0x7f34e0 */
  if (zf) goto L_7f34e0;
L_7f3558: /* 7f3558: mov ecx, esi */
  ecx = esi;
/* 7f355a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f3560u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f3560: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7f3566: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f3567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3568: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7f356eu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7f356e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3571: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3573: jne 0x7f3590 */
  if (!zf) goto L_7f3590;
L_7f3575: /* 7f3575: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 7f3578: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f357b: je 0x7f3590 */
  if (zf) goto L_7f3590;
L_7f357d: /* 7f357d: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 7f3580: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f3582: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3584: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f3586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3588: mov ecx, esi */
  ecx = esi;
/* 7f358a: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x7f3590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f3590: /* 7f3590: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f3593: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7f3596: jmp 0x7f3549 */
  goto L_7f3549;
L_7f3598: /* 7f3598: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f359b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f359e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7f35a1: /* 7f35a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f35a2: jmp 0x7f33e5 */
  goto L_7f33e5;
L_7f35a7: /* 7f35a7: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 7f35aa: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7f35ad: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7f35b0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f35b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f35b4: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7f35b7: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 7f35b9: mov byte ptr [eax + 0x4c8], cl */
  W8((uint32_t)(eax + 0x4c8u), (ecx & 0xffu));
/* 7f35bf: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7f35c2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7f35c5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f35c7: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 7f35ca: mov dword ptr [eax + 0x52c], ecx */
  W32((uint32_t)(eax + 0x52cu), ecx);
/* 7f35d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f35d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f35d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f35d5: mov eax, 1 */
  eax = 0x1u;
/* 7f35da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f35e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f35e2: mov esp, ebp */
  esp = ebp;
/* 7f35e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f35e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f35e8(void) {
  LOAD_REGS();
L_7f35e8: /* 7f35e8: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7f35eb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f35f0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7f35f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f35f4: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7f35f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f35fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f35fc(); return;
}

void f_7f35fc(void) {
  LOAD_REGS();
L_7f35fc: /* 7f35fc: push 0xa11890 */
  { uint32_t v = 0xa11890u; esp -= 4; W32(esp, v); }
/* 7f3601: push 0xadef48 */
  { uint32_t v = 0xadef48u; esp -= 4; W32(esp, v); }
/* 7f3606: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f360cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f360c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f360f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3613: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3618u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3618: guest_badaddr(0x7f3618); return;
}

void f_7f3710(void) {
  LOAD_REGS();
L_7f3710: /* 7f3710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3711: mov ebp, esp */
  ebp = esp;
/* 7f3713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3715: push 0x9d1410 */
  { uint32_t v = 0x9d1410u; esp -= 4; W32(esp, v); }
/* 7f371a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3728: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f372b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f372c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f372d: mov esi, ecx */
  esi = ecx;
/* 7f372f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7f3732: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3734: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3735: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f3738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f373f: jne 0x7f3759 */
  if (!zf) goto L_7f3759;
L_7f3741: /* 7f3741: push 0x31e */
  { uint32_t v = 0x31eu; esp -= 4; W32(esp, v); }
/* 7f3746: push 0xadef50 */
  { uint32_t v = 0xadef50u; esp -= 4; W32(esp, v); }
/* 7f374b: push 0xadef5c */
  { uint32_t v = 0xadef5cu; esp -= 4; W32(esp, v); }
/* 7f3750: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f3756u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f3756: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f3759: /* 7f3759: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7f375c: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f375f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3761: je 0x7f3792 */
  if (zf) goto L_7f3792;
L_7f3763: /* 7f3763: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f3769: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f376b: push 0xadef68 */
  { uint32_t v = 0xadef68u; esp -= 4; W32(esp, v); }
/* 7f3770: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f3775: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f3776: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f377cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f377c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f377f: xor eax, eax */
  eax = 0;
/* 7f3781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f3784: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f378b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f378c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f378d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f378e: mov esp, ebp */
  esp = ebp;
/* 7f3790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f3791: ret  */
  esp += 4; SPILL(); return;
L_7f3792: /* 7f3792: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7f3795: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f3797: push 0xb847c8 */
  { uint32_t v = 0xb847c8u; esp -= 4; W32(esp, v); }
/* 7f379c: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7f37a2: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7f37a8u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7f37a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f37aa: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7f37ad: je 0x7f37e8 */
  if (zf) goto L_7f37e8;
L_7f37af: /* 7f37af: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f37b5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f37b5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f37bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f37bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f37be: push 0xadefc0 */
  { uint32_t v = 0xadefc0u; esp -= 4; W32(esp, v); }
/* 7f37c3: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f37c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f37c9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f37cfu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f37cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f37d2: mov eax, 2 */
  eax = 0x2u;
/* 7f37d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f37da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f37e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f37e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f37e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f37e4: mov esp, ebp */
  esp = ebp;
/* 7f37e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f37e7: ret  */
  esp += 4; SPILL(); return;
L_7f37e8: /* 7f37e8: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f37eeu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f37ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f37ef: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f37f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f37f6: push 0xadf020 */
  { uint32_t v = 0xadf020u; esp -= 4; W32(esp, v); }
/* 7f37fb: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f3800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3801: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f3807u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f3807: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f380a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f380d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f380e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f380f: mov eax, 1 */
  eax = 0x1u;
/* 7f3814: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f381b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f381c: mov esp, ebp */
  esp = ebp;
/* 7f381e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f381f: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3820(void) {
  LOAD_REGS();
L_7f3820: /* 7f3820: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f3823: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f3828: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f382b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f382c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f382f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3834u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f3834(); return;
}

void f_7f3834(void) {
  LOAD_REGS();
L_7f3834: /* 7f3834: push 0xa118b8 */
  { uint32_t v = 0xa118b8u; esp -= 4; W32(esp, v); }
/* 7f3839: push 0xadf078 */
  { uint32_t v = 0xadf078u; esp -= 4; W32(esp, v); }
/* 7f383e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f3844u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f3844: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3847: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3849: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f384b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3850u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3850: guest_badaddr(0x7f3850); return;
}

void f_7f38c0(void) {
  LOAD_REGS();
L_7f38c0: /* 7f38c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f38c1: mov ebp, esp */
  ebp = esp;
/* 7f38c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f38c5: push 0x9d1420 */
  { uint32_t v = 0x9d1420u; esp -= 4; W32(esp, v); }
/* 7f38ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f38d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f38d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f38d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f38db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f38dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f38dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f38de: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f38e1: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 7f38e4: mov esi, ecx */
  esi = ecx;
/* 7f38e6: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7f38e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f38ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f38ed: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7f38f3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f38fa: call dword ptr [0xcfaa9c] */
  esp -= 4; W32(esp, 0x7f3900u); SPILL(); f_4e37d3(); if (g_unwind) return; /* Core!?Copy@UPackageMap@@QAEXPAV1@@Z */ RELOAD();
/* 7f3900: mov ecx, edi */
  ecx = edi;
/* 7f3902: call 0x6c2dce */
  esp -= 4; W32(esp, 0x7f3907u); SPILL(); f_6c2dce(); if (g_unwind) return; RELOAD();
/* 7f3907: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f390a: cmp word ptr [edx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7f390e: je 0x7f394a */
  if (zf) goto L_7f394a;
L_7f3910: /* 7f3910: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f3913: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7f3915: mov ecx, esi */
  ecx = esi;
/* 7f3917: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f391du); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f391d: mov ecx, eax */
  ecx = eax;
/* 7f391f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f3925u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f3925: mov edx, dword ptr [ebx + 0x444] */
  edx = R32((uint32_t)(ebx + 0x444u));
/* 7f392b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f392e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f392f: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7f3931: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7f3934: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f3935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3936: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 7f3939: push 0xadf2e8 */
  { uint32_t v = 0xadf2e8u; esp -= 4; W32(esp, v); }
/* 7f393e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f393f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f3945u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f3945: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3948: jmp 0x7f397e */
  goto L_7f397e;
L_7f394a: /* 7f394a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7f394d: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7f394f: mov ecx, esi */
  ecx = esi;
/* 7f3951: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f3957u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f3957: mov ecx, eax */
  ecx = eax;
/* 7f3959: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f395fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f395f: mov edx, dword ptr [ebx + 0x444] */
  edx = R32((uint32_t)(ebx + 0x444u));
/* 7f3965: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7f3967: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7f396a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f396b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f396c: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 7f396f: push 0xadf320 */
  { uint32_t v = 0xadf320u; esp -= 4; W32(esp, v); }
/* 7f3974: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3975: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f397bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f397b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f397e: /* 7f397e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f3980: mov ecx, edi */
  ecx = edi;
/* 7f3982: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f3988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3988: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f398b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f398c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f398d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3994: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3995: mov esp, ebp */
  esp = ebp;
/* 7f3997: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f3998: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f399b(void) {
  LOAD_REGS();
L_7f399b: /* 7f399b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f399e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f39a3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f39a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f39a7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f39aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f39afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f39af(); return;
}

void f_7f39af(void) {
  LOAD_REGS();
L_7f39af: /* 7f39af: push 0xa1190c */
  { uint32_t v = 0xa1190cu; esp -= 4; W32(esp, v); }
/* 7f39b4: push 0xadf354 */
  { uint32_t v = 0xadf354u; esp -= 4; W32(esp, v); }
/* 7f39b9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f39bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f39bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f39c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f39c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f39c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f39cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f39cb: guest_badaddr(0x7f39cb); return;
}

void f_7f3a20(void) {
  LOAD_REGS();
L_7f3a20: /* 7f3a20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3a21: mov ebp, esp */
  ebp = esp;
/* 7f3a23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3a25: push 0x9d1430 */
  { uint32_t v = 0x9d1430u; esp -= 4; W32(esp, v); }
/* 7f3a2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3a31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3a38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f3a3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3a3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3a3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f3a40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3a41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7f3a44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f3a47: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f3a49: xor ebx, ebx */
  ebx = 0;
/* 7f3a4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3a4c: mov ecx, edi */
  ecx = edi;
/* 7f3a4e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f3a51: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f3a57u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f3a57: mov ecx, esi */
  ecx = esi;
/* 7f3a59: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f3a5fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f3a5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3a61: je 0x7f3ac1 */
  if (zf) goto L_7f3ac1;
L_7f3a63: /* 7f3a63: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f3a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3a67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3a68: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3a6eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3a6e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3a71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3a74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3a75: mov ecx, edi */
  ecx = edi;
/* 7f3a77: call 0x6ccbdf */
  esp -= 4; W32(esp, 0x7f3a7cu); SPILL(); f_6ccbdf(); if (g_unwind) return; RELOAD();
/* 7f3a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7f3a80: /* 7f3a80: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3a83: jge 0x7f3af4 */
  if ((sf == of)) goto L_7f3af4;
L_7f3a85: /* 7f3a85: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f3a87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3a89: mov ecx, edi */
  ecx = edi;
/* 7f3a8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3a91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3a91: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7f3a94: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7f3a96: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7f3a99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3a9b: je 0x7f3ab1 */
  if (zf) goto L_7f3ab1;
L_7f3a9d: /* 7f3a9d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f3aa3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f3aa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3aa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3aa5: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x7f3aabu); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 7f3aab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3aae: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f3aaf: jmp 0x7f3a80 */
  goto L_7f3a80;
L_7f3ab1: /* 7f3ab1: xor eax, eax */
  eax = 0;
/* 7f3ab3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3ab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3ab5: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x7f3abbu); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 7f3abb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3abe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f3abf: jmp 0x7f3a80 */
  goto L_7f3a80;
L_7f3ac1: /* 7f3ac1: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7f3ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3ac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3ac6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3accu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3acc: mov ebx, dword ptr [0xcfa2dc] */
  ebx = R32((uint32_t)(0xcfa2dcu));
/* 7f3ad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3ad5: xor esi, esi */
  esi = 0;
L_7f3ad7: /* 7f3ad7: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3ada: jge 0x7f3af1 */
  if ((sf == of)) goto L_7f3af1;
L_7f3adc: /* 7f3adc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f3ade: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7f3ae1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7f3ae4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f3ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3ae9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3aebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3aeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3aee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f3aef: jmp 0x7f3ad7 */
  goto L_7f3ad7;
L_7f3af1: /* 7f3af1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7f3af4: /* 7f3af4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f3af7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f3af8: mov eax, esi */
  eax = esi;
/* 7f3afa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f3afb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3b02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3b03: mov esp, ebp */
  esp = ebp;
/* 7f3b05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f3b06: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3b07(void) {
  LOAD_REGS();
L_7f3b07: /* 7f3b07: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f3b0a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f3b0f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f3b12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3b13: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7f3b16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3b1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f3b1b(); return;
}

void f_7f3b1b(void) {
  LOAD_REGS();
L_7f3b1b: /* 7f3b1b: push 0xa11940 */
  { uint32_t v = 0xa11940u; esp -= 4; W32(esp, v); }
/* 7f3b20: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f3b25: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f3b2bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f3b2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3b2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3b30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3b32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3b37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3b37: guest_badaddr(0x7f3b37); return;
}

void f_7f3b90(void) {
  LOAD_REGS();
L_7f3b90: /* 7f3b90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3b91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7f3b95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3b96: mov esi, ecx */
  esi = ecx;
/* 7f3b98: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7f3b9b: xor eax, eax */
  eax = 0;
/* 7f3b9d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f3b9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3ba0: jle 0x7f3bb2 */
  if ((zf || sf != of)) goto L_7f3bb2;
L_7f3ba2: /* 7f3ba2: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 7f3ba4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_7f3ba6: /* 7f3ba6: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3ba8: je 0x7f3bc5 */
  if (zf) goto L_7f3bc5;
L_7f3baa: /* 7f3baa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f3bab: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f3bae: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3bb0: jl 0x7f3ba6 */
  if ((sf != of)) goto L_7f3ba6;
L_7f3bb2: /* 7f3bb2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f3bb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3bb6: mov ecx, esi */
  ecx = esi;
/* 7f3bb8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3bbeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3bbe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f3bc0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f3bc2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_7f3bc5: /* 7f3bc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f3bc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f3bc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3bc8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f3be0(void) {
  LOAD_REGS();
L_7f3be0: /* 7f3be0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3be2: push 0x9d1449 */
  { uint32_t v = 0x9d1449u; esp -= 4; W32(esp, v); }
/* 7f3be7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3bed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3bee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3bf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3bf6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3bf8: mov esi, ecx */
  esi = ecx;
/* 7f3bfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3bfb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7f3bff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7f3c02: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f3c04: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7f3c0a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7f3c12: jge 0x7f3c28 */
  if ((sf == of)) goto L_7f3c28;
L_7f3c14: /* 7f3c14: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7f3c19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f3c1e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7f3c23: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3c25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3c25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f3c28: /* 7f3c28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3c2b: jle 0x7f3c41 */
  if ((zf || sf != of)) goto L_7f3c41;
L_7f3c2d: /* 7f3c2d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7f3c32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f3c37: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7f3c3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3c3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3c3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f3c41: /* 7f3c41: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f3c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3c44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3c46: mov ecx, esi */
  ecx = esi;
/* 7f3c48: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7f3c4eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7f3c4e: mov ecx, esi */
  ecx = esi;
/* 7f3c50: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7f3c58: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7f3c5eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7f3c5e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7f3c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f3c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f3c64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3c65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3c6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3c6f: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3ca0(void) {
  LOAD_REGS();
L_7f3ca0: /* 7f3ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3ca1: mov ebp, esp */
  ebp = esp;
/* 7f3ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3ca5: push 0x9d1460 */
  { uint32_t v = 0x9d1460u; esp -= 4; W32(esp, v); }
/* 7f3caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3cb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f3cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3cbc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f3cbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3cc0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f3cc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3cc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f3cc7: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f3cc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3cca: mov ecx, esi */
  ecx = esi;
/* 7f3ccc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f3cd3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f3cd9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f3cd9: mov ecx, ebx */
  ecx = ebx;
/* 7f3cdb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f3ce1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f3ce1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3ce3: je 0x7f3d33 */
  if (zf) goto L_7f3d33;
L_7f3ce5: /* 7f3ce5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f3ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3cea: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3cf0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3cf0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3cf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3cf6: xor eax, eax */
  eax = 0;
L_7f3cf8: /* 7f3cf8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3cfb: jge 0x7f3d00 */
  if ((sf == of)) goto L_7f3d00;
L_7f3cfd: /* 7f3cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f3cfe: jmp 0x7f3cf8 */
  goto L_7f3cf8;
L_7f3d00: /* 7f3d00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3d01: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f3d03: mov ecx, esi */
  ecx = esi;
/* 7f3d05: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f3d0bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f3d0b: xor edi, edi */
  edi = 0;
/* 7f3d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f3d10: /* 7f3d10: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3d13: jge 0x7f3d5e */
  if ((sf == of)) goto L_7f3d5e;
L_7f3d15: /* 7f3d15: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7f3d17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3d19: mov ecx, esi */
  ecx = esi;
/* 7f3d1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3d21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3d21: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7f3d24: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f3d26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3d27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3d28: call 0x6c21bc */
  esp -= 4; W32(esp, 0x7f3d2du); SPILL(); f_6c21bc(); if (g_unwind) return; RELOAD();
/* 7f3d2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3d30: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f3d31: jmp 0x7f3d10 */
  goto L_7f3d10;
L_7f3d33: /* 7f3d33: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f3d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3d38: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3d3eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3d3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3d41: xor edi, edi */
  edi = 0;
L_7f3d43: /* 7f3d43: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3d46: jge 0x7f3d5e */
  if ((sf == of)) goto L_7f3d5e;
L_7f3d48: /* 7f3d48: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f3d4a: mov ecx, edi */
  ecx = edi;
/* 7f3d4c: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 7f3d4f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f3d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3d52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3d53: call 0x6c21bc */
  esp -= 4; W32(esp, 0x7f3d58u); SPILL(); f_6c21bc(); if (g_unwind) return; RELOAD();
/* 7f3d58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3d5b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f3d5c: jmp 0x7f3d43 */
  goto L_7f3d43;
L_7f3d5e: /* 7f3d5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f3d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f3d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f3d63: mov eax, ebx */
  eax = ebx;
/* 7f3d65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3d6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3d6d: mov esp, ebp */
  esp = ebp;
/* 7f3d6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f3d70: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3d71(void) {
  LOAD_REGS();
L_7f3d71: /* 7f3d71: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f3d74: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f3d79: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f3d7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3d7d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7f3d80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3d85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f3d85(); return;
}

void f_7f3d85(void) {
  LOAD_REGS();
L_7f3d85: /* 7f3d85: push 0xa11958 */
  { uint32_t v = 0xa11958u; esp -= 4; W32(esp, v); }
/* 7f3d8a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f3d8f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f3d95u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f3d95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3d9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3d9c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3da1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3da1: guest_badaddr(0x7f3da1); return;
}

void f_7f3e00(void) {
  LOAD_REGS();
L_7f3e00: /* 7f3e00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3e01: mov ebp, esp */
  ebp = esp;
/* 7f3e03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3e05: push 0x9d1470 */
  { uint32_t v = 0x9d1470u; esp -= 4; W32(esp, v); }
/* 7f3e0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3e11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3e18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f3e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3e1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3e1d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f3e20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3e21: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f3e24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f3e27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f3e29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3e2a: mov ecx, esi */
  ecx = esi;
/* 7f3e2c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f3e33: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f3e39u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f3e39: mov ecx, edi */
  ecx = edi;
/* 7f3e3b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f3e41u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f3e41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f3e43: je 0x7f3e91 */
  if (zf) goto L_7f3e91;
L_7f3e45: /* 7f3e45: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f3e48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3e49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3e4a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3e50u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3e50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3e53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3e56: xor eax, eax */
  eax = 0;
L_7f3e58: /* 7f3e58: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3e5b: jge 0x7f3e60 */
  if ((sf == of)) goto L_7f3e60;
L_7f3e5d: /* 7f3e5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f3e5e: jmp 0x7f3e58 */
  goto L_7f3e58;
L_7f3e60: /* 7f3e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3e61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f3e63: mov ecx, esi */
  ecx = esi;
/* 7f3e65: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f3e6bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f3e6b: xor ebx, ebx */
  ebx = 0;
/* 7f3e6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f3e70: /* 7f3e70: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3e73: jge 0x7f3eb6 */
  if ((sf == of)) goto L_7f3eb6;
L_7f3e75: /* 7f3e75: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f3e77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3e79: mov ecx, esi */
  ecx = esi;
/* 7f3e7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3e81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3e81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f3e83: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f3e85: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7f3e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3e89: mov ecx, edi */
  ecx = edi;
/* 7f3e8b: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f3e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3e8e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f3e8f: jmp 0x7f3e70 */
  goto L_7f3e70;
L_7f3e91: /* 7f3e91: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f3e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3e95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3e96: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3e9cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3e9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3e9f: xor ebx, ebx */
  ebx = 0;
L_7f3ea1: /* 7f3ea1: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3ea4: jge 0x7f3eb6 */
  if ((sf == of)) goto L_7f3eb6;
L_7f3ea6: /* 7f3ea6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f3ea8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f3eaa: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 7f3ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3eae: mov ecx, edi */
  ecx = edi;
/* 7f3eb0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f3eb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3eb3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f3eb4: jmp 0x7f3ea1 */
  goto L_7f3ea1;
L_7f3eb6: /* 7f3eb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f3eb9: mov eax, edi */
  eax = edi;
/* 7f3ebb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f3ebc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f3ebd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f3ec4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f3ec5: mov esp, ebp */
  esp = ebp;
/* 7f3ec7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f3ec8: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3ec9(void) {
  LOAD_REGS();
L_7f3ec9: /* 7f3ec9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f3ecc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f3ed1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f3ed4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3ed5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f3ed8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3eddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f3edd(); return;
}

void f_7f3edd(void) {
  LOAD_REGS();
L_7f3edd: /* 7f3edd: push 0xa11970 */
  { uint32_t v = 0xa11970u; esp -= 4; W32(esp, v); }
/* 7f3ee2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f3ee7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f3eedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f3eed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3ef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3ef2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f3ef4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f3ef9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f3ef9: guest_badaddr(0x7f3ef9); return;
}

void f_7f3f40(void) {
  LOAD_REGS();
L_7f3f40: /* 7f3f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f3f41: mov ebp, esp */
  ebp = esp;
/* 7f3f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f3f45: push 0x9d1480 */
  { uint32_t v = 0x9d1480u; esp -= 4; W32(esp, v); }
/* 7f3f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f3f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f3f58: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f3f5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f3f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3f5d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f3f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3f61: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f3f64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f3f67: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7f3f69: xor ebx, ebx */
  ebx = 0;
/* 7f3f6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3f6c: mov ecx, esi */
  ecx = esi;
/* 7f3f6e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f3f71: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f3f77u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f3f77: mov ecx, edi */
  ecx = edi;
/* 7f3f79: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f3f7fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f3f7f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f3f81: je 0x7f4002 */
  if (zf) goto L_7f4002;
L_7f3f83: /* 7f3f83: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f3f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3f87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f3f88: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f3f8eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f3f8e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f3f91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3f94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3f95: mov ecx, esi */
  ecx = esi;
/* 7f3f97: call 0x6c5ba5 */
  esp -= 4; W32(esp, 0x7f3f9cu); SPILL(); f_6c5ba5(); if (g_unwind) return; RELOAD();
/* 7f3f9c: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7f3f9f: mov ebx, dword ptr [0xcfa2dc] */
  ebx = R32((uint32_t)(0xcfa2dcu));
/* 7f3fa5: jmp 0x7f3fb0 */
  goto L_7f3fb0;
L_7f3fb0: /* 7f3fb0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3fb3: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3fb6: jge 0x7f404e */
  if ((sf == of)) goto L_7f404e;
L_7f3fbc: /* 7f3fbc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7f3fbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3fc0: mov ecx, esi */
  ecx = esi;
/* 7f3fc2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3fc8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3fc8: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7f3fcb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7f3fcd: je 0x7f3fda */
  if (zf) goto L_7f3fda;
L_7f3fcf: /* 7f3fcf: mov ecx, eax */
  ecx = eax;
/* 7f3fd1: call 0x6c6181 */
  esp -= 4; W32(esp, 0x7f3fd6u); SPILL(); f_6c6181(); if (g_unwind) return; RELOAD();
/* 7f3fd6: mov esi, eax */
  esi = eax;
/* 7f3fd8: jmp 0x7f3fdc */
  goto L_7f3fdc;
L_7f3fda: /* 7f3fda: xor esi, esi */
  esi = 0;
L_7f3fdc: /* 7f3fdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f3fdf: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f3fe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3fe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3fe4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3fe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3fe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3fe9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f3fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3fee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3ff0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3ff0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3ff3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f3ff6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f3ff9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3ffc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f3ffd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f4000: jmp 0x7f3fb0 */
  goto L_7f3fb0;
L_7f4002: /* 7f4002: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f4005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4007: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f400du); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f400d: mov ebx, dword ptr [0xcfa2dc] */
  ebx = R32((uint32_t)(0xcfa2dcu));
/* 7f4013: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4016: xor edi, edi */
  edi = 0;
L_7f4018: /* 7f4018: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7f401b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f401d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f4020: jge 0x7f404b */
  if ((sf == of)) goto L_7f404b;
L_7f4022: /* 7f4022: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f4025: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f4027: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f402a: mov esi, edi */
  esi = edi;
/* 7f402c: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7f402f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f4031: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f4034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4036: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f4038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4038: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f403b: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f403e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f403f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4040: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f4042u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4042: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f4045: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4048: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f4049: jmp 0x7f4018 */
  goto L_7f4018;
L_7f404b: /* 7f404b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7f404e: /* 7f404e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4051: mov eax, edi */
  eax = edi;
/* 7f4053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4055: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f405c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f405d: mov esp, ebp */
  esp = ebp;
/* 7f405f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4060: ret  */
  esp += 4; SPILL(); return;
}

void f_7f3fa7(void) {
  LOAD_REGS();
L_7f3fa7: /* 7f3fa7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7f3fae: mov edi, edi */
  edi = edi;
L_7f3fb0: /* 7f3fb0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3fb3: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f3fb6: jge 0x7f404e */
  if ((sf == of)) goto L_7f404e;
L_7f3fbc: /* 7f3fbc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7f3fbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f3fc0: mov ecx, esi */
  ecx = esi;
/* 7f3fc2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f3fc8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f3fc8: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7f3fcb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7f3fcd: je 0x7f3fda */
  if (zf) goto L_7f3fda;
L_7f3fcf: /* 7f3fcf: mov ecx, eax */
  ecx = eax;
/* 7f3fd1: call 0x6c6181 */
  esp -= 4; W32(esp, 0x7f3fd6u); SPILL(); f_6c6181(); if (g_unwind) return; RELOAD();
/* 7f3fd6: mov esi, eax */
  esi = eax;
/* 7f3fd8: jmp 0x7f3fdc */
  goto L_7f3fdc;
L_7f3fda: /* 7f3fda: xor esi, esi */
  esi = 0;
L_7f3fdc: /* 7f3fdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f3fdf: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f3fe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3fe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f3fe4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3fe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3fe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3fe9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f3fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f3fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f3fee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f3ff0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f3ff0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f3ff3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f3ff6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f3ff9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f3ffc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f3ffd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f4000: jmp 0x7f3fb0 */
  goto L_7f3fb0;
L_7f404e: /* 7f404e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4051: mov eax, edi */
  eax = edi;
/* 7f4053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4055: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f405c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f405d: mov esp, ebp */
  esp = ebp;
/* 7f405f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4060: ret  */
  esp += 4; SPILL(); return;
}

void f_7f4061(void) {
  LOAD_REGS();
L_7f4061: /* 7f4061: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f4064: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f4069: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7f406c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f406d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7f4070: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4075u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f4075(); return;
}

void f_7f4075(void) {
  LOAD_REGS();
L_7f4075: /* 7f4075: push 0xa11988 */
  { uint32_t v = 0xa11988u; esp -= 4; W32(esp, v); }
/* 7f407a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f407f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f4085u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f4085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f408a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f408c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4091u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f4091: guest_badaddr(0x7f4091); return;
}

void f_7f4100(void) {
  LOAD_REGS();
L_7f4100: /* 7f4100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f4101: mov ebp, esp */
  ebp = esp;
/* 7f4103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f4105: push 0x9d1490 */
  { uint32_t v = 0x9d1490u; esp -= 4; W32(esp, v); }
/* 7f410a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f4110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f4118: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f411b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f411c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f411d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f411e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f4121: mov ebx, ecx */
  ebx = ecx;
/* 7f4123: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f412a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x7f4130u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 7f4130: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7f4133: mov dword ptr [ebp - 0x20], 0xb5bf68 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xb5bf68u);
/* 7f413a: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 7f4141: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7f4146u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7f4146: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_7f4149: /* 7f4149: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7f414e: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4151: jge 0x7f41d4 */
  if ((sf == of)) goto L_7f41d4;
L_7f4157: /* 7f4157: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f4159: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7f415c: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f4162u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f4162: mov ecx, ebx */
  ecx = ebx;
/* 7f4164: mov edi, eax */
  edi = eax;
/* 7f4166: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f416cu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f416c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f416e: jne 0x7f41ab */
  if (!zf) goto L_7f41ab;
L_7f4170: /* 7f4170: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7f4176: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4178: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7f417b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f417d: je 0x7f419b */
  if (zf) goto L_7f419b;
L_7f417f: /* 7f417f: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f4184: mov ecx, edi */
  ecx = edi;
/* 7f4186: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f418cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f418c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f418e: je 0x7f419b */
  if (zf) goto L_7f419b;
L_7f4190: /* 7f4190: mov eax, dword ptr [edi + 0x534] */
  eax = R32((uint32_t)(edi + 0x534u));
/* 7f4196: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4199: jne 0x7f41ab */
  if (!zf) goto L_7f41ab;
L_7f419b: /* 7f419b: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7f41a0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f41a2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7f41a5: mov dword ptr [eax + 0xb4], ebx */
  W32((uint32_t)(eax + 0xb4u), ebx);
L_7f41ab: /* 7f41ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7f41b0: /* 7f41b0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7f41b3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f41b4: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f41b6: jge 0x7f41d4 */
  if ((sf == of)) goto L_7f41d4;
L_7f41b8: /* 7f41b8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f41ba: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7f41bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f41bf: je 0x7f41b0 */
  if (zf) goto L_7f41b0;
L_7f41c1: /* 7f41c1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f41c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f41c5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f41cbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f41cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f41cd: je 0x7f41ab */
  if (zf) goto L_7f41ab;
L_7f41cf: /* 7f41cf: jmp 0x7f4149 */
  goto L_7f4149;
L_7f41d4: /* 7f41d4: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7f41d7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f41d9: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f41e0: jne 0x7f41e8 */
  if (!zf) goto L_7f41e8;
L_7f41e2: /* 7f41e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f41e3: call 0x6c1c6c */
  esp -= 4; W32(esp, 0x7f41e8u); SPILL(); f_6c1c6c(); if (g_unwind) return; RELOAD();
L_7f41e8: /* 7f41e8: mov ecx, dword ptr [ebx + 0x8c] */
  ecx = R32((uint32_t)(ebx + 0x8cu));
/* 7f41ee: call 0x6ca597 */
  esp -= 4; W32(esp, 0x7f41f3u); SPILL(); f_6ca597(); if (g_unwind) return; RELOAD();
/* 7f41f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f41f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f41f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f41f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f41ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f4200: mov esp, ebp */
  esp = ebp;
/* 7f4202: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4203: ret  */
  esp += 4; SPILL(); return;
}

void f_7f4204(void) {
  LOAD_REGS();
L_7f4204: /* 7f4204: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4207: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f420c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f420f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4210: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f4213: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4218u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f4218(); return;
}

void f_7f4218(void) {
  LOAD_REGS();
L_7f4218: /* 7f4218: push 0xa119a0 */
  { uint32_t v = 0xa119a0u; esp -= 4; W32(esp, v); }
/* 7f421d: push 0xadeac4 */
  { uint32_t v = 0xadeac4u; esp -= 4; W32(esp, v); }
/* 7f4222: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f4228u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f4228: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f422b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f422d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f422f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4234u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f4234: guest_badaddr(0x7f4234); return;
}

void f_7f4290(void) {
  LOAD_REGS();
L_7f4290: /* 7f4290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f4291: mov ebp, esp */
  ebp = esp;
/* 7f4293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f4295: push 0x9d14a0 */
  { uint32_t v = 0x9d14a0u; esp -= 4; W32(esp, v); }
/* 7f429a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f42a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f42a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f42a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f42ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f42ac: mov ebx, ecx */
  ebx = ecx;
/* 7f42ae: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 7f42b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f42b5: xor esi, esi */
  esi = 0;
/* 7f42b7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f42b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f42ba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f42bd: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7f42c0: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f42c3: je 0x7f43e2 */
  if (zf) goto L_7f43e2;
L_7f42c9: /* 7f42c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7f42d0: /* 7f42d0: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f42d3: jge 0x7f4306 */
  if ((sf == of)) goto L_7f4306;
L_7f42d5: /* 7f42d5: mov ecx, dword ptr [ebx + 0x8c] */
  ecx = R32((uint32_t)(ebx + 0x8cu));
/* 7f42db: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7f42de: mov eax, dword ptr [ecx + eax*8 + 0x11c] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x11cu));
/* 7f42e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f42e7: je 0x7f4303 */
  if (zf) goto L_7f4303;
L_7f42e9: /* 7f42e9: lea ecx, [eax + 0x35c] */
  ecx = (uint32_t)(eax + 0x35cu);
/* 7f42ef: xor eax, eax */
  eax = 0;
L_7f42f1: /* 7f42f1: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f42f4: jge 0x7f42f9 */
  if ((sf == of)) goto L_7f42f9;
L_7f42f6: /* 7f42f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f42f7: jmp 0x7f42f1 */
  goto L_7f42f1;
L_7f42f9: /* 7f42f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f42fb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f42fd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f4303u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7f4303: /* 7f4303: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f4304: jmp 0x7f42d0 */
  goto L_7f42d0;
L_7f4306: /* 7f4306: xor edi, edi */
  edi = 0;
/* 7f4308: jmp 0x7f4310 */
  goto L_7f4310;
L_7f4310: /* 7f4310: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4313: jge 0x7f43b9 */
  if ((sf == of)) goto L_7f43b9;
L_7f4319: /* 7f4319: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 7f431c: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7f431f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4321: je 0x7f43b3 */
  if (zf) goto L_7f43b3;
L_7f4327: /* 7f4327: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7f432d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4330: jne 0x7f43b3 */
  if (!zf) goto L_7f43b3;
L_7f4336: /* 7f4336: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7f433b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f4341u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f4341: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4343: je 0x7f43b3 */
  if (zf) goto L_7f43b3;
L_7f4345: /* 7f4345: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f4348: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7f434b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f434d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f434f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4351: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7f4357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4357: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f435a: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7f435d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f435f: je 0x7f4376 */
  if (zf) goto L_7f4376;
L_7f4361: /* 7f4361: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7f4366: mov ecx, esi */
  ecx = esi;
/* 7f4368: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f436eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f436e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4370: je 0x7f4376 */
  if (zf) goto L_7f4376;
L_7f4372: /* 7f4372: mov ebx, esi */
  ebx = esi;
/* 7f4374: jmp 0x7f4378 */
  goto L_7f4378;
L_7f4376: /* 7f4376: xor ebx, ebx */
  ebx = 0;
L_7f4378: /* 7f4378: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f437b: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7f437e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7f4381: mov esi, dword ptr [eax + 0xc0] */
  esi = R32((uint32_t)(eax + 0xc0u));
/* 7f4387: add esi, 0x35c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f438d: xor eax, eax */
  eax = 0;
/* 7f438f: nop  */
L_7f4390: /* 7f4390: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4393: jge 0x7f439f */
  if ((sf == of)) goto L_7f439f;
L_7f4395: /* 7f4395: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4397: cmp dword ptr [ecx + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f439a: je 0x7f43b0 */
  if (zf) goto L_7f43b0;
L_7f439c: /* 7f439c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f439d: jmp 0x7f4390 */
  goto L_7f4390;
L_7f439f: /* 7f439f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f43a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f43a3: mov ecx, esi */
  ecx = esi;
/* 7f43a5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f43abu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f43ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f43ad: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_7f43b0: /* 7f43b0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f43b3: /* 7f43b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f43b4: jmp 0x7f4310 */
  goto L_7f4310;
L_7f43b9: /* 7f43b9: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f43bc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f43be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f43c0: je 0x7f43e2 */
  if (zf) goto L_7f43e2;
L_7f43c2: /* 7f43c2: lea ecx, [eax + 0x35c] */
  ecx = (uint32_t)(eax + 0x35cu);
/* 7f43c8: xor eax, eax */
  eax = 0;
/* 7f43ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f43d0: /* 7f43d0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f43d3: jge 0x7f43d8 */
  if ((sf == of)) goto L_7f43d8;
L_7f43d5: /* 7f43d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f43d6: jmp 0x7f43d0 */
  goto L_7f43d0;
L_7f43d8: /* 7f43d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f43da: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f43dc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f43e2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7f43e2: /* 7f43e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f43e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f43e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f43e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f43ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f43ef: mov esp, ebp */
  esp = ebp;
/* 7f43f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f43f2: ret  */
  esp += 4; SPILL(); return;
}

void f_7f430a(void) {
  LOAD_REGS();
L_7f430a: /* 7f430a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f4310: /* 7f4310: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4313: jge 0x7f43b9 */
  if ((sf == of)) goto L_7f43b9;
L_7f4319: /* 7f4319: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 7f431c: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7f431f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4321: je 0x7f43b3 */
  if (zf) goto L_7f43b3;
L_7f4327: /* 7f4327: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7f432d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4330: jne 0x7f43b3 */
  if (!zf) goto L_7f43b3;
L_7f4336: /* 7f4336: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7f433b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f4341u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f4341: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4343: je 0x7f43b3 */
  if (zf) goto L_7f43b3;
L_7f4345: /* 7f4345: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f4348: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7f434b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f434d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f434f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4351: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7f4357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4357: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f435a: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7f435d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f435f: je 0x7f4376 */
  if (zf) goto L_7f4376;
L_7f4361: /* 7f4361: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7f4366: mov ecx, esi */
  ecx = esi;
/* 7f4368: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f436eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f436e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4370: je 0x7f4376 */
  if (zf) goto L_7f4376;
L_7f4372: /* 7f4372: mov ebx, esi */
  ebx = esi;
/* 7f4374: jmp 0x7f4378 */
  goto L_7f4378;
L_7f4376: /* 7f4376: xor ebx, ebx */
  ebx = 0;
L_7f4378: /* 7f4378: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f437b: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7f437e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7f4381: mov esi, dword ptr [eax + 0xc0] */
  esi = R32((uint32_t)(eax + 0xc0u));
/* 7f4387: add esi, 0x35c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f438d: xor eax, eax */
  eax = 0;
/* 7f438f: nop  */
L_7f4390: /* 7f4390: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4393: jge 0x7f439f */
  if ((sf == of)) goto L_7f439f;
L_7f4395: /* 7f4395: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4397: cmp dword ptr [ecx + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f439a: je 0x7f43b0 */
  if (zf) goto L_7f43b0;
L_7f439c: /* 7f439c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f439d: jmp 0x7f4390 */
  goto L_7f4390;
L_7f439f: /* 7f439f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f43a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f43a3: mov ecx, esi */
  ecx = esi;
/* 7f43a5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f43abu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f43ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f43ad: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_7f43b0: /* 7f43b0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f43b3: /* 7f43b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f43b4: jmp 0x7f4310 */
  goto L_7f4310;
L_7f43b9: /* 7f43b9: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7f43bc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f43be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f43c0: je 0x7f43e2 */
  if (zf) goto L_7f43e2;
L_7f43c2: /* 7f43c2: lea ecx, [eax + 0x35c] */
  ecx = (uint32_t)(eax + 0x35cu);
/* 7f43c8: xor eax, eax */
  eax = 0;
/* 7f43ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f43d0: /* 7f43d0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f43d3: jge 0x7f43d8 */
  if ((sf == of)) goto L_7f43d8;
L_7f43d5: /* 7f43d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f43d6: jmp 0x7f43d0 */
  goto L_7f43d0;
L_7f43d8: /* 7f43d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f43da: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f43dc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f43e2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7f43e2: /* 7f43e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f43e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f43e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f43e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f43ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f43ef: mov esp, ebp */
  esp = ebp;
/* 7f43f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f43f2: ret  */
  esp += 4; SPILL(); return;
}

void f_7f43f3(void) {
  LOAD_REGS();
L_7f43f3: /* 7f43f3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f43f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f43fb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f43fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f43ff: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f4402: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4407u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f4407(); return;
}

void f_7f4407(void) {
  LOAD_REGS();
L_7f4407: /* 7f4407: push 0xa119c8 */
  { uint32_t v = 0xa119c8u; esp -= 4; W32(esp, v); }
/* 7f440c: push 0xadee40 */
  { uint32_t v = 0xadee40u; esp -= 4; W32(esp, v); }
/* 7f4411: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f4417u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f4417: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f441a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f441c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f441e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4423u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f4423: guest_badaddr(0x7f4423); return;
}

void f_7f44a0(void) {
  LOAD_REGS();
L_7f44a0: /* 7f44a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f44a1: mov ebp, esp */
  ebp = esp;
/* 7f44a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f44a5: push 0x9d14b0 */
  { uint32_t v = 0x9d14b0u; esp -= 4; W32(esp, v); }
/* 7f44aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f44b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f44b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f44b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f44bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f44bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f44bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f44c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f44c1: mov ecx, esi */
  ecx = esi;
/* 7f44c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f44c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f44cd: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x7f44d3u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 7f44d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f44d5: jne 0x7f44e4 */
  if (!zf) goto L_7f44e4;
L_7f44d7: /* 7f44d7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f44da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f44db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f44dc: call 0x6cb6d1 */
  esp -= 4; W32(esp, 0x7f44e1u); SPILL(); f_6cb6d1(); if (g_unwind) return; RELOAD();
/* 7f44e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f44e4: /* 7f44e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f44e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f44e8: mov eax, esi */
  eax = esi;
/* 7f44ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f44eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f44f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f44f3: mov esp, ebp */
  esp = ebp;
/* 7f44f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f44f6: ret  */
  esp += 4; SPILL(); return;
}

void f_7f44f7(void) {
  LOAD_REGS();
L_7f44f7: /* 7f44f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f44fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f44ff: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f4502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4503: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f4506: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f450bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f450b(); return;
}

void f_7f450b(void) {
  LOAD_REGS();
L_7f450b: /* 7f450b: push 0xa11a0c */
  { uint32_t v = 0xa11a0cu; esp -= 4; W32(esp, v); }
/* 7f4510: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f4515: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f451bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f451b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f451e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4522: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4527u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f4527: guest_badaddr(0x7f4527); return;
}

void f_7f4560(void) {
  LOAD_REGS();
L_7f4560: /* 7f4560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4561: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f4565: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4566: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7f456a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f456b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f456c: call 0x6c5cea */
  esp -= 4; W32(esp, 0x7f4571u); SPILL(); f_6c5cea(); if (g_unwind) return; RELOAD();
/* 7f4571: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4574: mov ecx, esi */
  ecx = esi;
/* 7f4576: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f457cu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f457c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f457e: je 0x7f4587 */
  if (zf) goto L_7f4587;
L_7f4580: /* 7f4580: mov ecx, edi */
  ecx = edi;
/* 7f4582: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7f4587u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7f4587: /* 7f4587: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4588: mov eax, esi */
  eax = esi;
/* 7f458a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f458b: ret  */
  esp += 4; SPILL(); return;
}

void f_7f45a0(void) {
  LOAD_REGS();
L_7f45a0: /* 7f45a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f45a2: push 0x9d14d4 */
  { uint32_t v = 0x9d14d4u; esp -= 4; W32(esp, v); }
/* 7f45a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f45ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f45ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f45b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f45b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f45b7: mov esi, ecx */
  esi = ecx;
/* 7f45b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f45ba: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7f45be: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7f45c4u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7f45c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f45c6: mov dword ptr [esi + 0x28], 0x9f6ae4 */
  W32((uint32_t)(esi + 0x28u), 0x9f6ae4u);
/* 7f45cd: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* 7f45d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f45d2: mov ecx, edi */
  ecx = edi;
/* 7f45d4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7f45dc: mov dword ptr [esi], 0xa056f0 */
  W32((uint32_t)(esi), 0xa056f0u);
/* 7f45e2: mov dword ptr [esi + 0x28], 0xa056c4 */
  W32((uint32_t)(esi + 0x28u), 0xa056c4u);
/* 7f45e9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7f45efu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7f45ef: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 7f45f2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7f45f6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7f45fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f45fb: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 7f45fe: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7f4603: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 7f4606: call 0x6c1870 */
  esp -= 4; W32(esp, 0x7f460bu); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 7f460b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7f460f: mov dword ptr [esi + 0x88], 0 */
  W32((uint32_t)(esi + 0x88u), 0x0u);
/* 7f4619: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f461a: mov eax, esi */
  eax = esi;
/* 7f461c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f461d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f4624: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4627: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f4660(void) {
  LOAD_REGS();
L_7f4660: /* 7f4660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f4661: mov ebp, esp */
  ebp = esp;
/* 7f4663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f4665: push 0x9d14f0 */
  { uint32_t v = 0x9d14f0u; esp -= 4; W32(esp, v); }
/* 7f466a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f4670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f4678: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f467b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f467c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f467d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f4680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4681: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f4684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4685: mov ebx, ecx */
  ebx = ecx;
/* 7f4687: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f468e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7f4694u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7f4694: mov ecx, esi */
  ecx = esi;
/* 7f4696: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x7f469cu); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 7f469c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f469e: je 0x7f46fe */
  if (zf) goto L_7f46fe;
L_7f46a0: /* 7f46a0: lea eax, [ebx + 0x2c] */
  eax = (uint32_t)(ebx + 0x2cu);
/* 7f46a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f46a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f46a5: call 0x6c4ecb */
  esp -= 4; W32(esp, 0x7f46aau); SPILL(); f_6c4ecb(); if (g_unwind) return; RELOAD();
/* 7f46aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f46ad: /* 7f46ad: lea eax, [ebx + 0x44] */
  eax = (uint32_t)(ebx + 0x44u);
/* 7f46b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f46b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f46b2: call 0x6c2257 */
  esp -= 4; W32(esp, 0x7f46b7u); SPILL(); f_6c2257(); if (g_unwind) return; RELOAD();
/* 7f46b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f46ba: mov ecx, esi */
  ecx = esi;
/* 7f46bc: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f46c2u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f46c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f46c4: jne 0x7f46eb */
  if (!zf) goto L_7f46eb;
L_7f46c6: /* 7f46c6: mov ecx, esi */
  ecx = esi;
/* 7f46c8: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7f46ceu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7f46ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f46d0: jne 0x7f46eb */
  if (!zf) goto L_7f46eb;
L_7f46d2: /* 7f46d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f46d4: lea eax, [ebx + 0x3c] */
  eax = (uint32_t)(ebx + 0x3cu);
/* 7f46d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f46d8: mov ecx, esi */
  ecx = esi;
/* 7f46da: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f46ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f46dd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f46df: add ebx, 0x88 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7f46e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f46e6: mov ecx, esi */
  ecx = esi;
/* 7f46e8: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f46ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f46eb: /* 7f46eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f46ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f46ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f46f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f46f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f46f8: mov esp, ebp */
  esp = ebp;
/* 7f46fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f46fb: ret 4 */
  esp += 8; SPILL(); return;
L_7f46fe: /* 7f46fe: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7f4701: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f4703: lea edi, [ebx + 0x2c] */
  edi = (uint32_t)(ebx + 0x2cu);
/* 7f4706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4707: mov ecx, edi */
  ecx = edi;
/* 7f4709: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7f470c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f470f: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f4715u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f4715: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7f4718: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4719: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f471a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f4720u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f4720: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4723: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f4726: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4728: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f472eu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f472e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4731: mov ecx, esi */
  ecx = esi;
/* 7f4733: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f4739u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f4739: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f473b: je 0x7f4753 */
  if (zf) goto L_7f4753;
L_7f473d: /* 7f473d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f4740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4741: mov ecx, edi */
  ecx = edi;
/* 7f4743: call 0x6cca6d */
  esp -= 4; W32(esp, 0x7f4748u); SPILL(); f_6cca6d(); if (g_unwind) return; RELOAD();
/* 7f4748: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f474b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f474c: mov ecx, edi */
  ecx = edi;
/* 7f474e: call 0x6c1938 */
  esp -= 4; W32(esp, 0x7f4753u); SPILL(); f_6c1938(); if (g_unwind) return; RELOAD();
L_7f4753: /* 7f4753: xor edi, edi */
  edi = 0;
L_7f4755: /* 7f4755: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4758: jge 0x7f46ad */
  if ((sf == of)) goto L_7f46ad;
L_7f475e: /* 7f475e: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 7f4761: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 7f4764: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f4766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4767: mov ecx, esi */
  ecx = esi;
/* 7f4769: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f476cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f476c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f476d: jmp 0x7f4755 */
  goto L_7f4755;
}

void f_7f476f(void) {
  LOAD_REGS();
L_7f476f: /* 7f476f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4772: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f4777: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f477a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f477b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f477e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4783u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f4783(); return;
}

void f_7f4783(void) {
  LOAD_REGS();
L_7f4783: /* 7f4783: push 0xa11a30 */
  { uint32_t v = 0xa11a30u; esp -= 4; W32(esp, v); }
/* 7f4788: push 0xadea30 */
  { uint32_t v = 0xadea30u; esp -= 4; W32(esp, v); }
/* 7f478d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f4793u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f4793: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4796: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4798: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f479a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f479fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f479f: guest_badaddr(0x7f479f); return;
}

void f_7f47f0(void) {
  LOAD_REGS();
L_7f47f0: /* 7f47f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f47f1: mov ebp, esp */
  ebp = esp;
/* 7f47f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f47f5: push 0x9d1500 */
  { uint32_t v = 0x9d1500u; esp -= 4; W32(esp, v); }
/* 7f47fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f4800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f4808: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f480b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f480c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f480d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f480e: mov esi, ecx */
  esi = ecx;
/* 7f4810: xor ebx, ebx */
  ebx = 0;
/* 7f4812: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f4815: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7f4818: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f481b: call 0x6c2649 */
  esp -= 4; W32(esp, 0x7f4820u); SPILL(); f_6c2649(); if (g_unwind) return; RELOAD();
L_7f4820: /* 7f4820: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 7f4826: cmp ebx, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f482c: jge 0x7f4881 */
  if ((sf == of)) goto L_7f4881;
L_7f482e: /* 7f482e: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7f4831: mov edi, dword ptr [eax + ecx*8 + 0x11c] */
  edi = R32((uint32_t)(eax + ecx*8 + 0x11cu));
/* 7f4838: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f483a: jne 0x7f4841 */
  if (!zf) goto L_7f4841;
L_7f483c: /* 7f483c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7f483f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
L_7f4841: /* 7f4841: xor eax, eax */
  eax = 0;
/* 7f4843: mov al, byte ptr [edi + 0x374] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x374u))) & 0xffu);
/* 7f4849: xor ecx, ecx */
  ecx = 0;
/* 7f484b: mov cl, byte ptr [edi + 0x376] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x376u))) & 0xffu);
/* 7f4851: xor edx, edx */
  edx = 0;
/* 7f4853: mov dl, byte ptr [edi + 0x375] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x375u))) & 0xffu);
/* 7f4859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f485a: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7f485d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f485e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f485f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4860: call 0x6c3954 */
  esp -= 4; W32(esp, 0x7f4865u); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 7f4865: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f4867: add edi, 0x368 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f486d: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7f486f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7f4872: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7f4875: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f4878: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f487b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7f487e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f487f: jmp 0x7f4820 */
  goto L_7f4820;
L_7f4881: /* 7f4881: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7f4887: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f488a: jne 0x7f4baf */
  if (!zf) goto L_7f4baf;
L_7f4890: /* 7f4890: xor ebx, ebx */
  ebx = 0;
L_7f4892: /* 7f4892: mov edx, dword ptr [esi + 0x8c] */
  edx = R32((uint32_t)(esi + 0x8cu));
/* 7f4898: cmp ebx, dword ptr [edx + 0xc4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f489e: jge 0x7f48c7 */
  if ((sf == of)) goto L_7f48c7;
L_7f48a0: /* 7f48a0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f48a2: lea edi, [esi + 0x111c] */
  edi = (uint32_t)(esi + 0x111cu);
/* 7f48a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f48aa: mov ecx, edi */
  ecx = edi;
/* 7f48ac: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f48b2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f48b2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7f48b4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f48b7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7f48ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f48bc: je 0x7f48c4 */
  if (zf) goto L_7f48c4;
L_7f48be: /* 7f48be: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f48c4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
L_7f48c4: /* 7f48c4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f48c5: jmp 0x7f4892 */
  goto L_7f4892;
L_7f48c7: /* 7f48c7: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7f48ce: mov edi, edi */
  edi = edi;
L_7f48d0: /* 7f48d0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f48d3: cmp edx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f48d6: jge 0x7f4932 */
  if ((sf == of)) goto L_7f4932;
L_7f48d8: /* 7f48d8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f48db: mov ecx, edx */
  ecx = edx;
/* 7f48dd: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7f48e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f48e2: je 0x7f492d */
  if (zf) goto L_7f492d;
L_7f48e4: /* 7f48e4: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f48eb: je 0x7f492d */
  if (zf) goto L_7f492d;
L_7f48ed: /* 7f48ed: mov ecx, edi */
  ecx = edi;
/* 7f48ef: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x7f48f4u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 7f48f4: xor ebx, ebx */
  ebx = 0;
L_7f48f6: /* 7f48f6: cmp ebx, dword ptr [edi + 0xdc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f48fc: jge 0x7f492d */
  if ((sf == of)) goto L_7f492d;
L_7f48fe: /* 7f48fe: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 7f4904: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 7f4907: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f490a: mov edx, dword ptr [ecx + 0x111c] */
  edx = R32((uint32_t)(ecx + 0x111cu));
/* 7f4910: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4913: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 7f4916: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f4918: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f491a: mov ecx, esi */
  ecx = esi;
/* 7f491c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4922u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4922: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4924: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4927: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7f492a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f492b: jmp 0x7f48f6 */
  goto L_7f48f6;
L_7f492d: /* 7f492d: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 7f4930: jmp 0x7f48d0 */
  goto L_7f48d0;
L_7f4932: /* 7f4932: xor ebx, ebx */
  ebx = 0;
/* 7f4934: jmp 0x7f4940 */
  goto L_7f4940;
L_7f4940: /* 7f4940: mov edx, dword ptr [esi + 0x8c] */
  edx = R32((uint32_t)(esi + 0x8cu));
/* 7f4946: cmp ebx, dword ptr [edx + 0x118] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f494c: jge 0x7f4975 */
  if ((sf == of)) goto L_7f4975;
L_7f494e: /* 7f494e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f4950: lea edi, [esi + 0x1128] */
  edi = (uint32_t)(esi + 0x1128u);
/* 7f4956: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4958: mov ecx, edi */
  ecx = edi;
/* 7f495a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4960u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4960: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7f4962: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4965: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7f4968: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f496a: je 0x7f4972 */
  if (zf) goto L_7f4972;
L_7f496c: /* 7f496c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f4972u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
L_7f4972: /* 7f4972: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f4973: jmp 0x7f4940 */
  goto L_7f4940;
L_7f4975: /* 7f4975: xor edx, edx */
  edx = 0;
L_7f4977: /* 7f4977: cmp edx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f497a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7f497d: jge 0x7f4b6d */
  if ((sf == of)) goto L_7f4b6d;
L_7f4983: /* 7f4983: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4986: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7f4989: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 7f498c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f498e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7f4991: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f4997: /* 7f4997: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f499d: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f499f: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49a5: /* 7f49a5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7f49a7: js 0x7f4b64 */
  if (sf) goto L_7f4b64;
L_7f49ad: /* 7f49ad: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f49b1: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49b7: /* 7f49b7: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7f49ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49bc: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49c2: /* 7f49c2: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 7f49c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49ca: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49d0: /* 7f49d0: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7f49d3: test byte ptr [ecx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49d7: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49dd: /* 7f49dd: xor eax, eax */
  eax = 0;
/* 7f49df: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7f49e2: /* 7f49e2: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 7f49e5: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f49e8: jge 0x7f4b61 */
  if ((sf == of)) goto L_7f4b61;
L_7f49ee: /* 7f49ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f49f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f49f1: mov ecx, esi */
  ecx = esi;
/* 7f49f3: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7f49f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f49f9: mov ebx, eax */
  ebx = eax;
/* 7f49fb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49fd: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f49ff: /* 7f49ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4a02: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7f4a08: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4a0b: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 7f4a0e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a10: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f4a12: /* 7f4a12: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7f4a1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7f4a1d: mov ebx, eax */
  ebx = eax;
/* 7f4a1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a21: je 0x7f4a41 */
  if (zf) goto L_7f4a41;
L_7f4a23: /* 7f4a23: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7f4a28: mov ecx, ebx */
  ecx = ebx;
/* 7f4a2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f4a30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f4a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a32: jne 0x7f4a6a */
  if (!zf) goto L_7f4a6a;
L_7f4a34: /* 7f4a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a35: mov ecx, ebx */
  ecx = ebx;
/* 7f4a37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f4a3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f4a3d: mov edi, eax */
  edi = eax;
/* 7f4a3f: jmp 0x7f4a46 */
  goto L_7f4a46;
L_7f4a41: /* 7f4a41: mov edi, 0xadfa0c */
  edi = 0xadfa0cu;
L_7f4a46: /* 7f4a46: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f4a51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f4a51: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7f4a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a58: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f4a5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4a5b: push 0xadfa18 */
  { uint32_t v = 0xadfa18u; esp -= 4; W32(esp, v); }
/* 7f4a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a61: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4a67u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4a67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4a6a: /* 7f4a6a: mov ebx, dword ptr [ebx + 0x2c] */
  ebx = R32((uint32_t)(ebx + 0x2cu));
L_7f4a6d: /* 7f4a6d: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7f4a70: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4a73: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7f4a76: xor eax, eax */
  eax = 0;
/* 7f4a78: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4a80: /* 7f4a80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a83: cmp eax, dword ptr [ecx + 0x1114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4a89: jge 0x7f4acb */
  if ((sf == of)) goto L_7f4acb;
L_7f4a8b: /* 7f4a8b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a8e: mov edi, dword ptr [edi + 0x1110] */
  edi = R32((uint32_t)(edi + 0x1110u));
/* 7f4a94: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7f4a97: lea ecx, [edi + ecx*8] */
  ecx = (uint32_t)(edi + ecx*8);
/* 7f4a9a: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4a9c: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4aa2: /* 7f4aa2: test dword ptr [esi + 0x80], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4aac: je 0x7f4ab9 */
  if (zf) goto L_7f4ab9;
L_7f4aae: /* 7f4aae: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7f4ab1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4ab3: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4ab9: /* 7f4ab9: cmp dword ptr [ecx + 0x24], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4ac0: jge 0x7f4b5b */
  if ((sf == of)) goto L_7f4b5b;
L_7f4ac6: /* 7f4ac6: mov edx, eax */
  edx = eax;
/* 7f4ac8: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
L_7f4acb: /* 7f4acb: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4ace: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4ad1: jne 0x7f4b16 */
  if (!zf) goto L_7f4b16;
L_7f4ad3: /* 7f4ad3: mov edx, dword ptr [edi + 0x1114] */
  edx = R32((uint32_t)(edi + 0x1114u));
/* 7f4ad9: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7f4adb: lea esi, [edi + 0x1110] */
  esi = (uint32_t)(edi + 0x1110u);
/* 7f4ae1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4ae3: mov ecx, esi */
  ecx = esi;
/* 7f4ae5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4ae8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4aeeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4aee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4af0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7f4af3: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 7f4af6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4af8: je 0x7f4b10 */
  if (zf) goto L_7f4b10;
L_7f4afa: /* 7f4afa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4afd: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 7f4b03: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7f4b06: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f4b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4b0b: call 0x6c19e7 */
  esp -= 4; W32(esp, 0x7f4b10u); SPILL(); f_6c19e7(); if (g_unwind) return; RELOAD();
L_7f4b10: /* 7f4b10: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b13: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
L_7f4b16: /* 7f4b16: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b19: mov eax, dword ptr [edi + 0x1110] */
  eax = R32((uint32_t)(edi + 0x1110u));
/* 7f4b1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4b20: lea edx, [edx + edx*8] */
  edx = (uint32_t)(edx + edx*8);
/* 7f4b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4b24: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 7f4b27: call 0x6c5498 */
  esp -= 4; W32(esp, 0x7f4b2cu); SPILL(); f_6c5498(); if (g_unwind) return; RELOAD();
/* 7f4b2c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b2f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f4b31: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f4b34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4b36: mov ecx, esi */
  ecx = esi;
/* 7f4b38: mov edi, eax */
  edi = eax;
/* 7f4b3a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4b40u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4b40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4b42: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f4b45: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b48: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 7f4b4b: mov dword ptr [ecx + eax*8 + 4], edi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edi);
/* 7f4b4f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b53: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f4b56: jmp 0x7f49e2 */
  goto L_7f49e2;
L_7f4b5b: /* 7f4b5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b5c: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4b61: /* 7f4b61: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
L_7f4b64: /* 7f4b64: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4b67: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7f4b68: jmp 0x7f4977 */
  goto L_7f4977;
L_7f4b6d: /* 7f4b6d: xor edx, edx */
  edx = 0;
/* 7f4b6f: xor edi, edi */
  edi = 0;
/* 7f4b71: xor ecx, ecx */
  ecx = 0;
L_7f4b73: /* 7f4b73: cmp ecx, dword ptr [esi + 0x1114] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4b79: jge 0x7f4b96 */
  if ((sf == of)) goto L_7f4b96;
L_7f4b7b: /* 7f4b7b: mov ebx, dword ptr [esi + 0x1110] */
  ebx = R32((uint32_t)(esi + 0x1110u));
/* 7f4b81: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 7f4b84: lea eax, [ebx + eax*8] */
  eax = (uint32_t)(ebx + eax*8);
/* 7f4b87: add edx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f4b8a: add edi, dword ptr [eax + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f4b8d: mov dword ptr [eax + 0x18], eax */
  W32((uint32_t)(eax + 0x18u), eax);
/* 7f4b90: mov dword ptr [eax + 0x38], eax */
  W32((uint32_t)(eax + 0x38u), eax);
/* 7f4b93: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f4b94: jmp 0x7f4b73 */
  goto L_7f4b73;
L_7f4b96: /* 7f4b96: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f4b9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4b9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4b9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4ba0: push 0xadead0 */
  { uint32_t v = 0xadead0u; esp -= 4; W32(esp, v); }
/* 7f4ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4ba6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4bacu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4bac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4baf: /* 7f4baf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4bb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4bb3: mov dword ptr [esi + 0x114c], 1 */
  W32((uint32_t)(esi + 0x114cu), 0x1u);
/* 7f4bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4bbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f4bc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f4bc6: mov esp, ebp */
  esp = ebp;
/* 7f4bc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4bc9: ret  */
  esp += 4; SPILL(); return;
}

void f_7f4936(void) {
  LOAD_REGS();
L_7f4936: /* 7f4936: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7f493d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f4940: /* 7f4940: mov edx, dword ptr [esi + 0x8c] */
  edx = R32((uint32_t)(esi + 0x8cu));
/* 7f4946: cmp ebx, dword ptr [edx + 0x118] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f494c: jge 0x7f4975 */
  if ((sf == of)) goto L_7f4975;
L_7f494e: /* 7f494e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f4950: lea edi, [esi + 0x1128] */
  edi = (uint32_t)(esi + 0x1128u);
/* 7f4956: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4958: mov ecx, edi */
  ecx = edi;
/* 7f495a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4960u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4960: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7f4962: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4965: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7f4968: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f496a: je 0x7f4972 */
  if (zf) goto L_7f4972;
L_7f496c: /* 7f496c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f4972u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
L_7f4972: /* 7f4972: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f4973: jmp 0x7f4940 */
  goto L_7f4940;
L_7f4975: /* 7f4975: xor edx, edx */
  edx = 0;
L_7f4977: /* 7f4977: cmp edx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f497a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7f497d: jge 0x7f4b6d */
  if ((sf == of)) goto L_7f4b6d;
L_7f4983: /* 7f4983: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4986: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7f4989: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 7f498c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f498e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7f4991: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f4997: /* 7f4997: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f499d: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f499f: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49a5: /* 7f49a5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7f49a7: js 0x7f4b64 */
  if (sf) goto L_7f4b64;
L_7f49ad: /* 7f49ad: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f49b1: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49b7: /* 7f49b7: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7f49ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49bc: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49c2: /* 7f49c2: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 7f49c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49ca: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49d0: /* 7f49d0: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7f49d3: test byte ptr [ecx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49d7: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49dd: /* 7f49dd: xor eax, eax */
  eax = 0;
/* 7f49df: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7f49e2: /* 7f49e2: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 7f49e5: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f49e8: jge 0x7f4b61 */
  if ((sf == of)) goto L_7f4b61;
L_7f49ee: /* 7f49ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f49f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f49f1: mov ecx, esi */
  ecx = esi;
/* 7f49f3: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7f49f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f49f9: mov ebx, eax */
  ebx = eax;
/* 7f49fb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49fd: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f49ff: /* 7f49ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4a02: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7f4a08: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4a0b: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 7f4a0e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a10: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f4a12: /* 7f4a12: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7f4a1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7f4a1d: mov ebx, eax */
  ebx = eax;
/* 7f4a1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a21: je 0x7f4a41 */
  if (zf) goto L_7f4a41;
L_7f4a23: /* 7f4a23: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7f4a28: mov ecx, ebx */
  ecx = ebx;
/* 7f4a2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f4a30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f4a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a32: jne 0x7f4a6a */
  if (!zf) goto L_7f4a6a;
L_7f4a34: /* 7f4a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a35: mov ecx, ebx */
  ecx = ebx;
/* 7f4a37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f4a3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f4a3d: mov edi, eax */
  edi = eax;
/* 7f4a3f: jmp 0x7f4a46 */
  goto L_7f4a46;
L_7f4a41: /* 7f4a41: mov edi, 0xadfa0c */
  edi = 0xadfa0cu;
L_7f4a46: /* 7f4a46: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f4a51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f4a51: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7f4a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a58: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f4a5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4a5b: push 0xadfa18 */
  { uint32_t v = 0xadfa18u; esp -= 4; W32(esp, v); }
/* 7f4a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a61: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4a67u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4a67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4a6a: /* 7f4a6a: mov ebx, dword ptr [ebx + 0x2c] */
  ebx = R32((uint32_t)(ebx + 0x2cu));
L_7f4a6d: /* 7f4a6d: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7f4a70: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4a73: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7f4a76: xor eax, eax */
  eax = 0;
/* 7f4a78: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4a80: /* 7f4a80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a83: cmp eax, dword ptr [ecx + 0x1114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4a89: jge 0x7f4acb */
  if ((sf == of)) goto L_7f4acb;
L_7f4a8b: /* 7f4a8b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a8e: mov edi, dword ptr [edi + 0x1110] */
  edi = R32((uint32_t)(edi + 0x1110u));
/* 7f4a94: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7f4a97: lea ecx, [edi + ecx*8] */
  ecx = (uint32_t)(edi + ecx*8);
/* 7f4a9a: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4a9c: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4aa2: /* 7f4aa2: test dword ptr [esi + 0x80], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4aac: je 0x7f4ab9 */
  if (zf) goto L_7f4ab9;
L_7f4aae: /* 7f4aae: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7f4ab1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4ab3: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4ab9: /* 7f4ab9: cmp dword ptr [ecx + 0x24], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4ac0: jge 0x7f4b5b */
  if ((sf == of)) goto L_7f4b5b;
L_7f4ac6: /* 7f4ac6: mov edx, eax */
  edx = eax;
/* 7f4ac8: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
L_7f4acb: /* 7f4acb: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4ace: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4ad1: jne 0x7f4b16 */
  if (!zf) goto L_7f4b16;
L_7f4ad3: /* 7f4ad3: mov edx, dword ptr [edi + 0x1114] */
  edx = R32((uint32_t)(edi + 0x1114u));
/* 7f4ad9: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7f4adb: lea esi, [edi + 0x1110] */
  esi = (uint32_t)(edi + 0x1110u);
/* 7f4ae1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4ae3: mov ecx, esi */
  ecx = esi;
/* 7f4ae5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4ae8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4aeeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4aee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4af0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7f4af3: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 7f4af6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4af8: je 0x7f4b10 */
  if (zf) goto L_7f4b10;
L_7f4afa: /* 7f4afa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4afd: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 7f4b03: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7f4b06: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f4b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4b0b: call 0x6c19e7 */
  esp -= 4; W32(esp, 0x7f4b10u); SPILL(); f_6c19e7(); if (g_unwind) return; RELOAD();
L_7f4b10: /* 7f4b10: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b13: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
L_7f4b16: /* 7f4b16: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b19: mov eax, dword ptr [edi + 0x1110] */
  eax = R32((uint32_t)(edi + 0x1110u));
/* 7f4b1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4b20: lea edx, [edx + edx*8] */
  edx = (uint32_t)(edx + edx*8);
/* 7f4b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4b24: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 7f4b27: call 0x6c5498 */
  esp -= 4; W32(esp, 0x7f4b2cu); SPILL(); f_6c5498(); if (g_unwind) return; RELOAD();
/* 7f4b2c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b2f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f4b31: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f4b34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4b36: mov ecx, esi */
  ecx = esi;
/* 7f4b38: mov edi, eax */
  edi = eax;
/* 7f4b3a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4b40u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4b40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4b42: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f4b45: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b48: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 7f4b4b: mov dword ptr [ecx + eax*8 + 4], edi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edi);
/* 7f4b4f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b53: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f4b56: jmp 0x7f49e2 */
  goto L_7f49e2;
L_7f4b5b: /* 7f4b5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b5c: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4b61: /* 7f4b61: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
L_7f4b64: /* 7f4b64: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4b67: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7f4b68: jmp 0x7f4977 */
  goto L_7f4977;
L_7f4b6d: /* 7f4b6d: xor edx, edx */
  edx = 0;
/* 7f4b6f: xor edi, edi */
  edi = 0;
/* 7f4b71: xor ecx, ecx */
  ecx = 0;
L_7f4b73: /* 7f4b73: cmp ecx, dword ptr [esi + 0x1114] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4b79: jge 0x7f4b96 */
  if ((sf == of)) goto L_7f4b96;
L_7f4b7b: /* 7f4b7b: mov ebx, dword ptr [esi + 0x1110] */
  ebx = R32((uint32_t)(esi + 0x1110u));
/* 7f4b81: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 7f4b84: lea eax, [ebx + eax*8] */
  eax = (uint32_t)(ebx + eax*8);
/* 7f4b87: add edx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f4b8a: add edi, dword ptr [eax + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f4b8d: mov dword ptr [eax + 0x18], eax */
  W32((uint32_t)(eax + 0x18u), eax);
/* 7f4b90: mov dword ptr [eax + 0x38], eax */
  W32((uint32_t)(eax + 0x38u), eax);
/* 7f4b93: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f4b94: jmp 0x7f4b73 */
  goto L_7f4b73;
L_7f4b96: /* 7f4b96: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f4b9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4b9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4b9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4ba0: push 0xadead0 */
  { uint32_t v = 0xadead0u; esp -= 4; W32(esp, v); }
/* 7f4ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4ba6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4bacu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4bac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4baf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4bb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4bb3: mov dword ptr [esi + 0x114c], 1 */
  W32((uint32_t)(esi + 0x114cu), 0x1u);
/* 7f4bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4bbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f4bc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f4bc6: mov esp, ebp */
  esp = ebp;
/* 7f4bc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4bc9: ret  */
  esp += 4; SPILL(); return;
}

void f_7f4a7a(void) {
  LOAD_REGS();
  goto L_7f4a7a;
L_7f4977: /* 7f4977: cmp edx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f497a: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7f497d: jge 0x7f4b6d */
  if ((sf == of)) goto L_7f4b6d;
L_7f4983: /* 7f4983: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4986: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7f4989: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 7f498c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f498e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7f4991: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f4997: /* 7f4997: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f499d: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f499f: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49a5: /* 7f49a5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7f49a7: js 0x7f4b64 */
  if (sf) goto L_7f4b64;
L_7f49ad: /* 7f49ad: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f49b1: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49b7: /* 7f49b7: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7f49ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49bc: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49c2: /* 7f49c2: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 7f49c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49ca: jne 0x7f4b64 */
  if (!zf) goto L_7f4b64;
L_7f49d0: /* 7f49d0: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7f49d3: test byte ptr [ecx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49d7: je 0x7f4b64 */
  if (zf) goto L_7f4b64;
L_7f49dd: /* 7f49dd: xor eax, eax */
  eax = 0;
/* 7f49df: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7f49e2: /* 7f49e2: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 7f49e5: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f49e8: jge 0x7f4b61 */
  if ((sf == of)) goto L_7f4b61;
L_7f49ee: /* 7f49ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f49f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f49f1: mov ecx, esi */
  ecx = esi;
/* 7f49f3: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7f49f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f49f9: mov ebx, eax */
  ebx = eax;
/* 7f49fb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f49fd: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f49ff: /* 7f49ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4a02: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7f4a08: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7f4a0b: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 7f4a0e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a10: jne 0x7f4a6d */
  if (!zf) goto L_7f4a6d;
L_7f4a12: /* 7f4a12: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a17: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7f4a1du); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7f4a1d: mov ebx, eax */
  ebx = eax;
/* 7f4a1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a21: je 0x7f4a41 */
  if (zf) goto L_7f4a41;
L_7f4a23: /* 7f4a23: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7f4a28: mov ecx, ebx */
  ecx = ebx;
/* 7f4a2a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f4a30u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f4a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4a32: jne 0x7f4a6a */
  if (!zf) goto L_7f4a6a;
L_7f4a34: /* 7f4a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a35: mov ecx, ebx */
  ecx = ebx;
/* 7f4a37: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f4a3du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f4a3d: mov edi, eax */
  edi = eax;
/* 7f4a3f: jmp 0x7f4a46 */
  goto L_7f4a46;
L_7f4a41: /* 7f4a41: mov edi, 0xadfa0c */
  edi = 0xadfa0cu;
L_7f4a46: /* 7f4a46: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7f4a4b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7f4a51u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7f4a51: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7f4a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a58: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f4a5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4a5b: push 0xadfa18 */
  { uint32_t v = 0xadfa18u; esp -= 4; W32(esp, v); }
/* 7f4a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4a61: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4a67u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4a67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4a6a: /* 7f4a6a: mov ebx, dword ptr [ebx + 0x2c] */
  ebx = R32((uint32_t)(ebx + 0x2cu));
L_7f4a6d: /* 7f4a6d: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7f4a70: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4a73: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7f4a76: xor eax, eax */
  eax = 0;
/* 7f4a78: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4a7a: /* 7f4a7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f4a80: /* 7f4a80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a83: cmp eax, dword ptr [ecx + 0x1114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4a89: jge 0x7f4acb */
  if ((sf == of)) goto L_7f4acb;
L_7f4a8b: /* 7f4a8b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4a8e: mov edi, dword ptr [edi + 0x1110] */
  edi = R32((uint32_t)(edi + 0x1110u));
/* 7f4a94: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7f4a97: lea ecx, [edi + ecx*8] */
  ecx = (uint32_t)(edi + ecx*8);
/* 7f4a9a: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4a9c: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4aa2: /* 7f4aa2: test dword ptr [esi + 0x80], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4aac: je 0x7f4ab9 */
  if (zf) goto L_7f4ab9;
L_7f4aae: /* 7f4aae: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7f4ab1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4ab3: jne 0x7f4b5b */
  if (!zf) goto L_7f4b5b;
L_7f4ab9: /* 7f4ab9: cmp dword ptr [ecx + 0x24], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4ac0: jge 0x7f4b5b */
  if ((sf == of)) goto L_7f4b5b;
L_7f4ac6: /* 7f4ac6: mov edx, eax */
  edx = eax;
/* 7f4ac8: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
L_7f4acb: /* 7f4acb: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f4ace: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4ad1: jne 0x7f4b16 */
  if (!zf) goto L_7f4b16;
L_7f4ad3: /* 7f4ad3: mov edx, dword ptr [edi + 0x1114] */
  edx = R32((uint32_t)(edi + 0x1114u));
/* 7f4ad9: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7f4adb: lea esi, [edi + 0x1110] */
  esi = (uint32_t)(edi + 0x1110u);
/* 7f4ae1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4ae3: mov ecx, esi */
  ecx = esi;
/* 7f4ae5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7f4ae8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4aeeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4aee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4af0: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7f4af3: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 7f4af6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4af8: je 0x7f4b10 */
  if (zf) goto L_7f4b10;
L_7f4afa: /* 7f4afa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4afd: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 7f4b03: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7f4b06: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f4b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4b0b: call 0x6c19e7 */
  esp -= 4; W32(esp, 0x7f4b10u); SPILL(); f_6c19e7(); if (g_unwind) return; RELOAD();
L_7f4b10: /* 7f4b10: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b13: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
L_7f4b16: /* 7f4b16: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b19: mov eax, dword ptr [edi + 0x1110] */
  eax = R32((uint32_t)(edi + 0x1110u));
/* 7f4b1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4b20: lea edx, [edx + edx*8] */
  edx = (uint32_t)(edx + edx*8);
/* 7f4b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4b24: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 7f4b27: call 0x6c5498 */
  esp -= 4; W32(esp, 0x7f4b2cu); SPILL(); f_6c5498(); if (g_unwind) return; RELOAD();
/* 7f4b2c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b2f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f4b31: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f4b34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4b36: mov ecx, esi */
  ecx = esi;
/* 7f4b38: mov edi, eax */
  edi = eax;
/* 7f4b3a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f4b40u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f4b40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f4b42: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f4b45: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f4b48: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 7f4b4b: mov dword ptr [ecx + eax*8 + 4], edi */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edi);
/* 7f4b4f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f4b52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b53: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f4b56: jmp 0x7f49e2 */
  goto L_7f49e2;
L_7f4b5b: /* 7f4b5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f4b5c: jmp 0x7f4a80 */
  goto L_7f4a80;
L_7f4b61: /* 7f4b61: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
L_7f4b64: /* 7f4b64: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f4b67: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7f4b68: jmp 0x7f4977 */
  goto L_7f4977;
L_7f4b6d: /* 7f4b6d: xor edx, edx */
  edx = 0;
/* 7f4b6f: xor edi, edi */
  edi = 0;
/* 7f4b71: xor ecx, ecx */
  ecx = 0;
L_7f4b73: /* 7f4b73: cmp ecx, dword ptr [esi + 0x1114] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4b79: jge 0x7f4b96 */
  if ((sf == of)) goto L_7f4b96;
L_7f4b7b: /* 7f4b7b: mov ebx, dword ptr [esi + 0x1110] */
  ebx = R32((uint32_t)(esi + 0x1110u));
/* 7f4b81: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 7f4b84: lea eax, [ebx + eax*8] */
  eax = (uint32_t)(ebx + eax*8);
/* 7f4b87: add edx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f4b8a: add edi, dword ptr [eax + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f4b8d: mov dword ptr [eax + 0x18], eax */
  W32((uint32_t)(eax + 0x18u), eax);
/* 7f4b90: mov dword ptr [eax + 0x38], eax */
  W32((uint32_t)(eax + 0x38u), eax);
/* 7f4b93: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7f4b94: jmp 0x7f4b73 */
  goto L_7f4b73;
L_7f4b96: /* 7f4b96: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f4b9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4b9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4b9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4ba0: push 0xadead0 */
  { uint32_t v = 0xadead0u; esp -= 4; W32(esp, v); }
/* 7f4ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4ba6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4bacu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4bac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4baf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4bb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4bb3: mov dword ptr [esi + 0x114c], 1 */
  W32((uint32_t)(esi + 0x114cu), 0x1u);
/* 7f4bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4bbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f4bc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f4bc6: mov esp, ebp */
  esp = ebp;
/* 7f4bc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4bc9: ret  */
  esp += 4; SPILL(); return;
}

void f_7f4bca(void) {
  LOAD_REGS();
L_7f4bca: /* 7f4bca: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7f4bcd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f4bd2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f4bd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4bd6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7f4bd9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4bdeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f4bde(); return;
}

void f_7f4bde(void) {
  LOAD_REGS();
L_7f4bde: /* 7f4bde: push 0xa11a64 */
  { uint32_t v = 0xa11a64u; esp -= 4; W32(esp, v); }
/* 7f4be3: push 0xadeb3c */
  { uint32_t v = 0xadeb3cu; esp -= 4; W32(esp, v); }
/* 7f4be8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f4beeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f4bee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4bf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4bf5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f4bfau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f4bfa: guest_badaddr(0x7f4bfa); return;
}

void f_7f4d10(void) {
  LOAD_REGS();
L_7f4d10: /* 7f4d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f4d11: mov ebp, esp */
  ebp = esp;
/* 7f4d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f4d15: push 0x9d1583 */
  { uint32_t v = 0x9d1583u; esp -= 4; W32(esp, v); }
/* 7f4d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f4d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f4d28: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f4d2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4d2f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7f4d32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4d33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f4d34: mov edi, ecx */
  edi = ecx;
/* 7f4d36: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7f4d39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4d3b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f4d3e: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7f4d41: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f4d48: je 0x7f4d5e */
  if (zf) goto L_7f4d5e;
L_7f4d4a: /* 7f4d4a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f4d4d: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7f4d50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f4d52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4d53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4d54: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7f4d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4d56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4d58: jne 0x7f4fc3 */
  if (!zf) goto L_7f4fc3;
L_7f4d5e: /* 7f4d5e: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 7f4d64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4d66: je 0x7f4d7c */
  if (zf) goto L_7f4d7c;
L_7f4d68: /* 7f4d68: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f4d6b: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7f4d6e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f4d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4d72: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7f4d74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4d74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4d76: jne 0x7f4fc3 */
  if (!zf) goto L_7f4fc3;
L_7f4d7c: /* 7f4d7c: mov esi, dword ptr [0xcfa5b8] */
  esi = R32((uint32_t)(0xcfa5b8u));
/* 7f4d82: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7f4d85: push 0xadebe4 */
  { uint32_t v = 0xadebe4u; esp -= 4; W32(esp, v); }
/* 7f4d8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4d8b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f4d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4d8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4d90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4d92: je 0x7f4fdb */
  if (zf) goto L_7f4fdb;
L_7f4d98: /* 7f4d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4d9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7f4da0: call 0x6c321a */
  esp -= 4; W32(esp, 0x7f4da5u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 7f4da5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4da7: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f4daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4dab: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7f4dae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4daf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f4db3: call dword ptr [0xcfa83c] */
  esp -= 4; W32(esp, 0x7f4db9u); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* 7f4db9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4dbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4dbe: jne 0x7f4e49 */
  if (!zf) goto L_7f4e49;
L_7f4dc4: /* 7f4dc4: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7f4dca: mov esi, 1 */
  esi = 0x1u;
/* 7f4dcf: nop  */
L_7f4dd0: /* 7f4dd0: cmp esi, 0x3e8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f4dd6: jge 0x7f4e1a */
  if ((sf == of)) goto L_7f4e1a;
L_7f4dd8: /* 7f4dd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4dd9: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4ddc: push 0xadebf4 */
  { uint32_t v = 0xadebf4u; esp -= 4; W32(esp, v); }
/* 7f4de1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4de2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f4de4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4de4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4de7: mov ecx, eax */
  ecx = eax;
/* 7f4de9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f4ded: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f4df3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f4df3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7f4df9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7f4dfb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4dfe: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f4e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4e01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f4e03: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4e06: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7f4e09: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f4e0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f4e13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f4e13: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4e15: jne 0x7f4e1f */
  if (!zf) goto L_7f4e1f;
L_7f4e17: /* 7f4e17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f4e18: jmp 0x7f4dd0 */
  goto L_7f4dd0;
L_7f4e1a: /* 7f4e1a: mov esi, 1 */
  esi = 0x1u;
L_7f4e1f: /* 7f4e1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4e20: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4e23: push 0xadec10 */
  { uint32_t v = 0xadec10u; esp -= 4; W32(esp, v); }
/* 7f4e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4e29: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f4e2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4e2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4e2f: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f4e32: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f4e36: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7f4e3cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7f4e3c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4e3f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f4e43: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f4e49u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7f4e49: /* 7f4e49: mov ebx, 4 */
  ebx = 0x4u;
/* 7f4e4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f4e4f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f4e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4e53: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f4e56: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7f4e5cu); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7f4e5c: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4e5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4e60: mov ecx, eax */
  ecx = eax;
/* 7f4e62: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7f4e65: call dword ptr [0xcfaaa4] */
  esp -= 4; W32(esp, 0x7f4e6bu); SPILL(); f_4e4237(); if (g_unwind) return; /* Core!?Locs@FString@@QBE?AV1@XZ */ RELOAD();
/* 7f4e6b: push 0xadec2c */
  { uint32_t v = 0xadec2cu; esp -= 4; W32(esp, v); }
/* 7f4e70: mov ecx, eax */
  ecx = eax;
/* 7f4e72: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f4e76: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7f4e7cu); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7f4e7c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f4e7f: mov esi, eax */
  esi = eax;
/* 7f4e81: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7f4e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f4e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f4e8a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f4e8d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f4e91: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f4e97u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f4e97: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4e99: je 0x7f4ea9 */
  if (zf) goto L_7f4ea9;
L_7f4e9b: /* 7f4e9b: push 0xadec38 */
  { uint32_t v = 0xadec38u; esp -= 4; W32(esp, v); }
/* 7f4ea0: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f4ea3: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x7f4ea9u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_7f4ea9: /* 7f4ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4eab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4ead: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4eaf: push 0xadec48 */
  { uint32_t v = 0xadec48u; esp -= 4; W32(esp, v); }
/* 7f4eb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4eb6: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 7f4ebb: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7f4ec1u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7f4ec1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4ec4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4ec6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7f4ec9: mov esi, eax */
  esi = eax;
/* 7f4ecb: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f4ed1u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f4ed1: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 7f4ed6: mov ecx, esi */
  ecx = esi;
/* 7f4ed8: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7f4edeu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7f4ede: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4ee0: jne 0x7f4efa */
  if (!zf) goto L_7f4efa;
L_7f4ee2: /* 7f4ee2: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7f4ee7: push 0xadf968 */
  { uint32_t v = 0xadf968u; esp -= 4; W32(esp, v); }
/* 7f4eec: push 0xadf9ac */
  { uint32_t v = 0xadf9acu; esp -= 4; W32(esp, v); }
/* 7f4ef1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f4ef7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f4ef7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4efa: /* 7f4efa: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f4f00u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7f4f00: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f4f06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4f08: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7f4f0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4f0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f4f0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4f10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f4f15: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f4f1bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f4f1b: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f4f1e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4f21: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4f24: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 7f4f2a: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f4f30u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f4f30: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7f4f36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4f38: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f3c: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 7f4f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f43: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 7f4f46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f47: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f4f4b: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7f4f4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4f4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4f50: jne 0x7f4f8b */
  if (!zf) goto L_7f4f8b;
L_7f4f52: /* 7f4f52: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4f55: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f4f5bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f4f5b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f4f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f5f: push 0xadec94 */
  { uint32_t v = 0xadec94u; esp -= 4; W32(esp, v); }
/* 7f4f64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4f65: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4f6bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4f6b: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7f4f71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4f74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4f76: je 0x7f4f7f */
  if (zf) goto L_7f4f7f;
L_7f4f78: /* 7f4f78: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f4f7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f4f7c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7f4f7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f4f7f: /* 7f4f7f: mov dword ptr [esi + 0x88], 0 */
  W32((uint32_t)(esi + 0x88u), 0x0u);
/* 7f4f89: jmp 0x7f4fa7 */
  goto L_7f4fa7;
L_7f4f8b: /* 7f4f8b: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f4f8e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f4f94u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f4f94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f95: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f4f98: push 0xadecc8 */
  { uint32_t v = 0xadecc8u; esp -= 4; W32(esp, v); }
/* 7f4f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f4f9e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f4fa4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f4fa4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f4fa7: /* 7f4fa7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4faa: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f4fae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f4fb4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f4fb4: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7f4fba: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f4fbe: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7f4fc3u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
L_7f4fc3: /* 7f4fc3: mov eax, 1 */
  eax = 0x1u;
/* 7f4fc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f4fcb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f4fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f4fd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f4fd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f4fd5: mov esp, ebp */
  esp = ebp;
/* 7f4fd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f4fd8: ret 8 */
  esp += 12; SPILL(); return;
L_7f4fdb: /* 7f4fdb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7f4fde: push 0xaded04 */
  { uint32_t v = 0xaded04u; esp -= 4; W32(esp, v); }
/* 7f4fe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f4fe4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f4fe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f4fe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f4fe9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f4feb: je 0x7f51f6 */
  if (zf) goto L_7f51f6;
L_7f4ff1: /* 7f4ff1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4ff4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f4ffau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f4ffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f4ffc: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f4fff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5000: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7f5003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5004: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f5008: call dword ptr [0xcfa83c] */
  esp -= 4; W32(esp, 0x7f500eu); SPILL(); f_4e3247(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGAAVFString@@H@Z */ RELOAD();
/* 7f500e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5011: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5013: je 0x7f51d7 */
  if (zf) goto L_7f51d7;
L_7f5019: /* 7f5019: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f501c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f501d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f5020: call dword ptr [0xcfaaa0] */
  esp -= 4; W32(esp, 0x7f5026u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* 7f5026: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f5028: push 0xaded18 */
  { uint32_t v = 0xaded18u; esp -= 4; W32(esp, v); }
/* 7f502d: mov ecx, eax */
  ecx = eax;
/* 7f502f: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7f5033: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7f5039u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7f5039: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f503c: mov esi, eax */
  esi = eax;
/* 7f503e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f5042: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5048u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5048: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f504b: je 0x7f50c6 */
  if (zf) goto L_7f50c6;
L_7f504d: /* 7f504d: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7f5052: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 7f5055: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5056: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 7f505c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f505d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f5060: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7f5066u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7f5066: mov ebx, eax */
  ebx = eax;
/* 7f5068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5069: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f506c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f506d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f5070: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7f5074: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7f507au); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7f507a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f507b: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f507e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f507f: mov ecx, eax */
  ecx = eax;
/* 7f5081: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7f5085: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7f508bu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7f508b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f508c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f508f: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7f5093: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7f5099u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7f5099: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f509c: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7f50a0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f50a6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f50a6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f50a9: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7f50ad: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f50b3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f50b3: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7f50b9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f50bd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f50c3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f50c3: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_7f50c6: /* 7f50c6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f50c9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f50cfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f50cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f50d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f50d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f50d4: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7f50da: call 0x6c440d */
  esp -= 4; W32(esp, 0x7f50dfu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7f50df: push 0xaded24 */
  { uint32_t v = 0xaded24u; esp -= 4; W32(esp, v); }
/* 7f50e4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f50e7: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7f50eb: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x7f50f1u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7f50f1: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f50f4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f50fau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f50fa: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7f5100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5101: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f5106: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f5108: push 0xaded30 */
  { uint32_t v = 0xaded30u; esp -= 4; W32(esp, v); }
/* 7f510d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f510e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f5110u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5110: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 7f5113: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5117: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f511cu); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f511c: mov esi, eax */
  esi = eax;
/* 7f511e: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 7f5124: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5127: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5129: je 0x7f5135 */
  if (zf) goto L_7f5135;
L_7f512b: /* 7f512b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f512d: mov ecx, esi */
  ecx = esi;
/* 7f512f: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7f5135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f5135: /* 7f5135: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f5137: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5138: mov ecx, esp */
  ecx = esp;
/* 7f513a: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 7f513d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f513f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f5145u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f5145: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f514bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7f514b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f514c: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 7f5151: call 0x6c3d91 */
  esp -= 4; W32(esp, 0x7f5156u); SPILL(); f_6c3d91(); if (g_unwind) return; RELOAD();
/* 7f5156: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f515b: je 0x7f516e */
  if (zf) goto L_7f516e;
L_7f515d: /* 7f515d: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7f5163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5165: mov ecx, eax */
  ecx = eax;
/* 7f5167: call 0x6c926e */
  esp -= 4; W32(esp, 0x7f516cu); SPILL(); f_6c926e(); if (g_unwind) return; RELOAD();
/* 7f516c: jmp 0x7f5170 */
  goto L_7f5170;
L_7f516e: /* 7f516e: xor eax, eax */
  eax = 0;
L_7f5170: /* 7f5170: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* 7f5176: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7f517c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f517e: jne 0x7f51b6 */
  if (!zf) goto L_7f51b6;
L_7f5180: /* 7f5180: lea ecx, [eax + 0x9c] */
  ecx = (uint32_t)(eax + 0x9cu);
/* 7f5186: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f518cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f518c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f518f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5190: push 0xaded68 */
  { uint32_t v = 0xaded68u; esp -= 4; W32(esp, v); }
/* 7f5195: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5196: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f5198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5198: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7f519e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f51a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f51a3: je 0x7f51ac */
  if (zf) goto L_7f51ac;
L_7f51a5: /* 7f51a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f51a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f51a9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7f51acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f51ac: /* 7f51ac: mov dword ptr [esi + 0x110], 0 */
  W32((uint32_t)(esi + 0x110u), 0x0u);
L_7f51b6: /* 7f51b6: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7f51bc: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f51c0: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7f51c5u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7f51c5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f51c8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f51cc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f51d2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f51d2: jmp 0x7f4fc3 */
  goto L_7f4fc3;
L_7f51d7: /* 7f51d7: push 0xaded9c */
  { uint32_t v = 0xaded9cu; esp -= 4; W32(esp, v); }
/* 7f51dc: mov ecx, ebx */
  ecx = ebx;
/* 7f51de: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7f51e4u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7f51e4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f51e7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f51eb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f51f1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f51f1: jmp 0x7f4fc3 */
  goto L_7f4fc3;
L_7f51f6: /* 7f51f6: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7f51f9: push 0xadedd4 */
  { uint32_t v = 0xadedd4u; esp -= 4; W32(esp, v); }
/* 7f51fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f51ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5201: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5204: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5206: je 0x7f5220 */
  if (zf) goto L_7f5220;
L_7f5208: /* 7f5208: mov eax, dword ptr [edi + 0x1154] */
  eax = R32((uint32_t)(edi + 0x1154u));
/* 7f520e: xor edx, edx */
  edx = 0;
/* 7f5210: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5212: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f5215: mov dword ptr [edi + 0x1154], edx */
  W32((uint32_t)(edi + 0x1154u), edx);
/* 7f521b: jmp 0x7f4fc3 */
  goto L_7f4fc3;
L_7f5220: /* 7f5220: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7f5223: push 0xadedfc */
  { uint32_t v = 0xadedfcu; esp -= 4; W32(esp, v); }
/* 7f5228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5229: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f522bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f522b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f522e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5230: je 0x7f524a */
  if (zf) goto L_7f524a;
L_7f5232: /* 7f5232: mov eax, dword ptr [edi + 0x1150] */
  eax = R32((uint32_t)(edi + 0x1150u));
/* 7f5238: xor ecx, ecx */
  ecx = 0;
/* 7f523a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f523c: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f523f: mov dword ptr [edi + 0x1150], ecx */
  W32((uint32_t)(edi + 0x1150u), ecx);
/* 7f5245: jmp 0x7f4fc3 */
  goto L_7f4fc3;
L_7f524a: /* 7f524a: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7f524d: push 0xadee18 */
  { uint32_t v = 0xadee18u; esp -= 4; W32(esp, v); }
/* 7f5252: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5253: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5255: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5258: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f525a: je 0x7f5274 */
  if (zf) goto L_7f5274;
L_7f525c: /* 7f525c: mov ecx, dword ptr [edi + 0x1158] */
  ecx = R32((uint32_t)(edi + 0x1158u));
/* 7f5262: xor eax, eax */
  eax = 0;
/* 7f5264: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5266: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f5269: mov dword ptr [edi + 0x1158], eax */
  W32((uint32_t)(edi + 0x1158u), eax);
/* 7f526f: jmp 0x7f4fc3 */
  goto L_7f4fc3;
L_7f5274: /* 7f5274: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5277: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f5278: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5279: call 0x6c63a2 */
  esp -= 4; W32(esp, 0x7f527eu); SPILL(); f_6c63a2(); if (g_unwind) return; RELOAD();
/* 7f527e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5281: xor edx, edx */
  edx = 0;
/* 7f5283: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5285: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7f5288: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5289: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f528a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5291: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5292: mov eax, edx */
  eax = edx;
/* 7f5294: mov esp, ebp */
  esp = ebp;
/* 7f5296: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5297: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f529a(void) {
  LOAD_REGS();
L_7f529a: /* 7f529a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7f529d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f52a2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7f52a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f52a6: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7f52a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f52aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f52ae(); return;
}

void f_7f52ae(void) {
  LOAD_REGS();
L_7f52ae: /* 7f52ae: push 0xa11aa0 */
  { uint32_t v = 0xa11aa0u; esp -= 4; W32(esp, v); }
/* 7f52b3: push 0xadee38 */
  { uint32_t v = 0xadee38u; esp -= 4; W32(esp, v); }
/* 7f52b8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f52beu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f52be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f52c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f52c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f52c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f52cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f52ca: guest_badaddr(0x7f52ca); return;
}

void f_7f5440(void) {
  LOAD_REGS();
L_7f5440: /* 7f5440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f5441: mov ebp, esp */
  ebp = esp;
/* 7f5443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f5445: push 0x9d1607 */
  { uint32_t v = 0x9d1607u; esp -= 4; W32(esp, v); }
/* 7f544a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f5450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f5458: sub esp, 0x918 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x918u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f545e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f545f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5460: mov esi, dword ptr [0xcfa5b8] */
  esi = R32((uint32_t)(0xcfa5b8u));
/* 7f5466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5467: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f546a: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7f546d: push 0xadf35c */
  { uint32_t v = 0xadf35cu; esp -= 4; W32(esp, v); }
/* 7f5472: xor edi, edi */
  edi = 0;
/* 7f5474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5475: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f5478: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f547b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f547du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f547d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5480: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5482: je 0x7f54ad */
  if (zf) goto L_7f54ad;
L_7f5484: /* 7f5484: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f5487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5488: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7f548eu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7f548e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f5491: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5494: mov dword ptr [edx + 0xd0], eax */
  W32((uint32_t)(edx + 0xd0u), eax);
/* 7f549a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f549d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f54a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f54a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f54a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f54a7: mov esp, ebp */
  esp = ebp;
/* 7f54a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f54aa: ret 8 */
  esp += 12; SPILL(); return;
L_7f54ad: /* 7f54ad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f54b0: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 7f54b3: cmp dword ptr [ecx + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f54b6: je 0x7f55a2 */
  if (zf) goto L_7f55a2;
L_7f54bc: /* 7f54bc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f54bf: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f54c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f54c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f54c7: push 0xadf370 */
  { uint32_t v = 0xadf370u; esp -= 4; W32(esp, v); }
/* 7f54cc: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f54d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f54d2: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f54d8u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f54d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f54db: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7f54de: push 0xadf3a4 */
  { uint32_t v = 0xadf3a4u; esp -= 4; W32(esp, v); }
/* 7f54e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f54e4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f54e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f54e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f54e9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f54eb: je 0x7f5544 */
  if (zf) goto L_7f5544;
L_7f54ed: /* 7f54ed: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f54f0: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7f54f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7f54f6: cmp dword ptr [edx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f54f9: jne 0x7f5513 */
  if (!zf) goto L_7f5513;
L_7f54fb: /* 7f54fb: push 0x39f */
  { uint32_t v = 0x39fu; esp -= 4; W32(esp, v); }
/* 7f5500: push 0xadf3b4 */
  { uint32_t v = 0xadf3b4u; esp -= 4; W32(esp, v); }
/* 7f5505: push 0xadf3c0 */
  { uint32_t v = 0xadf3c0u; esp -= 4; W32(esp, v); }
/* 7f550a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f5510u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f5510: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f5513: /* 7f5513: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5516: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7f5519: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7f551c: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7f551f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f5521: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5523: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5524: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5525: push 0xadf3e0 */
  { uint32_t v = 0xadf3e0u; esp -= 4; W32(esp, v); }
/* 7f552a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f552b: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7f5531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5531: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5534: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f553b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f553c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f553d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f553e: mov esp, ebp */
  esp = ebp;
/* 7f5540: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5541: ret 8 */
  esp += 12; SPILL(); return;
L_7f5544: /* 7f5544: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7f5547: push 0xadf3f0 */
  { uint32_t v = 0xadf3f0u; esp -= 4; W32(esp, v); }
/* 7f554c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f554d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f554fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f554f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5552: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5554: je 0x7f5c66 */
  if (zf) goto L_7f5c66;
L_7f555a: /* 7f555a: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f5560: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f5562: push 0xadf400 */
  { uint32_t v = 0xadf400u; esp -= 4; W32(esp, v); }
/* 7f5567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5568: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f556eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f556e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5571: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 7f5574: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7f5577: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7f557a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7f557c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f557e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5583: push 0xadf458 */
  { uint32_t v = 0xadf458u; esp -= 4; W32(esp, v); }
/* 7f5588: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5589: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7f558fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f558f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5592: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5599: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f559a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f559b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f559c: mov esp, ebp */
  esp = ebp;
/* 7f559e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f559f: ret 8 */
  esp += 12; SPILL(); return;
L_7f55a2: /* 7f55a2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f55a5: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7f55ab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f55ad: mov ebx, dword ptr [0xcfa794] */
  ebx = R32((uint32_t)(0xcfa794u));
/* 7f55b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f55b4: push 0xadf468 */
  { uint32_t v = 0xadf468u; esp -= 4; W32(esp, v); }
/* 7f55b9: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f55be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f55bf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f55c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f55c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f55c4: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7f55c7: push 0xadf49c */
  { uint32_t v = 0xadf49cu; esp -= 4; W32(esp, v); }
/* 7f55cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f55cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f55cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f55cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f55d2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f55d4: je 0x7f56e0 */
  if (zf) goto L_7f56e0;
L_7f55da: /* 7f55da: mov esi, dword ptr [0xcfaa54] */
  esi = R32((uint32_t)(0xcfaa54u));
/* 7f55e0: mov eax, 0xdb */
  eax = 0xdbu;
/* 7f55e5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f55e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f55e9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f55ec: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f55ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f55f2: push 0xadf4a8 */
  { uint32_t v = 0xadf4a8u; esp -= 4; W32(esp, v); }
/* 7f55f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f55f8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f55fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f55fa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f55fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5600: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f5603: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5604: push 0xadf4b8 */
  { uint32_t v = 0xadf4b8u; esp -= 4; W32(esp, v); }
/* 7f5609: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f560a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f560cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f560c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f560f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5612: cmp eax, 0x7d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7d0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f5617: jl 0x7f56bc */
  if ((sf != of)) goto L_7f56bc;
L_7f561d: /* 7f561d: cmp dword ptr [ebp - 0x1c], 0x8b2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x8b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f5624: jg 0x7f56bc */
  if ((!zf && sf == of)) goto L_7f56bc;
L_7f562a: /* 7f562a: cmp eax, 0x8b2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f562f: jle 0x7f5636 */
  if ((zf || sf != of)) goto L_7f5636;
L_7f5631: /* 7f5631: mov eax, 0x8b2 */
  eax = 0x8b2u;
L_7f5636: /* 7f5636: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5639: mov dword ptr [ecx + 0xcc], eax */
  W32((uint32_t)(ecx + 0xccu), eax);
/* 7f563f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5642: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7f5645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5646: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f564bu); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f564b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f564e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7f5651: mov esi, dword ptr [eax + 0x180] */
  esi = R32((uint32_t)(eax + 0x180u));
/* 7f5657: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f5659: mov eax, dword ptr [eax + 0x508] */
  eax = R32((uint32_t)(eax + 0x508u));
/* 7f565f: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7f5665: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7f5668: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f566b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f566e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f5670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f5673: mov dword ptr [edx + 0xc8], eax */
  W32((uint32_t)(edx + 0xc8u), eax);
/* 7f5679: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f567c: mov edx, dword ptr [eax + 0xcc] */
  edx = R32((uint32_t)(eax + 0xccu));
/* 7f5682: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5683: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5684: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 7f568a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f568b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f568c: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f568f: push 0xadf4f8 */
  { uint32_t v = 0xadf4f8u; esp -= 4; W32(esp, v); }
/* 7f5694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5695: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f569bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f569b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f569e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f56a0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f56a3: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x7f56a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f56a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f56ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f56b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f56b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f56b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f56b6: mov esp, ebp */
  esp = ebp;
/* 7f56b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f56b9: ret 8 */
  esp += 12; SPILL(); return;
L_7f56bc: /* 7f56bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f56bf: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* 7f56c4: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 7f56c9: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f56cc: push 0xadf4c4 */
  { uint32_t v = 0xadf4c4u; esp -= 4; W32(esp, v); }
/* 7f56d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f56d2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f56d8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f56d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f56db: jmp 0x7f5b58 */
  goto L_7f5b58;
L_7f56e0: /* 7f56e0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7f56e3: push 0xadf554 */
  { uint32_t v = 0xadf554u; esp -= 4; W32(esp, v); }
/* 7f56e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f56e9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f56ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f56eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f56ee: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f56f0: je 0x7f5733 */
  if (zf) goto L_7f5733;
L_7f56f2: /* 7f56f2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f56f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f56f6: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7f56fcu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7f56fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f56ff: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 7f5702: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 7f5705: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5708: cmp eax, 0x708 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f570d: jge 0x7f5716 */
  if ((sf == of)) goto L_7f5716;
L_7f570f: /* 7f570f: mov eax, 0x708 */
  eax = 0x708u;
/* 7f5714: jmp 0x7f571c */
  goto L_7f571c;
L_7f5716: /* 7f5716: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f5718: jl 0x7f571c */
  if ((sf != of)) goto L_7f571c;
L_7f571a: /* 7f571a: mov eax, ecx */
  eax = ecx;
L_7f571c: /* 7f571c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f571f: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 7f5722: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f5725: mov eax, dword ptr [edx + 0x44] */
  eax = R32((uint32_t)(edx + 0x44u));
/* 7f5728: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5729: push 0xadf568 */
  { uint32_t v = 0xadf568u; esp -= 4; W32(esp, v); }
/* 7f572e: jmp 0x7f5deb */
  goto L_7f5deb;
L_7f5733: /* 7f5733: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7f5736: push 0xadf594 */
  { uint32_t v = 0xadf594u; esp -= 4; W32(esp, v); }
/* 7f573b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f573c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f573eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f573e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5741: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5743: je 0x7f57c6 */
  if (zf) goto L_7f57c6;
L_7f5749: /* 7f5749: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f574a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f574b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f574c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f574d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f5750: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x7f5756u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 7f5756: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f5759: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f575c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f575d: push 0xadf5a0 */
  { uint32_t v = 0xadf5a0u; esp -= 4; W32(esp, v); }
/* 7f5762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5763: call dword ptr [0xcfaaa8] */
  esp -= 4; W32(esp, 0x7f5769u); SPILL(); f_4e3f35(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFGuid@@@Z */ RELOAD();
/* 7f5769: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f576c: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 7f5772: mov ebx, dword ptr [0xcfaa54] */
  ebx = R32((uint32_t)(0xcfaa54u));
/* 7f5778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f577b: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f577e: mov edi, edi */
  edi = edi;
L_7f5780: /* 7f5780: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f5783: jge 0x7f5c66 */
  if ((sf == of)) goto L_7f5c66;
L_7f5789: /* 7f5789: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f578b: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 7f578e: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 7f5791: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 7f5794: cmp ecx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5797: jne 0x7f57c3 */
  if (!zf) goto L_7f57c3;
L_7f5799: /* 7f5799: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 7f579c: cmp edx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f579f: jne 0x7f57c3 */
  if (!zf) goto L_7f57c3;
L_7f57a1: /* 7f57a1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 7f57a4: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f57a7: jne 0x7f57c3 */
  if (!zf) goto L_7f57c3;
L_7f57a9: /* 7f57a9: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 7f57ac: cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f57af: jne 0x7f57c3 */
  if (!zf) goto L_7f57c3;
L_7f57b1: /* 7f57b1: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f57b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f57b5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f57b8: push 0xadf5ac */
  { uint32_t v = 0xadf5acu; esp -= 4; W32(esp, v); }
/* 7f57bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f57be: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f57c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f57c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f57c3: /* 7f57c3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f57c4: jmp 0x7f5780 */
  goto L_7f5780;
L_7f57c6: /* 7f57c6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7f57c9: push 0xadf5b8 */
  { uint32_t v = 0xadf5b8u; esp -= 4; W32(esp, v); }
/* 7f57ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f57cf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f57d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f57d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f57d4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f57d6: je 0x7f5881 */
  if (zf) goto L_7f5881;
L_7f57dc: /* 7f57dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f57dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f57de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f57df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f57e0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f57e3: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x7f57e9u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 7f57e9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f57ec: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f57ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f57f0: push 0xadf5c4 */
  { uint32_t v = 0xadf5c4u; esp -= 4; W32(esp, v); }
/* 7f57f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f57f6: call dword ptr [0xcfaaa8] */
  esp -= 4; W32(esp, 0x7f57fcu); SPILL(); f_4e3f35(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFGuid@@@Z */ RELOAD();
/* 7f57fc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f57ff: mov ebx, dword ptr [ecx + 0xb4] */
  ebx = R32((uint32_t)(ecx + 0xb4u));
/* 7f5805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5808: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f580a: je 0x7f5c66 */
  if (zf) goto L_7f5c66;
L_7f5810: /* 7f5810: xor esi, esi */
  esi = 0;
L_7f5812: /* 7f5812: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f5815: jge 0x7f5c66 */
  if ((sf == of)) goto L_7f5c66;
L_7f581b: /* 7f581b: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 7f581e: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* 7f5821: lea edi, [eax + edx*8] */
  edi = (uint32_t)(eax + edx*8);
/* 7f5824: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f5827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5828: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 7f582b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f582c: call 0x6c3b07 */
  esp -= 4; W32(esp, 0x7f5831u); SPILL(); f_6c3b07(); if (g_unwind) return; RELOAD();
/* 7f5831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5836: je 0x7f587e */
  if (zf) goto L_7f587e;
L_7f5838: /* 7f5838: mov ecx, edi */
  ecx = edi;
/* 7f583a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5840u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5841: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f5846: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f5848: push 0xadf5d0 */
  { uint32_t v = 0xadf5d0u; esp -= 4; W32(esp, v); }
/* 7f584d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f584e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f5854u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f5854: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f5857: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 7f585d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5860: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f5862: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5863: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5866: call 0x6c5745 */
  esp -= 4; W32(esp, 0x7f586bu); SPILL(); f_6c5745(); if (g_unwind) return; RELOAD();
/* 7f586b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f586e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5875: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5877: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5878: mov esp, ebp */
  esp = ebp;
/* 7f587a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f587b: ret 8 */
  esp += 12; SPILL(); return;
L_7f587e: /* 7f587e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f587f: jmp 0x7f5812 */
  goto L_7f5812;
L_7f5881: /* 7f5881: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7f5884: push 0xadf60c */
  { uint32_t v = 0xadf60cu; esp -= 4; W32(esp, v); }
/* 7f5889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f588a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f588cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f588c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f588f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5891: je 0x7f5b80 */
  if (zf) goto L_7f5b80;
L_7f5897: /* 7f5897: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f589a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f589d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f589e: push 0xadf618 */
  { uint32_t v = 0xadf618u; esp -= 4; W32(esp, v); }
/* 7f58a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f58a4: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7f58a7: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x7f58adu); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 7f58ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f58b0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f58b2: je 0x7f5b05 */
  if (zf) goto L_7f5b05;
L_7f58b8: /* 7f58b8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f58bb: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7f58be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f58c1: mov eax, dword ptr [eax + 0xc8] */
  eax = R32((uint32_t)(eax + 0xc8u));
/* 7f58c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f58c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f58ca: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7f58d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f58d0: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f58d3: jne 0x7f5b05 */
  if (!zf) goto L_7f5b05;
L_7f58d9: /* 7f58d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f58dc: mov dword ptr [ecx + 0x120], 1 */
  W32((uint32_t)(ecx + 0x120u), 0x1u);
/* 7f58e6: mov dx, word ptr [0xb847cc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb847ccu))) & 0xffffu);
/* 7f58ed: mov word ptr [ebp - 0x924], dx */
  W16((uint32_t)(ebp + 0xfffff6dcu), (edx & 0xffffu));
/* 7f58f4: xor eax, eax */
  eax = 0;
/* 7f58f6: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7f58fb: lea edi, [ebp - 0x922] */
  edi = (uint32_t)(ebp + 0xfffff6deu);
/* 7f5901: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7f5903: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5906: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7f5908: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f590eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f590e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5911: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f5915: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f591bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f591b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f591e: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7f5923: lea eax, [ebp - 0x924] */
  eax = (uint32_t)(ebp + 0xfffff6dcu);
/* 7f5929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f592a: push 0xadf688 */
  { uint32_t v = 0xadf688u; esp -= 4; W32(esp, v); }
/* 7f592f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5930: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f5934: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7f593au); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7f593a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f593d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5940: lea edx, [ebp - 0x924] */
  edx = (uint32_t)(ebp + 0xfffff6dcu);
/* 7f5946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5947: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f594d: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7f5953u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7f5953: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5956: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f595c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5962u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5963: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f5968: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f596a: push 0xadf694 */
  { uint32_t v = 0xadf694u; esp -= 4; W32(esp, v); }
/* 7f596f: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5974: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5975: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f5977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5977: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f597a: lea ecx, [ebp - 0x924] */
  ecx = (uint32_t)(ebp + 0xfffff6dcu);
L_7f5980: /* 7f5980: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 7f5983: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5986: je 0x7f5993 */
  if (zf) goto L_7f5993;
L_7f5988: /* 7f5988: cmp ax, 0x3f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7f598c: je 0x7f5993 */
  if (zf) goto L_7f5993;
L_7f598e: /* 7f598e: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5991: jmp 0x7f5980 */
  goto L_7f5980;
L_7f5993: /* 7f5993: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5994: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7f5997: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7f599du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7f599d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f59a0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f59a2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7f59a5: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 7f59a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f59a8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7f59ab: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7f59aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f59ae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f59b1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7f59b4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f59b6: mov ecx, dword ptr [ecx + 0x508] */
  ecx = R32((uint32_t)(ecx + 0x508u));
/* 7f59bc: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f59bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f59c0: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f59c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f59c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f59c5: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7f59c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f59c9: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f59cd: call 0x6c3990 */
  esp -= 4; W32(esp, 0x7f59d2u); SPILL(); f_6c3990(); if (g_unwind) return; RELOAD();
/* 7f59d2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7f59d5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7f59d8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f59deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f59de: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7f59e1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f59e5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f59ebu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f59eb: push 0xb847d0 */
  { uint32_t v = 0xb847d0u; esp -= 4; W32(esp, v); }
/* 7f59f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f59f3: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7f59f9u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7f59f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f59fb: je 0x7f5ac0 */
  if (zf) goto L_7f5ac0;
L_7f5a01: /* 7f5a01: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5a04: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5a0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5a0a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5a0d: mov esi, eax */
  esi = eax;
/* 7f5a0f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5a15u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5a15: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f5a1b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5a1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5a1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5a1f: push 0xadf6b8 */
  { uint32_t v = 0xadf6b8u; esp -= 4; W32(esp, v); }
/* 7f5a24: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5a29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5a2a: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f5a30u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f5a30: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5a33: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5a36: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5a3cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5a3c: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7f5a42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5a43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5a46: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f5a49: push 0xadf6ec */
  { uint32_t v = 0xadf6ecu; esp -= 4; W32(esp, v); }
/* 7f5a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5a4f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5a51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5a51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5a54: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5a57: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5a5du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5a5d: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5a61: je 0x7f5a7e */
  if (zf) goto L_7f5a7e;
L_7f5a63: /* 7f5a63: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5a66: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5a6cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5a6c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5a6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5a70: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5a73: push 0xadf704 */
  { uint32_t v = 0xadf704u; esp -= 4; W32(esp, v); }
/* 7f5a78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5a79: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5a7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5a7b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f5a7e: /* 7f5a7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5a81: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5a83: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f5a89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5a89: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5a8c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5a8f: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
/* 7f5a96: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f5a9a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5aa0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5aa0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5aa3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f5aa7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5aadu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5aad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5ab0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5ab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5aba: mov esp, ebp */
  esp = ebp;
/* 7f5abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5abd: ret 8 */
  esp += 12; SPILL(); return;
L_7f5ac0: /* 7f5ac0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5ac3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5ac6: mov edx, dword ptr [ecx - 0x28] */
  edx = R32((uint32_t)(ecx + 0xffffffd8u));
/* 7f5ac9: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5acc: push 0xb847d4 */
  { uint32_t v = 0xb847d4u; esp -= 4; W32(esp, v); }
/* 7f5ad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5ad2: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0x7f5ad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5ad8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7f5adb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f5adf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5ae5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5ae5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5ae8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f5aec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5af2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5af2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5af5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5afc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5afd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5afe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5aff: mov esp, ebp */
  esp = ebp;
/* 7f5b01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5b02: ret 8 */
  esp += 12; SPILL(); return;
L_7f5b05: /* 7f5b05: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5b08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5b0a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7f5b0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5b0e: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7f5b11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5b11: mov ecx, eax */
  ecx = eax;
/* 7f5b13: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f5b17: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5b1du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5b1d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f5b23: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5b26: push 0xadf62c */
  { uint32_t v = 0xadf62cu; esp -= 4; W32(esp, v); }
/* 7f5b2b: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5b30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5b31: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f5b33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5b33: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5b36: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7f5b39: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f5b3d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5b43u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5b43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5b46: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f5b49: push 0xadf664 */
  { uint32_t v = 0xadf664u; esp -= 4; W32(esp, v); }
/* 7f5b4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5b4f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f5b55u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f5b55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f5b58: /* 7f5b58: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5b5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5b5d: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f5b63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5b63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5b66: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
/* 7f5b6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5b70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5b77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5b78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5b79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5b7a: mov esp, ebp */
  esp = ebp;
/* 7f5b7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5b7d: ret 8 */
  esp += 12; SPILL(); return;
L_7f5b80: /* 7f5b80: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7f5b83: push 0xadf71c */
  { uint32_t v = 0xadf71cu; esp -= 4; W32(esp, v); }
/* 7f5b88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5b89: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5b8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5b8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5b8e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5b90: je 0x7f5dd0 */
  if (zf) goto L_7f5dd0;
L_7f5b96: /* 7f5b96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5b99: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5b9c: jne 0x7f5dd0 */
  if (!zf) goto L_7f5dd0;
L_7f5ba2: /* 7f5ba2: lea ecx, [eax + 0xd4] */
  ecx = (uint32_t)(eax + 0xd4u);
/* 7f5ba8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5baeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5bae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5baf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5bb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5bb1: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7f5bb7: call 0x6c440d */
  esp -= 4; W32(esp, 0x7f5bbcu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7f5bbc: push 0xb847dc */
  { uint32_t v = 0xb847dcu; esp -= 4; W32(esp, v); }
/* 7f5bc1: push 0xadf728 */
  { uint32_t v = 0xadf728u; esp -= 4; W32(esp, v); }
/* 7f5bc6: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7f5bcc: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f5bd0: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7f5bd5u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7f5bd5: push 0xb847d8 */
  { uint32_t v = 0xb847d8u; esp -= 4; W32(esp, v); }
/* 7f5bda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5bdb: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7f5be1u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7f5be1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5be4: mov esi, eax */
  esi = eax;
/* 7f5be6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7f5be9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5bec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5bed: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f5bf2u); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f5bf2: mov ecx, dword ptr [eax + 0x180] */
  ecx = R32((uint32_t)(eax + 0x180u));
/* 7f5bf8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5bfb: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5bfd: je 0x7f5c79 */
  if (zf) goto L_7f5c79;
L_7f5bff: /* 7f5bff: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5c01: jne 0x7f5c79 */
  if (!zf) goto L_7f5c79;
L_7f5c03: /* 7f5c03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5c06: mov ecx, dword ptr [eax + 0x3f04] */
  ecx = R32((uint32_t)(eax + 0x3f04u));
/* 7f5c0c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5c0e: je 0x7f5c18 */
  if (zf) goto L_7f5c18;
L_7f5c10: /* 7f5c10: cmp ecx, dword ptr [eax + 0x3f00] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3f00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5c16: je 0x7f5c7c */
  if (zf) goto L_7f5c7c;
L_7f5c18: /* 7f5c18: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f5c1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5c20: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7f5c26: push 0xadf748 */
  { uint32_t v = 0xadf748u; esp -= 4; W32(esp, v); }
/* 7f5c2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5c2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5c2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5c2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5c31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5c34: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f5c37: push 0xadf764 */
  { uint32_t v = 0xadf764u; esp -= 4; W32(esp, v); }
/* 7f5c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5c3d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5c3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5c3f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5c42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5c44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5c47: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f5c4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5c4d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5c50: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_7f5c57: /* 7f5c57: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
L_7f5c5d: /* 7f5c5d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f5c61: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7f5c66u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
L_7f5c66: /* 7f5c66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5c69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5c70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5c71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5c72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5c73: mov esp, ebp */
  esp = ebp;
/* 7f5c75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5c76: ret 8 */
  esp += 12; SPILL(); return;
L_7f5c79: /* 7f5c79: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7f5c7c: /* 7f5c7c: mov dword ptr [eax + 0x3efc], 1 */
  W32((uint32_t)(eax + 0x3efcu), 0x1u);
/* 7f5c86: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5c89: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 7f5c8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5c91: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f5c97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5c97: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5c9a: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7f5ca0u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7f5ca0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5ca3: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5ca9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f5cad: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5cb3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5cb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5cb4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f5cb9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f5cbb: push 0xadf770 */
  { uint32_t v = 0xadf770u; esp -= 4; W32(esp, v); }
/* 7f5cc0: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5cc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5cc6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f5cc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5cc8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5ccb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5cce: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5cd4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5cdau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5cda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5cdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5cdd: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 7f5ce3: call 0x6c440d */
  esp -= 4; W32(esp, 0x7f5ce8u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7f5ce8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5ceb: mov edx, dword ptr [ecx - 0x28] */
  edx = R32((uint32_t)(ecx + 0xffffffd8u));
/* 7f5cee: lea esi, [ebp - 0x28] */
  esi = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5cf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f5cf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5cf3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5cf6: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5cf9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 7f5cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5cfc: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7f5d00: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x7f5d06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5d06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5d08: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 7f5d0e: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f5d11: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f5d15: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7f5d1au); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7f5d1a: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f5d1c: je 0x7f5d8a */
  if (zf) goto L_7f5d8a;
L_7f5d1e: /* 7f5d1e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5d21: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5d27u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5d27: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f5d2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5d30: push 0xadf794 */
  { uint32_t v = 0xadf794u; esp -= 4; W32(esp, v); }
/* 7f5d35: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5d3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5d3b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f5d41u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f5d41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5d44: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5d47: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5d4du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5d4e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5d51: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f5d54: push 0xadf7b8 */
  { uint32_t v = 0xadf7b8u; esp -= 4; W32(esp, v); }
/* 7f5d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5d5a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f5d60u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f5d60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5d63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5d65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5d68: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f5d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5d6e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5d71: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5d74: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
/* 7f5d7b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f5d7f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5d85u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5d85: jmp 0x7f5c57 */
  goto L_7f5c57;
L_7f5d8a: /* 7f5d8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5d8d: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7f5d90: mov ecx, dword ptr [edx + 0x448] */
  ecx = R32((uint32_t)(edx + 0x448u));
/* 7f5d96: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5d9c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5da2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5da2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5da3: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7f5da8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f5daa: push 0xadf7d0 */
  { uint32_t v = 0xadf7d0u; esp -= 4; W32(esp, v); }
/* 7f5daf: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 7f5db4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5db5: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7f5dbbu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7f5dbb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5dbe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f5dc1: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f5dc5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7f5dcbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7f5dcb: jmp 0x7f5c57 */
  goto L_7f5c57;
L_7f5dd0: /* 7f5dd0: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7f5dd3: push 0xadf7f8 */
  { uint32_t v = 0xadf7f8u; esp -= 4; W32(esp, v); }
/* 7f5dd8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5dd9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5ddbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5ddb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5dde: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5de0: je 0x7f5e10 */
  if (zf) goto L_7f5e10;
L_7f5de2: /* 7f5de2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f5de5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5de6: push 0xadf808 */
  { uint32_t v = 0xadf808u; esp -= 4; W32(esp, v); }
L_7f5deb: /* 7f5deb: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7f5df1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f5df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5df4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7f5dfau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7f5dfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5dfd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5e00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5e07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5e08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5e09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5e0a: mov esp, ebp */
  esp = ebp;
/* 7f5e0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5e0d: ret 8 */
  esp += 12; SPILL(); return;
L_7f5e10: /* 7f5e10: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7f5e13: push 0xadf830 */
  { uint32_t v = 0xadf830u; esp -= 4; W32(esp, v); }
/* 7f5e18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5e19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5e1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5e1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5e1e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5e20: je 0x7f5e54 */
  if (zf) goto L_7f5e54;
L_7f5e22: /* 7f5e22: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f5e25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5e26: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7f5e2cu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7f5e2c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f5e2f: mov dword ptr [edx + 0x3f00], edi */
  W32((uint32_t)(edx + 0x3f00u), edi);
/* 7f5e35: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5e38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5e3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f5e3c: mov dword ptr [ecx + 0x3f04], eax */
  W32((uint32_t)(ecx + 0x3f04u), eax);
/* 7f5e42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f5e45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f5e46: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f5e4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f5e4e: mov esp, ebp */
  esp = ebp;
/* 7f5e50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f5e51: ret 8 */
  esp += 12; SPILL(); return;
L_7f5e54: /* 7f5e54: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7f5e57: push 0xadf848 */
  { uint32_t v = 0xadf848u; esp -= 4; W32(esp, v); }
/* 7f5e5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5e5d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5e5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5e5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5e62: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5e64: je 0x7f5c66 */
  if (zf) goto L_7f5c66;
L_7f5e6a: /* 7f5e6a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f5e6d: add ecx, 0xd4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5e73: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f5e79u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f5e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5e7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f5e7c: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 7f5e82: call 0x6c440d */
  esp -= 4; W32(esp, 0x7f5e87u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7f5e87: push 0xb847e4 */
  { uint32_t v = 0xb847e4u; esp -= 4; W32(esp, v); }
/* 7f5e8c: push 0xadf85c */
  { uint32_t v = 0xadf85cu; esp -= 4; W32(esp, v); }
/* 7f5e91: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 7f5e97: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7f5e9b: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7f5ea0u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7f5ea0: push 0xb847e0 */
  { uint32_t v = 0xb847e0u; esp -= 4; W32(esp, v); }
/* 7f5ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5ea6: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7f5eacu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7f5eac: mov esi, eax */
  esi = eax;
/* 7f5eae: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5eb1: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7f5eb4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5eb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5eb8: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f5ebdu); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f5ebd: mov ecx, dword ptr [eax + 0x180] */
  ecx = R32((uint32_t)(eax + 0x180u));
/* 7f5ec3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5ec6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5ec8: je 0x7f5f28 */
  if (zf) goto L_7f5f28;
L_7f5eca: /* 7f5eca: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f5ecc: jne 0x7f5f28 */
  if (!zf) goto L_7f5f28;
L_7f5ece: /* 7f5ece: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f5ed1: mov esi, dword ptr [0xcfa5a4] */
  esi = R32((uint32_t)(0xcfa5a4u));
/* 7f5ed7: push 0x21 */
  { uint32_t v = 0x21u; esp -= 4; W32(esp, v); }
/* 7f5ed9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5eda: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7f5ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5ee1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5ee3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7f5ee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5ee9: push 0x21 */
  { uint32_t v = 0x21u; esp -= 4; W32(esp, v); }
/* 7f5eeb: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f5eee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5eef: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 7f5ef5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5ef6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f5ef8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f5ef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f5efb: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7f5efe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5f01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5f02: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7f5f07u); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7f5f07: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5f0a: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 7f5f10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f5f11: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7f5f17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f5f18: mov ecx, eax */
  ecx = eax;
/* 7f5f1a: call 0x6c64b5 */
  esp -= 4; W32(esp, 0x7f5f1fu); SPILL(); f_6c64b5(); if (g_unwind) return; RELOAD();
/* 7f5f1f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f5f22: inc dword ptr [eax + 0x3f00] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3f00u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x3f00u), r);
  }
L_7f5f28: /* 7f5f28: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 7f5f2e: jmp 0x7f5c5d */
  goto L_7f5c5d;
}

void f_7f5f33(void) {
  LOAD_REGS();
L_7f5f33: /* 7f5f33: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7f5f36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f5f3b: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 7f5f3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f5f3f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7f5f42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f5f47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f5f47(); return;
}

void f_7f5f47(void) {
  LOAD_REGS();
L_7f5f47: /* 7f5f47: push 0xa11ac0 */
  { uint32_t v = 0xa11ac0u; esp -= 4; W32(esp, v); }
/* 7f5f4c: push 0xadf87c */
  { uint32_t v = 0xadf87cu; esp -= 4; W32(esp, v); }
/* 7f5f51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f5f57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f5f57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f5f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f5f5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f5f5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f5f63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f5f63: guest_badaddr(0x7f5f63); return;
}

void f_7f6240(void) {
  LOAD_REGS();
L_7f6240: /* 7f6240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6241: mov ebp, esp */
  ebp = esp;
/* 7f6243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f6245: push 0x9d16f2 */
  { uint32_t v = 0x9d16f2u; esp -= 4; W32(esp, v); }
/* 7f624a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f6250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f6258: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f625b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f625c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f625d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f625e: mov esi, ecx */
  esi = ecx;
/* 7f6260: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f6263: xor ebx, ebx */
  ebx = 0;
/* 7f6265: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6266: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7f6269: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7f626c: call 0x6c321a */
  esp -= 4; W32(esp, 0x7f6271u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 7f6271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6272: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f6275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6276: mov ecx, esi */
  ecx = esi;
/* 7f6278: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f627b: call 0x6c2eff */
  esp -= 4; W32(esp, 0x7f6280u); SPILL(); f_6c2eff(); if (g_unwind) return; RELOAD();
/* 7f6280: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7f6283: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f6287: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7f628cu); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7f628c: lea edi, [esi + 0xd8] */
  edi = (uint32_t)(esi + 0xd8u);
/* 7f6292: mov ecx, edi */
  ecx = edi;
/* 7f6294: mov dword ptr [esi], 0xa06218 */
  W32((uint32_t)(esi), 0xa06218u);
/* 7f629a: mov dword ptr [esi + 0x28], 0xa061f0 */
  W32((uint32_t)(esi + 0x28u), 0xa061f0u);
/* 7f62a1: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7f62a4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f62aau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f62aa: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 7f62ad: mov ebx, 8 */
  ebx = 0x8u;
/* 7f62b2: mov ecx, edi */
  ecx = edi;
/* 7f62b4: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f62b8: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 7f62bb: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7f62c0u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7f62c0: lea ecx, [esi + 0x1110] */
  ecx = (uint32_t)(esi + 0x1110u);
/* 7f62c6: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7f62ca: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f62d0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f62d0: lea ecx, [esi + 0x111c] */
  ecx = (uint32_t)(esi + 0x111cu);
/* 7f62d6: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f62da: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f62e0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f62e0: lea ecx, [esi + 0x1128] */
  ecx = (uint32_t)(esi + 0x1128u);
/* 7f62e6: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f62ea: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f62f0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f62f0: lea ecx, [esi + 0x1134] */
  ecx = (uint32_t)(esi + 0x1134u);
/* 7f62f6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f62fa: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f6300u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f6300: lea ecx, [esi + 0x1140] */
  ecx = (uint32_t)(esi + 0x1140u);
/* 7f6306: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7f6309: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f630fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f630f: lea ecx, [esi + 0x116c] */
  ecx = (uint32_t)(esi + 0x116cu);
/* 7f6315: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7f6319: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f631fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f631f: lea ecx, [esi + 0x1178] */
  ecx = (uint32_t)(esi + 0x1178u);
/* 7f6325: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7f6329: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f632fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f632f: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 7f6335: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7f6339: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f633fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f633f: lea edi, [esi + 0x1190] */
  edi = (uint32_t)(esi + 0x1190u);
/* 7f6345: mov ecx, edi */
  ecx = edi;
/* 7f6347: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7f634b: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7f634e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f6354u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f6354: mov ecx, edi */
  ecx = edi;
/* 7f6356: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7f635a: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 7f6361: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 7f6364: call 0x6c3fda */
  esp -= 4; W32(esp, 0x7f6369u); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 7f6369: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7f636d: lea edi, [esi + 0x11a4] */
  edi = (uint32_t)(esi + 0x11a4u);
/* 7f6373: mov ecx, edi */
  ecx = edi;
/* 7f6375: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7f6378: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f637eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f637e: mov ecx, edi */
  ecx = edi;
/* 7f6380: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7f6384: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 7f638b: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 7f638e: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x7f6393u); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 7f6393: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f6395: mov ecx, esi */
  ecx = esi;
/* 7f6397: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7f639b: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7f63a1u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f63a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63a3: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7f63a6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f63acu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f63ac: mov ecx, esi */
  ecx = esi;
/* 7f63ae: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f63b4u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f63b4: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f63ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f63bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7f63bf: mov ebx, dword ptr [0xcfa1e4] */
  ebx = R32((uint32_t)(0xcfa1e4u));
/* 7f63c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f63ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f63cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f63d0: push 0xb91be8 */
  { uint32_t v = 0xb91be8u; esp -= 4; W32(esp, v); }
/* 7f63d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f63d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f63d7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f63da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f63dc: je 0x7f63ef */
  if (zf) goto L_7f63ef;
L_7f63de: /* 7f63de: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f63e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f63e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f63e4: mov ecx, eax */
  ecx = eax;
/* 7f63e6: call 0x6c6ca8 */
  esp -= 4; W32(esp, 0x7f63ebu); SPILL(); f_6c6ca8(); if (g_unwind) return; RELOAD();
/* 7f63eb: mov ecx, eax */
  ecx = eax;
/* 7f63ed: jmp 0x7f63f1 */
  goto L_7f63f1;
L_7f63ef: /* 7f63ef: xor ecx, ecx */
  ecx = 0;
L_7f63f1: /* 7f63f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f63f3: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 7f63f9: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7f63ffu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f63ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6403: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6405: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f640b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f640d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f640f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7f6412: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7f6419: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7f6420: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7f6427: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7f642du); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7f642d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f642f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f6432: mov ecx, esp */
  ecx = esp;
/* 7f6434: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f6436: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7f6439: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f643c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f643f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7f6442: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7f6445: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7f6448: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f644b: mov ecx, esp */
  ecx = esp;
/* 7f644d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f644f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f6452: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7f6455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6456: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7f6459: mov ecx, esp */
  ecx = esp;
/* 7f645b: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7f645e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6460: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f6466u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f6466: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 7f646b: mov ecx, esi */
  ecx = esi;
/* 7f646d: call 0x6c7810 */
  esp -= 4; W32(esp, 0x7f6472u); SPILL(); f_6c7810(); if (g_unwind) return; RELOAD();
/* 7f6472: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f6475: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f6478: jne 0x7f648f */
  if (!zf) goto L_7f648f;
L_7f647a: /* 7f647a: push 0x63 */
  { uint32_t v = 0x63u; esp -= 4; W32(esp, v); }
/* 7f647c: push 0xadea60 */
  { uint32_t v = 0xadea60u; esp -= 4; W32(esp, v); }
/* 7f6481: push 0xadea6c */
  { uint32_t v = 0xadea6cu; esp -= 4; W32(esp, v); }
/* 7f6486: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f648cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f648c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f648f: /* 7f648f: mov ecx, esi */
  ecx = esi;
/* 7f6491: call 0x6c2cfc */
  esp -= 4; W32(esp, 0x7f6496u); SPILL(); f_6c2cfc(); if (g_unwind) return; RELOAD();
/* 7f6496: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7f6499: mov edi, eax */
  edi = eax;
/* 7f649b: cmp edi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f649e: je 0x7f64b5 */
  if (zf) goto L_7f64b5;
L_7f64a0: /* 7f64a0: push 0x67 */
  { uint32_t v = 0x67u; esp -= 4; W32(esp, v); }
/* 7f64a2: push 0xadea7c */
  { uint32_t v = 0xadea7cu; esp -= 4; W32(esp, v); }
/* 7f64a7: push 0xadea88 */
  { uint32_t v = 0xadea88u; esp -= 4; W32(esp, v); }
/* 7f64ac: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f64b2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f64b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f64b5: /* 7f64b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f64b7: push 0xadea98 */
  { uint32_t v = 0xadea98u; esp -= 4; W32(esp, v); }
/* 7f64bc: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7f64bf: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7f64c5u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7f64c5: mov ecx, esi */
  ecx = esi;
/* 7f64c7: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f64cdu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f64cd: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7f64d3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f64d5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f64d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f64da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f64dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f64dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f64df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f64e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f64e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f64e3: push 0xb91be8 */
  { uint32_t v = 0xb91be8u; esp -= 4; W32(esp, v); }
/* 7f64e8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f64eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f64ea: xor ebx, ebx */
  ebx = 0;
/* 7f64ec: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f64ef: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f64f1: je 0x7f64ff */
  if (zf) goto L_7f64ff;
L_7f64f3: /* 7f64f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f64f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f64f6: mov ecx, eax */
  ecx = eax;
/* 7f64f8: call 0x6c6ca8 */
  esp -= 4; W32(esp, 0x7f64fdu); SPILL(); f_6c6ca8(); if (g_unwind) return; RELOAD();
/* 7f64fd: jmp 0x7f6501 */
  goto L_7f6501;
L_7f64ff: /* 7f64ff: xor eax, eax */
  eax = 0;
L_7f6501: /* 7f6501: push 0x300001 */
  { uint32_t v = 0x300001u; esp -= 4; W32(esp, v); }
/* 7f6506: mov ecx, edi */
  ecx = edi;
/* 7f6508: mov dword ptr [edi + 0x280], eax */
  W32((uint32_t)(edi + 0x280u), eax);
/* 7f650e: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7f6514u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f6514: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* 7f651a: push 0x300001 */
  { uint32_t v = 0x300001u; esp -= 4; W32(esp, v); }
/* 7f651f: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7f6525u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7f6525: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7f6528: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f652a: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7f652fu); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7f652f: mov dword ptr [esi + 0x100], ebx */
  W32((uint32_t)(esi + 0x100u), ebx);
/* 7f6535: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7f653b: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7f653d: mov edx, dword ptr [0xcfaaac] */
  edx = R32((uint32_t)(0xcfaaacu));
/* 7f6543: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f6546: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7f6548: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7f654e: mov dword ptr [esi + 0x1160], ebx */
  W32((uint32_t)(esi + 0x1160u), ebx);
/* 7f6554: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
/* 7f655a: mov dword ptr [esi + 0x1168], ebx */
  W32((uint32_t)(esi + 0x1168u), ebx);
/* 7f6560: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f6561: mov eax, esi */
  eax = esi;
/* 7f6563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6564: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f656b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f656c: mov esp, ebp */
  esp = ebp;
/* 7f656e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f656f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f6572(void) {
  LOAD_REGS();
L_7f6572: /* 7f6572: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f6575: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f657a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f657d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f657e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f6581: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f6586u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f6586(); return;
}

void f_7f6586(void) {
  LOAD_REGS();
L_7f6586: /* 7f6586: push 0xa11b00 */
  { uint32_t v = 0xa11b00u; esp -= 4; W32(esp, v); }
/* 7f658b: push 0xadeaa4 */
  { uint32_t v = 0xadeaa4u; esp -= 4; W32(esp, v); }
/* 7f6590: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f6596u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f6596: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6599: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f659b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f659d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f65a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f65a2: guest_badaddr(0x7f65a2); return;
}

void f_7f6690(void) {
  LOAD_REGS();
L_7f6690: /* 7f6690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6691: mov ebp, esp */
  ebp = esp;
/* 7f6693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f6695: push 0x9d176a */
  { uint32_t v = 0x9d176au; esp -= 4; W32(esp, v); }
/* 7f669a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f66a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f66a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f66a8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f66ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f66ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f66ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f66ae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f66b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f66b4: mov ebx, ecx */
  ebx = ecx;
/* 7f66b6: xor esi, esi */
  esi = 0;
/* 7f66b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f66b9: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7f66bc: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f66bf: call 0x6c71b7 */
  esp -= 4; W32(esp, 0x7f66c4u); SPILL(); f_6c71b7(); if (g_unwind) return; RELOAD();
/* 7f66c4: fld qword ptr [ebx + 0xd0] */
  { double v = F64((uint32_t)(ebx + 0xd0u)); FPUSH(v); }
/* 7f66ca: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7f66cc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7f66cf: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 7f66d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f66d6: mov ecx, edi */
  ecx = edi;
/* 7f66d8: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f66dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f66db: mov ecx, edi */
  ecx = edi;
/* 7f66dd: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7f66e3u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7f66e3: cmp eax, 0x62 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x62u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f66e6: jge 0x7f670e */
  if ((sf == of)) goto L_7f670e;
L_7f66e8: /* 7f66e8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f66eb: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f66f1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f66f1: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f66f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f66f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f66f6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f66fa: call 0x6c9403 */
  esp -= 4; W32(esp, 0x7f66ffu); SPILL(); f_6c9403(); if (g_unwind) return; RELOAD();
/* 7f66ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6702: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f6705: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f6709: call 0x6c4f7f */
  esp -= 4; W32(esp, 0x7f670eu); SPILL(); f_6c4f7f(); if (g_unwind) return; RELOAD();
L_7f670e: /* 7f670e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f6711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6712: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6713: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7f6719u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7f6719: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f671b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f671e: lea eax, [ebx + 0xf0] */
  eax = (uint32_t)(ebx + 0xf0u);
/* 7f6724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6725: mov ecx, edi */
  ecx = edi;
/* 7f6727: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f672au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f672a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f6730: /* 7f6730: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6733: mov ecx, edi */
  ecx = edi;
/* 7f6735: jge 0x7f6747 */
  if ((sf == of)) goto L_7f6747;
L_7f6737: /* 7f6737: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f6739: lea eax, [ebx + esi*4 + 0x90] */
  eax = (uint32_t)(ebx + esi*4 + 0x90u);
/* 7f6740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6741: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f6744u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6744: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f6745: jmp 0x7f6730 */
  goto L_7f6730;
L_7f6747: /* 7f6747: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7f674du); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7f674d: cmp eax, 0x3e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6750: jle 0x7f677e */
  if ((zf || sf != of)) goto L_7f677e;
L_7f6752: /* 7f6752: lea esi, [ebx + 0xd8] */
  esi = (uint32_t)(ebx + 0xd8u);
/* 7f6758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6759: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f675a: call 0x6c5cea */
  esp -= 4; W32(esp, 0x7f675fu); SPILL(); f_6c5cea(); if (g_unwind) return; RELOAD();
/* 7f675f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6762: mov ecx, edi */
  ecx = edi;
/* 7f6764: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f676au); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f676a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f676c: je 0x7f6893 */
  if (zf) goto L_7f6893;
L_7f6772: /* 7f6772: mov ecx, esi */
  ecx = esi;
/* 7f6774: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7f6779u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7f6779: jmp 0x7f6893 */
  goto L_7f6893;
L_7f677e: /* 7f677e: mov ecx, edi */
  ecx = edi;
/* 7f6780: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7f6786u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7f6786: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6789: jl 0x7f6893 */
  if ((sf != of)) goto L_7f6893;
L_7f678f: /* 7f678f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f6792: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f6798u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f6798: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f679b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f679f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f67a5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f67a5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f67a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f67a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f67aa: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f67ae: call 0x6c402f */
  esp -= 4; W32(esp, 0x7f67b3u); SPILL(); f_6c402f(); if (g_unwind) return; RELOAD();
/* 7f67b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f67b6: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f67b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f67ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f67bb: call 0x6c402f */
  esp -= 4; W32(esp, 0x7f67c0u); SPILL(); f_6c402f(); if (g_unwind) return; RELOAD();
/* 7f67c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f67c3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7f67c6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f67ccu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f67cc: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7f67cf: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7f67d3: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 7f67da: mov dword ptr [ebp - 0x3c], 8 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x8u);
/* 7f67e1: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7f67e6u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7f67e6: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7f67e9: lea esi, [ebx + 0xd8] */
  esi = (uint32_t)(ebx + 0xd8u);
/* 7f67ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f67f0: mov ecx, esi */
  ecx = esi;
/* 7f67f2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7f67f6: call 0x6c824c */
  esp -= 4; W32(esp, 0x7f67fbu); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7f67fb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7f67fe: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7f6801: mov ecx, esi */
  ecx = esi;
/* 7f6803: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7f6808u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7f6808: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7f680b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7f680f: call 0x6c312a */
  esp -= 4; W32(esp, 0x7f6814u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7f6814: xor esi, esi */
  esi = 0;
L_7f6816: /* 7f6816: cmp esi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6819: jge 0x7f6855 */
  if ((sf == of)) goto L_7f6855;
L_7f681b: /* 7f681b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7f681e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7f6821: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7f6824: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f6827: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f6829: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 7f682c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f6832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f6832: mov ecx, edi */
  ecx = edi;
/* 7f6834: mov ebx, eax */
  ebx = eax;
/* 7f6836: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7f683cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7f683c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f683f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6841: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f6847: call 0x6c45de */
  esp -= 4; W32(esp, 0x7f684cu); SPILL(); f_6c45de(); if (g_unwind) return; RELOAD();
/* 7f684c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f684f: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f6852: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7f6853: jmp 0x7f6816 */
  goto L_7f6816;
L_7f6855: /* 7f6855: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7f6858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f685b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f685e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7f6862: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7f6867u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7f6867: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f686a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f686e: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7f6874u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7f6874: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7f6877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6878: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f687a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f687d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7f6881: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7f6886u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7f6886: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f6889: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f688d: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7f6893u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_7f6893: /* 7f6893: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 7f6899: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f689b: je 0x7f68b7 */
  if (zf) goto L_7f68b7;
L_7f689d: /* 7f689d: mov ecx, edi */
  ecx = edi;
/* 7f689f: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x7f68a5u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 7f68a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f68a7: jne 0x7f68b7 */
  if (!zf) goto L_7f68b7;
L_7f68a9: /* 7f68a9: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 7f68af: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f68b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f68b2: mov ecx, edi */
  ecx = edi;
/* 7f68b4: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7f68b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f68b7: /* 7f68b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f68ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f68bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f68bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f68c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f68c4: mov esp, ebp */
  esp = ebp;
/* 7f68c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f68c7: ret 4 */
  esp += 8; SPILL(); return;
}
