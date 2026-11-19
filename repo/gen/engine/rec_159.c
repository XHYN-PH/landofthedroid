#include "recomp.h"
#include "rec_mod.h"

void f_9eb2e0(void) {
  LOAD_REGS();
L_9eb2e0: /* 9eb2e0: mov dword ptr [0xcdafb4], 0xcdaa88 */
  W32((uint32_t)(0xcdafb4u), 0xcdaa88u);
/* 9eb2ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb300(void) {
  LOAD_REGS();
L_9eb300: /* 9eb300: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb304: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb308: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb30a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb30c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb310: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb316u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb316: mov esi, eax */
  esi = eax;
/* 9eb318: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb31e: push 0x6c5d3f */
  { uint32_t v = 0x6c5d3fu; esp -= 4; W32(esp, v); }
/* 9eb323: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb328: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb32eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb32e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb331: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb334: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb339: push 0xae5d9e */
  { uint32_t v = 0xae5d9eu; esp -= 4; W32(esp, v); }
/* 9eb33e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb341: mov ecx, esp */
  ecx = esp;
/* 9eb343: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb345: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb348: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb34b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb34e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb351: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb354: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb35au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb35a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb35b: push 0xcda558 */
  { uint32_t v = 0xcda558u; esp -= 4; W32(esp, v); }
/* 9eb360: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb362: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 9eb367: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb369: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 9eb36e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb374u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb374: push 0x9f1ba0 */
  { uint32_t v = 0x9f1ba0u; esp -= 4; W32(esp, v); }
/* 9eb379: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb37eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb37e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb381: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb382: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb385: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb3c0(void) {
  LOAD_REGS();
L_9eb3c0: /* 9eb3c0: mov dword ptr [0xcdb4e4], 0xcdafb8 */
  W32((uint32_t)(0xcdb4e4u), 0xcdafb8u);
/* 9eb3ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb3e0(void) {
  LOAD_REGS();
L_9eb3e0: /* 9eb3e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb3e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb3e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb3e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb3e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb3ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb3ec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb3f0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb3f6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb3f6: mov esi, eax */
  esi = eax;
/* 9eb3f8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb3fe: push 0x6c6294 */
  { uint32_t v = 0x6c6294u; esp -= 4; W32(esp, v); }
/* 9eb403: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb408: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb40eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb40e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb411: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb414: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb419: push 0xae5db6 */
  { uint32_t v = 0xae5db6u; esp -= 4; W32(esp, v); }
/* 9eb41e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb421: mov ecx, esp */
  ecx = esp;
/* 9eb423: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb425: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb428: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb42b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb42e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb431: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb434: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb43au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb43a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb43b: push 0xcdafb8 */
  { uint32_t v = 0xcdafb8u; esp -= 4; W32(esp, v); }
/* 9eb440: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9eb442: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 9eb447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb449: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 9eb44e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb454u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb454: push 0x9f1bc0 */
  { uint32_t v = 0x9f1bc0u; esp -= 4; W32(esp, v); }
/* 9eb459: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb45eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb45e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb462: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb465: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb4a0(void) {
  LOAD_REGS();
L_9eb4a0: /* 9eb4a0: mov dword ptr [0xcdba14], 0xcdb4e8 */
  W32((uint32_t)(0xcdba14u), 0xcdb4e8u);
/* 9eb4aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb4c0(void) {
  LOAD_REGS();
L_9eb4c0: /* 9eb4c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb4c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb4c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb4c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb4c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb4ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb4cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb4d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb4d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb4d6: mov esi, eax */
  esi = eax;
/* 9eb4d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb4dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb4de: push 0x6c9a11 */
  { uint32_t v = 0x6c9a11u; esp -= 4; W32(esp, v); }
/* 9eb4e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb4e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb4eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb4ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb4f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb4f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb4f9: push 0xae5dda */
  { uint32_t v = 0xae5ddau; esp -= 4; W32(esp, v); }
/* 9eb4fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb501: mov ecx, esp */
  ecx = esp;
/* 9eb503: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb505: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb508: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb50b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb50e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb511: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb514: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb51au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb51a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb51b: push 0xcdafb8 */
  { uint32_t v = 0xcdafb8u; esp -= 4; W32(esp, v); }
/* 9eb520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb522: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 9eb527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb529: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 9eb52e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb534u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb534: push 0x9f1be0 */
  { uint32_t v = 0x9f1be0u; esp -= 4; W32(esp, v); }
/* 9eb539: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb53eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb53e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb541: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb542: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb545: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb580(void) {
  LOAD_REGS();
L_9eb580: /* 9eb580: mov dword ptr [0xcdbf44], 0xcdba18 */
  W32((uint32_t)(0xcdbf44u), 0xcdba18u);
/* 9eb58a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb5a0(void) {
  LOAD_REGS();
L_9eb5a0: /* 9eb5a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb5a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb5a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb5a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb5a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb5aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb5ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb5b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb5b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb5b6: mov esi, eax */
  esi = eax;
/* 9eb5b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb5bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb5be: push 0x6cb064 */
  { uint32_t v = 0x6cb064u; esp -= 4; W32(esp, v); }
/* 9eb5c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb5c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb5ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb5ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb5d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb5d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb5d9: push 0xae5df6 */
  { uint32_t v = 0xae5df6u; esp -= 4; W32(esp, v); }
/* 9eb5de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb5e1: mov ecx, esp */
  ecx = esp;
/* 9eb5e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb5e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb5e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb5eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb5ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb5f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb5f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb5fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb5fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb5fb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9eb600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb602: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 9eb607: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb609: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 9eb60e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb614u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb614: push 0x9f1c00 */
  { uint32_t v = 0x9f1c00u; esp -= 4; W32(esp, v); }
/* 9eb619: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb61eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb61e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb621: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb622: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb625: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb660(void) {
  LOAD_REGS();
L_9eb660: /* 9eb660: mov dword ptr [0xcdc474], 0xcdbf48 */
  W32((uint32_t)(0xcdc474u), 0xcdbf48u);
/* 9eb66a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb680(void) {
  LOAD_REGS();
L_9eb680: /* 9eb680: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb686: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb688: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb68a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb68c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb690: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb696u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb696: mov esi, eax */
  esi = eax;
/* 9eb698: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb69e: push 0x6c4d9a */
  { uint32_t v = 0x6c4d9au; esp -= 4; W32(esp, v); }
/* 9eb6a3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb6a8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb6aeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb6ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb6b1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb6b4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb6b9: push 0xae5e12 */
  { uint32_t v = 0xae5e12u; esp -= 4; W32(esp, v); }
/* 9eb6be: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb6c1: mov ecx, esp */
  ecx = esp;
/* 9eb6c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb6c5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb6c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb6cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb6ce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb6d1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb6d4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb6dau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb6da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb6db: push 0xcda558 */
  { uint32_t v = 0xcda558u; esp -= 4; W32(esp, v); }
/* 9eb6e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb6e2: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 9eb6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb6e6: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 9eb6eb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb6f1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb6f1: push 0x9f1c20 */
  { uint32_t v = 0x9f1c20u; esp -= 4; W32(esp, v); }
/* 9eb6f6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb6fbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb6fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb6fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb6ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb702: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb740(void) {
  LOAD_REGS();
L_9eb740: /* 9eb740: mov dword ptr [0xcdc9a4], 0xcdc478 */
  W32((uint32_t)(0xcdc9a4u), 0xcdc478u);
/* 9eb74a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb760(void) {
  LOAD_REGS();
L_9eb760: /* 9eb760: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb764: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb766: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb768: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb76a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb76c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb770: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb776u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb776: mov esi, eax */
  esi = eax;
/* 9eb778: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb77e: push 0x6c93bd */
  { uint32_t v = 0x6c93bdu; esp -= 4; W32(esp, v); }
/* 9eb783: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb788: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb78eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb78e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb791: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb794: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb799: push 0xae5e2e */
  { uint32_t v = 0xae5e2eu; esp -= 4; W32(esp, v); }
/* 9eb79e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb7a1: mov ecx, esp */
  ecx = esp;
/* 9eb7a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb7a5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb7a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb7ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb7ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb7b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb7b4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb7bau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb7ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb7bb: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9eb7c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb7c2: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9eb7c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb7c6: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 9eb7cb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb7d1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb7d1: push 0x9f1c40 */
  { uint32_t v = 0x9f1c40u; esp -= 4; W32(esp, v); }
/* 9eb7d6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb7dbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb7db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb7de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb7df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb7e2: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb820(void) {
  LOAD_REGS();
L_9eb820: /* 9eb820: mov dword ptr [0xcdced4], 0xcdc9a8 */
  W32((uint32_t)(0xcdced4u), 0xcdc9a8u);
/* 9eb82a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb840(void) {
  LOAD_REGS();
L_9eb840: /* 9eb840: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb843: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb846: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb84a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb84c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb850: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb856u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb856: mov esi, eax */
  esi = eax;
/* 9eb858: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb85d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb85e: push 0x6c32d8 */
  { uint32_t v = 0x6c32d8u; esp -= 4; W32(esp, v); }
/* 9eb863: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb868: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb86eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb86e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb871: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb874: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb879: push 0xae5e4e */
  { uint32_t v = 0xae5e4eu; esp -= 4; W32(esp, v); }
/* 9eb87e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb881: mov ecx, esp */
  ecx = esp;
/* 9eb883: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb885: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb888: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb88b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb88e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb891: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb894: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb89au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb89a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb89b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9eb8a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb8a2: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9eb8a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb8a6: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 9eb8ab: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb8b1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb8b1: push 0x9f1c60 */
  { uint32_t v = 0x9f1c60u; esp -= 4; W32(esp, v); }
/* 9eb8b6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb8bbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb8bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb8be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb8bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb8c2: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb900(void) {
  LOAD_REGS();
L_9eb900: /* 9eb900: mov dword ptr [0xcdd404], 0xcdced8 */
  W32((uint32_t)(0xcdd404u), 0xcdced8u);
/* 9eb90a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb920(void) {
  LOAD_REGS();
L_9eb920: /* 9eb920: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb923: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb924: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb926: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb92a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb92c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb930: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb936u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb936: mov esi, eax */
  esi = eax;
/* 9eb938: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb93e: push 0x6cca77 */
  { uint32_t v = 0x6cca77u; esp -= 4; W32(esp, v); }
/* 9eb943: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb948: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb94eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb94e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb951: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb954: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb959: push 0xae5e72 */
  { uint32_t v = 0xae5e72u; esp -= 4; W32(esp, v); }
/* 9eb95e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb961: mov ecx, esp */
  ecx = esp;
/* 9eb963: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb965: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb968: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb96b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb96e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb971: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb974: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb97au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb97a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb97b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9eb980: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb982: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9eb984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb986: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 9eb98b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb991u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb991: push 0x9f1c80 */
  { uint32_t v = 0x9f1c80u; esp -= 4; W32(esp, v); }
/* 9eb996: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb99bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb99b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb99e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb99f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb9a2: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb9e0(void) {
  LOAD_REGS();
L_9eb9e0: /* 9eb9e0: mov dword ptr [0xcdd934], 0xcdd408 */
  W32((uint32_t)(0xcdd934u), 0xcdd408u);
/* 9eb9ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9eba00(void) {
  LOAD_REGS();
L_9eba00: /* 9eba00: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eba03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eba04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba0c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eba10: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eba16u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eba16: mov esi, eax */
  esi = eax;
/* 9eba18: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eba1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eba1e: push 0x6c4084 */
  { uint32_t v = 0x6c4084u; esp -= 4; W32(esp, v); }
/* 9eba23: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eba28: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eba2eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eba2e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eba30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eba31: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eba34: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eba39: push 0xae5e8e */
  { uint32_t v = 0xae5e8eu; esp -= 4; W32(esp, v); }
/* 9eba3e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eba41: mov ecx, esp */
  ecx = esp;
/* 9eba43: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eba45: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eba48: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eba4b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eba4e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eba51: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eba54: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eba5au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eba5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eba5b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9eba60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba62: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 9eba64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eba66: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 9eba6b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eba71u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eba71: push 0x9f1ca0 */
  { uint32_t v = 0x9f1ca0u; esp -= 4; W32(esp, v); }
/* 9eba76: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eba7bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eba7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eba7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eba7f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eba82: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebac0(void) {
  LOAD_REGS();
L_9ebac0: /* 9ebac0: mov dword ptr [0xcdde64], 0xcdd938 */
  W32((uint32_t)(0xcdde64u), 0xcdd938u);
/* 9ebaca: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebae0(void) {
  LOAD_REGS();
L_9ebae0: /* 9ebae0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ebae4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebaea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebaec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ebaf0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ebaf6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ebaf6: mov esi, eax */
  esi = eax;
/* 9ebaf8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ebafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebafe: push 0x6c1f4b */
  { uint32_t v = 0x6c1f4bu; esp -= 4; W32(esp, v); }
/* 9ebb03: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ebb08: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ebb0eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ebb0e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ebb10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebb11: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ebb14: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ebb19: push 0xae5eba */
  { uint32_t v = 0xae5ebau; esp -= 4; W32(esp, v); }
/* 9ebb1e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebb21: mov ecx, esp */
  ecx = esp;
/* 9ebb23: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ebb25: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ebb28: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ebb2b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ebb2e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ebb31: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ebb34: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ebb3au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ebb3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebb3b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9ebb40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebb42: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 9ebb44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebb46: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 9ebb4b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ebb51u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ebb51: push 0x9f1cc0 */
  { uint32_t v = 0x9f1cc0u; esp -= 4; W32(esp, v); }
/* 9ebb56: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ebb5bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ebb5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebb5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ebb5f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebb62: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebba0(void) {
  LOAD_REGS();
L_9ebba0: /* 9ebba0: mov dword ptr [0xcde394], 0xcdde68 */
  W32((uint32_t)(0xcde394u), 0xcdde68u);
/* 9ebbaa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebbc0(void) {
  LOAD_REGS();
L_9ebbc0: /* 9ebbc0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebbc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ebbc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebbc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebbc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebbca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebbcc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ebbd0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ebbd6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ebbd6: mov esi, eax */
  esi = eax;
/* 9ebbd8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ebbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebbde: push 0x6c3de1 */
  { uint32_t v = 0x6c3de1u; esp -= 4; W32(esp, v); }
/* 9ebbe3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ebbe8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ebbeeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ebbee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ebbf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebbf1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ebbf4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ebbf9: push 0xae5ee6 */
  { uint32_t v = 0xae5ee6u; esp -= 4; W32(esp, v); }
/* 9ebbfe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebc01: mov ecx, esp */
  ecx = esp;
/* 9ebc03: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ebc05: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ebc08: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ebc0b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ebc0e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ebc11: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ebc14: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ebc1au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ebc1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebc1b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9ebc20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebc22: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 9ebc27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebc29: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 9ebc2e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ebc34u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ebc34: push 0x9f1ce0 */
  { uint32_t v = 0x9f1ce0u; esp -= 4; W32(esp, v); }
/* 9ebc39: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ebc3eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ebc3e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebc41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ebc42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebc45: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebc80(void) {
  LOAD_REGS();
L_9ebc80: /* 9ebc80: mov dword ptr [0xcde8c4], 0xcde398 */
  W32((uint32_t)(0xcde8c4u), 0xcde398u);
/* 9ebc8a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebca0(void) {
  LOAD_REGS();
L_9ebca0: /* 9ebca0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ebca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebca6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebca8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebcaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebcac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ebcb0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ebcb6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ebcb6: mov esi, eax */
  esi = eax;
/* 9ebcb8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ebcbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebcbe: push 0x6c71f8 */
  { uint32_t v = 0x6c71f8u; esp -= 4; W32(esp, v); }
/* 9ebcc3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ebcc8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ebcceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ebcce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ebcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebcd1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ebcd4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ebcd9: push 0xae5f12 */
  { uint32_t v = 0xae5f12u; esp -= 4; W32(esp, v); }
/* 9ebcde: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebce1: mov ecx, esp */
  ecx = esp;
/* 9ebce3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ebce5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ebce8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ebceb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ebcee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ebcf1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ebcf4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ebcfau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ebcfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebcfb: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9ebd00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd02: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9ebd04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd06: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 9ebd0b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ebd11u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ebd11: push 0x9f1d00 */
  { uint32_t v = 0x9f1d00u; esp -= 4; W32(esp, v); }
/* 9ebd16: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ebd1bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ebd1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebd1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ebd1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebd22: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebd60(void) {
  LOAD_REGS();
L_9ebd60: /* 9ebd60: mov dword ptr [0xcdedf4], 0xcde8c8 */
  W32((uint32_t)(0xcdedf4u), 0xcde8c8u);
/* 9ebd6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebd80(void) {
  LOAD_REGS();
L_9ebd80: /* 9ebd80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebd83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ebd84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebd8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ebd90: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ebd96u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ebd96: mov esi, eax */
  esi = eax;
/* 9ebd98: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ebd9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebd9e: push 0x6c428c */
  { uint32_t v = 0x6c428cu; esp -= 4; W32(esp, v); }
/* 9ebda3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ebda8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ebdaeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ebdae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ebdb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebdb1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ebdb4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ebdb9: push 0xae5f3a */
  { uint32_t v = 0xae5f3au; esp -= 4; W32(esp, v); }
/* 9ebdbe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebdc1: mov ecx, esp */
  ecx = esp;
/* 9ebdc3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ebdc5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ebdc8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ebdcb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ebdce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ebdd1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ebdd4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ebddau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ebdda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebddb: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9ebde0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebde2: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9ebde4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebde6: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 9ebdeb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ebdf1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ebdf1: push 0x9f1d20 */
  { uint32_t v = 0x9f1d20u; esp -= 4; W32(esp, v); }
/* 9ebdf6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ebdfbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ebdfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebdfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ebdff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebe02: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebe40(void) {
  LOAD_REGS();
L_9ebe40: /* 9ebe40: mov dword ptr [0xcdf324], 0xcdedf8 */
  W32((uint32_t)(0xcdf324u), 0xcdedf8u);
/* 9ebe4a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebe60(void) {
  LOAD_REGS();
L_9ebe60: /* 9ebe60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebe63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ebe64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebe66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebe68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebe6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebe6c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ebe70: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ebe76u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ebe76: mov esi, eax */
  esi = eax;
/* 9ebe78: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ebe7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebe7e: push 0x6cc6cb */
  { uint32_t v = 0x6cc6cbu; esp -= 4; W32(esp, v); }
/* 9ebe83: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ebe88: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ebe8eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ebe8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ebe90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebe91: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ebe94: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ebe99: push 0xae5f66 */
  { uint32_t v = 0xae5f66u; esp -= 4; W32(esp, v); }
/* 9ebe9e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ebea1: mov ecx, esp */
  ecx = esp;
/* 9ebea3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ebea5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ebea8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ebeab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ebeae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ebeb1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ebeb4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ebebau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ebeba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ebebb: push 0xb63188 */
  { uint32_t v = 0xb63188u; esp -= 4; W32(esp, v); }
/* 9ebec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebec2: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 9ebec7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ebec9: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 9ebece: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ebed4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ebed4: push 0x9f1d40 */
  { uint32_t v = 0x9f1d40u; esp -= 4; W32(esp, v); }
/* 9ebed9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ebedeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ebede: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebee1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ebee2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebee5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebf20(void) {
  LOAD_REGS();
L_9ebf20: /* 9ebf20: mov dword ptr [0xcdf854], 0xcdf328 */
  W32((uint32_t)(0xcdf854u), 0xcdf328u);
/* 9ebf2a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebf40(void) {
  LOAD_REGS();
L_9ebf40: /* 9ebf40: push 0xae6904 */
  { uint32_t v = 0xae6904u; esp -= 4; W32(esp, v); }
/* 9ebf45: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* 9ebf4a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9ebf50u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9ebf50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebf53: mov byte ptr [0xce0a12], al */
  W8((uint32_t)(0xce0a12u), (eax & 0xffu));
/* 9ebf58: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebf70(void) {
  LOAD_REGS();
L_9ebf70: /* 9ebf70: push 0xae6908 */
  { uint32_t v = 0xae6908u; esp -= 4; W32(esp, v); }
/* 9ebf75: push 0x182 */
  { uint32_t v = 0x182u; esp -= 4; W32(esp, v); }
/* 9ebf7a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9ebf80u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9ebf80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebf83: mov byte ptr [0xce0a13], al */
  W8((uint32_t)(0xce0a13u), (eax & 0xffu));
/* 9ebf88: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebfa0(void) {
  LOAD_REGS();
L_9ebfa0: /* 9ebfa0: push 0xae690c */
  { uint32_t v = 0xae690cu; esp -= 4; W32(esp, v); }
/* 9ebfa5: push 0x181 */
  { uint32_t v = 0x181u; esp -= 4; W32(esp, v); }
/* 9ebfaa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9ebfb0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9ebfb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebfb3: mov byte ptr [0xce0a14], al */
  W8((uint32_t)(0xce0a14u), (eax & 0xffu));
/* 9ebfb8: ret  */
  esp += 4; SPILL(); return;
}

