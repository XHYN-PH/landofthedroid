#include "recomp.h"
#include "rec_mod.h"

void f_9e18c0(void) {
  LOAD_REGS();
L_9e18c0: /* 9e18c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e18c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e18c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e18c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e18c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e18ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e18cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e18d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e18d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e18d6: mov esi, eax */
  esi = eax;
/* 9e18d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e18dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e18de: push 0x6c3274 */
  { uint32_t v = 0x6c3274u; esp -= 4; W32(esp, v); }
/* 9e18e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e18e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e18eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e18ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e18f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e18f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e18f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e18f9: push 0xacb5e2 */
  { uint32_t v = 0xacb5e2u; esp -= 4; W32(esp, v); }
/* 9e18fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1901: mov ecx, esp */
  ecx = esp;
/* 9e1903: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1905: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e1908: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e190b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e190e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1911: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1914: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e191au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e191a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e191b: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 9e1920: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1922: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 9e1927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1929: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 9e192e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1934u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1934: push 0x9f0f20 */
  { uint32_t v = 0x9f0f20u; esp -= 4; W32(esp, v); }
/* 9e1939: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e193eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e193e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e1942: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1945: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1980(void) {
  LOAD_REGS();
L_9e1980: /* 9e1980: mov dword ptr [0xb72554], 0xb72028 */
  W32((uint32_t)(0xb72554u), 0xb72028u);
/* 9e198a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e19a0(void) {
  LOAD_REGS();
L_9e19a0: /* 9e19a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e19a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e19a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e19a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e19a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e19aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e19ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e19b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e19b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e19b6: mov esi, eax */
  esi = eax;
/* 9e19b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e19bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e19be: push 0x6c258b */
  { uint32_t v = 0x6c258bu; esp -= 4; W32(esp, v); }
/* 9e19c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e19c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e19ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e19ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e19d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e19d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e19d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e19d9: push 0xacb5f6 */
  { uint32_t v = 0xacb5f6u; esp -= 4; W32(esp, v); }
/* 9e19de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e19e1: mov ecx, esp */
  ecx = esp;
/* 9e19e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e19e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e19e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e19eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e19ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e19f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e19f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e19fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e19fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e19fb: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 9e1a00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a02: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 9e1a07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a09: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 9e1a0e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1a14u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1a14: push 0x9f0f40 */
  { uint32_t v = 0x9f0f40u; esp -= 4; W32(esp, v); }
/* 9e1a19: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1a1eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1a1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1a21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e1a22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1a25: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1a60(void) {
  LOAD_REGS();
L_9e1a60: /* 9e1a60: mov dword ptr [0xb72a84], 0xb72558 */
  W32((uint32_t)(0xb72a84u), 0xb72558u);
/* 9e1a6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1a80(void) {
  LOAD_REGS();
L_9e1a80: /* 9e1a80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e1a84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1a8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e1a90: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1a96u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1a96: mov esi, eax */
  esi = eax;
/* 9e1a98: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1a9e: push 0x6c416f */
  { uint32_t v = 0x6c416fu; esp -= 4; W32(esp, v); }
/* 9e1aa3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1aa8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1aaeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1aae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e1ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1ab1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e1ab4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1ab9: push 0xacb60a */
  { uint32_t v = 0xacb60au; esp -= 4; W32(esp, v); }
/* 9e1abe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1ac1: mov ecx, esp */
  ecx = esp;
/* 9e1ac3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1ac5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e1ac8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e1acb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e1ace: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1ad1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1ad4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1adau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1adb: push 0xb64648 */
  { uint32_t v = 0xb64648u; esp -= 4; W32(esp, v); }
/* 9e1ae0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ae2: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 9e1ae7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ae9: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 9e1aee: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1af4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1af4: push 0x9f0f60 */
  { uint32_t v = 0x9f0f60u; esp -= 4; W32(esp, v); }
/* 9e1af9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1afeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1afe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1b01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e1b02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1b05: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1b40(void) {
  LOAD_REGS();
L_9e1b40: /* 9e1b40: mov dword ptr [0xb72fb4], 0xb72a88 */
  W32((uint32_t)(0xb72fb4u), 0xb72a88u);
/* 9e1b4a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1b60(void) {
  LOAD_REGS();
L_9e1b60: /* 9e1b60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1b63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e1b64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1b66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1b68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1b6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1b6c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e1b70: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1b76u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1b76: mov esi, eax */
  esi = eax;
/* 9e1b78: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1b7e: push 0x6c9cb4 */
  { uint32_t v = 0x6c9cb4u; esp -= 4; W32(esp, v); }
/* 9e1b83: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1b88: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1b8eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1b8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e1b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1b91: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e1b94: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1b99: push 0xacb626 */
  { uint32_t v = 0xacb626u; esp -= 4; W32(esp, v); }
/* 9e1b9e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1ba1: mov ecx, esp */
  ecx = esp;
/* 9e1ba3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1ba5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e1ba8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e1bab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e1bae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1bb1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1bb4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1bbau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1bba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1bbb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9e1bc0: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 9e1bc5: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 9e1bca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1bcc: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 9e1bd1: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1bd7u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1bd7: push 0x9f0f80 */
  { uint32_t v = 0x9f0f80u; esp -= 4; W32(esp, v); }
/* 9e1bdc: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1be1u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1be1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1be4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e1be5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1be8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1c20(void) {
  LOAD_REGS();
L_9e1c20: /* 9e1c20: mov dword ptr [0xb734e4], 0xb72fb8 */
  W32((uint32_t)(0xb734e4u), 0xb72fb8u);
/* 9e1c2a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1c40(void) {
  LOAD_REGS();
L_9e1c40: /* 9e1c40: mov ecx, 0xb73500 */
  ecx = 0xb73500u;
/* 9e1c45: jmp dword ptr [0xcfa1c8] */
  SPILL(); f_4e2d56(); return; /* Core!??0FRotator@@QAE@XZ */
}

void f_9e1c60(void) {
  LOAD_REGS();
L_9e1c60: /* 9e1c60: mov ecx, 0xb7350c */
  ecx = 0xb7350cu;
/* 9e1c65: jmp dword ptr [0xcfa1c8] */
  SPILL(); f_4e2d56(); return; /* Core!??0FRotator@@QAE@XZ */
}

void f_9e1c80(void) {
  LOAD_REGS();
L_9e1c80: /* 9e1c80: mov ecx, 0xb73518 */
  ecx = 0xb73518u;
/* 9e1c85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e1ca0(void) {
  LOAD_REGS();
L_9e1ca0: /* 9e1ca0: mov ecx, 0xb7353c */
  ecx = 0xb7353cu;
/* 9e1ca5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e1cc0(void) {
  LOAD_REGS();
L_9e1cc0: /* 9e1cc0: mov ecx, 0xb7354c */
  ecx = 0xb7354cu;
/* 9e1cc5: jmp dword ptr [0xcfa1c8] */
  SPILL(); f_4e2d56(); return; /* Core!??0FRotator@@QAE@XZ */
}

void f_9e1ce0(void) {
  LOAD_REGS();
L_9e1ce0: /* 9e1ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1ce1: mov ebp, esp */
  ebp = esp;
/* 9e1ce3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1ce6: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1cec: push 0x6c9084 */
  { uint32_t v = 0x6c9084u; esp -= 4; W32(esp, v); }
/* 9e1cf1: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1cf6: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1cfcu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1cfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1cfd: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1d02: push 0xacd5ba */
  { uint32_t v = 0xacd5bau; esp -= 4; W32(esp, v); }
/* 9e1d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1d0f: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 9e1d12: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1d18u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1d18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1d1b: mov ecx, esp */
  ecx = esp;
/* 9e1d1d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9e1d1f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1d21: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9e1d24: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9e1d27: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9e1d2a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1d2d: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9e1d30: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1d33: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1d39u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1d39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1d3a: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1d40u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1d41: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9e1d43: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 9e1d45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1d47: mov ecx, 0xb78050 */
  ecx = 0xb78050u;
/* 9e1d4c: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1d52u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1d52: push 0x9f0fa0 */
  { uint32_t v = 0x9f0fa0u; esp -= 4; W32(esp, v); }
/* 9e1d57: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1d5cu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1d5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1d5f: mov esp, ebp */
  esp = ebp;
/* 9e1d61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1d62: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1d90(void) {
  LOAD_REGS();
L_9e1d90: /* 9e1d90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1d91: mov ebp, esp */
  ebp = esp;
/* 9e1d93: call 0x6c494e */
  esp -= 4; W32(esp, 0x9e1d98u); SPILL(); f_6c494e(); if (g_unwind) return; RELOAD();
/* 9e1d98: mov dword ptr [0xb7857c], eax */
  W32((uint32_t)(0xb7857cu), eax);
/* 9e1d9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1d9e: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1db0(void) {
  LOAD_REGS();
L_9e1db0: /* 9e1db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1db1: mov ebp, esp */
  ebp = esp;
/* 9e1db3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1db6: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1dbc: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e1dc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e1dc3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1dc8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1dceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1dcf: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1dd4: push 0xacd5fa */
  { uint32_t v = 0xacd5fau; esp -= 4; W32(esp, v); }
/* 9e1dd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ddb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1de1: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 9e1de4: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1deau); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1dea: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1ded: mov edx, esp */
  edx = esp;
/* 9e1def: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9e1df1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 9e1df3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9e1df6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e1df9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9e1dfc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 9e1dff: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9e1e02: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 9e1e05: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1e0bu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1e0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1e0c: call dword ptr [0xcfa61c] */
  esp -= 4; W32(esp, 0x9e1e12u); SPILL(); f_4e3850(); if (g_unwind) return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1e12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1e13: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9e1e15: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9e1e17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1e19: mov ecx, 0xb78580 */
  ecx = 0xb78580u;
/* 9e1e1e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1e24u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1e24: push 0x9f0fc0 */
  { uint32_t v = 0x9f0fc0u; esp -= 4; W32(esp, v); }
/* 9e1e29: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1e2eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1e2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1e31: mov esp, ebp */
  esp = ebp;
/* 9e1e33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1e34: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1e60(void) {
  LOAD_REGS();
L_9e1e60: /* 9e1e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1e61: mov ebp, esp */
  ebp = esp;
/* 9e1e63: call 0x6c3f53 */
  esp -= 4; W32(esp, 0x9e1e68u); SPILL(); f_6c3f53(); if (g_unwind) return; RELOAD();
/* 9e1e68: mov dword ptr [0xb78aac], eax */
  W32((uint32_t)(0xb78aacu), eax);
/* 9e1e6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1e6e: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1e80(void) {
  LOAD_REGS();
L_9e1e80: /* 9e1e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1e81: mov ebp, esp */
  ebp = esp;
/* 9e1e83: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1e86: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1e8c: push 0x6c39d1 */
  { uint32_t v = 0x6c39d1u; esp -= 4; W32(esp, v); }
/* 9e1e91: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1e96: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1e9cu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1e9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1e9d: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1ea2: push 0xacd61a */
  { uint32_t v = 0xacd61au; esp -= 4; W32(esp, v); }
/* 9e1ea7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1eab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ead: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1eaf: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 9e1eb2: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1eb8u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1eb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1ebb: mov ecx, esp */
  ecx = esp;
/* 9e1ebd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9e1ebf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1ec1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9e1ec4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9e1ec7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9e1eca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1ecd: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9e1ed0: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1ed3: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1ed9u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1eda: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1ee0u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1ee3: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 9e1ee8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1eea: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 9e1eef: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1ef5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1ef5: push 0x9f0fe0 */
  { uint32_t v = 0x9f0fe0u; esp -= 4; W32(esp, v); }
/* 9e1efa: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1effu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1eff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1f02: mov esp, ebp */
  esp = ebp;
/* 9e1f04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1f05: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1f30(void) {
  LOAD_REGS();
L_9e1f30: /* 9e1f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9e1f31: mov ebp, esp */
  ebp = esp;
/* 9e1f33: call 0x6cbc08 */
  esp -= 4; W32(esp, 0x9e1f38u); SPILL(); f_6cbc08(); if (g_unwind) return; RELOAD();
/* 9e1f38: mov dword ptr [0xb78fdc], eax */
  W32((uint32_t)(0xb78fdcu), eax);
/* 9e1f3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9e1f3e: ret  */
  esp += 4; SPILL(); return;
}

void f_9e1f50(void) {
  LOAD_REGS();
L_9e1f50: /* 9e1f50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1f53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e1f54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1f56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1f58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1f5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e1f60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e1f66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e1f66: mov esi, eax */
  esi = eax;
/* 9e1f68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e1f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1f6e: push 0x6c150f */
  { uint32_t v = 0x6c150fu; esp -= 4; W32(esp, v); }
/* 9e1f73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e1f78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e1f7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e1f7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e1f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1f81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e1f84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e1f89: push 0xacd672 */
  { uint32_t v = 0xacd672u; esp -= 4; W32(esp, v); }
/* 9e1f8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e1f91: mov ecx, esp */
  ecx = esp;
/* 9e1f93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e1f95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e1f98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e1f9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e1f9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e1fa1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e1fa4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e1faau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e1faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e1fab: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 9e1fb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1fb2: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 9e1fb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e1fb9: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 9e1fbe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e1fc4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e1fc4: push 0x9f1000 */
  { uint32_t v = 0x9f1000u; esp -= 4; W32(esp, v); }
/* 9e1fc9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e1fceu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e1fce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1fd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e1fd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e1fd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2010(void) {
  LOAD_REGS();
L_9e2010: /* 9e2010: mov dword ptr [0xb7982c], 0xb79300 */
  W32((uint32_t)(0xb7982cu), 0xb79300u);
/* 9e201a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2030(void) {
  LOAD_REGS();
L_9e2030: /* 9e2030: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2034: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2036: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e203a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e203c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2040: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2046u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2046: mov esi, eax */
  esi = eax;
/* 9e2048: mov eax, dword ptr [0xcfa620] */
  eax = R32((uint32_t)(0xcfa620u));
/* 9e204d: push 0x6c96b5 */
  { uint32_t v = 0x6c96b5u; esp -= 4; W32(esp, v); }
/* 9e2052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2053: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2058: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e205eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e205e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2061: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2064: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2069: push 0xacdef6 */
  { uint32_t v = 0xacdef6u; esp -= 4; W32(esp, v); }
/* 9e206e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2071: mov ecx, esp */
  ecx = esp;
/* 9e2073: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2075: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2078: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e207b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e207e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2081: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2084: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e208au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e208a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e208b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2091u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2092: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9e2094: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 9e2099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e209b: mov ecx, 0xb79940 */
  ecx = 0xb79940u;
/* 9e20a0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e20a6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e20a6: push 0x9f1020 */
  { uint32_t v = 0x9f1020u; esp -= 4; W32(esp, v); }
/* 9e20ab: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e20b0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e20b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e20b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e20b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e20b7: ret  */
  esp += 4; SPILL(); return;
}

void f_9e20f0(void) {
  LOAD_REGS();
L_9e20f0: /* 9e20f0: mov dword ptr [0xb79e6c], 0xb79940 */
  W32((uint32_t)(0xb79e6cu), 0xb79940u);
/* 9e20fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2110(void) {
  LOAD_REGS();
L_9e2110: /* 9e2110: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2116: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e211a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e211c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2120: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2126u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2126: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e212c: mov esi, eax */
  esi = eax;
/* 9e212e: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e2133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e2135: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e213a: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e2140u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e2140: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e2143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2144: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e2146: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e214b: push 0xace26e */
  { uint32_t v = 0xace26eu; esp -= 4; W32(esp, v); }
/* 9e2150: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2153: mov edx, esp */
  edx = esp;
/* 9e2155: push 0xb79940 */
  { uint32_t v = 0xb79940u; esp -= 4; W32(esp, v); }
/* 9e215a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e215c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e215f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e2162: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e2165: push 0xcc7b00 */
  { uint32_t v = 0xcc7b00u; esp -= 4; W32(esp, v); }
/* 9e216a: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 9e216c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e216f: push 0x194 */
  { uint32_t v = 0x194u; esp -= 4; W32(esp, v); }
/* 9e2174: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e2177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2179: mov ecx, 0xb79f88 */
  ecx = 0xb79f88u;
/* 9e217e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2184u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2184: push 0x9f1040 */
  { uint32_t v = 0x9f1040u; esp -= 4; W32(esp, v); }
/* 9e2189: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e218eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e218e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2191: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2192: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2195: ret  */
  esp += 4; SPILL(); return;
}

void f_9e21d0(void) {
  LOAD_REGS();
L_9e21d0: /* 9e21d0: mov dword ptr [0xb7a4b4], 0xb79f88 */
  W32((uint32_t)(0xb7a4b4u), 0xb79f88u);
/* 9e21da: ret  */
  esp += 4; SPILL(); return;
}

void f_9e21f0(void) {
  LOAD_REGS();
L_9e21f0: /* 9e21f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e21f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e21f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e21f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e21f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e21fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e21fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2200: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2206u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2206: mov esi, eax */
  esi = eax;
/* 9e2208: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e220d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e220e: push 0x6caeb1 */
  { uint32_t v = 0x6caeb1u; esp -= 4; W32(esp, v); }
/* 9e2213: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2218: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e221eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e221e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2221: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2224: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2229: push 0xacebaa */
  { uint32_t v = 0xacebaau; esp -= 4; W32(esp, v); }
/* 9e222e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2231: mov ecx, esp */
  ecx = esp;
/* 9e2233: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2235: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2238: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e223b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e223e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2241: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2244: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e224au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e224a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e224b: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 9e2250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2252: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 9e2254: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2256: mov ecx, 0xb7a5d0 */
  ecx = 0xb7a5d0u;
/* 9e225b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2261u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2261: push 0x9f1060 */
  { uint32_t v = 0x9f1060u; esp -= 4; W32(esp, v); }
/* 9e2266: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e226bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e226b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e226e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e226f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2272: ret  */
  esp += 4; SPILL(); return;
}

void f_9e22b0(void) {
  LOAD_REGS();
L_9e22b0: /* 9e22b0: mov dword ptr [0xb7aafc], 0xb7a5d0 */
  W32((uint32_t)(0xb7aafcu), 0xb7a5d0u);
/* 9e22ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e22d0(void) {
  LOAD_REGS();
L_9e22d0: /* 9e22d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e22d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e22d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e22d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e22d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e22da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e22dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e22e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e22e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e22e6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e22ec: mov esi, eax */
  esi = eax;
/* 9e22ee: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e22f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e22f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e22f5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e22fa: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e2300u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e2300: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e2303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2304: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e2306: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e230b: push 0xacebda */
  { uint32_t v = 0xacebdau; esp -= 4; W32(esp, v); }
/* 9e2310: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2313: mov edx, esp */
  edx = esp;
/* 9e2315: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e2317: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e231a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e231d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e2320: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e2323: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e2326: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e232cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e232c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e232d: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2333u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2334: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9e2336: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 9e2338: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e233a: mov ecx, 0xb7ab00 */
  ecx = 0xb7ab00u;
/* 9e233f: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2345u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2345: push 0x9f1080 */
  { uint32_t v = 0x9f1080u; esp -= 4; W32(esp, v); }
/* 9e234a: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e234fu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e234f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2353: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2356: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2390(void) {
  LOAD_REGS();
L_9e2390: /* 9e2390: mov dword ptr [0xb7b02c], 0xb7ab00 */
  W32((uint32_t)(0xb7b02cu), 0xb7ab00u);
/* 9e239a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e23b0(void) {
  LOAD_REGS();
L_9e23b0: /* 9e23b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e23b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e23b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e23b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e23b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e23ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e23bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e23c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e23c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e23c6: mov esi, eax */
  esi = eax;
/* 9e23c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e23cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e23ce: push 0x6c7d7e */
  { uint32_t v = 0x6c7d7eu; esp -= 4; W32(esp, v); }
/* 9e23d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e23d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e23deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e23de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e23e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e23e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e23e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e23e9: push 0xacebf6 */
  { uint32_t v = 0xacebf6u; esp -= 4; W32(esp, v); }
/* 9e23ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e23f1: mov ecx, esp */
  ecx = esp;
/* 9e23f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e23f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e23f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e23fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e23fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2401: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2404: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e240au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e240a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e240b: push 0xb7ab00 */
  { uint32_t v = 0xb7ab00u; esp -= 4; W32(esp, v); }
/* 9e2410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2412: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9e2414: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2416: mov ecx, 0xb7b030 */
  ecx = 0xb7b030u;
/* 9e241b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2421u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2421: push 0x9f10a0 */
  { uint32_t v = 0x9f10a0u; esp -= 4; W32(esp, v); }
/* 9e2426: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e242bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e242b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e242e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e242f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2432: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2470(void) {
  LOAD_REGS();
L_9e2470: /* 9e2470: mov dword ptr [0xb7b55c], 0xb7b030 */
  W32((uint32_t)(0xb7b55cu), 0xb7b030u);
/* 9e247a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2490(void) {
  LOAD_REGS();
L_9e2490: /* 9e2490: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2494: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2496: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2498: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e249a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e249c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e24a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e24a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e24a6: mov esi, eax */
  esi = eax;
/* 9e24a8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e24ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e24ae: push 0x6c97dc */
  { uint32_t v = 0x6c97dcu; esp -= 4; W32(esp, v); }
/* 9e24b3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e24b8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e24beu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e24be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e24c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e24c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e24c4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e24c9: push 0xacec0e */
  { uint32_t v = 0xacec0eu; esp -= 4; W32(esp, v); }
/* 9e24ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e24d1: mov ecx, esp */
  ecx = esp;
/* 9e24d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e24d5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e24d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e24db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e24de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e24e1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e24e4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e24eau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e24ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e24eb: push 0xb7ab00 */
  { uint32_t v = 0xb7ab00u; esp -= 4; W32(esp, v); }
/* 9e24f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e24f2: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e24f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e24f6: mov ecx, 0xb7b560 */
  ecx = 0xb7b560u;
/* 9e24fb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2501u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2501: push 0x9f10c0 */
  { uint32_t v = 0x9f10c0u; esp -= 4; W32(esp, v); }
/* 9e2506: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e250bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e250b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e250e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e250f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2512: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2550(void) {
  LOAD_REGS();
L_9e2550: /* 9e2550: mov dword ptr [0xb7ba8c], 0xb7b560 */
  W32((uint32_t)(0xb7ba8cu), 0xb7b560u);
/* 9e255a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2570(void) {
  LOAD_REGS();
L_9e2570: /* 9e2570: push 0xacee98 */
  { uint32_t v = 0xacee98u; esp -= 4; W32(esp, v); }
/* 9e2575: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e2577: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e257du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e257d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2580: mov byte ptr [0xb7bed2], al */
  W8((uint32_t)(0xb7bed2u), (eax & 0xffu));
/* 9e2585: ret  */
  esp += 4; SPILL(); return;
}

void f_9e25a0(void) {
  LOAD_REGS();
L_9e25a0: /* 9e25a0: push 0xacf028 */
  { uint32_t v = 0xacf028u; esp -= 4; W32(esp, v); }
/* 9e25a5: push 0x1d0 */
  { uint32_t v = 0x1d0u; esp -= 4; W32(esp, v); }
/* 9e25aa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e25b0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e25b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e25b3: mov byte ptr [0xb7bed3], al */
  W8((uint32_t)(0xb7bed3u), (eax & 0xffu));
/* 9e25b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e25d0(void) {
  LOAD_REGS();
L_9e25d0: /* 9e25d0: push 0xacf07c */
  { uint32_t v = 0xacf07cu; esp -= 4; W32(esp, v); }
/* 9e25d5: push 0x1d1 */
  { uint32_t v = 0x1d1u; esp -= 4; W32(esp, v); }
/* 9e25da: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e25e0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e25e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e25e3: mov byte ptr [0xb7bed4], al */
  W8((uint32_t)(0xb7bed4u), (eax & 0xffu));
/* 9e25e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2600(void) {
  LOAD_REGS();
L_9e2600: /* 9e2600: push 0xacf0e4 */
  { uint32_t v = 0xacf0e4u; esp -= 4; W32(esp, v); }
/* 9e2605: push 0x1d2 */
  { uint32_t v = 0x1d2u; esp -= 4; W32(esp, v); }
/* 9e260a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2610u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2613: mov byte ptr [0xb7bed5], al */
  W8((uint32_t)(0xb7bed5u), (eax & 0xffu));
/* 9e2618: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2630(void) {
  LOAD_REGS();
L_9e2630: /* 9e2630: push 0xacf11c */
  { uint32_t v = 0xacf11cu; esp -= 4; W32(esp, v); }
/* 9e2635: push 0x1d3 */
  { uint32_t v = 0x1d3u; esp -= 4; W32(esp, v); }
/* 9e263a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2640u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2640: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2643: mov byte ptr [0xb7bed6], al */
  W8((uint32_t)(0xb7bed6u), (eax & 0xffu));
/* 9e2648: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2660(void) {
  LOAD_REGS();
L_9e2660: /* 9e2660: push 0xacf190 */
  { uint32_t v = 0xacf190u; esp -= 4; W32(esp, v); }
/* 9e2665: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 9e266a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2670u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2670: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2673: mov byte ptr [0xb7bed7], al */
  W8((uint32_t)(0xb7bed7u), (eax & 0xffu));
/* 9e2678: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2690(void) {
  LOAD_REGS();
L_9e2690: /* 9e2690: push 0xacf20c */
  { uint32_t v = 0xacf20cu; esp -= 4; W32(esp, v); }
/* 9e2695: push 0x1d5 */
  { uint32_t v = 0x1d5u; esp -= 4; W32(esp, v); }
/* 9e269a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e26a0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e26a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e26a3: mov byte ptr [0xb7bed8], al */
  W8((uint32_t)(0xb7bed8u), (eax & 0xffu));
/* 9e26a8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e26c0(void) {
  LOAD_REGS();
L_9e26c0: /* 9e26c0: push 0xacf260 */
  { uint32_t v = 0xacf260u; esp -= 4; W32(esp, v); }
/* 9e26c5: push 0x1d6 */
  { uint32_t v = 0x1d6u; esp -= 4; W32(esp, v); }
/* 9e26ca: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e26d0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e26d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e26d3: mov byte ptr [0xb7bed9], al */
  W8((uint32_t)(0xb7bed9u), (eax & 0xffu));
/* 9e26d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e26f0(void) {
  LOAD_REGS();
L_9e26f0: /* 9e26f0: push 0xacf290 */
  { uint32_t v = 0xacf290u; esp -= 4; W32(esp, v); }
/* 9e26f5: push 0x1e0 */
  { uint32_t v = 0x1e0u; esp -= 4; W32(esp, v); }
/* 9e26fa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2700u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2700: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2703: mov byte ptr [0xb7beda], al */
  W8((uint32_t)(0xb7bedau), (eax & 0xffu));
/* 9e2708: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2720(void) {
  LOAD_REGS();
L_9e2720: /* 9e2720: push 0xacf29c */
  { uint32_t v = 0xacf29cu; esp -= 4; W32(esp, v); }
/* 9e2725: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e2727: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e272du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e272d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2730: mov byte ptr [0xb7bedb], al */
  W8((uint32_t)(0xb7bedbu), (eax & 0xffu));
/* 9e2735: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2750(void) {
  LOAD_REGS();
L_9e2750: /* 9e2750: push 0xacf2a8 */
  { uint32_t v = 0xacf2a8u; esp -= 4; W32(esp, v); }
/* 9e2755: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e2757: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e275du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e275d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2760: mov byte ptr [0xb7bedc], al */
  W8((uint32_t)(0xb7bedcu), (eax & 0xffu));
/* 9e2765: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2780(void) {
  LOAD_REGS();
L_9e2780: /* 9e2780: push 0xacf2f4 */
  { uint32_t v = 0xacf2f4u; esp -= 4; W32(esp, v); }
/* 9e2785: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e2787: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e278du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e278d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2790: mov byte ptr [0xb7bedd], al */
  W8((uint32_t)(0xb7beddu), (eax & 0xffu));
/* 9e2795: ret  */
  esp += 4; SPILL(); return;
}

void f_9e27b0(void) {
  LOAD_REGS();
L_9e27b0: /* 9e27b0: push 0xacf394 */
  { uint32_t v = 0xacf394u; esp -= 4; W32(esp, v); }
/* 9e27b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e27b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e27bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e27bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e27c0: mov byte ptr [0xb7bede], al */
  W8((uint32_t)(0xb7bedeu), (eax & 0xffu));
/* 9e27c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e27e0(void) {
  LOAD_REGS();
L_9e27e0: /* 9e27e0: push 0xacf434 */
  { uint32_t v = 0xacf434u; esp -= 4; W32(esp, v); }
/* 9e27e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e27e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e27edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e27ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e27f0: mov byte ptr [0xb7bedf], al */
  W8((uint32_t)(0xb7bedfu), (eax & 0xffu));
/* 9e27f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2810(void) {
  LOAD_REGS();
L_9e2810: /* 9e2810: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2814: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e281a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e281c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2820: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2826u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2826: mov esi, eax */
  esi = eax;
/* 9e2828: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e282d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e282e: push 0x6caaf1 */
  { uint32_t v = 0x6caaf1u; esp -= 4; W32(esp, v); }
/* 9e2833: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2838: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e283eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e283e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2841: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2844: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2849: push 0xacf452 */
  { uint32_t v = 0xacf452u; esp -= 4; W32(esp, v); }
/* 9e284e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2851: mov ecx, esp */
  ecx = esp;
/* 9e2853: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2855: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2858: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e285b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e285e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2861: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2864: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e286au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e286a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e286b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2871u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2872: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e2874: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 9e2879: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e287b: mov ecx, 0xb7bee0 */
  ecx = 0xb7bee0u;
/* 9e2880: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2886u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2886: push 0x9f10e0 */
  { uint32_t v = 0x9f10e0u; esp -= 4; W32(esp, v); }
/* 9e288b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e2890u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e2890: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2894: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2897: ret  */
  esp += 4; SPILL(); return;
}

void f_9e28d0(void) {
  LOAD_REGS();
L_9e28d0: /* 9e28d0: mov dword ptr [0xb7c40c], 0xb7bee0 */
  W32((uint32_t)(0xb7c40cu), 0xb7bee0u);
/* 9e28da: ret  */
  esp += 4; SPILL(); return;
}

void f_9e28f0(void) {
  LOAD_REGS();
L_9e28f0: /* 9e28f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e28f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e28f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e28f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e28f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e28fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e28fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2900: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2906u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2906: mov esi, eax */
  esi = eax;
/* 9e2908: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e290d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e290e: push 0x6cc153 */
  { uint32_t v = 0x6cc153u; esp -= 4; W32(esp, v); }
/* 9e2913: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2918: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e291eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e291e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2921: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2924: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2929: push 0xacf622 */
  { uint32_t v = 0xacf622u; esp -= 4; W32(esp, v); }
/* 9e292e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2931: mov ecx, esp */
  ecx = esp;
/* 9e2933: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2935: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2938: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e293b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e293e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2941: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2944: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e294au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e294a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e294b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2951u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2952: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2954: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9e2956: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2958: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 9e295d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2963u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2963: push 0x9f1100 */
  { uint32_t v = 0x9f1100u; esp -= 4; W32(esp, v); }
/* 9e2968: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e296du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e296d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2971: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2974: ret  */
  esp += 4; SPILL(); return;
}

