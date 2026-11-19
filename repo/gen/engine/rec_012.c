#include "recomp.h"
#include "rec_mod.h"

void f_71f640(void) {
  LOAD_REGS();
L_71f640: /* 71f640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f646: mov esi, ecx */
  esi = ecx;
/* 71f648: call 0x6c82f6 */
  esp -= 4; W32(esp, 0x71f64du); SPILL(); f_6c82f6(); if (g_unwind) return; RELOAD();
/* 71f64d: mov eax, esi */
  eax = esi;
/* 71f64f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f650: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f670(void) {
  LOAD_REGS();
L_71f670: /* 71f670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f672: push 0x9c3289 */
  { uint32_t v = 0x9c3289u; esp -= 4; W32(esp, v); }
/* 71f677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f67e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f686: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f687: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f688: mov esi, ecx */
  esi = ecx;
/* 71f68a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f68b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f68f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f692: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f694: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f69a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f6a2: jge 0x71f6b8 */
  if ((sf == of)) goto L_71f6b8;
L_71f6a4: /* 71f6a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f6a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f6ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f6b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f6b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f6b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f6b8: /* 71f6b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f6bb: jle 0x71f6d1 */
  if ((zf || sf != of)) goto L_71f6d1;
L_71f6bd: /* 71f6bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f6c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f6c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f6cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f6ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f6ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f6d1: /* 71f6d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f6d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f6d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f6d6: mov ecx, esi */
  ecx = esi;
/* 71f6d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f6deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f6de: mov ecx, esi */
  ecx = esi;
/* 71f6e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f6e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f6eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f6ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f6f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f6f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f6f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f6fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f6ff: ret  */
  esp += 4; SPILL(); return;
}

void f_71f730(void) {
  LOAD_REGS();
L_71f730: /* 71f730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f733: mov esi, ecx */
  esi = ecx;
/* 71f735: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x71f73bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 71f73b: mov eax, esi */
  eax = esi;
/* 71f73d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f73e: ret  */
  esp += 4; SPILL(); return;
}

void f_71f750(void) {
  LOAD_REGS();
L_71f750: /* 71f750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f756: mov esi, ecx */
  esi = ecx;
/* 71f758: call 0x6c2fef */
  esp -= 4; W32(esp, 0x71f75du); SPILL(); f_6c2fef(); if (g_unwind) return; RELOAD();
/* 71f75d: mov eax, esi */
  eax = esi;
/* 71f75f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f760: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f780(void) {
  LOAD_REGS();
L_71f780: /* 71f780: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f782: push 0x9c32a9 */
  { uint32_t v = 0x9c32a9u; esp -= 4; W32(esp, v); }
/* 71f787: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f78e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f797: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f798: mov esi, ecx */
  esi = ecx;
/* 71f79a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f79b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f79f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f7a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f7a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f7aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f7b2: jge 0x71f7c8 */
  if ((sf == of)) goto L_71f7c8;
L_71f7b4: /* 71f7b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f7b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f7be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f7c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f7c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f7c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f7c8: /* 71f7c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f7cb: jle 0x71f7e1 */
  if ((zf || sf != of)) goto L_71f7e1;
L_71f7cd: /* 71f7cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f7d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f7d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f7dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f7de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f7e1: /* 71f7e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f7e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f7e6: mov ecx, esi */
  ecx = esi;
/* 71f7e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f7eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f7ee: mov ecx, esi */
  ecx = esi;
/* 71f7f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f7f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f7feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f804: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f805: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f80c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f80f: ret  */
  esp += 4; SPILL(); return;
}

void f_71f840(void) {
  LOAD_REGS();
L_71f840: /* 71f840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f846: mov esi, ecx */
  esi = ecx;
/* 71f848: call 0x6c868e */
  esp -= 4; W32(esp, 0x71f84du); SPILL(); f_6c868e(); if (g_unwind) return; RELOAD();
/* 71f84d: mov eax, esi */
  eax = esi;
/* 71f84f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f850: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f870(void) {
  LOAD_REGS();
L_71f870: /* 71f870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f872: push 0x9c32c9 */
  { uint32_t v = 0x9c32c9u; esp -= 4; W32(esp, v); }
/* 71f877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f87e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f886: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f888: mov esi, ecx */
  esi = ecx;
/* 71f88a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f88b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f88f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f892: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f894: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f89a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f8a2: jge 0x71f8b8 */
  if ((sf == of)) goto L_71f8b8;
L_71f8a4: /* 71f8a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f8a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f8ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f8b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f8b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f8b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f8b8: /* 71f8b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f8bb: jle 0x71f8d1 */
  if ((zf || sf != of)) goto L_71f8d1;
L_71f8bd: /* 71f8bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f8c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f8c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f8cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f8ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f8d1: /* 71f8d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f8d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f8d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f8d6: mov ecx, esi */
  ecx = esi;
/* 71f8d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f8deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f8de: mov ecx, esi */
  ecx = esi;
/* 71f8e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f8e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f8eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f8ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f8f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f8f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f8f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f8f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f8fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f8ff: ret  */
  esp += 4; SPILL(); return;
}

void f_71f930(void) {
  LOAD_REGS();
L_71f930: /* 71f930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f936: mov esi, ecx */
  esi = ecx;
/* 71f938: call 0x6c7167 */
  esp -= 4; W32(esp, 0x71f93du); SPILL(); f_6c7167(); if (g_unwind) return; RELOAD();
/* 71f93d: mov eax, esi */
  eax = esi;
/* 71f93f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f940: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f960(void) {
  LOAD_REGS();
L_71f960: /* 71f960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f962: push 0x9c32e9 */
  { uint32_t v = 0x9c32e9u; esp -= 4; W32(esp, v); }
/* 71f967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f96e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f975: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f976: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f977: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f978: mov esi, ecx */
  esi = ecx;
/* 71f97a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f97b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f97f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f982: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f984: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f98a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f992: jge 0x71f9a8 */
  if ((sf == of)) goto L_71f9a8;
L_71f994: /* 71f994: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f999: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f99e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f9a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f9a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f9a8: /* 71f9a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f9ab: jle 0x71f9c1 */
  if ((zf || sf != of)) goto L_71f9c1;
L_71f9ad: /* 71f9ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f9b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f9b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f9bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f9beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f9be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f9c1: /* 71f9c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f9c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f9c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f9c6: mov ecx, esi */
  ecx = esi;
/* 71f9c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f9ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f9ce: mov ecx, esi */
  ecx = esi;
/* 71f9d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f9d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f9deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f9de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f9e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f9e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f9e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f9e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f9ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f9ef: ret  */
  esp += 4; SPILL(); return;
}

void f_71fa20(void) {
  LOAD_REGS();
L_71fa20: /* 71fa20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fa24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fa25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fa26: mov esi, ecx */
  esi = ecx;
/* 71fa28: call 0x6c10e1 */
  esp -= 4; W32(esp, 0x71fa2du); SPILL(); f_6c10e1(); if (g_unwind) return; RELOAD();
/* 71fa2d: mov eax, esi */
  eax = esi;
/* 71fa2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fa30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fa50(void) {
  LOAD_REGS();
L_71fa50: /* 71fa50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fa52: push 0x9c3309 */
  { uint32_t v = 0x9c3309u; esp -= 4; W32(esp, v); }
/* 71fa57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fa5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fa5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71fa65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71fa66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71fa67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fa68: mov esi, ecx */
  esi = ecx;
/* 71fa6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fa6b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71fa6f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71fa72: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71fa74: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71fa7a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71fa82: jge 0x71fa98 */
  if ((sf == of)) goto L_71fa98;
L_71fa84: /* 71fa84: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71fa89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fa8e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71fa93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fa95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fa95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fa98: /* 71fa98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71fa9b: jle 0x71fab1 */
  if ((zf || sf != of)) goto L_71fab1;
L_71fa9d: /* 71fa9d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71faa2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71faa7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71faac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71faaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71faae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fab1: /* 71fab1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71fab3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71fab6: mov ecx, esi */
  ecx = esi;
/* 71fab8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71fabeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71fabe: mov ecx, esi */
  ecx = esi;
/* 71fac0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71fac8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71faceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71face: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71fad2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71fad3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71fad5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71fadc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71fadf: ret  */
  esp += 4; SPILL(); return;
}

void f_71fb10(void) {
  LOAD_REGS();
L_71fb10: /* 71fb10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fb14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fb15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fb16: mov esi, ecx */
  esi = ecx;
/* 71fb18: call 0x6ca56f */
  esp -= 4; W32(esp, 0x71fb1du); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 71fb1d: mov eax, esi */
  eax = esi;
/* 71fb1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fb20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fb40(void) {
  LOAD_REGS();
L_71fb40: /* 71fb40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fb42: push 0x9c3329 */
  { uint32_t v = 0x9c3329u; esp -= 4; W32(esp, v); }
/* 71fb47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fb4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fb4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71fb55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71fb56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71fb57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fb58: mov esi, ecx */
  esi = ecx;
/* 71fb5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fb5b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71fb5f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71fb62: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71fb64: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71fb6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71fb72: jge 0x71fb88 */
  if ((sf == of)) goto L_71fb88;
L_71fb74: /* 71fb74: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71fb79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fb7e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71fb83: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fb85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fb85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fb88: /* 71fb88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71fb8b: jle 0x71fba1 */
  if ((zf || sf != of)) goto L_71fba1;
L_71fb8d: /* 71fb8d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71fb92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fb97: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71fb9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fb9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fb9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fba1: /* 71fba1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71fba3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fba4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71fba6: mov ecx, esi */
  ecx = esi;
/* 71fba8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71fbaeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71fbae: mov ecx, esi */
  ecx = esi;
/* 71fbb0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71fbb8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71fbbeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71fbbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71fbc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71fbc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fbc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71fbc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71fbcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71fbcf: ret  */
  esp += 4; SPILL(); return;
}

void f_71fc00(void) {
  LOAD_REGS();
L_71fc00: /* 71fc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fc04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fc05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fc06: mov esi, ecx */
  esi = ecx;
/* 71fc08: call 0x6c6f69 */
  esp -= 4; W32(esp, 0x71fc0du); SPILL(); f_6c6f69(); if (g_unwind) return; RELOAD();
/* 71fc0d: mov eax, esi */
  eax = esi;
/* 71fc0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fc10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fc30(void) {
  LOAD_REGS();
L_71fc30: /* 71fc30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fc32: push 0x9c3349 */
  { uint32_t v = 0x9c3349u; esp -= 4; W32(esp, v); }
/* 71fc37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fc3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71fc45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71fc46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71fc47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fc48: mov esi, ecx */
  esi = ecx;
/* 71fc4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fc4b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71fc4f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71fc52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71fc54: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71fc5a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71fc62: jge 0x71fc78 */
  if ((sf == of)) goto L_71fc78;
L_71fc64: /* 71fc64: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71fc69: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fc6e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71fc73: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fc75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fc75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fc78: /* 71fc78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71fc7b: jle 0x71fc91 */
  if ((zf || sf != of)) goto L_71fc91;
L_71fc7d: /* 71fc7d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71fc82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fc87: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71fc8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fc8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fc8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fc91: /* 71fc91: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71fc93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fc94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71fc96: mov ecx, esi */
  ecx = esi;
/* 71fc98: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71fc9eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71fc9e: mov ecx, esi */
  ecx = esi;
/* 71fca0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71fca8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71fcaeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71fcae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71fcb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71fcb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fcb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71fcb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71fcbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71fcbf: ret  */
  esp += 4; SPILL(); return;
}

void f_71fcf0(void) {
  LOAD_REGS();
L_71fcf0: /* 71fcf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fcf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fcf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fcf6: mov esi, ecx */
  esi = ecx;
/* 71fcf8: call 0x6c6a32 */
  esp -= 4; W32(esp, 0x71fcfdu); SPILL(); f_6c6a32(); if (g_unwind) return; RELOAD();
/* 71fcfd: mov eax, esi */
  eax = esi;
/* 71fcff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fd00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fd20(void) {
  LOAD_REGS();
L_71fd20: /* 71fd20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fd22: push 0x9c3369 */
  { uint32_t v = 0x9c3369u; esp -= 4; W32(esp, v); }
/* 71fd27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fd2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fd2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71fd35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71fd36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71fd37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fd38: mov esi, ecx */
  esi = ecx;
/* 71fd3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fd3b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71fd3f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71fd42: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71fd44: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71fd4a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71fd52: jge 0x71fd68 */
  if ((sf == of)) goto L_71fd68;
L_71fd54: /* 71fd54: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71fd59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fd5e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71fd63: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fd65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fd65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fd68: /* 71fd68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71fd6b: jle 0x71fd81 */
  if ((zf || sf != of)) goto L_71fd81;
L_71fd6d: /* 71fd6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71fd72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fd77: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71fd7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fd7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fd7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fd81: /* 71fd81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71fd83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fd84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71fd86: mov ecx, esi */
  ecx = esi;
/* 71fd88: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71fd8eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71fd8e: mov ecx, esi */
  ecx = esi;
/* 71fd90: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71fd98: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71fd9eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71fd9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71fda2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71fda3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fda4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71fda5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71fdac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71fdaf: ret  */
  esp += 4; SPILL(); return;
}

void f_71fde0(void) {
  LOAD_REGS();
L_71fde0: /* 71fde0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fde4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fde5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fde6: mov esi, ecx */
  esi = ecx;
/* 71fde8: call 0x6cc6ad */
  esp -= 4; W32(esp, 0x71fdedu); SPILL(); f_6cc6ad(); if (g_unwind) return; RELOAD();
/* 71fded: mov eax, esi */
  eax = esi;
/* 71fdef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fdf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fe10(void) {
  LOAD_REGS();
L_71fe10: /* 71fe10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fe12: push 0x9c3389 */
  { uint32_t v = 0x9c3389u; esp -= 4; W32(esp, v); }
/* 71fe17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fe1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fe1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71fe25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71fe26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71fe27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fe28: mov esi, ecx */
  esi = ecx;
/* 71fe2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fe2b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71fe2f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71fe32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71fe34: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71fe3a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71fe42: jge 0x71fe58 */
  if ((sf == of)) goto L_71fe58;
L_71fe44: /* 71fe44: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71fe49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fe4e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71fe53: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fe55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fe55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fe58: /* 71fe58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71fe5b: jle 0x71fe71 */
  if ((zf || sf != of)) goto L_71fe71;
L_71fe5d: /* 71fe5d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71fe62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71fe67: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71fe6c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71fe6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71fe6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71fe71: /* 71fe71: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71fe73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71fe74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71fe76: mov ecx, esi */
  ecx = esi;
/* 71fe78: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71fe7eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71fe7e: mov ecx, esi */
  ecx = esi;
/* 71fe80: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71fe88: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71fe8eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71fe8e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71fe92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71fe93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fe94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71fe95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71fe9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71fe9f: ret  */
  esp += 4; SPILL(); return;
}

void f_71fed0(void) {
  LOAD_REGS();
L_71fed0: /* 71fed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71fed4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71fed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fed6: mov esi, ecx */
  esi = ecx;
/* 71fed8: call 0x6c1f5a */
  esp -= 4; W32(esp, 0x71feddu); SPILL(); f_6c1f5a(); if (g_unwind) return; RELOAD();
/* 71fedd: mov eax, esi */
  eax = esi;
/* 71fedf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71fee0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ff00(void) {
  LOAD_REGS();
L_71ff00: /* 71ff00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ff02: push 0x9c33a9 */
  { uint32_t v = 0x9c33a9u; esp -= 4; W32(esp, v); }
/* 71ff07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ff0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ff0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ff15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ff16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ff18: mov esi, ecx */
  esi = ecx;
/* 71ff1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ff1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71ff1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71ff22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71ff24: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71ff2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71ff32: jge 0x71ff48 */
  if ((sf == of)) goto L_71ff48;
L_71ff34: /* 71ff34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71ff39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ff3e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71ff43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ff45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ff45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ff48: /* 71ff48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ff4b: jle 0x71ff61 */
  if ((zf || sf != of)) goto L_71ff61;
L_71ff4d: /* 71ff4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71ff52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ff57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71ff5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ff5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ff5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ff61: /* 71ff61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71ff63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ff64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ff66: mov ecx, esi */
  ecx = esi;
/* 71ff68: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71ff6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71ff6e: mov ecx, esi */
  ecx = esi;
/* 71ff70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71ff78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71ff7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71ff7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71ff82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ff83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ff84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ff85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ff8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ff8f: ret  */
  esp += 4; SPILL(); return;
}

void f_71ffc0(void) {
  LOAD_REGS();
L_71ffc0: /* 71ffc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71ffc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ffc6: mov esi, ecx */
  esi = ecx;
/* 71ffc8: call 0x6ca4e3 */
  esp -= 4; W32(esp, 0x71ffcdu); SPILL(); f_6ca4e3(); if (g_unwind) return; RELOAD();
/* 71ffcd: mov eax, esi */
  eax = esi;
/* 71ffcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ffd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71fff0(void) {
  LOAD_REGS();
L_71fff0: /* 71fff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71fff2: push 0x9c33c9 */
  { uint32_t v = 0x9c33c9u; esp -= 4; W32(esp, v); }
/* 71fff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71fffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71fffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720006: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720007: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720008: mov esi, ecx */
  esi = ecx;
/* 72000a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72000b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72000f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720012: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720014: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72001a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720022: jge 0x720038 */
  if ((sf == of)) goto L_720038;
L_720024: /* 720024: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720029: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72002e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720033: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720035u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720035: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720038: /* 720038: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72003b: jle 0x720051 */
  if ((zf || sf != of)) goto L_720051;
L_72003d: /* 72003d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720042: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720047: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72004c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72004eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72004e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720051: /* 720051: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720056: mov ecx, esi */
  ecx = esi;
/* 720058: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72005eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72005e: mov ecx, esi */
  ecx = esi;
/* 720060: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720068: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72006eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720042(void) {
  LOAD_REGS();
L_720042: /* 720042: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720047: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72004c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72004eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72004e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720051: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720056: mov ecx, esi */
  ecx = esi;
/* 720058: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72005eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72005e: mov ecx, esi */
  ecx = esi;
/* 720060: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720068: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72006eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720047(void) {
  LOAD_REGS();
L_720047: /* 720047: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72004c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72004eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72004e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720051: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720056: mov ecx, esi */
  ecx = esi;
/* 720058: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72005eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72005e: mov ecx, esi */
  ecx = esi;
/* 720060: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720068: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72006eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720054(void) {
  LOAD_REGS();
L_720054: /* 720054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720056: mov ecx, esi */
  ecx = esi;
/* 720058: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72005eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72005e: mov ecx, esi */
  ecx = esi;
/* 720060: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720068: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72006eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720068(void) {
  LOAD_REGS();
L_720068: /* 720068: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72006eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_72006e(void) {
  LOAD_REGS();
L_72006e: /* 72006e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720072(void) {
  LOAD_REGS();
L_720072: /* 720072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720074(void) {
  LOAD_REGS();
L_720074: /* 720074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_720075(void) {
  LOAD_REGS();
L_720075: /* 720075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72007f: ret  */
  esp += 4; SPILL(); return;
}

void f_7200b0(void) {
  LOAD_REGS();
L_7200b0: /* 7200b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7200b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7200b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7200b6: mov esi, ecx */
  esi = ecx;
/* 7200b8: call 0x6c4d86 */
  esp -= 4; W32(esp, 0x7200bdu); SPILL(); f_6c4d86(); if (g_unwind) return; RELOAD();
/* 7200bd: mov eax, esi */
  eax = esi;
/* 7200bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7200c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7200e0(void) {
  LOAD_REGS();
L_7200e0: /* 7200e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7200e2: push 0x9c33e9 */
  { uint32_t v = 0x9c33e9u; esp -= 4; W32(esp, v); }
/* 7200e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7200ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7200ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7200f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7200f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7200f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7200f8: mov esi, ecx */
  esi = ecx;
/* 7200fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7200fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7200ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720102: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720104: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72010a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720112: jge 0x720128 */
  if ((sf == of)) goto L_720128;
L_720114: /* 720114: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720119: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72011e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720123: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720125: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720128: /* 720128: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72012b: jle 0x720141 */
  if ((zf || sf != of)) goto L_720141;
L_72012d: /* 72012d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720132: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720137: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72013c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72013eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72013e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720141: /* 720141: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720143: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720144: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720146: mov ecx, esi */
  ecx = esi;
/* 720148: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72014eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72014e: mov ecx, esi */
  ecx = esi;
/* 720150: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720158: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72015eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72015e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720162: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720163: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720164: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720165: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72016c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72016f: ret  */
  esp += 4; SPILL(); return;
}

void f_7201a0(void) {
  LOAD_REGS();
L_7201a0: /* 7201a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7201a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7201a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7201a6: mov esi, ecx */
  esi = ecx;
/* 7201a8: call 0x6cb4dd */
  esp -= 4; W32(esp, 0x7201adu); SPILL(); f_6cb4dd(); if (g_unwind) return; RELOAD();
/* 7201ad: mov eax, esi */
  eax = esi;
/* 7201af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7201b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7201d0(void) {
  LOAD_REGS();
L_7201d0: /* 7201d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7201d2: push 0x9c3409 */
  { uint32_t v = 0x9c3409u; esp -= 4; W32(esp, v); }
/* 7201d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7201dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7201de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7201e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7201e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7201e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7201e8: mov esi, ecx */
  esi = ecx;
/* 7201ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7201eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7201ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7201f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7201f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7201fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720202: jge 0x720218 */
  if ((sf == of)) goto L_720218;
L_720204: /* 720204: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720209: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72020e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720213: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720215: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720218: /* 720218: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72021b: jle 0x720231 */
  if ((zf || sf != of)) goto L_720231;
L_72021d: /* 72021d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720222: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720227: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72022c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72022eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72022e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720231: /* 720231: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720233: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720234: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720236: mov ecx, esi */
  ecx = esi;
/* 720238: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72023eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72023e: mov ecx, esi */
  ecx = esi;
/* 720240: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720248: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72024eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72024e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720252: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720253: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720254: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720255: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72025c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72025f: ret  */
  esp += 4; SPILL(); return;
}