void f_9ebfd0(void) {
  LOAD_REGS();
L_9ebfd0: /* 9ebfd0: push 0xae6910 */
  { uint32_t v = 0xae6910u; esp -= 4; W32(esp, v); }
/* 9ebfd5: push 0x12e */
  { uint32_t v = 0x12eu; esp -= 4; W32(esp, v); }
/* 9ebfda: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9ebfe0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9ebfe0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ebfe3: mov byte ptr [0xce0a15], al */
  W8((uint32_t)(0xce0a15u), (eax & 0xffu));
/* 9ebfe8: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec000(void) {
  LOAD_REGS();
L_9ec000: /* 9ec000: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec003: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec006: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec00a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec00c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec010: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec016u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec016: mov esi, eax */
  esi = eax;
/* 9ec018: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec01e: push 0x6c9b15 */
  { uint32_t v = 0x6c9b15u; esp -= 4; W32(esp, v); }
/* 9ec023: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec028: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec02eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec02e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec031: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec034: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec039: push 0xae6e5a */
  { uint32_t v = 0xae6e5au; esp -= 4; W32(esp, v); }
/* 9ec03e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec041: mov ecx, esp */
  ecx = esp;
/* 9ec043: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec045: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec048: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec04b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec04e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec051: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec054: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec05au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec05b: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 9ec060: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec062: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 9ec064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec066: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 9ec06b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec071u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec071: push 0x9f1d60 */
  { uint32_t v = 0x9f1d60u; esp -= 4; W32(esp, v); }
/* 9ec076: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec07bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec07b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec07e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec07f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec082: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec0c0(void) {
  LOAD_REGS();
L_9ec0c0: /* 9ec0c0: mov dword ptr [0xce0f6c], 0xce0a40 */
  W32((uint32_t)(0xce0f6cu), 0xce0a40u);
/* 9ec0ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec0e0(void) {
  LOAD_REGS();
L_9ec0e0: /* 9ec0e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec0e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec0e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec0e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec0ec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec0f0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec0f6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec0f6: mov esi, eax */
  esi = eax;
/* 9ec0f8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec0fe: push 0x6c3819 */
  { uint32_t v = 0x6c3819u; esp -= 4; W32(esp, v); }
/* 9ec103: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec108: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec10eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec10e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec111: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec114: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec119: push 0xae719e */
  { uint32_t v = 0xae719eu; esp -= 4; W32(esp, v); }
/* 9ec11e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec121: mov ecx, esp */
  ecx = esp;
/* 9ec123: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec125: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec128: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec12b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec12e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec131: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec134: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec13au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec13a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec13b: push 0xb66a98 */
  { uint32_t v = 0xb66a98u; esp -= 4; W32(esp, v); }
/* 9ec140: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec142: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 9ec147: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec149: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 9ec14e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec154u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec154: push 0x9f1d80 */
  { uint32_t v = 0x9f1d80u; esp -= 4; W32(esp, v); }
/* 9ec159: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec15eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec15e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec161: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec162: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec165: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec1a0(void) {
  LOAD_REGS();
L_9ec1a0: /* 9ec1a0: mov dword ptr [0xce15b4], 0xce1088 */
  W32((uint32_t)(0xce15b4u), 0xce1088u);
/* 9ec1aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec1c0(void) {
  LOAD_REGS();
L_9ec1c0: /* 9ec1c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec1c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec1c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec1c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec1c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec1ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec1cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec1d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec1d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec1d6: mov esi, eax */
  esi = eax;
/* 9ec1d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec1dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec1de: push 0x6cbd70 */
  { uint32_t v = 0x6cbd70u; esp -= 4; W32(esp, v); }
/* 9ec1e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec1e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec1eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec1ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec1f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec1f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec1f9: push 0xae72f2 */
  { uint32_t v = 0xae72f2u; esp -= 4; W32(esp, v); }
/* 9ec1fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec201: mov ecx, esp */
  ecx = esp;
/* 9ec203: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec205: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec208: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec20b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec20e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec211: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec214: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec21au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec21a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec21b: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 9ec220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec222: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 9ec227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec229: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 9ec22e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec234u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec234: push 0x9f1da0 */
  { uint32_t v = 0x9f1da0u; esp -= 4; W32(esp, v); }
/* 9ec239: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec23eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec23e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec242: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec245: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec280(void) {
  LOAD_REGS();
L_9ec280: /* 9ec280: mov dword ptr [0xce1c1c], 0xce16f0 */
  W32((uint32_t)(0xce1c1cu), 0xce16f0u);
/* 9ec28a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec2a0(void) {
  LOAD_REGS();
L_9ec2a0: /* 9ec2a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec2a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec2a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec2a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec2a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec2aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec2ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec2b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec2b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec2b6: mov esi, eax */
  esi = eax;
/* 9ec2b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec2bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec2be: push 0x6c1d98 */
  { uint32_t v = 0x6c1d98u; esp -= 4; W32(esp, v); }
/* 9ec2c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec2c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec2ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec2ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec2d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec2d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec2d9: push 0xae7562 */
  { uint32_t v = 0xae7562u; esp -= 4; W32(esp, v); }
/* 9ec2de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec2e1: mov ecx, esp */
  ecx = esp;
/* 9ec2e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec2e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec2e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec2eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec2ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec2f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec2f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec2fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec2fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec2fb: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec301u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec301: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec302: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ec304: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9ec306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec308: mov ecx, 0xce1d38 */
  ecx = 0xce1d38u;
/* 9ec30d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec313u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec313: push 0x9f1dc0 */
  { uint32_t v = 0x9f1dc0u; esp -= 4; W32(esp, v); }
/* 9ec318: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec31du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec31d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec321: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec324: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec360(void) {
  LOAD_REGS();
L_9ec360: /* 9ec360: mov dword ptr [0xce2264], 0xce1d38 */
  W32((uint32_t)(0xce2264u), 0xce1d38u);
/* 9ec36a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec380(void) {
  LOAD_REGS();
L_9ec380: /* 9ec380: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec388: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec38a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec38c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec390: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec396u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec396: mov esi, eax */
  esi = eax;
/* 9ec398: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec39e: push 0x6c2a59 */
  { uint32_t v = 0x6c2a59u; esp -= 4; W32(esp, v); }
/* 9ec3a3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec3a8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec3aeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec3ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec3b1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec3b4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec3b9: push 0xae7596 */
  { uint32_t v = 0xae7596u; esp -= 4; W32(esp, v); }
/* 9ec3be: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec3c1: mov ecx, esp */
  ecx = esp;
/* 9ec3c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec3c5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec3c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec3cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec3ce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec3d1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec3d4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec3dau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec3da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec3db: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec3e1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec3e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec3e2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ec3e4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9ec3e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec3e8: mov ecx, 0xce2268 */
  ecx = 0xce2268u;
/* 9ec3ed: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec3f3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec3f3: push 0x9f1de0 */
  { uint32_t v = 0x9f1de0u; esp -= 4; W32(esp, v); }
/* 9ec3f8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec3fdu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec3fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec401: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec404: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec440(void) {
  LOAD_REGS();
L_9ec440: /* 9ec440: mov dword ptr [0xce2794], 0xce2268 */
  W32((uint32_t)(0xce2794u), 0xce2268u);
/* 9ec44a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec460(void) {
  LOAD_REGS();
L_9ec460: /* 9ec460: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec464: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec466: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec46a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec46c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec470: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec476u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec476: mov esi, eax */
  esi = eax;
/* 9ec478: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec47d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec47e: push 0x6c480e */
  { uint32_t v = 0x6c480eu; esp -= 4; W32(esp, v); }
/* 9ec483: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec488: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec48eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec48e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec491: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec494: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec499: push 0xae75b6 */
  { uint32_t v = 0xae75b6u; esp -= 4; W32(esp, v); }
/* 9ec49e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec4a1: mov ecx, esp */
  ecx = esp;
/* 9ec4a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec4a5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec4a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec4ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec4ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec4b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec4b4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec4bau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec4ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec4bb: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 9ec4c0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ec4c2: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 9ec4c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec4c9: mov ecx, 0xce2798 */
  ecx = 0xce2798u;
/* 9ec4ce: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec4d4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec4d4: push 0x9f1e00 */
  { uint32_t v = 0x9f1e00u; esp -= 4; W32(esp, v); }
/* 9ec4d9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec4deu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec4de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec4e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec4e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec4e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec520(void) {
  LOAD_REGS();
L_9ec520: /* 9ec520: mov dword ptr [0xce2cc4], 0xce2798 */
  W32((uint32_t)(0xce2cc4u), 0xce2798u);
/* 9ec52a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec540(void) {
  LOAD_REGS();
L_9ec540: /* 9ec540: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec543: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec544: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec546: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec54a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec54c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec550: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec556u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec556: mov esi, eax */
  esi = eax;
/* 9ec558: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec55e: push 0x6c3959 */
  { uint32_t v = 0x6c3959u; esp -= 4; W32(esp, v); }
/* 9ec563: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec568: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec56eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec56e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec571: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec574: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec579: push 0xae75d2 */
  { uint32_t v = 0xae75d2u; esp -= 4; W32(esp, v); }
/* 9ec57e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec581: mov ecx, esp */
  ecx = esp;
/* 9ec583: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec585: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec588: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec58b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec58e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec591: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec594: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec59au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec59a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec59b: push 0xb85470 */
  { uint32_t v = 0xb85470u; esp -= 4; W32(esp, v); }
/* 9ec5a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ec5a2: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 9ec5a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec5a9: mov ecx, 0xce2cc8 */
  ecx = 0xce2cc8u;
/* 9ec5ae: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec5b4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec5b4: push 0x9f1e20 */
  { uint32_t v = 0x9f1e20u; esp -= 4; W32(esp, v); }
/* 9ec5b9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec5beu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec5be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec5c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec5c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec5c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec600(void) {
  LOAD_REGS();
L_9ec600: /* 9ec600: mov dword ptr [0xce31f4], 0xce2cc8 */
  W32((uint32_t)(0xce31f4u), 0xce2cc8u);
/* 9ec60a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec620(void) {
  LOAD_REGS();
L_9ec620: /* 9ec620: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec626: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec628: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec62a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec62c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec630: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec636u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec636: mov esi, eax */
  esi = eax;
/* 9ec638: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec63e: push 0x6c89d1 */
  { uint32_t v = 0x6c89d1u; esp -= 4; W32(esp, v); }
/* 9ec643: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec648: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec64eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec64e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec651: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec654: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec659: push 0xae81b6 */
  { uint32_t v = 0xae81b6u; esp -= 4; W32(esp, v); }
/* 9ec65e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec661: mov ecx, esp */
  ecx = esp;
/* 9ec663: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec665: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec668: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec66b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec66e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec671: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec674: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec67au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec67a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec67b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec681u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec681: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec684: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9ec686: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec688: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 9ec68d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec693u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec693: push 0x9f1e40 */
  { uint32_t v = 0x9f1e40u; esp -= 4; W32(esp, v); }
/* 9ec698: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec69du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec69d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec6a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec6a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec6a4: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec6e0(void) {
  LOAD_REGS();
L_9ec6e0: /* 9ec6e0: mov dword ptr [0xce3724], 0xce31f8 */
  W32((uint32_t)(0xce3724u), 0xce31f8u);
/* 9ec6ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec700(void) {
  LOAD_REGS();
L_9ec700: /* 9ec700: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec704: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec70a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec70c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec710: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec716u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec716: mov esi, eax */
  esi = eax;
/* 9ec718: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec71e: push 0x6cc05e */
  { uint32_t v = 0x6cc05eu; esp -= 4; W32(esp, v); }
/* 9ec723: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec728: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec72eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec72e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec731: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec734: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec739: push 0xae821a */
  { uint32_t v = 0xae821au; esp -= 4; W32(esp, v); }
/* 9ec73e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec741: mov ecx, esp */
  ecx = esp;
/* 9ec743: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec745: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec748: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec74b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec74e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec751: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec754: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec75au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec75a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec75b: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9ec760: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec762: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 9ec764: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec766: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 9ec76b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec771u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec771: push 0x9f1e60 */
  { uint32_t v = 0x9f1e60u; esp -= 4; W32(esp, v); }
/* 9ec776: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec77bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec77b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec77e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec77f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec782: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec7c0(void) {
  LOAD_REGS();
L_9ec7c0: /* 9ec7c0: mov dword ptr [0xce3c54], 0xce3728 */
  W32((uint32_t)(0xce3c54u), 0xce3728u);
/* 9ec7ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec7e0(void) {
  LOAD_REGS();
L_9ec7e0: /* 9ec7e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec7e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec7e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec7e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec7ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec7ec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec7f0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec7f6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec7f6: mov esi, eax */
  esi = eax;
/* 9ec7f8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec7fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec7fe: push 0x6c826a */
  { uint32_t v = 0x6c826au; esp -= 4; W32(esp, v); }
/* 9ec803: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec808: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec80eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec80e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec811: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec814: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec819: push 0xae824a */
  { uint32_t v = 0xae824au; esp -= 4; W32(esp, v); }
/* 9ec81e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec821: mov ecx, esp */
  ecx = esp;
/* 9ec823: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec825: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec828: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec82b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec82e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec831: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec834: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec83au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec83a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec83b: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9ec840: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec842: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9ec844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec846: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 9ec84b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec851u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec851: push 0x9f1e80 */
  { uint32_t v = 0x9f1e80u; esp -= 4; W32(esp, v); }
/* 9ec856: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec85bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec85b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec85e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec85f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec862: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec8a0(void) {
  LOAD_REGS();
L_9ec8a0: /* 9ec8a0: mov dword ptr [0xce4184], 0xce3c58 */
  W32((uint32_t)(0xce4184u), 0xce3c58u);
/* 9ec8aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec8c0(void) {
  LOAD_REGS();
L_9ec8c0: /* 9ec8c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec8c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec8c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec8c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec8c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec8ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec8cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec8d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec8d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec8d6: mov esi, eax */
  esi = eax;
/* 9ec8d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec8de: push 0x6c8ffd */
  { uint32_t v = 0x6c8ffdu; esp -= 4; W32(esp, v); }
/* 9ec8e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec8e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec8eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec8ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec8f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec8f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec8f9: push 0xae82c2 */
  { uint32_t v = 0xae82c2u; esp -= 4; W32(esp, v); }
/* 9ec8fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec901: mov ecx, esp */
  ecx = esp;
/* 9ec903: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec905: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec908: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec90b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec90e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec911: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec914: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec91au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec91a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec91b: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9ec920: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec922: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9ec924: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec926: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 9ec92b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ec931u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ec931: push 0x9f1ea0 */
  { uint32_t v = 0x9f1ea0u; esp -= 4; W32(esp, v); }
/* 9ec936: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ec93bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ec93b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec93e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ec93f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ec942: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec980(void) {
  LOAD_REGS();
L_9ec980: /* 9ec980: mov dword ptr [0xce46b4], 0xce4188 */
  W32((uint32_t)(0xce46b4u), 0xce4188u);
/* 9ec98a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ec9a0(void) {
  LOAD_REGS();
L_9ec9a0: /* 9ec9a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec9a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ec9a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec9a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec9a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec9aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ec9ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ec9b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ec9b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ec9b6: mov esi, eax */
  esi = eax;
/* 9ec9b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ec9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec9be: push 0x6c9ffc */
  { uint32_t v = 0x6c9ffcu; esp -= 4; W32(esp, v); }
/* 9ec9c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ec9c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ec9ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ec9ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ec9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec9d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ec9d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ec9d9: push 0xae835e */
  { uint32_t v = 0xae835eu; esp -= 4; W32(esp, v); }
/* 9ec9de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ec9e1: mov ecx, esp */
  ecx = esp;
/* 9ec9e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ec9e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ec9e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ec9eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ec9ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ec9f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ec9f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ec9fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ec9fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ec9fb: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9eca00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca02: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 9eca04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca06: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 9eca0b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eca11u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eca11: push 0x9f1ec0 */
  { uint32_t v = 0x9f1ec0u; esp -= 4; W32(esp, v); }
/* 9eca16: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eca1bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eca1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eca1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eca1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eca22: ret  */
  esp += 4; SPILL(); return;
}