void f_9e29b0(void) {
  LOAD_REGS();
L_9e29b0: /* 9e29b0: mov dword ptr [0xb7ca6c], 0xb7c540 */
  W32((uint32_t)(0xb7ca6cu), 0xb7c540u);
/* 9e29ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e29d0(void) {
  LOAD_REGS();
L_9e29d0: /* 9e29d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e29d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e29d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e29d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e29d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e29da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e29dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e29e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e29e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e29e6: mov esi, eax */
  esi = eax;
/* 9e29e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e29ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e29ee: push 0x6c64e2 */
  { uint32_t v = 0x6c64e2u; esp -= 4; W32(esp, v); }
/* 9e29f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e29f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e29feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e29fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2a01: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2a04: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2a09: push 0xacf63e */
  { uint32_t v = 0xacf63eu; esp -= 4; W32(esp, v); }
/* 9e2a0e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2a11: mov ecx, esp */
  ecx = esp;
/* 9e2a13: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2a15: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2a18: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e2a1b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e2a1e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2a21: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2a24: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2a2au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2a2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2a2b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2a31u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2a31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2a32: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9e2a34: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 9e2a39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2a3b: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 9e2a40: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2a46u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2a46: push 0x9f1120 */
  { uint32_t v = 0x9f1120u; esp -= 4; W32(esp, v); }
/* 9e2a4b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e2a50u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e2a50: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2a53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2a54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2a57: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2a90(void) {
  LOAD_REGS();
L_9e2a90: /* 9e2a90: mov dword ptr [0xb7cf9c], 0xb7ca70 */
  W32((uint32_t)(0xb7cf9cu), 0xb7ca70u);
/* 9e2a9a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2ab0(void) {
  LOAD_REGS();
L_9e2ab0: /* 9e2ab0: push 0xacf7e4 */
  { uint32_t v = 0xacf7e4u; esp -= 4; W32(esp, v); }
/* 9e2ab5: push 0x210 */
  { uint32_t v = 0x210u; esp -= 4; W32(esp, v); }
/* 9e2aba: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2ac0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2ac0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2ac3: mov byte ptr [0xb7cfa0], al */
  W8((uint32_t)(0xb7cfa0u), (eax & 0xffu));
/* 9e2ac8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2ae0(void) {
  LOAD_REGS();
L_9e2ae0: /* 9e2ae0: push 0xacfa58 */
  { uint32_t v = 0xacfa58u; esp -= 4; W32(esp, v); }
/* 9e2ae5: push 0x1ff */
  { uint32_t v = 0x1ffu; esp -= 4; W32(esp, v); }
/* 9e2aea: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2af0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2af0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2af3: mov byte ptr [0xb7cfa1], al */
  W8((uint32_t)(0xb7cfa1u), (eax & 0xffu));
/* 9e2af8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2b10(void) {
  LOAD_REGS();
L_9e2b10: /* 9e2b10: push 0xacfa5c */
  { uint32_t v = 0xacfa5cu; esp -= 4; W32(esp, v); }
/* 9e2b15: push 0x1f5 */
  { uint32_t v = 0x1f5u; esp -= 4; W32(esp, v); }
/* 9e2b1a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2b20u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2b20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2b23: mov byte ptr [0xb7cfa2], al */
  W8((uint32_t)(0xb7cfa2u), (eax & 0xffu));
/* 9e2b28: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2b40(void) {
  LOAD_REGS();
L_9e2b40: /* 9e2b40: push 0xacfa68 */
  { uint32_t v = 0xacfa68u; esp -= 4; W32(esp, v); }
/* 9e2b45: push 0x1f7 */
  { uint32_t v = 0x1f7u; esp -= 4; W32(esp, v); }
/* 9e2b4a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2b50u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2b50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2b53: mov byte ptr [0xb7cfa3], al */
  W8((uint32_t)(0xb7cfa3u), (eax & 0xffu));
/* 9e2b58: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2b70(void) {
  LOAD_REGS();
L_9e2b70: /* 9e2b70: push 0xacfa6c */
  { uint32_t v = 0xacfa6cu; esp -= 4; W32(esp, v); }
/* 9e2b75: push 0x1fd */
  { uint32_t v = 0x1fdu; esp -= 4; W32(esp, v); }
/* 9e2b7a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e2b80u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e2b80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2b83: mov byte ptr [0xb7cfa4], al */
  W8((uint32_t)(0xb7cfa4u), (eax & 0xffu));
/* 9e2b88: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2ba0(void) {
  LOAD_REGS();
L_9e2ba0: /* 9e2ba0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2ba3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2ba4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2ba6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2ba8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2baa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2bac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2bb0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2bb6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2bb6: mov esi, eax */
  esi = eax;
/* 9e2bb8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e2bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2bbe: push 0x6c443a */
  { uint32_t v = 0x6c443au; esp -= 4; W32(esp, v); }
/* 9e2bc3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2bc8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e2bceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e2bce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2bd1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2bd4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2bd9: push 0xacfc46 */
  { uint32_t v = 0xacfc46u; esp -= 4; W32(esp, v); }
/* 9e2bde: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2be1: mov ecx, esp */
  ecx = esp;
/* 9e2be3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2be5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2be8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e2beb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e2bee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2bf1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2bf4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2bfau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2bfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2bfb: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9e2c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c02: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 9e2c07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c09: mov ecx, 0xb7d1d0 */
  ecx = 0xb7d1d0u;
/* 9e2c0e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2c14u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2c14: push 0x9f1140 */
  { uint32_t v = 0x9f1140u; esp -= 4; W32(esp, v); }
/* 9e2c19: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e2c1eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e2c1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2c21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2c22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2c25: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2c60(void) {
  LOAD_REGS();
L_9e2c60: /* 9e2c60: mov dword ptr [0xb7d6fc], 0xb7d1d0 */
  W32((uint32_t)(0xb7d6fcu), 0xb7d1d0u);
/* 9e2c6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2c80(void) {
  LOAD_REGS();
L_9e2c80: /* 9e2c80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2c83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2c84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2c8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2c90: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2c96u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2c96: mov esi, eax */
  esi = eax;
/* 9e2c98: mov eax, dword ptr [0xcfa620] */
  eax = R32((uint32_t)(0xcfa620u));
/* 9e2c9d: push 0x6cbbea */
  { uint32_t v = 0x6cbbeau; esp -= 4; W32(esp, v); }
/* 9e2ca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2ca3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2ca8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e2caeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e2cae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2cb1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2cb4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2cb9: push 0xacfc72 */
  { uint32_t v = 0xacfc72u; esp -= 4; W32(esp, v); }
/* 9e2cbe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2cc1: mov ecx, esp */
  ecx = esp;
/* 9e2cc3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2cc5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2cc8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e2ccb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e2cce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2cd1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2cd4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2cdau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2cda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2cdb: call dword ptr [0xcfa61c] */
  esp -= 4; W32(esp, 0x9e2ce1u); SPILL(); f_4e3850(); if (g_unwind) return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2ce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2ce2: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 9e2ce4: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 9e2ce9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2ceb: mov ecx, 0xb7d828 */
  ecx = 0xb7d828u;
/* 9e2cf0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2cf6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2cf6: push 0x9f1160 */
  { uint32_t v = 0x9f1160u; esp -= 4; W32(esp, v); }
/* 9e2cfb: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e2d00u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e2d00: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2d03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2d07: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2d40(void) {
  LOAD_REGS();
L_9e2d40: /* 9e2d40: mov dword ptr [0xb7dd54], 0xb7d828 */
  W32((uint32_t)(0xb7dd54u), 0xb7d828u);
/* 9e2d4a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2d60(void) {
  LOAD_REGS();
L_9e2d60: /* 9e2d60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e2d64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2d68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2d6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2d6c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e2d70: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e2d76u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e2d76: mov esi, eax */
  esi = eax;
/* 9e2d78: mov eax, dword ptr [0xcfa620] */
  eax = R32((uint32_t)(0xcfa620u));
/* 9e2d7d: push 0x6c46ba */
  { uint32_t v = 0x6c46bau; esp -= 4; W32(esp, v); }
/* 9e2d82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2d83: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e2d88: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e2d8eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e2d8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e2d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2d91: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e2d94: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e2d99: push 0xacfc82 */
  { uint32_t v = 0xacfc82u; esp -= 4; W32(esp, v); }
/* 9e2d9e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e2da1: mov ecx, esp */
  ecx = esp;
/* 9e2da3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e2da5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e2da8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e2dab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e2dae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e2db1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e2db4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e2dbau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2dba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2dbb: call dword ptr [0xcfa61c] */
  esp -= 4; W32(esp, 0x9e2dc1u); SPILL(); f_4e3850(); if (g_unwind) return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */ RELOAD();
/* 9e2dc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e2dc2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9e2dc4: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* 9e2dc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e2dcb: mov ecx, 0xb7dd58 */
  ecx = 0xb7dd58u;
/* 9e2dd0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e2dd6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e2dd6: push 0x9f1180 */
  { uint32_t v = 0x9f1180u; esp -= 4; W32(esp, v); }
/* 9e2ddb: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e2de0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e2de0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2de3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e2de4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e2de7: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2e20(void) {
  LOAD_REGS();
L_9e2e20: /* 9e2e20: mov dword ptr [0xb7e284], 0xb7dd58 */
  W32((uint32_t)(0xb7e284u), 0xb7dd58u);
/* 9e2e2a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e2e40(void) {
  LOAD_REGS();
L_9e2e40: /* 9e2e40: mov ecx, 0xb7e288 */
  ecx = 0xb7e288u;
/* 9e2e45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2e60(void) {
  LOAD_REGS();
L_9e2e60: /* 9e2e60: mov ecx, 0xb7e28c */
  ecx = 0xb7e28cu;
/* 9e2e65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2e80(void) {
  LOAD_REGS();
L_9e2e80: /* 9e2e80: mov ecx, 0xb7e290 */
  ecx = 0xb7e290u;
/* 9e2e85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2ea0(void) {
  LOAD_REGS();
L_9e2ea0: /* 9e2ea0: mov ecx, 0xb7e294 */
  ecx = 0xb7e294u;
/* 9e2ea5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2ec0(void) {
  LOAD_REGS();
L_9e2ec0: /* 9e2ec0: mov ecx, 0xb7e298 */
  ecx = 0xb7e298u;
/* 9e2ec5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2ee0(void) {
  LOAD_REGS();
L_9e2ee0: /* 9e2ee0: mov ecx, 0xb7e29c */
  ecx = 0xb7e29cu;
/* 9e2ee5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2f00(void) {
  LOAD_REGS();
L_9e2f00: /* 9e2f00: mov ecx, 0xb7e2a0 */
  ecx = 0xb7e2a0u;
/* 9e2f05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2f20(void) {
  LOAD_REGS();
L_9e2f20: /* 9e2f20: mov ecx, 0xb7e2a4 */
  ecx = 0xb7e2a4u;
/* 9e2f25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2f40(void) {
  LOAD_REGS();
L_9e2f40: /* 9e2f40: mov ecx, 0xb7e2a8 */
  ecx = 0xb7e2a8u;
/* 9e2f45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2f60(void) {
  LOAD_REGS();
L_9e2f60: /* 9e2f60: mov ecx, 0xb7e2ac */
  ecx = 0xb7e2acu;
/* 9e2f65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2f80(void) {
  LOAD_REGS();
L_9e2f80: /* 9e2f80: mov ecx, 0xb7e2b0 */
  ecx = 0xb7e2b0u;
/* 9e2f85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2fa0(void) {
  LOAD_REGS();
L_9e2fa0: /* 9e2fa0: mov ecx, 0xb7e2b4 */
  ecx = 0xb7e2b4u;
/* 9e2fa5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2fc0(void) {
  LOAD_REGS();
L_9e2fc0: /* 9e2fc0: mov ecx, 0xb7e2b8 */
  ecx = 0xb7e2b8u;
/* 9e2fc5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e2fe0(void) {
  LOAD_REGS();
L_9e2fe0: /* 9e2fe0: mov ecx, 0xb7e2bc */
  ecx = 0xb7e2bcu;
/* 9e2fe5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3000(void) {
  LOAD_REGS();
L_9e3000: /* 9e3000: mov ecx, 0xb7e2c0 */
  ecx = 0xb7e2c0u;
/* 9e3005: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3020(void) {
  LOAD_REGS();
L_9e3020: /* 9e3020: mov ecx, 0xb7e2c4 */
  ecx = 0xb7e2c4u;
/* 9e3025: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3040(void) {
  LOAD_REGS();
L_9e3040: /* 9e3040: mov ecx, 0xb7e2c8 */
  ecx = 0xb7e2c8u;
/* 9e3045: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3060(void) {
  LOAD_REGS();
L_9e3060: /* 9e3060: mov ecx, 0xb7e2cc */
  ecx = 0xb7e2ccu;
/* 9e3065: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3080(void) {
  LOAD_REGS();
L_9e3080: /* 9e3080: mov ecx, 0xb7e2d0 */
  ecx = 0xb7e2d0u;
/* 9e3085: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e30a0(void) {
  LOAD_REGS();
L_9e30a0: /* 9e30a0: mov ecx, 0xb7e2d4 */
  ecx = 0xb7e2d4u;
/* 9e30a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e30c0(void) {
  LOAD_REGS();
L_9e30c0: /* 9e30c0: mov ecx, 0xb7e2d8 */
  ecx = 0xb7e2d8u;
/* 9e30c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e30e0(void) {
  LOAD_REGS();
L_9e30e0: /* 9e30e0: mov ecx, 0xb7e2dc */
  ecx = 0xb7e2dcu;
/* 9e30e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3100(void) {
  LOAD_REGS();
L_9e3100: /* 9e3100: mov ecx, 0xb7e2e0 */
  ecx = 0xb7e2e0u;
/* 9e3105: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3120(void) {
  LOAD_REGS();
L_9e3120: /* 9e3120: mov ecx, 0xb7e2e4 */
  ecx = 0xb7e2e4u;
/* 9e3125: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3140(void) {
  LOAD_REGS();
L_9e3140: /* 9e3140: mov ecx, 0xb7e2e8 */
  ecx = 0xb7e2e8u;
/* 9e3145: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3160(void) {
  LOAD_REGS();
L_9e3160: /* 9e3160: mov ecx, 0xb7e2ec */
  ecx = 0xb7e2ecu;
/* 9e3165: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3180(void) {
  LOAD_REGS();
L_9e3180: /* 9e3180: mov ecx, 0xb7e2f0 */
  ecx = 0xb7e2f0u;
/* 9e3185: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e31a0(void) {
  LOAD_REGS();
L_9e31a0: /* 9e31a0: mov ecx, 0xb7e2f4 */
  ecx = 0xb7e2f4u;
/* 9e31a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e31c0(void) {
  LOAD_REGS();
L_9e31c0: /* 9e31c0: mov ecx, 0xb7e2f8 */
  ecx = 0xb7e2f8u;
/* 9e31c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e31e0(void) {
  LOAD_REGS();
L_9e31e0: /* 9e31e0: mov ecx, 0xb7e2fc */
  ecx = 0xb7e2fcu;
/* 9e31e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3200(void) {
  LOAD_REGS();
L_9e3200: /* 9e3200: mov ecx, 0xb7e300 */
  ecx = 0xb7e300u;
/* 9e3205: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3220(void) {
  LOAD_REGS();
L_9e3220: /* 9e3220: mov ecx, 0xb7e304 */
  ecx = 0xb7e304u;
/* 9e3225: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3240(void) {
  LOAD_REGS();
L_9e3240: /* 9e3240: mov ecx, 0xb7e308 */
  ecx = 0xb7e308u;
/* 9e3245: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3260(void) {
  LOAD_REGS();
L_9e3260: /* 9e3260: mov ecx, 0xb7e30c */
  ecx = 0xb7e30cu;
/* 9e3265: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3280(void) {
  LOAD_REGS();
L_9e3280: /* 9e3280: mov ecx, 0xb7e310 */
  ecx = 0xb7e310u;
/* 9e3285: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e32a0(void) {
  LOAD_REGS();
L_9e32a0: /* 9e32a0: mov ecx, 0xb7e314 */
  ecx = 0xb7e314u;
/* 9e32a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e32c0(void) {
  LOAD_REGS();
L_9e32c0: /* 9e32c0: mov ecx, 0xb7e318 */
  ecx = 0xb7e318u;
/* 9e32c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e32e0(void) {
  LOAD_REGS();
L_9e32e0: /* 9e32e0: mov ecx, 0xb7e31c */
  ecx = 0xb7e31cu;
/* 9e32e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3300(void) {
  LOAD_REGS();
L_9e3300: /* 9e3300: mov ecx, 0xb7e320 */
  ecx = 0xb7e320u;
/* 9e3305: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3320(void) {
  LOAD_REGS();
L_9e3320: /* 9e3320: mov ecx, 0xb7e324 */
  ecx = 0xb7e324u;
/* 9e3325: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3340(void) {
  LOAD_REGS();
L_9e3340: /* 9e3340: mov ecx, 0xb7e328 */
  ecx = 0xb7e328u;
/* 9e3345: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3360(void) {
  LOAD_REGS();
L_9e3360: /* 9e3360: mov ecx, 0xb7e32c */
  ecx = 0xb7e32cu;
/* 9e3365: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3380(void) {
  LOAD_REGS();
L_9e3380: /* 9e3380: mov ecx, 0xb7e330 */
  ecx = 0xb7e330u;
/* 9e3385: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e33a0(void) {
  LOAD_REGS();
L_9e33a0: /* 9e33a0: mov ecx, 0xb7e334 */
  ecx = 0xb7e334u;
/* 9e33a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e33c0(void) {
  LOAD_REGS();
L_9e33c0: /* 9e33c0: mov ecx, 0xb7e338 */
  ecx = 0xb7e338u;
/* 9e33c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e33e0(void) {
  LOAD_REGS();
L_9e33e0: /* 9e33e0: mov ecx, 0xb7e33c */
  ecx = 0xb7e33cu;
/* 9e33e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3400(void) {
  LOAD_REGS();
L_9e3400: /* 9e3400: mov ecx, 0xb7e340 */
  ecx = 0xb7e340u;
/* 9e3405: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3420(void) {
  LOAD_REGS();
L_9e3420: /* 9e3420: mov ecx, 0xb7e344 */
  ecx = 0xb7e344u;
/* 9e3425: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3440(void) {
  LOAD_REGS();
L_9e3440: /* 9e3440: mov ecx, 0xb7e348 */
  ecx = 0xb7e348u;
/* 9e3445: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3460(void) {
  LOAD_REGS();
L_9e3460: /* 9e3460: mov ecx, 0xb7e34c */
  ecx = 0xb7e34cu;
/* 9e3465: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3480(void) {
  LOAD_REGS();
L_9e3480: /* 9e3480: mov ecx, 0xb7e350 */
  ecx = 0xb7e350u;
/* 9e3485: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e34a0(void) {
  LOAD_REGS();
L_9e34a0: /* 9e34a0: mov ecx, 0xb7e354 */
  ecx = 0xb7e354u;
/* 9e34a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e34c0(void) {
  LOAD_REGS();
L_9e34c0: /* 9e34c0: mov ecx, 0xb7e358 */
  ecx = 0xb7e358u;
/* 9e34c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e34e0(void) {
  LOAD_REGS();
L_9e34e0: /* 9e34e0: mov ecx, 0xb7e35c */
  ecx = 0xb7e35cu;
/* 9e34e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3500(void) {
  LOAD_REGS();
L_9e3500: /* 9e3500: mov ecx, 0xb7e360 */
  ecx = 0xb7e360u;
/* 9e3505: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3520(void) {
  LOAD_REGS();
L_9e3520: /* 9e3520: mov ecx, 0xb7e364 */
  ecx = 0xb7e364u;
/* 9e3525: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3540(void) {
  LOAD_REGS();
L_9e3540: /* 9e3540: mov ecx, 0xb7e368 */
  ecx = 0xb7e368u;
/* 9e3545: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3560(void) {
  LOAD_REGS();
L_9e3560: /* 9e3560: mov ecx, 0xb7e36c */
  ecx = 0xb7e36cu;
/* 9e3565: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3580(void) {
  LOAD_REGS();
L_9e3580: /* 9e3580: mov ecx, 0xb7e370 */
  ecx = 0xb7e370u;
/* 9e3585: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e35a0(void) {
  LOAD_REGS();
L_9e35a0: /* 9e35a0: mov ecx, 0xb7e374 */
  ecx = 0xb7e374u;
/* 9e35a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e35c0(void) {
  LOAD_REGS();
L_9e35c0: /* 9e35c0: mov ecx, 0xb7e378 */
  ecx = 0xb7e378u;
/* 9e35c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e35e0(void) {
  LOAD_REGS();
L_9e35e0: /* 9e35e0: mov ecx, 0xb7e37c */
  ecx = 0xb7e37cu;
/* 9e35e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3600(void) {
  LOAD_REGS();
L_9e3600: /* 9e3600: mov ecx, 0xb7e380 */
  ecx = 0xb7e380u;
/* 9e3605: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3620(void) {
  LOAD_REGS();
L_9e3620: /* 9e3620: mov ecx, 0xb7e384 */
  ecx = 0xb7e384u;
/* 9e3625: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3640(void) {
  LOAD_REGS();
L_9e3640: /* 9e3640: mov ecx, 0xb7e388 */
  ecx = 0xb7e388u;
/* 9e3645: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3660(void) {
  LOAD_REGS();
L_9e3660: /* 9e3660: mov ecx, 0xb7e38c */
  ecx = 0xb7e38cu;
/* 9e3665: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3680(void) {
  LOAD_REGS();
L_9e3680: /* 9e3680: mov ecx, 0xb7e390 */
  ecx = 0xb7e390u;
/* 9e3685: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e36a0(void) {
  LOAD_REGS();
L_9e36a0: /* 9e36a0: mov ecx, 0xb7e394 */
  ecx = 0xb7e394u;
/* 9e36a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e36c0(void) {
  LOAD_REGS();
L_9e36c0: /* 9e36c0: mov ecx, 0xb7e398 */
  ecx = 0xb7e398u;
/* 9e36c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e36e0(void) {
  LOAD_REGS();
L_9e36e0: /* 9e36e0: mov ecx, 0xb7e39c */
  ecx = 0xb7e39cu;
/* 9e36e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3700(void) {
  LOAD_REGS();
L_9e3700: /* 9e3700: mov ecx, 0xb7e3a0 */
  ecx = 0xb7e3a0u;
/* 9e3705: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3720(void) {
  LOAD_REGS();
L_9e3720: /* 9e3720: mov ecx, 0xb7e3a4 */
  ecx = 0xb7e3a4u;
/* 9e3725: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3740(void) {
  LOAD_REGS();
L_9e3740: /* 9e3740: mov ecx, 0xb7e3a8 */
  ecx = 0xb7e3a8u;
/* 9e3745: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3760(void) {
  LOAD_REGS();
L_9e3760: /* 9e3760: mov ecx, 0xb7e3ac */
  ecx = 0xb7e3acu;
/* 9e3765: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3780(void) {
  LOAD_REGS();
L_9e3780: /* 9e3780: mov ecx, 0xb7e3b0 */
  ecx = 0xb7e3b0u;
/* 9e3785: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e37a0(void) {
  LOAD_REGS();
L_9e37a0: /* 9e37a0: mov ecx, 0xb7e3b4 */
  ecx = 0xb7e3b4u;
/* 9e37a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e37c0(void) {
  LOAD_REGS();
L_9e37c0: /* 9e37c0: mov ecx, 0xb7e3b8 */
  ecx = 0xb7e3b8u;
/* 9e37c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e37e0(void) {
  LOAD_REGS();
L_9e37e0: /* 9e37e0: mov ecx, 0xb7e3bc */
  ecx = 0xb7e3bcu;
/* 9e37e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3800(void) {
  LOAD_REGS();
L_9e3800: /* 9e3800: mov ecx, 0xb7e3c0 */
  ecx = 0xb7e3c0u;
/* 9e3805: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3820(void) {
  LOAD_REGS();
L_9e3820: /* 9e3820: mov ecx, 0xb7e3c4 */
  ecx = 0xb7e3c4u;
/* 9e3825: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3840(void) {
  LOAD_REGS();
L_9e3840: /* 9e3840: mov ecx, 0xb7e3c8 */
  ecx = 0xb7e3c8u;
/* 9e3845: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3860(void) {
  LOAD_REGS();
L_9e3860: /* 9e3860: mov ecx, 0xb7e3cc */
  ecx = 0xb7e3ccu;
/* 9e3865: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3880(void) {
  LOAD_REGS();
L_9e3880: /* 9e3880: mov ecx, 0xb7e3d0 */
  ecx = 0xb7e3d0u;
/* 9e3885: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e38a0(void) {
  LOAD_REGS();
L_9e38a0: /* 9e38a0: mov ecx, 0xb7e3d4 */
  ecx = 0xb7e3d4u;
/* 9e38a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e38c0(void) {
  LOAD_REGS();
L_9e38c0: /* 9e38c0: mov ecx, 0xb7e3d8 */
  ecx = 0xb7e3d8u;
/* 9e38c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e38e0(void) {
  LOAD_REGS();
L_9e38e0: /* 9e38e0: mov ecx, 0xb7e3dc */
  ecx = 0xb7e3dcu;
/* 9e38e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3900(void) {
  LOAD_REGS();
L_9e3900: /* 9e3900: mov ecx, 0xb7e3e0 */
  ecx = 0xb7e3e0u;
/* 9e3905: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3920(void) {
  LOAD_REGS();
L_9e3920: /* 9e3920: mov ecx, 0xb7e3e4 */
  ecx = 0xb7e3e4u;
/* 9e3925: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3940(void) {
  LOAD_REGS();
L_9e3940: /* 9e3940: mov ecx, 0xb7e3e8 */
  ecx = 0xb7e3e8u;
/* 9e3945: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3960(void) {
  LOAD_REGS();
L_9e3960: /* 9e3960: mov ecx, 0xb7e3ec */
  ecx = 0xb7e3ecu;
/* 9e3965: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3980(void) {
  LOAD_REGS();
L_9e3980: /* 9e3980: mov ecx, 0xb7e3f0 */
  ecx = 0xb7e3f0u;
/* 9e3985: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e39a0(void) {
  LOAD_REGS();
L_9e39a0: /* 9e39a0: mov ecx, 0xb7e3f4 */
  ecx = 0xb7e3f4u;
/* 9e39a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e39c0(void) {
  LOAD_REGS();
L_9e39c0: /* 9e39c0: mov ecx, 0xb7e3f8 */
  ecx = 0xb7e3f8u;
/* 9e39c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e39e0(void) {
  LOAD_REGS();
L_9e39e0: /* 9e39e0: mov ecx, 0xb7e3fc */
  ecx = 0xb7e3fcu;
/* 9e39e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3a00(void) {
  LOAD_REGS();
L_9e3a00: /* 9e3a00: mov ecx, 0xb7e400 */
  ecx = 0xb7e400u;
/* 9e3a05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3a20(void) {
  LOAD_REGS();
L_9e3a20: /* 9e3a20: mov ecx, 0xb7e404 */
  ecx = 0xb7e404u;
/* 9e3a25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3a40(void) {
  LOAD_REGS();
L_9e3a40: /* 9e3a40: mov ecx, 0xb7e408 */
  ecx = 0xb7e408u;
/* 9e3a45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3a60(void) {
  LOAD_REGS();
L_9e3a60: /* 9e3a60: mov ecx, 0xb7e40c */
  ecx = 0xb7e40cu;
/* 9e3a65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3a80(void) {
  LOAD_REGS();
L_9e3a80: /* 9e3a80: mov ecx, 0xb7e410 */
  ecx = 0xb7e410u;
/* 9e3a85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3aa0(void) {
  LOAD_REGS();
L_9e3aa0: /* 9e3aa0: mov ecx, 0xb7e414 */
  ecx = 0xb7e414u;
/* 9e3aa5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ac0(void) {
  LOAD_REGS();
L_9e3ac0: /* 9e3ac0: mov ecx, 0xb7e418 */
  ecx = 0xb7e418u;
/* 9e3ac5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ae0(void) {
  LOAD_REGS();
L_9e3ae0: /* 9e3ae0: mov ecx, 0xb7e41c */
  ecx = 0xb7e41cu;
/* 9e3ae5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3b00(void) {
  LOAD_REGS();
L_9e3b00: /* 9e3b00: mov ecx, 0xb7e420 */
  ecx = 0xb7e420u;
/* 9e3b05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3b20(void) {
  LOAD_REGS();
L_9e3b20: /* 9e3b20: mov ecx, 0xb7e424 */
  ecx = 0xb7e424u;
/* 9e3b25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3b40(void) {
  LOAD_REGS();
L_9e3b40: /* 9e3b40: mov ecx, 0xb7e428 */
  ecx = 0xb7e428u;
/* 9e3b45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3b60(void) {
  LOAD_REGS();
L_9e3b60: /* 9e3b60: mov ecx, 0xb7e42c */
  ecx = 0xb7e42cu;
/* 9e3b65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3b80(void) {
  LOAD_REGS();
L_9e3b80: /* 9e3b80: mov ecx, 0xb7e430 */
  ecx = 0xb7e430u;
/* 9e3b85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ba0(void) {
  LOAD_REGS();
L_9e3ba0: /* 9e3ba0: mov ecx, 0xb7e434 */
  ecx = 0xb7e434u;
/* 9e3ba5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3bc0(void) {
  LOAD_REGS();
L_9e3bc0: /* 9e3bc0: mov ecx, 0xb7e438 */
  ecx = 0xb7e438u;
/* 9e3bc5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3be0(void) {
  LOAD_REGS();
L_9e3be0: /* 9e3be0: mov ecx, 0xb7e43c */
  ecx = 0xb7e43cu;
/* 9e3be5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3c00(void) {
  LOAD_REGS();
L_9e3c00: /* 9e3c00: mov ecx, 0xb7e440 */
  ecx = 0xb7e440u;
/* 9e3c05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3c20(void) {
  LOAD_REGS();
L_9e3c20: /* 9e3c20: mov ecx, 0xb7e444 */
  ecx = 0xb7e444u;
/* 9e3c25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3c40(void) {
  LOAD_REGS();
L_9e3c40: /* 9e3c40: mov ecx, 0xb7e448 */
  ecx = 0xb7e448u;
/* 9e3c45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3c60(void) {
  LOAD_REGS();
L_9e3c60: /* 9e3c60: mov ecx, 0xb7e44c */
  ecx = 0xb7e44cu;
/* 9e3c65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3c80(void) {
  LOAD_REGS();
L_9e3c80: /* 9e3c80: mov ecx, 0xb7e450 */
  ecx = 0xb7e450u;
/* 9e3c85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ca0(void) {
  LOAD_REGS();
L_9e3ca0: /* 9e3ca0: mov ecx, 0xb7e454 */
  ecx = 0xb7e454u;
/* 9e3ca5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3cc0(void) {
  LOAD_REGS();
L_9e3cc0: /* 9e3cc0: mov ecx, 0xb7e458 */
  ecx = 0xb7e458u;
/* 9e3cc5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ce0(void) {
  LOAD_REGS();
L_9e3ce0: /* 9e3ce0: mov ecx, 0xb7e45c */
  ecx = 0xb7e45cu;
/* 9e3ce5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3d00(void) {
  LOAD_REGS();
L_9e3d00: /* 9e3d00: mov ecx, 0xb7e460 */
  ecx = 0xb7e460u;
/* 9e3d05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3d20(void) {
  LOAD_REGS();
L_9e3d20: /* 9e3d20: mov ecx, 0xb7e464 */
  ecx = 0xb7e464u;
/* 9e3d25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3d40(void) {
  LOAD_REGS();
L_9e3d40: /* 9e3d40: mov ecx, 0xb7e468 */
  ecx = 0xb7e468u;
/* 9e3d45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3d60(void) {
  LOAD_REGS();
L_9e3d60: /* 9e3d60: mov ecx, 0xb7e46c */
  ecx = 0xb7e46cu;
/* 9e3d65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3d80(void) {
  LOAD_REGS();
L_9e3d80: /* 9e3d80: mov ecx, 0xb7e470 */
  ecx = 0xb7e470u;
/* 9e3d85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3da0(void) {
  LOAD_REGS();
L_9e3da0: /* 9e3da0: mov ecx, 0xb7e474 */
  ecx = 0xb7e474u;
/* 9e3da5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3dc0(void) {
  LOAD_REGS();
L_9e3dc0: /* 9e3dc0: mov ecx, 0xb7e478 */
  ecx = 0xb7e478u;
/* 9e3dc5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3de0(void) {
  LOAD_REGS();
L_9e3de0: /* 9e3de0: mov ecx, 0xb7e47c */
  ecx = 0xb7e47cu;
/* 9e3de5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3e00(void) {
  LOAD_REGS();
L_9e3e00: /* 9e3e00: mov ecx, 0xb7e480 */
  ecx = 0xb7e480u;
/* 9e3e05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3e20(void) {
  LOAD_REGS();
L_9e3e20: /* 9e3e20: mov ecx, 0xb7e484 */
  ecx = 0xb7e484u;
/* 9e3e25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3e40(void) {
  LOAD_REGS();
L_9e3e40: /* 9e3e40: mov ecx, 0xb7e488 */
  ecx = 0xb7e488u;
/* 9e3e45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3e60(void) {
  LOAD_REGS();
L_9e3e60: /* 9e3e60: mov ecx, 0xb7e48c */
  ecx = 0xb7e48cu;
/* 9e3e65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3e80(void) {
  LOAD_REGS();
L_9e3e80: /* 9e3e80: mov ecx, 0xb7e490 */
  ecx = 0xb7e490u;
/* 9e3e85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ea0(void) {
  LOAD_REGS();
L_9e3ea0: /* 9e3ea0: mov ecx, 0xb7e494 */
  ecx = 0xb7e494u;
/* 9e3ea5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ec0(void) {
  LOAD_REGS();
L_9e3ec0: /* 9e3ec0: mov ecx, 0xb7e498 */
  ecx = 0xb7e498u;
/* 9e3ec5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3ee0(void) {
  LOAD_REGS();
L_9e3ee0: /* 9e3ee0: mov ecx, 0xb7e49c */
  ecx = 0xb7e49cu;
/* 9e3ee5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3f00(void) {
  LOAD_REGS();
L_9e3f00: /* 9e3f00: mov ecx, 0xb7e4a0 */
  ecx = 0xb7e4a0u;
/* 9e3f05: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3f20(void) {
  LOAD_REGS();
L_9e3f20: /* 9e3f20: mov ecx, 0xb7e4a4 */
  ecx = 0xb7e4a4u;
/* 9e3f25: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3f40(void) {
  LOAD_REGS();
L_9e3f40: /* 9e3f40: mov ecx, 0xb7e4a8 */
  ecx = 0xb7e4a8u;
/* 9e3f45: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3f60(void) {
  LOAD_REGS();
L_9e3f60: /* 9e3f60: mov ecx, 0xb7e4ac */
  ecx = 0xb7e4acu;
/* 9e3f65: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3f80(void) {
  LOAD_REGS();
L_9e3f80: /* 9e3f80: mov ecx, 0xb7e4b0 */
  ecx = 0xb7e4b0u;
/* 9e3f85: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3fa0(void) {
  LOAD_REGS();
L_9e3fa0: /* 9e3fa0: mov ecx, 0xb7e4b4 */
  ecx = 0xb7e4b4u;
/* 9e3fa5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3fc0(void) {
  LOAD_REGS();
L_9e3fc0: /* 9e3fc0: mov ecx, 0xb7e4b8 */
  ecx = 0xb7e4b8u;
/* 9e3fc5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e3fe0(void) {
  LOAD_REGS();
L_9e3fe0: /* 9e3fe0: mov ecx, 0xb7e4bc */
  ecx = 0xb7e4bcu;
/* 9e3fe5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4000(void) {
  LOAD_REGS();
L_9e4000: /* 9e4000: mov ecx, 0xb7e4c0 */
  ecx = 0xb7e4c0u;
/* 9e4005: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4020(void) {
  LOAD_REGS();
L_9e4020: /* 9e4020: mov ecx, 0xb7e4c4 */
  ecx = 0xb7e4c4u;
/* 9e4025: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4040(void) {
  LOAD_REGS();
L_9e4040: /* 9e4040: mov ecx, 0xb7e4c8 */
  ecx = 0xb7e4c8u;
/* 9e4045: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4060(void) {
  LOAD_REGS();
L_9e4060: /* 9e4060: mov ecx, 0xb7e4cc */
  ecx = 0xb7e4ccu;
/* 9e4065: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4080(void) {
  LOAD_REGS();
L_9e4080: /* 9e4080: mov ecx, 0xb7e4d0 */
  ecx = 0xb7e4d0u;
/* 9e4085: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e40a0(void) {
  LOAD_REGS();
L_9e40a0: /* 9e40a0: mov ecx, 0xb7e4d4 */
  ecx = 0xb7e4d4u;
/* 9e40a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e40c0(void) {
  LOAD_REGS();
L_9e40c0: /* 9e40c0: mov ecx, 0xb7e4d8 */
  ecx = 0xb7e4d8u;
/* 9e40c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e40e0(void) {
  LOAD_REGS();
L_9e40e0: /* 9e40e0: mov ecx, 0xb7e4dc */
  ecx = 0xb7e4dcu;
/* 9e40e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4100(void) {
  LOAD_REGS();
L_9e4100: /* 9e4100: mov ecx, 0xb7e4e0 */
  ecx = 0xb7e4e0u;
/* 9e4105: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4120(void) {
  LOAD_REGS();
L_9e4120: /* 9e4120: mov ecx, 0xb7e4e4 */
  ecx = 0xb7e4e4u;
/* 9e4125: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4140(void) {
  LOAD_REGS();
L_9e4140: /* 9e4140: mov ecx, 0xb7e4e8 */
  ecx = 0xb7e4e8u;
/* 9e4145: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4160(void) {
  LOAD_REGS();
L_9e4160: /* 9e4160: mov ecx, 0xb7e4ec */
  ecx = 0xb7e4ecu;
/* 9e4165: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4180(void) {
  LOAD_REGS();
L_9e4180: /* 9e4180: mov ecx, 0xb7e4f0 */
  ecx = 0xb7e4f0u;
/* 9e4185: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e41a0(void) {
  LOAD_REGS();
L_9e41a0: /* 9e41a0: mov ecx, 0xb7e4f4 */
  ecx = 0xb7e4f4u;
/* 9e41a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e41c0(void) {
  LOAD_REGS();
L_9e41c0: /* 9e41c0: mov ecx, 0xb7e4f8 */
  ecx = 0xb7e4f8u;
/* 9e41c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e41e0(void) {
  LOAD_REGS();
L_9e41e0: /* 9e41e0: mov ecx, 0xb7e4fc */
  ecx = 0xb7e4fcu;
/* 9e41e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4200(void) {
  LOAD_REGS();
L_9e4200: /* 9e4200: mov ecx, 0xb7e500 */
  ecx = 0xb7e500u;
/* 9e4205: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4220(void) {
  LOAD_REGS();
L_9e4220: /* 9e4220: mov ecx, 0xb7e504 */
  ecx = 0xb7e504u;
/* 9e4225: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4240(void) {
  LOAD_REGS();
L_9e4240: /* 9e4240: mov ecx, 0xb7e508 */
  ecx = 0xb7e508u;
/* 9e4245: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4260(void) {
  LOAD_REGS();
L_9e4260: /* 9e4260: mov ecx, 0xb7e50c */
  ecx = 0xb7e50cu;
/* 9e4265: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4280(void) {
  LOAD_REGS();
L_9e4280: /* 9e4280: mov ecx, 0xb7e510 */
  ecx = 0xb7e510u;
/* 9e4285: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e42a0(void) {
  LOAD_REGS();
L_9e42a0: /* 9e42a0: mov ecx, 0xb7e514 */
  ecx = 0xb7e514u;
/* 9e42a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e42c0(void) {
  LOAD_REGS();
L_9e42c0: /* 9e42c0: mov ecx, 0xb7e518 */
  ecx = 0xb7e518u;
/* 9e42c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e42e0(void) {
  LOAD_REGS();
L_9e42e0: /* 9e42e0: mov ecx, 0xb7e51c */
  ecx = 0xb7e51cu;
/* 9e42e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4300(void) {
  LOAD_REGS();
L_9e4300: /* 9e4300: mov ecx, 0xb7e520 */
  ecx = 0xb7e520u;
/* 9e4305: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4320(void) {
  LOAD_REGS();
L_9e4320: /* 9e4320: mov ecx, 0xb7e524 */
  ecx = 0xb7e524u;
/* 9e4325: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4340(void) {
  LOAD_REGS();
L_9e4340: /* 9e4340: mov ecx, 0xb7e528 */
  ecx = 0xb7e528u;
/* 9e4345: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4360(void) {
  LOAD_REGS();
L_9e4360: /* 9e4360: mov ecx, 0xb7e52c */
  ecx = 0xb7e52cu;
/* 9e4365: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4380(void) {
  LOAD_REGS();
L_9e4380: /* 9e4380: mov ecx, 0xb7e530 */
  ecx = 0xb7e530u;
/* 9e4385: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e43a0(void) {
  LOAD_REGS();
L_9e43a0: /* 9e43a0: mov ecx, 0xb7e534 */
  ecx = 0xb7e534u;
/* 9e43a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e43c0(void) {
  LOAD_REGS();
L_9e43c0: /* 9e43c0: mov ecx, 0xb7e538 */
  ecx = 0xb7e538u;
/* 9e43c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e43e0(void) {
  LOAD_REGS();
L_9e43e0: /* 9e43e0: mov ecx, 0xb7e53c */
  ecx = 0xb7e53cu;
/* 9e43e5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4400(void) {
  LOAD_REGS();
L_9e4400: /* 9e4400: mov ecx, 0xb7e540 */
  ecx = 0xb7e540u;
/* 9e4405: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4420(void) {
  LOAD_REGS();
L_9e4420: /* 9e4420: mov ecx, 0xb7e544 */
  ecx = 0xb7e544u;
/* 9e4425: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4440(void) {
  LOAD_REGS();
L_9e4440: /* 9e4440: mov ecx, 0xb7e548 */
  ecx = 0xb7e548u;
/* 9e4445: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4460(void) {
  LOAD_REGS();
L_9e4460: /* 9e4460: mov ecx, 0xb7e54c */
  ecx = 0xb7e54cu;
/* 9e4465: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e4480(void) {
  LOAD_REGS();
L_9e4480: /* 9e4480: mov ecx, 0xb7e550 */
  ecx = 0xb7e550u;
/* 9e4485: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e44a0(void) {
  LOAD_REGS();
L_9e44a0: /* 9e44a0: mov ecx, 0xb7e554 */
  ecx = 0xb7e554u;
/* 9e44a5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e44c0(void) {
  LOAD_REGS();
L_9e44c0: /* 9e44c0: mov ecx, 0xb7e558 */
  ecx = 0xb7e558u;
/* 9e44c5: jmp dword ptr [0xcfa1dc] */
  SPILL(); f_4e26bc(); return; /* Core!??0FName@@QAE@XZ */
}