void f_720290(void) {
  LOAD_REGS();
L_720290: /* 720290: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720296: mov esi, ecx */
  esi = ecx;
/* 720298: call 0x6c78ab */
  esp -= 4; W32(esp, 0x72029du); SPILL(); f_6c78ab(); if (g_unwind) return; RELOAD();
/* 72029d: mov eax, esi */
  eax = esi;
/* 72029f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7202a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7202c0(void) {
  LOAD_REGS();
L_7202c0: /* 7202c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7202c2: push 0x9c3429 */
  { uint32_t v = 0x9c3429u; esp -= 4; W32(esp, v); }
/* 7202c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7202cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7202ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7202d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7202d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7202d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7202d8: mov esi, ecx */
  esi = ecx;
/* 7202da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7202db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7202df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7202e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7202e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7202ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7202f2: jge 0x720308 */
  if ((sf == of)) goto L_720308;
L_7202f4: /* 7202f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7202f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7202fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720303: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720308: /* 720308: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72030b: jle 0x720321 */
  if ((zf || sf != of)) goto L_720321;
L_72030d: /* 72030d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720312: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720317: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72031c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72031eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72031e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720321: /* 720321: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720326: mov ecx, esi */
  ecx = esi;
/* 720328: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72032eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72032e: mov ecx, esi */
  ecx = esi;
/* 720330: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720338: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72033eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72033e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720342: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720345: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72034c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72034f: ret  */
  esp += 4; SPILL(); return;
}

void f_720380(void) {
  LOAD_REGS();
L_720380: /* 720380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720386: mov esi, ecx */
  esi = ecx;
/* 720388: call 0x6c3157 */
  esp -= 4; W32(esp, 0x72038du); SPILL(); f_6c3157(); if (g_unwind) return; RELOAD();
/* 72038d: mov eax, esi */
  eax = esi;
/* 72038f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720390: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7203b0(void) {
  LOAD_REGS();
L_7203b0: /* 7203b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7203b2: push 0x9c3449 */
  { uint32_t v = 0x9c3449u; esp -= 4; W32(esp, v); }
/* 7203b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7203bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7203be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7203c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7203c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7203c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7203c8: mov esi, ecx */
  esi = ecx;
/* 7203ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7203cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7203cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7203d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7203d4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7203da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7203e2: jge 0x7203f8 */
  if ((sf == of)) goto L_7203f8;
L_7203e4: /* 7203e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7203e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7203ee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7203f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7203f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7203f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7203f8: /* 7203f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7203fb: jle 0x720411 */
  if ((zf || sf != of)) goto L_720411;
L_7203fd: /* 7203fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720402: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720407: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72040c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72040eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72040e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720411: /* 720411: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 720413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720414: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720416: mov ecx, esi */
  ecx = esi;
/* 720418: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72041eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72041e: mov ecx, esi */
  ecx = esi;
/* 720420: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720428: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72042eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72042e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720432: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720434: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720435: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72043c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72043f: ret  */
  esp += 4; SPILL(); return;
}

void f_720470(void) {
  LOAD_REGS();
L_720470: /* 720470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720473: mov esi, ecx */
  esi = ecx;
/* 720475: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x72047bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 72047b: mov eax, esi */
  eax = esi;
/* 72047d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72047e: ret  */
  esp += 4; SPILL(); return;
}

void f_720490(void) {
  LOAD_REGS();
L_720490: /* 720490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720496: mov esi, ecx */
  esi = ecx;
/* 720498: call 0x6c2f04 */
  esp -= 4; W32(esp, 0x72049du); SPILL(); f_6c2f04(); if (g_unwind) return; RELOAD();
/* 72049d: mov eax, esi */
  eax = esi;
/* 72049f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7204a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7204c0(void) {
  LOAD_REGS();
L_7204c0: /* 7204c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7204c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7204c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7204c6: mov esi, ecx */
  esi = ecx;
/* 7204c8: call 0x6c586c */
  esp -= 4; W32(esp, 0x7204cdu); SPILL(); f_6c586c(); if (g_unwind) return; RELOAD();
/* 7204cd: mov eax, esi */
  eax = esi;
/* 7204cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7204d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7204f0(void) {
  LOAD_REGS();
L_7204f0: /* 7204f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7204f2: push 0x9c3469 */
  { uint32_t v = 0x9c3469u; esp -= 4; W32(esp, v); }
/* 7204f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7204fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7204fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720506: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720508: mov esi, ecx */
  esi = ecx;
/* 72050a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72050b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72050f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720512: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720514: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72051a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720522: jge 0x720538 */
  if ((sf == of)) goto L_720538;
L_720524: /* 720524: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720529: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72052e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720533: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720535: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720538: /* 720538: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72053b: jle 0x720551 */
  if ((zf || sf != of)) goto L_720551;
L_72053d: /* 72053d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720542: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720547: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72054c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72054eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72054e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720551: /* 720551: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 720553: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720554: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720556: mov ecx, esi */
  ecx = esi;
/* 720558: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72055eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72055e: mov ecx, esi */
  ecx = esi;
/* 720560: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720568: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72056eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72056e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720575: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72057c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72057f: ret  */
  esp += 4; SPILL(); return;
}

void f_7205b0(void) {
  LOAD_REGS();
L_7205b0: /* 7205b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7205b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7205b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7205b6: mov esi, ecx */
  esi = ecx;
/* 7205b8: call 0x6c70bd */
  esp -= 4; W32(esp, 0x7205bdu); SPILL(); f_6c70bd(); if (g_unwind) return; RELOAD();
/* 7205bd: mov eax, esi */
  eax = esi;
/* 7205bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7205c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7205e0(void) {
  LOAD_REGS();
L_7205e0: /* 7205e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7205e2: push 0x9c3489 */
  { uint32_t v = 0x9c3489u; esp -= 4; W32(esp, v); }
/* 7205e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7205ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7205ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7205f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7205f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7205f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7205f8: mov esi, ecx */
  esi = ecx;
/* 7205fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7205fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7205ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720602: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720604: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72060a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720612: jge 0x720628 */
  if ((sf == of)) goto L_720628;
L_720614: /* 720614: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720619: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72061e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720625: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720628: /* 720628: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72062b: jle 0x720641 */
  if ((zf || sf != of)) goto L_720641;
L_72062d: /* 72062d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720632: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720637: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72063c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72063eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72063e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720641: /* 720641: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 720643: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720644: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720646: mov ecx, esi */
  ecx = esi;
/* 720648: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72064eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72064e: mov ecx, esi */
  ecx = esi;
/* 720650: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720658: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72065eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72065e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720662: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720663: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720665: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72066c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72066f: ret  */
  esp += 4; SPILL(); return;
}

void f_7206a0(void) {
  LOAD_REGS();
L_7206a0: /* 7206a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7206a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7206a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7206a6: mov esi, ecx */
  esi = ecx;
/* 7206a8: call 0x6c9093 */
  esp -= 4; W32(esp, 0x7206adu); SPILL(); f_6c9093(); if (g_unwind) return; RELOAD();
/* 7206ad: mov eax, esi */
  eax = esi;
/* 7206af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7206b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7206d0(void) {
  LOAD_REGS();
L_7206d0: /* 7206d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7206d2: push 0x9c34a9 */
  { uint32_t v = 0x9c34a9u; esp -= 4; W32(esp, v); }
/* 7206d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7206dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7206de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7206e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7206e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7206e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7206e8: mov esi, ecx */
  esi = ecx;
/* 7206ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7206eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7206ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7206f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7206f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7206fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720702: jge 0x720718 */
  if ((sf == of)) goto L_720718;
L_720704: /* 720704: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720709: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72070e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720713: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720715u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720715: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720718: /* 720718: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72071b: jle 0x720731 */
  if ((zf || sf != of)) goto L_720731;
L_72071d: /* 72071d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720722: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720727: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72072c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72072eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72072e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720731: /* 720731: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 720733: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720736: mov ecx, esi */
  ecx = esi;
/* 720738: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72073eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72073e: mov ecx, esi */
  ecx = esi;
/* 720740: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720748: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72074eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72074e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720752: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72075c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72075f: ret  */
  esp += 4; SPILL(); return;
}

void f_720790(void) {
  LOAD_REGS();
L_720790: /* 720790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720796: mov esi, ecx */
  esi = ecx;
/* 720798: call 0x6ca7c7 */
  esp -= 4; W32(esp, 0x72079du); SPILL(); f_6ca7c7(); if (g_unwind) return; RELOAD();
/* 72079d: mov eax, esi */
  eax = esi;
/* 72079f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7207a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7207c0(void) {
  LOAD_REGS();
L_7207c0: /* 7207c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7207c2: push 0x9c34c9 */
  { uint32_t v = 0x9c34c9u; esp -= 4; W32(esp, v); }
/* 7207c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7207cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7207ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7207d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7207d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7207d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7207d8: mov esi, ecx */
  esi = ecx;
/* 7207da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7207db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7207df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7207e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7207e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7207ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7207f2: jge 0x720808 */
  if ((sf == of)) goto L_720808;
L_7207f4: /* 7207f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7207f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7207fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720803: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720805u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720808: /* 720808: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72080b: jle 0x720821 */
  if ((zf || sf != of)) goto L_720821;
L_72080d: /* 72080d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720812: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720817: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72081c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72081eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72081e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720821: /* 720821: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 720823: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720826: mov ecx, esi */
  ecx = esi;
/* 720828: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72082eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72082e: mov ecx, esi */
  ecx = esi;
/* 720830: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720838: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72083eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72083e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720842: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720843: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720845: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72084c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72084f: ret  */
  esp += 4; SPILL(); return;
}

void f_720880(void) {
  LOAD_REGS();
L_720880: /* 720880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720881: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720883: mov esi, ecx */
  esi = ecx;
/* 720885: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x72088bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 72088b: mov eax, esi */
  eax = esi;
/* 72088d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72088e: ret  */
  esp += 4; SPILL(); return;
}

void f_7208a0(void) {
  LOAD_REGS();
L_7208a0: /* 7208a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7208a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7208a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7208a6: mov esi, ecx */
  esi = ecx;
/* 7208a8: call 0x6c498f */
  esp -= 4; W32(esp, 0x7208adu); SPILL(); f_6c498f(); if (g_unwind) return; RELOAD();
/* 7208ad: mov eax, esi */
  eax = esi;
/* 7208af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7208b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7208d0(void) {
  LOAD_REGS();
L_7208d0: /* 7208d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7208d2: push 0x9c34e9 */
  { uint32_t v = 0x9c34e9u; esp -= 4; W32(esp, v); }
/* 7208d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7208dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7208de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7208e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7208e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7208e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7208e8: mov esi, ecx */
  esi = ecx;
/* 7208ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7208eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7208ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7208f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7208f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7208fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720902: jge 0x720918 */
  if ((sf == of)) goto L_720918;
L_720904: /* 720904: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720909: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72090e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720913: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720918: /* 720918: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72091b: jle 0x720931 */
  if ((zf || sf != of)) goto L_720931;
L_72091d: /* 72091d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720922: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720927: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72092c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72092eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72092e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720931: /* 720931: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 720933: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720934: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720936: mov ecx, esi */
  ecx = esi;
/* 720938: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72093eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72093e: mov ecx, esi */
  ecx = esi;
/* 720940: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720948: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72094eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72094e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720952: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720953: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720954: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720955: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72095c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72095f: ret  */
  esp += 4; SPILL(); return;
}

void f_720990(void) {
  LOAD_REGS();
L_720990: /* 720990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720994: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720996: mov esi, ecx */
  esi = ecx;
/* 720998: call 0x6c42a5 */
  esp -= 4; W32(esp, 0x72099du); SPILL(); f_6c42a5(); if (g_unwind) return; RELOAD();
/* 72099d: mov eax, esi */
  eax = esi;
/* 72099f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7209a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7209c0(void) {
  LOAD_REGS();
L_7209c0: /* 7209c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7209c2: push 0x9c3509 */
  { uint32_t v = 0x9c3509u; esp -= 4; W32(esp, v); }
/* 7209c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7209cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7209ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7209d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7209d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7209d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7209d8: mov esi, ecx */
  esi = ecx;
/* 7209da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7209db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7209df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7209e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7209e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7209ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7209f2: jge 0x720a08 */
  if ((sf == of)) goto L_720a08;
L_7209f4: /* 7209f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7209f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7209fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720a03: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720a05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720a05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720a08: /* 720a08: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720a0b: jle 0x720a21 */
  if ((zf || sf != of)) goto L_720a21;
L_720a0d: /* 720a0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720a12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720a17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720a1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720a1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720a21: /* 720a21: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 720a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720a27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720a29: mov ecx, esi */
  ecx = esi;
/* 720a2b: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720a31u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720a31: mov ecx, esi */
  ecx = esi;
/* 720a33: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720a3b: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720a41u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720a41: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720a45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720a46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720a47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720a48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720a4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720a52: ret  */
  esp += 4; SPILL(); return;
}

void f_720a90(void) {
  LOAD_REGS();
L_720a90: /* 720a90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720a94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720a95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720a96: mov esi, ecx */
  esi = ecx;
/* 720a98: call 0x6cbfe6 */
  esp -= 4; W32(esp, 0x720a9du); SPILL(); f_6cbfe6(); if (g_unwind) return; RELOAD();
/* 720a9d: mov eax, esi */
  eax = esi;
/* 720a9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720aa0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720ac0(void) {
  LOAD_REGS();
L_720ac0: /* 720ac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720ac2: push 0x9c3529 */
  { uint32_t v = 0x9c3529u; esp -= 4; W32(esp, v); }
/* 720ac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720ace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720ad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720ad6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720ad7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720ad8: mov esi, ecx */
  esi = ecx;
/* 720ada: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720adb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720adf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720ae2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720ae4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720aea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720af2: jge 0x720b08 */
  if ((sf == of)) goto L_720b08;
L_720af4: /* 720af4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720af9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720afe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720b03: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720b05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720b05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720b08: /* 720b08: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720b0b: jle 0x720b21 */
  if ((zf || sf != of)) goto L_720b21;
L_720b0d: /* 720b0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720b12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720b17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720b1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720b1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720b21: /* 720b21: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 720b23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720b24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720b26: mov ecx, esi */
  ecx = esi;
/* 720b28: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720b2eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720b2e: mov ecx, esi */
  ecx = esi;
/* 720b30: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720b38: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720b3eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720b3e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720b42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720b43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720b45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720b4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720b4f: ret  */
  esp += 4; SPILL(); return;
}

void f_720b80(void) {
  LOAD_REGS();
L_720b80: /* 720b80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720b86: mov esi, ecx */
  esi = ecx;
/* 720b88: call 0x6c2d9c */
  esp -= 4; W32(esp, 0x720b8du); SPILL(); f_6c2d9c(); if (g_unwind) return; RELOAD();
/* 720b8d: mov eax, esi */
  eax = esi;
/* 720b8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720b90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720bb0(void) {
  LOAD_REGS();
L_720bb0: /* 720bb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720bb2: push 0x9c3549 */
  { uint32_t v = 0x9c3549u; esp -= 4; W32(esp, v); }
/* 720bb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720bbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720bc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720bc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720bc8: mov esi, ecx */
  esi = ecx;
/* 720bca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720bcb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720bcf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720bd2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720bd4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720bda: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720be2: jge 0x720bf8 */
  if ((sf == of)) goto L_720bf8;
L_720be4: /* 720be4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720be9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720bee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720bf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720bf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720bf8: /* 720bf8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720bfb: jle 0x720c11 */
  if ((zf || sf != of)) goto L_720c11;
L_720bfd: /* 720bfd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720c02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720c07: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720c0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720c0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720c0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720c11: /* 720c11: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 720c13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720c14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720c16: mov ecx, esi */
  ecx = esi;
/* 720c18: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720c1eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720c1e: mov ecx, esi */
  ecx = esi;
/* 720c20: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720c28: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720c2eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720c2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720c32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720c33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720c34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720c35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720c3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720c3f: ret  */
  esp += 4; SPILL(); return;
}

void f_720c70(void) {
  LOAD_REGS();
L_720c70: /* 720c70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720c74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720c75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720c76: mov esi, ecx */
  esi = ecx;
/* 720c78: call 0x6c79b9 */
  esp -= 4; W32(esp, 0x720c7du); SPILL(); f_6c79b9(); if (g_unwind) return; RELOAD();
/* 720c7d: mov eax, esi */
  eax = esi;
/* 720c7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720c80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720ca0(void) {
  LOAD_REGS();
L_720ca0: /* 720ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720ca2: push 0x9c3569 */
  { uint32_t v = 0x9c3569u; esp -= 4; W32(esp, v); }
/* 720ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720cb8: mov esi, ecx */
  esi = ecx;
/* 720cba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720cbb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720cbf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720cc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720cc4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720cca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720cd2: jge 0x720ce8 */
  if ((sf == of)) goto L_720ce8;
L_720cd4: /* 720cd4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720cd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720cde: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720ce3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720ce5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720ce5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720ce8: /* 720ce8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720ceb: jle 0x720d01 */
  if ((zf || sf != of)) goto L_720d01;
L_720ced: /* 720ced: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720cf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720cf7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720cfc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720cfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720d01: /* 720d01: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 720d03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720d04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720d06: mov ecx, esi */
  ecx = esi;
/* 720d08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720d0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720d0e: mov ecx, esi */
  ecx = esi;
/* 720d10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720d18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720d1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720d1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720d22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720d23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720d24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720d25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720d2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_720d60(void) {
  LOAD_REGS();
L_720d60: /* 720d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720d64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720d66: mov esi, ecx */
  esi = ecx;
/* 720d68: call 0x6c737e */
  esp -= 4; W32(esp, 0x720d6du); SPILL(); f_6c737e(); if (g_unwind) return; RELOAD();
/* 720d6d: mov eax, esi */
  eax = esi;
/* 720d6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720d70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720d90(void) {
  LOAD_REGS();
L_720d90: /* 720d90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720d92: push 0x9c3589 */
  { uint32_t v = 0x9c3589u; esp -= 4; W32(esp, v); }
/* 720d97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720d9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720da5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720da6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720da7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720da8: mov esi, ecx */
  esi = ecx;
/* 720daa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720dab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720daf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720db2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720db4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720dba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720dc2: jge 0x720dd8 */
  if ((sf == of)) goto L_720dd8;
L_720dc4: /* 720dc4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720dc9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720dce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720dd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720dd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720dd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720dd8: /* 720dd8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720ddb: jle 0x720df1 */
  if ((zf || sf != of)) goto L_720df1;
L_720ddd: /* 720ddd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720de2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720de7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720dec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720deeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720dee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720df1: /* 720df1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 720df3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720df4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720df6: mov ecx, esi */
  ecx = esi;
/* 720df8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720dfeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720dfe: mov ecx, esi */
  ecx = esi;
/* 720e00: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720e08: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720e0eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720e0e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720e12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720e13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720e14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720e15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720e1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720e1f: ret  */
  esp += 4; SPILL(); return;
}

void f_720e50(void) {
  LOAD_REGS();
L_720e50: /* 720e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720e56: mov esi, ecx */
  esi = ecx;
/* 720e58: call 0x6cb0e1 */
  esp -= 4; W32(esp, 0x720e5du); SPILL(); f_6cb0e1(); if (g_unwind) return; RELOAD();
/* 720e5d: mov eax, esi */
  eax = esi;
/* 720e5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720e60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720e80(void) {
  LOAD_REGS();
L_720e80: /* 720e80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720e82: push 0x9c35a9 */
  { uint32_t v = 0x9c35a9u; esp -= 4; W32(esp, v); }
/* 720e87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720e8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720e98: mov esi, ecx */
  esi = ecx;
/* 720e9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720e9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720e9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720ea2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720ea4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720eaa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720eb2: jge 0x720ec8 */
  if ((sf == of)) goto L_720ec8;
L_720eb4: /* 720eb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720eb9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720ebe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720ec3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720ec5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720ec8: /* 720ec8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720ecb: jle 0x720ee1 */
  if ((zf || sf != of)) goto L_720ee1;
L_720ecd: /* 720ecd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720ed2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720ed7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720edc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720edeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720ede: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720ee1: /* 720ee1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 720ee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720ee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720ee6: mov ecx, esi */
  ecx = esi;
/* 720ee8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720eeeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720eee: mov ecx, esi */
  ecx = esi;
/* 720ef0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720ef8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720efeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720efe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720f02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720f03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720f04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720f05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720f0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720f0f: ret  */
  esp += 4; SPILL(); return;
}

void f_720f40(void) {
  LOAD_REGS();
L_720f40: /* 720f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 720f44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720f46: mov esi, ecx */
  esi = ecx;
/* 720f48: call 0x6cbcad */
  esp -= 4; W32(esp, 0x720f4du); SPILL(); f_6cbcad(); if (g_unwind) return; RELOAD();
/* 720f4d: mov eax, esi */
  eax = esi;
/* 720f4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720f50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_720f70(void) {
  LOAD_REGS();
L_720f70: /* 720f70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 720f72: push 0x9c35c9 */
  { uint32_t v = 0x9c35c9u; esp -= 4; W32(esp, v); }
/* 720f77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 720f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 720f7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 720f85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 720f86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 720f87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 720f88: mov esi, ecx */
  esi = ecx;
/* 720f8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720f8b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 720f8f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 720f92: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 720f94: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 720f9a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 720fa2: jge 0x720fb8 */
  if ((sf == of)) goto L_720fb8;
L_720fa4: /* 720fa4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 720fa9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720fae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 720fb3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720fb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720fb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720fb8: /* 720fb8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 720fbb: jle 0x720fd1 */
  if ((zf || sf != of)) goto L_720fd1;
L_720fbd: /* 720fbd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 720fc2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 720fc7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 720fcc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x720fceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 720fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_720fd1: /* 720fd1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 720fd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 720fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 720fd6: mov ecx, esi */
  ecx = esi;
/* 720fd8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x720fdeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 720fde: mov ecx, esi */
  ecx = esi;
/* 720fe0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 720fe8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x720feeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 720fee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 720ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 720ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 720ff4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 720ff5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 720ffc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 720fff: ret  */
  esp += 4; SPILL(); return;
}