void f_9eca60(void) {
  LOAD_REGS();
L_9eca60: /* 9eca60: mov dword ptr [0xce4be4], 0xce46b8 */
  W32((uint32_t)(0xce4be4u), 0xce46b8u);
/* 9eca6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eca80(void) {
  LOAD_REGS();
L_9eca80: /* 9eca80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eca83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eca84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eca8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eca90: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eca96u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eca96: mov esi, eax */
  esi = eax;
/* 9eca98: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eca9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eca9e: push 0x6c5e75 */
  { uint32_t v = 0x6c5e75u; esp -= 4; W32(esp, v); }
/* 9ecaa3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ecaa8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ecaaeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ecaae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ecab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecab1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ecab4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ecab9: push 0xae83e2 */
  { uint32_t v = 0xae83e2u; esp -= 4; W32(esp, v); }
/* 9ecabe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecac1: mov ecx, esp */
  ecx = esp;
/* 9ecac3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ecac5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ecac8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ecacb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ecace: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ecad1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ecad4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecadau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ecada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecadb: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9ecae0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecae2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9ecae4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecae6: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 9ecaeb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecaf1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecaf1: push 0x9f1ee0 */
  { uint32_t v = 0x9f1ee0u; esp -= 4; W32(esp, v); }
/* 9ecaf6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecafbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ecafb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecafe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ecaff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecb02: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecb40(void) {
  LOAD_REGS();
L_9ecb40: /* 9ecb40: mov dword ptr [0xce5114], 0xce4be8 */
  W32((uint32_t)(0xce5114u), 0xce4be8u);
/* 9ecb4a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecb60(void) {
  LOAD_REGS();
L_9ecb60: /* 9ecb60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecb63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ecb64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecb66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecb68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecb6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecb6c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ecb70: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ecb76u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ecb76: mov esi, eax */
  esi = eax;
/* 9ecb78: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ecb7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecb7e: push 0x6c6aaf */
  { uint32_t v = 0x6c6aafu; esp -= 4; W32(esp, v); }
/* 9ecb83: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ecb88: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ecb8eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ecb8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ecb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecb91: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ecb94: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ecb99: push 0xae8572 */
  { uint32_t v = 0xae8572u; esp -= 4; W32(esp, v); }
/* 9ecb9e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecba1: mov ecx, esp */
  ecx = esp;
/* 9ecba3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ecba5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ecba8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ecbab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ecbae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ecbb1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ecbb4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecbbau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ecbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecbbb: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 9ecbc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecbc2: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 9ecbc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecbc6: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 9ecbcb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecbd1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecbd1: push 0x9f1f00 */
  { uint32_t v = 0x9f1f00u; esp -= 4; W32(esp, v); }
/* 9ecbd6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecbdbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ecbdb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecbde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ecbdf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecbe2: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecc20(void) {
  LOAD_REGS();
L_9ecc20: /* 9ecc20: mov dword ptr [0xce5644], 0xce5118 */
  W32((uint32_t)(0xce5644u), 0xce5118u);
/* 9ecc2a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecc40(void) {
  LOAD_REGS();
L_9ecc40: /* 9ecc40: mov ecx, 0xce61b8 */
  ecx = 0xce61b8u;
/* 9ecc45: call 0x6c547a */
  esp -= 4; W32(esp, 0x9ecc4au); SPILL(); f_6c547a(); if (g_unwind) return; RELOAD();
/* 9ecc4a: push 0x9f1f20 */
  { uint32_t v = 0x9f1f20u; esp -= 4; W32(esp, v); }
/* 9ecc4f: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecc54u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ecc54: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ecc55: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecc70(void) {
  LOAD_REGS();
L_9ecc70: /* 9ecc70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecc73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ecc74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecc76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecc78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecc7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ecc80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ecc86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ecc86: mov esi, eax */
  esi = eax;
/* 9ecc88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ecc8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecc8e: push 0x6c17e9 */
  { uint32_t v = 0x6c17e9u; esp -= 4; W32(esp, v); }
/* 9ecc93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ecc98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ecc9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ecc9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ecca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecca1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ecca4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ecca9: push 0xae9922 */
  { uint32_t v = 0xae9922u; esp -= 4; W32(esp, v); }
/* 9eccae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eccb1: mov ecx, esp */
  ecx = esp;
/* 9eccb3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eccb5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eccb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eccbb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eccbe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eccc1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eccc4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecccau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eccca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecccb: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 9eccd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eccd2: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 9eccd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eccd9: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 9eccde: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecce4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecce4: push 0x9f1f40 */
  { uint32_t v = 0x9f1f40u; esp -= 4; W32(esp, v); }
/* 9ecce9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecceeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eccee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eccf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eccf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eccf5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecd30(void) {
  LOAD_REGS();
L_9ecd30: /* 9ecd30: mov dword ptr [0xce67b4], 0xce6288 */
  W32((uint32_t)(0xce67b4u), 0xce6288u);
/* 9ecd3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecd50(void) {
  LOAD_REGS();
L_9ecd50: /* 9ecd50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecd53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ecd54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecd56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecd58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecd5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecd5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ecd60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ecd66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ecd66: mov esi, eax */
  esi = eax;
/* 9ecd68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ecd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecd6e: push 0x6cafe2 */
  { uint32_t v = 0x6cafe2u; esp -= 4; W32(esp, v); }
/* 9ecd73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ecd78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ecd7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ecd7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ecd80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecd81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ecd84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ecd89: push 0xae9972 */
  { uint32_t v = 0xae9972u; esp -= 4; W32(esp, v); }
/* 9ecd8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecd91: mov ecx, esp */
  ecx = esp;
/* 9ecd93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ecd95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ecd98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ecd9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ecd9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ecda1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ecda4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecdaau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ecdaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecdab: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 9ecdb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecdb2: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 9ecdb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecdb9: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 9ecdbe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecdc4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecdc4: push 0x9f1f60 */
  { uint32_t v = 0x9f1f60u; esp -= 4; W32(esp, v); }
/* 9ecdc9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecdceu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ecdce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecdd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ecdd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecdd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ece10(void) {
  LOAD_REGS();
L_9ece10: /* 9ece10: mov dword ptr [0xce6df4], 0xce68c8 */
  W32((uint32_t)(0xce6df4u), 0xce68c8u);
/* 9ece1a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ece30(void) {
  LOAD_REGS();
L_9ece30: /* 9ece30: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ece33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ece34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ece36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ece38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ece3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ece3c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ece40: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ece46u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ece46: push 0x6cac13 */
  { uint32_t v = 0x6cac13u; esp -= 4; W32(esp, v); }
/* 9ece4b: push 0x6cc9a5 */
  { uint32_t v = 0x6cc9a5u; esp -= 4; W32(esp, v); }
/* 9ece50: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ece55: mov esi, eax */
  esi = eax;
/* 9ece57: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ece5du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ece5d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ece5f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ece62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ece63: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ece68: push 0xae9cb2 */
  { uint32_t v = 0xae9cb2u; esp -= 4; W32(esp, v); }
/* 9ece6d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ece70: mov eax, esp */
  eax = esp;
/* 9ece72: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ece74: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ece77: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ece7a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ece7d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ece80: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ece83: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ece89u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ece89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ece8a: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9ece8f: push 0x2040 */
  { uint32_t v = 0x2040u; esp -= 4; W32(esp, v); }
/* 9ece94: push 0x184 */
  { uint32_t v = 0x184u; esp -= 4; W32(esp, v); }
/* 9ece99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ece9b: mov ecx, 0xce6f38 */
  ecx = 0xce6f38u;
/* 9ecea0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecea6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecea6: push 0x9f1f80 */
  { uint32_t v = 0x9f1f80u; esp -= 4; W32(esp, v); }
/* 9eceab: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eceb0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eceb0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eceb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eceb4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eceb7: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecef0(void) {
  LOAD_REGS();
L_9ecef0: /* 9ecef0: mov dword ptr [0xce7464], 0xce6f38 */
  W32((uint32_t)(0xce7464u), 0xce6f38u);
/* 9ecefa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecf10(void) {
  LOAD_REGS();
L_9ecf10: /* 9ecf10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ecf14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf1c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ecf20: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ecf26u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ecf26: mov esi, eax */
  esi = eax;
/* 9ecf28: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ecf2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecf2e: push 0x6cc4f5 */
  { uint32_t v = 0x6cc4f5u; esp -= 4; W32(esp, v); }
/* 9ecf33: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ecf38: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ecf3eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ecf3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ecf40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecf41: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ecf44: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ecf49: push 0xae9cca */
  { uint32_t v = 0xae9ccau; esp -= 4; W32(esp, v); }
/* 9ecf4e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecf51: mov ecx, esp */
  ecx = esp;
/* 9ecf53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ecf55: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ecf58: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ecf5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ecf5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ecf61: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ecf64: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecf6au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ecf6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecf6b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ecf71u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ecf71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ecf72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf74: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 9ecf76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecf78: mov ecx, 0xce7468 */
  ecx = 0xce7468u;
/* 9ecf7d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ecf83u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ecf83: push 0x9f1fa0 */
  { uint32_t v = 0x9f1fa0u; esp -= 4; W32(esp, v); }
/* 9ecf88: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ecf8du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ecf8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecf90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ecf91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ecf94: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecfd0(void) {
  LOAD_REGS();
L_9ecfd0: /* 9ecfd0: mov dword ptr [0xce7994], 0xce7468 */
  W32((uint32_t)(0xce7994u), 0xce7468u);
/* 9ecfda: ret  */
  esp += 4; SPILL(); return;
}

void f_9ecff0(void) {
  LOAD_REGS();
L_9ecff0: /* 9ecff0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ecff3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ecff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ecffc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed000: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed006u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed006: mov esi, eax */
  esi = eax;
/* 9ed008: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed00e: push 0x6c22fc */
  { uint32_t v = 0x6c22fcu; esp -= 4; W32(esp, v); }
/* 9ed013: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed018: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed01eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed01e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed021: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed024: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed029: push 0xae9cf2 */
  { uint32_t v = 0xae9cf2u; esp -= 4; W32(esp, v); }
/* 9ed02e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed031: mov ecx, esp */
  ecx = esp;
/* 9ed033: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed035: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed038: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed03b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed03e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed041: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed044: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed04au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed04a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed04b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9ed050: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed052: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 9ed057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed059: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 9ed05e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed064u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed064: push 0x9f1fc0 */
  { uint32_t v = 0x9f1fc0u; esp -= 4; W32(esp, v); }
/* 9ed069: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed06eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed06e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed071: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed072: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed075: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed0b0(void) {
  LOAD_REGS();
L_9ed0b0: /* 9ed0b0: mov dword ptr [0xce7ec4], 0xce7998 */
  W32((uint32_t)(0xce7ec4u), 0xce7998u);
/* 9ed0ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed0d0(void) {
  LOAD_REGS();
L_9ed0d0: /* 9ed0d0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 9ed0d5: call 0x6c1ae1 */
  esp -= 4; W32(esp, 0x9ed0dau); SPILL(); f_6c1ae1(); if (g_unwind) return; RELOAD();
/* 9ed0da: push 0x9f1fe0 */
  { uint32_t v = 0x9f1fe0u; esp -= 4; W32(esp, v); }
/* 9ed0df: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed0e4u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed0e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed0e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed100(void) {
  LOAD_REGS();
L_9ed100: /* 9ed100: mov ecx, 0xce8310 */
  ecx = 0xce8310u;
/* 9ed105: jmp 0x6c7554 */
  SPILL(); f_6c7554(); return;
}