void f_9e44e0(void) {
  LOAD_REGS();
L_9e44e0: /* 9e44e0: push 0xacfcdc */
  { uint32_t v = 0xacfcdcu; esp -= 4; W32(esp, v); }
/* 9e44e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e44e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e44edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e44ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e44f0: mov byte ptr [0xb7e55c], al */
  W8((uint32_t)(0xb7e55cu), (eax & 0xffu));
/* 9e44f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4510(void) {
  LOAD_REGS();
L_9e4510: /* 9e4510: push 0xacfce0 */
  { uint32_t v = 0xacfce0u; esp -= 4; W32(esp, v); }
/* 9e4515: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4517: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e451du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e451d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4520: mov byte ptr [0xb7e55d], al */
  W8((uint32_t)(0xb7e55du), (eax & 0xffu));
/* 9e4525: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4540(void) {
  LOAD_REGS();
L_9e4540: /* 9e4540: push 0xacfce4 */
  { uint32_t v = 0xacfce4u; esp -= 4; W32(esp, v); }
/* 9e4545: push 0x228 */
  { uint32_t v = 0x228u; esp -= 4; W32(esp, v); }
/* 9e454a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4550u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4550: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4553: mov byte ptr [0xb7e55e], al */
  W8((uint32_t)(0xb7e55eu), (eax & 0xffu));
/* 9e4558: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4570(void) {
  LOAD_REGS();
L_9e4570: /* 9e4570: push 0xacfce8 */
  { uint32_t v = 0xacfce8u; esp -= 4; W32(esp, v); }
/* 9e4575: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 9e457a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4580u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4580: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4583: mov byte ptr [0xb7e55f], al */
  W8((uint32_t)(0xb7e55fu), (eax & 0xffu));
/* 9e4588: ret  */
  esp += 4; SPILL(); return;
}

void f_9e45a0(void) {
  LOAD_REGS();
L_9e45a0: /* 9e45a0: push 0xacfcec */
  { uint32_t v = 0xacfcecu; esp -= 4; W32(esp, v); }
/* 9e45a5: push 0x226 */
  { uint32_t v = 0x226u; esp -= 4; W32(esp, v); }
/* 9e45aa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e45b0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e45b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e45b3: mov byte ptr [0xb7e560], al */
  W8((uint32_t)(0xb7e560u), (eax & 0xffu));
/* 9e45b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e45d0(void) {
  LOAD_REGS();
L_9e45d0: /* 9e45d0: push 0xacfcf0 */
  { uint32_t v = 0xacfcf0u; esp -= 4; W32(esp, v); }
/* 9e45d5: push 0x225 */
  { uint32_t v = 0x225u; esp -= 4; W32(esp, v); }
/* 9e45da: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e45e0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e45e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e45e3: mov byte ptr [0xb7e561], al */
  W8((uint32_t)(0xb7e561u), (eax & 0xffu));
/* 9e45e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4600(void) {
  LOAD_REGS();
L_9e4600: /* 9e4600: push 0xacfcf4 */
  { uint32_t v = 0xacfcf4u; esp -= 4; W32(esp, v); }
/* 9e4605: push 0x141 */
  { uint32_t v = 0x141u; esp -= 4; W32(esp, v); }
/* 9e460a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4610u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4613: mov byte ptr [0xb7e562], al */
  W8((uint32_t)(0xb7e562u), (eax & 0xffu));
/* 9e4618: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4630(void) {
  LOAD_REGS();
L_9e4630: /* 9e4630: push 0xacfcf8 */
  { uint32_t v = 0xacfcf8u; esp -= 4; W32(esp, v); }
/* 9e4635: push 0x138 */
  { uint32_t v = 0x138u; esp -= 4; W32(esp, v); }
/* 9e463a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4640u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4640: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4643: mov byte ptr [0xb7e563], al */
  W8((uint32_t)(0xb7e563u), (eax & 0xffu));
/* 9e4648: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4660(void) {
  LOAD_REGS();
L_9e4660: /* 9e4660: push 0xacfcfc */
  { uint32_t v = 0xacfcfcu; esp -= 4; W32(esp, v); }
/* 9e4665: push 0x137 */
  { uint32_t v = 0x137u; esp -= 4; W32(esp, v); }
/* 9e466a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4670u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4670: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4673: mov byte ptr [0xb7e564], al */
  W8((uint32_t)(0xb7e564u), (eax & 0xffu));
/* 9e4678: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4690(void) {
  LOAD_REGS();
L_9e4690: /* 9e4690: push 0xacfd00 */
  { uint32_t v = 0xacfd00u; esp -= 4; W32(esp, v); }
/* 9e4695: push 0x136 */
  { uint32_t v = 0x136u; esp -= 4; W32(esp, v); }
/* 9e469a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e46a0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e46a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e46a3: mov byte ptr [0xb7e565], al */
  W8((uint32_t)(0xb7e565u), (eax & 0xffu));
/* 9e46a8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e46c0(void) {
  LOAD_REGS();
L_9e46c0: /* 9e46c0: push 0xacfd04 */
  { uint32_t v = 0xacfd04u; esp -= 4; W32(esp, v); }
/* 9e46c5: push 0x135 */
  { uint32_t v = 0x135u; esp -= 4; W32(esp, v); }
/* 9e46ca: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e46d0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e46d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e46d3: mov byte ptr [0xb7e566], al */
  W8((uint32_t)(0xb7e566u), (eax & 0xffu));
/* 9e46d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e46f0(void) {
  LOAD_REGS();
L_9e46f0: /* 9e46f0: push 0xacfd08 */
  { uint32_t v = 0xacfd08u; esp -= 4; W32(esp, v); }
/* 9e46f5: push 0x133 */
  { uint32_t v = 0x133u; esp -= 4; W32(esp, v); }
/* 9e46fa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4700u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4700: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4703: mov byte ptr [0xb7e567], al */
  W8((uint32_t)(0xb7e567u), (eax & 0xffu));
/* 9e4708: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4720(void) {
  LOAD_REGS();
L_9e4720: /* 9e4720: push 0xacfd0c */
  { uint32_t v = 0xacfd0cu; esp -= 4; W32(esp, v); }
/* 9e4725: push 0x132 */
  { uint32_t v = 0x132u; esp -= 4; W32(esp, v); }
/* 9e472a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4730u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4730: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4733: mov byte ptr [0xb7e568], al */
  W8((uint32_t)(0xb7e568u), (eax & 0xffu));
/* 9e4738: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4750(void) {
  LOAD_REGS();
L_9e4750: /* 9e4750: push 0xacfd10 */
  { uint32_t v = 0xacfd10u; esp -= 4; W32(esp, v); }
/* 9e4755: push 0x131 */
  { uint32_t v = 0x131u; esp -= 4; W32(esp, v); }
/* 9e475a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4760u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4760: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4763: mov byte ptr [0xb7e569], al */
  W8((uint32_t)(0xb7e569u), (eax & 0xffu));
/* 9e4768: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4780(void) {
  LOAD_REGS();
L_9e4780: /* 9e4780: push 0xacfd14 */
  { uint32_t v = 0xacfd14u; esp -= 4; W32(esp, v); }
/* 9e4785: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 9e478a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4790u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4790: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4793: mov byte ptr [0xb7e56a], al */
  W8((uint32_t)(0xb7e56au), (eax & 0xffu));
/* 9e4798: ret  */
  esp += 4; SPILL(); return;
}

void f_9e47b0(void) {
  LOAD_REGS();
L_9e47b0: /* 9e47b0: push 0xacfd18 */
  { uint32_t v = 0xacfd18u; esp -= 4; W32(esp, v); }
/* 9e47b5: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 9e47ba: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e47c0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e47c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e47c3: mov byte ptr [0xb7e56b], al */
  W8((uint32_t)(0xb7e56bu), (eax & 0xffu));
/* 9e47c8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e47e0(void) {
  LOAD_REGS();
L_9e47e0: /* 9e47e0: push 0xacfd1c */
  { uint32_t v = 0xacfd1cu; esp -= 4; W32(esp, v); }
/* 9e47e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e47e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e47edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e47ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e47f0: mov byte ptr [0xb7e56c], al */
  W8((uint32_t)(0xb7e56cu), (eax & 0xffu));
/* 9e47f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4810(void) {
  LOAD_REGS();
L_9e4810: /* 9e4810: push 0xacfd20 */
  { uint32_t v = 0xacfd20u; esp -= 4; W32(esp, v); }
/* 9e4815: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4817: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e481du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e481d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4820: mov byte ptr [0xb7e56d], al */
  W8((uint32_t)(0xb7e56du), (eax & 0xffu));
/* 9e4825: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4840(void) {
  LOAD_REGS();
L_9e4840: /* 9e4840: push 0xacfd24 */
  { uint32_t v = 0xacfd24u; esp -= 4; W32(esp, v); }
/* 9e4845: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4847: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e484du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e484d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4850: mov byte ptr [0xb7e56e], al */
  W8((uint32_t)(0xb7e56eu), (eax & 0xffu));
/* 9e4855: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4870(void) {
  LOAD_REGS();
L_9e4870: /* 9e4870: push 0xacfd28 */
  { uint32_t v = 0xacfd28u; esp -= 4; W32(esp, v); }
/* 9e4875: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4877: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e487du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e487d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4880: mov byte ptr [0xb7e56f], al */
  W8((uint32_t)(0xb7e56fu), (eax & 0xffu));
/* 9e4885: ret  */
  esp += 4; SPILL(); return;
}

void f_9e48a0(void) {
  LOAD_REGS();
L_9e48a0: /* 9e48a0: push 0xacfd2c */
  { uint32_t v = 0xacfd2cu; esp -= 4; W32(esp, v); }
/* 9e48a5: push 0x223 */
  { uint32_t v = 0x223u; esp -= 4; W32(esp, v); }
/* 9e48aa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e48b0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e48b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e48b3: mov byte ptr [0xb7e570], al */
  W8((uint32_t)(0xb7e570u), (eax & 0xffu));
/* 9e48b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e48d0(void) {
  LOAD_REGS();
L_9e48d0: /* 9e48d0: push 0xacfd30 */
  { uint32_t v = 0xacfd30u; esp -= 4; W32(esp, v); }
/* 9e48d5: push 0x221 */
  { uint32_t v = 0x221u; esp -= 4; W32(esp, v); }
/* 9e48da: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e48e0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e48e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e48e3: mov byte ptr [0xb7e571], al */
  W8((uint32_t)(0xb7e571u), (eax & 0xffu));
/* 9e48e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4900(void) {
  LOAD_REGS();
L_9e4900: /* 9e4900: push 0xacfd34 */
  { uint32_t v = 0xacfd34u; esp -= 4; W32(esp, v); }
/* 9e4905: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 9e490a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4910u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4913: mov byte ptr [0xb7e572], al */
  W8((uint32_t)(0xb7e572u), (eax & 0xffu));
/* 9e4918: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4930(void) {
  LOAD_REGS();
L_9e4930: /* 9e4930: push 0xacfd38 */
  { uint32_t v = 0xacfd38u; esp -= 4; W32(esp, v); }
/* 9e4935: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4937: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e493du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e493d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4940: mov byte ptr [0xb7e573], al */
  W8((uint32_t)(0xb7e573u), (eax & 0xffu));
/* 9e4945: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4960(void) {
  LOAD_REGS();
L_9e4960: /* 9e4960: push 0xacfd3c */
  { uint32_t v = 0xacfd3cu; esp -= 4; W32(esp, v); }
/* 9e4965: push 0x214 */
  { uint32_t v = 0x214u; esp -= 4; W32(esp, v); }
/* 9e496a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4970u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4970: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4973: mov byte ptr [0xb7e574], al */
  W8((uint32_t)(0xb7e574u), (eax & 0xffu));
/* 9e4978: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4990(void) {
  LOAD_REGS();
L_9e4990: /* 9e4990: push 0xacfd40 */
  { uint32_t v = 0xacfd40u; esp -= 4; W32(esp, v); }
/* 9e4995: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 9e499a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e49a0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e49a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e49a3: mov byte ptr [0xb7e575], al */
  W8((uint32_t)(0xb7e575u), (eax & 0xffu));
/* 9e49a8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e49c0(void) {
  LOAD_REGS();
L_9e49c0: /* 9e49c0: push 0xacfd44 */
  { uint32_t v = 0xacfd44u; esp -= 4; W32(esp, v); }
/* 9e49c5: push 0x238 */
  { uint32_t v = 0x238u; esp -= 4; W32(esp, v); }
/* 9e49ca: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e49d0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e49d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e49d3: mov byte ptr [0xb7e576], al */
  W8((uint32_t)(0xb7e576u), (eax & 0xffu));
/* 9e49d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e49f0(void) {
  LOAD_REGS();
L_9e49f0: /* 9e49f0: push 0xacfd48 */
  { uint32_t v = 0xacfd48u; esp -= 4; W32(esp, v); }
/* 9e49f5: push 0x237 */
  { uint32_t v = 0x237u; esp -= 4; W32(esp, v); }
/* 9e49fa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4a00u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4a00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4a03: mov byte ptr [0xb7e577], al */
  W8((uint32_t)(0xb7e577u), (eax & 0xffu));
/* 9e4a08: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4a20(void) {
  LOAD_REGS();
L_9e4a20: /* 9e4a20: push 0xacfd4c */
  { uint32_t v = 0xacfd4cu; esp -= 4; W32(esp, v); }
/* 9e4a25: push 0x236 */
  { uint32_t v = 0x236u; esp -= 4; W32(esp, v); }
/* 9e4a2a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4a30u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4a30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4a33: mov byte ptr [0xb7e578], al */
  W8((uint32_t)(0xb7e578u), (eax & 0xffu));
/* 9e4a38: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4a50(void) {
  LOAD_REGS();
L_9e4a50: /* 9e4a50: push 0xacfd50 */
  { uint32_t v = 0xacfd50u; esp -= 4; W32(esp, v); }
/* 9e4a55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4a57: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4a5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4a5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4a60: mov byte ptr [0xb7e579], al */
  W8((uint32_t)(0xb7e579u), (eax & 0xffu));
/* 9e4a65: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4a80(void) {
  LOAD_REGS();
L_9e4a80: /* 9e4a80: push 0xacfd54 */
  { uint32_t v = 0xacfd54u; esp -= 4; W32(esp, v); }
/* 9e4a85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4a87: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4a8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4a8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4a90: mov byte ptr [0xb7e57a], al */
  W8((uint32_t)(0xb7e57au), (eax & 0xffu));
/* 9e4a95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ab0(void) {
  LOAD_REGS();
L_9e4ab0: /* 9e4ab0: push 0xacfd58 */
  { uint32_t v = 0xacfd58u; esp -= 4; W32(esp, v); }
/* 9e4ab5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4ab7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4abdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4abd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4ac0: mov byte ptr [0xb7e57b], al */
  W8((uint32_t)(0xb7e57bu), (eax & 0xffu));
/* 9e4ac5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ae0(void) {
  LOAD_REGS();
L_9e4ae0: /* 9e4ae0: push 0xacfd5c */
  { uint32_t v = 0xacfd5cu; esp -= 4; W32(esp, v); }
/* 9e4ae5: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 9e4aea: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4af0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4af0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4af3: mov byte ptr [0xb7e57c], al */
  W8((uint32_t)(0xb7e57cu), (eax & 0xffu));
/* 9e4af8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4b10(void) {
  LOAD_REGS();
L_9e4b10: /* 9e4b10: push 0xacfd60 */
  { uint32_t v = 0xacfd60u; esp -= 4; W32(esp, v); }
/* 9e4b15: push 0x11d */
  { uint32_t v = 0x11du; esp -= 4; W32(esp, v); }
/* 9e4b1a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4b20u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4b20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4b23: mov byte ptr [0xb7e57d], al */
  W8((uint32_t)(0xb7e57du), (eax & 0xffu));
/* 9e4b28: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4b40(void) {
  LOAD_REGS();
L_9e4b40: /* 9e4b40: push 0xacfd64 */
  { uint32_t v = 0xacfd64u; esp -= 4; W32(esp, v); }
/* 9e4b45: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 9e4b4a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4b50u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4b50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4b53: mov byte ptr [0xb7e57e], al */
  W8((uint32_t)(0xb7e57eu), (eax & 0xffu));
/* 9e4b58: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4b70(void) {
  LOAD_REGS();
L_9e4b70: /* 9e4b70: push 0xacfd68 */
  { uint32_t v = 0xacfd68u; esp -= 4; W32(esp, v); }
/* 9e4b75: push 0x117 */
  { uint32_t v = 0x117u; esp -= 4; W32(esp, v); }
/* 9e4b7a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4b80u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4b80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4b83: mov byte ptr [0xb7e57f], al */
  W8((uint32_t)(0xb7e57fu), (eax & 0xffu));
/* 9e4b88: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ba0(void) {
  LOAD_REGS();
L_9e4ba0: /* 9e4ba0: push 0xacfd6c */
  { uint32_t v = 0xacfd6cu; esp -= 4; W32(esp, v); }
/* 9e4ba5: push 0x116 */
  { uint32_t v = 0x116u; esp -= 4; W32(esp, v); }
/* 9e4baa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4bb0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4bb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4bb3: mov byte ptr [0xb7e580], al */
  W8((uint32_t)(0xb7e580u), (eax & 0xffu));
/* 9e4bb8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4bd0(void) {
  LOAD_REGS();
L_9e4bd0: /* 9e4bd0: push 0xacfd70 */
  { uint32_t v = 0xacfd70u; esp -= 4; W32(esp, v); }
/* 9e4bd5: push 0x224 */
  { uint32_t v = 0x224u; esp -= 4; W32(esp, v); }
/* 9e4bda: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4be0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4be0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4be3: mov byte ptr [0xb7e581], al */
  W8((uint32_t)(0xb7e581u), (eax & 0xffu));
/* 9e4be8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4c00(void) {
  LOAD_REGS();
L_9e4c00: /* 9e4c00: push 0xacfd74 */
  { uint32_t v = 0xacfd74u; esp -= 4; W32(esp, v); }
/* 9e4c05: push 0x115 */
  { uint32_t v = 0x115u; esp -= 4; W32(esp, v); }
/* 9e4c0a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4c10u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4c10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4c13: mov byte ptr [0xb7e582], al */
  W8((uint32_t)(0xb7e582u), (eax & 0xffu));
/* 9e4c18: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4c30(void) {
  LOAD_REGS();
L_9e4c30: /* 9e4c30: push 0xacfd78 */
  { uint32_t v = 0xacfd78u; esp -= 4; W32(esp, v); }
/* 9e4c35: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4c37: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4c3du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4c3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4c40: mov byte ptr [0xb7e583], al */
  W8((uint32_t)(0xb7e583u), (eax & 0xffu));
/* 9e4c45: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4c60(void) {
  LOAD_REGS();
L_9e4c60: /* 9e4c60: push 0xacfd7c */
  { uint32_t v = 0xacfd7cu; esp -= 4; W32(esp, v); }
/* 9e4c65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4c67: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4c6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4c6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4c70: mov byte ptr [0xb7e584], al */
  W8((uint32_t)(0xb7e584u), (eax & 0xffu));
/* 9e4c75: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4c90(void) {
  LOAD_REGS();
L_9e4c90: /* 9e4c90: push 0xacfd80 */
  { uint32_t v = 0xacfd80u; esp -= 4; W32(esp, v); }
/* 9e4c95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4c97: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4c9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4c9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4ca0: mov byte ptr [0xb7e585], al */
  W8((uint32_t)(0xb7e585u), (eax & 0xffu));
/* 9e4ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4cc0(void) {
  LOAD_REGS();
L_9e4cc0: /* 9e4cc0: push 0xacfd84 */
  { uint32_t v = 0xacfd84u; esp -= 4; W32(esp, v); }
/* 9e4cc5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4cc7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4ccdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4ccd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4cd0: mov byte ptr [0xb7e586], al */
  W8((uint32_t)(0xb7e586u), (eax & 0xffu));
/* 9e4cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4cf0(void) {
  LOAD_REGS();
L_9e4cf0: /* 9e4cf0: push 0xacfd88 */
  { uint32_t v = 0xacfd88u; esp -= 4; W32(esp, v); }
/* 9e4cf5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4cf7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4cfdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4cfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4d00: mov byte ptr [0xb7e587], al */
  W8((uint32_t)(0xb7e587u), (eax & 0xffu));
/* 9e4d05: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4d20(void) {
  LOAD_REGS();
L_9e4d20: /* 9e4d20: push 0xacfd8c */
  { uint32_t v = 0xacfd8cu; esp -= 4; W32(esp, v); }
/* 9e4d25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4d27: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4d2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4d2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4d30: mov byte ptr [0xb7e588], al */
  W8((uint32_t)(0xb7e588u), (eax & 0xffu));
/* 9e4d35: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4d50(void) {
  LOAD_REGS();
L_9e4d50: /* 9e4d50: push 0xacfd90 */
  { uint32_t v = 0xacfd90u; esp -= 4; W32(esp, v); }
/* 9e4d55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4d57: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4d5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4d5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4d60: mov byte ptr [0xb7e589], al */
  W8((uint32_t)(0xb7e589u), (eax & 0xffu));
/* 9e4d65: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4d80(void) {
  LOAD_REGS();
L_9e4d80: /* 9e4d80: push 0xacfd94 */
  { uint32_t v = 0xacfd94u; esp -= 4; W32(esp, v); }
/* 9e4d85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4d87: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4d8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4d8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4d90: mov byte ptr [0xb7e58a], al */
  W8((uint32_t)(0xb7e58au), (eax & 0xffu));
/* 9e4d95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4db0(void) {
  LOAD_REGS();
L_9e4db0: /* 9e4db0: push 0xacfd98 */
  { uint32_t v = 0xacfd98u; esp -= 4; W32(esp, v); }
/* 9e4db5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4db7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4dbdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4dbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4dc0: mov byte ptr [0xb7e58b], al */
  W8((uint32_t)(0xb7e58bu), (eax & 0xffu));
/* 9e4dc5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4de0(void) {
  LOAD_REGS();
L_9e4de0: /* 9e4de0: push 0xacfd9c */
  { uint32_t v = 0xacfd9cu; esp -= 4; W32(esp, v); }
/* 9e4de5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4de7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4dedu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4ded: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4df0: mov byte ptr [0xb7e58c], al */
  W8((uint32_t)(0xb7e58cu), (eax & 0xffu));
/* 9e4df5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4e10(void) {
  LOAD_REGS();
L_9e4e10: /* 9e4e10: push 0xacfda0 */
  { uint32_t v = 0xacfda0u; esp -= 4; W32(esp, v); }
/* 9e4e15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4e17: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4e1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4e1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4e20: mov byte ptr [0xb7e58d], al */
  W8((uint32_t)(0xb7e58du), (eax & 0xffu));
/* 9e4e25: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4e40(void) {
  LOAD_REGS();
L_9e4e40: /* 9e4e40: push 0xacfda4 */
  { uint32_t v = 0xacfda4u; esp -= 4; W32(esp, v); }
/* 9e4e45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4e47: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4e4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4e4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4e50: mov byte ptr [0xb7e58e], al */
  W8((uint32_t)(0xb7e58eu), (eax & 0xffu));
/* 9e4e55: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4e70(void) {
  LOAD_REGS();
L_9e4e70: /* 9e4e70: push 0xacfda8 */
  { uint32_t v = 0xacfda8u; esp -= 4; W32(esp, v); }
/* 9e4e75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4e77: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4e7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4e80: mov byte ptr [0xb7e58f], al */
  W8((uint32_t)(0xb7e58fu), (eax & 0xffu));
/* 9e4e85: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ea0(void) {
  LOAD_REGS();
L_9e4ea0: /* 9e4ea0: push 0xacfdac */
  { uint32_t v = 0xacfdacu; esp -= 4; W32(esp, v); }
/* 9e4ea5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4ea7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4eadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4ead: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4eb0: mov byte ptr [0xb7e590], al */
  W8((uint32_t)(0xb7e590u), (eax & 0xffu));
/* 9e4eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ed0(void) {
  LOAD_REGS();
L_9e4ed0: /* 9e4ed0: push 0xacfdb0 */
  { uint32_t v = 0xacfdb0u; esp -= 4; W32(esp, v); }
/* 9e4ed5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4ed7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4eddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4edd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4ee0: mov byte ptr [0xb7e591], al */
  W8((uint32_t)(0xb7e591u), (eax & 0xffu));
/* 9e4ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4f00(void) {
  LOAD_REGS();
L_9e4f00: /* 9e4f00: push 0xacfdb4 */
  { uint32_t v = 0xacfdb4u; esp -= 4; W32(esp, v); }
/* 9e4f05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4f07: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4f0du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4f0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4f10: mov byte ptr [0xb7e592], al */
  W8((uint32_t)(0xb7e592u), (eax & 0xffu));
/* 9e4f15: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4f30(void) {
  LOAD_REGS();
L_9e4f30: /* 9e4f30: push 0xacfdb8 */
  { uint32_t v = 0xacfdb8u; esp -= 4; W32(esp, v); }
/* 9e4f35: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4f37: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4f3du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4f3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4f40: mov byte ptr [0xb7e593], al */
  W8((uint32_t)(0xb7e593u), (eax & 0xffu));
/* 9e4f45: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4f60(void) {
  LOAD_REGS();
L_9e4f60: /* 9e4f60: push 0xacfdbc */
  { uint32_t v = 0xacfdbcu; esp -= 4; W32(esp, v); }
/* 9e4f65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4f67: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4f6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4f6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4f70: mov byte ptr [0xb7e594], al */
  W8((uint32_t)(0xb7e594u), (eax & 0xffu));
/* 9e4f75: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4f90(void) {
  LOAD_REGS();
L_9e4f90: /* 9e4f90: push 0xacfdc0 */
  { uint32_t v = 0xacfdc0u; esp -= 4; W32(esp, v); }
/* 9e4f95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4f97: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4f9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4f9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4fa0: mov byte ptr [0xb7e595], al */
  W8((uint32_t)(0xb7e595u), (eax & 0xffu));
/* 9e4fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4fc0(void) {
  LOAD_REGS();
L_9e4fc0: /* 9e4fc0: push 0xacfdc4 */
  { uint32_t v = 0xacfdc4u; esp -= 4; W32(esp, v); }
/* 9e4fc5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4fc7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4fcdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4fcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e4fd0: mov byte ptr [0xb7e596], al */
  W8((uint32_t)(0xb7e596u), (eax & 0xffu));
/* 9e4fd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e4ff0(void) {
  LOAD_REGS();
L_9e4ff0: /* 9e4ff0: push 0xacfdc8 */
  { uint32_t v = 0xacfdc8u; esp -= 4; W32(esp, v); }
/* 9e4ff5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e4ff7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e4ffdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e4ffd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5000: mov byte ptr [0xb7e597], al */
  W8((uint32_t)(0xb7e597u), (eax & 0xffu));
/* 9e5005: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5020(void) {
  LOAD_REGS();
L_9e5020: /* 9e5020: push 0xacfdcc */
  { uint32_t v = 0xacfdccu; esp -= 4; W32(esp, v); }
/* 9e5025: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5027: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e502du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e502d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5030: mov byte ptr [0xb7e598], al */
  W8((uint32_t)(0xb7e598u), (eax & 0xffu));
/* 9e5035: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5050(void) {
  LOAD_REGS();
L_9e5050: /* 9e5050: push 0xacfdd0 */
  { uint32_t v = 0xacfdd0u; esp -= 4; W32(esp, v); }
/* 9e5055: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5057: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e505du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e505d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5060: mov byte ptr [0xb7e599], al */
  W8((uint32_t)(0xb7e599u), (eax & 0xffu));
/* 9e5065: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5080(void) {
  LOAD_REGS();
L_9e5080: /* 9e5080: push 0xacfdd4 */
  { uint32_t v = 0xacfdd4u; esp -= 4; W32(esp, v); }
/* 9e5085: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5087: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e508du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e508d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5090: mov byte ptr [0xb7e59a], al */
  W8((uint32_t)(0xb7e59au), (eax & 0xffu));
/* 9e5095: ret  */
  esp += 4; SPILL(); return;
}

void f_9e50b0(void) {
  LOAD_REGS();
L_9e50b0: /* 9e50b0: push 0xacfdd8 */
  { uint32_t v = 0xacfdd8u; esp -= 4; W32(esp, v); }
/* 9e50b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e50b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e50bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e50bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e50c0: mov byte ptr [0xb7e59b], al */
  W8((uint32_t)(0xb7e59bu), (eax & 0xffu));
/* 9e50c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e50e0(void) {
  LOAD_REGS();
L_9e50e0: /* 9e50e0: push 0xacfddc */
  { uint32_t v = 0xacfddcu; esp -= 4; W32(esp, v); }
/* 9e50e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e50e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e50edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e50ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e50f0: mov byte ptr [0xb7e59c], al */
  W8((uint32_t)(0xb7e59cu), (eax & 0xffu));
/* 9e50f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5110(void) {
  LOAD_REGS();
L_9e5110: /* 9e5110: push 0xacfde0 */
  { uint32_t v = 0xacfde0u; esp -= 4; W32(esp, v); }
/* 9e5115: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5117: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e511du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e511d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5120: mov byte ptr [0xb7e59d], al */
  W8((uint32_t)(0xb7e59du), (eax & 0xffu));
/* 9e5125: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5140(void) {
  LOAD_REGS();
L_9e5140: /* 9e5140: push 0xacfde4 */
  { uint32_t v = 0xacfde4u; esp -= 4; W32(esp, v); }
/* 9e5145: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5147: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e514du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e514d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5150: mov byte ptr [0xb7e59e], al */
  W8((uint32_t)(0xb7e59eu), (eax & 0xffu));
/* 9e5155: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5170(void) {
  LOAD_REGS();
L_9e5170: /* 9e5170: push 0xacfde8 */
  { uint32_t v = 0xacfde8u; esp -= 4; W32(esp, v); }
/* 9e5175: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5177: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e517du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e517d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5180: mov byte ptr [0xb7e59f], al */
  W8((uint32_t)(0xb7e59fu), (eax & 0xffu));
/* 9e5185: ret  */
  esp += 4; SPILL(); return;
}