void f_721030(void) {
  LOAD_REGS();
L_721030: /* 721030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 721034: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721036: mov esi, ecx */
  esi = ecx;
/* 721038: call 0x6c84d1 */
  esp -= 4; W32(esp, 0x72103du); SPILL(); f_6c84d1(); if (g_unwind) return; RELOAD();
/* 72103d: mov eax, esi */
  eax = esi;
/* 72103f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721040: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721060(void) {
  LOAD_REGS();
L_721060: /* 721060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721062: push 0x9c35e9 */
  { uint32_t v = 0x9c35e9u; esp -= 4; W32(esp, v); }
/* 721067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72106d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72106e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721077: mov esi, ecx */
  esi = ecx;
/* 721079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72107d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 721080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721083: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72108b: call 0x6cc239 */
  esp -= 4; W32(esp, 0x721090u); SPILL(); f_6cc239(); if (g_unwind) return; RELOAD();
/* 721090: mov ecx, esi */
  ecx = esi;
/* 721092: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72109a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7210a0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7210a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7210a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7210a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7210ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7210af: ret  */
  esp += 4; SPILL(); return;
}

void f_7210d0(void) {
  LOAD_REGS();
L_7210d0: /* 7210d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7210d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7210d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7210d6: mov esi, ecx */
  esi = ecx;
/* 7210d8: call 0x6c7743 */
  esp -= 4; W32(esp, 0x7210ddu); SPILL(); f_6c7743(); if (g_unwind) return; RELOAD();
/* 7210dd: mov eax, esi */
  eax = esi;
/* 7210df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7210e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721100(void) {
  LOAD_REGS();
L_721100: /* 721100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721102: push 0x9c3609 */
  { uint32_t v = 0x9c3609u; esp -= 4; W32(esp, v); }
/* 721107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72110d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72110e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721116: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721117: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721118: mov esi, ecx */
  esi = ecx;
/* 72111a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72111b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72111f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721122: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721124: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72112a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721132: jge 0x721148 */
  if ((sf == of)) goto L_721148;
L_721134: /* 721134: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721139: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72113e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721143: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721145: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721148: /* 721148: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72114b: jle 0x721161 */
  if ((zf || sf != of)) goto L_721161;
L_72114d: /* 72114d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721152: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721157: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72115c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72115eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72115e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721161: /* 721161: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 721163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721164: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721166: mov ecx, esi */
  ecx = esi;
/* 721168: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72116eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72116e: mov ecx, esi */
  ecx = esi;
/* 721170: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721178: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72117eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72117e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721184: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721185: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72118c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72118f: ret  */
  esp += 4; SPILL(); return;
}

void f_7211c0(void) {
  LOAD_REGS();
L_7211c0: /* 7211c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7211c2: push 0x9c3629 */
  { uint32_t v = 0x9c3629u; esp -= 4; W32(esp, v); }
/* 7211c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7211cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7211ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7211d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7211d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7211d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7211d8: mov esi, ecx */
  esi = ecx;
/* 7211da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7211db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7211df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7211e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7211e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7211ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7211f2: jge 0x721208 */
  if ((sf == of)) goto L_721208;
L_7211f4: /* 7211f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7211f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7211fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721203: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721205u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721205: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721208: /* 721208: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72120b: jle 0x721221 */
  if ((zf || sf != of)) goto L_721221;
L_72120d: /* 72120d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721212: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721217: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72121c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72121eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72121e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721221: /* 721221: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721223: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721224: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721226: mov ecx, esi */
  ecx = esi;
/* 721228: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72122eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72122e: mov ecx, esi */
  ecx = esi;
/* 721230: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721238: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72123eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72123e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721242: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721243: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721244: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721245: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72124c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72124f: ret  */
  esp += 4; SPILL(); return;
}

void f_721280(void) {
  LOAD_REGS();
L_721280: /* 721280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721283: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 721287: mov esi, ecx */
  esi = ecx;
/* 721289: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72128b: je 0x7212c6 */
  if (zf) goto L_7212c6;
L_72128d: /* 72128d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721291: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721293: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721299u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721299: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72129c: xor ebx, ebx */
  ebx = 0;
/* 72129e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7212a0: jle 0x7212c6 */
  if ((zf || sf != of)) goto L_7212c6;
L_7212a2: /* 7212a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7212a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7212a6: mov ecx, esi */
  ecx = esi;
/* 7212a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7212aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7212ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7212b0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7212b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7212b5: je 0x7212be */
  if (zf) goto L_7212be;
L_7212b7: /* 7212b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7212b9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7212bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7212be: /* 7212be: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7212c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7212c2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7212c4: jl 0x7212a2 */
  if ((sf != of)) goto L_7212a2;
L_7212c6: /* 7212c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7212c7: mov eax, esi */
  eax = esi;
/* 7212c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7212ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7212cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7212f0(void) {
  LOAD_REGS();
L_7212f0: /* 7212f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7212f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7212f3: mov esi, ecx */
  esi = ecx;
/* 7212f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7212fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7212fb: mov eax, esi */
  eax = esi;
/* 7212fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7212fe: ret  */
  esp += 4; SPILL(); return;
}

void f_721310(void) {
  LOAD_REGS();
L_721310: /* 721310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 721314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721316: mov esi, ecx */
  esi = ecx;
/* 721318: call 0x6c6127 */
  esp -= 4; W32(esp, 0x72131du); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 72131d: mov eax, esi */
  eax = esi;
/* 72131f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721320: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721340(void) {
  LOAD_REGS();
L_721340: /* 721340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 721344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721346: mov esi, ecx */
  esi = ecx;
/* 721348: call 0x6c8968 */
  esp -= 4; W32(esp, 0x72134du); SPILL(); f_6c8968(); if (g_unwind) return; RELOAD();
/* 72134d: mov eax, esi */
  eax = esi;
/* 72134f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721350: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721370(void) {
  LOAD_REGS();
L_721370: /* 721370: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721372: push 0x9c3649 */
  { uint32_t v = 0x9c3649u; esp -= 4; W32(esp, v); }
/* 721377: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72137d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72137e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721386: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721387: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721388: mov esi, ecx */
  esi = ecx;
/* 72138a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72138b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72138f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721392: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721394: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72139a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7213a2: jge 0x7213b8 */
  if ((sf == of)) goto L_7213b8;
L_7213a4: /* 7213a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7213a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7213ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7213b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7213b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7213b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7213b8: /* 7213b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7213bb: jle 0x7213d1 */
  if ((zf || sf != of)) goto L_7213d1;
L_7213bd: /* 7213bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7213c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7213c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7213cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7213ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7213ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7213d1: /* 7213d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7213d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7213d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7213d6: mov ecx, esi */
  ecx = esi;
/* 7213d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7213deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7213de: mov ecx, esi */
  ecx = esi;
/* 7213e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7213e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7213eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7213ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7213f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7213f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7213f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7213f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7213fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7213ff: ret  */
  esp += 4; SPILL(); return;
}

void f_721430(void) {
  LOAD_REGS();
L_721430: /* 721430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 721434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721435: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721438: mov esi, ecx */
  esi = ecx;
/* 72143a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x721440u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 721440: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 721444: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 721447: mov eax, esi */
  eax = esi;
/* 721449: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72144a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_721460(void) {
  LOAD_REGS();
L_721460: /* 721460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721462: push 0x9c3669 */
  { uint32_t v = 0x9c3669u; esp -= 4; W32(esp, v); }
/* 721467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72146d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72146e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721478: mov esi, ecx */
  esi = ecx;
/* 72147a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72147b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72147f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721482: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721484: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72148a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721492: jge 0x7214a8 */
  if ((sf == of)) goto L_7214a8;
L_721494: /* 721494: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721499: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72149e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7214a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7214a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7214a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7214a8: /* 7214a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7214ab: jle 0x7214c1 */
  if ((zf || sf != of)) goto L_7214c1;
L_7214ad: /* 7214ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7214b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7214b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7214bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7214beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7214be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7214c1: /* 7214c1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7214c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7214c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7214c6: mov ecx, esi */
  ecx = esi;
/* 7214c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7214ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7214ce: mov ecx, esi */
  ecx = esi;
/* 7214d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7214d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7214deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7214de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7214e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7214e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7214e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7214e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7214ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7214ef: ret  */
  esp += 4; SPILL(); return;
}

void f_721520(void) {
  LOAD_REGS();
L_721520: /* 721520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721521: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721522: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 721523: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 721527: mov ebx, ecx */
  ebx = ecx;
/* 721529: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72152b: je 0x721593 */
  if (zf) goto L_721593;
L_72152d: /* 72152d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 721530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721531: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 721533: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721539u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721539: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72153c: xor eax, eax */
  eax = 0;
/* 72153e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721540: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 721544: jle 0x721593 */
  if ((zf || sf != of)) goto L_721593;
L_721546: /* 721546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721547: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72154b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72154c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_721550: /* 721550: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 721552: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721554: mov ecx, ebx */
  ecx = ebx;
/* 721556: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72155cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72155c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 72155e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 721561: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 721564: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 721566: je 0x721576 */
  if (zf) goto L_721576;
L_721568: /* 721568: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72156b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72156f: mov ecx, 5 */
  ecx = 0x5u;
/* 721574: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_721576: /* 721576: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 72157a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72157e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 721581: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 721582: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 721585: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721587: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72158b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72158f: jl 0x721550 */
  if ((sf != of)) goto L_721550;
L_721591: /* 721591: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721592: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_721593: /* 721593: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 721594: mov eax, ebx */
  eax = ebx;
/* 721596: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721597: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 721598: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7215c0(void) {
  LOAD_REGS();
L_7215c0: /* 7215c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7215c2: push 0x9c3689 */
  { uint32_t v = 0x9c3689u; esp -= 4; W32(esp, v); }
/* 7215c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7215cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7215ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7215d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7215d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7215d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7215d8: mov esi, ecx */
  esi = ecx;
/* 7215da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7215db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7215df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7215e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7215e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7215ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7215f2: jge 0x721608 */
  if ((sf == of)) goto L_721608;
L_7215f4: /* 7215f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7215f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7215fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721603: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721605: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721608: /* 721608: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72160b: jle 0x721621 */
  if ((zf || sf != of)) goto L_721621;
L_72160d: /* 72160d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721612: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721617: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72161c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72161eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72161e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721621: /* 721621: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721626: mov ecx, esi */
  ecx = esi;
/* 721628: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72162eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72162e: mov ecx, esi */
  ecx = esi;
/* 721630: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721638: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72163eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72163e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721642: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721643: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721644: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721645: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72164c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72164f: ret  */
  esp += 4; SPILL(); return;
}

void f_721680(void) {
  LOAD_REGS();
L_721680: /* 721680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721683: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 721687: mov esi, ecx */
  esi = ecx;
/* 721689: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72168b: je 0x7216c6 */
  if (zf) goto L_7216c6;
L_72168d: /* 72168d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721691: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721693: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721699u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721699: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72169c: xor ebx, ebx */
  ebx = 0;
/* 72169e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7216a0: jle 0x7216c6 */
  if ((zf || sf != of)) goto L_7216c6;
L_7216a2: /* 7216a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7216a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7216a6: mov ecx, esi */
  ecx = esi;
/* 7216a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7216aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7216ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7216b0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7216b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7216b5: je 0x7216be */
  if (zf) goto L_7216be;
L_7216b7: /* 7216b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7216b9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7216bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7216be: /* 7216be: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7216c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7216c2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7216c4: jl 0x7216a2 */
  if ((sf != of)) goto L_7216a2;
L_7216c6: /* 7216c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7216c7: mov eax, esi */
  eax = esi;
/* 7216c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7216ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7216cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7216f0(void) {
  LOAD_REGS();
L_7216f0: /* 7216f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7216f2: push 0x9c36a9 */
  { uint32_t v = 0x9c36a9u; esp -= 4; W32(esp, v); }
/* 7216f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7216fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7216fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721705: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721706: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721708: mov esi, ecx */
  esi = ecx;
/* 72170a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72170b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72170f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721712: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721714: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72171a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721722: jge 0x721738 */
  if ((sf == of)) goto L_721738;
L_721724: /* 721724: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721729: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72172e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721733: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721735u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721735: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721738: /* 721738: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72173b: jle 0x721751 */
  if ((zf || sf != of)) goto L_721751;
L_72173d: /* 72173d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721742: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721747: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72174c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72174eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72174e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721751: /* 721751: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721753: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721756: mov ecx, esi */
  ecx = esi;
/* 721758: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72175eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72175e: mov ecx, esi */
  ecx = esi;
/* 721760: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721768: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72176eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72176e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721772: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721774: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721775: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72177c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72177f: ret  */
  esp += 4; SPILL(); return;
}

void f_7217b0(void) {
  LOAD_REGS();
L_7217b0: /* 7217b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7217b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7217b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7217b3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7217b7: mov esi, ecx */
  esi = ecx;
/* 7217b9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7217bb: je 0x7217f6 */
  if (zf) goto L_7217f6;
L_7217bd: /* 7217bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7217c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7217c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7217c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7217c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7217c9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7217cc: xor ebx, ebx */
  ebx = 0;
/* 7217ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7217d0: jle 0x7217f6 */
  if ((zf || sf != of)) goto L_7217f6;
L_7217d2: /* 7217d2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7217d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7217d6: mov ecx, esi */
  ecx = esi;
/* 7217d8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7217deu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7217de: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7217e0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7217e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7217e5: je 0x7217ee */
  if (zf) goto L_7217ee;
L_7217e7: /* 7217e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7217e9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7217ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7217ee: /* 7217ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7217f1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7217f2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7217f4: jl 0x7217d2 */
  if ((sf != of)) goto L_7217d2;
L_7217f6: /* 7217f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7217f7: mov eax, esi */
  eax = esi;
/* 7217f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7217fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7217fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721820(void) {
  LOAD_REGS();
L_721820: /* 721820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 721824: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721826: mov esi, ecx */
  esi = ecx;
/* 721828: call 0x6caf0b */
  esp -= 4; W32(esp, 0x72182du); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 72182d: mov eax, esi */
  eax = esi;
/* 72182f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721830: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721850(void) {
  LOAD_REGS();
L_721850: /* 721850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721851: mov esi, ecx */
  esi = ecx;
/* 721853: mov dword ptr [esi], 0xb79f88 */
  W32((uint32_t)(esi), 0xb79f88u);
/* 721859: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 721860: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x721865u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 721865: mov eax, esi */
  eax = esi;
/* 721867: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721868: ret  */
  esp += 4; SPILL(); return;
}

void f_721880(void) {
  LOAD_REGS();
L_721880: /* 721880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721882: push 0x9c36c9 */
  { uint32_t v = 0x9c36c9u; esp -= 4; W32(esp, v); }
/* 721887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72188d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72188e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721896: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721897: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721898: mov esi, ecx */
  esi = ecx;
/* 72189a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72189b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72189f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7218a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7218a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7218aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7218b2: jge 0x7218c8 */
  if ((sf == of)) goto L_7218c8;
L_7218b4: /* 7218b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7218b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7218be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7218c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7218c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7218c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7218c8: /* 7218c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7218cb: jle 0x7218e1 */
  if ((zf || sf != of)) goto L_7218e1;
L_7218cd: /* 7218cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7218d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7218d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7218dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7218deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7218de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7218e1: /* 7218e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7218e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7218e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7218e6: mov ecx, esi */
  ecx = esi;
/* 7218e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7218eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7218ee: mov ecx, esi */
  ecx = esi;
/* 7218f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7218f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7218feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7218fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721902: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721903: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721904: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721905: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72190c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72190f: ret  */
  esp += 4; SPILL(); return;
}

void f_721940(void) {
  LOAD_REGS();
L_721940: /* 721940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721942: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721943: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 721947: mov esi, ecx */
  esi = ecx;
/* 721949: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72194b: je 0x721986 */
  if (zf) goto L_721986;
L_72194d: /* 72194d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721951: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721953: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721959u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721959: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72195c: xor ebx, ebx */
  ebx = 0;
/* 72195e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721960: jle 0x721986 */
  if ((zf || sf != of)) goto L_721986;
L_721962: /* 721962: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721964: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721966: mov ecx, esi */
  ecx = esi;
/* 721968: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72196eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72196e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 721970: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 721973: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 721975: je 0x72197e */
  if (zf) goto L_72197e;
L_721977: /* 721977: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 721979: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 72197c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_72197e: /* 72197e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721981: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 721982: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721984: jl 0x721962 */
  if ((sf != of)) goto L_721962;
L_721986: /* 721986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721987: mov eax, esi */
  eax = esi;
/* 721989: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72198a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72198b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7219b0(void) {
  LOAD_REGS();
L_7219b0: /* 7219b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7219b2: push 0x9c36e9 */
  { uint32_t v = 0x9c36e9u; esp -= 4; W32(esp, v); }
/* 7219b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7219bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7219be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7219c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7219c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7219c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7219c8: mov esi, ecx */
  esi = ecx;
/* 7219ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7219cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7219cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7219d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7219d4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7219da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7219e2: jge 0x7219f8 */
  if ((sf == of)) goto L_7219f8;
L_7219e4: /* 7219e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7219e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7219ee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7219f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7219f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7219f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7219f8: /* 7219f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7219fb: jle 0x721a11 */
  if ((zf || sf != of)) goto L_721a11;
L_7219fd: /* 7219fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721a02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721a07: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 721a0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721a0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721a0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721a11: /* 721a11: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 721a13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721a14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721a16: mov ecx, esi */
  ecx = esi;
/* 721a18: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x721a1eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 721a1e: mov ecx, esi */
  ecx = esi;
/* 721a20: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721a28: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x721a2eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 721a2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721a32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721a33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721a34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721a35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 721a3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721a3f: ret  */
  esp += 4; SPILL(); return;
}

void f_721a70(void) {
  LOAD_REGS();
L_721a70: /* 721a70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721a71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721a72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721a73: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 721a77: mov esi, ecx */
  esi = ecx;
/* 721a79: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 721a7b: je 0x721ad0 */
  if (zf) goto L_721ad0;
L_721a7d: /* 721a7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721a81: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 721a83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721a89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721a89: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721a8c: xor ebx, ebx */
  ebx = 0;
/* 721a8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721a90: jle 0x721ad0 */
  if ((zf || sf != of)) goto L_721ad0;
L_721a92: /* 721a92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 721a93: xor ebp, ebp */
  ebp = 0;
L_721a95: /* 721a95: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 721a97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721a99: mov ecx, esi */
  ecx = esi;
/* 721a9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x721aa1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 721aa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 721aa3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 721aa6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 721aa8: je 0x721ac4 */
  if (zf) goto L_721ac4;
L_721aaa: /* 721aaa: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 721aac: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 721aae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 721ab0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 721ab2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 721ab5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 721ab8: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 721abb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 721abe: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 721ac1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_721ac4: /* 721ac4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721ac7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 721ac8: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 721acb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721acd: jl 0x721a95 */
  if ((sf != of)) goto L_721a95;
L_721acf: /* 721acf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_721ad0: /* 721ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721ad1: mov eax, esi */
  eax = esi;
/* 721ad3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721ad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721ad5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721b00(void) {
  LOAD_REGS();
L_721b00: /* 721b00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721b02: push 0x9c3709 */
  { uint32_t v = 0x9c3709u; esp -= 4; W32(esp, v); }
/* 721b07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 721b0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721b0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721b15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721b16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721b17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721b18: mov esi, ecx */
  esi = ecx;
/* 721b1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721b1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 721b1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721b22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721b24: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 721b2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721b32: jge 0x721b48 */
  if ((sf == of)) goto L_721b48;
L_721b34: /* 721b34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721b39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721b3e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721b43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721b45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721b48: /* 721b48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721b4b: jle 0x721b61 */
  if ((zf || sf != of)) goto L_721b61;
L_721b4d: /* 721b4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721b52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721b57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 721b5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721b61: /* 721b61: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 721b63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721b64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721b66: mov ecx, esi */
  ecx = esi;
/* 721b68: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x721b6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 721b6e: mov ecx, esi */
  ecx = esi;
/* 721b70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721b78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x721b7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 721b7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721b82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721b83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721b84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721b85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 721b8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721b8f: ret  */
  esp += 4; SPILL(); return;
}