void f_9ed120(void) {
  LOAD_REGS();
L_9ed120: /* 9ed120: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed123: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed128: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed12c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed130: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed136u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed136: mov esi, eax */
  esi = eax;
/* 9ed138: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed13e: push 0x6c8c06 */
  { uint32_t v = 0x6c8c06u; esp -= 4; W32(esp, v); }
/* 9ed143: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed148: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed14eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed14e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed151: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed154: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed159: push 0xaec8e2 */
  { uint32_t v = 0xaec8e2u; esp -= 4; W32(esp, v); }
/* 9ed15e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed161: mov ecx, esp */
  ecx = esp;
/* 9ed163: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed165: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed168: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed16b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed16e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed171: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed174: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed17au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed17a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed17b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed181u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed182: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed184: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 9ed189: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed18b: mov ecx, 0xce85b0 */
  ecx = 0xce85b0u;
/* 9ed190: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed196u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed196: push 0x9f2000 */
  { uint32_t v = 0x9f2000u; esp -= 4; W32(esp, v); }
/* 9ed19b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed1a0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed1a0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed1a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed1a4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed1a7: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed1e0(void) {
  LOAD_REGS();
L_9ed1e0: /* 9ed1e0: mov dword ptr [0xce8adc], 0xce85b0 */
  W32((uint32_t)(0xce8adcu), 0xce85b0u);
/* 9ed1ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed200(void) {
  LOAD_REGS();
L_9ed200: /* 9ed200: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed204: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed206: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed208: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed20a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed20c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed210: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed216u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed216: mov esi, eax */
  esi = eax;
/* 9ed218: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed21e: push 0x6c9dc7 */
  { uint32_t v = 0x6c9dc7u; esp -= 4; W32(esp, v); }
/* 9ed223: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed228: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed22eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed22e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed231: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed234: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed239: push 0xaec9b2 */
  { uint32_t v = 0xaec9b2u; esp -= 4; W32(esp, v); }
/* 9ed23e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed241: mov ecx, esp */
  ecx = esp;
/* 9ed243: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed245: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed248: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed24b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed24e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed251: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed254: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed25au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed25a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed25b: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9ed260: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed262: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9ed264: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed266: mov ecx, 0xce8ae0 */
  ecx = 0xce8ae0u;
/* 9ed26b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed271u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed271: push 0x9f2020 */
  { uint32_t v = 0x9f2020u; esp -= 4; W32(esp, v); }
/* 9ed276: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed27bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed27b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed27e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed27f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed282: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed2c0(void) {
  LOAD_REGS();
L_9ed2c0: /* 9ed2c0: mov dword ptr [0xce900c], 0xce8ae0 */
  W32((uint32_t)(0xce900cu), 0xce8ae0u);
/* 9ed2ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed2e0(void) {
  LOAD_REGS();
L_9ed2e0: /* 9ed2e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed2e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed2e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed2e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed2e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed2ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed2ec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed2f0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed2f6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed2f6: mov esi, eax */
  esi = eax;
/* 9ed2f8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed2fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed2fe: push 0x6c53d0 */
  { uint32_t v = 0x6c53d0u; esp -= 4; W32(esp, v); }
/* 9ed303: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed308: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed30eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed30e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed311: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed314: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed319: push 0xaecbf2 */
  { uint32_t v = 0xaecbf2u; esp -= 4; W32(esp, v); }
/* 9ed31e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed321: mov ecx, esp */
  ecx = esp;
/* 9ed323: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed325: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed328: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed32b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed32e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed331: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed334: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed33au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed33a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed33b: push 0xb66a98 */
  { uint32_t v = 0xb66a98u; esp -= 4; W32(esp, v); }
/* 9ed340: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed342: push 0x1384 */
  { uint32_t v = 0x1384u; esp -= 4; W32(esp, v); }
/* 9ed347: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed349: mov ecx, 0xce9010 */
  ecx = 0xce9010u;
/* 9ed34e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed354u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed354: push 0x9f2040 */
  { uint32_t v = 0x9f2040u; esp -= 4; W32(esp, v); }
/* 9ed359: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed35eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed35e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed361: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed362: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed365: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed3a0(void) {
  LOAD_REGS();
L_9ed3a0: /* 9ed3a0: mov dword ptr [0xce953c], 0xce9010 */
  W32((uint32_t)(0xce953cu), 0xce9010u);
/* 9ed3aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed3c0(void) {
  LOAD_REGS();
L_9ed3c0: /* 9ed3c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed3c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed3c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed3c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed3c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed3ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed3cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed3d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed3d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed3d6: mov esi, eax */
  esi = eax;
/* 9ed3d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed3de: push 0x6cc84c */
  { uint32_t v = 0x6cc84cu; esp -= 4; W32(esp, v); }
/* 9ed3e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed3e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed3eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed3ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed3f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed3f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed3f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed3f9: push 0xaecc46 */
  { uint32_t v = 0xaecc46u; esp -= 4; W32(esp, v); }
/* 9ed3fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed401: mov ecx, esp */
  ecx = esp;
/* 9ed403: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed405: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed408: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed40b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed40e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed411: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed414: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed41au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed41a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed41b: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9ed420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed422: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9ed424: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed426: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 9ed42b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed431u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed431: push 0x9f2060 */
  { uint32_t v = 0x9f2060u; esp -= 4; W32(esp, v); }
/* 9ed436: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed43bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed43b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed43e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed43f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed442: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed480(void) {
  LOAD_REGS();
L_9ed480: /* 9ed480: mov dword ptr [0xce9a6c], 0xce9540 */
  W32((uint32_t)(0xce9a6cu), 0xce9540u);
/* 9ed48a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed4a0(void) {
  LOAD_REGS();
L_9ed4a0: /* 9ed4a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed4a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed4a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed4a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed4aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed4ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed4b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed4b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed4b6: mov esi, eax */
  esi = eax;
/* 9ed4b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed4be: push 0x6c2333 */
  { uint32_t v = 0x6c2333u; esp -= 4; W32(esp, v); }
/* 9ed4c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed4c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed4ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed4ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed4d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed4d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed4d9: push 0xaed536 */
  { uint32_t v = 0xaed536u; esp -= 4; W32(esp, v); }
/* 9ed4de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed4e1: mov ecx, esp */
  ecx = esp;
/* 9ed4e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed4e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed4e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed4eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed4ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed4f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed4f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed4fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed4fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed4fb: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 9ed500: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ed502: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 9ed507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed509: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 9ed50e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed514u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed514: push 0x9f20c0 */
  { uint32_t v = 0x9f20c0u; esp -= 4; W32(esp, v); }
/* 9ed519: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed51eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed51e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed521: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed522: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed525: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed560(void) {
  LOAD_REGS();
L_9ed560: /* 9ed560: mov dword ptr [0xcea3f4], 0xce9ec8 */
  W32((uint32_t)(0xcea3f4u), 0xce9ec8u);
/* 9ed56a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed580(void) {
  LOAD_REGS();
L_9ed580: /* 9ed580: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed584: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed588: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed58a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed58c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed590: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed596u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed596: mov esi, eax */
  esi = eax;
/* 9ed598: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed59d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed59e: push 0x6c6ded */
  { uint32_t v = 0x6c6dedu; esp -= 4; W32(esp, v); }
/* 9ed5a3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed5a8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed5aeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed5ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed5b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed5b1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed5b4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed5b9: push 0xaed67e */
  { uint32_t v = 0xaed67eu; esp -= 4; W32(esp, v); }
/* 9ed5be: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed5c1: mov ecx, esp */
  ecx = esp;
/* 9ed5c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed5c5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed5c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed5cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed5ce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed5d1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed5d4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed5dau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed5da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed5db: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed5e1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed5e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed5e2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ed5e4: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9ed5e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed5e8: mov ecx, 0xcea3f8 */
  ecx = 0xcea3f8u;
/* 9ed5ed: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed5f3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed5f3: push 0x9f20e0 */
  { uint32_t v = 0x9f20e0u; esp -= 4; W32(esp, v); }
/* 9ed5f8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed5fdu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed5fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed600: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed601: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed604: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed640(void) {
  LOAD_REGS();
L_9ed640: /* 9ed640: mov dword ptr [0xcea924], 0xcea3f8 */
  W32((uint32_t)(0xcea924u), 0xcea3f8u);
/* 9ed64a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed660(void) {
  LOAD_REGS();
L_9ed660: /* 9ed660: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed666: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed66a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed66c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed670: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed676u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed676: mov esi, eax */
  esi = eax;
/* 9ed678: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed67e: push 0x6c6019 */
  { uint32_t v = 0x6c6019u; esp -= 4; W32(esp, v); }
/* 9ed683: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed688: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed68eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed68e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed691: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed694: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed699: push 0xaed8fa */
  { uint32_t v = 0xaed8fau; esp -= 4; W32(esp, v); }
/* 9ed69e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed6a1: mov ecx, esp */
  ecx = esp;
/* 9ed6a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed6a5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed6a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed6ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed6ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed6b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed6b4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed6bau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed6ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed6bb: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 9ed6c0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9ed6c2: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 9ed6c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed6c9: mov ecx, 0xcea928 */
  ecx = 0xcea928u;
/* 9ed6ce: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed6d4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed6d4: push 0x9f2100 */
  { uint32_t v = 0x9f2100u; esp -= 4; W32(esp, v); }
/* 9ed6d9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed6deu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed6de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed6e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed6e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed6e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed720(void) {
  LOAD_REGS();
L_9ed720: /* 9ed720: mov dword ptr [0xceae54], 0xcea928 */
  W32((uint32_t)(0xceae54u), 0xcea928u);
/* 9ed72a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed740(void) {
  LOAD_REGS();
L_9ed740: /* 9ed740: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed746: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed74a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed74c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed750: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed756u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed756: mov esi, eax */
  esi = eax;
/* 9ed758: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed75d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed75e: push 0x6c77b1 */
  { uint32_t v = 0x6c77b1u; esp -= 4; W32(esp, v); }
/* 9ed763: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed768: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed76eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed76e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ed770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed771: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ed774: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ed779: push 0xaeda8e */
  { uint32_t v = 0xaeda8eu; esp -= 4; W32(esp, v); }
/* 9ed77e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed781: mov ecx, esp */
  ecx = esp;
/* 9ed783: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ed785: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ed788: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ed78b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ed78e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ed791: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ed794: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ed79au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ed79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed79b: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 9ed7a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed7a2: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 9ed7a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed7a9: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 9ed7ae: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ed7b4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ed7b4: push 0x9f2120 */
  { uint32_t v = 0x9f2120u; esp -= 4; W32(esp, v); }
/* 9ed7b9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed7beu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed7be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed7c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ed7c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ed7c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed800(void) {
  LOAD_REGS();
L_9ed800: /* 9ed800: mov dword ptr [0xcebbbc], 0xceb690 */
  W32((uint32_t)(0xcebbbcu), 0xceb690u);
/* 9ed80a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed820(void) {
  LOAD_REGS();
L_9ed820: /* 9ed820: mov ecx, 0xcebd08 */
  ecx = 0xcebd08u;
/* 9ed825: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed82bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed82b: push 0x9f2140 */
  { uint32_t v = 0x9f2140u; esp -= 4; W32(esp, v); }
/* 9ed830: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed835u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed835: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed836: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed850(void) {
  LOAD_REGS();
L_9ed850: /* 9ed850: mov ecx, 0xcebd14 */
  ecx = 0xcebd14u;
/* 9ed855: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed85bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed85b: push 0x9f2160 */
  { uint32_t v = 0x9f2160u; esp -= 4; W32(esp, v); }
/* 9ed860: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed865u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed865: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed866: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed880(void) {
  LOAD_REGS();
L_9ed880: /* 9ed880: mov ecx, 0xcebd20 */
  ecx = 0xcebd20u;
/* 9ed885: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed88bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed88b: push 0x9f2180 */
  { uint32_t v = 0x9f2180u; esp -= 4; W32(esp, v); }
/* 9ed890: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed895u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed895: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed896: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed8b0(void) {
  LOAD_REGS();
L_9ed8b0: /* 9ed8b0: mov ecx, 0xcebd2c */
  ecx = 0xcebd2cu;
/* 9ed8b5: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed8bbu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed8bb: push 0x9f21a0 */
  { uint32_t v = 0x9f21a0u; esp -= 4; W32(esp, v); }
/* 9ed8c0: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed8c5u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed8c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed8c6: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed8e0(void) {
  LOAD_REGS();
L_9ed8e0: /* 9ed8e0: mov ecx, 0xcebd38 */
  ecx = 0xcebd38u;
/* 9ed8e5: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed8ebu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed8eb: push 0x9f21c0 */
  { uint32_t v = 0x9f21c0u; esp -= 4; W32(esp, v); }
/* 9ed8f0: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed8f5u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed8f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed8f6: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed910(void) {
  LOAD_REGS();
L_9ed910: /* 9ed910: mov ecx, 0xcebd44 */
  ecx = 0xcebd44u;
/* 9ed915: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed91bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed91b: push 0x9f21e0 */
  { uint32_t v = 0x9f21e0u; esp -= 4; W32(esp, v); }
/* 9ed920: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed925u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed925: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed926: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed940(void) {
  LOAD_REGS();
L_9ed940: /* 9ed940: mov ecx, 0xcebd50 */
  ecx = 0xcebd50u;
/* 9ed945: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed94bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed94b: push 0x9f2200 */
  { uint32_t v = 0x9f2200u; esp -= 4; W32(esp, v); }
/* 9ed950: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed955u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed955: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed956: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed970(void) {
  LOAD_REGS();
L_9ed970: /* 9ed970: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 9ed975: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed97bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed97b: push 0x9f2220 */
  { uint32_t v = 0x9f2220u; esp -= 4; W32(esp, v); }
/* 9ed980: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed985u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed985: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed986: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed9a0(void) {
  LOAD_REGS();
L_9ed9a0: /* 9ed9a0: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 9ed9a5: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x9ed9abu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 9ed9ab: push 0x9f2240 */
  { uint32_t v = 0x9f2240u; esp -= 4; W32(esp, v); }
/* 9ed9b0: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ed9b5u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ed9b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ed9b6: ret  */
  esp += 4; SPILL(); return;
}

void f_9ed9d0(void) {
  LOAD_REGS();
L_9ed9d0: /* 9ed9d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ed9d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ed9d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed9d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed9d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed9da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ed9dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ed9e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ed9e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ed9e6: mov esi, eax */
  esi = eax;
/* 9ed9e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ed9ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ed9ee: push 0x6c13f2 */
  { uint32_t v = 0x6c13f2u; esp -= 4; W32(esp, v); }
/* 9ed9f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ed9f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ed9feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ed9fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eda00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eda01: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eda04: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eda09: push 0xaede32 */
  { uint32_t v = 0xaede32u; esp -= 4; W32(esp, v); }
/* 9eda0e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eda11: mov ecx, esp */
  ecx = esp;
/* 9eda13: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eda15: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eda18: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eda1b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eda1e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eda21: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eda24: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eda2au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eda2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eda2b: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 9eda30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eda32: push 0x260 */
  { uint32_t v = 0x260u; esp -= 4; W32(esp, v); }
/* 9eda37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eda39: mov ecx, 0xcebda8 */
  ecx = 0xcebda8u;
/* 9eda3e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eda44u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eda44: push 0x9f2260 */
  { uint32_t v = 0x9f2260u; esp -= 4; W32(esp, v); }
/* 9eda49: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eda4eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eda4e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eda51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eda52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eda55: ret  */
  esp += 4; SPILL(); return;
}

void f_9eda90(void) {
  LOAD_REGS();
L_9eda90: /* 9eda90: mov dword ptr [0xcec2d4], 0xcebda8 */
  W32((uint32_t)(0xcec2d4u), 0xcebda8u);
/* 9eda9a: ret  */
  esp += 4; SPILL(); return;
}