void f_9e51a0(void) {
  LOAD_REGS();
L_9e51a0: /* 9e51a0: push 0xacfdec */
  { uint32_t v = 0xacfdecu; esp -= 4; W32(esp, v); }
/* 9e51a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e51a7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e51adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e51ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e51b0: mov byte ptr [0xb7e5a0], al */
  W8((uint32_t)(0xb7e5a0u), (eax & 0xffu));
/* 9e51b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e51d0(void) {
  LOAD_REGS();
L_9e51d0: /* 9e51d0: push 0xacfdf0 */
  { uint32_t v = 0xacfdf0u; esp -= 4; W32(esp, v); }
/* 9e51d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e51d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e51ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e51dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e51e0: mov byte ptr [0xb7e5a1], al */
  W8((uint32_t)(0xb7e5a1u), (eax & 0xffu));
/* 9e51e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5200(void) {
  LOAD_REGS();
L_9e5200: /* 9e5200: push 0xacfdf4 */
  { uint32_t v = 0xacfdf4u; esp -= 4; W32(esp, v); }
/* 9e5205: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5207: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e520du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e520d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5210: mov byte ptr [0xb7e5a2], al */
  W8((uint32_t)(0xb7e5a2u), (eax & 0xffu));
/* 9e5215: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5230(void) {
  LOAD_REGS();
L_9e5230: /* 9e5230: push 0xacfdf8 */
  { uint32_t v = 0xacfdf8u; esp -= 4; W32(esp, v); }
/* 9e5235: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5237: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e523du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e523d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5240: mov byte ptr [0xb7e5a3], al */
  W8((uint32_t)(0xb7e5a3u), (eax & 0xffu));
/* 9e5245: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5260(void) {
  LOAD_REGS();
L_9e5260: /* 9e5260: push 0xacfdfc */
  { uint32_t v = 0xacfdfcu; esp -= 4; W32(esp, v); }
/* 9e5265: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5267: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e526du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e526d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5270: mov byte ptr [0xb7e5a4], al */
  W8((uint32_t)(0xb7e5a4u), (eax & 0xffu));
/* 9e5275: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5290(void) {
  LOAD_REGS();
L_9e5290: /* 9e5290: push 0xacfe00 */
  { uint32_t v = 0xacfe00u; esp -= 4; W32(esp, v); }
/* 9e5295: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5297: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e529du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e529d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e52a0: mov byte ptr [0xb7e5a5], al */
  W8((uint32_t)(0xb7e5a5u), (eax & 0xffu));
/* 9e52a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e52c0(void) {
  LOAD_REGS();
L_9e52c0: /* 9e52c0: push 0xacfe04 */
  { uint32_t v = 0xacfe04u; esp -= 4; W32(esp, v); }
/* 9e52c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e52c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e52cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e52cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e52d0: mov byte ptr [0xb7e5a6], al */
  W8((uint32_t)(0xb7e5a6u), (eax & 0xffu));
/* 9e52d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e52f0(void) {
  LOAD_REGS();
L_9e52f0: /* 9e52f0: push 0xacfe08 */
  { uint32_t v = 0xacfe08u; esp -= 4; W32(esp, v); }
/* 9e52f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e52f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e52fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e52fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5300: mov byte ptr [0xb7e5a7], al */
  W8((uint32_t)(0xb7e5a7u), (eax & 0xffu));
/* 9e5305: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5320(void) {
  LOAD_REGS();
L_9e5320: /* 9e5320: push 0xacfe0c */
  { uint32_t v = 0xacfe0cu; esp -= 4; W32(esp, v); }
/* 9e5325: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5327: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e532du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e532d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5330: mov byte ptr [0xb7e5a8], al */
  W8((uint32_t)(0xb7e5a8u), (eax & 0xffu));
/* 9e5335: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5350(void) {
  LOAD_REGS();
L_9e5350: /* 9e5350: push 0xacfe10 */
  { uint32_t v = 0xacfe10u; esp -= 4; W32(esp, v); }
/* 9e5355: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5357: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e535du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e535d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5360: mov byte ptr [0xb7e5a9], al */
  W8((uint32_t)(0xb7e5a9u), (eax & 0xffu));
/* 9e5365: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5380(void) {
  LOAD_REGS();
L_9e5380: /* 9e5380: push 0xacfe14 */
  { uint32_t v = 0xacfe14u; esp -= 4; W32(esp, v); }
/* 9e5385: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5387: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e538du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e538d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5390: mov byte ptr [0xb7e5aa], al */
  W8((uint32_t)(0xb7e5aau), (eax & 0xffu));
/* 9e5395: ret  */
  esp += 4; SPILL(); return;
}

void f_9e53b0(void) {
  LOAD_REGS();
L_9e53b0: /* 9e53b0: push 0xacfe18 */
  { uint32_t v = 0xacfe18u; esp -= 4; W32(esp, v); }
/* 9e53b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e53b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e53bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e53bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e53c0: mov byte ptr [0xb7e5ab], al */
  W8((uint32_t)(0xb7e5abu), (eax & 0xffu));
/* 9e53c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e53e0(void) {
  LOAD_REGS();
L_9e53e0: /* 9e53e0: push 0xacfe1c */
  { uint32_t v = 0xacfe1cu; esp -= 4; W32(esp, v); }
/* 9e53e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e53e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e53edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e53ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e53f0: mov byte ptr [0xb7e5ac], al */
  W8((uint32_t)(0xb7e5acu), (eax & 0xffu));
/* 9e53f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5410(void) {
  LOAD_REGS();
L_9e5410: /* 9e5410: push 0xacfe20 */
  { uint32_t v = 0xacfe20u; esp -= 4; W32(esp, v); }
/* 9e5415: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5417: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e541du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e541d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5420: mov byte ptr [0xb7e5ad], al */
  W8((uint32_t)(0xb7e5adu), (eax & 0xffu));
/* 9e5425: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5440(void) {
  LOAD_REGS();
L_9e5440: /* 9e5440: push 0xacfe24 */
  { uint32_t v = 0xacfe24u; esp -= 4; W32(esp, v); }
/* 9e5445: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5447: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e544du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e544d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5450: mov byte ptr [0xb7e5ae], al */
  W8((uint32_t)(0xb7e5aeu), (eax & 0xffu));
/* 9e5455: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5470(void) {
  LOAD_REGS();
L_9e5470: /* 9e5470: push 0xacfe28 */
  { uint32_t v = 0xacfe28u; esp -= 4; W32(esp, v); }
/* 9e5475: push 0xf82 */
  { uint32_t v = 0xf82u; esp -= 4; W32(esp, v); }
/* 9e547a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5480u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5480: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5483: mov byte ptr [0xb7e5af], al */
  W8((uint32_t)(0xb7e5afu), (eax & 0xffu));
/* 9e5488: ret  */
  esp += 4; SPILL(); return;
}

void f_9e54a0(void) {
  LOAD_REGS();
L_9e54a0: /* 9e54a0: push 0xacfe2c */
  { uint32_t v = 0xacfe2cu; esp -= 4; W32(esp, v); }
/* 9e54a5: push 0x12d */
  { uint32_t v = 0x12du; esp -= 4; W32(esp, v); }
/* 9e54aa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e54b0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e54b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e54b3: mov byte ptr [0xb7e5b0], al */
  W8((uint32_t)(0xb7e5b0u), (eax & 0xffu));
/* 9e54b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e54d0(void) {
  LOAD_REGS();
L_9e54d0: /* 9e54d0: push 0xacfe30 */
  { uint32_t v = 0xacfe30u; esp -= 4; W32(esp, v); }
/* 9e54d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e54d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e54ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e54dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e54e0: mov byte ptr [0xb7e5b1], al */
  W8((uint32_t)(0xb7e5b1u), (eax & 0xffu));
/* 9e54e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5500(void) {
  LOAD_REGS();
L_9e5500: /* 9e5500: push 0xacfe34 */
  { uint32_t v = 0xacfe34u; esp -= 4; W32(esp, v); }
/* 9e5505: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5507: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e550du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e550d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5510: mov byte ptr [0xb7e5b2], al */
  W8((uint32_t)(0xb7e5b2u), (eax & 0xffu));
/* 9e5515: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5530(void) {
  LOAD_REGS();
L_9e5530: /* 9e5530: push 0xacfe38 */
  { uint32_t v = 0xacfe38u; esp -= 4; W32(esp, v); }
/* 9e5535: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5537: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e553du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e553d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5540: mov byte ptr [0xb7e5b3], al */
  W8((uint32_t)(0xb7e5b3u), (eax & 0xffu));
/* 9e5545: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5560(void) {
  LOAD_REGS();
L_9e5560: /* 9e5560: push 0xacfe3c */
  { uint32_t v = 0xacfe3cu; esp -= 4; W32(esp, v); }
/* 9e5565: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5567: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e556du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e556d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5570: mov byte ptr [0xb7e5b4], al */
  W8((uint32_t)(0xb7e5b4u), (eax & 0xffu));
/* 9e5575: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5590(void) {
  LOAD_REGS();
L_9e5590: /* 9e5590: push 0xacfe40 */
  { uint32_t v = 0xacfe40u; esp -= 4; W32(esp, v); }
/* 9e5595: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5597: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e559du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e559d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e55a0: mov byte ptr [0xb7e5b5], al */
  W8((uint32_t)(0xb7e5b5u), (eax & 0xffu));
/* 9e55a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e55c0(void) {
  LOAD_REGS();
L_9e55c0: /* 9e55c0: push 0xacfe44 */
  { uint32_t v = 0xacfe44u; esp -= 4; W32(esp, v); }
/* 9e55c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e55c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e55cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e55cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e55d0: mov byte ptr [0xb7e5b6], al */
  W8((uint32_t)(0xb7e5b6u), (eax & 0xffu));
/* 9e55d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e55f0(void) {
  LOAD_REGS();
L_9e55f0: /* 9e55f0: push 0xacfe48 */
  { uint32_t v = 0xacfe48u; esp -= 4; W32(esp, v); }
/* 9e55f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e55f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e55fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e55fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5600: mov byte ptr [0xb7e5b7], al */
  W8((uint32_t)(0xb7e5b7u), (eax & 0xffu));
/* 9e5605: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5620(void) {
  LOAD_REGS();
L_9e5620: /* 9e5620: push 0xacfe4c */
  { uint32_t v = 0xacfe4cu; esp -= 4; W32(esp, v); }
/* 9e5625: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5627: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e562du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e562d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5630: mov byte ptr [0xb7e5b8], al */
  W8((uint32_t)(0xb7e5b8u), (eax & 0xffu));
/* 9e5635: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5650(void) {
  LOAD_REGS();
L_9e5650: /* 9e5650: push 0xacfe50 */
  { uint32_t v = 0xacfe50u; esp -= 4; W32(esp, v); }
/* 9e5655: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5657: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e565du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e565d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5660: mov byte ptr [0xb7e5b9], al */
  W8((uint32_t)(0xb7e5b9u), (eax & 0xffu));
/* 9e5665: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5680(void) {
  LOAD_REGS();
L_9e5680: /* 9e5680: push 0xacfe54 */
  { uint32_t v = 0xacfe54u; esp -= 4; W32(esp, v); }
/* 9e5685: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5687: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e568du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e568d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5690: mov byte ptr [0xb7e5ba], al */
  W8((uint32_t)(0xb7e5bau), (eax & 0xffu));
/* 9e5695: ret  */
  esp += 4; SPILL(); return;
}

void f_9e56b0(void) {
  LOAD_REGS();
L_9e56b0: /* 9e56b0: push 0xacfe58 */
  { uint32_t v = 0xacfe58u; esp -= 4; W32(esp, v); }
/* 9e56b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e56b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e56bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e56bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e56c0: mov byte ptr [0xb7e5bb], al */
  W8((uint32_t)(0xb7e5bbu), (eax & 0xffu));
/* 9e56c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e56e0(void) {
  LOAD_REGS();
L_9e56e0: /* 9e56e0: push 0xacfe5c */
  { uint32_t v = 0xacfe5cu; esp -= 4; W32(esp, v); }
/* 9e56e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e56e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e56edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e56ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e56f0: mov byte ptr [0xb7e5bc], al */
  W8((uint32_t)(0xb7e5bcu), (eax & 0xffu));
/* 9e56f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5710(void) {
  LOAD_REGS();
L_9e5710: /* 9e5710: push 0xacfe60 */
  { uint32_t v = 0xacfe60u; esp -= 4; W32(esp, v); }
/* 9e5715: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5717: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e571du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e571d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5720: mov byte ptr [0xb7e5bd], al */
  W8((uint32_t)(0xb7e5bdu), (eax & 0xffu));
/* 9e5725: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5740(void) {
  LOAD_REGS();
L_9e5740: /* 9e5740: push 0xacfe64 */
  { uint32_t v = 0xacfe64u; esp -= 4; W32(esp, v); }
/* 9e5745: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5747: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e574du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e574d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5750: mov byte ptr [0xb7e5be], al */
  W8((uint32_t)(0xb7e5beu), (eax & 0xffu));
/* 9e5755: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5770(void) {
  LOAD_REGS();
L_9e5770: /* 9e5770: push 0xacfe68 */
  { uint32_t v = 0xacfe68u; esp -= 4; W32(esp, v); }
/* 9e5775: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5777: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e577du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e577d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5780: mov byte ptr [0xb7e5bf], al */
  W8((uint32_t)(0xb7e5bfu), (eax & 0xffu));
/* 9e5785: ret  */
  esp += 4; SPILL(); return;
}

void f_9e57a0(void) {
  LOAD_REGS();
L_9e57a0: /* 9e57a0: push 0xacfe6c */
  { uint32_t v = 0xacfe6cu; esp -= 4; W32(esp, v); }
/* 9e57a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e57a7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e57adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e57ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e57b0: mov byte ptr [0xb7e5c0], al */
  W8((uint32_t)(0xb7e5c0u), (eax & 0xffu));
/* 9e57b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e57d0(void) {
  LOAD_REGS();
L_9e57d0: /* 9e57d0: push 0xacfe70 */
  { uint32_t v = 0xacfe70u; esp -= 4; W32(esp, v); }
/* 9e57d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e57d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e57ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e57dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e57e0: mov byte ptr [0xb7e5c1], al */
  W8((uint32_t)(0xb7e5c1u), (eax & 0xffu));
/* 9e57e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5800(void) {
  LOAD_REGS();
L_9e5800: /* 9e5800: push 0xacfe74 */
  { uint32_t v = 0xacfe74u; esp -= 4; W32(esp, v); }
/* 9e5805: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5807: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e580du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e580d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5810: mov byte ptr [0xb7e5c2], al */
  W8((uint32_t)(0xb7e5c2u), (eax & 0xffu));
/* 9e5815: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5830(void) {
  LOAD_REGS();
L_9e5830: /* 9e5830: push 0xacfe78 */
  { uint32_t v = 0xacfe78u; esp -= 4; W32(esp, v); }
/* 9e5835: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5837: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e583du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e583d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5840: mov byte ptr [0xb7e5c3], al */
  W8((uint32_t)(0xb7e5c3u), (eax & 0xffu));
/* 9e5845: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5860(void) {
  LOAD_REGS();
L_9e5860: /* 9e5860: push 0xacfe7c */
  { uint32_t v = 0xacfe7cu; esp -= 4; W32(esp, v); }
/* 9e5865: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5867: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e586du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e586d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5870: mov byte ptr [0xb7e5c4], al */
  W8((uint32_t)(0xb7e5c4u), (eax & 0xffu));
/* 9e5875: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5890(void) {
  LOAD_REGS();
L_9e5890: /* 9e5890: push 0xacfe80 */
  { uint32_t v = 0xacfe80u; esp -= 4; W32(esp, v); }
/* 9e5895: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5897: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e589du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e589d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e58a0: mov byte ptr [0xb7e5c5], al */
  W8((uint32_t)(0xb7e5c5u), (eax & 0xffu));
/* 9e58a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e58c0(void) {
  LOAD_REGS();
L_9e58c0: /* 9e58c0: push 0xacfe84 */
  { uint32_t v = 0xacfe84u; esp -= 4; W32(esp, v); }
/* 9e58c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e58c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e58cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e58cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e58d0: mov byte ptr [0xb7e5c6], al */
  W8((uint32_t)(0xb7e5c6u), (eax & 0xffu));
/* 9e58d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e58f0(void) {
  LOAD_REGS();
L_9e58f0: /* 9e58f0: push 0xacfe88 */
  { uint32_t v = 0xacfe88u; esp -= 4; W32(esp, v); }
/* 9e58f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e58f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e58fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e58fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5900: mov byte ptr [0xb7e5c7], al */
  W8((uint32_t)(0xb7e5c7u), (eax & 0xffu));
/* 9e5905: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5920(void) {
  LOAD_REGS();
L_9e5920: /* 9e5920: push 0xacfe8c */
  { uint32_t v = 0xacfe8cu; esp -= 4; W32(esp, v); }
/* 9e5925: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5927: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e592du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e592d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5930: mov byte ptr [0xb7e5c8], al */
  W8((uint32_t)(0xb7e5c8u), (eax & 0xffu));
/* 9e5935: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5950(void) {
  LOAD_REGS();
L_9e5950: /* 9e5950: push 0xacfe90 */
  { uint32_t v = 0xacfe90u; esp -= 4; W32(esp, v); }
/* 9e5955: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5957: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e595du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e595d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5960: mov byte ptr [0xb7e5c9], al */
  W8((uint32_t)(0xb7e5c9u), (eax & 0xffu));
/* 9e5965: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5980(void) {
  LOAD_REGS();
L_9e5980: /* 9e5980: push 0xacfe94 */
  { uint32_t v = 0xacfe94u; esp -= 4; W32(esp, v); }
/* 9e5985: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5987: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e598du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e598d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5990: mov byte ptr [0xb7e5ca], al */
  W8((uint32_t)(0xb7e5cau), (eax & 0xffu));
/* 9e5995: ret  */
  esp += 4; SPILL(); return;
}

void f_9e59b0(void) {
  LOAD_REGS();
L_9e59b0: /* 9e59b0: push 0xacfe98 */
  { uint32_t v = 0xacfe98u; esp -= 4; W32(esp, v); }
/* 9e59b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e59b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e59bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e59bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e59c0: mov byte ptr [0xb7e5cb], al */
  W8((uint32_t)(0xb7e5cbu), (eax & 0xffu));
/* 9e59c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e59e0(void) {
  LOAD_REGS();
L_9e59e0: /* 9e59e0: push 0xacfe9c */
  { uint32_t v = 0xacfe9cu; esp -= 4; W32(esp, v); }
/* 9e59e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e59e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e59edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e59ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e59f0: mov byte ptr [0xb7e5cc], al */
  W8((uint32_t)(0xb7e5ccu), (eax & 0xffu));
/* 9e59f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5a10(void) {
  LOAD_REGS();
L_9e5a10: /* 9e5a10: push 0xacfea0 */
  { uint32_t v = 0xacfea0u; esp -= 4; W32(esp, v); }
/* 9e5a15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5a17: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5a1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5a1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5a20: mov byte ptr [0xb7e5cd], al */
  W8((uint32_t)(0xb7e5cdu), (eax & 0xffu));
/* 9e5a25: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5a40(void) {
  LOAD_REGS();
L_9e5a40: /* 9e5a40: push 0xacfea4 */
  { uint32_t v = 0xacfea4u; esp -= 4; W32(esp, v); }
/* 9e5a45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5a47: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5a4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5a4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5a50: mov byte ptr [0xb7e5ce], al */
  W8((uint32_t)(0xb7e5ceu), (eax & 0xffu));
/* 9e5a55: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5a70(void) {
  LOAD_REGS();
L_9e5a70: /* 9e5a70: push 0xacfea8 */
  { uint32_t v = 0xacfea8u; esp -= 4; W32(esp, v); }
/* 9e5a75: push 0x107 */
  { uint32_t v = 0x107u; esp -= 4; W32(esp, v); }
/* 9e5a7a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5a80u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5a80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5a83: mov byte ptr [0xb7e5cf], al */
  W8((uint32_t)(0xb7e5cfu), (eax & 0xffu));
/* 9e5a88: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5aa0(void) {
  LOAD_REGS();
L_9e5aa0: /* 9e5aa0: push 0xacfeac */
  { uint32_t v = 0xacfeacu; esp -= 4; W32(esp, v); }
/* 9e5aa5: push 0x105 */
  { uint32_t v = 0x105u; esp -= 4; W32(esp, v); }
/* 9e5aaa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5ab0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5ab0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ab3: mov byte ptr [0xb7e5d0], al */
  W8((uint32_t)(0xb7e5d0u), (eax & 0xffu));
/* 9e5ab8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5ad0(void) {
  LOAD_REGS();
L_9e5ad0: /* 9e5ad0: push 0xacfeb0 */
  { uint32_t v = 0xacfeb0u; esp -= 4; W32(esp, v); }
/* 9e5ad5: push 0x11a */
  { uint32_t v = 0x11au; esp -= 4; W32(esp, v); }
/* 9e5ada: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5ae0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5ae0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ae3: mov byte ptr [0xb7e5d1], al */
  W8((uint32_t)(0xb7e5d1u), (eax & 0xffu));
/* 9e5ae8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5b00(void) {
  LOAD_REGS();
L_9e5b00: /* 9e5b00: push 0xacfeb4 */
  { uint32_t v = 0xacfeb4u; esp -= 4; W32(esp, v); }
/* 9e5b05: push 0x126 */
  { uint32_t v = 0x126u; esp -= 4; W32(esp, v); }
/* 9e5b0a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5b10u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5b10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5b13: mov byte ptr [0xb7e5d2], al */
  W8((uint32_t)(0xb7e5d2u), (eax & 0xffu));
/* 9e5b18: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5b30(void) {
  LOAD_REGS();
L_9e5b30: /* 9e5b30: push 0xacfeb8 */
  { uint32_t v = 0xacfeb8u; esp -= 4; W32(esp, v); }
/* 9e5b35: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 9e5b3a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5b40u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5b40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5b43: mov byte ptr [0xb7e5d3], al */
  W8((uint32_t)(0xb7e5d3u), (eax & 0xffu));
/* 9e5b48: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5b60(void) {
  LOAD_REGS();
L_9e5b60: /* 9e5b60: push 0xacfebc */
  { uint32_t v = 0xacfebcu; esp -= 4; W32(esp, v); }
/* 9e5b65: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 9e5b6a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5b70u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5b70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5b73: mov byte ptr [0xb7e5d4], al */
  W8((uint32_t)(0xb7e5d4u), (eax & 0xffu));
/* 9e5b78: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5b90(void) {
  LOAD_REGS();
L_9e5b90: /* 9e5b90: push 0xacfec0 */
  { uint32_t v = 0xacfec0u; esp -= 4; W32(esp, v); }
/* 9e5b95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5b97: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5b9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5b9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ba0: mov byte ptr [0xb7e5d5], al */
  W8((uint32_t)(0xb7e5d5u), (eax & 0xffu));
/* 9e5ba5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5bc0(void) {
  LOAD_REGS();
L_9e5bc0: /* 9e5bc0: push 0xacfec4 */
  { uint32_t v = 0xacfec4u; esp -= 4; W32(esp, v); }
/* 9e5bc5: push 0x110 */
  { uint32_t v = 0x110u; esp -= 4; W32(esp, v); }
/* 9e5bca: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5bd0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5bd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5bd3: mov byte ptr [0xb7e5d6], al */
  W8((uint32_t)(0xb7e5d6u), (eax & 0xffu));
/* 9e5bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5bf0(void) {
  LOAD_REGS();
L_9e5bf0: /* 9e5bf0: push 0xacfec8 */
  { uint32_t v = 0xacfec8u; esp -= 4; W32(esp, v); }
/* 9e5bf5: push 0x12a */
  { uint32_t v = 0x12au; esp -= 4; W32(esp, v); }
/* 9e5bfa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5c00u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5c00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5c03: mov byte ptr [0xb7e5d7], al */
  W8((uint32_t)(0xb7e5d7u), (eax & 0xffu));
/* 9e5c08: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5c20(void) {
  LOAD_REGS();
L_9e5c20: /* 9e5c20: push 0xacfecc */
  { uint32_t v = 0xacfeccu; esp -= 4; W32(esp, v); }
/* 9e5c25: push 0xf83 */
  { uint32_t v = 0xf83u; esp -= 4; W32(esp, v); }
/* 9e5c2a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5c30u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5c30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5c33: mov byte ptr [0xb7e5d8], al */
  W8((uint32_t)(0xb7e5d8u), (eax & 0xffu));
/* 9e5c38: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5c50(void) {
  LOAD_REGS();
L_9e5c50: /* 9e5c50: push 0xacfed0 */
  { uint32_t v = 0xacfed0u; esp -= 4; W32(esp, v); }
/* 9e5c55: push 0xf81 */
  { uint32_t v = 0xf81u; esp -= 4; W32(esp, v); }
/* 9e5c5a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5c60u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5c60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5c63: mov byte ptr [0xb7e5d9], al */
  W8((uint32_t)(0xb7e5d9u), (eax & 0xffu));
/* 9e5c68: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5c80(void) {
  LOAD_REGS();
L_9e5c80: /* 9e5c80: push 0xacfed4 */
  { uint32_t v = 0xacfed4u; esp -= 4; W32(esp, v); }
/* 9e5c85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5c87: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5c8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5c8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5c90: mov byte ptr [0xb7e5da], al */
  W8((uint32_t)(0xb7e5dau), (eax & 0xffu));
/* 9e5c95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5cb0(void) {
  LOAD_REGS();
L_9e5cb0: /* 9e5cb0: push 0xacfed8 */
  { uint32_t v = 0xacfed8u; esp -= 4; W32(esp, v); }
/* 9e5cb5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5cb7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5cbdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5cbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5cc0: mov byte ptr [0xb7e5db], al */
  W8((uint32_t)(0xb7e5dbu), (eax & 0xffu));
/* 9e5cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5ce0(void) {
  LOAD_REGS();
L_9e5ce0: /* 9e5ce0: push 0xacfedc */
  { uint32_t v = 0xacfedcu; esp -= 4; W32(esp, v); }
/* 9e5ce5: push 0x12b */
  { uint32_t v = 0x12bu; esp -= 4; W32(esp, v); }
/* 9e5cea: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5cf0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5cf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5cf3: mov byte ptr [0xb7e5dc], al */
  W8((uint32_t)(0xb7e5dcu), (eax & 0xffu));
/* 9e5cf8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5d10(void) {
  LOAD_REGS();
L_9e5d10: /* 9e5d10: push 0xacfee0 */
  { uint32_t v = 0xacfee0u; esp -= 4; W32(esp, v); }
/* 9e5d15: push 0x10b */
  { uint32_t v = 0x10bu; esp -= 4; W32(esp, v); }
/* 9e5d1a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5d20u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5d20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5d23: mov byte ptr [0xb7e5dd], al */
  W8((uint32_t)(0xb7e5ddu), (eax & 0xffu));
/* 9e5d28: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5d40(void) {
  LOAD_REGS();
L_9e5d40: /* 9e5d40: push 0xacfee4 */
  { uint32_t v = 0xacfee4u; esp -= 4; W32(esp, v); }
/* 9e5d45: push 0x10a */
  { uint32_t v = 0x10au; esp -= 4; W32(esp, v); }
/* 9e5d4a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5d50u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5d50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5d53: mov byte ptr [0xb7e5de], al */
  W8((uint32_t)(0xb7e5deu), (eax & 0xffu));
/* 9e5d58: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5d70(void) {
  LOAD_REGS();
L_9e5d70: /* 9e5d70: push 0xacfee8 */
  { uint32_t v = 0xacfee8u; esp -= 4; W32(esp, v); }
/* 9e5d75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5d77: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5d7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5d7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5d80: mov byte ptr [0xb7e5df], al */
  W8((uint32_t)(0xb7e5dfu), (eax & 0xffu));
/* 9e5d85: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5da0(void) {
  LOAD_REGS();
L_9e5da0: /* 9e5da0: push 0xacfeec */
  { uint32_t v = 0xacfeecu; esp -= 4; W32(esp, v); }
/* 9e5da5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5da7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5dadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5dad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5db0: mov byte ptr [0xb7e5e0], al */
  W8((uint32_t)(0xb7e5e0u), (eax & 0xffu));
/* 9e5db5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5dd0(void) {
  LOAD_REGS();
L_9e5dd0: /* 9e5dd0: push 0xacfef0 */
  { uint32_t v = 0xacfef0u; esp -= 4; W32(esp, v); }
/* 9e5dd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5dd7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5dddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5ddd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5de0: mov byte ptr [0xb7e5e1], al */
  W8((uint32_t)(0xb7e5e1u), (eax & 0xffu));
/* 9e5de5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5e00(void) {
  LOAD_REGS();
L_9e5e00: /* 9e5e00: push 0xacfef4 */
  { uint32_t v = 0xacfef4u; esp -= 4; W32(esp, v); }
/* 9e5e05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5e07: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5e0du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5e10: mov byte ptr [0xb7e5e2], al */
  W8((uint32_t)(0xb7e5e2u), (eax & 0xffu));
/* 9e5e15: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5e30(void) {
  LOAD_REGS();
L_9e5e30: /* 9e5e30: push 0xacfef8 */
  { uint32_t v = 0xacfef8u; esp -= 4; W32(esp, v); }
/* 9e5e35: push 0x11b */
  { uint32_t v = 0x11bu; esp -= 4; W32(esp, v); }
/* 9e5e3a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5e40u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5e40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5e43: mov byte ptr [0xb7e5e3], al */
  W8((uint32_t)(0xb7e5e3u), (eax & 0xffu));
/* 9e5e48: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5e60(void) {
  LOAD_REGS();
L_9e5e60: /* 9e5e60: push 0xacfefc */
  { uint32_t v = 0xacfefcu; esp -= 4; W32(esp, v); }
/* 9e5e65: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* 9e5e6a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5e70u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5e70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5e73: mov byte ptr [0xb7e5e4], al */
  W8((uint32_t)(0xb7e5e4u), (eax & 0xffu));
/* 9e5e78: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5e90(void) {
  LOAD_REGS();
L_9e5e90: /* 9e5e90: push 0xacff00 */
  { uint32_t v = 0xacff00u; esp -= 4; W32(esp, v); }
/* 9e5e95: push 0x10f */
  { uint32_t v = 0x10fu; esp -= 4; W32(esp, v); }
/* 9e5e9a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5ea0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5ea0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ea3: mov byte ptr [0xb7e5e5], al */
  W8((uint32_t)(0xb7e5e5u), (eax & 0xffu));
/* 9e5ea8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5ec0(void) {
  LOAD_REGS();
L_9e5ec0: /* 9e5ec0: push 0xacff04 */
  { uint32_t v = 0xacff04u; esp -= 4; W32(esp, v); }
/* 9e5ec5: push 0x10e */
  { uint32_t v = 0x10eu; esp -= 4; W32(esp, v); }
/* 9e5eca: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5ed0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5ed0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ed3: mov byte ptr [0xb7e5e6], al */
  W8((uint32_t)(0xb7e5e6u), (eax & 0xffu));
/* 9e5ed8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5ef0(void) {
  LOAD_REGS();
L_9e5ef0: /* 9e5ef0: push 0xacff08 */
  { uint32_t v = 0xacff08u; esp -= 4; W32(esp, v); }
/* 9e5ef5: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9e5efa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5f00u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5f00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5f03: mov byte ptr [0xb7e5e7], al */
  W8((uint32_t)(0xb7e5e7u), (eax & 0xffu));
/* 9e5f08: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5f20(void) {
  LOAD_REGS();
L_9e5f20: /* 9e5f20: push 0xacff0c */
  { uint32_t v = 0xacff0cu; esp -= 4; W32(esp, v); }
/* 9e5f25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5f27: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5f2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5f2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5f30: mov byte ptr [0xb7e5e8], al */
  W8((uint32_t)(0xb7e5e8u), (eax & 0xffu));
/* 9e5f35: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5f50(void) {
  LOAD_REGS();
L_9e5f50: /* 9e5f50: push 0xacff10 */
  { uint32_t v = 0xacff10u; esp -= 4; W32(esp, v); }
/* 9e5f55: push 0xe9 */
  { uint32_t v = 0xe9u; esp -= 4; W32(esp, v); }
/* 9e5f5a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5f60u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5f60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5f63: mov byte ptr [0xb7e5e9], al */
  W8((uint32_t)(0xb7e5e9u), (eax & 0xffu));
/* 9e5f68: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5f80(void) {
  LOAD_REGS();
L_9e5f80: /* 9e5f80: push 0xacff14 */
  { uint32_t v = 0xacff14u; esp -= 4; W32(esp, v); }
/* 9e5f85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5f87: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5f8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5f8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5f90: mov byte ptr [0xb7e5ea], al */
  W8((uint32_t)(0xb7e5eau), (eax & 0xffu));
/* 9e5f95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5fb0(void) {
  LOAD_REGS();
L_9e5fb0: /* 9e5fb0: push 0xacff18 */
  { uint32_t v = 0xacff18u; esp -= 4; W32(esp, v); }
/* 9e5fb5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5fb7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5fbdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5fbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5fc0: mov byte ptr [0xb7e5eb], al */
  W8((uint32_t)(0xb7e5ebu), (eax & 0xffu));
/* 9e5fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e5fe0(void) {
  LOAD_REGS();
L_9e5fe0: /* 9e5fe0: push 0xacff1c */
  { uint32_t v = 0xacff1cu; esp -= 4; W32(esp, v); }
/* 9e5fe5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e5fe7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e5fedu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e5fed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e5ff0: mov byte ptr [0xb7e5ec], al */
  W8((uint32_t)(0xb7e5ecu), (eax & 0xffu));
/* 9e5ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6010(void) {
  LOAD_REGS();
L_9e6010: /* 9e6010: push 0xacff20 */
  { uint32_t v = 0xacff20u; esp -= 4; W32(esp, v); }
/* 9e6015: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6017: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e601du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e601d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6020: mov byte ptr [0xb7e5ed], al */
  W8((uint32_t)(0xb7e5edu), (eax & 0xffu));
/* 9e6025: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6040(void) {
  LOAD_REGS();
L_9e6040: /* 9e6040: push 0xacff24 */
  { uint32_t v = 0xacff24u; esp -= 4; W32(esp, v); }
/* 9e6045: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6047: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e604du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e604d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6050: mov byte ptr [0xb7e5ee], al */
  W8((uint32_t)(0xb7e5eeu), (eax & 0xffu));
/* 9e6055: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6070(void) {
  LOAD_REGS();
L_9e6070: /* 9e6070: push 0xacff28 */
  { uint32_t v = 0xacff28u; esp -= 4; W32(esp, v); }
/* 9e6075: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6077: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e607du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e607d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6080: mov byte ptr [0xb7e5ef], al */
  W8((uint32_t)(0xb7e5efu), (eax & 0xffu));
/* 9e6085: ret  */
  esp += 4; SPILL(); return;
}

void f_9e60a0(void) {
  LOAD_REGS();
L_9e60a0: /* 9e60a0: push 0xacff2c */
  { uint32_t v = 0xacff2cu; esp -= 4; W32(esp, v); }
/* 9e60a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e60a7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e60adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e60ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e60b0: mov byte ptr [0xb7e5f0], al */
  W8((uint32_t)(0xb7e5f0u), (eax & 0xffu));
/* 9e60b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e60d0(void) {
  LOAD_REGS();
L_9e60d0: /* 9e60d0: push 0xacff30 */
  { uint32_t v = 0xacff30u; esp -= 4; W32(esp, v); }
/* 9e60d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e60d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e60ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e60dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e60e0: mov byte ptr [0xb7e5f1], al */
  W8((uint32_t)(0xb7e5f1u), (eax & 0xffu));
/* 9e60e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6100(void) {
  LOAD_REGS();
L_9e6100: /* 9e6100: push 0xacff34 */
  { uint32_t v = 0xacff34u; esp -= 4; W32(esp, v); }
/* 9e6105: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6107: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e610du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e610d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6110: mov byte ptr [0xb7e5f2], al */
  W8((uint32_t)(0xb7e5f2u), (eax & 0xffu));
/* 9e6115: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6130(void) {
  LOAD_REGS();
L_9e6130: /* 9e6130: push 0xacff38 */
  { uint32_t v = 0xacff38u; esp -= 4; W32(esp, v); }
/* 9e6135: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6137: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e613du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e613d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6140: mov byte ptr [0xb7e5f3], al */
  W8((uint32_t)(0xb7e5f3u), (eax & 0xffu));
/* 9e6145: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6160(void) {
  LOAD_REGS();
L_9e6160: /* 9e6160: push 0xacff3c */
  { uint32_t v = 0xacff3cu; esp -= 4; W32(esp, v); }
/* 9e6165: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6167: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e616du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e616d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6170: mov byte ptr [0xb7e5f4], al */
  W8((uint32_t)(0xb7e5f4u), (eax & 0xffu));
/* 9e6175: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6190(void) {
  LOAD_REGS();
L_9e6190: /* 9e6190: push 0xacff40 */
  { uint32_t v = 0xacff40u; esp -= 4; W32(esp, v); }
/* 9e6195: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6197: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e619du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e619d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e61a0: mov byte ptr [0xb7e5f5], al */
  W8((uint32_t)(0xb7e5f5u), (eax & 0xffu));
/* 9e61a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e61c0(void) {
  LOAD_REGS();
L_9e61c0: /* 9e61c0: push 0xacff44 */
  { uint32_t v = 0xacff44u; esp -= 4; W32(esp, v); }
/* 9e61c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e61c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e61cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e61cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e61d0: mov byte ptr [0xb7e5f6], al */
  W8((uint32_t)(0xb7e5f6u), (eax & 0xffu));
/* 9e61d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e61f0(void) {
  LOAD_REGS();
L_9e61f0: /* 9e61f0: push 0xacff48 */
  { uint32_t v = 0xacff48u; esp -= 4; W32(esp, v); }
/* 9e61f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e61f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e61fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e61fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6200: mov byte ptr [0xb7e5f7], al */
  W8((uint32_t)(0xb7e5f7u), (eax & 0xffu));
/* 9e6205: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6220(void) {
  LOAD_REGS();
L_9e6220: /* 9e6220: push 0xacff4c */
  { uint32_t v = 0xacff4cu; esp -= 4; W32(esp, v); }
/* 9e6225: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6227: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e622du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e622d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6230: mov byte ptr [0xb7e5f8], al */
  W8((uint32_t)(0xb7e5f8u), (eax & 0xffu));
/* 9e6235: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6250(void) {
  LOAD_REGS();
L_9e6250: /* 9e6250: push 0xacff50 */
  { uint32_t v = 0xacff50u; esp -= 4; W32(esp, v); }
/* 9e6255: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6257: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e625du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e625d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6260: mov byte ptr [0xb7e5f9], al */
  W8((uint32_t)(0xb7e5f9u), (eax & 0xffu));
/* 9e6265: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6280(void) {
  LOAD_REGS();
L_9e6280: /* 9e6280: push 0xacff54 */
  { uint32_t v = 0xacff54u; esp -= 4; W32(esp, v); }
/* 9e6285: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6287: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e628du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e628d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6290: mov byte ptr [0xb7e5fa], al */
  W8((uint32_t)(0xb7e5fau), (eax & 0xffu));
/* 9e6295: ret  */
  esp += 4; SPILL(); return;
}