void f_721bc0(void) {
  LOAD_REGS();
L_721bc0: /* 721bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721bc1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 721bc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721bc6: mov esi, ecx */
  esi = ecx;
/* 721bc8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 721bca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721bcb: je 0x721c0d */
  if (zf) goto L_721c0d;
L_721bcd: /* 721bcd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 721bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721bd1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 721bd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721bd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721bd9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 721bdc: xor edi, edi */
  edi = 0;
/* 721bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721be0: jle 0x721c0d */
  if ((zf || sf != of)) goto L_721c0d;
L_721be2: /* 721be2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 721be4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721be6: mov ecx, esi */
  ecx = esi;
/* 721be8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x721beeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 721bee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 721bf0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 721bf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 721bf5: je 0x721c05 */
  if (zf) goto L_721c05;
L_721bf7: /* 721bf7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 721bf9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 721bfc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 721bfe: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 721c02: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_721c05: /* 721c05: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 721c08: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 721c09: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721c0b: jl 0x721be2 */
  if ((sf != of)) goto L_721be2;
L_721c0d: /* 721c0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721c0e: mov eax, esi */
  eax = esi;
/* 721c10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721c11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721c12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721c40(void) {
  LOAD_REGS();
L_721c40: /* 721c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721c42: push 0x9c3729 */
  { uint32_t v = 0x9c3729u; esp -= 4; W32(esp, v); }
/* 721c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 721c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721c56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721c57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721c58: mov esi, ecx */
  esi = ecx;
/* 721c5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721c5b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 721c5f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721c62: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721c64: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 721c6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721c72: jge 0x721c88 */
  if ((sf == of)) goto L_721c88;
L_721c74: /* 721c74: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721c79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721c7e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721c83: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721c85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721c85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721c88: /* 721c88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721c8b: jle 0x721ca1 */
  if ((zf || sf != of)) goto L_721ca1;
L_721c8d: /* 721c8d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721c92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721c97: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 721c9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721c9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721c9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721ca1: /* 721ca1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721ca3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721ca6: mov ecx, esi */
  ecx = esi;
/* 721ca8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x721caeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 721cae: mov ecx, esi */
  ecx = esi;
/* 721cb0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721cb8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x721cbeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 721cbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721cc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721cc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721cc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721cc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 721ccc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721ccf: ret  */
  esp += 4; SPILL(); return;
}

void f_721d00(void) {
  LOAD_REGS();
L_721d00: /* 721d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 721d01: mov ebp, esp */
  ebp = esp;
/* 721d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721d05: push 0x9c3740 */
  { uint32_t v = 0x9c3740u; esp -= 4; W32(esp, v); }
/* 721d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 721d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721d18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 721d1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721d1c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 721d1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721d20: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 721d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721d24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 721d27: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721d29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721d2a: mov ecx, esi */
  ecx = esi;
/* 721d2c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 721d33: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x721d39u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 721d39: mov ecx, ebx */
  ecx = ebx;
/* 721d3b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x721d41u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 721d41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 721d43: je 0x721d95 */
  if (zf) goto L_721d95;
L_721d45: /* 721d45: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 721d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721d49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721d4a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x721d50u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 721d50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 721d53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721d56: xor eax, eax */
  eax = 0;
L_721d58: /* 721d58: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721d5b: jge 0x721d60 */
  if ((sf == of)) goto L_721d60;
L_721d5d: /* 721d5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 721d5e: jmp 0x721d58 */
  goto L_721d58;
L_721d60: /* 721d60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721d61: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721d63: mov ecx, esi */
  ecx = esi;
/* 721d65: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721d6bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721d6b: xor edi, edi */
  edi = 0;
/* 721d6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_721d70: /* 721d70: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721d73: jge 0x721dc0 */
  if ((sf == of)) goto L_721dc0;
L_721d75: /* 721d75: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721d77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721d79: mov ecx, esi */
  ecx = esi;
/* 721d7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x721d81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 721d81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 721d83: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 721d86: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 721d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721d89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721d8a: call 0x6c989a */
  esp -= 4; W32(esp, 0x721d8fu); SPILL(); f_6c989a(); if (g_unwind) return; RELOAD();
/* 721d8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721d92: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 721d93: jmp 0x721d70 */
  goto L_721d70;
L_721d95: /* 721d95: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 721d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721d99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721d9a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x721da0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 721da0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721da3: xor edi, edi */
  edi = 0;
L_721da5: /* 721da5: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721da8: jge 0x721dc0 */
  if ((sf == of)) goto L_721dc0;
L_721daa: /* 721daa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 721dac: mov ecx, edi */
  ecx = edi;
/* 721dae: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 721db1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 721db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721db4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721db5: call 0x6c989a */
  esp -= 4; W32(esp, 0x721dbau); SPILL(); f_6c989a(); if (g_unwind) return; RELOAD();
/* 721dba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721dbd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 721dbe: jmp 0x721da5 */
  goto L_721da5;
L_721dc0: /* 721dc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 721dc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721dc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721dc5: mov eax, ebx */
  eax = ebx;
/* 721dc7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 721dce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721dcf: mov esp, ebp */
  esp = ebp;
/* 721dd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 721dd2: ret  */
  esp += 4; SPILL(); return;
}

void f_721dd3(void) {
  LOAD_REGS();
L_721dd3: /* 721dd3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 721dd6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 721ddb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 721dde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721ddf: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 721de2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x721de7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_721de7(); return;
}

void f_721de7(void) {
  LOAD_REGS();
L_721de7: /* 721de7: push 0x9f8338 */
  { uint32_t v = 0x9f8338u; esp -= 4; W32(esp, v); }
/* 721dec: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 721df1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x721df7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 721df7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721dfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721dfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721dfe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x721e03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_721e03: guest_badaddr(0x721e03); return;
}

void f_721e60(void) {
  LOAD_REGS();
L_721e60: /* 721e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721e61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721e62: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 721e63: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 721e67: mov ebx, ecx */
  ebx = ecx;
/* 721e69: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 721e6b: je 0x721ed2 */
  if (zf) goto L_721ed2;
L_721e6d: /* 721e6d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 721e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721e71: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721e73: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721e79u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721e79: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 721e7c: xor eax, eax */
  eax = 0;
/* 721e7e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721e80: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 721e84: jle 0x721ed2 */
  if ((zf || sf != of)) goto L_721ed2;
L_721e86: /* 721e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721e87: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 721e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721e8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_721e90: /* 721e90: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 721e92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721e94: mov ecx, ebx */
  ecx = ebx;
/* 721e96: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x721e9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 721e9c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 721e9e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 721ea1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 721ea3: je 0x721eb5 */
  if (zf) goto L_721eb5;
L_721ea5: /* 721ea5: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 721ea8: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 721eac: mov ecx, 8 */
  ecx = 0x8u;
/* 721eb1: mov edi, eax */
  edi = eax;
/* 721eb3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_721eb5: /* 721eb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 721eb9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 721ebd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 721ec0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 721ec1: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 721ec4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721ec6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 721eca: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 721ece: jl 0x721e90 */
  if ((sf != of)) goto L_721e90;
L_721ed0: /* 721ed0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721ed1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_721ed2: /* 721ed2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 721ed3: mov eax, ebx */
  eax = ebx;
/* 721ed5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721ed6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 721ed7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_721f00(void) {
  LOAD_REGS();
L_721f00: /* 721f00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 721f02: push 0x9c3759 */
  { uint32_t v = 0x9c3759u; esp -= 4; W32(esp, v); }
/* 721f07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 721f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721f0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 721f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 721f16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721f17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721f18: mov esi, ecx */
  esi = ecx;
/* 721f1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721f1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 721f1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 721f22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721f24: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 721f2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 721f32: jge 0x721f48 */
  if ((sf == of)) goto L_721f48;
L_721f34: /* 721f34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 721f39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721f3e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 721f43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721f45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721f45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721f48: /* 721f48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 721f4b: jle 0x721f61 */
  if ((zf || sf != of)) goto L_721f61;
L_721f4d: /* 721f4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 721f52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 721f57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 721f5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x721f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 721f5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_721f61: /* 721f61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721f63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721f64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 721f66: mov ecx, esi */
  ecx = esi;
/* 721f68: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x721f6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 721f6e: mov ecx, esi */
  ecx = esi;
/* 721f70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 721f78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x721f7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 721f7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 721f82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 721f83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 721f84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 721f85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 721f8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 721f8f: ret  */
  esp += 4; SPILL(); return;
}

void f_721fc0(void) {
  LOAD_REGS();
L_721fc0: /* 721fc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 721fc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 721fc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 721fc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 721fc7: mov esi, ecx */
  esi = ecx;
/* 721fc9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 721fcb: je 0x722006 */
  if (zf) goto L_722006;
L_721fcd: /* 721fcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 721fd1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721fd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x721fd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 721fd9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 721fdc: xor ebx, ebx */
  ebx = 0;
/* 721fde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 721fe0: jle 0x722006 */
  if ((zf || sf != of)) goto L_722006;
L_721fe2: /* 721fe2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 721fe4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 721fe6: mov ecx, esi */
  ecx = esi;
/* 721fe8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x721feeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 721fee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 721ff0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 721ff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 721ff5: je 0x721ffe */
  if (zf) goto L_721ffe;
L_721ff7: /* 721ff7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 721ff9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 721ffc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_721ffe: /* 721ffe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722001: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 722002: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722004: jl 0x721fe2 */
  if ((sf != of)) goto L_721fe2;
L_722006: /* 722006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722007: mov eax, esi */
  eax = esi;
/* 722009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72200a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72200b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722030(void) {
  LOAD_REGS();
L_722030: /* 722030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722032: push 0x9c3779 */
  { uint32_t v = 0x9c3779u; esp -= 4; W32(esp, v); }
/* 722037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72203d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72203e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722045: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722046: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722048: mov esi, ecx */
  esi = ecx;
/* 72204a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72204b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72204f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 722052: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722054: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72205a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 722062: jge 0x722078 */
  if ((sf == of)) goto L_722078;
L_722064: /* 722064: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 722069: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72206e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 722073: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722075: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722078: /* 722078: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72207b: jle 0x722091 */
  if ((zf || sf != of)) goto L_722091;
L_72207d: /* 72207d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 722082: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722087: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72208c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72208eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72208e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722091: /* 722091: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722093: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722094: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722096: mov ecx, esi */
  ecx = esi;
/* 722098: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72209eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72209e: mov ecx, esi */
  ecx = esi;
/* 7220a0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7220a8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7220aeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7220ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7220b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7220b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7220b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7220b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7220bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7220bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7220f0(void) {
  LOAD_REGS();
L_7220f0: /* 7220f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7220f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7220f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7220f6: mov esi, ecx */
  esi = ecx;
/* 7220f8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7220fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7220fb: je 0x72213d */
  if (zf) goto L_72213d;
L_7220fd: /* 7220fd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722101: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722103: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722109u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722109: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 72210c: xor edi, edi */
  edi = 0;
/* 72210e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722110: jle 0x72213d */
  if ((zf || sf != of)) goto L_72213d;
L_722112: /* 722112: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722114: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 722116: mov ecx, esi */
  ecx = esi;
/* 722118: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72211eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72211e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 722120: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 722123: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722125: je 0x722135 */
  if (zf) goto L_722135;
L_722127: /* 722127: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 722129: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 72212c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72212e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 722132: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_722135: /* 722135: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722138: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 722139: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72213b: jl 0x722112 */
  if ((sf != of)) goto L_722112;
L_72213d: /* 72213d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72213e: mov eax, esi */
  eax = esi;
/* 722140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722141: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722170(void) {
  LOAD_REGS();
L_722170: /* 722170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722172: push 0x9c3799 */
  { uint32_t v = 0x9c3799u; esp -= 4; W32(esp, v); }
/* 722177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72217d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72217e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722186: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722188: mov esi, ecx */
  esi = ecx;
/* 72218a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72218b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72218f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 722192: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722194: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72219a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7221a2: jge 0x7221b8 */
  if ((sf == of)) goto L_7221b8;
L_7221a4: /* 7221a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7221a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7221ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7221b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7221b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7221b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7221b8: /* 7221b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7221bb: jle 0x7221d1 */
  if ((zf || sf != of)) goto L_7221d1;
L_7221bd: /* 7221bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7221c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7221c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7221cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7221ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7221ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7221d1: /* 7221d1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7221d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7221d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7221d6: mov ecx, esi */
  ecx = esi;
/* 7221d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7221deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7221de: mov ecx, esi */
  ecx = esi;
/* 7221e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7221e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7221eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7221ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7221f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7221f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7221f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7221f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7221fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7221ff: ret  */
  esp += 4; SPILL(); return;
}

void f_722230(void) {
  LOAD_REGS();
L_722230: /* 722230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722233: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 722237: mov esi, ecx */
  esi = ecx;
/* 722239: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72223b: je 0x72228d */
  if (zf) goto L_72228d;
L_72223d: /* 72223d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722241: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722243: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722249u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722249: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72224c: xor ebx, ebx */
  ebx = 0;
/* 72224e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722250: jle 0x72228d */
  if ((zf || sf != of)) goto L_72228d;
L_722252: /* 722252: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722253: xor ebp, ebp */
  ebp = 0;
L_722255: /* 722255: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722257: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 722259: mov ecx, esi */
  ecx = esi;
/* 72225b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x722261u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 722261: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 722263: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 722266: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 722269: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72226b: je 0x722281 */
  if (zf) goto L_722281;
L_72226d: /* 72226d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 72226f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 722271: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 722273: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 722275: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 722278: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72227b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72227e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_722281: /* 722281: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722284: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 722285: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 722288: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72228a: jl 0x722255 */
  if ((sf != of)) goto L_722255;
L_72228c: /* 72228c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_72228d: /* 72228d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72228e: mov eax, esi */
  eax = esi;
/* 722290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722291: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722292: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7222c0(void) {
  LOAD_REGS();
L_7222c0: /* 7222c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7222c2: push 0x9c37b9 */
  { uint32_t v = 0x9c37b9u; esp -= 4; W32(esp, v); }
/* 7222c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7222cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7222ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7222d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7222d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7222d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7222d8: mov esi, ecx */
  esi = ecx;
/* 7222da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7222db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7222df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7222e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7222e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7222ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7222f2: jge 0x722308 */
  if ((sf == of)) goto L_722308;
L_7222f4: /* 7222f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7222f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7222fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 722303: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722308: /* 722308: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72230b: jle 0x722321 */
  if ((zf || sf != of)) goto L_722321;
L_72230d: /* 72230d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 722312: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722317: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72231c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72231eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72231e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722321: /* 722321: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722326: mov ecx, esi */
  ecx = esi;
/* 722328: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72232eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72232e: mov ecx, esi */
  ecx = esi;
/* 722330: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 722338: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72233eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72233e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722342: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722345: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72234c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72234f: ret  */
  esp += 4; SPILL(); return;
}

void f_722380(void) {
  LOAD_REGS();
L_722380: /* 722380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722381: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 722385: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722386: mov esi, ecx */
  esi = ecx;
/* 722388: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72238a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72238b: je 0x7223cd */
  if (zf) goto L_7223cd;
L_72238d: /* 72238d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722391: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722393: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722399u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722399: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 72239c: xor edi, edi */
  edi = 0;
/* 72239e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7223a0: jle 0x7223cd */
  if ((zf || sf != of)) goto L_7223cd;
L_7223a2: /* 7223a2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7223a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7223a6: mov ecx, esi */
  ecx = esi;
/* 7223a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7223aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7223ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7223b0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7223b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7223b5: je 0x7223c5 */
  if (zf) goto L_7223c5;
L_7223b7: /* 7223b7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7223b9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 7223bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7223be: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 7223c2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_7223c5: /* 7223c5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7223c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7223c9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7223cb: jl 0x7223a2 */
  if ((sf != of)) goto L_7223a2;
L_7223cd: /* 7223cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7223ce: mov eax, esi */
  eax = esi;
/* 7223d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7223d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7223d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722400(void) {
  LOAD_REGS();
L_722400: /* 722400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722402: push 0x9c37d9 */
  { uint32_t v = 0x9c37d9u; esp -= 4; W32(esp, v); }
/* 722407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72240d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72240e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722418: mov esi, ecx */
  esi = ecx;
/* 72241a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72241b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72241f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 722422: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722424: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72242a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 722432: jge 0x722448 */
  if ((sf == of)) goto L_722448;
L_722434: /* 722434: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 722439: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72243e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 722443: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722445: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722448: /* 722448: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72244b: jle 0x722461 */
  if ((zf || sf != of)) goto L_722461;
L_72244d: /* 72244d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 722452: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722457: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72245c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72245eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72245e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722461: /* 722461: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 722463: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722464: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722466: mov ecx, esi */
  ecx = esi;
/* 722468: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72246eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72246e: mov ecx, esi */
  ecx = esi;
/* 722470: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 722478: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72247eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72247e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722482: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722483: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722484: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72248c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72248f: ret  */
  esp += 4; SPILL(); return;
}

void f_7224c0(void) {
  LOAD_REGS();
L_7224c0: /* 7224c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7224c2: push 0x9c37f9 */
  { uint32_t v = 0x9c37f9u; esp -= 4; W32(esp, v); }
/* 7224c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7224cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7224ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7224d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7224d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7224d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7224d8: mov esi, ecx */
  esi = ecx;
/* 7224da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7224db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7224df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7224e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7224e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7224ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7224f2: jge 0x722508 */
  if ((sf == of)) goto L_722508;
L_7224f4: /* 7224f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7224f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7224fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 722503: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722505u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722505: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722508: /* 722508: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72250b: jle 0x722521 */
  if ((zf || sf != of)) goto L_722521;
L_72250d: /* 72250d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 722512: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722517: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72251c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72251eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72251e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722521: /* 722521: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722523: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722526: mov ecx, esi */
  ecx = esi;
/* 722528: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72252eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72252e: mov ecx, esi */
  ecx = esi;
/* 722530: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 722538: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72253eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72253e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722542: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722543: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722545: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72254c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72254f: ret  */
  esp += 4; SPILL(); return;
}

void f_722580(void) {
  LOAD_REGS();
L_722580: /* 722580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722582: push 0x9c3819 */
  { uint32_t v = 0x9c3819u; esp -= 4; W32(esp, v); }
/* 722587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72258d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72258e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722598: mov esi, ecx */
  esi = ecx;
/* 72259a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72259b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72259f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7225a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7225a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7225aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7225b2: jge 0x7225c8 */
  if ((sf == of)) goto L_7225c8;
L_7225b4: /* 7225b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7225b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7225be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7225c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7225c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7225c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7225c8: /* 7225c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7225cb: jle 0x7225e1 */
  if ((zf || sf != of)) goto L_7225e1;
L_7225cd: /* 7225cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7225d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7225d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7225dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7225deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7225de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7225e1: /* 7225e1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7225e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7225e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7225e6: mov ecx, esi */
  ecx = esi;
/* 7225e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7225eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7225ee: mov ecx, esi */
  ecx = esi;
/* 7225f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7225f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7225feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7225fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722602: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722605: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72260c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72260f: ret  */
  esp += 4; SPILL(); return;
}

void f_722640(void) {
  LOAD_REGS();
L_722640: /* 722640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722641: mov ebp, esp */
  ebp = esp;
/* 722643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722645: push 0x9c3830 */
  { uint32_t v = 0x9c3830u; esp -= 4; W32(esp, v); }
/* 72264a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722658: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72265b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72265c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 72265f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722660: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 722663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722664: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722667: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 722669: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72266a: mov ecx, esi */
  ecx = esi;
/* 72266c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722673: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x722679u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 722679: mov ecx, ebx */
  ecx = ebx;
/* 72267b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x722681u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 722681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722683: je 0x7226d6 */
  if (zf) goto L_7226d6;
L_722685: /* 722685: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 722688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722689: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72268a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x722690u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 722690: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 722693: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722696: xor eax, eax */
  eax = 0;
L_722698: /* 722698: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72269b: jge 0x7226a0 */
  if ((sf == of)) goto L_7226a0;
L_72269d: /* 72269d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72269e: jmp 0x722698 */
  goto L_722698;
L_7226a0: /* 7226a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7226a1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7226a3: mov ecx, esi */
  ecx = esi;
/* 7226a5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7226abu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7226ab: xor edi, edi */
  edi = 0;
/* 7226ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7226b0: /* 7226b0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7226b3: jge 0x722700 */
  if ((sf == of)) goto L_722700;
L_7226b5: /* 7226b5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7226b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7226b9: mov ecx, esi */
  ecx = esi;
/* 7226bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7226c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7226c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7226c3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7226c6: lea eax, [edx + ecx*2] */
  eax = (uint32_t)(edx + ecx*2);
/* 7226c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7226ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7226cb: call 0x6c738d */
  esp -= 4; W32(esp, 0x7226d0u); SPILL(); f_6c738d(); if (g_unwind) return; RELOAD();
/* 7226d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7226d3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7226d4: jmp 0x7226b0 */
  goto L_7226b0;
L_7226d6: /* 7226d6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7226d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7226da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7226db: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7226e1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7226e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7226e4: xor edi, edi */
  edi = 0;
L_7226e6: /* 7226e6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7226e9: jge 0x722700 */
  if ((sf == of)) goto L_722700;
L_7226eb: /* 7226eb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7226ed: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7226f0: lea edx, [ecx + eax*2] */
  edx = (uint32_t)(ecx + eax*2);
/* 7226f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7226f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7226f5: call 0x6c738d */
  esp -= 4; W32(esp, 0x7226fau); SPILL(); f_6c738d(); if (g_unwind) return; RELOAD();
/* 7226fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7226fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7226fe: jmp 0x7226e6 */
  goto L_7226e6;
L_722700: /* 722700: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722705: mov eax, ebx */
  eax = ebx;
/* 722707: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72270e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72270f: mov esp, ebp */
  esp = ebp;
/* 722711: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722712: ret  */
  esp += 4; SPILL(); return;
}

void f_722713(void) {
  LOAD_REGS();
L_722713: /* 722713: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 722716: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 72271b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 72271e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72271f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 722722: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722727u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722727(); return;
}

void f_722727(void) {
  LOAD_REGS();
L_722727: /* 722727: push 0x9f8350 */
  { uint32_t v = 0x9f8350u; esp -= 4; W32(esp, v); }
/* 72272c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722731: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722737u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722737: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72273a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72273c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72273e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722743u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722743: guest_badaddr(0x722743); return;
}

void f_7227a0(void) {
  LOAD_REGS();
L_7227a0: /* 7227a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7227a2: push 0x9c3849 */
  { uint32_t v = 0x9c3849u; esp -= 4; W32(esp, v); }
/* 7227a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7227ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7227ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7227b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7227b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7227b7: mov esi, ecx */
  esi = ecx;
/* 7227b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7227bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7227c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7227c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7227c3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7227cb: call 0x6c231a */
  esp -= 4; W32(esp, 0x7227d0u); SPILL(); f_6c231a(); if (g_unwind) return; RELOAD();
/* 7227d0: mov ecx, esi */
  ecx = esi;
/* 7227d2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7227da: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7227e0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7227e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7227e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7227e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7227ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7227ef: ret  */
  esp += 4; SPILL(); return;
}