void f_9edab0(void) {
  LOAD_REGS();
L_9edab0: /* 9edab0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edaba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edabc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9edac0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9edac6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9edac6: mov esi, eax */
  esi = eax;
/* 9edac8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9edacd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edace: push 0x6c3a12 */
  { uint32_t v = 0x6c3a12u; esp -= 4; W32(esp, v); }
/* 9edad3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9edad8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9edadeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9edade: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9edae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edae1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9edae4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9edae9: push 0xaedf8e */
  { uint32_t v = 0xaedf8eu; esp -= 4; W32(esp, v); }
/* 9edaee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edaf1: mov ecx, esp */
  ecx = esp;
/* 9edaf3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9edaf5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9edaf8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9edafb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9edafe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9edb01: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9edb04: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9edb0au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9edb0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edb0b: push 0xb85470 */
  { uint32_t v = 0xb85470u; esp -= 4; W32(esp, v); }
/* 9edb10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb12: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 9edb17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb19: mov ecx, 0xcec2d8 */
  ecx = 0xcec2d8u;
/* 9edb1e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9edb24u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9edb24: push 0x9f2280 */
  { uint32_t v = 0x9f2280u; esp -= 4; W32(esp, v); }
/* 9edb29: call 0x99cbec */
  esp -= 4; W32(esp, 0x9edb2eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9edb2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edb31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9edb32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edb35: ret  */
  esp += 4; SPILL(); return;
}

void f_9edb70(void) {
  LOAD_REGS();
L_9edb70: /* 9edb70: mov dword ptr [0xcec804], 0xcec2d8 */
  W32((uint32_t)(0xcec804u), 0xcec2d8u);
/* 9edb7a: ret  */
  esp += 4; SPILL(); return;
}

void f_9edb90(void) {
  LOAD_REGS();
L_9edb90: /* 9edb90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edb93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edb94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edb9c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9edba0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9edba6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9edba6: mov esi, eax */
  esi = eax;
/* 9edba8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9edbad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edbae: push 0x6c6fdc */
  { uint32_t v = 0x6c6fdcu; esp -= 4; W32(esp, v); }
/* 9edbb3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9edbb8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9edbbeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9edbbe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9edbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edbc1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9edbc4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9edbc9: push 0xaee26e */
  { uint32_t v = 0xaee26eu; esp -= 4; W32(esp, v); }
/* 9edbce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edbd1: mov ecx, esp */
  ecx = esp;
/* 9edbd3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9edbd5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9edbd8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9edbdb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9edbde: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9edbe1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9edbe4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9edbeau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9edbea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edbeb: push 0xb63188 */
  { uint32_t v = 0xb63188u; esp -= 4; W32(esp, v); }
/* 9edbf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edbf2: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 9edbf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edbf9: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 9edbfe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9edc04u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9edc04: push 0x9f22a0 */
  { uint32_t v = 0x9f22a0u; esp -= 4; W32(esp, v); }
/* 9edc09: call 0x99cbec */
  esp -= 4; W32(esp, 0x9edc0eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9edc0e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edc11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9edc12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edc15: ret  */
  esp += 4; SPILL(); return;
}

void f_9edc50(void) {
  LOAD_REGS();
L_9edc50: /* 9edc50: mov dword ptr [0xcecf4c], 0xceca20 */
  W32((uint32_t)(0xcecf4cu), 0xceca20u);
/* 9edc5a: ret  */
  esp += 4; SPILL(); return;
}

void f_9edc70(void) {
  LOAD_REGS();
L_9edc70: /* 9edc70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edc73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edc74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edc76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edc78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edc7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9edc80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9edc86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9edc86: mov esi, eax */
  esi = eax;
/* 9edc88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9edc8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edc8e: push 0x6c6c21 */
  { uint32_t v = 0x6c6c21u; esp -= 4; W32(esp, v); }
/* 9edc93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9edc98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9edc9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9edc9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9edca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edca1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9edca4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9edca9: push 0xaee28e */
  { uint32_t v = 0xaee28eu; esp -= 4; W32(esp, v); }
/* 9edcae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edcb1: mov ecx, esp */
  ecx = esp;
/* 9edcb3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9edcb5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9edcb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9edcbb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9edcbe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9edcc1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9edcc4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9edccau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9edcca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edccb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9edcd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edcd2: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 9edcd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edcd9: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 9edcde: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9edce4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9edce4: push 0x9f22c0 */
  { uint32_t v = 0x9f22c0u; esp -= 4; W32(esp, v); }
/* 9edce9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9edceeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9edcee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edcf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9edcf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edcf5: ret  */
  esp += 4; SPILL(); return;
}

void f_9edd30(void) {
  LOAD_REGS();
L_9edd30: /* 9edd30: mov dword ptr [0xced47c], 0xcecf50 */
  W32((uint32_t)(0xced47cu), 0xcecf50u);
/* 9edd3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9edd50(void) {
  LOAD_REGS();
L_9edd50: /* 9edd50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edd53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edd54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edd56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edd58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edd5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edd5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9edd60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9edd66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9edd66: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9edd6c: mov esi, eax */
  esi = eax;
/* 9edd6e: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9edd73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edd74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9edd75: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9edd7a: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9edd80u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9edd80: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9edd83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edd84: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9edd86: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9edd8b: push 0xaeeade */
  { uint32_t v = 0xaeeadeu; esp -= 4; W32(esp, v); }
/* 9edd90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edd93: mov edx, esp */
  edx = esp;
/* 9edd95: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9edd97: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9edd9a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9edd9d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9edda0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9edda3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9edda6: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eddacu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eddac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eddad: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eddb3u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eddb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eddb4: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 9eddb6: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 9eddb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eddba: mov ecx, 0xced6d0 */
  ecx = 0xced6d0u;
/* 9eddbf: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eddc5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eddc5: push 0x9f22e0 */
  { uint32_t v = 0x9f22e0u; esp -= 4; W32(esp, v); }
/* 9eddca: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eddcfu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eddcf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eddd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eddd3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eddd6: ret  */
  esp += 4; SPILL(); return;
}

void f_9ede10(void) {
  LOAD_REGS();
L_9ede10: /* 9ede10: mov dword ptr [0xcedbfc], 0xced6d0 */
  W32((uint32_t)(0xcedbfcu), 0xced6d0u);
/* 9ede1a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ede30(void) {
  LOAD_REGS();
L_9ede30: /* 9ede30: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ede33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ede34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ede36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ede38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ede3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ede3c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ede40: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ede46u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ede46: push 0x6cb906 */
  { uint32_t v = 0x6cb906u; esp -= 4; W32(esp, v); }
/* 9ede4b: push 0x6ca123 */
  { uint32_t v = 0x6ca123u; esp -= 4; W32(esp, v); }
/* 9ede50: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ede55: mov esi, eax */
  esi = eax;
/* 9ede57: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ede5du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ede5d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ede5f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ede62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ede63: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ede68: push 0xaeebca */
  { uint32_t v = 0xaeebcau; esp -= 4; W32(esp, v); }
/* 9ede6d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ede70: mov eax, esp */
  eax = esp;
/* 9ede72: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ede74: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ede77: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ede7a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ede7d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ede80: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ede83: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ede89u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ede89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ede8a: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 9ede8f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ede91: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 9ede93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ede95: mov ecx, 0xcedc00 */
  ecx = 0xcedc00u;
/* 9ede9a: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9edea0u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9edea0: push 0x9f2300 */
  { uint32_t v = 0x9f2300u; esp -= 4; W32(esp, v); }
/* 9edea5: call 0x99cbec */
  esp -= 4; W32(esp, 0x9edeaau); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9edeaa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9edeae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edeb1: ret  */
  esp += 4; SPILL(); return;
}

void f_9edef0(void) {
  LOAD_REGS();
L_9edef0: /* 9edef0: mov dword ptr [0xcee12c], 0xcedc00 */
  W32((uint32_t)(0xcee12cu), 0xcedc00u);
/* 9edefa: ret  */
  esp += 4; SPILL(); return;
}

void f_9edf10(void) {
  LOAD_REGS();
L_9edf10: /* 9edf10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edf14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edf16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edf18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edf1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edf1c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9edf20: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9edf26u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9edf26: push 0x6c9f7f */
  { uint32_t v = 0x6c9f7fu; esp -= 4; W32(esp, v); }
/* 9edf2b: push 0x6c49d5 */
  { uint32_t v = 0x6c49d5u; esp -= 4; W32(esp, v); }
/* 9edf30: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9edf35: mov esi, eax */
  esi = eax;
/* 9edf37: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9edf3du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9edf3d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9edf3f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9edf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edf43: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9edf48: push 0xaef2c6 */
  { uint32_t v = 0xaef2c6u; esp -= 4; W32(esp, v); }
/* 9edf4d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edf50: mov eax, esp */
  eax = esp;
/* 9edf52: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9edf54: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9edf57: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9edf5a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9edf5d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9edf60: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9edf63: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9edf69u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9edf69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9edf6a: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 9edf6f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9edf71: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 9edf76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edf78: mov ecx, 0xcee130 */
  ecx = 0xcee130u;
/* 9edf7d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9edf83u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9edf83: push 0x9f2320 */
  { uint32_t v = 0x9f2320u; esp -= 4; W32(esp, v); }
/* 9edf88: call 0x99cbec */
  esp -= 4; W32(esp, 0x9edf8du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9edf8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edf90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9edf91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9edf94: ret  */
  esp += 4; SPILL(); return;
}

void f_9edfd0(void) {
  LOAD_REGS();
L_9edfd0: /* 9edfd0: mov dword ptr [0xcee65c], 0xcee130 */
  W32((uint32_t)(0xcee65cu), 0xcee130u);
/* 9edfda: ret  */
  esp += 4; SPILL(); return;
}

void f_9edff0(void) {
  LOAD_REGS();
L_9edff0: /* 9edff0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9edff3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9edff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9edffc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee000: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee006u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee006: push 0x6ca74f */
  { uint32_t v = 0x6ca74fu; esp -= 4; W32(esp, v); }
/* 9ee00b: push 0x6c6956 */
  { uint32_t v = 0x6c6956u; esp -= 4; W32(esp, v); }
/* 9ee010: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee015: mov esi, eax */
  esi = eax;
/* 9ee017: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee01du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee01d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ee01f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ee022: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee023: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee028: push 0xaef4b6 */
  { uint32_t v = 0xaef4b6u; esp -= 4; W32(esp, v); }
/* 9ee02d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee030: mov eax, esp */
  eax = esp;
/* 9ee032: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ee034: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ee037: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ee03a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ee03d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ee040: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ee043: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee049u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee04a: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 9ee04f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ee051: push 0x274 */
  { uint32_t v = 0x274u; esp -= 4; W32(esp, v); }
/* 9ee056: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee058: mov ecx, 0xcee660 */
  ecx = 0xcee660u;
/* 9ee05d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee063u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee063: push 0x9f2340 */
  { uint32_t v = 0x9f2340u; esp -= 4; W32(esp, v); }
/* 9ee068: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee06du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee06d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee071: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee074: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee0b0(void) {
  LOAD_REGS();
L_9ee0b0: /* 9ee0b0: mov dword ptr [0xceeb8c], 0xcee660 */
  W32((uint32_t)(0xceeb8cu), 0xcee660u);
/* 9ee0ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee0d0(void) {
  LOAD_REGS();
L_9ee0d0: /* 9ee0d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee0d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee0d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee0d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee0d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee0da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee0dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee0e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee0e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee0e6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9ee0ec: mov esi, eax */
  esi = eax;
/* 9ee0ee: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ee0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee0f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9ee0f5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee0fa: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee100u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee100: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9ee103: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee104: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9ee106: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee10b: push 0xaefc0a */
  { uint32_t v = 0xaefc0au; esp -= 4; W32(esp, v); }
/* 9ee110: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee113: mov edx, esp */
  edx = esp;
/* 9ee115: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9ee117: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9ee11a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9ee11d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9ee120: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9ee123: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9ee126: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee12cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee12c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee12d: push 0xcc7b00 */
  { uint32_t v = 0xcc7b00u; esp -= 4; W32(esp, v); }
/* 9ee132: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 9ee134: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 9ee139: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee13b: mov ecx, 0xceefd0 */
  ecx = 0xceefd0u;
/* 9ee140: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee146u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee146: push 0x9f2360 */
  { uint32_t v = 0x9f2360u; esp -= 4; W32(esp, v); }
/* 9ee14b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee150u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee150: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee153: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee157: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee190(void) {
  LOAD_REGS();
L_9ee190: /* 9ee190: mov dword ptr [0xcef4fc], 0xceefd0 */
  W32((uint32_t)(0xcef4fcu), 0xceefd0u);
/* 9ee19a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee1b0(void) {
  LOAD_REGS();
L_9ee1b0: /* 9ee1b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee1b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee1b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee1b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee1b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee1ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee1bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee1c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee1c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee1c6: mov esi, eax */
  esi = eax;
/* 9ee1c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ee1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee1ce: push 0x6c8f80 */
  { uint32_t v = 0x6c8f80u; esp -= 4; W32(esp, v); }
/* 9ee1d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee1d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee1deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee1de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ee1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee1e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ee1e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee1e9: push 0xaf0aaa */
  { uint32_t v = 0xaf0aaau; esp -= 4; W32(esp, v); }
/* 9ee1ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee1f1: mov ecx, esp */
  ecx = esp;
/* 9ee1f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ee1f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ee1f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ee1fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ee1fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ee201: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ee204: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee20au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee20a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee20b: push 0xcf21f8 */
  { uint32_t v = 0xcf21f8u; esp -= 4; W32(esp, v); }
/* 9ee210: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ee212: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 9ee217: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee219: mov ecx, 0xcef618 */
  ecx = 0xcef618u;
/* 9ee21e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee224u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee224: push 0x9f2380 */
  { uint32_t v = 0x9f2380u; esp -= 4; W32(esp, v); }
/* 9ee229: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee22eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee22e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee231: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee232: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee235: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee270(void) {
  LOAD_REGS();
L_9ee270: /* 9ee270: mov dword ptr [0xcefb44], 0xcef618 */
  W32((uint32_t)(0xcefb44u), 0xcef618u);
/* 9ee27a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee290(void) {
  LOAD_REGS();
L_9ee290: /* 9ee290: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee293: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee296: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee298: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee29a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee29c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee2a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee2a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee2a6: push 0x6c96c9 */
  { uint32_t v = 0x6c96c9u; esp -= 4; W32(esp, v); }
/* 9ee2ab: push 0x6c5c09 */
  { uint32_t v = 0x6c5c09u; esp -= 4; W32(esp, v); }
/* 9ee2b0: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee2b5: mov esi, eax */
  esi = eax;
/* 9ee2b7: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee2bdu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee2bd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ee2bf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ee2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee2c3: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee2c8: push 0xaf0c46 */
  { uint32_t v = 0xaf0c46u; esp -= 4; W32(esp, v); }
/* 9ee2cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee2d0: mov eax, esp */
  eax = esp;
/* 9ee2d2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ee2d4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ee2d7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ee2da: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ee2dd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ee2e0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ee2e3: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee2e9u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee2ea: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 9ee2ef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9ee2f1: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 9ee2f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee2f8: mov ecx, 0xcefc60 */
  ecx = 0xcefc60u;
/* 9ee2fd: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee303u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee303: push 0x9f23a0 */
  { uint32_t v = 0x9f23a0u; esp -= 4; W32(esp, v); }
/* 9ee308: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee30du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee30d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee311: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee314: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee350(void) {
  LOAD_REGS();
L_9ee350: /* 9ee350: mov dword ptr [0xcf018c], 0xcefc60 */
  W32((uint32_t)(0xcf018cu), 0xcefc60u);
/* 9ee35a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee370(void) {
  LOAD_REGS();
L_9ee370: /* 9ee370: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee37a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee37c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee380: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee386u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee386: push 0x6c798c */
  { uint32_t v = 0x6c798cu; esp -= 4; W32(esp, v); }
/* 9ee38b: push 0x6c965b */
  { uint32_t v = 0x6c965bu; esp -= 4; W32(esp, v); }
/* 9ee390: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee395: mov esi, eax */
  esi = eax;
/* 9ee397: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee39du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee39d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ee39f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ee3a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee3a3: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee3a8: push 0xaf10b2 */
  { uint32_t v = 0xaf10b2u; esp -= 4; W32(esp, v); }
/* 9ee3ad: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee3b0: mov eax, esp */
  eax = esp;
/* 9ee3b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ee3b4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ee3b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ee3ba: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ee3bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ee3c0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ee3c3: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee3c9u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee3ca: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 9ee3cf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9ee3d1: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 9ee3d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee3d8: mov ecx, 0xcf0190 */
  ecx = 0xcf0190u;
/* 9ee3dd: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee3e3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee3e3: push 0x9f23c0 */
  { uint32_t v = 0x9f23c0u; esp -= 4; W32(esp, v); }
/* 9ee3e8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee3edu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee3ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee3f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee3f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee3f4: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee430(void) {
  LOAD_REGS();
L_9ee430: /* 9ee430: mov dword ptr [0xcf06bc], 0xcf0190 */
  W32((uint32_t)(0xcf06bcu), 0xcf0190u);
/* 9ee43a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee450(void) {
  LOAD_REGS();
L_9ee450: /* 9ee450: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee453: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee45a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee45c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee460: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee466u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee466: mov esi, eax */
  esi = eax;
/* 9ee468: mov eax, dword ptr [0xcfa620] */
  eax = R32((uint32_t)(0xcfa620u));
/* 9ee46d: push 0x6cab32 */
  { uint32_t v = 0x6cab32u; esp -= 4; W32(esp, v); }
/* 9ee472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee473: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee478: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee47eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee47e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ee480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee481: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ee484: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee489: push 0xaf150e */
  { uint32_t v = 0xaf150eu; esp -= 4; W32(esp, v); }
/* 9ee48e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee491: mov ecx, esp */
  ecx = esp;
/* 9ee493: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ee495: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ee498: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ee49b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ee49e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ee4a1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ee4a4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee4aau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee4ab: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee4b1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee4b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee4b2: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 9ee4b4: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 9ee4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee4bb: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 9ee4c0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee4c6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee4c6: push 0x9f23e0 */
  { uint32_t v = 0x9f23e0u; esp -= 4; W32(esp, v); }
/* 9ee4cb: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee4d0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee4d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee4d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee4d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee4d7: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee510(void) {
  LOAD_REGS();
L_9ee510: /* 9ee510: mov dword ptr [0xcf0e14], 0xcf08e8 */
  W32((uint32_t)(0xcf0e14u), 0xcf08e8u);
/* 9ee51a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee530(void) {
  LOAD_REGS();
L_9ee530: /* 9ee530: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee533: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee536: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee53a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee53c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee540: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee546u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee546: push 0x6c8fc6 */
  { uint32_t v = 0x6c8fc6u; esp -= 4; W32(esp, v); }
/* 9ee54b: push 0x6c87b0 */
  { uint32_t v = 0x6c87b0u; esp -= 4; W32(esp, v); }
/* 9ee550: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee555: mov esi, eax */
  esi = eax;
/* 9ee557: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee55du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee55d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9ee55f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9ee562: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee563: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee568: push 0xaf15b2 */
  { uint32_t v = 0xaf15b2u; esp -= 4; W32(esp, v); }
/* 9ee56d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee570: mov eax, esp */
  eax = esp;
/* 9ee572: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9ee574: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9ee577: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9ee57a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9ee57d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9ee580: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9ee583: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee589u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee58a: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 9ee58f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9ee591: push 0x458 */
  { uint32_t v = 0x458u; esp -= 4; W32(esp, v); }
/* 9ee596: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee598: mov ecx, 0xcf0e18 */
  ecx = 0xcf0e18u;
/* 9ee59d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee5a3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee5a3: push 0x9f2400 */
  { uint32_t v = 0x9f2400u; esp -= 4; W32(esp, v); }
/* 9ee5a8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee5adu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee5ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee5b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee5b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee5b4: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee5f0(void) {
  LOAD_REGS();
L_9ee5f0: /* 9ee5f0: mov dword ptr [0xcf1344], 0xcf0e18 */
  W32((uint32_t)(0xcf1344u), 0xcf0e18u);
/* 9ee5fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee610(void) {
  LOAD_REGS();
L_9ee610: /* 9ee610: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee618: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee61a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee61c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee620: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee626u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee626: mov esi, eax */
  esi = eax;
/* 9ee628: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ee62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee62e: push 0x6c277a */
  { uint32_t v = 0x6c277au; esp -= 4; W32(esp, v); }
/* 9ee633: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee638: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee63eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee63e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ee640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee641: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ee644: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee649: push 0xaf17c2 */
  { uint32_t v = 0xaf17c2u; esp -= 4; W32(esp, v); }
/* 9ee64e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee651: mov ecx, esp */
  ecx = esp;
/* 9ee653: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ee655: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ee658: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ee65b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ee65e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ee661: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ee664: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee66au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee66b: call dword ptr [0xcfa188] */
  esp -= 4; W32(esp, 0x9ee671u); SPILL(); f_4e37c4(); if (g_unwind) return; /* Core!?StaticClass@UPackageMap@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee672: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ee674: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 9ee676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee678: mov ecx, 0xcf1560 */
  ecx = 0xcf1560u;
/* 9ee67d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee683u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee683: push 0x9f2420 */
  { uint32_t v = 0x9f2420u; esp -= 4; W32(esp, v); }
/* 9ee688: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee68du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee68d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee691: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee694: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee6d0(void) {
  LOAD_REGS();
L_9ee6d0: /* 9ee6d0: mov dword ptr [0xcf1a8c], 0xcf1560 */
  W32((uint32_t)(0xcf1a8cu), 0xcf1560u);
/* 9ee6da: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee6f0(void) {
  LOAD_REGS();
L_9ee6f0: /* 9ee6f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee6f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee6f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee6f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee6f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee6fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee6fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee700: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee706u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee706: mov esi, eax */
  esi = eax;
/* 9ee708: mov eax, dword ptr [0xcfa620] */
  eax = R32((uint32_t)(0xcfa620u));
/* 9ee70d: push 0x6c2bad */
  { uint32_t v = 0x6c2badu; esp -= 4; W32(esp, v); }
/* 9ee712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee713: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee718: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee71eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee71e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ee720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee721: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ee724: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee729: push 0xaf1c3e */
  { uint32_t v = 0xaf1c3eu; esp -= 4; W32(esp, v); }
/* 9ee72e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee731: mov ecx, esp */
  ecx = esp;
/* 9ee733: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ee735: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ee738: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ee73b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ee73e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ee741: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ee744: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee74au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee74a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee74b: call dword ptr [0xcfa61c] */
  esp -= 4; W32(esp, 0x9ee751u); SPILL(); f_4e3850(); if (g_unwind) return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee752: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 9ee754: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 9ee759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee75b: mov ecx, 0xcf1a90 */
  ecx = 0xcf1a90u;
/* 9ee760: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee766u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee766: push 0x9f2440 */
  { uint32_t v = 0x9f2440u; esp -= 4; W32(esp, v); }
/* 9ee76b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee770u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee770: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee774: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee777: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee7b0(void) {
  LOAD_REGS();
L_9ee7b0: /* 9ee7b0: mov dword ptr [0xcf1fbc], 0xcf1a90 */
  W32((uint32_t)(0xcf1fbcu), 0xcf1a90u);
/* 9ee7ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee7d0(void) {
  LOAD_REGS();
L_9ee7d0: /* 9ee7d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee7d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee7d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee7d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee7d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee7da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee7dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee7e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee7e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee7e6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9ee7ec: mov esi, eax */
  esi = eax;
/* 9ee7ee: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ee7f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee7f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9ee7f5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee7fa: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee800u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee800: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9ee803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee804: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9ee806: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee80b: push 0xaf1d52 */
  { uint32_t v = 0xaf1d52u; esp -= 4; W32(esp, v); }
/* 9ee810: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee813: mov edx, esp */
  edx = esp;
/* 9ee815: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9ee817: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9ee81a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9ee81d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9ee820: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9ee823: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9ee826: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee82cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee82c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee82d: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee833u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee834: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9ee836: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 9ee83b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee83d: mov ecx, 0xcf21f8 */
  ecx = 0xcf21f8u;
/* 9ee842: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee848u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee848: push 0x9f2460 */
  { uint32_t v = 0x9f2460u; esp -= 4; W32(esp, v); }
/* 9ee84d: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee852u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee852: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee856: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee859: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee890(void) {
  LOAD_REGS();
L_9ee890: /* 9ee890: mov dword ptr [0xcf2724], 0xcf21f8 */
  W32((uint32_t)(0xcf2724u), 0xcf21f8u);
/* 9ee89a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee8b0(void) {
  LOAD_REGS();
L_9ee8b0: /* 9ee8b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee8b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ee8b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee8b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee8b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee8ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee8bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ee8c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ee8c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ee8c6: mov esi, eax */
  esi = eax;
/* 9ee8c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ee8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee8ce: push 0x6c28a1 */
  { uint32_t v = 0x6c28a1u; esp -= 4; W32(esp, v); }
/* 9ee8d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ee8d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ee8deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ee8de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ee8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee8e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ee8e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ee8e9: push 0xaf236e */
  { uint32_t v = 0xaf236eu; esp -= 4; W32(esp, v); }
/* 9ee8ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ee8f1: mov ecx, esp */
  ecx = esp;
/* 9ee8f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ee8f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ee8f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ee8fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ee8fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ee901: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ee904: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ee90au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ee90a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ee90b: push 0xcf21f8 */
  { uint32_t v = 0xcf21f8u; esp -= 4; W32(esp, v); }
/* 9ee910: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9ee912: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 9ee917: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ee919: mov ecx, 0xcf2728 */
  ecx = 0xcf2728u;
/* 9ee91e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ee924u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ee924: push 0x9f2480 */
  { uint32_t v = 0x9f2480u; esp -= 4; W32(esp, v); }
/* 9ee929: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ee92eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ee92e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ee932: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ee935: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee970(void) {
  LOAD_REGS();
L_9ee970: /* 9ee970: mov dword ptr [0xcf2c54], 0xcf2728 */
  W32((uint32_t)(0xcf2c54u), 0xcf2728u);
/* 9ee97a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee990(void) {
  LOAD_REGS();
L_9ee990: /* 9ee990: fld qword ptr [0xa21870] */
  { double v = F64((uint32_t)(0xa21870u)); FPUSH(v); }
/* 9ee996: fstp dword ptr [0xcf2fd8] */
  WF32((uint32_t)(0xcf2fd8u), ST0); FPOP();
/* 9ee99c: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9a0(void) {
  LOAD_REGS();
L_9ee9a0: /* 9ee9a0: fld qword ptr [0xa219a0] */
  { double v = F64((uint32_t)(0xa219a0u)); FPUSH(v); }
/* 9ee9a6: fstp dword ptr [0xcf3078] */
  WF32((uint32_t)(0xcf3078u), ST0); FPOP();
/* 9ee9ac: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9b0(void) {
  LOAD_REGS();
L_9ee9b0: /* 9ee9b0: fld qword ptr [0xa21a70] */
  { double v = F64((uint32_t)(0xa21a70u)); FPUSH(v); }
/* 9ee9b6: fstp dword ptr [0xcf3080] */
  WF32((uint32_t)(0xcf3080u), ST0); FPOP();
/* 9ee9bc: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9c0(void) {
  LOAD_REGS();
L_9ee9c0: /* 9ee9c0: fld qword ptr [0xa21ab0] */
  { double v = F64((uint32_t)(0xa21ab0u)); FPUSH(v); }
/* 9ee9c6: fstp dword ptr [0xcf3084] */
  WF32((uint32_t)(0xcf3084u), ST0); FPOP();
/* 9ee9cc: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9d0(void) {
  LOAD_REGS();
L_9ee9d0: /* 9ee9d0: fld qword ptr [0xa21ac0] */
  { double v = F64((uint32_t)(0xa21ac0u)); FPUSH(v); }
/* 9ee9d6: fstp dword ptr [0xcf3088] */
  WF32((uint32_t)(0xcf3088u), ST0); FPOP();
/* 9ee9dc: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9e0(void) {
  LOAD_REGS();
L_9ee9e0: /* 9ee9e0: fld qword ptr [0xa21b48] */
  { double v = F64((uint32_t)(0xa21b48u)); FPUSH(v); }
/* 9ee9e6: fstp dword ptr [0xcf76f8] */
  WF32((uint32_t)(0xcf76f8u), ST0); FPOP();
/* 9ee9ec: ret  */
  esp += 4; SPILL(); return;
}

void f_9ee9f0(void) {
  LOAD_REGS();
L_9ee9f0: /* 9ee9f0: fld qword ptr [0xa21b50] */
  { double v = F64((uint32_t)(0xa21b50u)); FPUSH(v); }
/* 9ee9f6: fstp dword ptr [0xcf76fc] */
  WF32((uint32_t)(0xcf76fcu), ST0); FPOP();
/* 9ee9fc: ret  */
  esp += 4; SPILL(); return;
}

void f_9f0420(void) {
  LOAD_REGS();
L_9f0420: /* 9f0420: mov ecx, 0xb08308 */
  ecx = 0xb08308u;
/* 9f0425: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0440(void) {
  LOAD_REGS();
L_9f0440: /* 9f0440: mov ecx, 0xb08948 */
  ecx = 0xb08948u;
/* 9f0445: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0460(void) {
  LOAD_REGS();
L_9f0460: /* 9f0460: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 9f0465: jmp 0x6c5bcd */
  SPILL(); f_6c5bcd(); return;
}

void f_9f0480(void) {
  LOAD_REGS();
L_9f0480: /* 9f0480: mov ecx, 0xb19088 */
  ecx = 0xb19088u;
/* 9f0485: jmp 0x6cc95a */
  SPILL(); f_6cc95a(); return;
}

void f_9f04a0(void) {
  LOAD_REGS();
L_9f04a0: /* 9f04a0: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 9f04a5: jmp 0x6cbfd7 */
  SPILL(); f_6cbfd7(); return;
}

void f_9f04c0(void) {
  LOAD_REGS();
L_9f04c0: /* 9f04c0: mov ecx, 0xb1c480 */
  ecx = 0xb1c480u;
/* 9f04c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f04e0(void) {
  LOAD_REGS();
L_9f04e0: /* 9f04e0: mov ecx, 0xb1c9b0 */
  ecx = 0xb1c9b0u;
/* 9f04e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0500(void) {
  LOAD_REGS();
L_9f0500: /* 9f0500: mov ecx, 0xb1cee0 */
  ecx = 0xb1cee0u;
/* 9f0505: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0520(void) {
  LOAD_REGS();
L_9f0520: /* 9f0520: mov ecx, 0xb1d410 */
  ecx = 0xb1d410u;
/* 9f0525: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0540(void) {
  LOAD_REGS();
L_9f0540: /* 9f0540: mov ecx, 0xb1d940 */
  ecx = 0xb1d940u;
/* 9f0545: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0560(void) {
  LOAD_REGS();
L_9f0560: /* 9f0560: mov ecx, 0xb1e3a8 */
  ecx = 0xb1e3a8u;
/* 9f0565: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0580(void) {
  LOAD_REGS();
L_9f0580: /* 9f0580: mov ecx, 0xb1e8d8 */
  ecx = 0xb1e8d8u;
/* 9f0585: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f05a0(void) {
  LOAD_REGS();
L_9f05a0: /* 9f05a0: mov ecx, 0xb1ee08 */
  ecx = 0xb1ee08u;
/* 9f05a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f05c0(void) {
  LOAD_REGS();
L_9f05c0: /* 9f05c0: mov ecx, 0xb1f338 */
  ecx = 0xb1f338u;
/* 9f05c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f05e0(void) {
  LOAD_REGS();
L_9f05e0: /* 9f05e0: mov ecx, 0xb1f868 */
  ecx = 0xb1f868u;
/* 9f05e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0600(void) {
  LOAD_REGS();
L_9f0600: /* 9f0600: mov ecx, 0xb1fd98 */
  ecx = 0xb1fd98u;
/* 9f0605: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0620(void) {
  LOAD_REGS();
L_9f0620: /* 9f0620: mov ecx, 0xb202c8 */
  ecx = 0xb202c8u;
/* 9f0625: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0640(void) {
  LOAD_REGS();
L_9f0640: /* 9f0640: mov ecx, 0xb207f8 */
  ecx = 0xb207f8u;
/* 9f0645: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0660(void) {
  LOAD_REGS();
L_9f0660: /* 9f0660: mov ecx, 0xb20d28 */
  ecx = 0xb20d28u;
/* 9f0665: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0680(void) {
  LOAD_REGS();
L_9f0680: /* 9f0680: mov ecx, 0xb21bb8 */
  ecx = 0xb21bb8u;
/* 9f0685: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f06a0(void) {
  LOAD_REGS();
L_9f06a0: /* 9f06a0: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 9f06a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f06c0(void) {
  LOAD_REGS();
L_9f06c0: /* 9f06c0: mov ecx, 0xb5c498 */
  ecx = 0xb5c498u;
/* 9f06c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f06e0(void) {
  LOAD_REGS();
L_9f06e0: /* 9f06e0: mov ecx, 0xb5c9c8 */
  ecx = 0xb5c9c8u;
/* 9f06e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0700(void) {
  LOAD_REGS();
L_9f0700: /* 9f0700: mov ecx, 0xb5cef8 */
  ecx = 0xb5cef8u;
/* 9f0705: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0720(void) {
  LOAD_REGS();
L_9f0720: /* 9f0720: mov ecx, 0xb5d428 */
  ecx = 0xb5d428u;
/* 9f0725: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0740(void) {
  LOAD_REGS();
L_9f0740: /* 9f0740: mov ecx, 0xb5d958 */
  ecx = 0xb5d958u;
/* 9f0745: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0760(void) {
  LOAD_REGS();
L_9f0760: /* 9f0760: mov ecx, 0xb5de88 */
  ecx = 0xb5de88u;
/* 9f0765: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0780(void) {
  LOAD_REGS();
L_9f0780: /* 9f0780: mov ecx, 0xb5e3b8 */
  ecx = 0xb5e3b8u;
/* 9f0785: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f07a0(void) {
  LOAD_REGS();
L_9f07a0: /* 9f07a0: mov ecx, 0xb5e8e8 */
  ecx = 0xb5e8e8u;
/* 9f07a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f07c0(void) {
  LOAD_REGS();
L_9f07c0: /* 9f07c0: mov ecx, 0xb5ee18 */
  ecx = 0xb5ee18u;
/* 9f07c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f07e0(void) {
  LOAD_REGS();
L_9f07e0: /* 9f07e0: mov ecx, 0xb5f348 */
  ecx = 0xb5f348u;
/* 9f07e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0800(void) {
  LOAD_REGS();
L_9f0800: /* 9f0800: mov ecx, 0xb5f878 */
  ecx = 0xb5f878u;
/* 9f0805: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0820(void) {
  LOAD_REGS();
L_9f0820: /* 9f0820: mov ecx, 0xb5fda8 */
  ecx = 0xb5fda8u;
/* 9f0825: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0840(void) {
  LOAD_REGS();
L_9f0840: /* 9f0840: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 9f0845: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0860(void) {
  LOAD_REGS();
L_9f0860: /* 9f0860: mov ecx, 0xb60808 */
  ecx = 0xb60808u;
/* 9f0865: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0880(void) {
  LOAD_REGS();
L_9f0880: /* 9f0880: mov ecx, 0xb60d38 */
  ecx = 0xb60d38u;
/* 9f0885: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f08a0(void) {
  LOAD_REGS();
L_9f08a0: /* 9f08a0: mov ecx, 0xb61268 */
  ecx = 0xb61268u;
/* 9f08a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f08c0(void) {
  LOAD_REGS();
L_9f08c0: /* 9f08c0: mov ecx, 0xb61798 */
  ecx = 0xb61798u;
/* 9f08c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f08e0(void) {
  LOAD_REGS();
L_9f08e0: /* 9f08e0: mov ecx, 0xb61cc8 */
  ecx = 0xb61cc8u;
/* 9f08e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0900(void) {
  LOAD_REGS();
L_9f0900: /* 9f0900: mov ecx, 0xb621f8 */
  ecx = 0xb621f8u;
/* 9f0905: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0920(void) {
  LOAD_REGS();
L_9f0920: /* 9f0920: mov ecx, 0xb62728 */
  ecx = 0xb62728u;
/* 9f0925: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0940(void) {
  LOAD_REGS();
L_9f0940: /* 9f0940: mov ecx, 0xb62c58 */
  ecx = 0xb62c58u;
/* 9f0945: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0960(void) {
  LOAD_REGS();
L_9f0960: /* 9f0960: mov ecx, 0xb63188 */
  ecx = 0xb63188u;
/* 9f0965: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0980(void) {
  LOAD_REGS();
L_9f0980: /* 9f0980: mov ecx, 0xb636b8 */
  ecx = 0xb636b8u;
/* 9f0985: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f09a0(void) {
  LOAD_REGS();
L_9f09a0: /* 9f09a0: mov ecx, 0xb63be8 */
  ecx = 0xb63be8u;
/* 9f09a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f09c0(void) {
  LOAD_REGS();
L_9f09c0: /* 9f09c0: mov ecx, 0xb64118 */
  ecx = 0xb64118u;
/* 9f09c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f09e0(void) {
  LOAD_REGS();
L_9f09e0: /* 9f09e0: mov ecx, 0xb64648 */
  ecx = 0xb64648u;
/* 9f09e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0a00(void) {
  LOAD_REGS();
L_9f0a00: /* 9f0a00: mov ecx, 0xb64b78 */
  ecx = 0xb64b78u;
/* 9f0a05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0a20(void) {
  LOAD_REGS();
L_9f0a20: /* 9f0a20: mov ecx, 0xb650a8 */
  ecx = 0xb650a8u;
/* 9f0a25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0a40(void) {
  LOAD_REGS();
L_9f0a40: /* 9f0a40: mov ecx, 0xb655d8 */
  ecx = 0xb655d8u;
/* 9f0a45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0a60(void) {
  LOAD_REGS();
L_9f0a60: /* 9f0a60: mov ecx, 0xb65b08 */
  ecx = 0xb65b08u;
/* 9f0a65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0a80(void) {
  LOAD_REGS();
L_9f0a80: /* 9f0a80: mov ecx, 0xb66038 */
  ecx = 0xb66038u;
/* 9f0a85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0aa0(void) {
  LOAD_REGS();
L_9f0aa0: /* 9f0aa0: mov ecx, 0xb66568 */
  ecx = 0xb66568u;
/* 9f0aa5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ac0(void) {
  LOAD_REGS();
L_9f0ac0: /* 9f0ac0: mov ecx, 0xb66a98 */
  ecx = 0xb66a98u;
/* 9f0ac5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ae0(void) {
  LOAD_REGS();
L_9f0ae0: /* 9f0ae0: mov ecx, 0xb66fc8 */
  ecx = 0xb66fc8u;
/* 9f0ae5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0b00(void) {
  LOAD_REGS();
L_9f0b00: /* 9f0b00: mov ecx, 0xb674f8 */
  ecx = 0xb674f8u;
/* 9f0b05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0b20(void) {
  LOAD_REGS();
L_9f0b20: /* 9f0b20: mov ecx, 0xb67a28 */
  ecx = 0xb67a28u;
/* 9f0b25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0b40(void) {
  LOAD_REGS();
L_9f0b40: /* 9f0b40: mov ecx, 0xb67f58 */
  ecx = 0xb67f58u;
/* 9f0b45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0b60(void) {
  LOAD_REGS();
L_9f0b60: /* 9f0b60: mov ecx, 0xb68488 */
  ecx = 0xb68488u;
/* 9f0b65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0b80(void) {
  LOAD_REGS();
L_9f0b80: /* 9f0b80: mov ecx, 0xb689b8 */
  ecx = 0xb689b8u;
/* 9f0b85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ba0(void) {
  LOAD_REGS();
L_9f0ba0: /* 9f0ba0: mov ecx, 0xb68ee8 */
  ecx = 0xb68ee8u;
/* 9f0ba5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0bc0(void) {
  LOAD_REGS();
L_9f0bc0: /* 9f0bc0: mov ecx, 0xb69418 */
  ecx = 0xb69418u;
/* 9f0bc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0be0(void) {
  LOAD_REGS();
L_9f0be0: /* 9f0be0: mov ecx, 0xb69948 */
  ecx = 0xb69948u;
/* 9f0be5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0c00(void) {
  LOAD_REGS();
L_9f0c00: /* 9f0c00: mov ecx, 0xb69e78 */
  ecx = 0xb69e78u;
/* 9f0c05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0c20(void) {
  LOAD_REGS();
L_9f0c20: /* 9f0c20: mov ecx, 0xb6a3a8 */
  ecx = 0xb6a3a8u;
/* 9f0c25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0c40(void) {
  LOAD_REGS();
L_9f0c40: /* 9f0c40: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 9f0c45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0c60(void) {
  LOAD_REGS();
L_9f0c60: /* 9f0c60: mov ecx, 0xb6ae08 */
  ecx = 0xb6ae08u;
/* 9f0c65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0c80(void) {
  LOAD_REGS();
L_9f0c80: /* 9f0c80: mov ecx, 0xb6b338 */
  ecx = 0xb6b338u;
/* 9f0c85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ca0(void) {
  LOAD_REGS();
L_9f0ca0: /* 9f0ca0: mov ecx, 0xb6b868 */
  ecx = 0xb6b868u;
/* 9f0ca5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0cc0(void) {
  LOAD_REGS();
L_9f0cc0: /* 9f0cc0: mov ecx, 0xb6bd98 */
  ecx = 0xb6bd98u;
/* 9f0cc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ce0(void) {
  LOAD_REGS();
L_9f0ce0: /* 9f0ce0: mov ecx, 0xb6c2c8 */
  ecx = 0xb6c2c8u;
/* 9f0ce5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0d00(void) {
  LOAD_REGS();
L_9f0d00: /* 9f0d00: mov ecx, 0xb6c7f8 */
  ecx = 0xb6c7f8u;
/* 9f0d05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0d20(void) {
  LOAD_REGS();
L_9f0d20: /* 9f0d20: mov ecx, 0xb6cd28 */
  ecx = 0xb6cd28u;
/* 9f0d25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0d40(void) {
  LOAD_REGS();
L_9f0d40: /* 9f0d40: mov ecx, 0xb6d258 */
  ecx = 0xb6d258u;
/* 9f0d45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0d60(void) {
  LOAD_REGS();
L_9f0d60: /* 9f0d60: mov ecx, 0xb6d788 */
  ecx = 0xb6d788u;
/* 9f0d65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0d80(void) {
  LOAD_REGS();
L_9f0d80: /* 9f0d80: mov ecx, 0xb6dcb8 */
  ecx = 0xb6dcb8u;
/* 9f0d85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0da0(void) {
  LOAD_REGS();
L_9f0da0: /* 9f0da0: mov ecx, 0xb6e1e8 */
  ecx = 0xb6e1e8u;
/* 9f0da5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0dc0(void) {
  LOAD_REGS();
L_9f0dc0: /* 9f0dc0: mov ecx, 0xb6e718 */
  ecx = 0xb6e718u;
/* 9f0dc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0de0(void) {
  LOAD_REGS();
L_9f0de0: /* 9f0de0: mov ecx, 0xb6ec48 */
  ecx = 0xb6ec48u;
/* 9f0de5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0e00(void) {
  LOAD_REGS();
L_9f0e00: /* 9f0e00: mov ecx, 0xb6f178 */
  ecx = 0xb6f178u;
/* 9f0e05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0e20(void) {
  LOAD_REGS();
L_9f0e20: /* 9f0e20: mov ecx, 0xb6f6a8 */
  ecx = 0xb6f6a8u;
/* 9f0e25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0e40(void) {
  LOAD_REGS();
L_9f0e40: /* 9f0e40: mov ecx, 0xb6fbd8 */
  ecx = 0xb6fbd8u;
/* 9f0e45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0e60(void) {
  LOAD_REGS();
L_9f0e60: /* 9f0e60: mov ecx, 0xb70108 */
  ecx = 0xb70108u;
/* 9f0e65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0e80(void) {
  LOAD_REGS();
L_9f0e80: /* 9f0e80: mov ecx, 0xb70638 */
  ecx = 0xb70638u;
/* 9f0e85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ea0(void) {
  LOAD_REGS();
L_9f0ea0: /* 9f0ea0: mov ecx, 0xb70b68 */
  ecx = 0xb70b68u;
/* 9f0ea5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ec0(void) {
  LOAD_REGS();
L_9f0ec0: /* 9f0ec0: mov ecx, 0xb71098 */
  ecx = 0xb71098u;
/* 9f0ec5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0ee0(void) {
  LOAD_REGS();
L_9f0ee0: /* 9f0ee0: mov ecx, 0xb715c8 */
  ecx = 0xb715c8u;
/* 9f0ee5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0f00(void) {
  LOAD_REGS();
L_9f0f00: /* 9f0f00: mov ecx, 0xb71af8 */
  ecx = 0xb71af8u;
/* 9f0f05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0f20(void) {
  LOAD_REGS();
L_9f0f20: /* 9f0f20: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 9f0f25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0f40(void) {
  LOAD_REGS();
L_9f0f40: /* 9f0f40: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 9f0f45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0f60(void) {
  LOAD_REGS();
L_9f0f60: /* 9f0f60: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 9f0f65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0f80(void) {
  LOAD_REGS();
L_9f0f80: /* 9f0f80: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 9f0f85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f0fa0(void) {
  LOAD_REGS();
L_9f0fa0: /* 9f0fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9f0fa1: mov ebp, esp */
  ebp = esp;
/* 9f0fa3: mov ecx, 0xb78050 */
  ecx = 0xb78050u;
/* 9f0fa8: call dword ptr [0xcfa450] */
  esp -= 4; W32(esp, 0x9f0faeu); SPILL(); f_4e2a1d(); if (g_unwind) return; /* Core!??1UClass@@UAE@XZ */ RELOAD();
/* 9f0fae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9f0faf: ret  */
  esp += 4; SPILL(); return;
}

void f_9f0fc0(void) {
  LOAD_REGS();
L_9f0fc0: /* 9f0fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9f0fc1: mov ebp, esp */
  ebp = esp;
/* 9f0fc3: mov ecx, 0xb78580 */
  ecx = 0xb78580u;
/* 9f0fc8: call dword ptr [0xcfa450] */
  esp -= 4; W32(esp, 0x9f0fceu); SPILL(); f_4e2a1d(); if (g_unwind) return; /* Core!??1UClass@@UAE@XZ */ RELOAD();
/* 9f0fce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9f0fcf: ret  */
  esp += 4; SPILL(); return;
}

void f_9f0fe0(void) {
  LOAD_REGS();
L_9f0fe0: /* 9f0fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9f0fe1: mov ebp, esp */
  ebp = esp;
/* 9f0fe3: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 9f0fe8: call dword ptr [0xcfa450] */
  esp -= 4; W32(esp, 0x9f0feeu); SPILL(); f_4e2a1d(); if (g_unwind) return; /* Core!??1UClass@@UAE@XZ */ RELOAD();
/* 9f0fee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9f0fef: ret  */
  esp += 4; SPILL(); return;
}

void f_9f1000(void) {
  LOAD_REGS();
L_9f1000: /* 9f1000: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 9f1005: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1020(void) {
  LOAD_REGS();
L_9f1020: /* 9f1020: mov ecx, 0xb79940 */
  ecx = 0xb79940u;
/* 9f1025: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1040(void) {
  LOAD_REGS();
L_9f1040: /* 9f1040: mov ecx, 0xb79f88 */
  ecx = 0xb79f88u;
/* 9f1045: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1060(void) {
  LOAD_REGS();
L_9f1060: /* 9f1060: mov ecx, 0xb7a5d0 */
  ecx = 0xb7a5d0u;
/* 9f1065: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1080(void) {
  LOAD_REGS();
L_9f1080: /* 9f1080: mov ecx, 0xb7ab00 */
  ecx = 0xb7ab00u;
/* 9f1085: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f10a0(void) {
  LOAD_REGS();
L_9f10a0: /* 9f10a0: mov ecx, 0xb7b030 */
  ecx = 0xb7b030u;
/* 9f10a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f10c0(void) {
  LOAD_REGS();
L_9f10c0: /* 9f10c0: mov ecx, 0xb7b560 */
  ecx = 0xb7b560u;
/* 9f10c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f10e0(void) {
  LOAD_REGS();
L_9f10e0: /* 9f10e0: mov ecx, 0xb7bee0 */
  ecx = 0xb7bee0u;
/* 9f10e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1100(void) {
  LOAD_REGS();
L_9f1100: /* 9f1100: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 9f1105: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1120(void) {
  LOAD_REGS();
L_9f1120: /* 9f1120: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 9f1125: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1140(void) {
  LOAD_REGS();
L_9f1140: /* 9f1140: mov ecx, 0xb7d1d0 */
  ecx = 0xb7d1d0u;
/* 9f1145: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1160(void) {
  LOAD_REGS();
L_9f1160: /* 9f1160: mov ecx, 0xb7d828 */
  ecx = 0xb7d828u;
/* 9f1165: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1180(void) {
  LOAD_REGS();
L_9f1180: /* 9f1180: mov ecx, 0xb7dd58 */
  ecx = 0xb7dd58u;
/* 9f1185: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f11a0(void) {
  LOAD_REGS();
L_9f11a0: /* 9f11a0: mov ecx, 0xb7e648 */
  ecx = 0xb7e648u;
/* 9f11a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f11c0(void) {
  LOAD_REGS();
L_9f11c0: /* 9f11c0: mov ecx, 0xb7eb78 */
  ecx = 0xb7eb78u;
/* 9f11c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f11e0(void) {
  LOAD_REGS();
L_9f11e0: /* 9f11e0: mov ecx, 0xb7f0a8 */
  ecx = 0xb7f0a8u;
/* 9f11e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1200(void) {
  LOAD_REGS();
L_9f1200: /* 9f1200: mov ecx, 0xb7fbd0 */
  ecx = 0xb7fbd0u;
/* 9f1205: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1220(void) {
  LOAD_REGS();
L_9f1220: /* 9f1220: mov ecx, 0xb80210 */
  ecx = 0xb80210u;
/* 9f1225: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1240(void) {
  LOAD_REGS();
L_9f1240: /* 9f1240: mov ecx, 0xb80740 */
  ecx = 0xb80740u;
/* 9f1245: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1260(void) {
  LOAD_REGS();
L_9f1260: /* 9f1260: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 9f1265: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1280(void) {
  LOAD_REGS();
L_9f1280: /* 9f1280: mov ecx, 0xb814c0 */
  ecx = 0xb814c0u;
/* 9f1285: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f12a0(void) {
  LOAD_REGS();
L_9f12a0: /* 9f12a0: mov ecx, 0xb81b88 */
  ecx = 0xb81b88u;
/* 9f12a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f12c0(void) {
  LOAD_REGS();
L_9f12c0: /* 9f12c0: mov ecx, 0xb82238 */
  ecx = 0xb82238u;
/* 9f12c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f12e0(void) {
  LOAD_REGS();
L_9f12e0: /* 9f12e0: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 9f12e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1300(void) {
  LOAD_REGS();
L_9f1300: /* 9f1300: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 9f1305: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1320(void) {
  LOAD_REGS();
L_9f1320: /* 9f1320: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 9f1325: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1340(void) {
  LOAD_REGS();
L_9f1340: /* 9f1340: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 9f1345: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1360(void) {
  LOAD_REGS();
L_9f1360: /* 9f1360: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 9f1365: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1380(void) {
  LOAD_REGS();
L_9f1380: /* 9f1380: mov ecx, 0xb847e8 */
  ecx = 0xb847e8u;
/* 9f1385: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f13a0(void) {
  LOAD_REGS();
L_9f13a0: /* 9f13a0: mov ecx, 0xb84d18 */
  ecx = 0xb84d18u;
/* 9f13a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f13c0(void) {
  LOAD_REGS();
L_9f13c0: /* 9f13c0: mov ecx, 0xb85470 */
  ecx = 0xb85470u;
/* 9f13c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f13e0(void) {
  LOAD_REGS();
L_9f13e0: /* 9f13e0: mov ecx, 0xb859a0 */
  ecx = 0xb859a0u;
/* 9f13e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1400(void) {
  LOAD_REGS();
L_9f1400: /* 9f1400: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 9f1405: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1420(void) {
  LOAD_REGS();
L_9f1420: /* 9f1420: mov ecx, 0xb86630 */
  ecx = 0xb86630u;
/* 9f1425: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1440(void) {
  LOAD_REGS();
L_9f1440: /* 9f1440: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 9f1445: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1460(void) {
  LOAD_REGS();
L_9f1460: /* 9f1460: mov ecx, 0xb87090 */
  ecx = 0xb87090u;
/* 9f1465: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1480(void) {
  LOAD_REGS();
L_9f1480: /* 9f1480: mov ecx, 0xb875c0 */
  ecx = 0xb875c0u;
/* 9f1485: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f14a0(void) {
  LOAD_REGS();
L_9f14a0: /* 9f14a0: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 9f14a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f14c0(void) {
  LOAD_REGS();
L_9f14c0: /* 9f14c0: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 9f14c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f14e0(void) {
  LOAD_REGS();
L_9f14e0: /* 9f14e0: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 9f14e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1500(void) {
  LOAD_REGS();
L_9f1500: /* 9f1500: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 9f1505: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1520(void) {
  LOAD_REGS();
L_9f1520: /* 9f1520: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 9f1525: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1540(void) {
  LOAD_REGS();
L_9f1540: /* 9f1540: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 9f1545: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1560(void) {
  LOAD_REGS();
L_9f1560: /* 9f1560: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 9f1565: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1580(void) {
  LOAD_REGS();
L_9f1580: /* 9f1580: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 9f1585: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f15a0(void) {
  LOAD_REGS();
L_9f15a0: /* 9f15a0: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 9f15a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f15c0(void) {
  LOAD_REGS();
L_9f15c0: /* 9f15c0: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 9f15c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f15e0(void) {
  LOAD_REGS();
L_9f15e0: /* 9f15e0: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 9f15e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1600(void) {
  LOAD_REGS();
L_9f1600: /* 9f1600: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 9f1605: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1620(void) {
  LOAD_REGS();
L_9f1620: /* 9f1620: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 9f1625: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1640(void) {
  LOAD_REGS();
L_9f1640: /* 9f1640: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 9f1645: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1660(void) {
  LOAD_REGS();
L_9f1660: /* 9f1660: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 9f1665: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1680(void) {
  LOAD_REGS();
L_9f1680: /* 9f1680: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 9f1685: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f16a0(void) {
  LOAD_REGS();
L_9f16a0: /* 9f16a0: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 9f16a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f16c0(void) {
  LOAD_REGS();
L_9f16c0: /* 9f16c0: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 9f16c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f16e0(void) {
  LOAD_REGS();
L_9f16e0: /* 9f16e0: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 9f16e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1700(void) {
  LOAD_REGS();
L_9f1700: /* 9f1700: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 9f1705: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1720(void) {
  LOAD_REGS();
L_9f1720: /* 9f1720: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 9f1725: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1740(void) {
  LOAD_REGS();
L_9f1740: /* 9f1740: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 9f1745: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1760(void) {
  LOAD_REGS();
L_9f1760: /* 9f1760: mov ecx, 0xb90920 */
  ecx = 0xb90920u;
/* 9f1765: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1780(void) {
  LOAD_REGS();
L_9f1780: /* 9f1780: mov ecx, 0xb90e50 */
  ecx = 0xb90e50u;
/* 9f1785: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f17a0(void) {
  LOAD_REGS();
L_9f17a0: /* 9f17a0: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 9f17a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f17c0(void) {
  LOAD_REGS();
L_9f17c0: /* 9f17c0: mov ecx, 0xb91be8 */
  ecx = 0xb91be8u;
/* 9f17c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f17e0(void) {
  LOAD_REGS();
L_9f17e0: /* 9f17e0: mov ecx, 0xb92118 */
  ecx = 0xb92118u;
/* 9f17e5: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_9f1800(void) {
  LOAD_REGS();
L_9f1800: /* 9f1800: mov ecx, 0xb92234 */
  ecx = 0xb92234u;
/* 9f1805: jmp 0x6c55a1 */
  SPILL(); f_6c55a1(); return;
}

void f_9f1820(void) {
  LOAD_REGS();
L_9f1820: /* 9f1820: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 9f1825: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1840(void) {
  LOAD_REGS();
L_9f1840: /* 9f1840: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 9f1845: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1860(void) {
  LOAD_REGS();
L_9f1860: /* 9f1860: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 9f1865: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1880(void) {
  LOAD_REGS();
L_9f1880: /* 9f1880: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 9f1885: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f18a0(void) {
  LOAD_REGS();
L_9f18a0: /* 9f18a0: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 9f18a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f18c0(void) {
  LOAD_REGS();
L_9f18c0: /* 9f18c0: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 9f18c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f18e0(void) {
  LOAD_REGS();
L_9f18e0: /* 9f18e0: mov ecx, 0xcc7b00 */
  ecx = 0xcc7b00u;
/* 9f18e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1900(void) {
  LOAD_REGS();
L_9f1900: /* 9f1900: mov ecx, 0xcc8140 */
  ecx = 0xcc8140u;
/* 9f1905: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1920(void) {
  LOAD_REGS();
L_9f1920: /* 9f1920: mov ecx, 0xcc8788 */
  ecx = 0xcc8788u;
/* 9f1925: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1940(void) {
  LOAD_REGS();
L_9f1940: /* 9f1940: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 9f1945: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1960(void) {
  LOAD_REGS();
L_9f1960: /* 9f1960: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 9f1965: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1980(void) {
  LOAD_REGS();
L_9f1980: /* 9f1980: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 9f1985: jmp dword ptr [0xcfa874] */
  SPILL(); f_4e237e(); return; /* Core!?Exit@FMemStack@@QAEXXZ */
}

void f_9f19a0(void) {
  LOAD_REGS();
L_9f19a0: /* 9f19a0: mov eax, dword ptr [0xcd522c] */
  eax = R32((uint32_t)(0xcd522cu));
/* 9f19a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9f19a7: je 0x9f19ce */
  if (zf) goto L_9f19ce;
L_9f19a9: /* 9f19a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9f19aa: mov esi, eax */
  esi = eax;
/* 9f19ac: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9f19af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9f19b1: mov dword ptr [eax], 0xa17a14 */
  W32((uint32_t)(eax), 0xa17a14u);
/* 9f19b7: je 0x9f19c0 */
  if (zf) goto L_9f19c0;
L_9f19b9: /* 9f19b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9f19bb: call 0x6c3251 */
  esp -= 4; W32(esp, 0x9f19c0u); SPILL(); f_6c3251(); if (g_unwind) return; RELOAD();
L_9f19c0: /* 9f19c0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 9f19c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9f19c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9f19c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9f19ca: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x9f19cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9f19cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_9f19ce: /* 9f19ce: ret  */
  esp += 4; SPILL(); return;
}

void f_9f19e0(void) {
  LOAD_REGS();
L_9f19e0: /* 9f19e0: mov ecx, 0xcd5230 */
  ecx = 0xcd5230u;
/* 9f19e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1a00(void) {
  LOAD_REGS();
L_9f1a00: /* 9f1a00: mov ecx, 0xcd5760 */
  ecx = 0xcd5760u;
/* 9f1a05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1a20(void) {
  LOAD_REGS();
L_9f1a20: /* 9f1a20: mov ecx, 0xcd5c90 */
  ecx = 0xcd5c90u;
/* 9f1a25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1a40(void) {
  LOAD_REGS();
L_9f1a40: /* 9f1a40: mov ecx, 0xcd61c0 */
  ecx = 0xcd61c0u;
/* 9f1a45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1a60(void) {
  LOAD_REGS();
L_9f1a60: /* 9f1a60: mov ecx, 0xcd66f0 */
  ecx = 0xcd66f0u;
/* 9f1a65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1a80(void) {
  LOAD_REGS();
L_9f1a80: /* 9f1a80: mov ecx, 0xcd6c20 */
  ecx = 0xcd6c20u;
/* 9f1a85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1aa0(void) {
  LOAD_REGS();
L_9f1aa0: /* 9f1aa0: mov ecx, 0xcd7150 */
  ecx = 0xcd7150u;
/* 9f1aa5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ac0(void) {
  LOAD_REGS();
L_9f1ac0: /* 9f1ac0: mov ecx, 0xcd7680 */
  ecx = 0xcd7680u;
/* 9f1ac5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ae0(void) {
  LOAD_REGS();
L_9f1ae0: /* 9f1ae0: mov ecx, 0xcd7bb0 */
  ecx = 0xcd7bb0u;
/* 9f1ae5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1b00(void) {
  LOAD_REGS();
L_9f1b00: /* 9f1b00: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 9f1b05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1b20(void) {
  LOAD_REGS();
L_9f1b20: /* 9f1b20: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 9f1b25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1b40(void) {
  LOAD_REGS();
L_9f1b40: /* 9f1b40: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 9f1b45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1b60(void) {
  LOAD_REGS();
L_9f1b60: /* 9f1b60: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 9f1b65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1b80(void) {
  LOAD_REGS();
L_9f1b80: /* 9f1b80: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 9f1b85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ba0(void) {
  LOAD_REGS();
L_9f1ba0: /* 9f1ba0: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 9f1ba5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1bc0(void) {
  LOAD_REGS();
L_9f1bc0: /* 9f1bc0: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 9f1bc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1be0(void) {
  LOAD_REGS();
L_9f1be0: /* 9f1be0: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 9f1be5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1c00(void) {
  LOAD_REGS();
L_9f1c00: /* 9f1c00: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 9f1c05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1c20(void) {
  LOAD_REGS();
L_9f1c20: /* 9f1c20: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 9f1c25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1c40(void) {
  LOAD_REGS();
L_9f1c40: /* 9f1c40: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 9f1c45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1c60(void) {
  LOAD_REGS();
L_9f1c60: /* 9f1c60: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 9f1c65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1c80(void) {
  LOAD_REGS();
L_9f1c80: /* 9f1c80: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 9f1c85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ca0(void) {
  LOAD_REGS();
L_9f1ca0: /* 9f1ca0: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 9f1ca5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1cc0(void) {
  LOAD_REGS();
L_9f1cc0: /* 9f1cc0: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 9f1cc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ce0(void) {
  LOAD_REGS();
L_9f1ce0: /* 9f1ce0: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 9f1ce5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1d00(void) {
  LOAD_REGS();
L_9f1d00: /* 9f1d00: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 9f1d05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1d20(void) {
  LOAD_REGS();
L_9f1d20: /* 9f1d20: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 9f1d25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1d40(void) {
  LOAD_REGS();
L_9f1d40: /* 9f1d40: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 9f1d45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1d60(void) {
  LOAD_REGS();
L_9f1d60: /* 9f1d60: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 9f1d65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1d80(void) {
  LOAD_REGS();
L_9f1d80: /* 9f1d80: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 9f1d85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1da0(void) {
  LOAD_REGS();
L_9f1da0: /* 9f1da0: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 9f1da5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1dc0(void) {
  LOAD_REGS();
L_9f1dc0: /* 9f1dc0: mov ecx, 0xce1d38 */
  ecx = 0xce1d38u;
/* 9f1dc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1de0(void) {
  LOAD_REGS();
L_9f1de0: /* 9f1de0: mov ecx, 0xce2268 */
  ecx = 0xce2268u;
/* 9f1de5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1e00(void) {
  LOAD_REGS();
L_9f1e00: /* 9f1e00: mov ecx, 0xce2798 */
  ecx = 0xce2798u;
/* 9f1e05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1e20(void) {
  LOAD_REGS();
L_9f1e20: /* 9f1e20: mov ecx, 0xce2cc8 */
  ecx = 0xce2cc8u;
/* 9f1e25: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1e40(void) {
  LOAD_REGS();
L_9f1e40: /* 9f1e40: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 9f1e45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1e60(void) {
  LOAD_REGS();
L_9f1e60: /* 9f1e60: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 9f1e65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1e80(void) {
  LOAD_REGS();
L_9f1e80: /* 9f1e80: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 9f1e85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ea0(void) {
  LOAD_REGS();
L_9f1ea0: /* 9f1ea0: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 9f1ea5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ec0(void) {
  LOAD_REGS();
L_9f1ec0: /* 9f1ec0: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 9f1ec5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1ee0(void) {
  LOAD_REGS();
L_9f1ee0: /* 9f1ee0: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 9f1ee5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1f00(void) {
  LOAD_REGS();
L_9f1f00: /* 9f1f00: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 9f1f05: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1f20(void) {
  LOAD_REGS();
L_9f1f20: /* 9f1f20: mov ecx, 0xce61b8 */
  ecx = 0xce61b8u;
/* 9f1f25: jmp 0x6c4fd4 */
  SPILL(); f_6c4fd4(); return;
}

void f_9f1f40(void) {
  LOAD_REGS();
L_9f1f40: /* 9f1f40: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 9f1f45: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1f60(void) {
  LOAD_REGS();
L_9f1f60: /* 9f1f60: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 9f1f65: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1f80(void) {
  LOAD_REGS();
L_9f1f80: /* 9f1f80: mov ecx, 0xce6f38 */
  ecx = 0xce6f38u;
/* 9f1f85: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1fa0(void) {
  LOAD_REGS();
L_9f1fa0: /* 9f1fa0: mov ecx, 0xce7468 */
  ecx = 0xce7468u;
/* 9f1fa5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1fc0(void) {
  LOAD_REGS();
L_9f1fc0: /* 9f1fc0: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 9f1fc5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f1fe0(void) {
  LOAD_REGS();
L_9f1fe0: /* 9f1fe0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 9f1fe5: jmp 0x6c67ad */
  SPILL(); f_6c67ad(); return;
}

void f_9f2000(void) {
  LOAD_REGS();
L_9f2000: /* 9f2000: mov ecx, 0xce85b0 */
  ecx = 0xce85b0u;
/* 9f2005: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2020(void) {
  LOAD_REGS();
L_9f2020: /* 9f2020: mov ecx, 0xce8ae0 */
  ecx = 0xce8ae0u;
/* 9f2025: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2040(void) {
  LOAD_REGS();
L_9f2040: /* 9f2040: mov ecx, 0xce9010 */
  ecx = 0xce9010u;
/* 9f2045: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2060(void) {
  LOAD_REGS();
L_9f2060: /* 9f2060: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 9f2065: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2080(void) {
  LOAD_REGS();
L_9f2080: /* 9f2080: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 9f2085: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_9f20a0(void) {
  LOAD_REGS();
L_9f20a0: /* 9f20a0: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 9f20a5: jmp 0x6c2ed2 */
  SPILL(); f_6c2ed2(); return;
}

void f_9f20c0(void) {
  LOAD_REGS();
L_9f20c0: /* 9f20c0: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 9f20c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f20e0(void) {
  LOAD_REGS();
L_9f20e0: /* 9f20e0: mov ecx, 0xcea3f8 */
  ecx = 0xcea3f8u;
/* 9f20e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2100(void) {
  LOAD_REGS();
L_9f2100: /* 9f2100: mov ecx, 0xcea928 */
  ecx = 0xcea928u;
/* 9f2105: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2120(void) {
  LOAD_REGS();
L_9f2120: /* 9f2120: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 9f2125: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2140(void) {
  LOAD_REGS();
L_9f2140: /* 9f2140: mov ecx, 0xcebd08 */
  ecx = 0xcebd08u;
/* 9f2145: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2160(void) {
  LOAD_REGS();
L_9f2160: /* 9f2160: mov ecx, 0xcebd14 */
  ecx = 0xcebd14u;
/* 9f2165: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2180(void) {
  LOAD_REGS();
L_9f2180: /* 9f2180: mov ecx, 0xcebd20 */
  ecx = 0xcebd20u;
/* 9f2185: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f21a0(void) {
  LOAD_REGS();
L_9f21a0: /* 9f21a0: mov ecx, 0xcebd2c */
  ecx = 0xcebd2cu;
/* 9f21a5: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f21c0(void) {
  LOAD_REGS();
L_9f21c0: /* 9f21c0: mov ecx, 0xcebd38 */
  ecx = 0xcebd38u;
/* 9f21c5: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f21e0(void) {
  LOAD_REGS();
L_9f21e0: /* 9f21e0: mov ecx, 0xcebd44 */
  ecx = 0xcebd44u;
/* 9f21e5: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2200(void) {
  LOAD_REGS();
L_9f2200: /* 9f2200: mov ecx, 0xcebd50 */
  ecx = 0xcebd50u;
/* 9f2205: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2220(void) {
  LOAD_REGS();
L_9f2220: /* 9f2220: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 9f2225: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2240(void) {
  LOAD_REGS();
L_9f2240: /* 9f2240: mov ecx, 0xcebd68 */
  ecx = 0xcebd68u;
/* 9f2245: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_9f2260(void) {
  LOAD_REGS();
L_9f2260: /* 9f2260: mov ecx, 0xcebda8 */
  ecx = 0xcebda8u;
/* 9f2265: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2280(void) {
  LOAD_REGS();
L_9f2280: /* 9f2280: mov ecx, 0xcec2d8 */
  ecx = 0xcec2d8u;
/* 9f2285: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f22a0(void) {
  LOAD_REGS();
L_9f22a0: /* 9f22a0: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 9f22a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f22c0(void) {
  LOAD_REGS();
L_9f22c0: /* 9f22c0: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 9f22c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f22e0(void) {
  LOAD_REGS();
L_9f22e0: /* 9f22e0: mov ecx, 0xced6d0 */
  ecx = 0xced6d0u;
/* 9f22e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2300(void) {
  LOAD_REGS();
L_9f2300: /* 9f2300: mov ecx, 0xcedc00 */
  ecx = 0xcedc00u;
/* 9f2305: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2320(void) {
  LOAD_REGS();
L_9f2320: /* 9f2320: mov ecx, 0xcee130 */
  ecx = 0xcee130u;
/* 9f2325: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2340(void) {
  LOAD_REGS();
L_9f2340: /* 9f2340: mov ecx, 0xcee660 */
  ecx = 0xcee660u;
/* 9f2345: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2360(void) {
  LOAD_REGS();
L_9f2360: /* 9f2360: mov ecx, 0xceefd0 */
  ecx = 0xceefd0u;
/* 9f2365: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2380(void) {
  LOAD_REGS();
L_9f2380: /* 9f2380: mov ecx, 0xcef618 */
  ecx = 0xcef618u;
/* 9f2385: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f23a0(void) {
  LOAD_REGS();
L_9f23a0: /* 9f23a0: mov ecx, 0xcefc60 */
  ecx = 0xcefc60u;
/* 9f23a5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f23c0(void) {
  LOAD_REGS();
L_9f23c0: /* 9f23c0: mov ecx, 0xcf0190 */
  ecx = 0xcf0190u;
/* 9f23c5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f23e0(void) {
  LOAD_REGS();
L_9f23e0: /* 9f23e0: mov ecx, 0xcf08e8 */
  ecx = 0xcf08e8u;
/* 9f23e5: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2400(void) {
  LOAD_REGS();
L_9f2400: /* 9f2400: mov ecx, 0xcf0e18 */
  ecx = 0xcf0e18u;
/* 9f2405: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2420(void) {
  LOAD_REGS();
L_9f2420: /* 9f2420: mov ecx, 0xcf1560 */
  ecx = 0xcf1560u;
/* 9f2425: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2440(void) {
  LOAD_REGS();
L_9f2440: /* 9f2440: mov ecx, 0xcf1a90 */
  ecx = 0xcf1a90u;
/* 9f2445: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2460(void) {
  LOAD_REGS();
L_9f2460: /* 9f2460: mov ecx, 0xcf21f8 */
  ecx = 0xcf21f8u;
/* 9f2465: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_9f2480(void) {
  LOAD_REGS();
L_9f2480: /* 9f2480: mov ecx, 0xcf2728 */
  ecx = 0xcf2728u;
/* 9f2485: jmp dword ptr [0xcfa450] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}