void f_9e62b0(void) {
  LOAD_REGS();
L_9e62b0: /* 9e62b0: push 0xacff58 */
  { uint32_t v = 0xacff58u; esp -= 4; W32(esp, v); }
/* 9e62b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e62b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e62bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e62bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e62c0: mov byte ptr [0xb7e5fb], al */
  W8((uint32_t)(0xb7e5fbu), (eax & 0xffu));
/* 9e62c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e62e0(void) {
  LOAD_REGS();
L_9e62e0: /* 9e62e0: push 0xacff5c */
  { uint32_t v = 0xacff5cu; esp -= 4; W32(esp, v); }
/* 9e62e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e62e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e62edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e62ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e62f0: mov byte ptr [0xb7e5fc], al */
  W8((uint32_t)(0xb7e5fcu), (eax & 0xffu));
/* 9e62f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6310(void) {
  LOAD_REGS();
L_9e6310: /* 9e6310: push 0xacff60 */
  { uint32_t v = 0xacff60u; esp -= 4; W32(esp, v); }
/* 9e6315: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6317: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e631du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e631d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6320: mov byte ptr [0xb7e5fd], al */
  W8((uint32_t)(0xb7e5fdu), (eax & 0xffu));
/* 9e6325: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6340(void) {
  LOAD_REGS();
L_9e6340: /* 9e6340: push 0xacff64 */
  { uint32_t v = 0xacff64u; esp -= 4; W32(esp, v); }
/* 9e6345: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6347: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e634du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e634d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6350: mov byte ptr [0xb7e5fe], al */
  W8((uint32_t)(0xb7e5feu), (eax & 0xffu));
/* 9e6355: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6370(void) {
  LOAD_REGS();
L_9e6370: /* 9e6370: push 0xacff68 */
  { uint32_t v = 0xacff68u; esp -= 4; W32(esp, v); }
/* 9e6375: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6377: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e637du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e637d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6380: mov byte ptr [0xb7e5ff], al */
  W8((uint32_t)(0xb7e5ffu), (eax & 0xffu));
/* 9e6385: ret  */
  esp += 4; SPILL(); return;
}

void f_9e63a0(void) {
  LOAD_REGS();
L_9e63a0: /* 9e63a0: push 0xacff6c */
  { uint32_t v = 0xacff6cu; esp -= 4; W32(esp, v); }
/* 9e63a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e63a7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e63adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e63ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e63b0: mov byte ptr [0xb7e600], al */
  W8((uint32_t)(0xb7e600u), (eax & 0xffu));
/* 9e63b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e63d0(void) {
  LOAD_REGS();
L_9e63d0: /* 9e63d0: push 0xacff70 */
  { uint32_t v = 0xacff70u; esp -= 4; W32(esp, v); }
/* 9e63d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e63d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e63ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e63dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e63e0: mov byte ptr [0xb7e601], al */
  W8((uint32_t)(0xb7e601u), (eax & 0xffu));
/* 9e63e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6400(void) {
  LOAD_REGS();
L_9e6400: /* 9e6400: push 0xacff74 */
  { uint32_t v = 0xacff74u; esp -= 4; W32(esp, v); }
/* 9e6405: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6407: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e640du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e640d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6410: mov byte ptr [0xb7e602], al */
  W8((uint32_t)(0xb7e602u), (eax & 0xffu));
/* 9e6415: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6430(void) {
  LOAD_REGS();
L_9e6430: /* 9e6430: push 0xacff78 */
  { uint32_t v = 0xacff78u; esp -= 4; W32(esp, v); }
/* 9e6435: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6437: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e643du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e643d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6440: mov byte ptr [0xb7e603], al */
  W8((uint32_t)(0xb7e603u), (eax & 0xffu));
/* 9e6445: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6460(void) {
  LOAD_REGS();
L_9e6460: /* 9e6460: push 0xacff7c */
  { uint32_t v = 0xacff7cu; esp -= 4; W32(esp, v); }
/* 9e6465: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6467: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e646du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e646d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6470: mov byte ptr [0xb7e604], al */
  W8((uint32_t)(0xb7e604u), (eax & 0xffu));
/* 9e6475: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6490(void) {
  LOAD_REGS();
L_9e6490: /* 9e6490: push 0xacff80 */
  { uint32_t v = 0xacff80u; esp -= 4; W32(esp, v); }
/* 9e6495: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6497: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e649du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e649d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e64a0: mov byte ptr [0xb7e605], al */
  W8((uint32_t)(0xb7e605u), (eax & 0xffu));
/* 9e64a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e64c0(void) {
  LOAD_REGS();
L_9e64c0: /* 9e64c0: push 0xacff84 */
  { uint32_t v = 0xacff84u; esp -= 4; W32(esp, v); }
/* 9e64c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e64c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e64cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e64cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e64d0: mov byte ptr [0xb7e606], al */
  W8((uint32_t)(0xb7e606u), (eax & 0xffu));
/* 9e64d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e64f0(void) {
  LOAD_REGS();
L_9e64f0: /* 9e64f0: push 0xacff88 */
  { uint32_t v = 0xacff88u; esp -= 4; W32(esp, v); }
/* 9e64f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e64f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e64fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e64fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6500: mov byte ptr [0xb7e607], al */
  W8((uint32_t)(0xb7e607u), (eax & 0xffu));
/* 9e6505: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6520(void) {
  LOAD_REGS();
L_9e6520: /* 9e6520: push 0xacff8c */
  { uint32_t v = 0xacff8cu; esp -= 4; W32(esp, v); }
/* 9e6525: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6527: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e652du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e652d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6530: mov byte ptr [0xb7e608], al */
  W8((uint32_t)(0xb7e608u), (eax & 0xffu));
/* 9e6535: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6550(void) {
  LOAD_REGS();
L_9e6550: /* 9e6550: push 0xacff90 */
  { uint32_t v = 0xacff90u; esp -= 4; W32(esp, v); }
/* 9e6555: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* 9e655a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6560u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6560: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6563: mov byte ptr [0xb7e609], al */
  W8((uint32_t)(0xb7e609u), (eax & 0xffu));
/* 9e6568: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6580(void) {
  LOAD_REGS();
L_9e6580: /* 9e6580: push 0xacff94 */
  { uint32_t v = 0xacff94u; esp -= 4; W32(esp, v); }
/* 9e6585: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6587: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e658du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e658d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6590: mov byte ptr [0xb7e60a], al */
  W8((uint32_t)(0xb7e60au), (eax & 0xffu));
/* 9e6595: ret  */
  esp += 4; SPILL(); return;
}

void f_9e65b0(void) {
  LOAD_REGS();
L_9e65b0: /* 9e65b0: push 0xacff98 */
  { uint32_t v = 0xacff98u; esp -= 4; W32(esp, v); }
/* 9e65b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e65b7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e65bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e65bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e65c0: mov byte ptr [0xb7e60b], al */
  W8((uint32_t)(0xb7e60bu), (eax & 0xffu));
/* 9e65c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e65e0(void) {
  LOAD_REGS();
L_9e65e0: /* 9e65e0: push 0xacff9c */
  { uint32_t v = 0xacff9cu; esp -= 4; W32(esp, v); }
/* 9e65e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e65e7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e65edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e65ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e65f0: mov byte ptr [0xb7e60c], al */
  W8((uint32_t)(0xb7e60cu), (eax & 0xffu));
/* 9e65f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6610(void) {
  LOAD_REGS();
L_9e6610: /* 9e6610: push 0xacffa0 */
  { uint32_t v = 0xacffa0u; esp -= 4; W32(esp, v); }
/* 9e6615: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6617: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e661du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e661d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6620: mov byte ptr [0xb7e60d], al */
  W8((uint32_t)(0xb7e60du), (eax & 0xffu));
/* 9e6625: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6640(void) {
  LOAD_REGS();
L_9e6640: /* 9e6640: push 0xacffa4 */
  { uint32_t v = 0xacffa4u; esp -= 4; W32(esp, v); }
/* 9e6645: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6647: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e664du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e664d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6650: mov byte ptr [0xb7e60e], al */
  W8((uint32_t)(0xb7e60eu), (eax & 0xffu));
/* 9e6655: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6670(void) {
  LOAD_REGS();
L_9e6670: /* 9e6670: push 0xacffa8 */
  { uint32_t v = 0xacffa8u; esp -= 4; W32(esp, v); }
/* 9e6675: push 0x222 */
  { uint32_t v = 0x222u; esp -= 4; W32(esp, v); }
/* 9e667a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6680u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6680: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6683: mov byte ptr [0xb7e60f], al */
  W8((uint32_t)(0xb7e60fu), (eax & 0xffu));
/* 9e6688: ret  */
  esp += 4; SPILL(); return;
}

void f_9e66a0(void) {
  LOAD_REGS();
L_9e66a0: /* 9e66a0: push 0xacffac */
  { uint32_t v = 0xacffacu; esp -= 4; W32(esp, v); }
/* 9e66a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e66a7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e66adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e66ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e66b0: mov byte ptr [0xb7e610], al */
  W8((uint32_t)(0xb7e610u), (eax & 0xffu));
/* 9e66b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e66d0(void) {
  LOAD_REGS();
L_9e66d0: /* 9e66d0: push 0xacffb0 */
  { uint32_t v = 0xacffb0u; esp -= 4; W32(esp, v); }
/* 9e66d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e66d7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e66ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e66dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e66e0: mov byte ptr [0xb7e611], al */
  W8((uint32_t)(0xb7e611u), (eax & 0xffu));
/* 9e66e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6700(void) {
  LOAD_REGS();
L_9e6700: /* 9e6700: push 0xacffb4 */
  { uint32_t v = 0xacffb4u; esp -= 4; W32(esp, v); }
/* 9e6705: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 9e670a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6710u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6710: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6713: mov byte ptr [0xb7e612], al */
  W8((uint32_t)(0xb7e612u), (eax & 0xffu));
/* 9e6718: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6730(void) {
  LOAD_REGS();
L_9e6730: /* 9e6730: push 0xacffb8 */
  { uint32_t v = 0xacffb8u; esp -= 4; W32(esp, v); }
/* 9e6735: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6737: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e673du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e673d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6740: mov byte ptr [0xb7e613], al */
  W8((uint32_t)(0xb7e613u), (eax & 0xffu));
/* 9e6745: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6760(void) {
  LOAD_REGS();
L_9e6760: /* 9e6760: push 0xacffbc */
  { uint32_t v = 0xacffbcu; esp -= 4; W32(esp, v); }
/* 9e6765: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6767: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e676du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e676d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6770: mov byte ptr [0xb7e614], al */
  W8((uint32_t)(0xb7e614u), (eax & 0xffu));
/* 9e6775: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6790(void) {
  LOAD_REGS();
L_9e6790: /* 9e6790: push 0xacffc0 */
  { uint32_t v = 0xacffc0u; esp -= 4; W32(esp, v); }
/* 9e6795: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6797: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e679du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e679d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e67a0: mov byte ptr [0xb7e615], al */
  W8((uint32_t)(0xb7e615u), (eax & 0xffu));
/* 9e67a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e67c0(void) {
  LOAD_REGS();
L_9e67c0: /* 9e67c0: push 0xacffc4 */
  { uint32_t v = 0xacffc4u; esp -= 4; W32(esp, v); }
/* 9e67c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e67c7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e67cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e67cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e67d0: mov byte ptr [0xb7e616], al */
  W8((uint32_t)(0xb7e616u), (eax & 0xffu));
/* 9e67d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e67f0(void) {
  LOAD_REGS();
L_9e67f0: /* 9e67f0: push 0xacffc8 */
  { uint32_t v = 0xacffc8u; esp -= 4; W32(esp, v); }
/* 9e67f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e67f7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e67fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e67fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6800: mov byte ptr [0xb7e617], al */
  W8((uint32_t)(0xb7e617u), (eax & 0xffu));
/* 9e6805: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6820(void) {
  LOAD_REGS();
L_9e6820: /* 9e6820: push 0xacffcc */
  { uint32_t v = 0xacffccu; esp -= 4; W32(esp, v); }
/* 9e6825: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6827: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e682du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e682d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6830: mov byte ptr [0xb7e618], al */
  W8((uint32_t)(0xb7e618u), (eax & 0xffu));
/* 9e6835: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6850(void) {
  LOAD_REGS();
L_9e6850: /* 9e6850: push 0xacffd0 */
  { uint32_t v = 0xacffd0u; esp -= 4; W32(esp, v); }
/* 9e6855: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6857: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e685du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e685d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6860: mov byte ptr [0xb7e619], al */
  W8((uint32_t)(0xb7e619u), (eax & 0xffu));
/* 9e6865: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6880(void) {
  LOAD_REGS();
L_9e6880: /* 9e6880: push 0xacffd4 */
  { uint32_t v = 0xacffd4u; esp -= 4; W32(esp, v); }
/* 9e6885: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6887: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e688du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e688d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6890: mov byte ptr [0xb7e61a], al */
  W8((uint32_t)(0xb7e61au), (eax & 0xffu));
/* 9e6895: ret  */
  esp += 4; SPILL(); return;
}

void f_9e68b0(void) {
  LOAD_REGS();
L_9e68b0: /* 9e68b0: push 0xacffd8 */
  { uint32_t v = 0xacffd8u; esp -= 4; W32(esp, v); }
/* 9e68b5: push 0x216 */
  { uint32_t v = 0x216u; esp -= 4; W32(esp, v); }
/* 9e68ba: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e68c0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e68c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e68c3: mov byte ptr [0xb7e61b], al */
  W8((uint32_t)(0xb7e61bu), (eax & 0xffu));
/* 9e68c8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e68e0(void) {
  LOAD_REGS();
L_9e68e0: /* 9e68e0: push 0xacffdc */
  { uint32_t v = 0xacffdcu; esp -= 4; W32(esp, v); }
/* 9e68e5: push 0x213 */
  { uint32_t v = 0x213u; esp -= 4; W32(esp, v); }
/* 9e68ea: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e68f0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e68f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e68f3: mov byte ptr [0xb7e61c], al */
  W8((uint32_t)(0xb7e61cu), (eax & 0xffu));
/* 9e68f8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6910(void) {
  LOAD_REGS();
L_9e6910: /* 9e6910: push 0xacffe0 */
  { uint32_t v = 0xacffe0u; esp -= 4; W32(esp, v); }
/* 9e6915: push 0x212 */
  { uint32_t v = 0x212u; esp -= 4; W32(esp, v); }
/* 9e691a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6920u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6920: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6923: mov byte ptr [0xb7e61d], al */
  W8((uint32_t)(0xb7e61du), (eax & 0xffu));
/* 9e6928: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6940(void) {
  LOAD_REGS();
L_9e6940: /* 9e6940: push 0xacffe4 */
  { uint32_t v = 0xacffe4u; esp -= 4; W32(esp, v); }
/* 9e6945: push 0x211 */
  { uint32_t v = 0x211u; esp -= 4; W32(esp, v); }
/* 9e694a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6950u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6950: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6953: mov byte ptr [0xb7e61e], al */
  W8((uint32_t)(0xb7e61eu), (eax & 0xffu));
/* 9e6958: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6970(void) {
  LOAD_REGS();
L_9e6970: /* 9e6970: push 0xacffe8 */
  { uint32_t v = 0xacffe8u; esp -= 4; W32(esp, v); }
/* 9e6975: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* 9e697a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6980u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6980: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6983: mov byte ptr [0xb7e61f], al */
  W8((uint32_t)(0xb7e61fu), (eax & 0xffu));
/* 9e6988: ret  */
  esp += 4; SPILL(); return;
}

void f_9e69a0(void) {
  LOAD_REGS();
L_9e69a0: /* 9e69a0: push 0xacffec */
  { uint32_t v = 0xacffecu; esp -= 4; W32(esp, v); }
/* 9e69a5: push 0x20f */
  { uint32_t v = 0x20fu; esp -= 4; W32(esp, v); }
/* 9e69aa: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e69b0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e69b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e69b3: mov byte ptr [0xb7e620], al */
  W8((uint32_t)(0xb7e620u), (eax & 0xffu));
/* 9e69b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e69d0(void) {
  LOAD_REGS();
L_9e69d0: /* 9e69d0: push 0xacfff0 */
  { uint32_t v = 0xacfff0u; esp -= 4; W32(esp, v); }
/* 9e69d5: push 0x20e */
  { uint32_t v = 0x20eu; esp -= 4; W32(esp, v); }
/* 9e69da: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e69e0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e69e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e69e3: mov byte ptr [0xb7e621], al */
  W8((uint32_t)(0xb7e621u), (eax & 0xffu));
/* 9e69e8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6a00(void) {
  LOAD_REGS();
L_9e6a00: /* 9e6a00: push 0xacfff4 */
  { uint32_t v = 0xacfff4u; esp -= 4; W32(esp, v); }
/* 9e6a05: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* 9e6a0a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6a10u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6a10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6a13: mov byte ptr [0xb7e622], al */
  W8((uint32_t)(0xb7e622u), (eax & 0xffu));
/* 9e6a18: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6a30(void) {
  LOAD_REGS();
L_9e6a30: /* 9e6a30: push 0xacfff8 */
  { uint32_t v = 0xacfff8u; esp -= 4; W32(esp, v); }
/* 9e6a35: push 0x209 */
  { uint32_t v = 0x209u; esp -= 4; W32(esp, v); }
/* 9e6a3a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6a40u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6a40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6a43: mov byte ptr [0xb7e623], al */
  W8((uint32_t)(0xb7e623u), (eax & 0xffu));
/* 9e6a48: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6a60(void) {
  LOAD_REGS();
L_9e6a60: /* 9e6a60: push 0xacfffc */
  { uint32_t v = 0xacfffcu; esp -= 4; W32(esp, v); }
/* 9e6a65: push 0x20b */
  { uint32_t v = 0x20bu; esp -= 4; W32(esp, v); }
/* 9e6a6a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6a70u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6a70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6a73: mov byte ptr [0xb7e624], al */
  W8((uint32_t)(0xb7e624u), (eax & 0xffu));
/* 9e6a78: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6a90(void) {
  LOAD_REGS();
L_9e6a90: /* 9e6a90: push 0xad0000 */
  { uint32_t v = 0xad0000u; esp -= 4; W32(esp, v); }
/* 9e6a95: push 0x20d */
  { uint32_t v = 0x20du; esp -= 4; W32(esp, v); }
/* 9e6a9a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6aa0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6aa3: mov byte ptr [0xb7e625], al */
  W8((uint32_t)(0xb7e625u), (eax & 0xffu));
/* 9e6aa8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6ac0(void) {
  LOAD_REGS();
L_9e6ac0: /* 9e6ac0: push 0xad0004 */
  { uint32_t v = 0xad0004u; esp -= 4; W32(esp, v); }
/* 9e6ac5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6ac7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6acdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6acd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6ad0: mov byte ptr [0xb7e626], al */
  W8((uint32_t)(0xb7e626u), (eax & 0xffu));
/* 9e6ad5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6af0(void) {
  LOAD_REGS();
L_9e6af0: /* 9e6af0: push 0xad0008 */
  { uint32_t v = 0xad0008u; esp -= 4; W32(esp, v); }
/* 9e6af5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6af7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6afdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6afd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6b00: mov byte ptr [0xb7e627], al */
  W8((uint32_t)(0xb7e627u), (eax & 0xffu));
/* 9e6b05: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6b20(void) {
  LOAD_REGS();
L_9e6b20: /* 9e6b20: push 0xad000c */
  { uint32_t v = 0xad000cu; esp -= 4; W32(esp, v); }
/* 9e6b25: push 0x205 */
  { uint32_t v = 0x205u; esp -= 4; W32(esp, v); }
/* 9e6b2a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6b30u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6b30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6b33: mov byte ptr [0xb7e628], al */
  W8((uint32_t)(0xb7e628u), (eax & 0xffu));
/* 9e6b38: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6b50(void) {
  LOAD_REGS();
L_9e6b50: /* 9e6b50: push 0xad0010 */
  { uint32_t v = 0xad0010u; esp -= 4; W32(esp, v); }
/* 9e6b55: push 0x206 */
  { uint32_t v = 0x206u; esp -= 4; W32(esp, v); }
/* 9e6b5a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6b60u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6b60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6b63: mov byte ptr [0xb7e629], al */
  W8((uint32_t)(0xb7e629u), (eax & 0xffu));
/* 9e6b68: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6b80(void) {
  LOAD_REGS();
L_9e6b80: /* 9e6b80: push 0xad0014 */
  { uint32_t v = 0xad0014u; esp -= 4; W32(esp, v); }
/* 9e6b85: push 0x215 */
  { uint32_t v = 0x215u; esp -= 4; W32(esp, v); }
/* 9e6b8a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6b90u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6b90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6b93: mov byte ptr [0xb7e62a], al */
  W8((uint32_t)(0xb7e62au), (eax & 0xffu));
/* 9e6b98: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6bb0(void) {
  LOAD_REGS();
L_9e6bb0: /* 9e6bb0: push 0xad0018 */
  { uint32_t v = 0xad0018u; esp -= 4; W32(esp, v); }
/* 9e6bb5: push 0x202 */
  { uint32_t v = 0x202u; esp -= 4; W32(esp, v); }
/* 9e6bba: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6bc0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6bc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6bc3: mov byte ptr [0xb7e62b], al */
  W8((uint32_t)(0xb7e62bu), (eax & 0xffu));
/* 9e6bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6be0(void) {
  LOAD_REGS();
L_9e6be0: /* 9e6be0: push 0xad001c */
  { uint32_t v = 0xad001cu; esp -= 4; W32(esp, v); }
/* 9e6be5: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* 9e6bea: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6bf0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6bf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6bf3: mov byte ptr [0xb7e62c], al */
  W8((uint32_t)(0xb7e62cu), (eax & 0xffu));
/* 9e6bf8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6c10(void) {
  LOAD_REGS();
L_9e6c10: /* 9e6c10: push 0xad0020 */
  { uint32_t v = 0xad0020u; esp -= 4; W32(esp, v); }
/* 9e6c15: push 0x1f6 */
  { uint32_t v = 0x1f6u; esp -= 4; W32(esp, v); }
/* 9e6c1a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6c20u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6c20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6c23: mov byte ptr [0xb7e62d], al */
  W8((uint32_t)(0xb7e62du), (eax & 0xffu));
/* 9e6c28: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6c40(void) {
  LOAD_REGS();
L_9e6c40: /* 9e6c40: push 0xad0024 */
  { uint32_t v = 0xad0024u; esp -= 4; W32(esp, v); }
/* 9e6c45: push 0x1f4 */
  { uint32_t v = 0x1f4u; esp -= 4; W32(esp, v); }
/* 9e6c4a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6c50u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6c50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6c53: mov byte ptr [0xb7e62e], al */
  W8((uint32_t)(0xb7e62eu), (eax & 0xffu));
/* 9e6c58: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6c70(void) {
  LOAD_REGS();
L_9e6c70: /* 9e6c70: push 0xad0028 */
  { uint32_t v = 0xad0028u; esp -= 4; W32(esp, v); }
/* 9e6c75: push 0x1fe */
  { uint32_t v = 0x1feu; esp -= 4; W32(esp, v); }
/* 9e6c7a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6c80u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6c80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6c83: mov byte ptr [0xb7e62f], al */
  W8((uint32_t)(0xb7e62fu), (eax & 0xffu));
/* 9e6c88: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6ca0(void) {
  LOAD_REGS();
L_9e6ca0: /* 9e6ca0: push 0xad002c */
  { uint32_t v = 0xad002cu; esp -= 4; W32(esp, v); }
/* 9e6ca5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6ca7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6cadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6cad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6cb0: mov byte ptr [0xb7e630], al */
  W8((uint32_t)(0xb7e630u), (eax & 0xffu));
/* 9e6cb5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6cd0(void) {
  LOAD_REGS();
L_9e6cd0: /* 9e6cd0: push 0xad0030 */
  { uint32_t v = 0xad0030u; esp -= 4; W32(esp, v); }
/* 9e6cd5: push 0x13b */
  { uint32_t v = 0x13bu; esp -= 4; W32(esp, v); }
/* 9e6cda: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6ce0u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6ce0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6ce3: mov byte ptr [0xb7e631], al */
  W8((uint32_t)(0xb7e631u), (eax & 0xffu));
/* 9e6ce8: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6d00(void) {
  LOAD_REGS();
L_9e6d00: /* 9e6d00: push 0xad0034 */
  { uint32_t v = 0xad0034u; esp -= 4; W32(esp, v); }
/* 9e6d05: push 0x13a */
  { uint32_t v = 0x13au; esp -= 4; W32(esp, v); }
/* 9e6d0a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6d10u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6d10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6d13: mov byte ptr [0xb7e632], al */
  W8((uint32_t)(0xb7e632u), (eax & 0xffu));
/* 9e6d18: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6d30(void) {
  LOAD_REGS();
L_9e6d30: /* 9e6d30: push 0xad0038 */
  { uint32_t v = 0xad0038u; esp -= 4; W32(esp, v); }
/* 9e6d35: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 9e6d3a: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6d40u); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6d40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6d43: mov byte ptr [0xb7e633], al */
  W8((uint32_t)(0xb7e633u), (eax & 0xffu));
/* 9e6d48: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6d60(void) {
  LOAD_REGS();
L_9e6d60: /* 9e6d60: push 0xad003c */
  { uint32_t v = 0xad003cu; esp -= 4; W32(esp, v); }
/* 9e6d65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6d67: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6d6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6d6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6d70: mov byte ptr [0xb7e634], al */
  W8((uint32_t)(0xb7e634u), (eax & 0xffu));
/* 9e6d75: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6d90(void) {
  LOAD_REGS();
L_9e6d90: /* 9e6d90: push 0xad0040 */
  { uint32_t v = 0xad0040u; esp -= 4; W32(esp, v); }
/* 9e6d95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6d97: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6d9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6d9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6da0: mov byte ptr [0xb7e635], al */
  W8((uint32_t)(0xb7e635u), (eax & 0xffu));
/* 9e6da5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6dc0(void) {
  LOAD_REGS();
L_9e6dc0: /* 9e6dc0: push 0xad0044 */
  { uint32_t v = 0xad0044u; esp -= 4; W32(esp, v); }
/* 9e6dc5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6dc7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6dcdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6dcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6dd0: mov byte ptr [0xb7e636], al */
  W8((uint32_t)(0xb7e636u), (eax & 0xffu));
/* 9e6dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6df0(void) {
  LOAD_REGS();
L_9e6df0: /* 9e6df0: push 0xad0048 */
  { uint32_t v = 0xad0048u; esp -= 4; W32(esp, v); }
/* 9e6df5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6df7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6dfdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6dfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6e00: mov byte ptr [0xb7e637], al */
  W8((uint32_t)(0xb7e637u), (eax & 0xffu));
/* 9e6e05: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6e20(void) {
  LOAD_REGS();
L_9e6e20: /* 9e6e20: push 0xad004c */
  { uint32_t v = 0xad004cu; esp -= 4; W32(esp, v); }
/* 9e6e25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6e27: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6e2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6e2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6e30: mov byte ptr [0xb7e638], al */
  W8((uint32_t)(0xb7e638u), (eax & 0xffu));
/* 9e6e35: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6e50(void) {
  LOAD_REGS();
L_9e6e50: /* 9e6e50: push 0xad0050 */
  { uint32_t v = 0xad0050u; esp -= 4; W32(esp, v); }
/* 9e6e55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6e57: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6e5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6e5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6e60: mov byte ptr [0xb7e639], al */
  W8((uint32_t)(0xb7e639u), (eax & 0xffu));
/* 9e6e65: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6e80(void) {
  LOAD_REGS();
L_9e6e80: /* 9e6e80: push 0xad0054 */
  { uint32_t v = 0xad0054u; esp -= 4; W32(esp, v); }
/* 9e6e85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6e87: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6e8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6e8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6e90: mov byte ptr [0xb7e63a], al */
  W8((uint32_t)(0xb7e63au), (eax & 0xffu));
/* 9e6e95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6eb0(void) {
  LOAD_REGS();
L_9e6eb0: /* 9e6eb0: push 0xad0058 */
  { uint32_t v = 0xad0058u; esp -= 4; W32(esp, v); }
/* 9e6eb5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6eb7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6ebdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6ebd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6ec0: mov byte ptr [0xb7e63b], al */
  W8((uint32_t)(0xb7e63bu), (eax & 0xffu));
/* 9e6ec5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6ee0(void) {
  LOAD_REGS();
L_9e6ee0: /* 9e6ee0: push 0xad005c */
  { uint32_t v = 0xad005cu; esp -= 4; W32(esp, v); }
/* 9e6ee5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6ee7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6eedu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6eed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6ef0: mov byte ptr [0xb7e63c], al */
  W8((uint32_t)(0xb7e63cu), (eax & 0xffu));
/* 9e6ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6f10(void) {
  LOAD_REGS();
L_9e6f10: /* 9e6f10: push 0xad0060 */
  { uint32_t v = 0xad0060u; esp -= 4; W32(esp, v); }
/* 9e6f15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6f17: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6f1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6f1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6f20: mov byte ptr [0xb7e63d], al */
  W8((uint32_t)(0xb7e63du), (eax & 0xffu));
/* 9e6f25: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6f40(void) {
  LOAD_REGS();
L_9e6f40: /* 9e6f40: push 0xad0064 */
  { uint32_t v = 0xad0064u; esp -= 4; W32(esp, v); }
/* 9e6f45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6f47: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6f4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6f4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6f50: mov byte ptr [0xb7e63e], al */
  W8((uint32_t)(0xb7e63eu), (eax & 0xffu));
/* 9e6f55: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6f70(void) {
  LOAD_REGS();
L_9e6f70: /* 9e6f70: push 0xad0068 */
  { uint32_t v = 0xad0068u; esp -= 4; W32(esp, v); }
/* 9e6f75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6f77: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6f7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6f7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6f80: mov byte ptr [0xb7e63f], al */
  W8((uint32_t)(0xb7e63fu), (eax & 0xffu));
/* 9e6f85: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6fa0(void) {
  LOAD_REGS();
L_9e6fa0: /* 9e6fa0: push 0xad006c */
  { uint32_t v = 0xad006cu; esp -= 4; W32(esp, v); }
/* 9e6fa5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6fa7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6fadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6fad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6fb0: mov byte ptr [0xb7e640], al */
  W8((uint32_t)(0xb7e640u), (eax & 0xffu));
/* 9e6fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e6fd0(void) {
  LOAD_REGS();
L_9e6fd0: /* 9e6fd0: push 0xad0070 */
  { uint32_t v = 0xad0070u; esp -= 4; W32(esp, v); }
/* 9e6fd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e6fd7: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e6fddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e6fdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e6fe0: mov byte ptr [0xb7e641], al */
  W8((uint32_t)(0xb7e641u), (eax & 0xffu));
/* 9e6fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7000(void) {
  LOAD_REGS();
L_9e7000: /* 9e7000: push 0xad0074 */
  { uint32_t v = 0xad0074u; esp -= 4; W32(esp, v); }
/* 9e7005: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e7007: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e700du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e700d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7010: mov byte ptr [0xb7e642], al */
  W8((uint32_t)(0xb7e642u), (eax & 0xffu));
/* 9e7015: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7030(void) {
  LOAD_REGS();
L_9e7030: /* 9e7030: push 0xad0078 */
  { uint32_t v = 0xad0078u; esp -= 4; W32(esp, v); }
/* 9e7035: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e7037: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e703du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e703d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7040: mov byte ptr [0xb7e643], al */
  W8((uint32_t)(0xb7e643u), (eax & 0xffu));
/* 9e7045: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7060(void) {
  LOAD_REGS();
L_9e7060: /* 9e7060: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e706a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e706c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7070: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7076u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7076: push 0x6c5d08 */
  { uint32_t v = 0x6c5d08u; esp -= 4; W32(esp, v); }
/* 9e707b: push 0x6c3369 */
  { uint32_t v = 0x6c3369u; esp -= 4; W32(esp, v); }
/* 9e7080: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7085: mov esi, eax */
  esi = eax;
/* 9e7087: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e708du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e708d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9e708f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9e7092: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7093: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7098: push 0xad193e */
  { uint32_t v = 0xad193eu; esp -= 4; W32(esp, v); }
/* 9e709d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e70a0: mov eax, esp */
  eax = esp;
/* 9e70a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9e70a4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9e70a7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9e70aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9e70ad: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9e70b0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9e70b3: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e70b9u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e70b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e70ba: call dword ptr [0xcfa878] */
  esp -= 4; W32(esp, 0x9e70c0u); SPILL(); f_4e1104(); if (g_unwind) return; /* Core!?StaticClass@UCommandlet@@SAPAVUClass@@XZ */ RELOAD();
/* 9e70c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e70c1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e70c3: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 9e70c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e70ca: mov ecx, 0xb7e648 */
  ecx = 0xb7e648u;
/* 9e70cf: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e70d5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e70d5: push 0x9f11a0 */
  { uint32_t v = 0x9f11a0u; esp -= 4; W32(esp, v); }
/* 9e70da: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e70dfu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e70df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e70e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e70e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e70e6: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7120(void) {
  LOAD_REGS();
L_9e7120: /* 9e7120: mov dword ptr [0xb7eb74], 0xb7e648 */
  W32((uint32_t)(0xb7eb74u), 0xb7e648u);
/* 9e712a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7140(void) {
  LOAD_REGS();
L_9e7140: /* 9e7140: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7143: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7144: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7146: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7148: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e714a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e714c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7150: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7156u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7156: push 0x6c7004 */
  { uint32_t v = 0x6c7004u; esp -= 4; W32(esp, v); }
/* 9e715b: push 0x6c8db4 */
  { uint32_t v = 0x6c8db4u; esp -= 4; W32(esp, v); }
/* 9e7160: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7165: mov esi, eax */
  esi = eax;
/* 9e7167: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e716du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e716d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9e716f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9e7172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7173: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7178: push 0xad2822 */
  { uint32_t v = 0xad2822u; esp -= 4; W32(esp, v); }
/* 9e717d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7180: mov eax, esp */
  eax = esp;
/* 9e7182: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9e7184: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9e7187: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9e718a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9e718d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9e7190: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9e7193: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7199u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e719a: call dword ptr [0xcfa878] */
  esp -= 4; W32(esp, 0x9e71a0u); SPILL(); f_4e1104(); if (g_unwind) return; /* Core!?StaticClass@UCommandlet@@SAPAVUClass@@XZ */ RELOAD();
/* 9e71a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e71a1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e71a3: push 0x1ec */
  { uint32_t v = 0x1ecu; esp -= 4; W32(esp, v); }
/* 9e71a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e71aa: mov ecx, 0xb7eb78 */
  ecx = 0xb7eb78u;
/* 9e71af: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e71b5u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e71b5: push 0x9f11c0 */
  { uint32_t v = 0x9f11c0u; esp -= 4; W32(esp, v); }
/* 9e71ba: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e71bfu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e71bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e71c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e71c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e71c6: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7200(void) {
  LOAD_REGS();
L_9e7200: /* 9e7200: mov dword ptr [0xb7f0a4], 0xb7eb78 */
  W32((uint32_t)(0xb7f0a4u), 0xb7eb78u);
/* 9e720a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7220(void) {
  LOAD_REGS();
L_9e7220: /* 9e7220: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7224: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7226: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e722a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e722c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7230: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7236u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7236: mov esi, eax */
  esi = eax;
/* 9e7238: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e723d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e723e: push 0x6ccc2f */
  { uint32_t v = 0x6ccc2fu; esp -= 4; W32(esp, v); }
/* 9e7243: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7248: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e724eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e724e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7251: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7254: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7259: push 0xad284e */
  { uint32_t v = 0xad284eu; esp -= 4; W32(esp, v); }
/* 9e725e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7261: mov ecx, esp */
  ecx = esp;
/* 9e7263: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7265: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7268: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e726b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e726e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7271: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7274: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e727au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e727a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e727b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7281u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7282: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e7284: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9e7286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7288: mov ecx, 0xb7f0a8 */
  ecx = 0xb7f0a8u;
/* 9e728d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7293u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7293: push 0x9f11e0 */
  { uint32_t v = 0x9f11e0u; esp -= 4; W32(esp, v); }
/* 9e7298: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e729du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e729d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e72a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e72a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e72a4: ret  */
  esp += 4; SPILL(); return;
}