void f_722810(void) {
  LOAD_REGS();
L_722810: /* 722810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722811: mov ebx, ecx */
  ebx = ecx;
/* 722813: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722816: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722817: xor edi, edi */
  edi = 0;
/* 722819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 72281b: jle 0x72285a */
  if ((zf || sf != of)) goto L_72285a;
L_72281d: /* 72281d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72281e: mov edi, edi */
  edi = edi;
L_722820: /* 722820: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 722822: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 722825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722827: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 72282a: je 0x722851 */
  if (zf) goto L_722851;
L_72282c: /* 72282c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72282e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x722831u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722831: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 722833: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722835: je 0x72284b */
  if (zf) goto L_72284b;
L_722837: /* 722837: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 72283d: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 722843: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 722845: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 722847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722848: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72284bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72284b: /* 72284b: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_722851: /* 722851: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722854: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 722855: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722857: jl 0x722820 */
  if ((sf != of)) goto L_722820;
L_722859: /* 722859: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_72285a: /* 72285a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 72285e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72285f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 722861: mov ecx, ebx */
  ecx = ebx;
/* 722863: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722869u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722869: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72286a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72286b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722890(void) {
  LOAD_REGS();
L_722890: /* 722890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722892: push 0x9c3869 */
  { uint32_t v = 0x9c3869u; esp -= 4; W32(esp, v); }
/* 722897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72289d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72289e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7228a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7228a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7228a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7228a8: mov esi, ecx */
  esi = ecx;
/* 7228aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7228ab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7228af: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7228b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7228b4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7228ba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7228c2: jge 0x7228d8 */
  if ((sf == of)) goto L_7228d8;
L_7228c4: /* 7228c4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7228c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7228ce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7228d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7228d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7228d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7228d8: /* 7228d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7228db: jle 0x7228f1 */
  if ((zf || sf != of)) goto L_7228f1;
L_7228dd: /* 7228dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7228e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7228e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7228ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7228eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7228ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7228f1: /* 7228f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7228f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7228f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7228f6: mov ecx, esi */
  ecx = esi;
/* 7228f8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7228feu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7228fe: mov ecx, esi */
  ecx = esi;
/* 722900: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 722908: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72290eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72290e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722912: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722913: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722914: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722915: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72291c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72291f: ret  */
  esp += 4; SPILL(); return;
}

void f_722950(void) {
  LOAD_REGS();
L_722950: /* 722950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722951: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722952: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722953: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 722957: mov esi, ecx */
  esi = ecx;
/* 722959: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72295b: je 0x7229ad */
  if (zf) goto L_7229ad;
L_72295d: /* 72295d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722961: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722963: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722969u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722969: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72296c: xor ebx, ebx */
  ebx = 0;
/* 72296e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722970: jle 0x7229ad */
  if ((zf || sf != of)) goto L_7229ad;
L_722972: /* 722972: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722973: xor ebp, ebp */
  ebp = 0;
L_722975: /* 722975: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722977: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 722979: mov ecx, esi */
  ecx = esi;
/* 72297b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x722981u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 722981: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 722983: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 722986: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 722989: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72298b: je 0x7229a1 */
  if (zf) goto L_7229a1;
L_72298d: /* 72298d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 72298f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 722991: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 722993: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 722995: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 722998: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72299b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72299e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7229a1: /* 7229a1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7229a4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7229a5: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7229a8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7229aa: jl 0x722975 */
  if ((sf != of)) goto L_722975;
L_7229ac: /* 7229ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7229ad: /* 7229ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7229ae: mov eax, esi */
  eax = esi;
/* 7229b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7229b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7229b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7229e0(void) {
  LOAD_REGS();
L_7229e0: /* 7229e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7229e2: push 0x9c3889 */
  { uint32_t v = 0x9c3889u; esp -= 4; W32(esp, v); }
/* 7229e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7229ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7229ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7229f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7229f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7229f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7229f8: mov esi, ecx */
  esi = ecx;
/* 7229fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7229fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7229ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 722a02: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722a04: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 722a0a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 722a12: jge 0x722a28 */
  if ((sf == of)) goto L_722a28;
L_722a14: /* 722a14: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 722a19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722a1e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 722a23: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722a25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722a25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722a28: /* 722a28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722a2b: jle 0x722a41 */
  if ((zf || sf != of)) goto L_722a41;
L_722a2d: /* 722a2d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 722a32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 722a37: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 722a3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x722a3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722a3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_722a41: /* 722a41: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722a43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722a44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722a46: mov ecx, esi */
  ecx = esi;
/* 722a48: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x722a4eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 722a4e: mov ecx, esi */
  ecx = esi;
/* 722a50: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 722a58: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x722a5eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 722a5e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 722a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722a64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722a65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722a6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722a6f: ret  */
  esp += 4; SPILL(); return;
}

void f_722aa0(void) {
  LOAD_REGS();
L_722aa0: /* 722aa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722aa1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 722aa5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722aa6: mov esi, ecx */
  esi = ecx;
/* 722aa8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 722aaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722aab: je 0x722aed */
  if (zf) goto L_722aed;
L_722aad: /* 722aad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722ab1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722ab3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722ab9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722ab9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722abc: xor edi, edi */
  edi = 0;
/* 722abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722ac0: jle 0x722aed */
  if ((zf || sf != of)) goto L_722aed;
L_722ac2: /* 722ac2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 722ac4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 722ac6: mov ecx, esi */
  ecx = esi;
/* 722ac8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x722aceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 722ace: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 722ad0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 722ad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722ad5: je 0x722ae5 */
  if (zf) goto L_722ae5;
L_722ad7: /* 722ad7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 722ad9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 722adc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 722ade: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 722ae2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_722ae5: /* 722ae5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 722ae8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 722ae9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722aeb: jl 0x722ac2 */
  if ((sf != of)) goto L_722ac2;
L_722aed: /* 722aed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722aee: mov eax, esi */
  eax = esi;
/* 722af0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722af1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722af2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722b20(void) {
  LOAD_REGS();
L_722b20: /* 722b20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 722b24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722b25: mov esi, ecx */
  esi = ecx;
/* 722b27: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722b2a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722b2d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x722b33u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 722b33: xor eax, eax */
  eax = 0;
/* 722b35: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 722b38: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 722b3b: mov dword ptr [esi], 0x9f8368 */
  W32((uint32_t)(esi), 0x9f8368u);
/* 722b41: mov eax, esi */
  eax = esi;
/* 722b43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722b44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722b60(void) {
  LOAD_REGS();
L_722b60: /* 722b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722b61: mov ebp, esp */
  ebp = esp;
/* 722b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722b65: push 0x9c38c7 */
  { uint32_t v = 0x9c38c7u; esp -= 4; W32(esp, v); }
/* 722b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722b78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 722b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722b7d: mov esi, ecx */
  esi = ecx;
/* 722b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722b80: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722b83: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 722b86: mov dword ptr [esi], 0x9f8368 */
  W32((uint32_t)(esi), 0x9f8368u);
/* 722b8c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 722b8f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722b91: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722b98: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 722b9c: je 0x722ba4 */
  if (zf) goto L_722ba4;
L_722b9e: /* 722b9e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 722ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722ba1: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x722ba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_722ba4: /* 722ba4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722ba7: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 722bae: call 0x6c39cc */
  esp -= 4; W32(esp, 0x722bb3u); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 722bb3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722bb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722bb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722bb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722bbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722bc0: mov esp, ebp */
  esp = ebp;
/* 722bc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722bc3: ret  */
  esp += 4; SPILL(); return;
}

void f_722bc4(void) {
  LOAD_REGS();
L_722bc4: /* 722bc4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 722bc7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 722bcc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 722bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 722bd0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 722bd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722bd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722bd8(); return;
}

void f_722bd8(void) {
  LOAD_REGS();
L_722bd8: /* 722bd8: push 0x9f8374 */
  { uint32_t v = 0x9f8374u; esp -= 4; W32(esp, v); }
/* 722bdd: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722be2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722be8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722be8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722bed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722bef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722bf4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722bf4: guest_badaddr(0x722bf4); return;
}

void f_722c30(void) {
  LOAD_REGS();
L_722c30: /* 722c30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722c31: mov ebp, esp */
  ebp = esp;
/* 722c33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722c35: push 0x9c38e0 */
  { uint32_t v = 0x9c38e0u; esp -= 4; W32(esp, v); }
/* 722c3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722c41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722c48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 722c4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722c4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722c4d: mov esi, ecx */
  esi = ecx;
/* 722c4f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722c52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722c55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722c58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722c5f: jge 0x722c80 */
  if ((sf == of)) goto L_722c80;
L_722c61: /* 722c61: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722c64: xor eax, eax */
  eax = 0;
L_722c66: /* 722c66: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722c69: jge 0x722c6e */
  if ((sf == of)) goto L_722c6e;
L_722c6b: /* 722c6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 722c6c: jmp 0x722c66 */
  goto L_722c66;
L_722c6e: /* 722c6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722c70: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722c72: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722c78u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722c78: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722c7b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 722c7d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_722c80: /* 722c80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722c83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722c84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722c85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722c8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722c8d: mov esp, ebp */
  esp = ebp;
/* 722c8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722c90: ret  */
  esp += 4; SPILL(); return;
}

void f_722c91(void) {
  LOAD_REGS();
L_722c91: /* 722c91: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 722c94: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 722c99: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 722c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 722c9d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 722ca0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722ca5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722ca5(); return;
}

void f_722ca5(void) {
  LOAD_REGS();
L_722ca5: /* 722ca5: push 0x9f83b0 */
  { uint32_t v = 0x9f83b0u; esp -= 4; W32(esp, v); }
/* 722caa: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722caf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722cb5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722cba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722cbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722cc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722cc1: guest_badaddr(0x722cc1); return;
}

void f_722d00(void) {
  LOAD_REGS();
L_722d00: /* 722d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 722d04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722d05: mov esi, ecx */
  esi = ecx;
/* 722d07: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722d0a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722d0d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x722d13u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 722d13: xor eax, eax */
  eax = 0;
/* 722d15: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 722d18: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 722d1b: mov dword ptr [esi], 0x9f83e0 */
  W32((uint32_t)(esi), 0x9f83e0u);
/* 722d21: mov eax, esi */
  eax = esi;
/* 722d23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722d24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_722d40(void) {
  LOAD_REGS();
L_722d40: /* 722d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722d41: mov ebp, esp */
  ebp = esp;
/* 722d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722d45: push 0x9c38f0 */
  { uint32_t v = 0x9c38f0u; esp -= 4; W32(esp, v); }
/* 722d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722d58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 722d5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722d5d: mov esi, ecx */
  esi = ecx;
/* 722d5f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722d62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722d64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722d65: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722d68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722d6f: jge 0x722d90 */
  if ((sf == of)) goto L_722d90;
L_722d71: /* 722d71: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722d74: xor eax, eax */
  eax = 0;
L_722d76: /* 722d76: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722d79: jge 0x722d7e */
  if ((sf == of)) goto L_722d7e;
L_722d7b: /* 722d7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 722d7c: jmp 0x722d76 */
  goto L_722d76;
L_722d7e: /* 722d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722d80: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 722d82: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x722d88u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 722d88: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722d8b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 722d8d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_722d90: /* 722d90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722d93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722d94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722d95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722d9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722d9d: mov esp, ebp */
  esp = ebp;
/* 722d9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722da0: ret  */
  esp += 4; SPILL(); return;
}