void f_9e72e0(void) {
  LOAD_REGS();
L_9e72e0: /* 9e72e0: mov dword ptr [0xb7f5d4], 0xb7f0a8 */
  W32((uint32_t)(0xb7f5d4u), 0xb7f0a8u);
/* 9e72ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7300(void) {
  LOAD_REGS();
L_9e7300: /* 9e7300: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7304: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7308: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e730a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e730c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7310: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7316u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7316: mov esi, eax */
  esi = eax;
/* 9e7318: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e731d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e731e: push 0x6cb11d */
  { uint32_t v = 0x6cb11du; esp -= 4; W32(esp, v); }
/* 9e7323: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7328: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e732eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e732e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7331: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7334: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7339: push 0xad4196 */
  { uint32_t v = 0xad4196u; esp -= 4; W32(esp, v); }
/* 9e733e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7341: mov ecx, esp */
  ecx = esp;
/* 9e7343: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7345: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7348: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e734b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e734e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7351: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7354: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e735au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e735a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e735b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7361u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7362: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 9e7367: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e7369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e736b: mov ecx, 0xb7fbd0 */
  ecx = 0xb7fbd0u;
/* 9e7370: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7376u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7376: push 0x9f1200 */
  { uint32_t v = 0x9f1200u; esp -= 4; W32(esp, v); }
/* 9e737b: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7380u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7380: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7383: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7384: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7387: ret  */
  esp += 4; SPILL(); return;
}

void f_9e73c0(void) {
  LOAD_REGS();
L_9e73c0: /* 9e73c0: mov dword ptr [0xb800fc], 0xb7fbd0 */
  W32((uint32_t)(0xb800fcu), 0xb7fbd0u);
/* 9e73ca: ret  */
  esp += 4; SPILL(); return;
}

void f_9e73e0(void) {
  LOAD_REGS();
L_9e73e0: /* 9e73e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e73e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e73e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e73e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e73e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e73ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e73ec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e73f0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e73f6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e73f6: mov esi, eax */
  esi = eax;
/* 9e73f8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e73fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e73fe: push 0x6c8a3a */
  { uint32_t v = 0x6c8a3au; esp -= 4; W32(esp, v); }
/* 9e7403: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7408: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e740eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e740e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7411: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7414: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7419: push 0xad4292 */
  { uint32_t v = 0xad4292u; esp -= 4; W32(esp, v); }
/* 9e741e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7421: mov ecx, esp */
  ecx = esp;
/* 9e7423: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7425: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7428: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e742b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e742e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7431: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7434: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e743au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e743a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e743b: push 0xb66a98 */
  { uint32_t v = 0xb66a98u; esp -= 4; W32(esp, v); }
/* 9e7440: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7442: push 0x440 */
  { uint32_t v = 0x440u; esp -= 4; W32(esp, v); }
/* 9e7447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7449: mov ecx, 0xb80210 */
  ecx = 0xb80210u;
/* 9e744e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7454u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7454: push 0x9f1220 */
  { uint32_t v = 0x9f1220u; esp -= 4; W32(esp, v); }
/* 9e7459: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e745eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e745e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7462: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7465: ret  */
  esp += 4; SPILL(); return;
}

void f_9e74a0(void) {
  LOAD_REGS();
L_9e74a0: /* 9e74a0: mov dword ptr [0xb8073c], 0xb80210 */
  W32((uint32_t)(0xb8073cu), 0xb80210u);
/* 9e74aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e74c0(void) {
  LOAD_REGS();
L_9e74c0: /* 9e74c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e74c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e74c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e74c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e74c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e74ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e74cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e74d0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e74d6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e74d6: mov esi, eax */
  esi = eax;
/* 9e74d8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e74dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e74de: push 0x6cc379 */
  { uint32_t v = 0x6cc379u; esp -= 4; W32(esp, v); }
/* 9e74e3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e74e8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e74eeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e74ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e74f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e74f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e74f4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e74f9: push 0xad42b6 */
  { uint32_t v = 0xad42b6u; esp -= 4; W32(esp, v); }
/* 9e74fe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7501: mov ecx, esp */
  ecx = esp;
/* 9e7503: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7505: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7508: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e750b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e750e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7511: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7514: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e751au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e751a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e751b: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9e7520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7522: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9e7524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7526: mov ecx, 0xb80740 */
  ecx = 0xb80740u;
/* 9e752b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7531u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7531: push 0x9f1240 */
  { uint32_t v = 0x9f1240u; esp -= 4; W32(esp, v); }
/* 9e7536: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e753bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e753b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e753e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e753f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7542: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7580(void) {
  LOAD_REGS();
L_9e7580: /* 9e7580: mov dword ptr [0xb80c6c], 0xb80740 */
  W32((uint32_t)(0xb80c6cu), 0xb80740u);
/* 9e758a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e75a0(void) {
  LOAD_REGS();
L_9e75a0: /* 9e75a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e75a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e75a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e75a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e75a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e75aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e75ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e75b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e75b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e75b6: mov esi, eax */
  esi = eax;
/* 9e75b8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e75bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e75be: push 0x6c28b0 */
  { uint32_t v = 0x6c28b0u; esp -= 4; W32(esp, v); }
/* 9e75c3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e75c8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e75ceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e75ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e75d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e75d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e75d4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e75d9: push 0xad42e6 */
  { uint32_t v = 0xad42e6u; esp -= 4; W32(esp, v); }
/* 9e75de: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e75e1: mov ecx, esp */
  ecx = esp;
/* 9e75e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e75e5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e75e8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e75eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e75ee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e75f1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e75f4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e75fau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e75fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e75fb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9e7600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7602: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 9e7607: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7609: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 9e760e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7614u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7614: push 0x9f1260 */
  { uint32_t v = 0x9f1260u; esp -= 4; W32(esp, v); }
/* 9e7619: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e761eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e761e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7621: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7622: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7625: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7660(void) {
  LOAD_REGS();
L_9e7660: /* 9e7660: mov dword ptr [0xb8119c], 0xb80c70 */
  W32((uint32_t)(0xb8119cu), 0xb80c70u);
/* 9e766a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7680(void) {
  LOAD_REGS();
L_9e7680: /* 9e7680: push 0xad4374 */
  { uint32_t v = 0xad4374u; esp -= 4; W32(esp, v); }
/* 9e7685: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9e7687: call dword ptr [0xcfa7d0] */
  esp -= 4; W32(esp, 0x9e768du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* 9e768d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7690: mov byte ptr [0xb811a0], al */
  W8((uint32_t)(0xb811a0u), (eax & 0xffu));
/* 9e7695: ret  */
  esp += 4; SPILL(); return;
}

void f_9e76b0(void) {
  LOAD_REGS();
L_9e76b0: /* 9e76b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e76b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e76b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e76b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e76b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e76ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e76bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e76c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e76c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e76c6: mov esi, eax */
  esi = eax;
/* 9e76c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e76cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e76ce: push 0x6c87f1 */
  { uint32_t v = 0x6c87f1u; esp -= 4; W32(esp, v); }
/* 9e76d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e76d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e76deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e76de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e76e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e76e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e76e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e76e9: push 0xad462e */
  { uint32_t v = 0xad462eu; esp -= 4; W32(esp, v); }
/* 9e76ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e76f1: mov ecx, esp */
  ecx = esp;
/* 9e76f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e76f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e76f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e76fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e76fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7701: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7704: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e770au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e770a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e770b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7711u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7712: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7714: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 9e7716: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7718: mov ecx, 0xb814c0 */
  ecx = 0xb814c0u;
/* 9e771d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7723u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7723: push 0x9f1280 */
  { uint32_t v = 0x9f1280u; esp -= 4; W32(esp, v); }
/* 9e7728: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e772du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e772d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7731: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7734: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7770(void) {
  LOAD_REGS();
L_9e7770: /* 9e7770: mov dword ptr [0xb819ec], 0xb814c0 */
  W32((uint32_t)(0xb819ecu), 0xb814c0u);
/* 9e777a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7790(void) {
  LOAD_REGS();
L_9e7790: /* 9e7790: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7794: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7796: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7798: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e779a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e779c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e77a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e77a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e77a6: push 0x6cbbea */
  { uint32_t v = 0x6cbbeau; esp -= 4; W32(esp, v); }
/* 9e77ab: push 0x6c75c7 */
  { uint32_t v = 0x6c75c7u; esp -= 4; W32(esp, v); }
/* 9e77b0: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e77b5: mov esi, eax */
  esi = eax;
/* 9e77b7: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e77bdu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e77bd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9e77bf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9e77c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e77c3: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e77c8: push 0xad4642 */
  { uint32_t v = 0xad4642u; esp -= 4; W32(esp, v); }
/* 9e77cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e77d0: mov eax, esp */
  eax = esp;
/* 9e77d2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9e77d4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9e77d7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9e77da: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9e77dd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9e77e0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9e77e3: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e77e9u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e77e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e77ea: push 0xb7d828 */
  { uint32_t v = 0xb7d828u; esp -= 4; W32(esp, v); }
/* 9e77ef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9e77f1: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 9e77f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e77f8: mov ecx, 0xb81b88 */
  ecx = 0xb81b88u;
/* 9e77fd: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7803u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7803: push 0x9f12a0 */
  { uint32_t v = 0x9f12a0u; esp -= 4; W32(esp, v); }
/* 9e7808: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e780du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e780d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7810: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7811: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7814: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7850(void) {
  LOAD_REGS();
L_9e7850: /* 9e7850: mov dword ptr [0xb820b4], 0xb81b88 */
  W32((uint32_t)(0xb820b4u), 0xb81b88u);
/* 9e785a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7870(void) {
  LOAD_REGS();
L_9e7870: /* 9e7870: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7875: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7877: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7879: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e787b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9e787f: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7885u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7885: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9e7887: push 0x6c62d0 */
  { uint32_t v = 0x6c62d0u; esp -= 4; W32(esp, v); }
/* 9e788c: push 0x6c382d */
  { uint32_t v = 0x6c382du; esp -= 4; W32(esp, v); }
/* 9e7891: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7896: push 0xac3a2c */
  { uint32_t v = 0xac3a2cu; esp -= 4; W32(esp, v); }
/* 9e789b: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e78a0: push 0xadd4a2 */
  { uint32_t v = 0xadd4a2u; esp -= 4; W32(esp, v); }
/* 9e78a5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e78a8: mov ecx, esp */
  ecx = esp;
/* 9e78aa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e78ac: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9e78af: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9e78b2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9e78b5: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9e78b8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e78bb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e78be: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e78c4u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e78c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e78c5: call dword ptr [0xcfa61c] */
  esp -= 4; W32(esp, 0x9e78cbu); SPILL(); f_4e3850(); if (g_unwind) return; /* Core!?StaticClass@USubsystem@@SAPAVUClass@@XZ */ RELOAD();
/* 9e78cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e78cc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9e78ce: push 0xfb0 */
  { uint32_t v = 0xfb0u; esp -= 4; W32(esp, v); }
/* 9e78d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e78d5: mov ecx, 0xb82238 */
  ecx = 0xb82238u;
/* 9e78da: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e78e0u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e78e0: push 0x9f12c0 */
  { uint32_t v = 0x9f12c0u; esp -= 4; W32(esp, v); }
/* 9e78e5: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e78eau); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e78ea: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e78ed: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7910(void) {
  LOAD_REGS();
L_9e7910: /* 9e7910: mov dword ptr [0xb82764], 0xb82238 */
  W32((uint32_t)(0xb82764u), 0xb82238u);
/* 9e791a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7930(void) {
  LOAD_REGS();
L_9e7930: /* 9e7930: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7934: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7936: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e793a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e793c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7940: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7946u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7946: mov esi, eax */
  esi = eax;
/* 9e7948: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e794d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e794e: push 0x6c8a76 */
  { uint32_t v = 0x6c8a76u; esp -= 4; W32(esp, v); }
/* 9e7953: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7958: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e795eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e795e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7961: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7964: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7969: push 0xadd9da */
  { uint32_t v = 0xadd9dau; esp -= 4; W32(esp, v); }
/* 9e796e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7971: mov ecx, esp */
  ecx = esp;
/* 9e7973: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7975: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7978: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e797b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e797e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7981: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7984: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e798au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e798a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e798b: push 0xb83b30 */
  { uint32_t v = 0xb83b30u; esp -= 4; W32(esp, v); }
/* 9e7990: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7992: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 9e7994: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7996: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 9e799b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e79a1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e79a1: push 0x9f12e0 */
  { uint32_t v = 0x9f12e0u; esp -= 4; W32(esp, v); }
/* 9e79a6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e79abu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e79ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e79ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e79af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e79b2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e79f0(void) {
  LOAD_REGS();
L_9e79f0: /* 9e79f0: mov dword ptr [0xb82dac], 0xb82880 */
  W32((uint32_t)(0xb82dacu), 0xb82880u);
/* 9e79fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7a10(void) {
  LOAD_REGS();
L_9e7a10: /* 9e7a10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7a13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7a14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7a16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7a18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7a1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7a1c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7a20: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7a26u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7a26: mov esi, eax */
  esi = eax;
/* 9e7a28: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7a2e: push 0x6c4d77 */
  { uint32_t v = 0x6c4d77u; esp -= 4; W32(esp, v); }
/* 9e7a33: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7a38: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7a3eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7a3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7a41: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7a44: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7a49: push 0xadd9f6 */
  { uint32_t v = 0xadd9f6u; esp -= 4; W32(esp, v); }
/* 9e7a4e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7a51: mov ecx, esp */
  ecx = esp;
/* 9e7a53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7a55: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7a58: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7a5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7a5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7a61: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7a64: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7a6au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7a6b: push 0xb82880 */
  { uint32_t v = 0xb82880u; esp -= 4; W32(esp, v); }
/* 9e7a70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9e7a72: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 9e7a77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7a79: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 9e7a7e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7a84u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7a84: push 0x9f1300 */
  { uint32_t v = 0x9f1300u; esp -= 4; W32(esp, v); }
/* 9e7a89: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7a8eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7a8e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7a91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7a92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7a95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7ad0(void) {
  LOAD_REGS();
L_9e7ad0: /* 9e7ad0: mov dword ptr [0xb832dc], 0xb82db0 */
  W32((uint32_t)(0xb832dcu), 0xb82db0u);
/* 9e7ada: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7af0(void) {
  LOAD_REGS();
L_9e7af0: /* 9e7af0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7af3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7af4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7af6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7af8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7afa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7afc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7b00: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7b06u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7b06: mov esi, eax */
  esi = eax;
/* 9e7b08: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7b0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7b0e: push 0x6c7351 */
  { uint32_t v = 0x6c7351u; esp -= 4; W32(esp, v); }
/* 9e7b13: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7b18: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7b1eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7b1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7b21: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7b24: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7b29: push 0xadda0a */
  { uint32_t v = 0xadda0au; esp -= 4; W32(esp, v); }
/* 9e7b2e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7b31: mov ecx, esp */
  ecx = esp;
/* 9e7b33: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7b35: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7b38: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7b3b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7b3e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7b41: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7b44: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7b4au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7b4b: push 0xb82880 */
  { uint32_t v = 0xb82880u; esp -= 4; W32(esp, v); }
/* 9e7b50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7b52: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9e7b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7b56: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 9e7b5b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7b61u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7b61: push 0x9f1320 */
  { uint32_t v = 0x9f1320u; esp -= 4; W32(esp, v); }
/* 9e7b66: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7b6bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7b6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7b6f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7b72: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7bb0(void) {
  LOAD_REGS();
L_9e7bb0: /* 9e7bb0: mov dword ptr [0xb8380c], 0xb832e0 */
  W32((uint32_t)(0xb8380cu), 0xb832e0u);
/* 9e7bba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7bd0(void) {
  LOAD_REGS();
L_9e7bd0: /* 9e7bd0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7bd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7bd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7bd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7bdc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7be0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7be6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7be6: mov esi, eax */
  esi = eax;
/* 9e7be8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7bed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7bee: push 0x6cb8b6 */
  { uint32_t v = 0x6cb8b6u; esp -= 4; W32(esp, v); }
/* 9e7bf3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7bf8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7bfeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7bfe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7c01: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7c04: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7c09: push 0xaddb9e */
  { uint32_t v = 0xaddb9eu; esp -= 4; W32(esp, v); }
/* 9e7c0e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7c11: mov ecx, esp */
  ecx = esp;
/* 9e7c13: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7c15: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7c18: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7c1b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7c1e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7c21: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7c24: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7c2au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7c2b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7c31u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7c34: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9e7c36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7c38: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 9e7c3d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7c43u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7c43: push 0x9f1340 */
  { uint32_t v = 0x9f1340u; esp -= 4; W32(esp, v); }
/* 9e7c48: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7c4du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7c4d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7c51: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7c54: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7c90(void) {
  LOAD_REGS();
L_9e7c90: /* 9e7c90: mov dword ptr [0xb8405c], 0xb83b30 */
  W32((uint32_t)(0xb8405cu), 0xb83b30u);
/* 9e7c9a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7cb0(void) {
  LOAD_REGS();
L_9e7cb0: /* 9e7cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7cb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7cb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7cba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7cbc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7cc0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7cc6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7cc6: mov esi, eax */
  esi = eax;
/* 9e7cc8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7cce: push 0x6c663b */
  { uint32_t v = 0x6c663bu; esp -= 4; W32(esp, v); }
/* 9e7cd3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7cd8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7cdeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7cde: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7ce1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7ce4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7ce9: push 0xaddbba */
  { uint32_t v = 0xaddbbau; esp -= 4; W32(esp, v); }
/* 9e7cee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7cf1: mov ecx, esp */
  ecx = esp;
/* 9e7cf3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7cf5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7cf8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7cfb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7cfe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7d01: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7d04: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7d0au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7d0b: push 0xb83b30 */
  { uint32_t v = 0xb83b30u; esp -= 4; W32(esp, v); }
/* 9e7d10: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e7d12: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9e7d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7d16: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 9e7d1b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7d21u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7d21: push 0x9f1360 */
  { uint32_t v = 0x9f1360u; esp -= 4; W32(esp, v); }
/* 9e7d26: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7d2bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7d2b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7d2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7d2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7d32: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7d70(void) {
  LOAD_REGS();
L_9e7d70: /* 9e7d70: mov dword ptr [0xb8458c], 0xb84060 */
  W32((uint32_t)(0xb8458cu), 0xb84060u);
/* 9e7d7a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7d90(void) {
  LOAD_REGS();
L_9e7d90: /* 9e7d90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7d93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7d94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7d96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7d9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7d9c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7da0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7da6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7da6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e7dac: mov esi, eax */
  esi = eax;
/* 9e7dae: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7db3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7db4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e7db5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7dba: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7dc0u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7dc0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e7dc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7dc4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e7dc6: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7dcb: push 0xadea4a */
  { uint32_t v = 0xadea4au; esp -= 4; W32(esp, v); }
/* 9e7dd0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7dd3: mov edx, esp */
  edx = esp;
/* 9e7dd5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e7dd7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e7dda: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e7ddd: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e7de0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e7de3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e7de6: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7decu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7ded: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7df3u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7df3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7df4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9e7df6: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 9e7dfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7dfd: mov ecx, 0xb847e8 */
  ecx = 0xb847e8u;
/* 9e7e02: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7e08u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7e08: push 0x9f1380 */
  { uint32_t v = 0x9f1380u; esp -= 4; W32(esp, v); }
/* 9e7e0d: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7e12u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7e12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7e15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7e16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7e19: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7e50(void) {
  LOAD_REGS();
L_9e7e50: /* 9e7e50: mov dword ptr [0xb84d14], 0xb847e8 */
  W32((uint32_t)(0xb84d14u), 0xb847e8u);
/* 9e7e5a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7e70(void) {
  LOAD_REGS();
L_9e7e70: /* 9e7e70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7e73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7e74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7e76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7e78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7e7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7e7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7e80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7e86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7e86: mov esi, eax */
  esi = eax;
/* 9e7e88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7e8e: push 0x6cceff */
  { uint32_t v = 0x6cceffu; esp -= 4; W32(esp, v); }
/* 9e7e93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7e98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7e9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7e9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7ea1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7ea4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7ea9: push 0xadeb6e */
  { uint32_t v = 0xadeb6eu; esp -= 4; W32(esp, v); }
/* 9e7eae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7eb1: mov ecx, esp */
  ecx = esp;
/* 9e7eb3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7eb5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7eb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7ebb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7ebe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7ec1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7ec4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7ecau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7eca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7ecb: push 0xb847e8 */
  { uint32_t v = 0xb847e8u; esp -= 4; W32(esp, v); }
/* 9e7ed0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7ed2: push 0x11b8 */
  { uint32_t v = 0x11b8u; esp -= 4; W32(esp, v); }
/* 9e7ed7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7ed9: mov ecx, 0xb84d18 */
  ecx = 0xb84d18u;
/* 9e7ede: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7ee4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7ee4: push 0x9f13a0 */
  { uint32_t v = 0x9f13a0u; esp -= 4; W32(esp, v); }
/* 9e7ee9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7eeeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7eee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7ef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7ef2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7f30(void) {
  LOAD_REGS();
L_9e7f30: /* 9e7f30: mov dword ptr [0xb85244], 0xb84d18 */
  W32((uint32_t)(0xb85244u), 0xb84d18u);
/* 9e7f3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e7f50(void) {
  LOAD_REGS();
L_9e7f50: /* 9e7f50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7f53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e7f54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7f56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7f58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7f5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e7f60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e7f66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e7f66: mov esi, eax */
  esi = eax;
/* 9e7f68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e7f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7f6e: push 0x6c506a */
  { uint32_t v = 0x6c506au; esp -= 4; W32(esp, v); }
/* 9e7f73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e7f78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e7f7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e7f7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e7f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7f81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e7f84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e7f89: push 0xadfd82 */
  { uint32_t v = 0xadfd82u; esp -= 4; W32(esp, v); }
/* 9e7f8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e7f91: mov ecx, esp */
  ecx = esp;
/* 9e7f93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e7f95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e7f98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e7f9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e7f9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e7fa1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e7fa4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e7faau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e7faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e7fab: push 0xb90920 */
  { uint32_t v = 0xb90920u; esp -= 4; W32(esp, v); }
/* 9e7fb0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9e7fb2: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 9e7fb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e7fb6: mov ecx, 0xb85470 */
  ecx = 0xb85470u;
/* 9e7fbb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e7fc1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e7fc1: push 0x9f13c0 */
  { uint32_t v = 0x9f13c0u; esp -= 4; W32(esp, v); }
/* 9e7fc6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e7fcbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e7fcb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7fce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e7fcf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e7fd2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8010(void) {
  LOAD_REGS();
L_9e8010: /* 9e8010: mov dword ptr [0xb8599c], 0xb85470 */
  W32((uint32_t)(0xb8599cu), 0xb85470u);
/* 9e801a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8030(void) {
  LOAD_REGS();
L_9e8030: /* 9e8030: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8034: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8036: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e803a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e803c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8040: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8046u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8046: mov esi, eax */
  esi = eax;
/* 9e8048: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e804e: push 0x6ccc98 */
  { uint32_t v = 0x6ccc98u; esp -= 4; W32(esp, v); }
/* 9e8053: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8058: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e805eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e805e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8061: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8064: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8069: push 0xadfda6 */
  { uint32_t v = 0xadfda6u; esp -= 4; W32(esp, v); }
/* 9e806e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8071: mov ecx, esp */
  ecx = esp;
/* 9e8073: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8075: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8078: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e807b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e807e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8081: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8084: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e808au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e808a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e808b: push 0xb90e50 */
  { uint32_t v = 0xb90e50u; esp -= 4; W32(esp, v); }
/* 9e8090: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9e8092: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 9e8097: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8099: mov ecx, 0xb859a0 */
  ecx = 0xb859a0u;
/* 9e809e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e80a4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e80a4: push 0x9f13e0 */
  { uint32_t v = 0x9f13e0u; esp -= 4; W32(esp, v); }
/* 9e80a9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e80aeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e80ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e80b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e80b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e80b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e80f0(void) {
  LOAD_REGS();
L_9e80f0: /* 9e80f0: mov dword ptr [0xb85ecc], 0xb859a0 */
  W32((uint32_t)(0xb85eccu), 0xb859a0u);
/* 9e80fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8110(void) {
  LOAD_REGS();
L_9e8110: /* 9e8110: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8116: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e811a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e811c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8120: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8126u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8126: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e812c: mov esi, eax */
  esi = eax;
/* 9e812e: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e8135: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e813a: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8140u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8140: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e8143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8144: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e8146: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e814b: push 0xadfe0a */
  { uint32_t v = 0xadfe0au; esp -= 4; W32(esp, v); }
/* 9e8150: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8153: mov edx, esp */
  edx = esp;
/* 9e8155: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e8157: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e815a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e815d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e8160: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e8163: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e8166: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e816cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e816c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e816d: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8173u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8174: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9e8176: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e8178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e817a: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 9e817f: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8185u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8185: push 0x9f1400 */
  { uint32_t v = 0x9f1400u; esp -= 4; W32(esp, v); }
/* 9e818a: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e818fu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e818f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8192: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8193: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8196: ret  */
  esp += 4; SPILL(); return;
}

void f_9e81d0(void) {
  LOAD_REGS();
L_9e81d0: /* 9e81d0: mov dword ptr [0xb8662c], 0xb86100 */
  W32((uint32_t)(0xb8662cu), 0xb86100u);
/* 9e81da: ret  */
  esp += 4; SPILL(); return;
}

void f_9e81f0(void) {
  LOAD_REGS();
L_9e81f0: /* 9e81f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e81f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e81f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e81f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e81f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e81fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e81fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8200: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8206u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8206: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e820c: mov esi, eax */
  esi = eax;
/* 9e820e: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e8215: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e821a: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8220u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8220: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e8223: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8224: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e8226: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e822b: push 0xadfe1e */
  { uint32_t v = 0xadfe1eu; esp -= 4; W32(esp, v); }
/* 9e8230: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8233: mov edx, esp */
  edx = esp;
/* 9e8235: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e8237: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e823a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e823d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e8240: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e8243: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e8246: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e824cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e824c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e824d: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9e8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9e8254: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 9e8256: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8258: mov ecx, 0xb86630 */
  ecx = 0xb86630u;
/* 9e825d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8263u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8263: push 0x9f1420 */
  { uint32_t v = 0x9f1420u; esp -= 4; W32(esp, v); }
/* 9e8268: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e826du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e826d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8271: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8274: ret  */
  esp += 4; SPILL(); return;
}

void f_9e82b0(void) {
  LOAD_REGS();
L_9e82b0: /* 9e82b0: mov dword ptr [0xb86b5c], 0xb86630 */
  W32((uint32_t)(0xb86b5cu), 0xb86630u);
/* 9e82ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e82d0(void) {
  LOAD_REGS();
L_9e82d0: /* 9e82d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e82d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e82d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e82d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e82d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e82da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e82dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e82e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e82e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e82e6: mov esi, eax */
  esi = eax;
/* 9e82e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e82ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e82ee: push 0x6c92e6 */
  { uint32_t v = 0x6c92e6u; esp -= 4; W32(esp, v); }
/* 9e82f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e82f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e82feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e82fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8301: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8304: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8309: push 0xadfe3e */
  { uint32_t v = 0xadfe3eu; esp -= 4; W32(esp, v); }
/* 9e830e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8311: mov ecx, esp */
  ecx = esp;
/* 9e8313: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8315: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8318: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e831b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e831e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8321: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8324: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e832au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e832a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e832b: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 9e8330: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8332: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9e8334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8336: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 9e833b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8341u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8341: push 0x9f1440 */
  { uint32_t v = 0x9f1440u; esp -= 4; W32(esp, v); }
/* 9e8346: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e834bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e834b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e834e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e834f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8352: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8390(void) {
  LOAD_REGS();
L_9e8390: /* 9e8390: mov dword ptr [0xb8708c], 0xb86b60 */
  W32((uint32_t)(0xb8708cu), 0xb86b60u);
/* 9e839a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e83b0(void) {
  LOAD_REGS();
L_9e83b0: /* 9e83b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e83b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e83b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e83b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e83b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e83ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e83bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e83c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e83c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e83c6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9e83cc: mov esi, eax */
  esi = eax;
/* 9e83ce: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e83d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e83d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9e83d5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e83da: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e83e0u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e83e0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9e83e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e83e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9e83e6: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e83eb: push 0xadfe6a */
  { uint32_t v = 0xadfe6au; esp -= 4; W32(esp, v); }
/* 9e83f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e83f3: mov edx, esp */
  edx = esp;
/* 9e83f5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9e83f7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9e83fa: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9e83fd: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9e8400: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9e8403: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9e8406: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e840cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e840c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e840d: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 9e8412: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9e8414: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e8416: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8418: mov ecx, 0xb87090 */
  ecx = 0xb87090u;
/* 9e841d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8423u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8423: push 0x9f1460 */
  { uint32_t v = 0x9f1460u; esp -= 4; W32(esp, v); }
/* 9e8428: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e842du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e842d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8430: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8431: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8434: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8470(void) {
  LOAD_REGS();
L_9e8470: /* 9e8470: mov dword ptr [0xb875bc], 0xb87090 */
  W32((uint32_t)(0xb875bcu), 0xb87090u);
/* 9e847a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8490(void) {
  LOAD_REGS();
L_9e8490: /* 9e8490: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8494: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8496: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8498: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e849a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e849c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e84a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e84a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e84a6: mov esi, eax */
  esi = eax;
/* 9e84a8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e84ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e84ae: push 0x6c3dfa */
  { uint32_t v = 0x6c3dfau; esp -= 4; W32(esp, v); }
/* 9e84b3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e84b8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e84beu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e84be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e84c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e84c4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e84c9: push 0xadfe8e */
  { uint32_t v = 0xadfe8eu; esp -= 4; W32(esp, v); }
/* 9e84ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e84d1: mov ecx, esp */
  ecx = esp;
/* 9e84d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e84d5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e84d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e84db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e84de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e84e1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e84e4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e84eau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e84ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e84eb: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9e84f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e84f2: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9e84f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e84f6: mov ecx, 0xb875c0 */
  ecx = 0xb875c0u;
/* 9e84fb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8501u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8501: push 0x9f1480 */
  { uint32_t v = 0x9f1480u; esp -= 4; W32(esp, v); }
/* 9e8506: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e850bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e850b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e850e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e850f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8512: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8550(void) {
  LOAD_REGS();
L_9e8550: /* 9e8550: mov dword ptr [0xb87aec], 0xb875c0 */
  W32((uint32_t)(0xb87aecu), 0xb875c0u);
/* 9e855a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8570(void) {
  LOAD_REGS();
L_9e8570: /* 9e8570: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8574: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8576: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8578: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e857a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e857c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8580: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8586u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8586: mov esi, eax */
  esi = eax;
/* 9e8588: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e858d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e858e: push 0x6cb9a1 */
  { uint32_t v = 0x6cb9a1u; esp -= 4; W32(esp, v); }
/* 9e8593: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8598: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e859eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e859e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e85a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e85a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e85a4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e85a9: push 0xadfeb2 */
  { uint32_t v = 0xadfeb2u; esp -= 4; W32(esp, v); }
/* 9e85ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e85b1: mov ecx, esp */
  ecx = esp;
/* 9e85b3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e85b5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e85b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e85bb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e85be: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e85c1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e85c4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e85cau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e85ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e85cb: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e85d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e85d2: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9e85d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e85d6: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 9e85db: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e85e1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e85e1: push 0x9f14a0 */
  { uint32_t v = 0x9f14a0u; esp -= 4; W32(esp, v); }
/* 9e85e6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e85ebu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e85eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e85ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e85ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e85f2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8630(void) {
  LOAD_REGS();
L_9e8630: /* 9e8630: mov dword ptr [0xb8801c], 0xb87af0 */
  W32((uint32_t)(0xb8801cu), 0xb87af0u);
/* 9e863a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8650(void) {
  LOAD_REGS();
L_9e8650: /* 9e8650: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8654: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e865a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e865c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8660: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8666u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8666: mov esi, eax */
  esi = eax;
/* 9e8668: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e866d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e866e: push 0x6ca411 */
  { uint32_t v = 0x6ca411u; esp -= 4; W32(esp, v); }
/* 9e8673: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8678: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e867eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e867e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8681: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8684: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8689: push 0xadfef2 */
  { uint32_t v = 0xadfef2u; esp -= 4; W32(esp, v); }
/* 9e868e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8691: mov ecx, esp */
  ecx = esp;
/* 9e8693: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8695: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8698: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e869b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e869e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e86a1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e86a4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e86aau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e86aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e86ab: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9e86b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e86b2: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 9e86b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e86b6: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 9e86bb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e86c1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e86c1: push 0x9f14c0 */
  { uint32_t v = 0x9f14c0u; esp -= 4; W32(esp, v); }
/* 9e86c6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e86cbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e86cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e86ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e86cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e86d2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8710(void) {
  LOAD_REGS();
L_9e8710: /* 9e8710: mov dword ptr [0xb8854c], 0xb88020 */
  W32((uint32_t)(0xb8854cu), 0xb88020u);
/* 9e871a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8730(void) {
  LOAD_REGS();
L_9e8730: /* 9e8730: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8733: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8736: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8738: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e873a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e873c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8740: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8746u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8746: mov esi, eax */
  esi = eax;
/* 9e8748: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e874d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e874e: push 0x6c9c9b */
  { uint32_t v = 0x6c9c9bu; esp -= 4; W32(esp, v); }
/* 9e8753: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8758: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e875eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e875e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8761: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8764: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8769: push 0xadff1a */
  { uint32_t v = 0xadff1au; esp -= 4; W32(esp, v); }
/* 9e876e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8771: mov ecx, esp */
  ecx = esp;
/* 9e8773: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8775: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8778: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e877b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e877e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8781: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8784: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e878au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e878a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e878b: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 9e8790: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8792: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9e8794: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8796: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 9e879b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e87a1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e87a1: push 0x9f14e0 */
  { uint32_t v = 0x9f14e0u; esp -= 4; W32(esp, v); }
/* 9e87a6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e87abu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e87ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e87ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e87af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e87b2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e87f0(void) {
  LOAD_REGS();
L_9e87f0: /* 9e87f0: mov dword ptr [0xb88a7c], 0xb88550 */
  W32((uint32_t)(0xb88a7cu), 0xb88550u);
/* 9e87fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8810(void) {
  LOAD_REGS();
L_9e8810: /* 9e8810: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8814: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e881a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e881c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8820: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8826u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8826: mov esi, eax */
  esi = eax;
/* 9e8828: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e882d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e882e: push 0x6c94c6 */
  { uint32_t v = 0x6c94c6u; esp -= 4; W32(esp, v); }
/* 9e8833: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8838: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e883eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e883e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8841: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8844: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8849: push 0xadff2e */
  { uint32_t v = 0xadff2eu; esp -= 4; W32(esp, v); }
/* 9e884e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8851: mov ecx, esp */
  ecx = esp;
/* 9e8853: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8855: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8858: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e885b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e885e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8861: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8864: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e886au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e886a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e886b: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9e8870: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8872: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e8874: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8876: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 9e887b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8881u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8881: push 0x9f1500 */
  { uint32_t v = 0x9f1500u; esp -= 4; W32(esp, v); }
/* 9e8886: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e888bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e888b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e888e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e888f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8892: ret  */
  esp += 4; SPILL(); return;
}

void f_9e88d0(void) {
  LOAD_REGS();
L_9e88d0: /* 9e88d0: mov dword ptr [0xb88fac], 0xb88a80 */
  W32((uint32_t)(0xb88facu), 0xb88a80u);
/* 9e88da: ret  */
  esp += 4; SPILL(); return;
}

void f_9e88f0(void) {
  LOAD_REGS();
L_9e88f0: /* 9e88f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e88f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e88f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e88f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e88f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e88fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e88fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8900: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8906u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8906: mov esi, eax */
  esi = eax;
/* 9e8908: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e890d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e890e: push 0x6c778e */
  { uint32_t v = 0x6c778eu; esp -= 4; W32(esp, v); }
/* 9e8913: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8918: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e891eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e891e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8921: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8924: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8929: push 0xadff52 */
  { uint32_t v = 0xadff52u; esp -= 4; W32(esp, v); }
/* 9e892e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8931: mov ecx, esp */
  ecx = esp;
/* 9e8933: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8935: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8938: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e893b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e893e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8941: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8944: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e894au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e894a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e894b: push 0xb88a80 */
  { uint32_t v = 0xb88a80u; esp -= 4; W32(esp, v); }
/* 9e8950: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8952: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 9e8954: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8956: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 9e895b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8961u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8961: push 0x9f1520 */
  { uint32_t v = 0x9f1520u; esp -= 4; W32(esp, v); }
/* 9e8966: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e896bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e896b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e896e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e896f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8972: ret  */
  esp += 4; SPILL(); return;
}

void f_9e89b0(void) {
  LOAD_REGS();
L_9e89b0: /* 9e89b0: mov dword ptr [0xb894dc], 0xb88fb0 */
  W32((uint32_t)(0xb894dcu), 0xb88fb0u);
/* 9e89ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e89d0(void) {
  LOAD_REGS();
L_9e89d0: /* 9e89d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e89d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e89d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e89d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e89d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e89da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e89dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e89e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e89e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e89e6: mov esi, eax */
  esi = eax;
/* 9e89e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e89ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e89ee: push 0x6ca056 */
  { uint32_t v = 0x6ca056u; esp -= 4; W32(esp, v); }
/* 9e89f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e89f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e89feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e89fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8a01: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8a04: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8a09: push 0xadff7a */
  { uint32_t v = 0xadff7au; esp -= 4; W32(esp, v); }
/* 9e8a0e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8a11: mov ecx, esp */
  ecx = esp;
/* 9e8a13: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8a15: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8a18: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8a1b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8a1e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8a21: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8a24: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8a2au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8a2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8a2b: push 0xb88a80 */
  { uint32_t v = 0xb88a80u; esp -= 4; W32(esp, v); }
/* 9e8a30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8a32: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9e8a34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8a36: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 9e8a3b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8a41u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8a41: push 0x9f1540 */
  { uint32_t v = 0x9f1540u; esp -= 4; W32(esp, v); }
/* 9e8a46: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8a4bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8a4b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8a4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8a4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8a52: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8a90(void) {
  LOAD_REGS();
L_9e8a90: /* 9e8a90: mov dword ptr [0xb89a0c], 0xb894e0 */
  W32((uint32_t)(0xb89a0cu), 0xb894e0u);
/* 9e8a9a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8ab0(void) {
  LOAD_REGS();
L_9e8ab0: /* 9e8ab0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8ab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8ab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8aba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8abc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8ac0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8ac6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8ac6: mov esi, eax */
  esi = eax;
/* 9e8ac8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8ace: push 0x6c4f93 */
  { uint32_t v = 0x6c4f93u; esp -= 4; W32(esp, v); }
/* 9e8ad3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8ad8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8adeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8ade: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8ae1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8ae4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8ae9: push 0xadffa2 */
  { uint32_t v = 0xadffa2u; esp -= 4; W32(esp, v); }
/* 9e8aee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8af1: mov ecx, esp */
  ecx = esp;
/* 9e8af3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8af5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8af8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8afb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8afe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8b01: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8b04: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8b0au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8b0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8b0b: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 9e8b10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b12: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 9e8b14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b16: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 9e8b1b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8b21u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8b21: push 0x9f1560 */
  { uint32_t v = 0x9f1560u; esp -= 4; W32(esp, v); }
/* 9e8b26: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8b2bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8b2b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8b2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8b2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8b32: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8b70(void) {
  LOAD_REGS();
L_9e8b70: /* 9e8b70: mov dword ptr [0xb89f3c], 0xb89a10 */
  W32((uint32_t)(0xb89f3cu), 0xb89a10u);
/* 9e8b7a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8b90(void) {
  LOAD_REGS();
L_9e8b90: /* 9e8b90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8b93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8b94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8b9c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8ba0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8ba6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8ba6: mov esi, eax */
  esi = eax;
/* 9e8ba8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8bad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8bae: push 0x6ca7f9 */
  { uint32_t v = 0x6ca7f9u; esp -= 4; W32(esp, v); }
/* 9e8bb3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8bb8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8bbeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8bbe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8bc1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8bc4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8bc9: push 0xadffb6 */
  { uint32_t v = 0xadffb6u; esp -= 4; W32(esp, v); }
/* 9e8bce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8bd1: mov ecx, esp */
  ecx = esp;
/* 9e8bd3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8bd5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8bd8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8bdb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8bde: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8be1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8be4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8beau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8beb: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e8bf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8bf2: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9e8bf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8bf6: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 9e8bfb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8c01u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8c01: push 0x9f1580 */
  { uint32_t v = 0x9f1580u; esp -= 4; W32(esp, v); }
/* 9e8c06: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8c0bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8c0b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8c0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8c0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8c12: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8c50(void) {
  LOAD_REGS();
L_9e8c50: /* 9e8c50: mov dword ptr [0xb8a46c], 0xb89f40 */
  W32((uint32_t)(0xb8a46cu), 0xb89f40u);
/* 9e8c5a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8c70(void) {
  LOAD_REGS();
L_9e8c70: /* 9e8c70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8c74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8c78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8c7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8c7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8c80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8c86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8c86: mov esi, eax */
  esi = eax;
/* 9e8c88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8c8e: push 0x6ca006 */
  { uint32_t v = 0x6ca006u; esp -= 4; W32(esp, v); }
/* 9e8c93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8c98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8c9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8c9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8ca1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8ca4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8ca9: push 0xadffda */
  { uint32_t v = 0xadffdau; esp -= 4; W32(esp, v); }
/* 9e8cae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8cb1: mov ecx, esp */
  ecx = esp;
/* 9e8cb3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8cb5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8cb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8cbb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8cbe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8cc1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8cc4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8ccau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8cca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8ccb: push 0xb8a9a0 */
  { uint32_t v = 0xb8a9a0u; esp -= 4; W32(esp, v); }
/* 9e8cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8cd2: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 9e8cd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8cd9: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 9e8cde: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8ce4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8ce4: push 0x9f15a0 */
  { uint32_t v = 0x9f15a0u; esp -= 4; W32(esp, v); }
/* 9e8ce9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8ceeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8cee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8cf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8cf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8cf5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8d30(void) {
  LOAD_REGS();
L_9e8d30: /* 9e8d30: mov dword ptr [0xb8a99c], 0xb8a470 */
  W32((uint32_t)(0xb8a99cu), 0xb8a470u);
/* 9e8d3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8d50(void) {
  LOAD_REGS();
L_9e8d50: /* 9e8d50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8d53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8d54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8d56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8d58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8d5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8d5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8d60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8d66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8d66: mov esi, eax */
  esi = eax;
/* 9e8d68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8d6e: push 0x6cce23 */
  { uint32_t v = 0x6cce23u; esp -= 4; W32(esp, v); }
/* 9e8d73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8d78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8d7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8d7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8d81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8d84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8d89: push 0xae0002 */
  { uint32_t v = 0xae0002u; esp -= 4; W32(esp, v); }
/* 9e8d8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8d91: mov ecx, esp */
  ecx = esp;
/* 9e8d93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8d95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8d98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8d9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8d9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8da1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8da4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8daau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8daa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8dab: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e8db0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8db2: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 9e8db7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8db9: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 9e8dbe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8dc4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8dc4: push 0x9f15c0 */
  { uint32_t v = 0x9f15c0u; esp -= 4; W32(esp, v); }
/* 9e8dc9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8dceu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8dce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8dd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8dd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8e10(void) {
  LOAD_REGS();
L_9e8e10: /* 9e8e10: mov dword ptr [0xb8aecc], 0xb8a9a0 */
  W32((uint32_t)(0xb8aeccu), 0xb8a9a0u);
/* 9e8e1a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8e30(void) {
  LOAD_REGS();
L_9e8e30: /* 9e8e30: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8e34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e3c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8e40: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8e46u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8e46: mov esi, eax */
  esi = eax;
/* 9e8e48: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8e4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8e4e: push 0x6c11fe */
  { uint32_t v = 0x6c11feu; esp -= 4; W32(esp, v); }
/* 9e8e53: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8e58: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8e5eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8e5e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8e61: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8e64: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8e69: push 0xae001a */
  { uint32_t v = 0xae001au; esp -= 4; W32(esp, v); }
/* 9e8e6e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8e71: mov ecx, esp */
  ecx = esp;
/* 9e8e73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8e75: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8e78: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8e7b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8e7e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8e81: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8e84: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8e8au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8e8b: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e8e90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e92: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 9e8e97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8e99: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 9e8e9e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8ea4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8ea4: push 0x9f15e0 */
  { uint32_t v = 0x9f15e0u; esp -= 4; W32(esp, v); }
/* 9e8ea9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8eaeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8eae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8eb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8eb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8ef0(void) {
  LOAD_REGS();
L_9e8ef0: /* 9e8ef0: mov dword ptr [0xb8b3fc], 0xb8aed0 */
  W32((uint32_t)(0xb8b3fcu), 0xb8aed0u);
/* 9e8efa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8f10(void) {
  LOAD_REGS();
L_9e8f10: /* 9e8f10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8f13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f1c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e8f20: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e8f26u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e8f26: mov esi, eax */
  esi = eax;
/* 9e8f28: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e8f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8f2e: push 0x6c82a1 */
  { uint32_t v = 0x6c82a1u; esp -= 4; W32(esp, v); }
/* 9e8f33: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e8f38: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e8f3eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e8f3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e8f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8f41: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e8f44: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e8f49: push 0xae0032 */
  { uint32_t v = 0xae0032u; esp -= 4; W32(esp, v); }
/* 9e8f4e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8f51: mov ecx, esp */
  ecx = esp;
/* 9e8f53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e8f55: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e8f58: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e8f5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e8f5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e8f61: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e8f64: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e8f6au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e8f6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e8f6b: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e8f70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f72: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 9e8f77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8f79: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 9e8f7e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e8f84u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e8f84: push 0x9f1600 */
  { uint32_t v = 0x9f1600u; esp -= 4; W32(esp, v); }
/* 9e8f89: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e8f8eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e8f8e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e8f92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e8f95: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8fd0(void) {
  LOAD_REGS();
L_9e8fd0: /* 9e8fd0: mov dword ptr [0xb8b92c], 0xb8b400 */
  W32((uint32_t)(0xb8b92cu), 0xb8b400u);
/* 9e8fda: ret  */
  esp += 4; SPILL(); return;
}

void f_9e8ff0(void) {
  LOAD_REGS();
L_9e8ff0: /* 9e8ff0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e8ff3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e8ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e8ffc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9000: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9006u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9006: mov esi, eax */
  esi = eax;
/* 9e9008: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e900d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e900e: push 0x6cb091 */
  { uint32_t v = 0x6cb091u; esp -= 4; W32(esp, v); }
/* 9e9013: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9018: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e901eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e901e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9021: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9024: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9029: push 0xae0052 */
  { uint32_t v = 0xae0052u; esp -= 4; W32(esp, v); }
/* 9e902e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9031: mov ecx, esp */
  ecx = esp;
/* 9e9033: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9035: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9038: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e903b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e903e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9041: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9044: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e904au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e904a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e904b: push 0xb8be60 */
  { uint32_t v = 0xb8be60u; esp -= 4; W32(esp, v); }
/* 9e9050: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9052: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 9e9057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9059: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 9e905e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9064u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9064: push 0x9f1620 */
  { uint32_t v = 0x9f1620u; esp -= 4; W32(esp, v); }
/* 9e9069: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e906eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e906e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9071: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9072: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9075: ret  */
  esp += 4; SPILL(); return;
}

void f_9e90b0(void) {
  LOAD_REGS();
L_9e90b0: /* 9e90b0: mov dword ptr [0xb8be5c], 0xb8b930 */
  W32((uint32_t)(0xb8be5cu), 0xb8b930u);
/* 9e90ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e90d0(void) {
  LOAD_REGS();
L_9e90d0: /* 9e90d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e90d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e90d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e90d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e90d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e90da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e90dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e90e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e90e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e90e6: mov esi, eax */
  esi = eax;
/* 9e90e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e90ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e90ee: push 0x6c6b04 */
  { uint32_t v = 0x6c6b04u; esp -= 4; W32(esp, v); }
/* 9e90f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e90f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e90feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e90fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9101: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9104: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9109: push 0xae008a */
  { uint32_t v = 0xae008au; esp -= 4; W32(esp, v); }
/* 9e910e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9111: mov ecx, esp */
  ecx = esp;
/* 9e9113: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9115: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9118: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e911b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e911e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9121: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9124: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e912au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e912a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e912b: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e9130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9132: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 9e9137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9139: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 9e913e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9144u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9144: push 0x9f1640 */
  { uint32_t v = 0x9f1640u; esp -= 4; W32(esp, v); }
/* 9e9149: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e914eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e914e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9152: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9155: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9190(void) {
  LOAD_REGS();
L_9e9190: /* 9e9190: mov dword ptr [0xb8c38c], 0xb8be60 */
  W32((uint32_t)(0xb8c38cu), 0xb8be60u);
/* 9e919a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e91b0(void) {
  LOAD_REGS();
L_9e91b0: /* 9e91b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e91b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e91b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e91b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e91b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e91ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e91bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e91c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e91c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e91c6: mov esi, eax */
  esi = eax;
/* 9e91c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e91cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e91ce: push 0x6cc8c4 */
  { uint32_t v = 0x6cc8c4u; esp -= 4; W32(esp, v); }
/* 9e91d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e91d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e91deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e91de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e91e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e91e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e91e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e91e9: push 0xae00aa */
  { uint32_t v = 0xae00aau; esp -= 4; W32(esp, v); }
/* 9e91ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e91f1: mov ecx, esp */
  ecx = esp;
/* 9e91f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e91f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e91f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e91fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e91fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9201: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9204: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e920au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e920a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e920b: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e9210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9212: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 9e9214: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9216: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 9e921b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9221u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9221: push 0x9f1660 */
  { uint32_t v = 0x9f1660u; esp -= 4; W32(esp, v); }
/* 9e9226: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e922bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e922b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e922e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e922f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9232: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9270(void) {
  LOAD_REGS();
L_9e9270: /* 9e9270: mov dword ptr [0xb8c8bc], 0xb8c390 */
  W32((uint32_t)(0xb8c8bcu), 0xb8c390u);
/* 9e927a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9290(void) {
  LOAD_REGS();
L_9e9290: /* 9e9290: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9293: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9296: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9298: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e929a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e929c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e92a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e92a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e92a6: mov esi, eax */
  esi = eax;
/* 9e92a8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e92ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e92ae: push 0x6c3af3 */
  { uint32_t v = 0x6c3af3u; esp -= 4; W32(esp, v); }
/* 9e92b3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e92b8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e92beu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e92be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e92c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e92c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e92c4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e92c9: push 0xae00c2 */
  { uint32_t v = 0xae00c2u; esp -= 4; W32(esp, v); }
/* 9e92ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e92d1: mov ecx, esp */
  ecx = esp;
/* 9e92d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e92d5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e92d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e92db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e92de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e92e1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e92e4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e92eau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e92ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e92eb: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e92f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e92f2: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 9e92f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e92f9: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 9e92fe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9304u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9304: push 0x9f1680 */
  { uint32_t v = 0x9f1680u; esp -= 4; W32(esp, v); }
/* 9e9309: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e930eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e930e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9311: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9312: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9315: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9350(void) {
  LOAD_REGS();
L_9e9350: /* 9e9350: mov dword ptr [0xb8cdec], 0xb8c8c0 */
  W32((uint32_t)(0xb8cdecu), 0xb8c8c0u);
/* 9e935a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9370(void) {
  LOAD_REGS();
L_9e9370: /* 9e9370: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e937a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e937c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9380: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9386u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9386: mov esi, eax */
  esi = eax;
/* 9e9388: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e938d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e938e: push 0x6c4408 */
  { uint32_t v = 0x6c4408u; esp -= 4; W32(esp, v); }
/* 9e9393: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9398: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e939eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e939e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e93a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e93a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e93a4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e93a9: push 0xae00da */
  { uint32_t v = 0xae00dau; esp -= 4; W32(esp, v); }
/* 9e93ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e93b1: mov ecx, esp */
  ecx = esp;
/* 9e93b3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e93b5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e93b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e93bb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e93be: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e93c1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e93c4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e93cau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e93ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e93cb: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 9e93d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e93d2: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 9e93d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e93d6: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 9e93db: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e93e1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e93e1: push 0x9f16a0 */
  { uint32_t v = 0x9f16a0u; esp -= 4; W32(esp, v); }
/* 9e93e6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e93ebu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e93eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e93ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e93ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e93f2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9430(void) {
  LOAD_REGS();
L_9e9430: /* 9e9430: mov dword ptr [0xb8d31c], 0xb8cdf0 */
  W32((uint32_t)(0xb8d31cu), 0xb8cdf0u);
/* 9e943a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9450(void) {
  LOAD_REGS();
L_9e9450: /* 9e9450: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9453: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e945a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e945c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9460: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9466u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9466: mov esi, eax */
  esi = eax;
/* 9e9468: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e946d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e946e: push 0x6c8fdf */
  { uint32_t v = 0x6c8fdfu; esp -= 4; W32(esp, v); }
/* 9e9473: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9478: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e947eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e947e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9481: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9484: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9489: push 0xae00fa */
  { uint32_t v = 0xae00fau; esp -= 4; W32(esp, v); }
/* 9e948e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9491: mov ecx, esp */
  ecx = esp;
/* 9e9493: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9495: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9498: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e949b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e949e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e94a1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e94a4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e94aau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e94aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e94ab: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9e94b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e94b2: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9e94b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e94b6: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 9e94bb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e94c1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e94c1: push 0x9f16c0 */
  { uint32_t v = 0x9f16c0u; esp -= 4; W32(esp, v); }
/* 9e94c6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e94cbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e94cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e94ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e94cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e94d2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9510(void) {
  LOAD_REGS();
L_9e9510: /* 9e9510: mov dword ptr [0xb8d84c], 0xb8d320 */
  W32((uint32_t)(0xb8d84cu), 0xb8d320u);
/* 9e951a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9530(void) {
  LOAD_REGS();
L_9e9530: /* 9e9530: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9533: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9536: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e953a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e953c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9540: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9546u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9546: mov esi, eax */
  esi = eax;
/* 9e9548: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e954d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e954e: push 0x6c7d74 */
  { uint32_t v = 0x6c7d74u; esp -= 4; W32(esp, v); }
/* 9e9553: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9558: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e955eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e955e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9561: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9564: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9569: push 0xae011e */
  { uint32_t v = 0xae011eu; esp -= 4; W32(esp, v); }
/* 9e956e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9571: mov ecx, esp */
  ecx = esp;
/* 9e9573: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9575: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9578: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e957b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e957e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9581: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9584: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e958au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e958a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e958b: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e9590: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9592: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 9e9594: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9596: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 9e959b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e95a1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e95a1: push 0x9f16e0 */
  { uint32_t v = 0x9f16e0u; esp -= 4; W32(esp, v); }
/* 9e95a6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e95abu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e95ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e95ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e95af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e95b2: ret  */
  esp += 4; SPILL(); return;
}

void f_9e95f0(void) {
  LOAD_REGS();
L_9e95f0: /* 9e95f0: mov dword ptr [0xb8dd7c], 0xb8d850 */
  W32((uint32_t)(0xb8dd7cu), 0xb8d850u);
/* 9e95fa: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9610(void) {
  LOAD_REGS();
L_9e9610: /* 9e9610: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9618: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e961a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e961c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9620: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9626u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9626: mov esi, eax */
  esi = eax;
/* 9e9628: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e962d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e962e: push 0x6c92b4 */
  { uint32_t v = 0x6c92b4u; esp -= 4; W32(esp, v); }
/* 9e9633: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9638: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e963eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e963e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9641: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9644: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9649: push 0xae0146 */
  { uint32_t v = 0xae0146u; esp -= 4; W32(esp, v); }
/* 9e964e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9651: mov ecx, esp */
  ecx = esp;
/* 9e9653: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9655: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9658: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e965b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e965e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9661: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9664: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e966au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e966a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e966b: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e9670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9672: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 9e9674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9676: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 9e967b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9681u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9681: push 0x9f1700 */
  { uint32_t v = 0x9f1700u; esp -= 4; W32(esp, v); }
/* 9e9686: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e968bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e968b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e968e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e968f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9692: ret  */
  esp += 4; SPILL(); return;
}

void f_9e96d0(void) {
  LOAD_REGS();
L_9e96d0: /* 9e96d0: mov dword ptr [0xb8e2ac], 0xb8dd80 */
  W32((uint32_t)(0xb8e2acu), 0xb8dd80u);
/* 9e96da: ret  */
  esp += 4; SPILL(); return;
}

void f_9e96f0(void) {
  LOAD_REGS();
L_9e96f0: /* 9e96f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e96f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e96f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e96f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e96f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e96fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e96fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9700: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9706u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9706: mov esi, eax */
  esi = eax;
/* 9e9708: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e970d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e970e: push 0x6c6efb */
  { uint32_t v = 0x6c6efbu; esp -= 4; W32(esp, v); }
/* 9e9713: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9718: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e971eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e971e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9721: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9724: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9729: push 0xae0186 */
  { uint32_t v = 0xae0186u; esp -= 4; W32(esp, v); }
/* 9e972e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9731: mov ecx, esp */
  ecx = esp;
/* 9e9733: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9735: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9738: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e973b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e973e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9741: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9744: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e974au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e974a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e974b: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e9750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9752: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 9e9754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9756: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 9e975b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9761u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9761: push 0x9f1720 */
  { uint32_t v = 0x9f1720u; esp -= 4; W32(esp, v); }
/* 9e9766: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e976bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e976b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e976e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e976f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9772: ret  */
  esp += 4; SPILL(); return;
}

void f_9e97b0(void) {
  LOAD_REGS();
L_9e97b0: /* 9e97b0: mov dword ptr [0xb8e7dc], 0xb8e2b0 */
  W32((uint32_t)(0xb8e7dcu), 0xb8e2b0u);
/* 9e97ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9e97d0(void) {
  LOAD_REGS();
L_9e97d0: /* 9e97d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e97d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e97d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e97d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e97d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e97da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e97dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e97e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e97e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e97e6: mov esi, eax */
  esi = eax;
/* 9e97e8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e97ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e97ee: push 0x6cc0c7 */
  { uint32_t v = 0x6cc0c7u; esp -= 4; W32(esp, v); }
/* 9e97f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e97f8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e97feu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e97fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9801: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9804: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9809: push 0xae01aa */
  { uint32_t v = 0xae01aau; esp -= 4; W32(esp, v); }
/* 9e980e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9811: mov ecx, esp */
  ecx = esp;
/* 9e9813: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9815: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9818: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e981b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e981e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9821: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9824: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e982au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e982a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e982b: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 9e9830: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9832: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9e9834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9836: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 9e983b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9841u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9841: push 0x9f1740 */
  { uint32_t v = 0x9f1740u; esp -= 4; W32(esp, v); }
/* 9e9846: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e984bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e984b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e984e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e984f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9852: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9890(void) {
  LOAD_REGS();
L_9e9890: /* 9e9890: mov dword ptr [0xb8ed0c], 0xb8e7e0 */
  W32((uint32_t)(0xb8ed0cu), 0xb8e7e0u);
/* 9e989a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e98b0(void) {
  LOAD_REGS();
L_9e98b0: /* 9e98b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e98b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e98b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e98b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e98b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e98ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e98bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e98c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e98c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e98c6: mov esi, eax */
  esi = eax;
/* 9e98c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e98cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e98ce: push 0x6c9f70 */
  { uint32_t v = 0x6c9f70u; esp -= 4; W32(esp, v); }
/* 9e98d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e98d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e98deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e98de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e98e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e98e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e98e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e98e9: push 0xae0a6a */
  { uint32_t v = 0xae0a6au; esp -= 4; W32(esp, v); }
/* 9e98ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e98f1: mov ecx, esp */
  ecx = esp;
/* 9e98f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e98f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e98f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e98fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e98fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9901: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9904: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e990au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e990b: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9e9910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9912: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9e9914: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9916: mov ecx, 0xb90920 */
  ecx = 0xb90920u;
/* 9e991b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9921u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9921: push 0x9f1760 */
  { uint32_t v = 0x9f1760u; esp -= 4; W32(esp, v); }
/* 9e9926: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e992bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e992b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e992e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e992f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9932: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9970(void) {
  LOAD_REGS();
L_9e9970: /* 9e9970: mov dword ptr [0xb90e4c], 0xb90920 */
  W32((uint32_t)(0xb90e4cu), 0xb90920u);
/* 9e997a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9990(void) {
  LOAD_REGS();
L_9e9990: /* 9e9990: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9994: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9996: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9998: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e999a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e999c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e99a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e99a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e99a6: mov esi, eax */
  esi = eax;
/* 9e99a8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e99ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e99ae: push 0x6c696a */
  { uint32_t v = 0x6c696au; esp -= 4; W32(esp, v); }
/* 9e99b3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e99b8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e99beu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e99be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e99c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e99c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e99c4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e99c9: push 0xae0a9a */
  { uint32_t v = 0xae0a9au; esp -= 4; W32(esp, v); }
/* 9e99ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e99d1: mov ecx, esp */
  ecx = esp;
/* 9e99d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e99d5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e99d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e99db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e99de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e99e1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e99e4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e99eau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e99ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e99eb: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9e99f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e99f2: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 9e99f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e99f6: mov ecx, 0xb90e50 */
  ecx = 0xb90e50u;
/* 9e99fb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9a01u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9a01: push 0x9f1780 */
  { uint32_t v = 0x9f1780u; esp -= 4; W32(esp, v); }
/* 9e9a06: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9a0bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9a0b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9a0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9a0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9a12: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9a50(void) {
  LOAD_REGS();
L_9e9a50: /* 9e9a50: mov dword ptr [0xb9137c], 0xb90e50 */
  W32((uint32_t)(0xb9137cu), 0xb90e50u);
/* 9e9a5a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9a70(void) {
  LOAD_REGS();
L_9e9a70: /* 9e9a70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9a74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9a76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9a7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9a7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9a80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9a86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9a86: mov esi, eax */
  esi = eax;
/* 9e9a88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9a8e: push 0x6c5f8d */
  { uint32_t v = 0x6c5f8du; esp -= 4; W32(esp, v); }
/* 9e9a93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9a98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9a9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9a9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9aa1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9aa4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9aa9: push 0xae0b42 */
  { uint32_t v = 0xae0b42u; esp -= 4; W32(esp, v); }
/* 9e9aae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9ab1: mov ecx, esp */
  ecx = esp;
/* 9e9ab3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9ab5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9ab8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9abb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9abe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9ac1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9ac4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9acau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9aca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9acb: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 9e9ad0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9ad2: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 9e9ad7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9ad9: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 9e9ade: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9ae4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9ae4: push 0x9f17a0 */
  { uint32_t v = 0x9f17a0u; esp -= 4; W32(esp, v); }
/* 9e9ae9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9aeeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9af1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9af2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9af5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9b30(void) {
  LOAD_REGS();
L_9e9b30: /* 9e9b30: mov dword ptr [0xb91acc], 0xb915a0 */
  W32((uint32_t)(0xb91accu), 0xb915a0u);
/* 9e9b3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9b50(void) {
  LOAD_REGS();
L_9e9b50: /* 9e9b50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9b53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9b56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9b58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9b5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9b5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9b60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9b66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9b66: mov esi, eax */
  esi = eax;
/* 9e9b68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9b6e: push 0x6ccb26 */
  { uint32_t v = 0x6ccb26u; esp -= 4; W32(esp, v); }
/* 9e9b73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9b78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9b7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9b7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9b81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9b84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9b89: push 0xae0d22 */
  { uint32_t v = 0xae0d22u; esp -= 4; W32(esp, v); }
/* 9e9b8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9b91: mov ecx, esp */
  ecx = esp;
/* 9e9b93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9b95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9b98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9b9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9b9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9ba1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9ba4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9baau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9baa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9bab: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9e9bb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9bb2: push 0x71c */
  { uint32_t v = 0x71cu; esp -= 4; W32(esp, v); }
/* 9e9bb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9bb9: mov ecx, 0xb91be8 */
  ecx = 0xb91be8u;
/* 9e9bbe: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9bc4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9bc4: push 0x9f17c0 */
  { uint32_t v = 0x9f17c0u; esp -= 4; W32(esp, v); }
/* 9e9bc9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9bceu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9bce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9bd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9bd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9bd5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9c10(void) {
  LOAD_REGS();
L_9e9c10: /* 9e9c10: mov dword ptr [0xb92114], 0xb91be8 */
  W32((uint32_t)(0xb92114u), 0xb91be8u);
/* 9e9c1a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9c30(void) {
  LOAD_REGS();
L_9e9c30: /* 9e9c30: mov ecx, 0xb92118 */
  ecx = 0xb92118u;
/* 9e9c35: call 0x6ccac7 */
  esp -= 4; W32(esp, 0x9e9c3au); SPILL(); f_6ccac7(); if (g_unwind) return; RELOAD();
/* 9e9c3a: push 0x9f17e0 */
  { uint32_t v = 0x9f17e0u; esp -= 4; W32(esp, v); }
/* 9e9c3f: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9c44u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9c44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9e9c45: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9c60(void) {
  LOAD_REGS();
L_9e9c60: /* 9e9c60: mov ecx, 0xb92234 */
  ecx = 0xb92234u;
/* 9e9c65: call 0x6c48ef */
  esp -= 4; W32(esp, 0x9e9c6au); SPILL(); f_6c48ef(); if (g_unwind) return; RELOAD();
/* 9e9c6a: push 0x9f1800 */
  { uint32_t v = 0x9f1800u; esp -= 4; W32(esp, v); }
/* 9e9c6f: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9c74u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9c74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9e9c75: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9c90(void) {
  LOAD_REGS();
L_9e9c90: /* 9e9c90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9c93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9c94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9c96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9c9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9c9c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9ca0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9ca6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9ca6: mov esi, eax */
  esi = eax;
/* 9e9ca8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9cae: push 0x6ca6ff */
  { uint32_t v = 0x6ca6ffu; esp -= 4; W32(esp, v); }
/* 9e9cb3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9cb8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9cbeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9cbe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9cc1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9cc4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9cc9: push 0xae1312 */
  { uint32_t v = 0xae1312u; esp -= 4; W32(esp, v); }
/* 9e9cce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9cd1: mov ecx, esp */
  ecx = esp;
/* 9e9cd3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9cd5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9cd8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9cdb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9cde: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9ce1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9ce4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9ceau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9cea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9ceb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9e9cf0: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 9e9cf5: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 9e9cfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9cfc: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 9e9d01: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9d07u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9d07: push 0x9f1820 */
  { uint32_t v = 0x9f1820u; esp -= 4; W32(esp, v); }
/* 9e9d0c: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9d11u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9d11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9d14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9d15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9d18: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9d50(void) {
  LOAD_REGS();
L_9e9d50: /* 9e9d50: mov dword ptr [0xcc5ab4], 0xcc5588 */
  W32((uint32_t)(0xcc5ab4u), 0xcc5588u);
/* 9e9d5a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9d70(void) {
  LOAD_REGS();
L_9e9d70: /* 9e9d70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9d73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9d74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9d76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9d78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9d7c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9d80: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9d86u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9d86: mov esi, eax */
  esi = eax;
/* 9e9d88: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9d8e: push 0x6c523b */
  { uint32_t v = 0x6c523bu; esp -= 4; W32(esp, v); }
/* 9e9d93: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9d98: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9d9eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9d9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9da1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9da4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9da9: push 0xae25f2 */
  { uint32_t v = 0xae25f2u; esp -= 4; W32(esp, v); }
/* 9e9dae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9db1: mov ecx, esp */
  ecx = esp;
/* 9e9db3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9db5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9db8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9dbb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9dbe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9dc1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9dc4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9dcau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9dcb: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9dd1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9dd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9dd4: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 9e9dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9dd8: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 9e9ddd: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9de3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9de3: push 0x9f1840 */
  { uint32_t v = 0x9f1840u; esp -= 4; W32(esp, v); }
/* 9e9de8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9dedu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9ded: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9df0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9df1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9df4: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9e30(void) {
  LOAD_REGS();
L_9e9e30: /* 9e9e30: mov dword ptr [0xcc60f4], 0xcc5bc8 */
  W32((uint32_t)(0xcc60f4u), 0xcc5bc8u);
/* 9e9e3a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9e50(void) {
  LOAD_REGS();
L_9e9e50: /* 9e9e50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9e53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9e54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9e56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9e5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9e60: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9e66u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9e66: mov esi, eax */
  esi = eax;
/* 9e9e68: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9e6e: push 0x6c371a */
  { uint32_t v = 0x6c371au; esp -= 4; W32(esp, v); }
/* 9e9e73: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9e78: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9e7eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9e7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9e81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9e84: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9e89: push 0xae26a2 */
  { uint32_t v = 0xae26a2u; esp -= 4; W32(esp, v); }
/* 9e9e8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9e91: mov ecx, esp */
  ecx = esp;
/* 9e9e93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9e95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9e98: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9e9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9e9e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9ea1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9ea4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9eaau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9eab: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9eb1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9eb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9eb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9eb4: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 9e9eb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9ebb: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 9e9ec0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9ec6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9ec6: push 0x9f1860 */
  { uint32_t v = 0x9f1860u; esp -= 4; W32(esp, v); }
/* 9e9ecb: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9ed0u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9ed0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9ed3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9ed4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9ed7: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9f10(void) {
  LOAD_REGS();
L_9e9f10: /* 9e9f10: mov dword ptr [0xcc6734], 0xcc6208 */
  W32((uint32_t)(0xcc6734u), 0xcc6208u);
/* 9e9f1a: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9f30(void) {
  LOAD_REGS();
L_9e9f30: /* 9e9f30: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9e9f34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f3c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9e9f40: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9e9f46u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9e9f46: mov esi, eax */
  esi = eax;
/* 9e9f48: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9e9f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9f4e: push 0x6c8ec2 */
  { uint32_t v = 0x6c8ec2u; esp -= 4; W32(esp, v); }
/* 9e9f53: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9e9f58: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9e9f5eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9e9f5e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9e9f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9f61: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9e9f64: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9e9f69: push 0xae274a */
  { uint32_t v = 0xae274au; esp -= 4; W32(esp, v); }
/* 9e9f6e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9e9f71: mov ecx, esp */
  ecx = esp;
/* 9e9f73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9e9f75: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9e9f78: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9e9f7b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9e9f7e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9e9f81: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9e9f84: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9e9f8au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9e9f8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9e9f8b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9e9f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f92: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 9e9f97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9e9f99: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 9e9f9e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9e9fa4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9e9fa4: push 0x9f1880 */
  { uint32_t v = 0x9f1880u; esp -= 4; W32(esp, v); }
/* 9e9fa9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9e9faeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9e9fae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9fb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9e9fb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9e9fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_9e9ff0(void) {
  LOAD_REGS();
L_9e9ff0: /* 9e9ff0: mov dword ptr [0xcc6d74], 0xcc6848 */
  W32((uint32_t)(0xcc6d74u), 0xcc6848u);
/* 9e9ffa: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea010(void) {
  LOAD_REGS();
L_9ea010: /* 9ea010: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea013: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea014: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea016: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea018: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea01a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea01c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea020: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea026u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea026: mov esi, eax */
  esi = eax;
/* 9ea028: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea02e: push 0x6c78a6 */
  { uint32_t v = 0x6c78a6u; esp -= 4; W32(esp, v); }
/* 9ea033: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea038: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea03eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea03e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea041: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea044: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea049: push 0xae275e */
  { uint32_t v = 0xae275eu; esp -= 4; W32(esp, v); }
/* 9ea04e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea051: mov ecx, esp */
  ecx = esp;
/* 9ea053: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea055: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea058: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea05b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea05e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea061: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea064: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea06au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea06a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea06b: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9ea070: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea072: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 9ea077: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea079: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 9ea07e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea084u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea084: push 0x9f18a0 */
  { uint32_t v = 0x9f18a0u; esp -= 4; W32(esp, v); }
/* 9ea089: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea08eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea08e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea092: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea095: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea0d0(void) {
  LOAD_REGS();
L_9ea0d0: /* 9ea0d0: mov dword ptr [0xcc72a4], 0xcc6d78 */
  W32((uint32_t)(0xcc72a4u), 0xcc6d78u);
/* 9ea0da: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea0f0(void) {
  LOAD_REGS();
L_9ea0f0: /* 9ea0f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea0f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea0f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea0f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea0f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea0fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea0fc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea100: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea106u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea106: mov esi, eax */
  esi = eax;
/* 9ea108: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea10d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea10e: push 0x6c75bd */
  { uint32_t v = 0x6c75bdu; esp -= 4; W32(esp, v); }
/* 9ea113: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea118: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea11eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea11e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea121: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea124: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea129: push 0xae3856 */
  { uint32_t v = 0xae3856u; esp -= 4; W32(esp, v); }
/* 9ea12e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea131: mov ecx, esp */
  ecx = esp;
/* 9ea133: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea135: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea138: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea13b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea13e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea141: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea144: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea14au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea14a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea14b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9ea150: push 0x804 */
  { uint32_t v = 0x804u; esp -= 4; W32(esp, v); }
/* 9ea155: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 9ea15a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea15c: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 9ea161: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea167u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea167: push 0x9f18c0 */
  { uint32_t v = 0x9f18c0u; esp -= 4; W32(esp, v); }
/* 9ea16c: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea171u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea171: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea174: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea175: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea178: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea1b0(void) {
  LOAD_REGS();
L_9ea1b0: /* 9ea1b0: mov dword ptr [0xcc79ec], 0xcc74c0 */
  W32((uint32_t)(0xcc79ecu), 0xcc74c0u);
/* 9ea1ba: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea1d0(void) {
  LOAD_REGS();
L_9ea1d0: /* 9ea1d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea1d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea1d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea1d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea1d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea1da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea1dc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea1e0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea1e6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea1e6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9ea1ec: mov esi, eax */
  esi = eax;
/* 9ea1ee: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea1f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea1f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9ea1f5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea1fa: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea200u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea200: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9ea203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea204: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9ea206: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea20b: push 0xae3d3e */
  { uint32_t v = 0xae3d3eu; esp -= 4; W32(esp, v); }
/* 9ea210: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea213: mov edx, esp */
  edx = esp;
/* 9ea215: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9ea217: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9ea21a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9ea21d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9ea220: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9ea223: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9ea226: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea22cu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea22c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea22d: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea233u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea234: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 9ea236: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 9ea238: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea23a: mov ecx, 0xcc7b00 */
  ecx = 0xcc7b00u;
/* 9ea23f: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea245u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea245: push 0x9f18e0 */
  { uint32_t v = 0x9f18e0u; esp -= 4; W32(esp, v); }
/* 9ea24a: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea24fu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea24f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea252: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea253: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea256: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea290(void) {
  LOAD_REGS();
L_9ea290: /* 9ea290: mov dword ptr [0xcc802c], 0xcc7b00 */
  W32((uint32_t)(0xcc802cu), 0xcc7b00u);
/* 9ea29a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea2b0(void) {
  LOAD_REGS();
L_9ea2b0: /* 9ea2b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea2b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea2b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea2b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea2b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea2ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea2bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea2c0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea2c6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea2c6: mov esi, eax */
  esi = eax;
/* 9ea2c8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea2cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea2ce: push 0x6cbc80 */
  { uint32_t v = 0x6cbc80u; esp -= 4; W32(esp, v); }
/* 9ea2d3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea2d8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea2deu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea2de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea2e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea2e4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea2e9: push 0xae3d56 */
  { uint32_t v = 0xae3d56u; esp -= 4; W32(esp, v); }
/* 9ea2ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea2f1: mov ecx, esp */
  ecx = esp;
/* 9ea2f3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea2f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea2f8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea2fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea2fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea301: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea304: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea30au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea30a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea30b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea311u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea314: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9ea316: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea318: mov ecx, 0xcc8140 */
  ecx = 0xcc8140u;
/* 9ea31d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea323u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea323: push 0x9f1900 */
  { uint32_t v = 0x9f1900u; esp -= 4; W32(esp, v); }
/* 9ea328: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea32du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea32d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea331: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea334: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea370(void) {
  LOAD_REGS();
L_9ea370: /* 9ea370: mov dword ptr [0xcc866c], 0xcc8140 */
  W32((uint32_t)(0xcc866cu), 0xcc8140u);
/* 9ea37a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea390(void) {
  LOAD_REGS();
L_9ea390: /* 9ea390: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea393: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea394: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea39a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea39c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea3a0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea3a6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea3a6: mov esi, eax */
  esi = eax;
/* 9ea3a8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea3ae: push 0x6cb30c */
  { uint32_t v = 0x6cb30cu; esp -= 4; W32(esp, v); }
/* 9ea3b3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea3b8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea3beu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea3be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea3c1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea3c4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea3c9: push 0xae3df2 */
  { uint32_t v = 0xae3df2u; esp -= 4; W32(esp, v); }
/* 9ea3ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea3d1: mov ecx, esp */
  ecx = esp;
/* 9ea3d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea3d5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea3d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea3db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea3de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea3e1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea3e4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea3eau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea3eb: push 0xcc8140 */
  { uint32_t v = 0xcc8140u; esp -= 4; W32(esp, v); }
/* 9ea3f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea3f2: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 9ea3f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea3f6: mov ecx, 0xcc8788 */
  ecx = 0xcc8788u;
/* 9ea3fb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea401u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea401: push 0x9f1920 */
  { uint32_t v = 0x9f1920u; esp -= 4; W32(esp, v); }
/* 9ea406: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea40bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea40b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea40e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea40f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea412: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea450(void) {
  LOAD_REGS();
L_9ea450: /* 9ea450: mov dword ptr [0xcc8cb4], 0xcc8788 */
  W32((uint32_t)(0xcc8cb4u), 0xcc8788u);
/* 9ea45a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea470(void) {
  LOAD_REGS();
L_9ea470: /* 9ea470: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea473: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea476: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea47a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea47c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea480: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea486u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea486: mov esi, eax */
  esi = eax;
/* 9ea488: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea48e: push 0x6c189d */
  { uint32_t v = 0x6c189du; esp -= 4; W32(esp, v); }
/* 9ea493: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea498: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea49eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea49e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea4a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea4a4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea4a9: push 0xae3eae */
  { uint32_t v = 0xae3eaeu; esp -= 4; W32(esp, v); }
/* 9ea4ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea4b1: mov ecx, esp */
  ecx = esp;
/* 9ea4b3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea4b5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea4b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea4bb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea4be: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea4c1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea4c4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea4cau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea4ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea4cb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 9ea4d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea4d2: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 9ea4d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea4d9: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 9ea4de: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea4e4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea4e4: push 0x9f1940 */
  { uint32_t v = 0x9f1940u; esp -= 4; W32(esp, v); }
/* 9ea4e9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea4eeu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea4ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea4f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea4f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea4f5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea530(void) {
  LOAD_REGS();
L_9ea530: /* 9ea530: mov dword ptr [0xcc91e4], 0xcc8cb8 */
  W32((uint32_t)(0xcc91e4u), 0xcc8cb8u);
/* 9ea53a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea550(void) {
  LOAD_REGS();
L_9ea550: /* 9ea550: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea553: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea554: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea556: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea55a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea55c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea560: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea566u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea566: mov esi, eax */
  esi = eax;
/* 9ea568: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea56d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea56e: push 0x6c3ed6 */
  { uint32_t v = 0x6c3ed6u; esp -= 4; W32(esp, v); }
/* 9ea573: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea578: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea57eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea57e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea581: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea584: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea589: push 0xae3ec6 */
  { uint32_t v = 0xae3ec6u; esp -= 4; W32(esp, v); }
/* 9ea58e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea591: mov ecx, esp */
  ecx = esp;
/* 9ea593: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea595: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea598: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea59b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea59e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea5a1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea5a4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea5aau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea5aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea5ab: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 9ea5b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea5b2: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 9ea5b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea5b9: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 9ea5be: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea5c4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea5c4: push 0x9f1960 */
  { uint32_t v = 0x9f1960u; esp -= 4; W32(esp, v); }
/* 9ea5c9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea5ceu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea5ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea5d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea5d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea5d5: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea610(void) {
  LOAD_REGS();
L_9ea610: /* 9ea610: mov dword ptr [0xcc9714], 0xcc91e8 */
  W32((uint32_t)(0xcc9714u), 0xcc91e8u);
/* 9ea61a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea630(void) {
  LOAD_REGS();
L_9ea630: /* 9ea630: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 9ea635: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 9ea63a: call dword ptr [0xcfa85c] */
  esp -= 4; W32(esp, 0x9ea640u); SPILL(); f_4e3ee0(); if (g_unwind) return; /* Core!?Init@FMemStack@@QAEXH@Z */ RELOAD();
/* 9ea640: push 0x9f1980 */
  { uint32_t v = 0x9f1980u; esp -= 4; W32(esp, v); }
/* 9ea645: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea64au); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea64a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ea64b: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea660(void) {
  LOAD_REGS();
L_9ea660: /* 9ea660: mov ecx, 0xcceb98 */
  ecx = 0xcceb98u;
/* 9ea665: jmp 0x6cc3ab */
  SPILL(); f_6cc3ab(); return;
}

void f_9ea680(void) {
  LOAD_REGS();
L_9ea680: /* 9ea680: push 0x9f19a0 */
  { uint32_t v = 0x9f19a0u; esp -= 4; W32(esp, v); }
/* 9ea685: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea68au); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea68a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9ea68b: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea6a0(void) {
  LOAD_REGS();
L_9ea6a0: /* 9ea6a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea6a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea6a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea6a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea6a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea6aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea6ac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea6b0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea6b6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea6b6: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9ea6bc: mov esi, eax */
  esi = eax;
/* 9ea6be: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea6c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea6c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9ea6c5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea6ca: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea6d0u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea6d0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9ea6d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea6d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9ea6d6: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea6db: push 0xae4e46 */
  { uint32_t v = 0xae4e46u; esp -= 4; W32(esp, v); }
/* 9ea6e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea6e3: mov edx, esp */
  edx = esp;
/* 9ea6e5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9ea6e7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9ea6ea: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9ea6ed: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9ea6f0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9ea6f3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9ea6f6: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea6fcu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea6fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea6fd: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea703u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea704: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9ea706: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9ea708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea70a: mov ecx, 0xcd5230 */
  ecx = 0xcd5230u;
/* 9ea70f: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea715u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea715: push 0x9f19e0 */
  { uint32_t v = 0x9f19e0u; esp -= 4; W32(esp, v); }
/* 9ea71a: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea71fu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea71f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea722: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea723: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea726: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea760(void) {
  LOAD_REGS();
L_9ea760: /* 9ea760: mov dword ptr [0xcd575c], 0xcd5230 */
  W32((uint32_t)(0xcd575cu), 0xcd5230u);
/* 9ea76a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea780(void) {
  LOAD_REGS();
L_9ea780: /* 9ea780: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea783: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea786: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea788: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea78a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea78c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea790: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea796u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea796: mov ecx, dword ptr [0xcfa620] */
  ecx = R32((uint32_t)(0xcfa620u));
/* 9ea79c: mov esi, eax */
  esi = eax;
/* 9ea79e: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea7a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9ea7a5: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea7aa: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea7b0u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea7b0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9ea7b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea7b4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9ea7b6: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea7bb: push 0xae4e66 */
  { uint32_t v = 0xae4e66u; esp -= 4; W32(esp, v); }
/* 9ea7c0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea7c3: mov edx, esp */
  edx = esp;
/* 9ea7c5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9ea7c7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9ea7ca: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9ea7cd: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9ea7d0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9ea7d3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 9ea7d6: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea7dcu); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea7dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea7dd: push 0xcd5230 */
  { uint32_t v = 0xcd5230u; esp -= 4; W32(esp, v); }
/* 9ea7e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9ea7e4: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9ea7e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea7e8: mov ecx, 0xcd5760 */
  ecx = 0xcd5760u;
/* 9ea7ed: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea7f3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea7f3: push 0x9f1a00 */
  { uint32_t v = 0x9f1a00u; esp -= 4; W32(esp, v); }
/* 9ea7f8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea7fdu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea7fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea801: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea804: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea840(void) {
  LOAD_REGS();
L_9ea840: /* 9ea840: mov dword ptr [0xcd5c8c], 0xcd5760 */
  W32((uint32_t)(0xcd5c8cu), 0xcd5760u);
/* 9ea84a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea860(void) {
  LOAD_REGS();
L_9ea860: /* 9ea860: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea863: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea864: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea866: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea868: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea86a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea86c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea870: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea876u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea876: mov esi, eax */
  esi = eax;
/* 9ea878: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea87e: push 0x6c5c54 */
  { uint32_t v = 0x6c5c54u; esp -= 4; W32(esp, v); }
/* 9ea883: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea888: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea88eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea88e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea891: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea894: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea899: push 0xae4e8a */
  { uint32_t v = 0xae4e8au; esp -= 4; W32(esp, v); }
/* 9ea89e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea8a1: mov ecx, esp */
  ecx = esp;
/* 9ea8a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea8a5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea8a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea8ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea8ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea8b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea8b4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea8bau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea8ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea8bb: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 9ea8c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea8c2: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9ea8c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea8c6: mov ecx, 0xcd5c90 */
  ecx = 0xcd5c90u;
/* 9ea8cb: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea8d1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea8d1: push 0x9f1a20 */
  { uint32_t v = 0x9f1a20u; esp -= 4; W32(esp, v); }
/* 9ea8d6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea8dbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea8db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea8de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea8df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea8e2: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea920(void) {
  LOAD_REGS();
L_9ea920: /* 9ea920: mov dword ptr [0xcd61bc], 0xcd5c90 */
  W32((uint32_t)(0xcd61bcu), 0xcd5c90u);
/* 9ea92a: ret  */
  esp += 4; SPILL(); return;
}

void f_9ea940(void) {
  LOAD_REGS();
L_9ea940: /* 9ea940: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9ea944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea946: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea948: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea94a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea94c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9ea950: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9ea956u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9ea956: mov esi, eax */
  esi = eax;
/* 9ea958: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9ea95d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea95e: push 0x6c9854 */
  { uint32_t v = 0x6c9854u; esp -= 4; W32(esp, v); }
/* 9ea963: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9ea968: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9ea96eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9ea96e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9ea970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9ea974: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9ea979: push 0xae4eb2 */
  { uint32_t v = 0xae4eb2u; esp -= 4; W32(esp, v); }
/* 9ea97e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ea981: mov ecx, esp */
  ecx = esp;
/* 9ea983: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ea985: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ea988: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ea98b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ea98e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ea991: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ea994: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ea99au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ea99a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ea99b: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 9ea9a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea9a2: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9ea9a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ea9a6: mov ecx, 0xcd61c0 */
  ecx = 0xcd61c0u;
/* 9ea9ab: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ea9b1u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ea9b1: push 0x9f1a40 */
  { uint32_t v = 0x9f1a40u; esp -= 4; W32(esp, v); }
/* 9ea9b6: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ea9bbu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ea9bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea9be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ea9bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ea9c2: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaa00(void) {
  LOAD_REGS();
L_9eaa00: /* 9eaa00: mov dword ptr [0xcd66ec], 0xcd61c0 */
  W32((uint32_t)(0xcd66ecu), 0xcd61c0u);
/* 9eaa0a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaa20(void) {
  LOAD_REGS();
L_9eaa20: /* 9eaa20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eaa23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eaa24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa2c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eaa30: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eaa36u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eaa36: mov esi, eax */
  esi = eax;
/* 9eaa38: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eaa3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaa3e: push 0x6c578b */
  { uint32_t v = 0x6c578bu; esp -= 4; W32(esp, v); }
/* 9eaa43: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eaa48: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eaa4eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eaa4e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eaa50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaa51: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eaa54: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eaa59: push 0xae4eda */
  { uint32_t v = 0xae4edau; esp -= 4; W32(esp, v); }
/* 9eaa5e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eaa61: mov ecx, esp */
  ecx = esp;
/* 9eaa63: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eaa65: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eaa68: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eaa6b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eaa6e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eaa71: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eaa74: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eaa7au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eaa7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaa7b: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 9eaa80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa82: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9eaa84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaa86: mov ecx, 0xcd66f0 */
  ecx = 0xcd66f0u;
/* 9eaa8b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eaa91u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eaa91: push 0x9f1a60 */
  { uint32_t v = 0x9f1a60u; esp -= 4; W32(esp, v); }
/* 9eaa96: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eaa9bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eaa9b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eaa9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eaa9f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eaaa2: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaae0(void) {
  LOAD_REGS();
L_9eaae0: /* 9eaae0: mov dword ptr [0xcd6c1c], 0xcd66f0 */
  W32((uint32_t)(0xcd6c1cu), 0xcd66f0u);
/* 9eaaea: ret  */
  esp += 4; SPILL(); return;
}

void f_9eab00(void) {
  LOAD_REGS();
L_9eab00: /* 9eab00: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eab03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eab04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab0c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eab10: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eab16u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eab16: mov esi, eax */
  esi = eax;
/* 9eab18: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eab1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eab1e: push 0x6c66ea */
  { uint32_t v = 0x6c66eau; esp -= 4; W32(esp, v); }
/* 9eab23: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eab28: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eab2eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eab2e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eab30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eab31: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eab34: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eab39: push 0xae4efa */
  { uint32_t v = 0xae4efau; esp -= 4; W32(esp, v); }
/* 9eab3e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eab41: mov ecx, esp */
  ecx = esp;
/* 9eab43: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eab45: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eab48: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eab4b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eab4e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eab51: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eab54: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eab5au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eab5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eab5b: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 9eab60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab62: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9eab64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eab66: mov ecx, 0xcd6c20 */
  ecx = 0xcd6c20u;
/* 9eab6b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eab71u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eab71: push 0x9f1a80 */
  { uint32_t v = 0x9f1a80u; esp -= 4; W32(esp, v); }
/* 9eab76: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eab7bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eab7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eab7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eab7f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eab82: ret  */
  esp += 4; SPILL(); return;
}

void f_9eabc0(void) {
  LOAD_REGS();
L_9eabc0: /* 9eabc0: mov dword ptr [0xcd714c], 0xcd6c20 */
  W32((uint32_t)(0xcd714cu), 0xcd6c20u);
/* 9eabca: ret  */
  esp += 4; SPILL(); return;
}

void f_9eabe0(void) {
  LOAD_REGS();
L_9eabe0: /* 9eabe0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eabe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eabe4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eabe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eabe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eabea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eabec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eabf0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eabf6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eabf6: mov esi, eax */
  esi = eax;
/* 9eabf8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eabfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eabfe: push 0x6c579f */
  { uint32_t v = 0x6c579fu; esp -= 4; W32(esp, v); }
/* 9eac03: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eac08: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eac0eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eac0e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eac10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eac11: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eac14: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eac19: push 0xae4f2a */
  { uint32_t v = 0xae4f2au; esp -= 4; W32(esp, v); }
/* 9eac1e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eac21: mov ecx, esp */
  ecx = esp;
/* 9eac23: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eac25: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eac28: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eac2b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eac2e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eac31: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eac34: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eac3au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eac3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eac3b: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 9eac40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eac42: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9eac44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eac46: mov ecx, 0xcd7150 */
  ecx = 0xcd7150u;
/* 9eac4b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eac51u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eac51: push 0x9f1aa0 */
  { uint32_t v = 0x9f1aa0u; esp -= 4; W32(esp, v); }
/* 9eac56: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eac5bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eac5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eac5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eac5f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eac62: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaca0(void) {
  LOAD_REGS();
L_9eaca0: /* 9eaca0: mov dword ptr [0xcd767c], 0xcd7150 */
  W32((uint32_t)(0xcd767cu), 0xcd7150u);
/* 9eacaa: ret  */
  esp += 4; SPILL(); return;
}

void f_9eacc0(void) {
  LOAD_REGS();
L_9eacc0: /* 9eacc0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eacc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eacc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eacc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eacc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eacca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaccc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eacd0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eacd6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eacd6: mov esi, eax */
  esi = eax;
/* 9eacd8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eacdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eacde: push 0x6c1d3e */
  { uint32_t v = 0x6c1d3eu; esp -= 4; W32(esp, v); }
/* 9eace3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eace8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eaceeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eacee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eacf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eacf1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eacf4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eacf9: push 0xae4f46 */
  { uint32_t v = 0xae4f46u; esp -= 4; W32(esp, v); }
/* 9eacfe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9ead01: mov ecx, esp */
  ecx = esp;
/* 9ead03: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9ead05: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9ead08: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9ead0b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9ead0e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9ead11: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9ead14: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9ead1au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9ead1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9ead1b: push 0xcd5230 */
  { uint32_t v = 0xcd5230u; esp -= 4; W32(esp, v); }
/* 9ead20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ead22: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9ead24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9ead26: mov ecx, 0xcd7680 */
  ecx = 0xcd7680u;
/* 9ead2b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9ead31u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9ead31: push 0x9f1ac0 */
  { uint32_t v = 0x9f1ac0u; esp -= 4; W32(esp, v); }
/* 9ead36: call 0x99cbec */
  esp -= 4; W32(esp, 0x9ead3bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9ead3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ead3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9ead3f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9ead42: ret  */
  esp += 4; SPILL(); return;
}

void f_9ead80(void) {
  LOAD_REGS();
L_9ead80: /* 9ead80: mov dword ptr [0xcd7bac], 0xcd7680 */
  W32((uint32_t)(0xcd7bacu), 0xcd7680u);
/* 9ead8a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eada0(void) {
  LOAD_REGS();
L_9eada0: /* 9eada0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eada3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eada4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eada6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eada8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eadaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eadac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eadb0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eadb6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eadb6: mov esi, eax */
  esi = eax;
/* 9eadb8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eadbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eadbe: push 0x6cc20c */
  { uint32_t v = 0x6cc20cu; esp -= 4; W32(esp, v); }
/* 9eadc3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eadc8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eadceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eadce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eadd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eadd1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eadd4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eadd9: push 0xae4f62 */
  { uint32_t v = 0xae4f62u; esp -= 4; W32(esp, v); }
/* 9eadde: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eade1: mov ecx, esp */
  ecx = esp;
/* 9eade3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eade5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eade8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eadeb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eadee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eadf1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eadf4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eadfau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eadfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eadfb: push 0xcd5230 */
  { uint32_t v = 0xcd5230u; esp -= 4; W32(esp, v); }
/* 9eae00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eae02: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 9eae04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eae06: mov ecx, 0xcd7bb0 */
  ecx = 0xcd7bb0u;
/* 9eae0b: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eae11u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eae11: push 0x9f1ae0 */
  { uint32_t v = 0x9f1ae0u; esp -= 4; W32(esp, v); }
/* 9eae16: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eae1bu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eae1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eae1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eae1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eae22: ret  */
  esp += 4; SPILL(); return;
}

void f_9eae60(void) {
  LOAD_REGS();
L_9eae60: /* 9eae60: mov dword ptr [0xcd80dc], 0xcd7bb0 */
  W32((uint32_t)(0xcd80dcu), 0xcd7bb0u);
/* 9eae6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eae80(void) {
  LOAD_REGS();
L_9eae80: /* 9eae80: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 9eae85: jmp 0x6ccd83 */
  SPILL(); f_6ccd83(); return;
}

void f_9eaea0(void) {
  LOAD_REGS();
L_9eaea0: /* 9eaea0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eaea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eaea4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaea6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaea8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaeaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaeac: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eaeb0: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eaeb6u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eaeb6: mov esi, eax */
  esi = eax;
/* 9eaeb8: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eaebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaebe: push 0x6c7b94 */
  { uint32_t v = 0x6c7b94u; esp -= 4; W32(esp, v); }
/* 9eaec3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eaec8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eaeceu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eaece: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eaed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaed1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eaed4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eaed9: push 0xae589a */
  { uint32_t v = 0xae589au; esp -= 4; W32(esp, v); }
/* 9eaede: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eaee1: mov ecx, esp */
  ecx = esp;
/* 9eaee3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eaee5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eaee8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eaeeb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eaeee: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eaef1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eaef4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eaefau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eaefa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaefb: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 9eaf00: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9eaf02: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 9eaf07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaf09: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 9eaf0e: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eaf14u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eaf14: push 0x9f1b00 */
  { uint32_t v = 0x9f1b00u; esp -= 4; W32(esp, v); }
/* 9eaf19: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eaf1eu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eaf1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eaf21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eaf22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eaf25: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaf60(void) {
  LOAD_REGS();
L_9eaf60: /* 9eaf60: mov dword ptr [0xcd98cc], 0xcd93a0 */
  W32((uint32_t)(0xcd98ccu), 0xcd93a0u);
/* 9eaf6a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eaf80(void) {
  LOAD_REGS();
L_9eaf80: /* 9eaf80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eaf83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eaf84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaf86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaf88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaf8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eaf8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eaf90: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eaf96u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eaf96: mov esi, eax */
  esi = eax;
/* 9eaf98: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eaf9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eaf9e: push 0x6c272a */
  { uint32_t v = 0x6c272au; esp -= 4; W32(esp, v); }
/* 9eafa3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eafa8: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eafaeu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eafae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eafb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eafb1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eafb4: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eafb9: push 0xae58ae */
  { uint32_t v = 0xae58aeu; esp -= 4; W32(esp, v); }
/* 9eafbe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eafc1: mov ecx, esp */
  ecx = esp;
/* 9eafc3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eafc5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eafc8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eafcb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eafce: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eafd1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eafd4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eafdau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eafda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eafdb: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eafe1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eafe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eafe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eafe4: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 9eafe9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eafeb: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 9eaff0: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eaff6u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eaff6: push 0x9f1b20 */
  { uint32_t v = 0x9f1b20u; esp -= 4; W32(esp, v); }
/* 9eaffb: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb000u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb000: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb004: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb007: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb040(void) {
  LOAD_REGS();
L_9eb040: /* 9eb040: mov dword ptr [0xcd9dfc], 0xcd98d0 */
  W32((uint32_t)(0xcd9dfcu), 0xcd98d0u);
/* 9eb04a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb060(void) {
  LOAD_REGS();
L_9eb060: /* 9eb060: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb06a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb06c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb070: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb076u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb076: mov esi, eax */
  esi = eax;
/* 9eb078: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb07d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb07e: push 0x6caca4 */
  { uint32_t v = 0x6caca4u; esp -= 4; W32(esp, v); }
/* 9eb083: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb088: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb08eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb08e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb091: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb094: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb099: push 0xae5d52 */
  { uint32_t v = 0xae5d52u; esp -= 4; W32(esp, v); }
/* 9eb09e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb0a1: mov ecx, esp */
  ecx = esp;
/* 9eb0a3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb0a5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb0a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb0ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb0ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb0b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb0b4: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb0bau); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb0ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb0bb: push 0xb66a98 */
  { uint32_t v = 0xb66a98u; esp -= 4; W32(esp, v); }
/* 9eb0c0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9eb0c2: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 9eb0c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb0c9: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 9eb0ce: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb0d4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb0d4: push 0x9f1b40 */
  { uint32_t v = 0x9f1b40u; esp -= 4; W32(esp, v); }
/* 9eb0d9: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb0deu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb0de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb0e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb0e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb0e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb120(void) {
  LOAD_REGS();
L_9eb120: /* 9eb120: mov dword ptr [0xcda554], 0xcda028 */
  W32((uint32_t)(0xcda554u), 0xcda028u);
/* 9eb12a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb140(void) {
  LOAD_REGS();
L_9eb140: /* 9eb140: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb143: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb144: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb146: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb148: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb14a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb14c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb150: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb156u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb156: mov esi, eax */
  esi = eax;
/* 9eb158: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb15e: push 0x6c7577 */
  { uint32_t v = 0x6c7577u; esp -= 4; W32(esp, v); }
/* 9eb163: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb168: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb16eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb16e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb171: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb174: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb179: push 0xae5d6e */
  { uint32_t v = 0xae5d6eu; esp -= 4; W32(esp, v); }
/* 9eb17e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb181: mov ecx, esp */
  ecx = esp;
/* 9eb183: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb185: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb188: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb18b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb18e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb191: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb194: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb19au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb19a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb19b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb1a1u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb1a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb1a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb1a4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9eb1a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb1a8: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 9eb1ad: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb1b3u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb1b3: push 0x9f1b60 */
  { uint32_t v = 0x9f1b60u; esp -= 4; W32(esp, v); }
/* 9eb1b8: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb1bdu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb1bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb1c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb1c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb1c4: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb200(void) {
  LOAD_REGS();
L_9eb200: /* 9eb200: mov dword ptr [0xcdaa84], 0xcda558 */
  W32((uint32_t)(0xcdaa84u), 0xcda558u);
/* 9eb20a: ret  */
  esp += 4; SPILL(); return;
}

void f_9eb220(void) {
  LOAD_REGS();
L_9eb220: /* 9eb220: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9eb224: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb226: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb22a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb22c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9eb230: call dword ptr [0xcfa44c] */
  esp -= 4; W32(esp, 0x9eb236u); SPILL(); f_4e33af(); if (g_unwind) return; /* Core!??0FGuid@@QAE@KKKK@Z */ RELOAD();
/* 9eb236: mov esi, eax */
  esi = eax;
/* 9eb238: mov eax, dword ptr [0xcfa448] */
  eax = R32((uint32_t)(0xcfa448u));
/* 9eb23d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb23e: push 0x6c7815 */
  { uint32_t v = 0x6c7815u; esp -= 4; W32(esp, v); }
/* 9eb243: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* 9eb248: call dword ptr [0xcfa444] */
  esp -= 4; W32(esp, 0x9eb24eu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* 9eb24e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9eb250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb251: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9eb254: push 0xac3e20 */
  { uint32_t v = 0xac3e20u; esp -= 4; W32(esp, v); }
/* 9eb259: push 0xae5d86 */
  { uint32_t v = 0xae5d86u; esp -= 4; W32(esp, v); }
/* 9eb25e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9eb261: mov ecx, esp */
  ecx = esp;
/* 9eb263: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9eb265: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9eb268: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9eb26b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9eb26e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9eb271: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9eb274: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb27au); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb27a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb27b: call dword ptr [0xcfa440] */
  esp -= 4; W32(esp, 0x9eb281u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* 9eb281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9eb282: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb284: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9eb286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9eb288: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 9eb28d: call dword ptr [0xcfa43c] */
  esp -= 4; W32(esp, 0x9eb293u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* 9eb293: push 0x9f1b80 */
  { uint32_t v = 0x9f1b80u; esp -= 4; W32(esp, v); }
/* 9eb298: call 0x99cbec */
  esp -= 4; W32(esp, 0x9eb29du); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 9eb29d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb2a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9eb2a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9eb2a4: ret  */
  esp += 4; SPILL(); return;
}