void f_722da1(void) {
  LOAD_REGS();
L_722da1: /* 722da1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 722da4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 722da9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 722dac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 722dad: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 722db0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722db5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722db5(); return;
}

void f_722db5(void) {
  LOAD_REGS();
L_722db5: /* 722db5: push 0x9f83ec */
  { uint32_t v = 0x9f83ecu; esp -= 4; W32(esp, v); }
/* 722dba: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722dbf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722dc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722dc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722dc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722dca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722dcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722dd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722dd1: guest_badaddr(0x722dd1); return;
}

void f_722e10(void) {
  LOAD_REGS();
L_722e10: /* 722e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722e11: mov ebp, esp */
  ebp = esp;
/* 722e13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722e15: push 0x9c3927 */
  { uint32_t v = 0x9c3927u; esp -= 4; W32(esp, v); }
/* 722e1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722e21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722e28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 722e2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722e2d: mov esi, ecx */
  esi = ecx;
/* 722e2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722e30: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722e33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 722e36: mov dword ptr [esi], 0x9f83e0 */
  W32((uint32_t)(esi), 0x9f83e0u);
/* 722e3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 722e3f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 722e41: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722e48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 722e4c: je 0x722e54 */
  if (zf) goto L_722e54;
L_722e4e: /* 722e4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 722e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722e51: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x722e54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_722e54: /* 722e54: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722e57: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 722e5e: call 0x6c9543 */
  esp -= 4; W32(esp, 0x722e63u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 722e63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722e68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722e6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722e70: mov esp, ebp */
  esp = ebp;
/* 722e72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722e73: ret  */
  esp += 4; SPILL(); return;
}

void f_722e74(void) {
  LOAD_REGS();
L_722e74: /* 722e74: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 722e77: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 722e7c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 722e7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 722e80: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 722e83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722e88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722e88(); return;
}

void f_722e88(void) {
  LOAD_REGS();
L_722e88: /* 722e88: push 0x9f841c */
  { uint32_t v = 0x9f841cu; esp -= 4; W32(esp, v); }
/* 722e8d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722e92: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722e98u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722e9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722e9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722e9f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722ea4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722ea4: guest_badaddr(0x722ea4); return;
}

void f_722ee0(void) {
  LOAD_REGS();
L_722ee0: /* 722ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722ee1: mov ebp, esp */
  ebp = esp;
/* 722ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722ee5: push 0x9c3940 */
  { uint32_t v = 0x9c3940u; esp -= 4; W32(esp, v); }
/* 722eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722ef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 722efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722efd: mov esi, ecx */
  esi = ecx;
/* 722eff: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722f02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 722f04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722f05: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 722f08: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 722f0f: jle 0x722f48 */
  if ((zf || sf != of)) goto L_722f48;
L_722f11: /* 722f11: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 722f14: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 722f16: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x722f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722f19: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 722f1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 722f1e: mov edi, eax */
  edi = eax;
/* 722f20: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722f24: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x722f27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 722f27: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 722f2a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 722f2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722f2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 722f2f: call 0x6c1505 */
  esp -= 4; W32(esp, 0x722f34u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 722f34: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 722f37: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 722f3a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 722f3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722f3f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 722f42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 722f44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722f45: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x722f48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_722f48: /* 722f48: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 722f4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 722f4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 722f4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 722f54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 722f55: mov esp, ebp */
  esp = ebp;
/* 722f57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 722f58: ret  */
  esp += 4; SPILL(); return;
}

void f_722f59(void) {
  LOAD_REGS();
L_722f59: /* 722f59: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 722f5c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 722f61: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 722f64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722f65: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 722f68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722f6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_722f6d(); return;
}

void f_722f6d(void) {
  LOAD_REGS();
L_722f6d: /* 722f6d: push 0x9f8458 */
  { uint32_t v = 0x9f8458u; esp -= 4; W32(esp, v); }
/* 722f72: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 722f77: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x722f7du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 722f7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 722f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722f82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 722f84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x722f89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_722f89: guest_badaddr(0x722f89); return;
}

void f_722fc0(void) {
  LOAD_REGS();
L_722fc0: /* 722fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 722fc2: push 0x9c3959 */
  { uint32_t v = 0x9c3959u; esp -= 4; W32(esp, v); }
/* 722fc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 722fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 722fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 722fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 722fd7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 722fd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 722fd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 722fda: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 722fde: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722fe1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 722fe3: mov esi, ecx */
  esi = ecx;
/* 722fe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 722fe6: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 722fea: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x722ff0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 722ff0: xor ebx, ebx */
  ebx = 0;
/* 722ff2: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 722ff5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 722ff8: xor ebp, ebp */
  ebp = 0;
/* 722ffa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 722ffc: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 723000: jle 0x723046 */
  if ((zf || sf != of)) goto L_723046;
L_723002: /* 723002: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 723004: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723006: mov ecx, esi */
  ecx = esi;
/* 723008: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72300eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72300e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 723010: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 723013: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 723016: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 723018: je 0x72303b */
  if (zf) goto L_72303b;
L_72301a: /* 72301a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72301c: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 72301f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 723021: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 723023: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 723026: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 723029: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 72302c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 72302f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 723032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723033: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 723036: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x72303bu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
L_72303b: /* 72303b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72303e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 72303f: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 723042: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723044: jl 0x723002 */
  if ((sf != of)) goto L_723002;
L_723046: /* 723046: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 72304a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72304b: mov eax, esi */
  eax = esi;
/* 72304d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72304e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72304f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723050: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723057: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72305a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723090(void) {
  LOAD_REGS();
L_723090: /* 723090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723092: push 0x9c3979 */
  { uint32_t v = 0x9c3979u; esp -= 4; W32(esp, v); }
/* 723097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72309d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72309e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7230a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7230a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7230a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7230a8: mov esi, ecx */
  esi = ecx;
/* 7230aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7230ab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7230af: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7230b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7230b4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7230ba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7230c2: jge 0x7230d8 */
  if ((sf == of)) goto L_7230d8;
L_7230c4: /* 7230c4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7230c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7230ce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7230d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7230d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7230d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7230d8: /* 7230d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7230db: jle 0x7230f1 */
  if ((zf || sf != of)) goto L_7230f1;
L_7230dd: /* 7230dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7230e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7230e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7230ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7230eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7230ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7230f1: /* 7230f1: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7230f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7230f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7230f6: mov ecx, esi */
  ecx = esi;
/* 7230f8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7230feu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7230fe: mov ecx, esi */
  ecx = esi;
/* 723100: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723108: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72310eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72310e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723112: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723113: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723114: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723115: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72311c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72311f: ret  */
  esp += 4; SPILL(); return;
}

void f_723150(void) {
  LOAD_REGS();
L_723150: /* 723150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723151: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723152: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723153: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 723157: mov ebx, ecx */
  ebx = ecx;
/* 723159: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72315b: je 0x7231c3 */
  if (zf) goto L_7231c3;
L_72315d: /* 72315d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 723160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723161: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 723163: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723169u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723169: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72316c: xor eax, eax */
  eax = 0;
/* 72316e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723170: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 723174: jle 0x7231c3 */
  if ((zf || sf != of)) goto L_7231c3;
L_723176: /* 723176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723177: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72317b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72317c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_723180: /* 723180: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 723182: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723184: mov ecx, ebx */
  ecx = ebx;
/* 723186: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72318cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72318c: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 72318f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 723191: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 723194: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 723196: je 0x7231a6 */
  if (zf) goto L_7231a6;
L_723198: /* 723198: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72319b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72319f: mov ecx, 0xc */
  ecx = 0xcu;
/* 7231a4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7231a6: /* 7231a6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7231aa: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7231ae: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7231b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7231b2: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7231b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7231b7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7231bb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7231bf: jl 0x723180 */
  if ((sf != of)) goto L_723180;
L_7231c1: /* 7231c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7231c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7231c3: /* 7231c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7231c4: mov eax, ebx */
  eax = ebx;
/* 7231c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7231c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7231c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7231f0(void) {
  LOAD_REGS();
L_7231f0: /* 7231f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7231f2: push 0x9c3999 */
  { uint32_t v = 0x9c3999u; esp -= 4; W32(esp, v); }
/* 7231f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7231fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7231fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723206: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723207: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723208: mov esi, ecx */
  esi = ecx;
/* 72320a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72320b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72320f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723212: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723214: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72321a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723222: jge 0x723238 */
  if ((sf == of)) goto L_723238;
L_723224: /* 723224: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723229: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72322e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723233: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723235: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723238: /* 723238: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72323b: jle 0x723251 */
  if ((zf || sf != of)) goto L_723251;
L_72323d: /* 72323d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723242: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723247: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72324c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72324eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72324e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723251: /* 723251: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 723253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723254: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723256: mov ecx, esi */
  ecx = esi;
/* 723258: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72325eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72325e: mov ecx, esi */
  ecx = esi;
/* 723260: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723268: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72326eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72326e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723274: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723275: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72327c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72327f: ret  */
  esp += 4; SPILL(); return;
}

void f_7232b0(void) {
  LOAD_REGS();
L_7232b0: /* 7232b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7232b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7232b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7232b3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7232b7: mov ebx, ecx */
  ebx = ecx;
/* 7232b9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7232bb: je 0x723320 */
  if (zf) goto L_723320;
L_7232bd: /* 7232bd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7232c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7232c1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7232c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7232c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7232c9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7232cc: xor eax, eax */
  eax = 0;
/* 7232ce: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7232d0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7232d4: jle 0x723320 */
  if ((zf || sf != of)) goto L_723320;
L_7232d6: /* 7232d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7232d7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7232db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7232dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7232e0: /* 7232e0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7232e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7232e4: mov ecx, ebx */
  ecx = ebx;
/* 7232e6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7232ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7232ec: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 7232ef: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7232f1: je 0x723303 */
  if (zf) goto L_723303;
L_7232f3: /* 7232f3: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7232f6: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7232fa: mov ecx, 0x1c */
  ecx = 0x1cu;
/* 7232ff: mov edi, eax */
  edi = eax;
/* 723301: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_723303: /* 723303: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 723307: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72330b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72330e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72330f: add edx, 0x70 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 723312: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723314: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 723318: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72331c: jl 0x7232e0 */
  if ((sf != of)) goto L_7232e0;
L_72331e: /* 72331e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72331f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_723320: /* 723320: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723321: mov eax, ebx */
  eax = ebx;
/* 723323: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723324: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 723325: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723350(void) {
  LOAD_REGS();
L_723350: /* 723350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723352: push 0x9c39b9 */
  { uint32_t v = 0x9c39b9u; esp -= 4; W32(esp, v); }
/* 723357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72335d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72335e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723366: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723368: mov esi, ecx */
  esi = ecx;
/* 72336a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72336b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72336f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723372: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723374: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72337a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723382: jge 0x723398 */
  if ((sf == of)) goto L_723398;
L_723384: /* 723384: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723389: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72338e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723393: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723395: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723398: /* 723398: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72339b: jle 0x7233b1 */
  if ((zf || sf != of)) goto L_7233b1;
L_72339d: /* 72339d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7233a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7233a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7233ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7233aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7233ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7233b1: /* 7233b1: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7233b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7233b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7233b6: mov ecx, esi */
  ecx = esi;
/* 7233b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7233beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7233be: mov ecx, esi */
  ecx = esi;
/* 7233c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7233c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7233ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7233ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7233d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7233d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7233d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7233d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7233dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7233df: ret  */
  esp += 4; SPILL(); return;
}

void f_723410(void) {
  LOAD_REGS();
L_723410: /* 723410: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723411: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723412: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723413: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 723417: mov ebx, ecx */
  ebx = ecx;
/* 723419: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72341b: je 0x723480 */
  if (zf) goto L_723480;
L_72341d: /* 72341d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 723420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723421: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 723423: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723429u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723429: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72342c: xor eax, eax */
  eax = 0;
/* 72342e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723430: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 723434: jle 0x723480 */
  if ((zf || sf != of)) goto L_723480;
L_723436: /* 723436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723437: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72343b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72343c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_723440: /* 723440: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 723442: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723444: mov ecx, ebx */
  ecx = ebx;
/* 723446: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72344cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72344c: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 72344f: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 723451: je 0x723463 */
  if (zf) goto L_723463;
L_723453: /* 723453: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 723456: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72345a: mov ecx, 0xf */
  ecx = 0xfu;
/* 72345f: mov edi, eax */
  edi = eax;
/* 723461: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_723463: /* 723463: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 723467: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72346b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72346e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72346f: add edx, 0x3c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 723472: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723474: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 723478: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72347c: jl 0x723440 */
  if ((sf != of)) goto L_723440;
L_72347e: /* 72347e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72347f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_723480: /* 723480: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723481: mov eax, ebx */
  eax = ebx;
/* 723483: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723484: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 723485: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7234b0(void) {
  LOAD_REGS();
L_7234b0: /* 7234b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7234b2: push 0x9c39d9 */
  { uint32_t v = 0x9c39d9u; esp -= 4; W32(esp, v); }
/* 7234b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7234bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7234be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7234c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7234c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7234c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7234c8: mov esi, ecx */
  esi = ecx;
/* 7234ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7234cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7234cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7234d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7234d4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7234da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7234e2: jge 0x7234f8 */
  if ((sf == of)) goto L_7234f8;
L_7234e4: /* 7234e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7234e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7234ee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7234f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7234f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7234f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7234f8: /* 7234f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7234fb: jle 0x723511 */
  if ((zf || sf != of)) goto L_723511;
L_7234fd: /* 7234fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723502: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723507: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72350c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72350eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72350e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723511: /* 723511: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 723513: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723514: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723516: mov ecx, esi */
  ecx = esi;
/* 723518: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72351eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72351e: mov ecx, esi */
  ecx = esi;
/* 723520: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723528: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72352eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72352e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723532: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723534: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723535: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72353c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72353f: ret  */
  esp += 4; SPILL(); return;
}

void f_723570(void) {
  LOAD_REGS();
L_723570: /* 723570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723572: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723573: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 723577: mov ebx, ecx */
  ebx = ecx;
/* 723579: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72357b: je 0x7235e0 */
  if (zf) goto L_7235e0;
L_72357d: /* 72357d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 723580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723581: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 723583: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723589u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723589: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72358c: xor eax, eax */
  eax = 0;
/* 72358e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723590: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 723594: jle 0x7235e0 */
  if ((zf || sf != of)) goto L_7235e0;
L_723596: /* 723596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723597: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72359b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72359c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7235a0: /* 7235a0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7235a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7235a4: mov ecx, ebx */
  ecx = ebx;
/* 7235a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7235acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7235ac: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7235af: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7235b1: je 0x7235c3 */
  if (zf) goto L_7235c3;
L_7235b3: /* 7235b3: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7235b6: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7235ba: mov ecx, 0xb */
  ecx = 0xbu;
/* 7235bf: mov edi, eax */
  edi = eax;
/* 7235c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7235c3: /* 7235c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7235c7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7235cb: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7235ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7235cf: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7235d2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7235d4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7235d8: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7235dc: jl 0x7235a0 */
  if ((sf != of)) goto L_7235a0;
L_7235de: /* 7235de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7235df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7235e0: /* 7235e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7235e1: mov eax, ebx */
  eax = ebx;
/* 7235e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7235e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7235e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723610(void) {
  LOAD_REGS();
L_723610: /* 723610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723612: push 0x9c39f9 */
  { uint32_t v = 0x9c39f9u; esp -= 4; W32(esp, v); }
/* 723617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72361d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72361e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723628: mov esi, ecx */
  esi = ecx;
/* 72362a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72362b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72362f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723632: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723634: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72363a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723642: jge 0x723658 */
  if ((sf == of)) goto L_723658;
L_723644: /* 723644: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723649: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72364e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723653: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723655: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723658: /* 723658: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72365b: jle 0x723671 */
  if ((zf || sf != of)) goto L_723671;
L_72365d: /* 72365d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723662: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723667: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72366c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72366eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72366e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723671: /* 723671: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 723673: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723676: mov ecx, esi */
  ecx = esi;
/* 723678: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72367eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72367e: mov ecx, esi */
  ecx = esi;
/* 723680: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723688: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72368eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72368e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723695: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72369c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72369f: ret  */
  esp += 4; SPILL(); return;
}

void f_7236d0(void) {
  LOAD_REGS();
L_7236d0: /* 7236d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7236d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7236d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7236d3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7236d7: mov ebx, ecx */
  ebx = ecx;
/* 7236d9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7236db: je 0x723742 */
  if (zf) goto L_723742;
L_7236dd: /* 7236dd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7236e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7236e1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7236e3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7236e9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7236e9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7236ec: xor eax, eax */
  eax = 0;
/* 7236ee: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7236f0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7236f4: jle 0x723742 */
  if ((zf || sf != of)) goto L_723742;
L_7236f6: /* 7236f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7236f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7236fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7236fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_723700: /* 723700: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 723702: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723704: mov ecx, ebx */
  ecx = ebx;
/* 723706: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72370cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72370c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 72370e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 723711: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 723713: je 0x723725 */
  if (zf) goto L_723725;
L_723715: /* 723715: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 723718: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72371c: mov ecx, 8 */
  ecx = 0x8u;
/* 723721: mov edi, eax */
  edi = eax;
/* 723723: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_723725: /* 723725: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 723729: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72372d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 723730: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 723731: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 723734: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723736: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72373a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72373e: jl 0x723700 */
  if ((sf != of)) goto L_723700;
L_723740: /* 723740: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_723742: /* 723742: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723743: mov eax, ebx */
  eax = ebx;
/* 723745: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723746: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 723747: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723770(void) {
  LOAD_REGS();
L_723770: /* 723770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723772: push 0x9c3a19 */
  { uint32_t v = 0x9c3a19u; esp -= 4; W32(esp, v); }
/* 723777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72377d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72377e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723786: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723788: mov esi, ecx */
  esi = ecx;
/* 72378a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72378b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72378f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723792: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723794: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72379a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7237a2: jge 0x7237b8 */
  if ((sf == of)) goto L_7237b8;
L_7237a4: /* 7237a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7237a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7237ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7237b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7237b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7237b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7237b8: /* 7237b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7237bb: jle 0x7237d1 */
  if ((zf || sf != of)) goto L_7237d1;
L_7237bd: /* 7237bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7237c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7237c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7237cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7237ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7237ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7237d1: /* 7237d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7237d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7237d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7237d6: mov ecx, esi */
  ecx = esi;
/* 7237d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7237deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7237de: mov ecx, esi */
  ecx = esi;
/* 7237e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7237e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7237eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7237ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7237f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7237f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7237f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7237f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7237fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7237ff: ret  */
  esp += 4; SPILL(); return;
}

void f_723830(void) {
  LOAD_REGS();
L_723830: /* 723830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723832: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723833: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 723837: mov esi, ecx */
  esi = ecx;
/* 723839: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72383b: je 0x723876 */
  if (zf) goto L_723876;
L_72383d: /* 72383d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723841: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723843: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723849u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723849: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72384c: xor ebx, ebx */
  ebx = 0;
/* 72384e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723850: jle 0x723876 */
  if ((zf || sf != of)) goto L_723876;
L_723852: /* 723852: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723854: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723856: mov ecx, esi */
  ecx = esi;
/* 723858: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72385eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72385e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 723860: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 723863: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 723865: je 0x72386e */
  if (zf) goto L_72386e;
L_723867: /* 723867: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 723869: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 72386c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_72386e: /* 72386e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723871: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 723872: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723874: jl 0x723852 */
  if ((sf != of)) goto L_723852;
L_723876: /* 723876: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723877: mov eax, esi */
  eax = esi;
/* 723879: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72387a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72387b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7238a0(void) {
  LOAD_REGS();
L_7238a0: /* 7238a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7238a2: push 0x9c3a39 */
  { uint32_t v = 0x9c3a39u; esp -= 4; W32(esp, v); }
/* 7238a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7238ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7238ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7238b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7238b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7238b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7238b8: mov esi, ecx */
  esi = ecx;
/* 7238ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7238bb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7238bf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7238c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7238c4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7238ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7238d2: jge 0x7238e8 */
  if ((sf == of)) goto L_7238e8;
L_7238d4: /* 7238d4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7238d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7238de: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7238e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7238e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7238e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7238e8: /* 7238e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7238eb: jle 0x723901 */
  if ((zf || sf != of)) goto L_723901;
L_7238ed: /* 7238ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7238f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7238f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7238fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7238feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7238fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723901: /* 723901: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723903: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723904: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723906: mov ecx, esi */
  ecx = esi;
/* 723908: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72390eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72390e: mov ecx, esi */
  ecx = esi;
/* 723910: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723918: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72391eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72391e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723925: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72392c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72392f: ret  */
  esp += 4; SPILL(); return;
}

void f_723960(void) {
  LOAD_REGS();
L_723960: /* 723960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723963: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 723967: mov esi, ecx */
  esi = ecx;
/* 723969: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72396b: je 0x7239a6 */
  if (zf) goto L_7239a6;
L_72396d: /* 72396d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723971: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723973: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723979u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723979: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72397c: xor ebx, ebx */
  ebx = 0;
/* 72397e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723980: jle 0x7239a6 */
  if ((zf || sf != of)) goto L_7239a6;
L_723982: /* 723982: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723984: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723986: mov ecx, esi */
  ecx = esi;
/* 723988: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72398eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72398e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 723990: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 723993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 723995: je 0x72399e */
  if (zf) goto L_72399e;
L_723997: /* 723997: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 723999: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 72399c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_72399e: /* 72399e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7239a1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7239a2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7239a4: jl 0x723982 */
  if ((sf != of)) goto L_723982;
L_7239a6: /* 7239a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7239a7: mov eax, esi */
  eax = esi;
/* 7239a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7239aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7239ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7239d0(void) {
  LOAD_REGS();
L_7239d0: /* 7239d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7239d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7239d5: mov esi, ecx */
  esi = ecx;
/* 7239d7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7239d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7239da: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7239dd: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7239e3u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7239e3: xor eax, eax */
  eax = 0;
/* 7239e5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7239e8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7239eb: mov dword ptr [esi], 0x9f8480 */
  W32((uint32_t)(esi), 0x9f8480u);
/* 7239f1: mov eax, esi */
  eax = esi;
/* 7239f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7239f4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723a10(void) {
  LOAD_REGS();
L_723a10: /* 723a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723a11: mov ebp, esp */
  ebp = esp;
/* 723a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723a15: push 0x9c3a77 */
  { uint32_t v = 0x9c3a77u; esp -= 4; W32(esp, v); }
/* 723a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723a28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 723a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723a2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723a2d: mov esi, ecx */
  esi = ecx;
/* 723a2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723a30: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 723a33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 723a36: mov dword ptr [esi], 0x9f8480 */
  W32((uint32_t)(esi), 0x9f8480u);
/* 723a3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 723a3f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 723a41: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 723a48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 723a4c: je 0x723a54 */
  if (zf) goto L_723a54;
L_723a4e: /* 723a4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 723a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723a51: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x723a54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_723a54: /* 723a54: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 723a57: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 723a5e: call 0x6c9647 */
  esp -= 4; W32(esp, 0x723a63u); SPILL(); f_6c9647(); if (g_unwind) return; RELOAD();
/* 723a63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 723a66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723a67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723a68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723a6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723a70: mov esp, ebp */
  esp = ebp;
/* 723a72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723a73: ret  */
  esp += 4; SPILL(); return;
}

void f_723a74(void) {
  LOAD_REGS();
L_723a74: /* 723a74: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 723a77: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 723a7c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 723a7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 723a80: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 723a83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x723a88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_723a88(); return;
}

void f_723a88(void) {
  LOAD_REGS();
L_723a88: /* 723a88: push 0x9f848c */
  { uint32_t v = 0x9f848cu; esp -= 4; W32(esp, v); }
/* 723a8d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 723a92: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x723a98u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 723a98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 723a9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723a9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723a9f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x723aa4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_723aa4: guest_badaddr(0x723aa4); return;
}

void f_723ae0(void) {
  LOAD_REGS();
L_723ae0: /* 723ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723ae1: mov ebp, esp */
  ebp = esp;
/* 723ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723ae5: push 0x9c3a90 */
  { uint32_t v = 0x9c3a90u; esp -= 4; W32(esp, v); }
/* 723aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723af8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 723afb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723afd: mov esi, ecx */
  esi = ecx;
/* 723aff: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 723b02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723b04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723b05: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 723b08: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 723b0f: jge 0x723b30 */
  if ((sf == of)) goto L_723b30;
L_723b11: /* 723b11: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 723b14: xor eax, eax */
  eax = 0;
L_723b16: /* 723b16: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723b19: jge 0x723b1e */
  if ((sf == of)) goto L_723b1e;
L_723b1b: /* 723b1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 723b1c: jmp 0x723b16 */
  goto L_723b16;
L_723b1e: /* 723b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723b20: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 723b22: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723b28u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723b28: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 723b2b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 723b2d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_723b30: /* 723b30: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 723b33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723b34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723b35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723b3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723b3d: mov esp, ebp */
  esp = ebp;
/* 723b3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723b40: ret  */
  esp += 4; SPILL(); return;
}

void f_723b41(void) {
  LOAD_REGS();
L_723b41: /* 723b41: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 723b44: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 723b49: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 723b4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 723b4d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 723b50: call 0x99caf8 */
  esp -= 4; W32(esp, 0x723b55u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_723b55(); return;
}

void f_723b55(void) {
  LOAD_REGS();
L_723b55: /* 723b55: push 0x9f84c8 */
  { uint32_t v = 0x9f84c8u; esp -= 4; W32(esp, v); }
/* 723b5a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 723b5f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x723b65u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 723b65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 723b68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723b6c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x723b71u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_723b71: guest_badaddr(0x723b71); return;
}

void f_723bb0(void) {
  LOAD_REGS();
L_723bb0: /* 723bb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723bb2: push 0x9c3aa9 */
  { uint32_t v = 0x9c3aa9u; esp -= 4; W32(esp, v); }
/* 723bb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723bbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723bc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723bc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723bc8: mov esi, ecx */
  esi = ecx;
/* 723bca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723bcb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 723bcf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723bd2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723bd4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 723bda: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723be2: jge 0x723bf8 */
  if ((sf == of)) goto L_723bf8;
L_723be4: /* 723be4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723be9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723bee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723bf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723bf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723bf8: /* 723bf8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723bfb: jle 0x723c11 */
  if ((zf || sf != of)) goto L_723c11;
L_723bfd: /* 723bfd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723c02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723c07: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 723c0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723c0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723c0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723c11: /* 723c11: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 723c13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723c14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723c16: mov ecx, esi */
  ecx = esi;
/* 723c18: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x723c1eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 723c1e: mov ecx, esi */
  ecx = esi;
/* 723c20: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723c28: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x723c2eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 723c2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723c32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723c33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723c34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723c35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723c3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 723c3f: ret  */
  esp += 4; SPILL(); return;
}

void f_723c70(void) {
  LOAD_REGS();
L_723c70: /* 723c70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723c71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723c72: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723c73: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 723c77: mov ebx, ecx */
  ebx = ecx;
/* 723c79: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 723c7b: je 0x723ce2 */
  if (zf) goto L_723ce2;
L_723c7d: /* 723c7d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 723c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723c81: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 723c83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723c89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723c89: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 723c8c: xor eax, eax */
  eax = 0;
/* 723c8e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723c90: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 723c94: jle 0x723ce2 */
  if ((zf || sf != of)) goto L_723ce2;
L_723c96: /* 723c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723c97: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 723c9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723c9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_723ca0: /* 723ca0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 723ca2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723ca4: mov ecx, ebx */
  ecx = ebx;
/* 723ca6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x723cacu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 723cac: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 723cae: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 723cb1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 723cb3: je 0x723cc5 */
  if (zf) goto L_723cc5;
L_723cb5: /* 723cb5: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 723cb8: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 723cbc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 723cc1: mov edi, eax */
  edi = eax;
/* 723cc3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_723cc5: /* 723cc5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 723cc9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 723ccd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 723cd0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 723cd1: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 723cd4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723cd6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 723cda: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 723cde: jl 0x723ca0 */
  if ((sf != of)) goto L_723ca0;
L_723ce0: /* 723ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723ce1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_723ce2: /* 723ce2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 723ce3: mov eax, ebx */
  eax = ebx;
/* 723ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723ce6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 723ce7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723d10(void) {
  LOAD_REGS();
L_723d10: /* 723d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723d12: push 0x9c3ac9 */
  { uint32_t v = 0x9c3ac9u; esp -= 4; W32(esp, v); }
/* 723d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723d27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723d28: mov esi, ecx */
  esi = ecx;
/* 723d2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723d2b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 723d2f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723d32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723d34: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 723d3a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723d42: jge 0x723d58 */
  if ((sf == of)) goto L_723d58;
L_723d44: /* 723d44: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723d49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723d4e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723d53: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723d55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723d58: /* 723d58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723d5b: jle 0x723d71 */
  if ((zf || sf != of)) goto L_723d71;
L_723d5d: /* 723d5d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723d62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723d67: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 723d6c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723d6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723d71: /* 723d71: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723d73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723d74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723d76: mov ecx, esi */
  ecx = esi;
/* 723d78: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x723d7eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 723d7e: mov ecx, esi */
  ecx = esi;
/* 723d80: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723d88: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x723d8eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 723d8e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723d92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723d93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723d94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723d95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723d9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 723d9f: ret  */
  esp += 4; SPILL(); return;
}

void f_723dd0(void) {
  LOAD_REGS();
L_723dd0: /* 723dd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723dd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723dd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723dd3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 723dd7: mov esi, ecx */
  esi = ecx;
/* 723dd9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 723ddb: je 0x723e16 */
  if (zf) goto L_723e16;
L_723ddd: /* 723ddd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723de1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723de3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723de9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723de9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723dec: xor ebx, ebx */
  ebx = 0;
/* 723dee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723df0: jle 0x723e16 */
  if ((zf || sf != of)) goto L_723e16;
L_723df2: /* 723df2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 723df4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723df6: mov ecx, esi */
  ecx = esi;
/* 723df8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x723dfeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 723dfe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 723e00: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 723e03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 723e05: je 0x723e0e */
  if (zf) goto L_723e0e;
L_723e07: /* 723e07: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 723e09: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 723e0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_723e0e: /* 723e0e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723e11: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 723e12: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723e14: jl 0x723df2 */
  if ((sf != of)) goto L_723df2;
L_723e16: /* 723e16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723e17: mov eax, esi */
  eax = esi;
/* 723e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723e1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723e1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723e40(void) {
  LOAD_REGS();
L_723e40: /* 723e40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723e42: push 0x9c3ae9 */
  { uint32_t v = 0x9c3ae9u; esp -= 4; W32(esp, v); }
/* 723e47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723e4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723e4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723e55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723e56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723e57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723e58: mov esi, ecx */
  esi = ecx;
/* 723e5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723e5b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 723e5f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723e62: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723e64: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 723e6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723e72: jge 0x723e88 */
  if ((sf == of)) goto L_723e88;
L_723e74: /* 723e74: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723e79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723e7e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723e83: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723e85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723e85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723e88: /* 723e88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723e8b: jle 0x723ea1 */
  if ((zf || sf != of)) goto L_723ea1;
L_723e8d: /* 723e8d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723e92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723e97: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 723e9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723e9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723e9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723ea1: /* 723ea1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 723ea3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723ea4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723ea6: mov ecx, esi */
  ecx = esi;
/* 723ea8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x723eaeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 723eae: mov ecx, esi */
  ecx = esi;
/* 723eb0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 723eb8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x723ebeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 723ebe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 723ec2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723ec3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723ec4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723ec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 723ecc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 723ecf: ret  */
  esp += 4; SPILL(); return;
}

void f_723f00(void) {
  LOAD_REGS();
L_723f00: /* 723f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723f03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 723f07: mov esi, ecx */
  esi = ecx;
/* 723f09: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 723f0b: je 0x723f60 */
  if (zf) goto L_723f60;
L_723f0d: /* 723f0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723f11: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 723f13: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x723f19u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 723f19: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723f1c: xor ebx, ebx */
  ebx = 0;
/* 723f1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723f20: jle 0x723f60 */
  if ((zf || sf != of)) goto L_723f60;
L_723f22: /* 723f22: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 723f23: xor ebp, ebp */
  ebp = 0;
L_723f25: /* 723f25: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 723f27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 723f29: mov ecx, esi */
  ecx = esi;
/* 723f2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x723f31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 723f31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 723f33: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 723f36: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 723f38: je 0x723f54 */
  if (zf) goto L_723f54;
L_723f3a: /* 723f3a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 723f3c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 723f3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 723f40: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 723f42: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 723f45: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 723f48: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 723f4b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 723f4e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 723f51: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_723f54: /* 723f54: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 723f57: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 723f58: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 723f5b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723f5d: jl 0x723f25 */
  if ((sf != of)) goto L_723f25;
L_723f5f: /* 723f5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_723f60: /* 723f60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 723f61: mov eax, esi */
  eax = esi;
/* 723f63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 723f64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 723f65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_723f90(void) {
  LOAD_REGS();
L_723f90: /* 723f90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 723f92: push 0x9c3b09 */
  { uint32_t v = 0x9c3b09u; esp -= 4; W32(esp, v); }
/* 723f97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 723f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 723f9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 723fa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 723fa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 723fa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 723fa8: mov esi, ecx */
  esi = ecx;
/* 723faa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723fab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 723faf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 723fb2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 723fb4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 723fba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 723fc2: jge 0x723fd8 */
  if ((sf == of)) goto L_723fd8;
L_723fc4: /* 723fc4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 723fc9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723fce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 723fd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723fd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723fd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723fd8: /* 723fd8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 723fdb: jle 0x723ff1 */
  if ((zf || sf != of)) goto L_723ff1;
L_723fdd: /* 723fdd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 723fe2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 723fe7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 723fec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x723feeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 723fee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_723ff1: /* 723ff1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 723ff3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 723ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 723ff6: mov ecx, esi */
  ecx = esi;
/* 723ff8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x723ffeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 723ffe: mov ecx, esi */
  ecx = esi;
/* 724000: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724008: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72400eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72400e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724012: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724013: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724014: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724015: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72401c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72401f: ret  */
  esp += 4; SPILL(); return;
}

void f_724050(void) {
  LOAD_REGS();
L_724050: /* 724050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724051: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724052: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724053: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 724057: mov ebx, ecx */
  ebx = ecx;
/* 724059: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72405b: je 0x7240c3 */
  if (zf) goto L_7240c3;
L_72405d: /* 72405d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 724060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724061: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 724063: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x724069u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 724069: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72406c: xor eax, eax */
  eax = 0;
/* 72406e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724070: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 724074: jle 0x7240c3 */
  if ((zf || sf != of)) goto L_7240c3;
L_724076: /* 724076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724077: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72407b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72407c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_724080: /* 724080: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 724082: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724084: mov ecx, ebx */
  ecx = ebx;
/* 724086: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72408cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72408c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 72408e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 724091: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 724094: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 724096: je 0x7240a6 */
  if (zf) goto L_7240a6;
L_724098: /* 724098: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72409b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72409f: mov ecx, 5 */
  ecx = 0x5u;
/* 7240a4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7240a6: /* 7240a6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7240aa: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7240ae: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7240b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7240b2: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7240b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7240b7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7240bb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7240bf: jl 0x724080 */
  if ((sf != of)) goto L_724080;
L_7240c1: /* 7240c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7240c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7240c3: /* 7240c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7240c4: mov eax, ebx */
  eax = ebx;
/* 7240c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7240c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7240c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7240f0(void) {
  LOAD_REGS();
L_7240f0: /* 7240f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7240f2: push 0x9c3b29 */
  { uint32_t v = 0x9c3b29u; esp -= 4; W32(esp, v); }
/* 7240f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7240fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7240fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724106: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724107: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724108: mov esi, ecx */
  esi = ecx;
/* 72410a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72410b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72410f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724112: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724114: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72411a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724122: jge 0x724138 */
  if ((sf == of)) goto L_724138;
L_724124: /* 724124: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724129: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72412e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724133: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724135: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724138: /* 724138: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72413b: jle 0x724151 */
  if ((zf || sf != of)) goto L_724151;
L_72413d: /* 72413d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724142: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724147: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72414c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72414eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72414e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724151: /* 724151: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 724153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724154: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724156: mov ecx, esi */
  ecx = esi;
/* 724158: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72415eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72415e: mov ecx, esi */
  ecx = esi;
/* 724160: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724168: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72416eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72416e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724172: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724173: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724174: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724175: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72417c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72417f: ret  */
  esp += 4; SPILL(); return;
}

void f_7241b0(void) {
  LOAD_REGS();
L_7241b0: /* 7241b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7241b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7241b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7241b3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7241b7: mov ebx, ecx */
  ebx = ecx;
/* 7241b9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7241bb: je 0x724220 */
  if (zf) goto L_724220;
L_7241bd: /* 7241bd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7241c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7241c1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7241c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7241c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7241c9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7241cc: xor eax, eax */
  eax = 0;
/* 7241ce: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7241d0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7241d4: jle 0x724220 */
  if ((zf || sf != of)) goto L_724220;
L_7241d6: /* 7241d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7241d7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7241db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7241dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7241e0: /* 7241e0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7241e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7241e4: mov ecx, ebx */
  ecx = ebx;
/* 7241e6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7241ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7241ec: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7241ef: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7241f1: je 0x724203 */
  if (zf) goto L_724203;
L_7241f3: /* 7241f3: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7241f6: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7241fa: mov ecx, 7 */
  ecx = 0x7u;
/* 7241ff: mov edi, eax */
  edi = eax;
/* 724201: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_724203: /* 724203: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 724207: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72420b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72420e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72420f: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 724212: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724214: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 724218: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72421c: jl 0x7241e0 */
  if ((sf != of)) goto L_7241e0;
L_72421e: /* 72421e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72421f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_724220: /* 724220: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 724221: mov eax, ebx */
  eax = ebx;
/* 724223: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724224: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 724225: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724250(void) {
  LOAD_REGS();
L_724250: /* 724250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724252: push 0x9c3b49 */
  { uint32_t v = 0x9c3b49u; esp -= 4; W32(esp, v); }
/* 724257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72425d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72425e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724266: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724268: mov esi, ecx */
  esi = ecx;
/* 72426a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72426b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72426f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724272: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724274: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72427a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724282: jge 0x724298 */
  if ((sf == of)) goto L_724298;
L_724284: /* 724284: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724289: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72428e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724293: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724295: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724298: /* 724298: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72429b: jle 0x7242b1 */
  if ((zf || sf != of)) goto L_7242b1;
L_72429d: /* 72429d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7242a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7242a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7242ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7242aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7242ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7242b1: /* 7242b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7242b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7242b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7242b6: mov ecx, esi */
  ecx = esi;
/* 7242b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7242beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7242be: mov ecx, esi */
  ecx = esi;
/* 7242c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7242c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7242ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7242ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7242d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7242d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7242d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7242d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7242dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7242df: ret  */
  esp += 4; SPILL(); return;
}

void f_724310(void) {
  LOAD_REGS();
L_724310: /* 724310: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724313: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 724317: mov esi, ecx */
  esi = ecx;
/* 724319: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72431b: je 0x724356 */
  if (zf) goto L_724356;
L_72431d: /* 72431d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724321: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 724323: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x724329u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 724329: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72432c: xor ebx, ebx */
  ebx = 0;
/* 72432e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724330: jle 0x724356 */
  if ((zf || sf != of)) goto L_724356;
L_724332: /* 724332: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 724334: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724336: mov ecx, esi */
  ecx = esi;
/* 724338: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72433eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72433e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 724340: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 724343: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 724345: je 0x72434e */
  if (zf) goto L_72434e;
L_724347: /* 724347: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 724349: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 72434c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_72434e: /* 72434e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724351: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 724352: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724354: jl 0x724332 */
  if ((sf != of)) goto L_724332;
L_724356: /* 724356: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724357: mov eax, esi */
  eax = esi;
/* 724359: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72435a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72435b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724380(void) {
  LOAD_REGS();
L_724380: /* 724380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724382: push 0x9c3b69 */
  { uint32_t v = 0x9c3b69u; esp -= 4; W32(esp, v); }
/* 724387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72438d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72438e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724398: mov esi, ecx */
  esi = ecx;
/* 72439a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72439b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72439f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7243a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7243a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7243aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7243b2: jge 0x7243c8 */
  if ((sf == of)) goto L_7243c8;
L_7243b4: /* 7243b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7243b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7243be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7243c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7243c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7243c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7243c8: /* 7243c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7243cb: jle 0x7243e1 */
  if ((zf || sf != of)) goto L_7243e1;
L_7243cd: /* 7243cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7243d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7243d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7243dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7243deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7243de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7243e1: /* 7243e1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7243e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7243e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7243e6: mov ecx, esi */
  ecx = esi;
/* 7243e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7243eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7243ee: mov ecx, esi */
  ecx = esi;
/* 7243f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7243f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7243feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7243fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724402: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724405: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72440c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72440f: ret  */
  esp += 4; SPILL(); return;
}

void f_724440(void) {
  LOAD_REGS();
L_724440: /* 724440: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724442: push 0x9c3b89 */
  { uint32_t v = 0x9c3b89u; esp -= 4; W32(esp, v); }
/* 724447: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72444d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72444e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724457: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724458: mov esi, ecx */
  esi = ecx;
/* 72445a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72445b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72445f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724462: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724464: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72446a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724472: jge 0x724488 */
  if ((sf == of)) goto L_724488;
L_724474: /* 724474: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724479: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72447e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724483: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724485: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724488: /* 724488: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72448b: jle 0x7244a1 */
  if ((zf || sf != of)) goto L_7244a1;
L_72448d: /* 72448d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724492: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724497: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72449c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72449eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72449e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7244a1: /* 7244a1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7244a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7244a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7244a6: mov ecx, esi */
  ecx = esi;
/* 7244a8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7244aeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7244ae: mov ecx, esi */
  ecx = esi;
/* 7244b0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7244b8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7244beu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7244be: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7244c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7244c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7244c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7244c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7244cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7244cf: ret  */
  esp += 4; SPILL(); return;
}

void f_724500(void) {
  LOAD_REGS();
L_724500: /* 724500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724502: push 0x9c3ba9 */
  { uint32_t v = 0x9c3ba9u; esp -= 4; W32(esp, v); }
/* 724507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72450d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72450e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724518: mov esi, ecx */
  esi = ecx;
/* 72451a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72451b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72451f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724522: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724524: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72452a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724532: jge 0x724548 */
  if ((sf == of)) goto L_724548;
L_724534: /* 724534: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724539: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72453e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724543: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724545: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724548: /* 724548: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72454b: jle 0x724561 */
  if ((zf || sf != of)) goto L_724561;
L_72454d: /* 72454d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724552: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724557: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72455c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72455eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72455e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724561: /* 724561: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 724566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724569: mov ecx, esi */
  ecx = esi;
/* 72456b: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x724571u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 724571: mov ecx, esi */
  ecx = esi;
/* 724573: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 72457b: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x724581u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 724581: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724585: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724587: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724588: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72458f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724592: ret  */
  esp += 4; SPILL(); return;
}

void f_7245d0(void) {
  LOAD_REGS();
L_7245d0: /* 7245d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7245d2: push 0x9c3bc9 */
  { uint32_t v = 0x9c3bc9u; esp -= 4; W32(esp, v); }
/* 7245d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7245dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7245de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7245e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7245e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7245e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7245e8: mov esi, ecx */
  esi = ecx;
/* 7245ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7245eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7245ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7245f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7245f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7245fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724602: jge 0x724618 */
  if ((sf == of)) goto L_724618;
L_724604: /* 724604: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724609: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72460e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724613: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724615: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724618: /* 724618: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72461b: jle 0x724631 */
  if ((zf || sf != of)) goto L_724631;
L_72461d: /* 72461d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724622: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724627: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72462c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72462eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72462e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724631: /* 724631: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 724633: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724634: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724636: mov ecx, esi */
  ecx = esi;
/* 724638: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72463eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72463e: mov ecx, esi */
  ecx = esi;
/* 724640: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724648: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72464eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72464e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724653: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724654: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724655: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72465c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72465f: ret  */
  esp += 4; SPILL(); return;
}

void f_724690(void) {
  LOAD_REGS();
L_724690: /* 724690: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724691: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724693: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 724697: mov esi, ecx */
  esi = ecx;
/* 724699: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72469b: je 0x7246ed */
  if (zf) goto L_7246ed;
L_72469d: /* 72469d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7246a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7246a1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7246a3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7246a9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7246a9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7246ac: xor ebx, ebx */
  ebx = 0;
/* 7246ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7246b0: jle 0x7246ed */
  if ((zf || sf != of)) goto L_7246ed;
L_7246b2: /* 7246b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7246b3: xor ebp, ebp */
  ebp = 0;
L_7246b5: /* 7246b5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7246b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7246b9: mov ecx, esi */
  ecx = esi;
/* 7246bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7246c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7246c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7246c3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7246c6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7246c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7246cb: je 0x7246e1 */
  if (zf) goto L_7246e1;
L_7246cd: /* 7246cd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7246cf: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7246d1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7246d3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7246d5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7246d8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7246db: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7246de: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7246e1: /* 7246e1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7246e4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7246e5: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7246e8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7246ea: jl 0x7246b5 */
  if ((sf != of)) goto L_7246b5;
L_7246ec: /* 7246ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7246ed: /* 7246ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7246ee: mov eax, esi */
  eax = esi;
/* 7246f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7246f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7246f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724720(void) {
  LOAD_REGS();
L_724720: /* 724720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724722: push 0x9c3be9 */
  { uint32_t v = 0x9c3be9u; esp -= 4; W32(esp, v); }
/* 724727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72472d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72472e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724736: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724738: mov esi, ecx */
  esi = ecx;
/* 72473a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72473b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72473f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724742: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724744: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72474a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724752: jge 0x724768 */
  if ((sf == of)) goto L_724768;
L_724754: /* 724754: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724759: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72475e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724763: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724765: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724768: /* 724768: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72476b: jle 0x724781 */
  if ((zf || sf != of)) goto L_724781;
L_72476d: /* 72476d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724772: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724777: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 72477c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x72477eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 72477e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724781: /* 724781: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 724783: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724786: mov ecx, esi */
  ecx = esi;
/* 724788: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72478eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72478e: mov ecx, esi */
  ecx = esi;
/* 724790: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724798: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72479eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72479e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7247a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7247a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7247a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7247a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7247ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7247af: ret  */
  esp += 4; SPILL(); return;
}

void f_7247e0(void) {
  LOAD_REGS();
L_7247e0: /* 7247e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7247e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7247e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7247e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7247e7: mov esi, ecx */
  esi = ecx;
/* 7247e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7247eb: je 0x724833 */
  if (zf) goto L_724833;
L_7247ed: /* 7247ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7247f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7247f1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7247f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7247f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7247f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7247fc: xor ebx, ebx */
  ebx = 0;
/* 7247fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724800: jle 0x724833 */
  if ((zf || sf != of)) goto L_724833;
L_724802: /* 724802: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724803: xor ebp, ebp */
  ebp = 0;
L_724805: /* 724805: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 724807: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724809: mov ecx, esi */
  ecx = esi;
/* 72480b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x724811u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 724811: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 724813: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 724816: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 724818: je 0x724827 */
  if (zf) goto L_724827;
L_72481a: /* 72481a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 72481c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 72481e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72481f: mov ecx, eax */
  ecx = eax;
/* 724821: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x724827u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
L_724827: /* 724827: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 72482a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 72482b: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 72482e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724830: jl 0x724805 */
  if ((sf != of)) goto L_724805;
L_724832: /* 724832: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_724833: /* 724833: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724834: mov eax, esi */
  eax = esi;
/* 724836: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724837: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724838: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724860(void) {
  LOAD_REGS();
L_724860: /* 724860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724862: push 0x9c3c09 */
  { uint32_t v = 0x9c3c09u; esp -= 4; W32(esp, v); }
/* 724867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72486d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72486e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724878: mov esi, ecx */
  esi = ecx;
/* 72487a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72487b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72487f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724882: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724884: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72488a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724892: jge 0x7248a8 */
  if ((sf == of)) goto L_7248a8;
L_724894: /* 724894: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724899: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72489e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7248a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7248a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7248a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7248a8: /* 7248a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7248ab: jle 0x7248c1 */
  if ((zf || sf != of)) goto L_7248c1;
L_7248ad: /* 7248ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7248b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7248b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7248bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7248beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7248be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7248c1: /* 7248c1: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7248c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7248c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7248c6: mov ecx, esi */
  ecx = esi;
/* 7248c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7248ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7248ce: mov ecx, esi */
  ecx = esi;
/* 7248d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7248d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7248deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7248de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7248e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7248e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7248e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7248e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7248ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7248ef: ret  */
  esp += 4; SPILL(); return;
}

void f_724920(void) {
  LOAD_REGS();
L_724920: /* 724920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724921: mov ebp, esp */
  ebp = esp;
/* 724923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724925: push 0x9c3c20 */
  { uint32_t v = 0x9c3c20u; esp -= 4; W32(esp, v); }
/* 72492a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724938: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72493b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72493c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 72493f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724940: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 724943: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724944: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 724947: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 724949: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72494a: mov ecx, esi */
  ecx = esi;
/* 72494c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 724953: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x724959u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 724959: mov ecx, ebx */
  ecx = ebx;
/* 72495b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x724961u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 724961: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 724963: je 0x7249b6 */
  if (zf) goto L_7249b6;
L_724965: /* 724965: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 724968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724969: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72496a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x724970u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 724970: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 724973: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724976: xor eax, eax */
  eax = 0;
L_724978: /* 724978: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72497b: jge 0x724980 */
  if ((sf == of)) goto L_724980;
L_72497d: /* 72497d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 72497e: jmp 0x724978 */
  goto L_724978;
L_724980: /* 724980: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724981: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 724983: mov ecx, esi */
  ecx = esi;
/* 724985: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x72498bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 72498b: xor edi, edi */
  edi = 0;
/* 72498d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_724990: /* 724990: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724993: jge 0x7249e0 */
  if ((sf == of)) goto L_7249e0;
L_724995: /* 724995: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 724997: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724999: mov ecx, esi */
  ecx = esi;
/* 72499b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7249a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7249a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7249a3: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7249a6: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7249a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7249aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7249ab: call 0x6cbfff */
  esp -= 4; W32(esp, 0x7249b0u); SPILL(); f_6cbfff(); if (g_unwind) return; RELOAD();
/* 7249b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7249b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7249b4: jmp 0x724990 */
  goto L_724990;
L_7249b6: /* 7249b6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7249b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7249ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7249bb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7249c1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7249c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7249c4: xor edi, edi */
  edi = 0;
L_7249c6: /* 7249c6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7249c9: jge 0x7249e0 */
  if ((sf == of)) goto L_7249e0;
L_7249cb: /* 7249cb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7249cd: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 7249d0: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7249d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7249d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7249d5: call 0x6cbfff */
  esp -= 4; W32(esp, 0x7249dau); SPILL(); f_6cbfff(); if (g_unwind) return; RELOAD();
/* 7249da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7249dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7249de: jmp 0x7249c6 */
  goto L_7249c6;
L_7249e0: /* 7249e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7249e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7249e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7249e5: mov eax, ebx */
  eax = ebx;
/* 7249e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7249ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7249ef: mov esp, ebp */
  esp = ebp;
/* 7249f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7249f2: ret  */
  esp += 4; SPILL(); return;
}

void f_7249f3(void) {
  LOAD_REGS();
L_7249f3: /* 7249f3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7249f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7249fb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7249fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7249ff: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 724a02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x724a07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_724a07(); return;
}

void f_724a07(void) {
  LOAD_REGS();
L_724a07: /* 724a07: push 0x9f84f8 */
  { uint32_t v = 0x9f84f8u; esp -= 4; W32(esp, v); }
/* 724a0c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 724a11: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x724a17u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 724a17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724a1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724a1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724a1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x724a23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_724a23: guest_badaddr(0x724a23); return;
}

void f_724a80(void) {
  LOAD_REGS();
L_724a80: /* 724a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724a82: push 0x9c3c39 */
  { uint32_t v = 0x9c3c39u; esp -= 4; W32(esp, v); }
/* 724a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724a96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724a97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724a98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724a99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724a9a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 724a9e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724aa1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 724aa3: mov esi, ecx */
  esi = ecx;
/* 724aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724aa6: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 724aaa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x724ab0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 724ab0: xor ebx, ebx */
  ebx = 0;
/* 724ab2: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 724ab5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724ab8: xor ebp, ebp */
  ebp = 0;
/* 724aba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724abc: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 724ac0: jle 0x724af7 */
  if ((zf || sf != of)) goto L_724af7;
L_724ac2: /* 724ac2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 724ac4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724ac6: mov ecx, esi */
  ecx = esi;
/* 724ac8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x724aceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 724ace: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 724ad0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 724ad3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 724ad5: je 0x724aec */
  if (zf) goto L_724aec;
L_724ad7: /* 724ad7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 724ad9: mov edx, dword ptr [ecx + ebx] */
  edx = R32((uint32_t)(ecx + ebx));
/* 724adc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 724ade: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 724ae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724ae2: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 724ae5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 724ae7: call 0x6cb258 */
  esp -= 4; W32(esp, 0x724aecu); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
L_724aec: /* 724aec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724aef: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 724af0: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 724af3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724af5: jl 0x724ac2 */
  if ((sf != of)) goto L_724ac2;
L_724af7: /* 724af7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 724afb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724afc: mov eax, esi */
  eax = esi;
/* 724afe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724aff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 724b00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724b01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 724b08: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724b0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724b40(void) {
  LOAD_REGS();
L_724b40: /* 724b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724b42: push 0x9c3c59 */
  { uint32_t v = 0x9c3c59u; esp -= 4; W32(esp, v); }
/* 724b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724b56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724b57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724b58: mov esi, ecx */
  esi = ecx;
/* 724b5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724b5b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 724b5f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724b62: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724b64: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 724b6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724b72: jge 0x724b88 */
  if ((sf == of)) goto L_724b88;
L_724b74: /* 724b74: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724b79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724b7e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724b83: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724b85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724b88: /* 724b88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724b8b: jle 0x724ba1 */
  if ((zf || sf != of)) goto L_724ba1;
L_724b8d: /* 724b8d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724b92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724b97: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 724b9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724b9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724ba1: /* 724ba1: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 724ba3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724ba4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724ba6: mov ecx, esi */
  ecx = esi;
/* 724ba8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x724baeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 724bae: mov ecx, esi */
  ecx = esi;
/* 724bb0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724bb8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x724bbeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 724bbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724bc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 724bcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_724c00(void) {
  LOAD_REGS();
L_724c00: /* 724c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724c01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724c02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724c03: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 724c07: mov ebx, ecx */
  ebx = ecx;
/* 724c09: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 724c0b: je 0x724c70 */
  if (zf) goto L_724c70;
L_724c0d: /* 724c0d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 724c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724c11: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 724c13: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x724c19u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 724c19: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 724c1c: xor eax, eax */
  eax = 0;
/* 724c1e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724c20: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 724c24: jle 0x724c70 */
  if ((zf || sf != of)) goto L_724c70;
L_724c26: /* 724c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724c27: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 724c2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724c2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_724c30: /* 724c30: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 724c32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724c34: mov ecx, ebx */
  ecx = ebx;
/* 724c36: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x724c3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 724c3c: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 724c3f: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 724c41: je 0x724c53 */
  if (zf) goto L_724c53;
L_724c43: /* 724c43: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 724c46: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 724c4a: mov ecx, 0x17 */
  ecx = 0x17u;
/* 724c4f: mov edi, eax */
  edi = eax;
/* 724c51: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_724c53: /* 724c53: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 724c57: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 724c5b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 724c5e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 724c5f: add edx, 0x5c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 724c62: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724c64: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 724c68: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 724c6c: jl 0x724c30 */
  if ((sf != of)) goto L_724c30;
L_724c6e: /* 724c6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724c6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_724c70: /* 724c70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 724c71: mov eax, ebx */
  eax = ebx;
/* 724c73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724c74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 724c75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724ca0(void) {
  LOAD_REGS();
L_724ca0: /* 724ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724ca2: push 0x9c3c79 */
  { uint32_t v = 0x9c3c79u; esp -= 4; W32(esp, v); }
/* 724ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724cb8: mov esi, ecx */
  esi = ecx;
/* 724cba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724cbb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 724cbf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724cc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724cc4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 724cca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724cd2: jge 0x724ce8 */
  if ((sf == of)) goto L_724ce8;
L_724cd4: /* 724cd4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724cd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724cde: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724ce3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724ce5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724ce5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724ce8: /* 724ce8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724ceb: jle 0x724d01 */
  if ((zf || sf != of)) goto L_724d01;
L_724ced: /* 724ced: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724cf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724cf7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 724cfc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724cfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724d01: /* 724d01: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 724d03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724d04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724d06: mov ecx, esi */
  ecx = esi;
/* 724d08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x724d0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 724d0e: mov ecx, esi */
  ecx = esi;
/* 724d10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724d18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x724d1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 724d1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724d22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724d23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724d24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724d25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 724d2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_724d60(void) {
  LOAD_REGS();
L_724d60: /* 724d60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724d62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724d63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 724d67: mov esi, ecx */
  esi = ecx;
/* 724d69: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 724d6b: je 0x724da6 */
  if (zf) goto L_724da6;
L_724d6d: /* 724d6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724d71: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 724d73: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x724d79u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 724d79: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724d7c: xor ebx, ebx */
  ebx = 0;
/* 724d7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724d80: jle 0x724da6 */
  if ((zf || sf != of)) goto L_724da6;
L_724d82: /* 724d82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 724d84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724d86: mov ecx, esi */
  ecx = esi;
/* 724d88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x724d8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 724d8e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 724d90: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 724d93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 724d95: je 0x724d9e */
  if (zf) goto L_724d9e;
L_724d97: /* 724d97: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 724d99: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 724d9c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_724d9e: /* 724d9e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 724da1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 724da2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724da4: jl 0x724d82 */
  if ((sf != of)) goto L_724d82;
L_724da6: /* 724da6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724da7: mov eax, esi */
  eax = esi;
/* 724da9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724daa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724dab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724dd0(void) {
  LOAD_REGS();
L_724dd0: /* 724dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724dd2: push 0x9c3c99 */
  { uint32_t v = 0x9c3c99u; esp -= 4; W32(esp, v); }
/* 724dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724de6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724de7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724de8: mov esi, ecx */
  esi = ecx;
/* 724dea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724deb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 724def: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724df2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724df4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 724dfa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724e02: jge 0x724e18 */
  if ((sf == of)) goto L_724e18;
L_724e04: /* 724e04: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724e09: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724e0e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724e13: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724e15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724e18: /* 724e18: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724e1b: jle 0x724e31 */
  if ((zf || sf != of)) goto L_724e31;
L_724e1d: /* 724e1d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724e22: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724e27: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 724e2c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724e2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724e2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724e31: /* 724e31: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 724e33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724e34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724e36: mov ecx, esi */
  ecx = esi;
/* 724e38: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x724e3eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 724e3e: mov ecx, esi */
  ecx = esi;
/* 724e40: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724e48: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x724e4eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 724e4e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724e52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724e53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724e54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724e55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 724e5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724e5f: ret  */
  esp += 4; SPILL(); return;
}

void f_724e90(void) {
  LOAD_REGS();
L_724e90: /* 724e90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724e91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724e92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724e93: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 724e97: mov ebx, ecx */
  ebx = ecx;
/* 724e99: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 724e9b: je 0x724f03 */
  if (zf) goto L_724f03;
L_724e9d: /* 724e9d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 724ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724ea1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 724ea3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x724ea9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 724ea9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 724eac: xor eax, eax */
  eax = 0;
/* 724eae: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724eb0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 724eb4: jle 0x724f03 */
  if ((zf || sf != of)) goto L_724f03;
L_724eb6: /* 724eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724eb7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 724ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724ebc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_724ec0: /* 724ec0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 724ec2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 724ec4: mov ecx, ebx */
  ecx = ebx;
/* 724ec6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x724eccu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 724ecc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 724ece: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 724ed1: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 724ed4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 724ed6: je 0x724ee6 */
  if (zf) goto L_724ee6;
L_724ed8: /* 724ed8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 724edb: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 724edf: mov ecx, 6 */
  ecx = 0x6u;
/* 724ee4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_724ee6: /* 724ee6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 724eea: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 724eee: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 724ef1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 724ef2: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 724ef5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724ef7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 724efb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 724eff: jl 0x724ec0 */
  if ((sf != of)) goto L_724ec0;
L_724f01: /* 724f01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724f02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_724f03: /* 724f03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 724f04: mov eax, ebx */
  eax = ebx;
/* 724f06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724f07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 724f08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_724f30(void) {
  LOAD_REGS();
L_724f30: /* 724f30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 724f32: push 0x9c3cb9 */
  { uint32_t v = 0x9c3cb9u; esp -= 4; W32(esp, v); }
/* 724f37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 724f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 724f3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 724f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724f46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724f47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 724f48: mov esi, ecx */
  esi = ecx;
/* 724f4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724f4b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 724f4f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 724f52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 724f54: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 724f5a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 724f62: jge 0x724f78 */
  if ((sf == of)) goto L_724f78;
L_724f64: /* 724f64: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 724f69: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724f6e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 724f73: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724f75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724f75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724f78: /* 724f78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 724f7b: jle 0x724f91 */
  if ((zf || sf != of)) goto L_724f91;
L_724f7d: /* 724f7d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 724f82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 724f87: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 724f8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x724f8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 724f8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_724f91: /* 724f91: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 724f93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 724f94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 724f96: mov ecx, esi */
  ecx = esi;
/* 724f98: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x724f9eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 724f9e: mov ecx, esi */
  ecx = esi;
/* 724fa0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 724fa8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x724faeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 724fae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 724fb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 724fb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 724fb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 724fb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 724fbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 724fbf: ret  */
  esp += 4; SPILL(); return;
}

void f_724ff0(void) {
  LOAD_REGS();
L_724ff0: /* 724ff0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 724ff1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 724ff2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 724ff3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 724ff7: mov ebx, ecx */
  ebx = ecx;
/* 724ff9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 724ffb: je 0x725063 */
  if (zf) goto L_725063;
L_724ffd: /* 724ffd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 725000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725001: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 725003: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725009u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725009: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 72500c: xor eax, eax */
  eax = 0;
/* 72500e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725010: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 725014: jle 0x725063 */
  if ((zf || sf != of)) goto L_725063;
L_725016: /* 725016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725017: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 72501b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72501c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_725020: /* 725020: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 725022: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725024: mov ecx, ebx */
  ecx = ebx;
/* 725026: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72502cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72502c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 72502e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 725031: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 725034: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725036: je 0x725046 */
  if (zf) goto L_725046;
L_725038: /* 725038: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72503b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72503f: mov ecx, 5 */
  ecx = 0x5u;
/* 725044: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_725046: /* 725046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 72504a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72504e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 725051: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725052: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 725055: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725057: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72505b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72505f: jl 0x725020 */
  if ((sf != of)) goto L_725020;
L_725061: /* 725061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725062: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_725063: /* 725063: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725064: mov eax, ebx */
  eax = ebx;
/* 725066: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725067: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 725068: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725090(void) {
  LOAD_REGS();
L_725090: /* 725090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725092: push 0x9c3cd9 */
  { uint32_t v = 0x9c3cd9u; esp -= 4; W32(esp, v); }
/* 725097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72509d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72509e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7250a5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7250a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7250a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7250aa: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7250ae: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7250b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7250b2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7250b4: mov ebx, ecx */
  ebx = ecx;
/* 7250b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7250b7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7250bb: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7250c1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7250c1: xor esi, esi */
  esi = 0;
/* 7250c3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7250c6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7250c9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 7250cd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7250d1: jle 0x725129 */
  if ((zf || sf != of)) goto L_725129;
L_7250d3: /* 7250d3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 7250d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_7250d8: /* 7250d8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7250da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7250dc: mov ecx, ebx */
  ecx = ebx;
/* 7250de: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7250e4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7250e4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7250e6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7250e9: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 7250ec: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7250ee: je 0x72510d */
  if (zf) goto L_72510d;
L_7250f0: /* 7250f0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7250f3: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7250f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7250f8: mov ecx, edi */
  ecx = edi;
/* 7250fa: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x7250ffu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 7250ff: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 725102: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 725105: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 725108: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 72510b: xor esi, esi */
  esi = 0;
L_72510d: /* 72510d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 725111: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 725115: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 725118: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725119: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 72511c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72511e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 725122: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 725126: jl 0x7250d8 */
  if ((sf != of)) goto L_7250d8;
L_725128: /* 725128: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_725129: /* 725129: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 72512d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72512e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72512f: mov eax, ebx */
  eax = ebx;
/* 725131: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725132: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 725139: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72513c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725170(void) {
  LOAD_REGS();
L_725170: /* 725170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725172: push 0x9c3cf9 */
  { uint32_t v = 0x9c3cf9u; esp -= 4; W32(esp, v); }
/* 725177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72517d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72517e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725187: mov esi, ecx */
  esi = ecx;
/* 725189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72518d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 725190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725193: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72519b: call 0x6cbb1d */
  esp -= 4; W32(esp, 0x7251a0u); SPILL(); f_6cbb1d(); if (g_unwind) return; RELOAD();
/* 7251a0: mov ecx, esi */
  ecx = esi;
/* 7251a2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7251aa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7251b0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7251b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7251b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7251b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7251bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7251bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7251e0(void) {
  LOAD_REGS();
L_7251e0: /* 7251e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7251e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7251e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7251e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7251e7: mov esi, ecx */
  esi = ecx;
/* 7251e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7251eb: je 0x72522d */
  if (zf) goto L_72522d;
L_7251ed: /* 7251ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7251f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7251f1: call 0x6c1e56 */
  esp -= 4; W32(esp, 0x7251f6u); SPILL(); f_6c1e56(); if (g_unwind) return; RELOAD();
/* 7251f6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7251f9: xor ebx, ebx */
  ebx = 0;
/* 7251fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7251fd: jle 0x72522d */
  if ((zf || sf != of)) goto L_72522d;
L_7251ff: /* 7251ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 725200: xor ebp, ebp */
  ebp = 0;
L_725202: /* 725202: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 725204: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725206: mov ecx, esi */
  ecx = esi;
/* 725208: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72520eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72520e: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 725211: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 725213: je 0x725221 */
  if (zf) goto L_725221;
L_725215: /* 725215: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 725217: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 725219: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72521a: mov ecx, eax */
  ecx = eax;
/* 72521c: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x725221u); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
L_725221: /* 725221: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 725224: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 725225: add ebp, 0x68 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 725228: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72522a: jl 0x725202 */
  if ((sf != of)) goto L_725202;
L_72522c: /* 72522c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_72522d: /* 72522d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72522e: mov eax, esi */
  eax = esi;
/* 725230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725231: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725232: ret 4 */
  esp += 8; SPILL(); return;
}

void f_725260(void) {
  LOAD_REGS();
L_725260: /* 725260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725262: push 0x9c3d19 */
  { uint32_t v = 0x9c3d19u; esp -= 4; W32(esp, v); }
/* 725267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72526d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72526e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 725276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725277: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725278: mov esi, ecx */
  esi = ecx;
/* 72527a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72527b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72527f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 725282: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725284: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 72528a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 725292: jge 0x7252a8 */
  if ((sf == of)) goto L_7252a8;
L_725294: /* 725294: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 725299: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 72529e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7252a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7252a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7252a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7252a8: /* 7252a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7252ab: jle 0x7252c1 */
  if ((zf || sf != of)) goto L_7252c1;
L_7252ad: /* 7252ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7252b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7252b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7252bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7252beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7252be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7252c1: /* 7252c1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7252c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7252c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7252c6: mov ecx, esi */
  ecx = esi;
/* 7252c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7252ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7252ce: mov ecx, esi */
  ecx = esi;
/* 7252d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7252d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7252deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7252de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7252e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7252e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7252e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7252e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7252ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7252ef: ret  */
  esp += 4; SPILL(); return;
}

void f_725320(void) {
  LOAD_REGS();
L_725320: /* 725320: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725321: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 725325: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725326: mov esi, ecx */
  esi = ecx;
/* 725328: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 72532a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72532b: je 0x72536d */
  if (zf) goto L_72536d;
L_72532d: /* 72532d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 725330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725331: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725333: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x725339u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 725339: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 72533c: xor edi, edi */
  edi = 0;
/* 72533e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 725340: jle 0x72536d */
  if ((zf || sf != of)) goto L_72536d;
L_725342: /* 725342: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 725344: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 725346: mov ecx, esi */
  ecx = esi;
/* 725348: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x72534eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 72534e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 725350: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 725353: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725355: je 0x725365 */
  if (zf) goto L_725365;
L_725357: /* 725357: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 725359: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 72535c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72535e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 725362: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_725365: /* 725365: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 725368: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 725369: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72536b: jl 0x725342 */
  if ((sf != of)) goto L_725342;
L_72536d: /* 72536d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72536e: mov eax, esi */
  eax = esi;
/* 725370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725371: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725372: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7253a0(void) {
  LOAD_REGS();
L_7253a0: /* 7253a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7253a2: push 0x9c3d39 */
  { uint32_t v = 0x9c3d39u; esp -= 4; W32(esp, v); }
/* 7253a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7253ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7253ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7253b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7253b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7253b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7253b8: mov esi, ecx */
  esi = ecx;
/* 7253ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7253bb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7253bf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7253c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7253c4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7253ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7253d2: jge 0x7253e8 */
  if ((sf == of)) goto L_7253e8;
L_7253d4: /* 7253d4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7253d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7253de: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7253e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7253e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7253e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7253e8: /* 7253e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7253eb: jle 0x725401 */
  if ((zf || sf != of)) goto L_725401;
L_7253ed: /* 7253ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7253f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7253f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7253fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7253feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7253fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_725401: /* 725401: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 725403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725404: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 725406: mov ecx, esi */
  ecx = esi;
/* 725408: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x72540eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 72540e: mov ecx, esi */
  ecx = esi;
/* 725410: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 725418: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x72541eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 72541e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 725422: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725423: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725424: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725425: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72542c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72542f: ret  */
  esp += 4; SPILL(); return;
}

void f_725460(void) {
  LOAD_REGS();
L_725460: /* 725460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 725461: mov ebp, esp */
  ebp = esp;
/* 725463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 725465: push 0x9c3d50 */
  { uint32_t v = 0x9c3d50u; esp -= 4; W32(esp, v); }
/* 72546a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 725470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 725471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 725478: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72547b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72547c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 72547f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 725480: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 725483: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 725484: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 725487: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 725489: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72548a: mov ecx, esi */
  ecx = esi;
/* 72548c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 725493: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x725499u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 725499: mov ecx, ebx */
  ecx = ebx;
/* 72549b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7254a1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7254a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7254a3: je 0x7254f6 */
  if (zf) goto L_7254f6;
L_7254a5: /* 7254a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7254a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7254a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7254aa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7254b0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7254b0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7254b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7254b6: xor eax, eax */
  eax = 0;
L_7254b8: /* 7254b8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7254bb: jge 0x7254c0 */
  if ((sf == of)) goto L_7254c0;
L_7254bd: /* 7254bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7254be: jmp 0x7254b8 */
  goto L_7254b8;
L_7254c0: /* 7254c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7254c1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7254c3: mov ecx, esi */
  ecx = esi;
/* 7254c5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7254cbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7254cb: xor edi, edi */
  edi = 0;
/* 7254cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7254d0: /* 7254d0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7254d3: jge 0x725520 */
  if ((sf == of)) goto L_725520;
L_7254d5: /* 7254d5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7254d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7254d9: mov ecx, esi */
  ecx = esi;
/* 7254db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7254e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7254e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7254e3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7254e6: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 7254e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7254ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7254eb: call 0x6c8a17 */
  esp -= 4; W32(esp, 0x7254f0u); SPILL(); f_6c8a17(); if (g_unwind) return; RELOAD();
/* 7254f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7254f3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7254f4: jmp 0x7254d0 */
  goto L_7254d0;
L_7254f6: /* 7254f6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7254f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7254fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7254fb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x725501u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 725501: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 725504: xor edi, edi */
  edi = 0;
L_725506: /* 725506: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725509: jge 0x725520 */
  if ((sf == of)) goto L_725520;
L_72550b: /* 72550b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 72550d: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 725510: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 725513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 725514: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 725515: call 0x6c8a17 */
  esp -= 4; W32(esp, 0x72551au); SPILL(); f_6c8a17(); if (g_unwind) return; RELOAD();
/* 72551a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72551d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 72551e: jmp 0x725506 */
  goto L_725506;
L_725520: /* 725520: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 725523: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725524: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 725525: mov eax, ebx */
  eax = ebx;
/* 725527: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72552e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72552f: mov esp, ebp */
  esp = ebp;
/* 725531: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725532: ret  */
  esp += 4; SPILL(); return;
}

void f_725533(void) {
  LOAD_REGS();
L_725533: /* 725533: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 725536: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 72553b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 72553e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72553f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 725542: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725547u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_725547(); return;
}

void f_725547(void) {
  LOAD_REGS();
L_725547: /* 725547: push 0x9f8510 */
  { uint32_t v = 0x9f8510u; esp -= 4; W32(esp, v); }
/* 72554c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 725551: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x725557u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 725557: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72555a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72555c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72555e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x725563u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_725563: guest_badaddr(0x725563); return;
}

void f_7255c0(void) {
  LOAD_REGS();
L_7255c0: /* 7255c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7255c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7255c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7255c3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7255c7: mov ebx, ecx */
  ebx = ecx;
/* 7255c9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7255cb: je 0x725633 */
  if (zf) goto L_725633;
L_7255cd: /* 7255cd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7255d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7255d1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7255d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7255d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7255d9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7255dc: xor eax, eax */
  eax = 0;
/* 7255de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7255e0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7255e4: jle 0x725633 */
  if ((zf || sf != of)) goto L_725633;
L_7255e6: /* 7255e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7255e7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7255eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7255ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7255f0: /* 7255f0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7255f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7255f4: mov ecx, ebx */
  ecx = ebx;
/* 7255f6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7255fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7255fc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7255fe: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 725601: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 725604: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 725606: je 0x725616 */
  if (zf) goto L_725616;
L_725608: /* 725608: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 72560b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 72560f: mov ecx, 6 */
  ecx = 0x6u;
/* 725614: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_725616: /* 725616: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 72561a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 72561e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 725621: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 725622: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 725625: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 725627: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 72562b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 72562f: jl 0x7255f0 */
  if ((sf != of)) goto L_7255f0;
L_725631: /* 725631: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 725632: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_725633: /* 725633: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 725634: mov eax, ebx */
  eax = ebx;
/* 725636: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 725637: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 725638: ret 4 */
  esp += 8; SPILL(); return;
}
