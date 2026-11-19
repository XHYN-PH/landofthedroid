#include "recomp.h"
#include "rec_mod.h"

void f_87b880(void) {
  LOAD_REGS();
L_87b880: /* 87b880: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87b883: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b884: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 87b888: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b88b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b893: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b896: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b897: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b898: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b89b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b89f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b8a0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b8a5: mov edi, ecx */
  edi = ecx;
/* 87b8a7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b8aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b8ab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b8aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b8ae: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b8b1: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87b8b9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87b8c1: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 87b8c9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b8cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b8cd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87b8d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b8d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b8d5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b8d8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b8dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b8de: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b8e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b8e1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b8e4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b8e5: mov eax, edx */
  eax = edx;
/* 87b8e7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b8ea: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b8ed: jne 0x87b905 */
  if (!zf) goto L_87b905;
L_87b8ef: /* 87b8ef: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b8f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b8f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b8f5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b8f8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b8fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b8ff: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b905u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b905: /* 87b905: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87b909: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87b90b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 87b90d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87b910: mov ecx, esp */
  ecx = esp;
/* 87b912: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87b914: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 87b918: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87b91b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 87b91f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 87b922: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87b926: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b927: mov ecx, edi */
  ecx = edi;
/* 87b929: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x87b92fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b92f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b931: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87b934: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b970(void) {
  LOAD_REGS();
L_87b970: /* 87b970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b972: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87b976: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b979: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b981: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b984: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b986: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b989: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b98e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b993: mov edi, ecx */
  edi = ecx;
/* 87b995: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b999: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b99cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b99c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b99f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b9a0: mov eax, edx */
  eax = edx;
/* 87b9a2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b9a5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b9a8: jne 0x87b9c0 */
  if (!zf) goto L_87b9c0;
L_87b9aa: /* 87b9aa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b9ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b9ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b9b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b9b3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b9b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b9ba: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b9c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b9c0: /* 87b9c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87b9c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b9c5: mov ecx, edi */
  ecx = edi;
/* 87b9c7: call 0x6c25ef */
  esp -= 4; W32(esp, 0x87b9ccu); SPILL(); f_6c25ef(); if (g_unwind) return; RELOAD();
/* 87b9cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b9cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b9ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b9cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ba00(void) {
  LOAD_REGS();
L_87ba00: /* 87ba00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ba01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ba02: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87ba06: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ba09: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87ba11: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ba14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ba15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ba16: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ba19: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87ba1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ba1e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ba23: mov edi, ecx */
  edi = ecx;
/* 87ba25: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ba28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ba29: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ba2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ba2c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ba2f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ba30: mov eax, edx */
  eax = edx;
/* 87ba32: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ba35: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ba38: jne 0x87ba50 */
  if (!zf) goto L_87ba50;
L_87ba3a: /* 87ba3a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ba3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ba3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ba40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ba43: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ba49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ba4a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ba50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ba50: /* 87ba50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87ba54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ba55: mov ecx, edi */
  ecx = edi;
/* 87ba57: call 0x6c8e63 */
  esp -= 4; W32(esp, 0x87ba5cu); SPILL(); f_6c8e63(); if (g_unwind) return; RELOAD();
/* 87ba5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ba5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ba5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87ba5f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ba90(void) {
  LOAD_REGS();
L_87ba90: /* 87ba90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ba91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ba92: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87ba96: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ba99: mov byte ptr [esp + 7], 0 */
  W8((uint32_t)(esp + 0x7u), 0x0u);
/* 87ba9e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87baa1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87baa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87baa3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87baa6: lea eax, [esp + 0xb] */
  eax = (uint32_t)(esp + 0xbu);
/* 87baaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87baab: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bab0: mov edi, ecx */
  edi = ecx;
/* 87bab2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bab5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bab6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bab9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87babc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87babd: mov eax, edx */
  eax = edx;
/* 87babf: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bac2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bac5: jne 0x87badd */
  if (!zf) goto L_87badd;
L_87bac7: /* 87bac7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87baca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bacb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bacd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bad0: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bad7: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87baddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87badd: /* 87badd: movzx eax, byte ptr [esp + 0xb] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0xbu)));
/* 87bae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bae3: mov ecx, edi */
  ecx = edi;
/* 87bae5: call 0x6c8a49 */
  esp -= 4; W32(esp, 0x87baeau); SPILL(); f_6c8a49(); if (g_unwind) return; RELOAD();
/* 87baea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87baeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87baec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87baed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87bb10(void) {
  LOAD_REGS();
L_87bb10: /* 87bb10: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87bb13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bb14: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 87bb18: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bb1b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bb1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bb1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bb20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bb23: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87bb27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bb28: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bb2d: mov edi, ecx */
  edi = ecx;
/* 87bb2f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bb32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bb33: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bb36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bb36: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bb39: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bb3a: mov eax, edx */
  eax = edx;
/* 87bb3c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bb3f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bb42: jne 0x87bb5a */
  if (!zf) goto L_87bb5a;
L_87bb44: /* 87bb44: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bb47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bb48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bb4a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bb4d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bb54: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87bb5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bb5a: /* 87bb5a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87bb5e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87bb62: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87bb65: mov eax, esp */
  eax = esp;
/* 87bb67: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 87bb69: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 87bb6d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87bb70: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 87bb73: mov ecx, edi */
  ecx = edi;
/* 87bb75: call 0x6c477d */
  esp -= 4; W32(esp, 0x87bb7au); SPILL(); f_6c477d(); if (g_unwind) return; RELOAD();
/* 87bb7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87bb7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87bb7c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87bb7f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87bbb0(void) {
  LOAD_REGS();
L_87bbb0: /* 87bbb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bbb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bbb2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87bbb6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bbb9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87bbc1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bbc4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bbc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bbc6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bbc9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87bbcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bbce: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bbd3: mov edi, ecx */
  edi = ecx;
/* 87bbd5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bbd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bbd9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bbdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bbdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bbde: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87bbe2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87bbe8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87bbe8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bbeb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bbee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bbef: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87bbf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bbf4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bbf7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bbfa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bc00: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bc03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bc03: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bc06: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bc07: mov eax, edx */
  eax = edx;
/* 87bc09: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bc0c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bc0f: jne 0x87bc27 */
  if (!zf) goto L_87bc27;
L_87bc11: /* 87bc11: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bc14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bc15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bc17: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bc1a: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bc20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bc21: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87bc27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bc27: /* 87bc27: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87bc2b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87bc2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bc30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bc31: mov ecx, edi */
  ecx = edi;
/* 87bc33: call 0x6c4b8d */
  esp -= 4; W32(esp, 0x87bc38u); SPILL(); f_6c4b8d(); if (g_unwind) return; RELOAD();
/* 87bc38: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 87bc3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87bc3d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 87bc3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87bc40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87bc41: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87bc80(void) {
  LOAD_REGS();
L_87bc80: /* 87bc80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bc81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bc82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87bc86: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bc89: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87bc91: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bc94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bc95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bc96: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bc99: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87bc9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bc9e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bca3: mov edi, ecx */
  edi = ecx;
/* 87bca5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bca9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bcacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bcac: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bcaf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bcb0: mov eax, edx */
  eax = edx;
/* 87bcb2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bcb5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bcb8: jne 0x87bcd0 */
  if (!zf) goto L_87bcd0;
L_87bcba: /* 87bcba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bcbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bcbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bcc0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bcc3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bcc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bcca: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87bcd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bcd0: /* 87bcd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87bcd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bcd5: mov ecx, edi */
  ecx = edi;
/* 87bcd7: call 0x6ca82b */
  esp -= 4; W32(esp, 0x87bcdcu); SPILL(); f_6ca82b(); if (g_unwind) return; RELOAD();
/* 87bcdc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87bce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87bce1: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87bce3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87bce4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87bce5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87bd10(void) {
  LOAD_REGS();
L_87bd10: /* 87bd10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bd11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bd12: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87bd16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bd19: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87bd21: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bd24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bd25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bd26: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bd29: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87bd2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bd2e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bd33: mov edi, ecx */
  edi = ecx;
/* 87bd35: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bd38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bd39: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bd3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bd3c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bd3f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bd40: mov eax, edx */
  eax = edx;
/* 87bd42: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bd45: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bd48: jne 0x87bd60 */
  if (!zf) goto L_87bd60;
L_87bd4a: /* 87bd4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bd4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bd4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bd50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bd53: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bd59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bd5a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87bd60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bd60: /* 87bd60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87bd64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bd65: mov ecx, edi */
  ecx = edi;
/* 87bd67: call 0x6c1de3 */
  esp -= 4; W32(esp, 0x87bd6cu); SPILL(); f_6c1de3(); if (g_unwind) return; RELOAD();
/* 87bd6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87bd6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87bd6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87bd6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87bda0(void) {
  LOAD_REGS();
L_87bda0: /* 87bda0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bda1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bda2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87bda6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bda9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87bdb1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bdb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bdb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bdb6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bdb9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87bdbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bdbe: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bdc3: mov edi, ecx */
  edi = ecx;
/* 87bdc5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bdc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bdc9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bdccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bdcc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bdcf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87bdd7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bdda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bddb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87bddf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bde0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bde3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bde6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bdeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bdec: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bdefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bdef: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bdf2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bdf3: mov eax, edx */
  eax = edx;
/* 87bdf5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bdf8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bdfb: jne 0x87be13 */
  if (!zf) goto L_87be13;
L_87bdfd: /* 87bdfd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87be00: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87be01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87be03: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87be06: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87be0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87be0d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87be13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87be13: /* 87be13: mov esi, dword ptr [edi + 0x80] */
  esi = R32((uint32_t)(edi + 0x80u));
/* 87be19: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 87be1d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87be21: shl ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 87be24: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 87be26: mov dword ptr [edi + 0xcc], eax */
  W32((uint32_t)(edi + 0xccu), eax);
/* 87be2c: mov eax, esi */
  eax = esi;
/* 87be2e: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 87be34: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 87be36: mov dword ptr [edi + 0xe8], 0 */
  W32((uint32_t)(edi + 0xe8u), 0x0u);
/* 87be40: mov dword ptr [edi + 0x80], eax */
  W32((uint32_t)(edi + 0x80u), eax);
/* 87be46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87be47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87be48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87be49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87be80(void) {
  LOAD_REGS();
L_87be80: /* 87be80: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87be86: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87be8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87be8c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87be8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87be8e: mov esi, dword ptr [esp + 0xd4] */
  esi = R32((uint32_t)(esp + 0xd4u));
/* 87be95: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87be9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87be9e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bea1: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 87bea5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87bea6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bea7: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 87beab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87beac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87beaf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87beb2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87beb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87beb8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bebb: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87bec1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87bec3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bec5: je 0x87bed4 */
  if (zf) goto L_87bed4;
L_87bec7: /* 87bec7: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87becc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87bece: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87bed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bed1: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87bed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bed4: /* 87bed4: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87bed9: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 87bedb: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bedd: jne 0x87bee3 */
  if (!zf) goto L_87bee3;
L_87bedf: /* 87bedf: lea ebp, [esp + 0x38] */
  ebp = (uint32_t)(esp + 0x38u);
L_87bee3: /* 87bee3: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87bee9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87beec: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87beef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bef0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 87bef4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bef5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bef8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87befb: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bf01: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bf04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bf04: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87bf0a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87bf0c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bf0e: je 0x87bf1d */
  if (zf) goto L_87bf1d;
L_87bf10: /* 87bf10: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87bf15: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87bf17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87bf19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bf1a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87bf1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bf1d: /* 87bf1d: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87bf23: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 87bf25: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bf27: jne 0x87bf2d */
  if (!zf) goto L_87bf2d;
L_87bf29: /* 87bf29: lea ebx, [esp + 0x2c] */
  ebx = (uint32_t)(esp + 0x2cu);
L_87bf2d: /* 87bf2d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87bf31: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x87bf37u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 87bf37: mov edx, dword ptr [0xcfa514] */
  edx = R32((uint32_t)(0xcfa514u));
/* 87bf3d: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 87bf43: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87bf46: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87bf49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bf4c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bf4d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bf50: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87bf54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bf55: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87bf5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bf5b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87bf5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87bf5e: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87bf64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87bf66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bf68: je 0x87bf77 */
  if (zf) goto L_87bf77;
L_87bf6a: /* 87bf6a: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87bf6f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87bf71: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87bf73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bf74: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87bf77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bf77: /* 87bf77: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87bf7d: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 87bf7f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87bf81: jne 0x87bf87 */
  if (!zf) goto L_87bf87;
L_87bf83: /* 87bf83: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_87bf87: /* 87bf87: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87bf8a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87bf8b: mov eax, edx */
  eax = edx;
/* 87bf8d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87bf90: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87bf93: jne 0x87bfab */
  if (!zf) goto L_87bfab;
L_87bf95: /* 87bf95: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87bf98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87bf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87bf9b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87bf9e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87bfa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87bfa5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87bfabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87bfab: /* 87bfab: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87bfaf: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 87bfb3: add esi, 0x3c0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87bfb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bfba: mov ecx, esi */
  ecx = esi;
/* 87bfbc: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x87bfc2u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 87bfc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bfc3: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87bfc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bfc8: mov ecx, ebp */
  ecx = ebp;
/* 87bfca: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x87bfd0u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 87bfd0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87bfd2: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 87bfd5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 87bfd8: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 87bfdb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 87bfde: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 87bfe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bfe3: mov ecx, esi */
  ecx = esi;
/* 87bfe5: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 87bfe8: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x87bfeeu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 87bfee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87bfef: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87bff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87bff4: mov ecx, ebx */
  ecx = ebx;
/* 87bff6: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x87bffcu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 87bffc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87bffe: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 87c000: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 87c003: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 87c006: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 87c009: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 87c00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c00e: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 87c012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c013: mov ecx, esi */
  ecx = esi;
/* 87c015: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 87c018: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x87c01eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 87c01e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 87c024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c025: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 87c029: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87c02a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c02b: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 87c032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c033: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 87c036: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x87c03cu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 87c03c: mov ecx, eax */
  ecx = eax;
/* 87c03e: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x87c044u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87c044: mov ecx, eax */
  ecx = eax;
/* 87c046: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x87c04cu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 87c04c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87c04e: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 87c050: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87c053: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 87c056: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87c059: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 87c05c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c05d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c05e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c05f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87c060: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c066: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87c0f0(void) {
  LOAD_REGS();
L_87c0f0: /* 87c0f0: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c0f6: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87c0fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87c0fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87c0fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c0fe: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 87c105: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87c10b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c10e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c111: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 87c115: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c116: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c117: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 87c11b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c11c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c11f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c122: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c127: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c128: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c12bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c12b: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87c131: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87c133: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c135: je 0x87c144 */
  if (zf) goto L_87c144;
L_87c137: /* 87c137: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87c13c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87c13e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87c140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c141: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87c144u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c144: /* 87c144: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87c149: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 87c14b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c14d: jne 0x87c153 */
  if (!zf) goto L_87c153;
L_87c14f: /* 87c14f: lea ebp, [esp + 0x38] */
  ebp = (uint32_t)(esp + 0x38u);
L_87c153: /* 87c153: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87c159: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c15c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c15f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c160: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 87c164: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c165: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c168: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c16b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c171: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c174u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c174: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87c17a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87c17c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c17e: je 0x87c18d */
  if (zf) goto L_87c18d;
L_87c180: /* 87c180: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87c185: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87c187: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87c189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c18a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87c18du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c18d: /* 87c18d: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87c193: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 87c195: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c197: jne 0x87c19d */
  if (!zf) goto L_87c19d;
L_87c199: /* 87c199: lea ebx, [esp + 0x2c] */
  ebx = (uint32_t)(esp + 0x2cu);
L_87c19d: /* 87c19d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87c1a1: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x87c1a7u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 87c1a7: mov edx, dword ptr [0xcfa514] */
  edx = R32((uint32_t)(0xcfa514u));
/* 87c1ad: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 87c1b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c1b6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c1b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c1bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c1bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c1c0: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87c1c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c1c5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c1ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c1cb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c1ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c1ce: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87c1d4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87c1d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c1d8: je 0x87c1e7 */
  if (zf) goto L_87c1e7;
L_87c1da: /* 87c1da: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87c1df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87c1e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87c1e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c1e4: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87c1e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c1e7: /* 87c1e7: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87c1ed: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 87c1ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c1f1: jne 0x87c1f7 */
  if (!zf) goto L_87c1f7;
L_87c1f3: /* 87c1f3: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_87c1f7: /* 87c1f7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87c1fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87c1fb: mov eax, edx */
  eax = edx;
/* 87c1fd: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87c200: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87c203: jne 0x87c21b */
  if (!zf) goto L_87c21b;
L_87c205: /* 87c205: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c208: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c20b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c20e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87c214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c215: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87c21bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c21b: /* 87c21b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87c21f: add esi, 0x3c0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87c225: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c226: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 87c22a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c22b: mov ecx, ebp */
  ecx = ebp;
/* 87c22d: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x87c233u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 87c233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87c235: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 87c238: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87c23b: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 87c23e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87c241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c242: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87c246: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c247: mov ecx, ebx */
  ecx = ebx;
/* 87c249: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 87c24c: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x87c252u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 87c252: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87c254: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 87c256: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 87c259: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 87c25c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 87c25f: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 87c263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c265: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 87c269: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c26a: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 87c26d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 87c273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c274: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 87c27b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87c27c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 87c27f: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x87c285u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 87c285: mov ecx, eax */
  ecx = eax;
/* 87c287: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x87c28du); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87c28d: mov ecx, eax */
  ecx = eax;
/* 87c28f: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x87c295u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 87c295: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87c297: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 87c299: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87c29c: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 87c29f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87c2a2: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 87c2a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c2a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c2a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c2a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87c2a9: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c2af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87c340(void) {
  LOAD_REGS();
L_87c340: /* 87c340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87c341: mov ebp, esp */
  ebp = esp;
/* 87c343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87c345: push 0x9d4df0 */
  { uint32_t v = 0x9d4df0u; esp -= 4; W32(esp, v); }
/* 87c34a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87c350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87c358: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87c35c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c35d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c35e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87c361: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 87c364: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c36au); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c36a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c36c: je 0x87c4bc */
  if (zf) goto L_87c4bc;
L_87c372: /* 87c372: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c375: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c37bu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c37b: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87c37e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c380: je 0x87c4bc */
  if (zf) goto L_87c4bc;
L_87c386: /* 87c386: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c389: cmp byte ptr [ecx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 87c390: jae 0x87c3ab */
  if (!cf) goto L_87c3ab;
L_87c392: /* 87c392: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c398u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c398: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 87c39b: test byte ptr [eax + 0x90], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x90u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87c3a2: je 0x87c4bc */
  if (zf) goto L_87c4bc;
L_87c3a8: /* 87c3a8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_87c3ab: /* 87c3ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87c3ad: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x87c3b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c3b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c3b2: jne 0x87c4bc */
  if (!zf) goto L_87c4bc;
L_87c3b8: /* 87c3b8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c3bb: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c3c1u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c3c1: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 87c3c4: mov eax, dword ptr [0xcfaaac] */
  eax = R32((uint32_t)(0xcfaaacu));
/* 87c3c9: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 87c3cb: mov eax, dword ptr [0xcfaaac] */
  eax = R32((uint32_t)(0xcfaaacu));
/* 87c3d0: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87c3d3: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 87c3d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87c3dd: jne 0x87c3e9 */
  if (!zf) goto L_87c3e9;
L_87c3df: /* 87c3df: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87c3e1: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 87c3e7: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
L_87c3e9: /* 87c3e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c3ec: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c3f2u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c3f2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 87c3f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c3f7: je 0x87c420 */
  if (zf) goto L_87c420;
L_87c3f9: /* 87c3f9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c3fc: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c402u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c402: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c405: mov esi, eax */
  esi = eax;
/* 87c407: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c40du); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c40d: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 87c410: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c413: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 87c416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c417: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c41d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c420u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c420: /* 87c420: xor esi, esi */
  esi = 0;
/* 87c422: mov ebx, 0x200 */
  ebx = 0x200u;
/* 87c427: jmp 0x87c430 */
  goto L_87c430;
L_87c430: /* 87c430: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c433: test dword ptr [ecx + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c439: jne 0x87c49e */
  if (!zf) goto L_87c49e;
L_87c43b: /* 87c43b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c441u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c441: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87c444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c446: je 0x87c49e */
  if (zf) goto L_87c49e;
L_87c448: /* 87c448: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c44b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c451u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c451: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 87c454: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c456: jne 0x87c49e */
  if (!zf) goto L_87c49e;
L_87c458: /* 87c458: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c45b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c461u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c461: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87c464: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 87c467: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87c468: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87c46b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 87c46e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c46f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c473: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c478: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c47bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c47b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c47e: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c484u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c484: cmp dword ptr [eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87c487: je 0x87c430 */
  if (zf) goto L_87c430;
L_87c489: /* 87c489: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c48c: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c492u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c492: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 87c495: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 87c496: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87c499: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 87c49c: jle 0x87c430 */
  if ((zf || sf != of)) goto L_87c430;
L_87c49e: /* 87c49e: mov eax, dword ptr [0xcfaaac] */
  eax = R32((uint32_t)(0xcfaaacu));
/* 87c4a3: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 87c4a5: mov ecx, dword ptr [0xcfaaac] */
  ecx = R32((uint32_t)(0xcfaaacu));
/* 87c4ab: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87c4ae: jne 0x87c4bc */
  if (!zf) goto L_87c4bc;
L_87c4b0: /* 87c4b0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87c4b2: lea edx, [eax - 0xc] */
  edx = (uint32_t)(eax + 0xfffffff4u);
/* 87c4b5: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 87c4ba: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
L_87c4bc: /* 87c4bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87c4bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c4c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c4c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87c4c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87c4c9: mov esp, ebp */
  esp = ebp;
/* 87c4cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c4cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87c429(void) {
  LOAD_REGS();
L_87c429: /* 87c429: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_87c430: /* 87c430: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c433: test dword ptr [ecx + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c439: jne 0x87c49e */
  if (!zf) goto L_87c49e;
L_87c43b: /* 87c43b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c441u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c441: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87c444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c446: je 0x87c49e */
  if (zf) goto L_87c49e;
L_87c448: /* 87c448: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c44b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c451u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c451: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 87c454: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c456: jne 0x87c49e */
  if (!zf) goto L_87c49e;
L_87c458: /* 87c458: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c45b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c461u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c461: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87c464: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 87c467: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87c468: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87c46b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 87c46e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c46f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c473: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c478: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c47bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c47b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c47e: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c484u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c484: cmp dword ptr [eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87c487: je 0x87c430 */
  if (zf) goto L_87c430;
L_87c489: /* 87c489: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c48c: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c492u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c492: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 87c495: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 87c496: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87c499: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 87c49c: jle 0x87c430 */
  if ((zf || sf != of)) goto L_87c430;
L_87c49e: /* 87c49e: mov eax, dword ptr [0xcfaaac] */
  eax = R32((uint32_t)(0xcfaaacu));
/* 87c4a3: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 87c4a5: mov ecx, dword ptr [0xcfaaac] */
  ecx = R32((uint32_t)(0xcfaaacu));
/* 87c4ab: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87c4ae: jne 0x87c4bc */
  if (!zf) goto L_87c4bc;
L_87c4b0: /* 87c4b0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87c4b2: lea edx, [eax - 0xc] */
  edx = (uint32_t)(eax + 0xfffffff4u);
/* 87c4b5: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 87c4ba: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
L_87c4bc: /* 87c4bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87c4bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c4c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c4c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87c4c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87c4c9: mov esp, ebp */
  esp = ebp;
/* 87c4cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c4cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87c4cf(void) {
  LOAD_REGS();
L_87c4cf: /* 87c4cf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87c4d2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87c4d7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 87c4da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c4db: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 87c4de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87c4e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87c4e3(); return;
}

void f_87c4e3(void) {
  LOAD_REGS();
L_87c4e3: /* 87c4e3: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 87c4e9: push 0xa18f18 */
  { uint32_t v = 0xa18f18u; esp -= 4; W32(esp, v); }
/* 87c4ee: push 0xae6b90 */
  { uint32_t v = 0xae6b90u; esp -= 4; W32(esp, v); }
/* 87c4f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c4f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c4f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c4f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c4fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c4fd: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87c503u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87c503: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 87c506: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 87c50c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x87c50eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c50e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87c511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c512: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c514: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x87c516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c516: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87c519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c51a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c51c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x87c51eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c51e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c51f: push 0xae6b98 */
  { uint32_t v = 0xae6b98u; esp -= 4; W32(esp, v); }
/* 87c524: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c526u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c526: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c52b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c52d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87c532u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87c532: guest_badaddr(0x87c532); return;
}

void f_87c5c0(void) {
  LOAD_REGS();
L_87c5c0: /* 87c5c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87c5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c5c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87c5c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c5c9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87c5d1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c5d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c5d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c5d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c5d9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87c5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c5de: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c5e3: mov edi, ecx */
  edi = ecx;
/* 87c5e5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c5e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c5e9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c5ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c5ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87c5ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87c5f0: mov eax, edx */
  eax = edx;
/* 87c5f2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87c5f5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87c5f8: jne 0x87c610 */
  if (!zf) goto L_87c610;
L_87c5fa: /* 87c5fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c5fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c5fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c600: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c603: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87c609: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c60a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87c610u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c610: /* 87c610: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87c614: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87c619: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87c61b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c61e: mov ecx, esp */
  ecx = esp;
/* 87c620: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87c622: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87c625: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87c628: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87c62b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87c62e: mov ecx, edi */
  ecx = edi;
/* 87c630: call 0x6c81ed */
  esp -= 4; W32(esp, 0x87c635u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 87c635: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87c639: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c63a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87c63c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c63d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87c63e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87c680(void) {
  LOAD_REGS();
L_87c680: /* 87c680: mov eax, ecx */
  eax = ecx;
/* 87c682: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87c689: jne 0x87c6a6 */
  if (!zf) goto L_87c6a6;
L_87c68b: /* 87c68b: test dword ptr [eax + 0x80], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c695: je 0x87c6a6 */
  if (zf) goto L_87c6a6;
L_87c697: /* 87c697: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 87c69a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c69c: je 0x87c6a6 */
  if (zf) goto L_87c6a6;
L_87c69e: /* 87c69e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87c6a0: jmp dword ptr [eax + 0x170] */
  { uint32_t t = R32((uint32_t)(eax + 0x170u)); SPILL(); call_ind(t); return; }
L_87c6a6: /* 87c6a6: ret  */
  esp += 4; SPILL(); return;
}

void f_87c6c0(void) {
  LOAD_REGS();
L_87c6c0: /* 87c6c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87c6c1: mov ebp, esp */
  ebp = esp;
/* 87c6c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87c6c5: push 0x9d4e09 */
  { uint32_t v = 0x9d4e09u; esp -= 4; W32(esp, v); }
/* 87c6ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87c6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c6d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87c6d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c6db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c6dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c6dd: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c6e0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x87c6e6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 87c6e6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87c6e9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c6ec: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c6ef: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c6f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c6f3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c6f6: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 87c6f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c6fa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c6ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c700: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87c707: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c70au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c70a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87c70d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87c70e: mov eax, edx */
  eax = edx;
/* 87c710: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87c713: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87c716: jne 0x87c72e */
  if (!zf) goto L_87c72e;
L_87c718: /* 87c718: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c71b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c71c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c71e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c721: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87c727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c728: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87c72eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c72e: /* 87c72e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c731: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c737u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c737: mov edi, dword ptr [0xcfa8e0] */
  edi = R32((uint32_t)(0xcfa8e0u));
/* 87c73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c73e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c740: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c745: jne 0x87c74b */
  if (!zf) goto L_87c74b;
L_87c747: /* 87c747: xor esi, esi */
  esi = 0;
/* 87c749: jmp 0x87c76d */
  goto L_87c76d;
L_87c74b: /* 87c74b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c74e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c754u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c755: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c757: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87c75a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87c75d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87c760: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c763: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87c766: call 0x99cc00 */
  esp -= 4; W32(esp, 0x87c76bu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 87c76b: mov esi, esp */
  esi = esp;
L_87c76d: /* 87c76d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c770: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c776u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c777: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c779: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c77d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c780: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c786u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c788: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x87c78eu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 87c78e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c78f: call 0x6cb8e3 */
  esp -= 4; W32(esp, 0x87c794u); SPILL(); f_6cb8e3(); if (g_unwind) return; RELOAD();
/* 87c794: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c797: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c79a: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 87c7a1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87c7a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87c7a7: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 87c7aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87c7ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87c7b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c7b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c7b6: mov esp, ebp */
  esp = ebp;
/* 87c7b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c7b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87c800(void) {
  LOAD_REGS();
L_87c800: /* 87c800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87c801: mov ebp, esp */
  ebp = esp;
/* 87c803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87c805: push 0x9d4e29 */
  { uint32_t v = 0x9d4e29u; esp -= 4; W32(esp, v); }
/* 87c80a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87c810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87c818: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c81b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c81c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c81d: push 0xae6cf4 */
  { uint32_t v = 0xae6cf4u; esp -= 4; W32(esp, v); }
/* 87c822: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c825: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87c82bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87c82b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87c82e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c831: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c834: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c837: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c838: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c83b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 87c83e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c83f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c845: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87c84c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c84fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c84f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87c852: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87c853: mov eax, edx */
  eax = edx;
/* 87c855: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87c858: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87c85b: jne 0x87c873 */
  if (!zf) goto L_87c873;
L_87c85d: /* 87c85d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c860: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c863: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c866: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87c86c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c86d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87c873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c873: /* 87c873: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c876: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x87c87cu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 87c87c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c87e: je 0x87c906 */
  if (zf) goto L_87c906;
L_87c884: /* 87c884: push 0xae6d00 */
  { uint32_t v = 0xae6d00u; esp -= 4; W32(esp, v); }
/* 87c889: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c88c: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x87c892u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 87c892: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c894: je 0x87c8fb */
  if (zf) goto L_87c8fb;
L_87c896: /* 87c896: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c899: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c89fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c89f: mov edi, dword ptr [0xcfa8e0] */
  edi = R32((uint32_t)(0xcfa8e0u));
/* 87c8a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8a6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c8a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c8a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c8ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87c8ad: jne 0x87c8b3 */
  if (!zf) goto L_87c8b3;
L_87c8af: /* 87c8af: xor esi, esi */
  esi = 0;
/* 87c8b1: jmp 0x87c8d5 */
  goto L_87c8d5;
L_87c8b3: /* 87c8b3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c8b6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c8bcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c8bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c8bf: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87c8c2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87c8c5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87c8c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c8cb: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87c8ce: call 0x99cc00 */
  esp -= 4; W32(esp, 0x87c8d3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 87c8d3: mov esi, esp */
  esi = esp;
L_87c8d5: /* 87c8d5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c8d8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c8deu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c8de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87c8e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c8e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c8e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8e5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c8e8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87c8eeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87c8ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c8f0: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x87c8f6u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 87c8f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87c8f9: jmp 0x87c8fd */
  goto L_87c8fd;
L_87c8fb: /* 87c8fb: xor eax, eax */
  eax = 0;
L_87c8fd: /* 87c8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c8fe: call 0x6c86de */
  esp -= 4; W32(esp, 0x87c903u); SPILL(); f_6c86de(); if (g_unwind) return; RELOAD();
/* 87c903: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87c906: /* 87c906: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87c909: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 87c910: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87c916u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87c916: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 87c919: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87c91c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87c923: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87c924: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87c925: mov esp, ebp */
  esp = ebp;
/* 87c927: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87c928: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87c980(void) {
  LOAD_REGS();
L_87c980: /* 87c980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87c981: mov ebp, esp */
  ebp = esp;
/* 87c983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87c985: push 0x9d4e49 */
  { uint32_t v = 0x9d4e49u; esp -= 4; W32(esp, v); }
/* 87c98a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87c990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87c998: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87c99b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87c99c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c99d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87c99e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87c9a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87c9a4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87c9ab: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x87c9b1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 87c9b1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87c9b4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87c9b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87c9ba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c9bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c9be: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c9c1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 87c9c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87c9c5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87c9ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c9cb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 87c9cf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87c9d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87c9d2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87c9d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87c9d6: mov eax, edx */
  eax = edx;
/* 87c9d8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87c9db: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87c9de: jne 0x87c9f6 */
  if (!zf) goto L_87c9f6;
L_87c9e0: /* 87c9e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87c9e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87c9e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87c9e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87c9e9: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87c9ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87c9f0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87c9f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87c9f6: /* 87c9f6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87c9f9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87c9fd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87ca03u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87ca03: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87ca06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ca07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ca08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87ca0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87ca10: mov esp, ebp */
  esp = ebp;
/* 87ca12: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87ca13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ca16(void) {
  LOAD_REGS();
L_87ca16: /* 87ca16: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87ca19: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87ca1e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87ca21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ca22: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87ca25: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ca2au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87ca2a(); return;
}

void f_87ca2a(void) {
  LOAD_REGS();
L_87ca2a: /* 87ca2a: push 0xa18f50 */
  { uint32_t v = 0xa18f50u; esp -= 4; W32(esp, v); }
/* 87ca2f: push 0xae6d0c */
  { uint32_t v = 0xae6d0cu; esp -= 4; W32(esp, v); }
/* 87ca34: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87ca3au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87ca3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ca3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ca3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ca41: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ca46u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87ca46: guest_badaddr(0x87ca46); return;
}

void f_87ca90(void) {
  LOAD_REGS();
L_87ca90: /* 87ca90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87ca91: mov ebp, esp */
  ebp = esp;
/* 87ca93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87ca95: push 0x9d4e60 */
  { uint32_t v = 0x9d4e60u; esp -= 4; W32(esp, v); }
/* 87ca9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87caa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87caa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87caa8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87caab: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87cab0: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 87cab7: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87cabd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cac0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87cac3: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87cac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87cac7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cac8: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 87cacb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87cacc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87cacd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87cad0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cad3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87cad6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87cad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87cada: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87cae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cae1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87cae8: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x87caebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87caeb: mov eax, dword ptr [0xcfa510] */
  eax = R32((uint32_t)(0xcfa510u));
/* 87caf0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87caf2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87caf4: je 0x87cb03 */
  if (zf) goto L_87cb03;
L_87caf6: /* 87caf6: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87cafb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87cafd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87caff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cb00: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87cb03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87cb03: /* 87cb03: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87cb09: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87cb0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cb0d: mov esi, eax */
  esi = eax;
/* 87cb0f: jne 0x87cb14 */
  if (!zf) goto L_87cb14;
L_87cb11: /* 87cb11: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
L_87cb14: /* 87cb14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cb17: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 87cb1a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cb1d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87cb20: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87cb23: jne 0x87cb3d */
  if (!zf) goto L_87cb3d;
L_87cb25: /* 87cb25: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87cb28: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87cb29: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87cb2c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 87cb2f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87cb34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cb36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87cb37: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87cb3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87cb3d: /* 87cb3d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87cb3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87cb41: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 87cb44: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87cb47: jge 0x87cb4f */
  if ((sf == of)) goto L_87cb4f;
L_87cb49: /* 87cb49: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_87cb4f: /* 87cb4f: fsubr dword ptr [esi] */
  ST0 = (F32((uint32_t)(esi))) - ST0;
/* 87cb51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87cb54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87cb55: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 87cb57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cb58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87cb5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87cb60: mov esp, ebp */
  esp = ebp;
/* 87cb62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87cb63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87cb66(void) {
  LOAD_REGS();
L_87cb66: /* 87cb66: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87cb69: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87cb6e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 87cb71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87cb72: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 87cb75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87cb7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87cb7a(); return;
}

void f_87cb7a(void) {
  LOAD_REGS();
L_87cb7a: /* 87cb7a: push 0xa18fac */
  { uint32_t v = 0xa18facu; esp -= 4; W32(esp, v); }
/* 87cb7f: push 0xae6d1c */
  { uint32_t v = 0xae6d1cu; esp -= 4; W32(esp, v); }
/* 87cb84: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87cb8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87cb8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87cb8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cb8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cb91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87cb96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87cb96: guest_badaddr(0x87cb96); return;
}

void f_87cbf0(void) {
  LOAD_REGS();
L_87cbf0: /* 87cbf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87cbf1: mov ebp, esp */
  ebp = esp;
/* 87cbf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87cbf5: push 0x9d4e70 */
  { uint32_t v = 0x9d4e70u; esp -= 4; W32(esp, v); }
/* 87cbfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87cc00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cc01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87cc08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87cc0b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87cc10: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 87cc17: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87cc1d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cc20: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87cc23: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87cc26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87cc27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cc28: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 87cc2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87cc2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87cc2d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87cc30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cc33: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87cc36: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87cc39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87cc3a: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87cc40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cc41: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87cc48: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x87cc4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87cc4b: mov eax, dword ptr [0xcfa510] */
  eax = R32((uint32_t)(0xcfa510u));
/* 87cc50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87cc52: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cc54: je 0x87cc63 */
  if (zf) goto L_87cc63;
L_87cc56: /* 87cc56: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87cc5b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87cc5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87cc5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cc60: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87cc63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87cc63: /* 87cc63: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87cc69: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87cc6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cc6d: mov esi, eax */
  esi = eax;
/* 87cc6f: jne 0x87cc74 */
  if (!zf) goto L_87cc74;
L_87cc71: /* 87cc71: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
L_87cc74: /* 87cc74: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cc77: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 87cc7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cc7d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87cc80: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87cc83: jne 0x87cc9d */
  if (!zf) goto L_87cc9d;
L_87cc85: /* 87cc85: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87cc88: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87cc89: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87cc8c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 87cc8f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87cc94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cc96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87cc97: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87cc9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87cc9d: /* 87cc9d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87cc9f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87cca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87cca4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 87cca7: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87ccaa: jge 0x87ccb2 */
  if ((sf == of)) goto L_87ccb2;
L_87ccac: /* 87ccac: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_87ccb2: /* 87ccb2: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 87ccb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ccb5: fst dword ptr [esi] */
  WF32((uint32_t)(esi), ST0);
/* 87ccb7: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 87ccbd: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 87ccbf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87ccc2: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 87ccc8: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 87ccca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cccb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87ccd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87ccd3: mov esp, ebp */
  esp = ebp;
/* 87ccd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87ccd6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ccd9(void) {
  LOAD_REGS();
L_87ccd9: /* 87ccd9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87ccdc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87cce1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 87cce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cce5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 87cce8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ccedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87cced(); return;
}

void f_87cced(void) {
  LOAD_REGS();
L_87cced: /* 87cced: push 0xa18fd8 */
  { uint32_t v = 0xa18fd8u; esp -= 4; W32(esp, v); }
/* 87ccf2: push 0xae6d24 */
  { uint32_t v = 0xae6d24u; esp -= 4; W32(esp, v); }
/* 87ccf7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87ccfdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87ccfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87cd00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cd02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cd04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87cd09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87cd09: guest_badaddr(0x87cd09); return;
}

void f_87cd60(void) {
  LOAD_REGS();
L_87cd60: /* 87cd60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87cd64: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 87cd66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cd67: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87cd6du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87cd6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87cd80(void) {
  LOAD_REGS();
L_87cd80: /* 87cd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cd81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 87cd85: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cd87: je 0x87cda1 */
  if (zf) goto L_87cda1;
L_87cd89: /* 87cd89: mov ecx, esi */
  ecx = esi;
/* 87cd8b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87cd91u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87cd91: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 87cd95: test dword ptr [eax + 0x498], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cd9b: je 0x87cda1 */
  if (zf) goto L_87cda1;
L_87cd9d: /* 87cd9d: mov eax, esi */
  eax = esi;
/* 87cd9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cda0: ret  */
  esp += 4; SPILL(); return;
L_87cda1: /* 87cda1: xor eax, eax */
  eax = 0;
/* 87cda3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cda4: ret  */
  esp += 4; SPILL(); return;
}

void f_87cdc0(void) {
  LOAD_REGS();
L_87cdc0: /* 87cdc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cdc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 87cdc5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cdc7: je 0x87cde1 */
  if (zf) goto L_87cde1;
L_87cdc9: /* 87cdc9: mov ecx, esi */
  ecx = esi;
/* 87cdcb: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87cdd1u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87cdd1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 87cdd5: test dword ptr [eax + 0x498], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87cddb: je 0x87cde1 */
  if (zf) goto L_87cde1;
L_87cddd: /* 87cddd: mov eax, esi */
  eax = esi;
/* 87cddf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cde0: ret  */
  esp += 4; SPILL(); return;
L_87cde1: /* 87cde1: xor eax, eax */
  eax = 0;
/* 87cde3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cde4: ret  */
  esp += 4; SPILL(); return;
}

void f_87ce00(void) {
  LOAD_REGS();
L_87ce00: /* 87ce00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87ce01: mov ebp, esp */
  ebp = esp;
/* 87ce03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87ce05: push 0x9d4e80 */
  { uint32_t v = 0x9d4e80u; esp -= 4; W32(esp, v); }
/* 87ce0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87ce10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ce11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87ce18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87ce1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87ce1e: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 87ce21: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87ce24: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87ce27: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ce2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87ce2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ce2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ce2d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87ce30: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87ce37: jne 0x87ce52 */
  if (!zf) goto L_87ce52;
L_87ce39: /* 87ce39: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87ce3c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ce3d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87ce40: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87ce43: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ce49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ce4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ce4c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ce52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ce52: /* 87ce52: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 87ce58: mov eax, dword ptr [0xce84a0] */
  eax = R32((uint32_t)(0xce84a0u));
/* 87ce5d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 87ce60: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87ce62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87ce64: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 87ce66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ce67: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87ce69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87ce6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ce6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87ce74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87ce75: mov esp, ebp */
  esp = ebp;
/* 87ce77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87ce78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ce7b(void) {
  LOAD_REGS();
L_87ce7b: /* 87ce7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87ce7e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87ce83: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87ce86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ce87: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87ce8a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ce8fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87ce8f(); return;
}

void f_87ce8f(void) {
  LOAD_REGS();
L_87ce8f: /* 87ce8f: push 0xa19008 */
  { uint32_t v = 0xa19008u; esp -= 4; W32(esp, v); }
/* 87ce94: push 0xae6750 */
  { uint32_t v = 0xae6750u; esp -= 4; W32(esp, v); }
/* 87ce99: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87ce9fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87ce9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87cea2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cea4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cea6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ceabu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87ceab: guest_badaddr(0x87ceab); return;
}

void f_87cee0(void) {
  LOAD_REGS();
L_87cee0: /* 87cee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87cee1: mov ebp, esp */
  ebp = esp;
/* 87cee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87cee5: push 0x9d4e90 */
  { uint32_t v = 0x9d4e90u; esp -= 4; W32(esp, v); }
/* 87ceea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87cef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87cef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87cefb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cefe: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 87cf01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cf04: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87cf07: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87cf0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87cf0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cf0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87cf0d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87cf10: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87cf17: jne 0x87cf32 */
  if (!zf) goto L_87cf32;
L_87cf19: /* 87cf19: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87cf1c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87cf1d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87cf20: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87cf23: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87cf29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cf2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cf2c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87cf32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87cf32: /* 87cf32: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 87cf38: mov eax, dword ptr [0xce84a0] */
  eax = R32((uint32_t)(0xce84a0u));
/* 87cf3d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 87cf40: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87cf42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87cf44: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87cf47: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 87cf49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87cf4a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87cf4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87cf4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87cf50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87cf57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87cf58: mov esp, ebp */
  esp = ebp;
/* 87cf5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87cf5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87cf5e(void) {
  LOAD_REGS();
L_87cf5e: /* 87cf5e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87cf61: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87cf66: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87cf69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87cf6a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87cf6d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87cf72u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87cf72(); return;
}

void f_87cf72(void) {
  LOAD_REGS();
L_87cf72: /* 87cf72: push 0xa19040 */
  { uint32_t v = 0xa19040u; esp -= 4; W32(esp, v); }
/* 87cf77: push 0xae6758 */
  { uint32_t v = 0xae6758u; esp -= 4; W32(esp, v); }
/* 87cf7c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87cf82u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87cf82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87cf85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cf87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87cf89: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87cf8eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87cf8e: guest_badaddr(0x87cf8e); return;
}

void f_87cfc0(void) {
  LOAD_REGS();
L_87cfc0: /* 87cfc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87cfc1: mov ebp, esp */
  ebp = esp;
/* 87cfc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87cfc5: push 0x9d4ea0 */
  { uint32_t v = 0x9d4ea0u; esp -= 4; W32(esp, v); }
/* 87cfca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87cfd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87cfd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87cfd8: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87cfde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87cfdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87cfe0: mov esi, ecx */
  esi = ecx;
/* 87cfe2: movzx ebx, byte ptr [esi + 0x33f] */
  ebx = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 87cfe9: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 87cfef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87cff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87cff4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87cff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87cff8: xor edi, edi */
  edi = 0;
/* 87cffa: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87cffc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87cfff: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 87d002: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 87d005: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 87d008: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 87d00b: jge 0x87d011 */
  if ((sf == of)) goto L_87d011;
L_87d00d: /* 87d00d: xor ebx, ebx */
  ebx = 0;
/* 87d00f: jmp 0x87d01b */
  goto L_87d01b;
L_87d011: /* 87d011: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87d014: jl 0x87d01b */
  if ((sf != of)) goto L_87d01b;
L_87d016: /* 87d016: mov ebx, 0x18 */
  ebx = 0x18u;
L_87d01b: /* 87d01b: test byte ptr [esi + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d022: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 87d025: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 87d028: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 87d02b: je 0x87d2e5 */
  if (zf) goto L_87d2e5;
L_87d031: /* 87d031: cmp edi, dword ptr [esi + 0x69c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x69cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87d037: jge 0x87d060 */
  if ((sf == of)) goto L_87d060;
L_87d039: /* 87d039: mov edx, dword ptr [esi + 0x698] */
  edx = R32((uint32_t)(esi + 0x698u));
/* 87d03f: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 87d042: mov al, byte ptr [ecx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x51u))) & 0xffu);
/* 87d045: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d047: je 0x87d050 */
  if (zf) goto L_87d050;
L_87d049: /* 87d049: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d04b: call 0x6c8a49 */
  esp -= 4; W32(esp, 0x87d050u); SPILL(); f_6c8a49(); if (g_unwind) return; RELOAD();
L_87d050: /* 87d050: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87d051: jmp 0x87d031 */
  goto L_87d031;
L_87d053: /* 87d053: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87d056: jmp 0x87d060 */
  goto L_87d060;
L_87d060: /* 87d060: test byte ptr [esi + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d067: je 0x87d2e5 */
  if (zf) goto L_87d2e5;
L_87d06d: /* 87d06d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87d070: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87d076: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d078: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d07b: jne 0x87d2e5 */
  if (!zf) goto L_87d2e5;
L_87d081: /* 87d081: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87d084: fmul dword ptr [esi + 0x64c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x64cu)));
/* 87d08a: fadd dword ptr [esi + 0x648] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x648u)));
/* 87d090: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 87d096: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 87d099: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d09b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d09e: jne 0x87d0c3 */
  if (!zf) goto L_87d0c3;
L_87d0a0: /* 87d0a0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 87d0a6: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 87d0a8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d0aa: fsub dword ptr [esi + 0x648] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x648u)));
/* 87d0b0: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 87d0b2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 87d0b5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 87d0b8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 87d0be: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 87d0c1: jmp 0x87d0ca */
  goto L_87d0ca;
L_87d0c3: /* 87d0c3: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_87d0ca: /* 87d0ca: cmp byte ptr [esi + 0x33d], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x33du))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d0d1: jne 0x87d0ee */
  if (!zf) goto L_87d0ee;
L_87d0d3: /* 87d0d3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 87d0d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87d0d7: fld dword ptr [0x9f40f4] */
  { double v = F32((uint32_t)(0x9f40f4u)); FPUSH(v); }
/* 87d0dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87d0df: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d0e1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 87d0e3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 87d0e5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 87d0e7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 87d0ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87d0ec: jmp 0x87d0f1 */
  goto L_87d0f1;
L_87d0ee: /* 87d0ee: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_87d0f1: /* 87d0f1: xor eax, eax */
  eax = 0;
/* 87d0f3: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 87d0f6: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 87d0f9: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 87d0fc: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 87d0ff: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 87d102: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 87d105: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 87d108: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 87d10b: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 87d10e: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 87d111: lea eax, [ebx + ebx*2 + 0xed] */
  eax = (uint32_t)(ebx + ebx*2 + 0xedu);
/* 87d118: fld dword ptr [esi + eax*4 + 8] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x8u)); FPUSH(v); }
/* 87d11c: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 87d11f: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 87d125: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 87d12b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 87d12e: lea ecx, [ebx + ebx*2 + 0x135] */
  ecx = (uint32_t)(ebx + ebx*2 + 0x135u);
/* 87d135: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 87d13b: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 87d13e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 87d140: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d141: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 87d147: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 87d14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d14e: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 87d154: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 87d15a: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 87d161: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d163: mov dword ptr [ebp - 0x4c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb4u), 0xffffffffu);
/* 87d16a: fsub dword ptr [esi + 0x608] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x608u)));
/* 87d170: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d173: fsub dword ptr [esi + 0x604] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x604u)));
/* 87d179: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 87d17f: fsub dword ptr [esi + 0x600] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x600u)));
/* 87d185: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d188: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d18b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d18e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d190: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d193: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 87d196: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d199: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d19c: fadd dword ptr [esi + 0x608] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x608u)));
/* 87d1a2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d1a5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 87d1a8: fadd dword ptr [esi + 0x604] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x604u)));
/* 87d1ae: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 87d1b1: fadd dword ptr [esi + 0x600] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x600u)));
/* 87d1b7: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 87d1bd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d1c0: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 87d1c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 87d1c9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 87d1cf: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 87d1d5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 87d1db: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 87d1de: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 87d1e1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 87d1e4: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x87d1eau); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d1ea: lea ebx, [esi + 0x630] */
  ebx = (uint32_t)(esi + 0x630u);
/* 87d1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d1f1: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 87d1f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d1f8: mov ecx, eax */
  ecx = eax;
/* 87d1fa: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x87d200u); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d200: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87d203: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d204: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 87d20a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d20b: mov ecx, eax */
  ecx = eax;
/* 87d20d: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x87d213u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 87d213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d214: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 87d21a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d21b: mov ecx, ebx */
  ecx = ebx;
/* 87d21d: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x87d223u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d223: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 87d225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d22b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 87d22d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d22f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 87d232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d236: mov ecx, esp */
  ecx = esp;
/* 87d238: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 87d23a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 87d23d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87d240: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 87d243: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87d246: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 87d249: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d24c: mov ecx, esp */
  ecx = esp;
/* 87d24e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87d250: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 87d253: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 87d256: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 87d259: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87d25c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d25d: mov ecx, edi */
  ecx = edi;
/* 87d25f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x87d265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d265: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d267: je 0x87d053 */
  if (zf) goto L_87d053;
L_87d26d: /* 87d26d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 87d270: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87d273: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 87d279: mov dword ptr [esi + 0x648], ecx */
  W32((uint32_t)(esi + 0x648u), ecx);
/* 87d27f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d281: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87d284: jp 0x87d053 */
  if (pf) goto L_87d053;
L_87d28a: /* 87d28a: and dword ptr [esi + 0x88], 0xfffeffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0xfffeffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 87d294: mov edx, dword ptr [0xb7e41c] */
  edx = R32((uint32_t)(0xb7e41cu));
/* 87d29a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d29c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d29d: mov ecx, esi */
  ecx = esi;
/* 87d29f: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87d2a5u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87d2a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87d2a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d2a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d2ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d2ac: mov ecx, esi */
  ecx = esi;
/* 87d2ae: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x87d2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d2b1: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87d2b4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d2b6: jne 0x87d060 */
  if (!zf) goto L_87d060;
L_87d2bc: /* 87d2bc: xor edi, edi */
  edi = 0;
/* 87d2be: mov edi, edi */
  edi = edi;
L_87d2c0: /* 87d2c0: cmp edi, dword ptr [esi + 0x69c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x69cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87d2c6: jge 0x87d060 */
  if ((sf == of)) goto L_87d060;
L_87d2cc: /* 87d2cc: mov eax, dword ptr [esi + 0x698] */
  eax = R32((uint32_t)(esi + 0x698u));
/* 87d2d2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 87d2d5: cmp byte ptr [ecx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d2d9: je 0x87d2e2 */
  if (zf) goto L_87d2e2;
L_87d2db: /* 87d2db: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 87d2dd: call 0x6c8a49 */
  esp -= 4; W32(esp, 0x87d2e2u); SPILL(); f_6c8a49(); if (g_unwind) return; RELOAD();
L_87d2e2: /* 87d2e2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87d2e3: jmp 0x87d2c0 */
  goto L_87d2c0;
L_87d2e5: /* 87d2e5: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 87d2eb: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 87d2ee: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 87d2f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d2f2: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 87d2f8: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 87d2fe: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 87d301: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d302: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 87d308: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 87d30b: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 87d30e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 87d311: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 87d314: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 87d317: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x87d31du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 87d31d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87d31f: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87d325: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 87d327: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87d32a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87d32d: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 87d330: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87d333: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d334: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 87d337: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d338: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d33f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87d340: mov esp, ebp */
  esp = ebp;
/* 87d342: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87d343: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87d058(void) {
  LOAD_REGS();
  goto L_87d058;
L_87d053: /* 87d053: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87d056: jmp 0x87d060 */
  goto L_87d060;
L_87d058: /* 87d058: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 87d05f: nop  */
L_87d060: /* 87d060: test byte ptr [esi + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d067: je 0x87d2e5 */
  if (zf) goto L_87d2e5;
L_87d06d: /* 87d06d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87d070: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87d076: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d078: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d07b: jne 0x87d2e5 */
  if (!zf) goto L_87d2e5;
L_87d081: /* 87d081: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87d084: fmul dword ptr [esi + 0x64c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x64cu)));
/* 87d08a: fadd dword ptr [esi + 0x648] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x648u)));
/* 87d090: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 87d096: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 87d099: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d09b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87d09e: jne 0x87d0c3 */
  if (!zf) goto L_87d0c3;
L_87d0a0: /* 87d0a0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 87d0a6: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 87d0a8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d0aa: fsub dword ptr [esi + 0x648] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x648u)));
/* 87d0b0: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 87d0b2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 87d0b5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 87d0b8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 87d0be: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 87d0c1: jmp 0x87d0ca */
  goto L_87d0ca;
L_87d0c3: /* 87d0c3: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_87d0ca: /* 87d0ca: cmp byte ptr [esi + 0x33d], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x33du))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d0d1: jne 0x87d0ee */
  if (!zf) goto L_87d0ee;
L_87d0d3: /* 87d0d3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 87d0d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87d0d7: fld dword ptr [0x9f40f4] */
  { double v = F32((uint32_t)(0x9f40f4u)); FPUSH(v); }
/* 87d0dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87d0df: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d0e1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 87d0e3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 87d0e5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 87d0e7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 87d0ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87d0ec: jmp 0x87d0f1 */
  goto L_87d0f1;
L_87d0ee: /* 87d0ee: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_87d0f1: /* 87d0f1: xor eax, eax */
  eax = 0;
/* 87d0f3: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 87d0f6: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 87d0f9: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 87d0fc: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 87d0ff: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 87d102: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 87d105: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 87d108: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 87d10b: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 87d10e: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 87d111: lea eax, [ebx + ebx*2 + 0xed] */
  eax = (uint32_t)(ebx + ebx*2 + 0xedu);
/* 87d118: fld dword ptr [esi + eax*4 + 8] */
  { double v = F32((uint32_t)(esi + eax*4 + 0x8u)); FPUSH(v); }
/* 87d11c: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 87d11f: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 87d125: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 87d12b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 87d12e: lea ecx, [ebx + ebx*2 + 0x135] */
  ecx = (uint32_t)(ebx + ebx*2 + 0x135u);
/* 87d135: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 87d13b: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 87d13e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 87d140: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d141: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 87d147: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 87d14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d14e: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 87d154: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 87d15a: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 87d161: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d163: mov dword ptr [ebp - 0x4c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb4u), 0xffffffffu);
/* 87d16a: fsub dword ptr [esi + 0x608] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x608u)));
/* 87d170: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d173: fsub dword ptr [esi + 0x604] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x604u)));
/* 87d179: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 87d17f: fsub dword ptr [esi + 0x600] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x600u)));
/* 87d185: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d188: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d18b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d18e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87d190: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d193: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 87d196: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 87d199: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d19c: fadd dword ptr [esi + 0x608] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x608u)));
/* 87d1a2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 87d1a5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 87d1a8: fadd dword ptr [esi + 0x604] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x604u)));
/* 87d1ae: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 87d1b1: fadd dword ptr [esi + 0x600] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x600u)));
/* 87d1b7: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 87d1bd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 87d1c0: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 87d1c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 87d1c9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 87d1cf: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 87d1d5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 87d1db: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 87d1de: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 87d1e1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 87d1e4: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x87d1eau); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d1ea: lea ebx, [esi + 0x630] */
  ebx = (uint32_t)(esi + 0x630u);
/* 87d1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d1f1: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 87d1f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d1f8: mov ecx, eax */
  ecx = eax;
/* 87d1fa: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x87d200u); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d200: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87d203: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d204: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 87d20a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d20b: mov ecx, eax */
  ecx = eax;
/* 87d20d: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x87d213u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 87d213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d214: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 87d21a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d21b: mov ecx, ebx */
  ecx = ebx;
/* 87d21d: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x87d223u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 87d223: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 87d225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d22b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 87d22d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d22f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 87d232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d236: mov ecx, esp */
  ecx = esp;
/* 87d238: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 87d23a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 87d23d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87d240: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 87d243: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87d246: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 87d249: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d24c: mov ecx, esp */
  ecx = esp;
/* 87d24e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87d250: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 87d253: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 87d256: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 87d259: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 87d25c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d25d: mov ecx, edi */
  ecx = edi;
/* 87d25f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x87d265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d265: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d267: je 0x87d053 */
  if (zf) goto L_87d053;
L_87d26d: /* 87d26d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 87d270: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87d273: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 87d279: mov dword ptr [esi + 0x648], ecx */
  W32((uint32_t)(esi + 0x648u), ecx);
/* 87d27f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87d281: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87d284: jp 0x87d053 */
  if (pf) goto L_87d053;
L_87d28a: /* 87d28a: and dword ptr [esi + 0x88], 0xfffeffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0xfffeffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 87d294: mov edx, dword ptr [0xb7e41c] */
  edx = R32((uint32_t)(0xb7e41cu));
/* 87d29a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d29c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d29d: mov ecx, esi */
  ecx = esi;
/* 87d29f: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87d2a5u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87d2a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87d2a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d2a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d2ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d2ac: mov ecx, esi */
  ecx = esi;
/* 87d2ae: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x87d2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d2b1: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87d2b4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d2b6: jne 0x87d060 */
  if (!zf) goto L_87d060;
L_87d2bc: /* 87d2bc: xor edi, edi */
  edi = 0;
/* 87d2be: mov edi, edi */
  edi = edi;
L_87d2c0: /* 87d2c0: cmp edi, dword ptr [esi + 0x69c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x69cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87d2c6: jge 0x87d060 */
  if ((sf == of)) goto L_87d060;
L_87d2cc: /* 87d2cc: mov eax, dword ptr [esi + 0x698] */
  eax = R32((uint32_t)(esi + 0x698u));
/* 87d2d2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 87d2d5: cmp byte ptr [ecx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d2d9: je 0x87d2e2 */
  if (zf) goto L_87d2e2;
L_87d2db: /* 87d2db: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 87d2dd: call 0x6c8a49 */
  esp -= 4; W32(esp, 0x87d2e2u); SPILL(); f_6c8a49(); if (g_unwind) return; RELOAD();
L_87d2e2: /* 87d2e2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87d2e3: jmp 0x87d2c0 */
  goto L_87d2c0;
L_87d2e5: /* 87d2e5: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 87d2eb: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 87d2ee: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 87d2f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d2f2: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 87d2f8: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 87d2fe: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 87d301: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d302: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 87d308: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 87d30b: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 87d30e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 87d311: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 87d314: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 87d317: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x87d31du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 87d31d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87d31f: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87d325: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 87d327: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87d32a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87d32d: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 87d330: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87d333: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d334: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 87d337: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d338: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d33f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87d340: mov esp, ebp */
  esp = ebp;
/* 87d342: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87d343: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87d346(void) {
  LOAD_REGS();
L_87d346: /* 87d346: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 87d349: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87d34e: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 87d351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d352: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 87d355: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d35au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87d35a(); return;
}

void f_87d35a(void) {
  LOAD_REGS();
L_87d35a: /* 87d35a: push 0xa1907c */
  { uint32_t v = 0xa1907cu; esp -= 4; W32(esp, v); }
/* 87d35f: push 0xae6760 */
  { uint32_t v = 0xae6760u; esp -= 4; W32(esp, v); }
/* 87d364: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87d36au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87d36a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d36d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d36f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d371: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d376u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87d376: guest_badaddr(0x87d376); return;
}

void f_87d470(void) {
  LOAD_REGS();
L_87d470: /* 87d470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87d471: mov ebp, esp */
  ebp = esp;
/* 87d473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87d475: push 0x9d4eb0 */
  { uint32_t v = 0x9d4eb0u; esp -= 4; W32(esp, v); }
/* 87d47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87d480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87d488: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d48d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d48e: mov esi, ecx */
  esi = ecx;
/* 87d490: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87d493: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 87d496: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87d49d: call dword ptr [0xcfa21c] */
  esp -= 4; W32(esp, 0x87d4a3u); SPILL(); f_4e2dd8(); if (g_unwind) return; /* Core!?InitExecution@UObject@@UAEXXZ */ RELOAD();
/* 87d4a3: mov ecx, esi */
  ecx = esi;
/* 87d4a5: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87d4abu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87d4ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d4ad: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 87d4b3: jne 0x87d4c9 */
  if (!zf) goto L_87d4c9;
L_87d4b5: /* 87d4b5: push 0x8d */
  { uint32_t v = 0x8du; esp -= 4; W32(esp, v); }
/* 87d4ba: push 0xae6768 */
  { uint32_t v = 0xae6768u; esp -= 4; W32(esp, v); }
/* 87d4bf: push 0xae6778 */
  { uint32_t v = 0xae6778u; esp -= 4; W32(esp, v); }
/* 87d4c4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d4c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d4c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d4c9: /* 87d4c9: mov ecx, esi */
  ecx = esi;
/* 87d4cb: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87d4d1u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87d4d1: cmp dword ptr [eax + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87d4d4: je 0x87d4ea */
  if (zf) goto L_87d4ea;
L_87d4d6: /* 87d4d6: push 0x8e */
  { uint32_t v = 0x8eu; esp -= 4; W32(esp, v); }
/* 87d4db: push 0xae6788 */
  { uint32_t v = 0xae6788u; esp -= 4; W32(esp, v); }
/* 87d4e0: push 0xae6798 */
  { uint32_t v = 0xae6798u; esp -= 4; W32(esp, v); }
/* 87d4e5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d4e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d4e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d4ea: /* 87d4ea: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87d4f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d4f2: jne 0x87d508 */
  if (!zf) goto L_87d508;
L_87d4f4: /* 87d4f4: push 0x8f */
  { uint32_t v = 0x8fu; esp -= 4; W32(esp, v); }
/* 87d4f9: push 0xae67b8 */
  { uint32_t v = 0xae67b8u; esp -= 4; W32(esp, v); }
/* 87d4fe: push 0xae67c8 */
  { uint32_t v = 0xae67c8u; esp -= 4; W32(esp, v); }
/* 87d503: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d505u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d505: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d508: /* 87d508: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87d50e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 87d511: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87d514: jne 0x87d52a */
  if (!zf) goto L_87d52a;
L_87d516: /* 87d516: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 87d51b: push 0xae67dc */
  { uint32_t v = 0xae67dcu; esp -= 4; W32(esp, v); }
/* 87d520: push 0xae67ec */
  { uint32_t v = 0xae67ecu; esp -= 4; W32(esp, v); }
/* 87d525: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d527u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d527: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d52a: /* 87d52a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87d530: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 87d533: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87d535: cmp edx, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87d53b: je 0x87d551 */
  if (zf) goto L_87d551;
L_87d53d: /* 87d53d: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* 87d542: push 0xae6808 */
  { uint32_t v = 0xae6808u; esp -= 4; W32(esp, v); }
/* 87d547: push 0xae6818 */
  { uint32_t v = 0xae6818u; esp -= 4; W32(esp, v); }
/* 87d54c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d54eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d54e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d551: /* 87d551: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 87d557: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d559: jne 0x87d56f */
  if (!zf) goto L_87d56f;
L_87d55b: /* 87d55b: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* 87d560: push 0xae6838 */
  { uint32_t v = 0xae6838u; esp -= 4; W32(esp, v); }
/* 87d565: push 0xae6848 */
  { uint32_t v = 0xae6848u; esp -= 4; W32(esp, v); }
/* 87d56a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d56cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d56c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87d56f: /* 87d56f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87d572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d574: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d57b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87d57c: mov esp, ebp */
  esp = ebp;
/* 87d57e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87d57f: ret  */
  esp += 4; SPILL(); return;
}

void f_87d580(void) {
  LOAD_REGS();
L_87d580: /* 87d580: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87d583: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87d588: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87d58b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d58c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87d58f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d594u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87d594(); return;
}

void f_87d594(void) {
  LOAD_REGS();
L_87d594: /* 87d594: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 87d59a: push 0xa190b8 */
  { uint32_t v = 0xa190b8u; esp -= 4; W32(esp, v); }
/* 87d59f: push 0xae6854 */
  { uint32_t v = 0xae6854u; esp -= 4; W32(esp, v); }
/* 87d5a4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x87d5a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d5a6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87d5a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d5ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d5ae: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x87d5b4u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 87d5b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d5b5: push 0xae685c */
  { uint32_t v = 0xae685cu; esp -= 4; W32(esp, v); }
/* 87d5ba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x87d5bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d5bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d5bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d5c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d5c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d5c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87d5c8: guest_badaddr(0x87d5c8); return;
}

void f_87d630(void) {
  LOAD_REGS();
L_87d630: /* 87d630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87d631: mov ebp, esp */
  ebp = esp;
/* 87d633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87d635: push 0x9d4ec0 */
  { uint32_t v = 0x9d4ec0u; esp -= 4; W32(esp, v); }
/* 87d63a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87d640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87d648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d64b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87d64e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87d651: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d652: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87d653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d654: mov esi, ecx */
  esi = ecx;
/* 87d656: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87d659: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d65c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d65d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87d660: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87d667: jne 0x87d67e */
  if (!zf) goto L_87d67e;
L_87d669: /* 87d669: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87d66c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87d66d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d66f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87d672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d673: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87d678: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87d67eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87d67e: /* 87d67e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 87d681: mov ecx, esi */
  ecx = esi;
/* 87d683: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 87d689: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87d68fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87d68f: test dword ptr [eax + 0x498], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87d699: je 0x87d6a1 */
  if (zf) goto L_87d6a1;
L_87d69b: /* 87d69b: mov dword ptr [edi], 1 */
  W32((uint32_t)(edi), 0x1u);
L_87d6a1: /* 87d6a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87d6a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d6a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d6a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d6ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87d6ae: mov esp, ebp */
  esp = ebp;
/* 87d6b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87d6b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87d6b4(void) {
  LOAD_REGS();
L_87d6b4: /* 87d6b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87d6b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87d6bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87d6bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87d6c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 87d6c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d6c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87d6c8(); return;
}

void f_87d6c8(void) {
  LOAD_REGS();
L_87d6c8: /* 87d6c8: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 87d6ce: push 0xa190ec */
  { uint32_t v = 0xa190ecu; esp -= 4; W32(esp, v); }
/* 87d6d3: push 0xae6868 */
  { uint32_t v = 0xae6868u; esp -= 4; W32(esp, v); }
/* 87d6d8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d6dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d6da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87d6dd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 87d6e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87d6e3: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 87d6e6: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 87d6ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d6ef: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 87d6f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d6f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d6f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87d6f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d6f6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87d6f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d6fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d6fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87d6feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d6fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d6ff: push 0xae6870 */
  { uint32_t v = 0xae6870u; esp -= 4; W32(esp, v); }
/* 87d704: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87d706u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d706: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d70d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87d712: guest_badaddr(0x87d712); return;
}

void f_87d760(void) {
  LOAD_REGS();
L_87d760: /* 87d760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87d761: mov ebp, esp */
  ebp = esp;
/* 87d763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87d765: push 0x9d4ee1 */
  { uint32_t v = 0x9d4ee1u; esp -= 4; W32(esp, v); }
/* 87d76a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87d770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87d778: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d77b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d77c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d77d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d77e: mov edi, ecx */
  edi = ecx;
/* 87d780: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87d783: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87d786: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87d78d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x87d793u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 87d793: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87d796: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87d799: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87d79c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87d79f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87d7a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87d7a3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 87d7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d7a7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87d7ac: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 87d7ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d7af: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 87d7b2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87d7b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d7b5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87d7b8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87d7b9: mov eax, edx */
  eax = edx;
/* 87d7bb: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87d7be: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d7c1: jne 0x87d7d9 */
  if (!zf) goto L_87d7d9;
L_87d7c3: /* 87d7c3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87d7c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87d7c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d7c9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87d7cc: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87d7d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d7d3: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87d7d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87d7d9: /* 87d7d9: push 0xce0a00 */
  { uint32_t v = 0xce0a00u; esp -= 4; W32(esp, v); }
/* 87d7de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 87d7e1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87d7e7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87d7e7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 87d7ea: call dword ptr [0xcfa780] */
  esp -= 4; W32(esp, 0x87d7f0u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 87d7f0: mov dword ptr [ebp - 0x34], 0xa0c234 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xa0c234u);
/* 87d7f7: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87d7fd: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 87d800: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87d803: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 87d807: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87d80a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87d810u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87d810: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87d812: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 87d815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87d816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d817: mov ecx, esi */
  ecx = esi;
/* 87d819: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x87d81bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d81b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 87d81e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87d824u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87d824: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87d827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d828: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x87d82eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 87d82e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 87d831: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 87d834: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87d83au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87d83a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87d83d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87d841: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87d847u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87d847: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87d84a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d84b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d84c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87d854: mov esp, ebp */
  esp = ebp;
/* 87d856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87d857: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87d85a(void) {
  LOAD_REGS();
L_87d85a: /* 87d85a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87d85d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87d862: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 87d865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d866: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 87d869: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d86eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87d86e(); return;
}

void f_87d86e(void) {
  LOAD_REGS();
L_87d86e: /* 87d86e: push 0xa1912c */
  { uint32_t v = 0xa1912cu; esp -= 4; W32(esp, v); }
/* 87d873: push 0xae6894 */
  { uint32_t v = 0xae6894u; esp -= 4; W32(esp, v); }
/* 87d878: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87d87eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87d87e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d881: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d885: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87d88au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87d88a: guest_badaddr(0x87d88a); return;
}

void f_87d8e0(void) {
  LOAD_REGS();
L_87d8e0: /* 87d8e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87d8e2: push 0x9d4f09 */
  { uint32_t v = 0x9d4f09u; esp -= 4; W32(esp, v); }
/* 87d8e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87d8ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d8ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87d8f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d8f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d8fa: mov edi, ecx */
  edi = ecx;
/* 87d8fc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87d900: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x87d906u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 87d906: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 87d90a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87d90d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87d910: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87d913: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87d914: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87d917: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87d91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d91c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87d921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d922: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 87d92a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87d92du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d92d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87d930: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87d931: mov eax, edx */
  eax = edx;
/* 87d933: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87d936: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87d939: jne 0x87d951 */
  if (!zf) goto L_87d951;
L_87d93b: /* 87d93b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87d93e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87d93f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d941: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87d944: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87d94a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d94b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87d951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87d951: /* 87d951: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87d955: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87d95bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87d95b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d95c: mov ecx, esi */
  ecx = esi;
/* 87d95e: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x87d964u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 87d964: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 87d96a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87d96c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87d96e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d96f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x87d975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87d975: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87d979: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 87d981: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87d987u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87d987: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87d98b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87d98c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87d98d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87d994: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87d997: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87d9d0(void) {
  LOAD_REGS();
L_87d9d0: /* 87d9d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87d9d2: push 0x9d4f29 */
  { uint32_t v = 0x9d4f29u; esp -= 4; W32(esp, v); }
/* 87d9d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87d9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87d9de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87d9e5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87d9e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87d9e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87d9ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87d9eb: mov edi, ecx */
  edi = ecx;
/* 87d9ed: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87d9f1: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x87d9f7u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 87d9f7: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 87d9fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87d9fe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87da01: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87da04: xor ebx, ebx */
  ebx = 0;
/* 87da06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87da07: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87da0a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87da0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87da0f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87da14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87da15: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 87da19: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87da1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87da1c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87da1f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87da22: mov byte ptr [esp + 0xf], bl */
  W8((uint32_t)(esp + 0xfu), (ebx & 0xffu));
/* 87da26: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87da29: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87da2a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87da2d: lea eax, [esp + 0xf] */
  eax = (uint32_t)(esp + 0xfu);
/* 87da31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87da32: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87da37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87da38: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87da3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87da3b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87da3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87da41: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 87da45: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87da48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87da49: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87da4c: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87da50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87da51: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87da56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87da57: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87da5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87da5a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87da5d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87da5e: mov eax, edx */
  eax = edx;
/* 87da60: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87da63: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87da66: jne 0x87da7d */
  if (!zf) goto L_87da7d;
L_87da68: /* 87da68: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87da6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87da6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87da6d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87da70: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87da76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87da77: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87da7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87da7d: /* 87da7d: cmp dword ptr [edi + 0x4c0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4c0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87da83: je 0x87dace */
  if (zf) goto L_87dace;
L_87da85: /* 87da85: mov eax, dword ptr [0xb7e3e8] */
  eax = R32((uint32_t)(0xb7e3e8u));
/* 87da8a: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 87da8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87da8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87da8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87da8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87da90: mov ecx, edi */
  ecx = edi;
/* 87da92: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87da98u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87da98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87da99: mov ecx, edi */
  ecx = edi;
/* 87da9b: call dword ptr [esi + 0x10] */
  { uint32_t t = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, 0x87da9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87da9e: movzx ecx, byte ptr [esp + 0xf] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0xfu)));
/* 87daa3: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87daa9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 87daad: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 87dab0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 87dab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87dab3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87dab4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87dab8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87dabeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87dabe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dabf: mov eax, dword ptr [edi + 0x4c0] */
  eax = R32((uint32_t)(edi + 0x4c0u));
/* 87dac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dac6: mov ecx, esi */
  ecx = esi;
/* 87dac8: call dword ptr [ebx + 0xa0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xa0u)); esp -= 4; W32(esp, 0x87daceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87dace: /* 87dace: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87dad2: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 87dada: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87dae0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87dae0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 87dae4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87dae5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87dae6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87dae7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87daee: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87daf1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87db50(void) {
  LOAD_REGS();
L_87db50: /* 87db50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87db51: mov ebp, esp */
  ebp = esp;
/* 87db53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87db55: push 0x9d4f49 */
  { uint32_t v = 0x9d4f49u; esp -= 4; W32(esp, v); }
/* 87db5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87db60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87db61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87db68: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87db6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87db6e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87db71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87db72: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87db73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87db74: mov esi, ecx */
  esi = ecx;
/* 87db76: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87db79: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87db7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87db7d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87db80: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87db87: jne 0x87db9e */
  if (!zf) goto L_87db9e;
L_87db89: /* 87db89: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87db8c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87db8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87db8f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87db92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87db93: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87db98: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87db9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87db9e: /* 87db9e: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 87dba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dba6: je 0x87dc0f */
  if (zf) goto L_87dc0f;
L_87dba8: /* 87dba8: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 87dbad: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87dbb3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87dbb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dbb5: je 0x87dc0f */
  if (zf) goto L_87dc0f;
L_87dbb7: /* 87dbb7: mov esi, dword ptr [esi + 0x4c0] */
  esi = R32((uint32_t)(esi + 0x4c0u));
/* 87dbbd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dbbf: je 0x87dbd6 */
  if (zf) goto L_87dbd6;
L_87dbc1: /* 87dbc1: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 87dbc6: mov ecx, esi */
  ecx = esi;
/* 87dbc8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87dbceu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87dbce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dbd0: je 0x87dbd6 */
  if (zf) goto L_87dbd6;
L_87dbd2: /* 87dbd2: mov ecx, esi */
  ecx = esi;
/* 87dbd4: jmp 0x87dbd8 */
  goto L_87dbd8;
L_87dbd6: /* 87dbd6: xor ecx, ecx */
  ecx = 0;
L_87dbd8: /* 87dbd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87dbda: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 87dbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dbde: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x87dbe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87dbe1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87dbe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dbe5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 87dbe9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x87dbefu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 87dbef: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87dbf2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87dbf6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87dbfcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87dbfc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87dbff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87dc06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87dc07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87dc08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87dc09: mov esp, ebp */
  esp = ebp;
/* 87dc0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87dc0c: ret 8 */
  esp += 12; SPILL(); return;
L_87dc0f: /* 87dc0f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87dc12: push 0xce0a04 */
  { uint32_t v = 0xce0a04u; esp -= 4; W32(esp, v); }
/* 87dc17: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x87dc1du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 87dc1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87dc20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87dc21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87dc22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87dc29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87dc2a: mov esp, ebp */
  esp = ebp;
/* 87dc2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87dc2d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87dc30(void) {
  LOAD_REGS();
L_87dc30: /* 87dc30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87dc33: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87dc38: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87dc3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87dc3c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 87dc3f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87dc44u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87dc44(); return;
}

void f_87dc44(void) {
  LOAD_REGS();
L_87dc44: /* 87dc44: push 0xa19170 */
  { uint32_t v = 0xa19170u; esp -= 4; W32(esp, v); }
/* 87dc49: push 0xae689c */
  { uint32_t v = 0xae689cu; esp -= 4; W32(esp, v); }
/* 87dc4e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87dc54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87dc54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87dc57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87dc59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87dc5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87dc60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87dc60: guest_badaddr(0x87dc60); return;
}

void f_87dcc0(void) {
  LOAD_REGS();
L_87dcc0: /* 87dcc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87dcc1: mov ebp, esp */
  ebp = esp;
/* 87dcc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87dcc5: push 0x9d4f69 */
  { uint32_t v = 0x9d4f69u; esp -= 4; W32(esp, v); }
/* 87dcca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87dcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dcd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87dcd8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87dcdb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87dcde: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87dce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87dce2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87dce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87dce4: mov esi, ecx */
  esi = ecx;
/* 87dce6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87dce9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87dcec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87dced: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87dcf0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87dcf7: jne 0x87dd0e */
  if (!zf) goto L_87dd0e;
L_87dcf9: /* 87dcf9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87dcfc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87dcfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87dcff: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87dd02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dd03: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87dd08: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87dd0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87dd0e: /* 87dd0e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87dd14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dd16: je 0x87dd62 */
  if (zf) goto L_87dd62;
L_87dd18: /* 87dd18: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 87dd1b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dd1d: je 0x87dd62 */
  if (zf) goto L_87dd62;
L_87dd1f: /* 87dd1f: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 87dd22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87dd24: je 0x87dd62 */
  if (zf) goto L_87dd62;
L_87dd26: /* 87dd26: mov edx, ecx */
  edx = ecx;
/* 87dd28: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 87dd2b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87dd2d: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 87dd30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87dd31: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x87dd34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87dd34: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87dd37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dd38: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 87dd3c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x87dd42u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 87dd42: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87dd45: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87dd49: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87dd4fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87dd4f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87dd52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87dd59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87dd5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87dd5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87dd5c: mov esp, ebp */
  esp = ebp;
/* 87dd5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87dd5f: ret 8 */
  esp += 12; SPILL(); return;
L_87dd62: /* 87dd62: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87dd65: push 0xce0a08 */
  { uint32_t v = 0xce0a08u; esp -= 4; W32(esp, v); }
/* 87dd6a: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x87dd70u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 87dd70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87dd73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87dd74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87dd75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87dd7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87dd7d: mov esp, ebp */
  esp = ebp;
/* 87dd7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87dd80: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87dd83(void) {
  LOAD_REGS();
L_87dd83: /* 87dd83: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87dd86: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87dd8b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87dd8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87dd8f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87dd92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87dd97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87dd97(); return;
}

void f_87dd97(void) {
  LOAD_REGS();
L_87dd97: /* 87dd97: push 0xa191e0 */
  { uint32_t v = 0xa191e0u; esp -= 4; W32(esp, v); }
/* 87dd9c: push 0xae68a4 */
  { uint32_t v = 0xae68a4u; esp -= 4; W32(esp, v); }
/* 87dda1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87dda7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87dda7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ddaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ddac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ddae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ddb3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87ddb3: guest_badaddr(0x87ddb3); return;
}

void f_87de00(void) {
  LOAD_REGS();
L_87de00: /* 87de00: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87de06: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87de08: push 0x9d4f89 */
  { uint32_t v = 0x9d4f89u; esp -= 4; W32(esp, v); }
/* 87de0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87de0e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87de12: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87de19: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87de1c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87de1f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87de20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87de21: mov esi, ecx */
  esi = ecx;
/* 87de23: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87de26: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87de29: jne 0x87de40 */
  if (!zf) goto L_87de40;
L_87de2b: /* 87de2b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87de2e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87de2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87de31: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87de34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87de35: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87de3a: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87de40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87de40: /* 87de40: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87de46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87de48: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87de4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87de4d: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 87de50: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x87de55u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 87de55: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 87de59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87de5a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 87de62: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x87de68u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 87de68: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 87de6c: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 87de74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87de7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87de7a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 87de7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87de7f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87de86: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87de89: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87dec0(void) {
  LOAD_REGS();
L_87dec0: /* 87dec0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87dec6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87dec8: push 0x9d4fa9 */
  { uint32_t v = 0x9d4fa9u; esp -= 4; W32(esp, v); }
/* 87decd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dece: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87ded2: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87ded9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87dedc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87dedf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87dee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87dee1: mov esi, ecx */
  esi = ecx;
/* 87dee3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87dee6: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87dee9: jne 0x87df00 */
  if (!zf) goto L_87df00;
L_87deeb: /* 87deeb: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87deee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87deef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87def1: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87def4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87def5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87defa: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87df00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87df00: /* 87df00: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 87df06: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 87df09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87df0a: lea ecx, [eax + 0x50] */
  ecx = (uint32_t)(eax + 0x50u);
/* 87df0d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x87df13u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 87df13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87df14: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 87df18: push 0xae68c4 */
  { uint32_t v = 0xae68c4u; esp -= 4; W32(esp, v); }
/* 87df1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87df1e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x87df24u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 87df24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87df27: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 87df2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87df2c: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 87df34: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x87df3au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 87df3a: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 87df3e: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 87df46: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87df4cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87df4c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 87df50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87df51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87df58: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87df5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87df90(void) {
  LOAD_REGS();
L_87df90: /* 87df90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87df91: mov ebp, esp */
  ebp = esp;
/* 87df93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87df95: push 0x9d4fc0 */
  { uint32_t v = 0x9d4fc0u; esp -= 4; W32(esp, v); }
/* 87df9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87dfa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dfa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87dfa8: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87dfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87dfac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87dfad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87dfb0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87dfb3: xor ebx, ebx */
  ebx = 0;
/* 87dfb5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 87dfb8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87dfbb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87dfbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87dfbd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87dfc0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87dfc3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 87dfc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dfc7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87dfcc: mov edi, ecx */
  edi = ecx;
/* 87dfce: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87dfd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87dfd2: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 87dfd5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 87dfd8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87dfdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87dfdb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87dfde: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87dfe1: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 87dfe4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87dfe7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87dfe8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87dfeb: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 87dfee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87dfef: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87dff4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87dff5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87dff8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87dff8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87dffb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87dffe: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 87e001: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e004: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e005: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e008: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 87e00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e00c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e012: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e015: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e018: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e01b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e01e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e01f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e022: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 87e025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e026: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e02b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e02c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e02fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e02f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e032: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e035: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e038: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e039: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e03c: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 87e03f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e040: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e046: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e049u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e049: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e04c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e04f: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 87e052: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e055: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e056: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e059: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 87e05c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e05d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e062: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e063: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e066: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e069: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87e06a: mov eax, edx */
  eax = edx;
/* 87e06c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87e06f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e072: jne 0x87e089 */
  if (!zf) goto L_87e089;
L_87e074: /* 87e074: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e077: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87e079: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e07c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87e082: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e083: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87e089u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e089: /* 87e089: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 87e08c: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 87e08f: fmul dword ptr [0xa0892c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0892cu)));
/* 87e095: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 87e097: mov ecx, edi */
  ecx = edi;
/* 87e099: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 87e09c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 87e09f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 87e0a2: fmul dword ptr [0xa0892c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0892cu)));
/* 87e0a8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 87e0ab: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x87e0b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e0b1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0b3: je 0x87e19d */
  if (zf) goto L_87e19d;
L_87e0b9: /* 87e0b9: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87e0bf: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 87e0c2: cmp dword ptr [ecx + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0c5: je 0x87e19d */
  if (zf) goto L_87e19d;
L_87e0cb: /* 87e0cb: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0ce: je 0x87e19d */
  if (zf) goto L_87e19d;
L_87e0d4: /* 87e0d4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 87e0d7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0d9: je 0x87e0eb */
  if (zf) goto L_87e0eb;
L_87e0db: /* 87e0db: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 87e0e1: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87e0e4: je 0x87e0eb */
  if (zf) goto L_87e0eb;
L_87e0e6: /* 87e0e6: xor esi, esi */
  esi = 0;
/* 87e0e8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_87e0eb: /* 87e0eb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87e0ee: xor edi, edi */
  edi = 0;
/* 87e0f0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0f2: jne 0x87e135 */
  if (!zf) goto L_87e135;
L_87e0f4: /* 87e0f4: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0f6: je 0x87e135 */
  if (zf) goto L_87e135;
L_87e0f8: /* 87e0f8: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 87e0fb: cmp dword ptr [edx + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e0fe: je 0x87e135 */
  if (zf) goto L_87e135;
L_87e100: /* 87e100: mov eax, edx */
  eax = edx;
/* 87e102: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 87e105: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e107: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x87e10du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e10d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87e10f: je 0x87e132 */
  if (zf) goto L_87e132;
L_87e111: /* 87e111: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 87e114: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87e116: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x87e11cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e11c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 87e11f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e120: mov ecx, esi */
  ecx = esi;
/* 87e122: call 0x6cbbc7 */
  esp -= 4; W32(esp, 0x87e127u); SPILL(); f_6cbbc7(); if (g_unwind) return; RELOAD();
/* 87e127: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e129: je 0x87e135 */
  if (zf) goto L_87e135;
L_87e12b: /* 87e12b: mov edi, 0x10 */
  edi = 0x10u;
/* 87e130: jmp 0x87e135 */
  goto L_87e135;
L_87e132: /* 87e132: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_87e135: /* 87e135: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 87e138: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87e13e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87e140: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87e143: jnp 0x87e14d */
  if (!pf) goto L_87e14d;
L_87e145: /* 87e145: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87e148: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 87e14b: jmp 0x87e158 */
  goto L_87e158;
L_87e14d: /* 87e14d: mov edx, dword ptr [0xcfab64] */
  edx = R32((uint32_t)(0xcfab64u));
/* 87e153: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 87e155: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_87e158: /* 87e158: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 87e15b: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 87e161: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 87e164: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 87e167: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 87e16a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87e16b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87e16c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e16d: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 87e170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e171: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87e174: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e175: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 87e178: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87e17a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e17b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e17e: mov edx, esp */
  edx = esp;
/* 87e180: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 87e182: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 87e185: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 87e188: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 87e18b: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 87e18e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87e191: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e192: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 87e195: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e197: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x87e19du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e19d: /* 87e19d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87e1a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87e1a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e1a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87e1a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87e1aa: mov esp, ebp */
  esp = ebp;
/* 87e1ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87e1ad: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e1b0(void) {
  LOAD_REGS();
L_87e1b0: /* 87e1b0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 87e1b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87e1b8: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 87e1bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e1bc: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 87e1bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87e1c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87e1c4(); return;
}

void f_87e1c4(void) {
  LOAD_REGS();
L_87e1c4: /* 87e1c4: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 87e1ca: push 0xa19250 */
  { uint32_t v = 0xa19250u; esp -= 4; W32(esp, v); }
/* 87e1cf: push 0xae68d8 */
  { uint32_t v = 0xae68d8u; esp -= 4; W32(esp, v); }
/* 87e1d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87e1d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e1d6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87e1d9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 87e1dc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e1df: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 87e1e2: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 87e1e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e1eb: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 87e1ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e1ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e1f0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87e1f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e1f2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e1f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e1f8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87e1fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e1fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e1fb: push 0xae68e0 */
  { uint32_t v = 0xae68e0u; esp -= 4; W32(esp, v); }
/* 87e200: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87e202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e202: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e205: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e207: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e209: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87e20eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87e20e: guest_badaddr(0x87e20e); return;
}

void f_87e2b0(void) {
  LOAD_REGS();
L_87e2b0: /* 87e2b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e2b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e2b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87e2b6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e2b9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87e2c1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e2c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e2c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e2c6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e2c9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87e2cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e2ce: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e2d3: mov edi, ecx */
  edi = ecx;
/* 87e2d5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e2d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e2d9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e2dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e2dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e2df: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87e2e7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e2ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e2eb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87e2ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e2f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e2f3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e2f6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e2fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e2fc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e2ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e2ff: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e302: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87e303: mov eax, edx */
  eax = edx;
/* 87e305: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87e308: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e30b: jne 0x87e323 */
  if (!zf) goto L_87e323;
L_87e30d: /* 87e30d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e310: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e313: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e316: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87e31c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e31d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87e323u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e323: /* 87e323: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e329: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e32b: je 0x87e38e */
  if (zf) goto L_87e38e;
L_87e32d: /* 87e32d: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e332: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e338u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e33a: je 0x87e38e */
  if (zf) goto L_87e38e;
L_87e33c: /* 87e33c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87e340: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87e344: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e34a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e34b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87e34d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e34e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e34f: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87e355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e355: mov ecx, eax */
  ecx = eax;
/* 87e357: call 0x6c60aa */
  esp -= 4; W32(esp, 0x87e35cu); SPILL(); f_6c60aa(); if (g_unwind) return; RELOAD();
/* 87e35c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e35e: jne 0x87e38e */
  if (!zf) goto L_87e38e;
L_87e360: /* 87e360: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e366: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e369: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e36fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e36f: mov ecx, eax */
  ecx = eax;
/* 87e371: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x87e377u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 87e377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e378: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 87e37d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87e37f: push 0xae6980 */
  { uint32_t v = 0xae6980u; esp -= 4; W32(esp, v); }
/* 87e384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e385: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x87e38bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 87e38b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87e38e: /* 87e38e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87e38f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e390: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87e391: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e3e0(void) {
  LOAD_REGS();
L_87e3e0: /* 87e3e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87e3e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e3e5: mov esi, ecx */
  esi = ecx;
/* 87e3e7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87e3ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e3eb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e3ee: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e3f1: jne 0x87e408 */
  if (!zf) goto L_87e408;
L_87e3f3: /* 87e3f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e3f4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e3f7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87e3fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e3fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e3fd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e402: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87e408u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e408: /* 87e408: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e40e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e410: je 0x87e43e */
  if (zf) goto L_87e43e;
L_87e412: /* 87e412: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e417: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e41du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e41f: je 0x87e43e */
  if (zf) goto L_87e43e;
L_87e421: /* 87e421: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e427: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e429: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e42a: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e430: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e432: mov ecx, eax */
  ecx = eax;
/* 87e434: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x87e43au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e43a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e43b: ret 8 */
  esp += 12; SPILL(); return;
L_87e43e: /* 87e43e: mov ecx, esi */
  ecx = esi;
/* 87e440: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x87e446u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 87e446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e447: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 87e44c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87e44e: push 0xae6a38 */
  { uint32_t v = 0xae6a38u; esp -= 4; W32(esp, v); }
/* 87e453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e454: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x87e45au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 87e45a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e45d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e45e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e4a0(void) {
  LOAD_REGS();
L_87e4a0: /* 87e4a0: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e4a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e4a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e4a5: mov edi, ecx */
  edi = ecx;
/* 87e4a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e4a9: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87e4ad: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87e4b3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87e4b3: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 87e4b7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e4ba: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e4bd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e4c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e4c1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e4c4: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87e4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e4c9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e4ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e4cf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e4d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e4d2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e4d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87e4d6: mov eax, edx */
  eax = edx;
/* 87e4d8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87e4db: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e4de: jne 0x87e4f6 */
  if (!zf) goto L_87e4f6;
L_87e4e0: /* 87e4e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e4e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e4e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e4e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e4e9: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87e4ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e4f0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87e4f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e4f6: /* 87e4f6: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e4fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e4fe: je 0x87e559 */
  if (zf) goto L_87e559;
L_87e500: /* 87e500: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e505: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e50bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e50b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e50d: je 0x87e559 */
  if (zf) goto L_87e559;
L_87e50f: /* 87e50f: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e515: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87e517: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e518: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87e51eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e51e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87e522: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e523: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87e529: call 0x6cceaa */
  esp -= 4; W32(esp, 0x87e52eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 87e52e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87e530: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87e536: jl 0x87e540 */
  if ((sf != of)) goto L_87e540;
L_87e538: /* 87e538: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e539: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 87e53d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e53e: jmp 0x87e547 */
  goto L_87e547;
L_87e540: /* 87e540: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e542: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87e546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_87e547: /* 87e547: call 0x6c5060 */
  esp -= 4; W32(esp, 0x87e54cu); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 87e54c: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 87e550: mov esi, eax */
  esi = eax;
/* 87e552: mov ecx, 0xc */
  ecx = 0xcu;
/* 87e557: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_87e559: /* 87e559: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87e55a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e55b: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e55e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e5b0(void) {
  LOAD_REGS();
L_87e5b0: /* 87e5b0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e5b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e5b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e5b5: mov edi, ecx */
  edi = ecx;
/* 87e5b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e5b9: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87e5bd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87e5c3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87e5c3: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 87e5c7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e5ca: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e5cd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e5d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e5d1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e5d4: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87e5d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e5d9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e5de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e5df: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e5e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e5e2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e5e5: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87e5ed: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e5f0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e5f1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87e5f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e5f6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e5f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e5fc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e602: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e605: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e608: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87e609: mov eax, edx */
  eax = edx;
/* 87e60b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87e60e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e611: jne 0x87e629 */
  if (!zf) goto L_87e629;
L_87e613: /* 87e613: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e616: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e617: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e619: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e61c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87e622: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e623: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87e629u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e629: /* 87e629: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e62f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e631: je 0x87e6bd */
  if (zf) goto L_87e6bd;
L_87e637: /* 87e637: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e63c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e642u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e642: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e644: je 0x87e6bd */
  if (zf) goto L_87e6bd;
L_87e646: /* 87e646: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e64c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87e64e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e64f: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87e655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e655: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87e659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e65a: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87e660: call 0x6cceaa */
  esp -= 4; W32(esp, 0x87e665u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 87e665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87e667: jl 0x87e681 */
  if ((sf != of)) goto L_87e681;
L_87e669: /* 87e669: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87e66d: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87e673: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e675: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 87e679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e67a: call 0x6c4b1f */
  esp -= 4; W32(esp, 0x87e67fu); SPILL(); f_6c4b1f(); if (g_unwind) return; RELOAD();
/* 87e67f: jmp 0x87e6a9 */
  goto L_87e6a9;
L_87e681: /* 87e681: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 87e687: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e689: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e68a: push 0xae6a90 */
  { uint32_t v = 0xae6a90u; esp -= 4; W32(esp, v); }
/* 87e68f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87e690: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x87e696u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 87e696: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e699: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e69b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e69d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e69f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87e6a3: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x87e6a9u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
L_87e6a9: /* 87e6a9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e6ab: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 87e6af: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87e6b1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87e6b4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87e6b7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87e6ba: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_87e6bd: /* 87e6bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87e6be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e6bf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e6c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e720(void) {
  LOAD_REGS();
L_87e720: /* 87e720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87e724: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e728: mov esi, ecx */
  esi = ecx;
/* 87e72a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87e72d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e72e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e731: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e734: jne 0x87e74b */
  if (!zf) goto L_87e74b;
L_87e736: /* 87e736: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e737: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e73a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87e73d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e73f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e740: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e745: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87e74bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e74b: /* 87e74b: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e753: je 0x87e797 */
  if (zf) goto L_87e797;
L_87e755: /* 87e755: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e75a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e760: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e762: je 0x87e797 */
  if (zf) goto L_87e797;
L_87e764: /* 87e764: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e76a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e76c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e76d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e773: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87e779: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 87e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e77e: call 0x6c6b59 */
  esp -= 4; W32(esp, 0x87e783u); SPILL(); f_6c6b59(); if (g_unwind) return; RELOAD();
/* 87e783: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e785: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87e789: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87e78b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87e78e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87e791: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87e794: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_87e797: /* 87e797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e798: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e79b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e7c0(void) {
  LOAD_REGS();
L_87e7c0: /* 87e7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87e7c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e7c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e7c8: mov esi, ecx */
  esi = ecx;
/* 87e7ca: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87e7cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e7ce: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e7d1: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e7d4: jne 0x87e7eb */
  if (!zf) goto L_87e7eb;
L_87e7d6: /* 87e7d6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e7d7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e7da: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87e7dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e7df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e7e0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e7e5: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87e7ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e7eb: /* 87e7eb: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e7f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e7f3: je 0x87e837 */
  if (zf) goto L_87e837;
L_87e7f5: /* 87e7f5: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e7fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e802: je 0x87e837 */
  if (zf) goto L_87e837;
L_87e804: /* 87e804: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e80d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e813u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e813: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87e819: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 87e81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e81e: call 0x6ca66e */
  esp -= 4; W32(esp, 0x87e823u); SPILL(); f_6ca66e(); if (g_unwind) return; RELOAD();
/* 87e823: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e825: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87e829: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87e82b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87e82e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87e831: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87e834: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_87e837: /* 87e837: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e838: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e83b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e860(void) {
  LOAD_REGS();
L_87e860: /* 87e860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87e864: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e867: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e868: mov esi, ecx */
  esi = ecx;
/* 87e86a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87e86d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e86e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e871: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e874: jne 0x87e88b */
  if (!zf) goto L_87e88b;
L_87e876: /* 87e876: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e877: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e87a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87e87d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e880: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e885: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87e88bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e88b: /* 87e88b: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e891: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e893: je 0x87e8d7 */
  if (zf) goto L_87e8d7;
L_87e895: /* 87e895: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e89a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e8a0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e8a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e8a2: je 0x87e8d7 */
  if (zf) goto L_87e8d7;
L_87e8a4: /* 87e8a4: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e8aa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e8ad: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e8b3: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87e8b9: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 87e8bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e8be: call 0x6c30c1 */
  esp -= 4; W32(esp, 0x87e8c3u); SPILL(); f_6c30c1(); if (g_unwind) return; RELOAD();
/* 87e8c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e8c5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87e8c9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87e8cb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87e8ce: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87e8d1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87e8d4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_87e8d7: /* 87e8d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e8d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e8db: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e900(void) {
  LOAD_REGS();
L_87e900: /* 87e900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87e904: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87e907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e908: mov esi, ecx */
  esi = ecx;
/* 87e90a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87e90d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e90e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e911: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e914: jne 0x87e92b */
  if (!zf) goto L_87e92b;
L_87e916: /* 87e916: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87e917: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87e91a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87e91d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e920: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e925: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87e92bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e92b: /* 87e92b: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e931: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e933: je 0x87e977 */
  if (zf) goto L_87e977;
L_87e935: /* 87e935: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e93a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87e940u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87e940: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e942: je 0x87e977 */
  if (zf) goto L_87e977;
L_87e944: /* 87e944: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87e94a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87e94c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e94d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87e953u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e953: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87e959: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 87e95d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e95e: call 0x6c107d */
  esp -= 4; W32(esp, 0x87e963u); SPILL(); f_6c107d(); if (g_unwind) return; RELOAD();
/* 87e963: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 87e965: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87e969: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87e96b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87e96e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87e971: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87e974: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_87e977: /* 87e977: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87e978: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87e97b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87e9a0(void) {
  LOAD_REGS();
L_87e9a0: /* 87e9a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87e9a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e9a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87e9a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87e9a9: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 87e9b1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87e9b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e9b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87e9b6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e9b9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87e9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87e9be: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87e9c3: mov edi, ecx */
  edi = ecx;
/* 87e9c5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e9c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e9c9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87e9ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87e9cc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87e9cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87e9d0: mov eax, edx */
  eax = edx;
/* 87e9d2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87e9d5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87e9d8: jne 0x87e9f0 */
  if (!zf) goto L_87e9f0;
L_87e9da: /* 87e9da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87e9dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87e9de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87e9e0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87e9e3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87e9e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87e9ea: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87e9f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87e9f0: /* 87e9f0: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87e9f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87e9f8: je 0x87ea28 */
  if (zf) goto L_87ea28;
L_87e9fa: /* 87e9fa: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87e9ff: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87ea05u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87ea05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ea07: je 0x87ea28 */
  if (zf) goto L_87ea28;
L_87ea09: /* 87ea09: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ea0f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87ea11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ea12: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87ea18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ea18: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87ea1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ea1d: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87ea23: call 0x6ca489 */
  esp -= 4; W32(esp, 0x87ea28u); SPILL(); f_6ca489(); if (g_unwind) return; RELOAD();
L_87ea28: /* 87ea28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ea29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ea2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87ea2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ea60(void) {
  LOAD_REGS();
L_87ea60: /* 87ea60: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87ea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ea64: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 87ea68: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ea6b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87ea73: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ea76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ea77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ea78: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ea7b: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 87ea7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ea80: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ea85: mov edi, ecx */
  edi = ecx;
/* 87ea87: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ea8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ea8b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ea8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ea8e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ea91: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87ea99: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ea9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ea9d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87eaa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eaa2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eaa5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eaa8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87eaad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eaae: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87eab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eab1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87eab4: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87eabc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87eabf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eac0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87eac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eac5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eac8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eacb: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ead0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ead1: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ead4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ead4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ead7: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87eadf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87eae2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eae3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87eae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eae8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eaeb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eaee: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87eaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eaf4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87eaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eaf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87eaf9: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87eafd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87eb03u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87eb03: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87eb06: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87eb09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eb0a: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87eb0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eb0f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eb12: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eb15: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87eb1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eb1b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87eb1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eb1e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87eb21: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 87eb29: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87eb2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eb2d: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87eb31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eb32: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eb35: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eb38: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87eb3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eb3e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87eb41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eb41: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87eb44: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87eb45: mov eax, edx */
  eax = edx;
/* 87eb47: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87eb4a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87eb4d: jne 0x87eb65 */
  if (!zf) goto L_87eb65;
L_87eb4f: /* 87eb4f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eb52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eb53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87eb55: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eb58: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87eb5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eb5f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87eb65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87eb65: /* 87eb65: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87eb6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87eb6d: je 0x87ebb6 */
  if (zf) goto L_87ebb6;
L_87eb6f: /* 87eb6f: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87eb74: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87eb7au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87eb7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87eb7c: je 0x87ebb6 */
  if (zf) goto L_87ebb6;
L_87eb7e: /* 87eb7e: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87eb84: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87eb86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87eb87: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87eb8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eb8d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 87eb91: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87eb95: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 87eb99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eb9a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87eb9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87eb9f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 87eba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87eba4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 87eba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eba9: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87ebaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ebb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ebb1: call 0x6cb794 */
  esp -= 4; W32(esp, 0x87ebb6u); SPILL(); f_6cb794(); if (g_unwind) return; RELOAD();
L_87ebb6: /* 87ebb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ebb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ebb8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ebbb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ec20(void) {
  LOAD_REGS();
L_87ec20: /* 87ec20: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87ec23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ec24: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87ec28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ec2b: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87ec33: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ec36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ec37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ec38: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ec3b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 87ec3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ec40: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ec45: mov edi, ecx */
  edi = ecx;
/* 87ec47: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ec4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ec4b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ec4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ec4e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ec51: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87ec59: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ec5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ec5d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87ec61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ec62: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ec65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ec68: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ec6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ec6e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ec71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ec71: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ec74: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87ec7c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ec7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ec80: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87ec84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ec85: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ec88: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ec8b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ec90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ec91: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ec94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ec94: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ec97: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ec98: mov eax, edx */
  eax = edx;
/* 87ec9a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ec9d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87eca0: jne 0x87ecb8 */
  if (!zf) goto L_87ecb8;
L_87eca2: /* 87eca2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eca5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eca6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87eca8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ecab: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ecb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ecb2: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ecb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ecb8: /* 87ecb8: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ecbe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ecc0: je 0x87ecfa */
  if (zf) goto L_87ecfa;
L_87ecc2: /* 87ecc2: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87ecc7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87eccdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87eccd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87eccf: je 0x87ecfa */
  if (zf) goto L_87ecfa;
L_87ecd1: /* 87ecd1: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ecd7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87ecd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ecda: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87ece0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ece0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87ece4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87ece8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 87ecec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87eced: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87ecf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ecf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ecf5: call 0x6c9741 */
  esp -= 4; W32(esp, 0x87ecfau); SPILL(); f_6c9741(); if (g_unwind) return; RELOAD();
L_87ecfa: /* 87ecfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ecfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ecfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ecff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ed50(void) {
  LOAD_REGS();
L_87ed50: /* 87ed50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87ed54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ed55: mov esi, ecx */
  esi = ecx;
/* 87ed57: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87ed5a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87ed5b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87ed5e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ed61: jne 0x87ed78 */
  if (!zf) goto L_87ed78;
L_87ed63: /* 87ed63: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87ed64: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87ed67: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87ed6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ed6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ed6d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ed72: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87ed78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ed78: /* 87ed78: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87ed7e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ed80: je 0x87edb0 */
  if (zf) goto L_87edb0;
L_87ed82: /* 87ed82: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87ed87: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87ed8du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87ed8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ed8f: je 0x87edb0 */
  if (zf) goto L_87edb0;
L_87ed91: /* 87ed91: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87ed97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87ed99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ed9a: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87eda0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eda0: mov eax, dword ptr [eax + 0x128] */
  eax = R32((uint32_t)(eax + 0x128u));
/* 87eda6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 87edaa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87edac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87edad: ret 8 */
  esp += 12; SPILL(); return;
L_87edb0: /* 87edb0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87edb4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 87edba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87edbb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ede0(void) {
  LOAD_REGS();
L_87ede0: /* 87ede0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ede1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ede2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87ede6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ede9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87edf1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87edf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87edf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87edf6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87edf9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87edfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87edfe: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ee03: mov edi, ecx */
  edi = ecx;
/* 87ee05: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ee08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ee09: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ee0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ee0c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ee0f: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 87ee17: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ee1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ee1b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87ee1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ee20: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ee23: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ee26: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ee2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ee2c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ee2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ee2f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ee32: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ee33: mov eax, edx */
  eax = edx;
/* 87ee35: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ee38: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ee3b: jne 0x87ee53 */
  if (!zf) goto L_87ee53;
L_87ee3d: /* 87ee3d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ee40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ee41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ee43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ee46: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ee4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ee4d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ee53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ee53: /* 87ee53: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ee59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ee5b: je 0x87ee8c */
  if (zf) goto L_87ee8c;
L_87ee5d: /* 87ee5d: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87ee62: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87ee68u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87ee68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ee6a: je 0x87ee8c */
  if (zf) goto L_87ee8c;
L_87ee6c: /* 87ee6c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87ee70: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87ee74: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ee7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ee7b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87ee7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ee7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ee7f: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87ee85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ee85: mov ecx, eax */
  ecx = eax;
/* 87ee87: call 0x6c36e8 */
  esp -= 4; W32(esp, 0x87ee8cu); SPILL(); f_6c36e8(); if (g_unwind) return; RELOAD();
L_87ee8c: /* 87ee8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ee8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ee8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87ee8f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87eed0(void) {
  LOAD_REGS();
L_87eed0: /* 87eed0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87eed3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eed4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87eed8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87eedb: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87eee3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87eee6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87eee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87eee8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87eeeb: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 87eeef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87eef0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87eef5: mov edi, ecx */
  edi = ecx;
/* 87eef7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87eefa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87eefb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87eefeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87eefe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ef01: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 87ef09: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ef0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ef0d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87ef11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ef12: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ef15: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ef18: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ef1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ef1e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ef21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ef21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ef23: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 87ef27: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87ef2du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87ef2d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ef30: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ef33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ef34: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87ef38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ef39: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ef3c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ef3f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ef44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ef45: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ef48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ef48: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ef4b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ef4c: mov eax, edx */
  eax = edx;
/* 87ef4e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ef51: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ef54: jne 0x87ef6c */
  if (!zf) goto L_87ef6c;
L_87ef56: /* 87ef56: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ef59: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ef5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ef5c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ef5f: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ef65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ef66: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ef6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ef6c: /* 87ef6c: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ef72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ef74: je 0x87efaa */
  if (zf) goto L_87efaa;
L_87ef76: /* 87ef76: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87ef7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87ef81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87ef81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ef83: je 0x87efaa */
  if (zf) goto L_87efaa;
L_87ef85: /* 87ef85: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87ef89: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87ef8d: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ef93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ef94: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87ef98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ef99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87ef9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ef9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ef9d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87efa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87efa3: mov ecx, eax */
  ecx = eax;
/* 87efa5: call 0x6c98a4 */
  esp -= 4; W32(esp, 0x87efaau); SPILL(); f_6c98a4(); if (g_unwind) return; RELOAD();
L_87efaa: /* 87efaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87efab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87efac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87efaf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87f000(void) {
  LOAD_REGS();
L_87f000: /* 87f000: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f003: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f004: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f005: mov edi, ecx */
  edi = ecx;
/* 87f007: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f009: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87f00d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87f013u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87f013: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 87f017: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f01a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f01d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f020: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f021: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f024: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 87f028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f029: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f02e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f02f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f032u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f032: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f035: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87f03d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87f045: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 87f04d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f050: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f051: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87f055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f056: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f059: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f05c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f062: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f065u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f065: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f068: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 87f070: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f073: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f074: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87f078: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f079: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f07c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f07f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f084: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f085: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f088u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f088: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87f08b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87f08c: mov eax, edx */
  eax = edx;
/* 87f08e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87f091: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87f094: jne 0x87f0ac */
  if (!zf) goto L_87f0ac;
L_87f096: /* 87f096: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f099: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f09a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f09c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f09f: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87f0a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f0a6: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87f0acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f0ac: /* 87f0ac: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f0b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f0b4: je 0x87f0fe */
  if (zf) goto L_87f0fe;
L_87f0b6: /* 87f0b6: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87f0bb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87f0c1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87f0c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f0c3: je 0x87f0fe */
  if (zf) goto L_87f0fe;
L_87f0c5: /* 87f0c5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87f0c9: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f0cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f0d0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87f0d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f0d7: mov edx, esp */
  edx = esp;
/* 87f0d9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 87f0db: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 87f0df: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 87f0e2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 87f0e6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 87f0e9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 87f0ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87f0ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f0f1: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87f0f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f0f7: mov ecx, eax */
  ecx = eax;
/* 87f0f9: call 0x6c291e */
  esp -= 4; W32(esp, 0x87f0feu); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
L_87f0fe: /* 87f0fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f0ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f100: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f103: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87f160(void) {
  LOAD_REGS();
L_87f160: /* 87f160: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f165: mov edi, ecx */
  edi = ecx;
/* 87f167: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f169: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87f16d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87f173u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87f173: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 87f177: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f17a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f17d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f180: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f181: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f184: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87f188: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f189: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f18e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f18f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f192: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f194: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f196: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f198: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87f19c: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x87f1a2u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 87f1a2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f1a5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f1a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f1a9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87f1ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f1ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f1b1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f1b4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f1b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f1ba: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f1bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f1bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f1c0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87f1c8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f1cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f1cc: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87f1d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f1d1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f1d4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f1d7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f1dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f1dd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f1e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f1e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f1e3: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 87f1eb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f1ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f1ef: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87f1f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f1f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f1f7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f1fa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f1ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f200: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f203u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f203: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87f206: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87f207: mov eax, edx */
  eax = edx;
/* 87f209: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87f20c: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87f20f: jne 0x87f227 */
  if (!zf) goto L_87f227;
L_87f211: /* 87f211: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f214: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f217: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f21a: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87f220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f221: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87f227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f227: /* 87f227: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f22d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f22f: je 0x87f27e */
  if (zf) goto L_87f27e;
L_87f231: /* 87f231: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87f236: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87f23cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87f23c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f23e: je 0x87f27e */
  if (zf) goto L_87f27e;
L_87f240: /* 87f240: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87f244: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87f248: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f24e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f24f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f250: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 87f254: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f257: mov eax, esp */
  eax = esp;
/* 87f259: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 87f25b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 87f25f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87f262: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 87f266: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 87f269: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 87f26d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87f26f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f271: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87f277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f277: mov ecx, eax */
  ecx = eax;
/* 87f279: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x87f27eu); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
L_87f27e: /* 87f27e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f27f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f280: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f283: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87f2e0(void) {
  LOAD_REGS();
L_87f2e0: /* 87f2e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f2e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f2e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f2e5: mov edi, ecx */
  edi = ecx;
/* 87f2e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f2e9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87f2ed: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87f2f3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87f2f3: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 87f2f7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f2fa: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f2fd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f300: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f301: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f304: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87f308: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f309: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f30e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f30f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f312u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f312: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87f316: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x87f31cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 87f31c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f31f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f323: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87f327: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f328: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f32b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f32e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f334: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f337u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f337: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f33a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87f342: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 87f34a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 87f352: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f355: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f356: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87f35a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f35b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f35e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f361: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f366: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f367: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f36au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f36a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f36d: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 87f375: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f379: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87f37d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f37e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f381: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f384: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f389: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f38a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f38du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f38d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f390: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87f398: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f39b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f39c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87f3a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f3a1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f3a4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f3a7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f3ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f3ad: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f3b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f3b0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87f3b3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87f3b4: mov eax, edx */
  eax = edx;
/* 87f3b6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87f3b9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87f3bc: jne 0x87f3d4 */
  if (!zf) goto L_87f3d4;
L_87f3be: /* 87f3be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f3c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f3c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f3c4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f3c7: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87f3cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f3ce: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87f3d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f3d4: /* 87f3d4: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f3da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f3dc: je 0x87f444 */
  if (zf) goto L_87f444;
L_87f3de: /* 87f3de: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87f3e3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87f3e9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87f3e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f3eb: je 0x87f444 */
  if (zf) goto L_87f444;
L_87f3ed: /* 87f3ed: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87f3f1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87f3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f3f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f3f7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 87f3fb: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87f401: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f404: mov eax, esp */
  eax = esp;
/* 87f406: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 87f408: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 87f40c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87f40f: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 87f413: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 87f416: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 87f41a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f41d: mov eax, esp */
  eax = esp;
/* 87f41f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 87f421: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 87f425: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87f428: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 87f42c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 87f42f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 87f433: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87f435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f437: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87f43du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f43d: mov ecx, eax */
  ecx = eax;
/* 87f43f: call 0x6c5826 */
  esp -= 4; W32(esp, 0x87f444u); SPILL(); f_6c5826(); if (g_unwind) return; RELOAD();
L_87f444: /* 87f444: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f445: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f446: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f449: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87f4b0(void) {
  LOAD_REGS();
L_87f4b0: /* 87f4b0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f4b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87f4b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87f4b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f4b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f4b7: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 87f4bb: lea eax, [edi + 0x170] */
  eax = (uint32_t)(edi + 0x170u);
/* 87f4c1: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 87f4c3: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 87f4c6: mov esi, ecx */
  esi = ecx;
/* 87f4c8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87f4cb: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 87f4cf: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 87f4d4: mov ecx, edi */
  ecx = edi;
/* 87f4d6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 87f4da: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 87f4de: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87f4e4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87f4e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f4e6: je 0x87f50b */
  if (zf) goto L_87f50b;
L_87f4e8: /* 87f4e8: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 87f4ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f4f0: je 0x87f50b */
  if (zf) goto L_87f50b;
L_87f4f2: /* 87f4f2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87f4f7: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 87f4f9: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 87f4fc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 87f4ff: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 87f503: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 87f507: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_87f50b: /* 87f50b: movzx edx, byte ptr [edi + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x2cau)));
/* 87f512: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 87f518: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87f51a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f51b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f51c: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 87f520: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f523: mov edx, esp */
  edx = esp;
/* 87f525: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 87f527: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 87f52b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 87f52e: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 87f532: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 87f535: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 87f539: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f53c: mov edx, esp */
  edx = esp;
/* 87f53e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 87f540: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 87f543: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 87f546: call dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); esp -= 4; W32(esp, 0x87f54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f54c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f54e: jne 0x87f5d6 */
  if (!zf) goto L_87f5d6;
L_87f554: /* 87f554: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 87f558: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 87f55c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f55f: mov eax, esp */
  eax = esp;
/* 87f561: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 87f563: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 87f567: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87f56a: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 87f570: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 87f573: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 87f579: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 87f57f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f580: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 87f584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f585: call 0x6c9192 */
  esp -= 4; W32(esp, 0x87f58au); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 87f58a: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 87f590: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f593: mov edx, esp */
  edx = esp;
/* 87f595: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 87f597: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 87f59a: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 87f59d: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 87f5a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f5a4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 87f5a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f5a9: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* 87f5af: call 0x6c9192 */
  esp -= 4; W32(esp, 0x87f5b4u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 87f5b4: movzx ecx, byte ptr [esp + 0x24] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x24u)));
/* 87f5b9: movzx edx, byte ptr [esp + 0x30] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x30u)));
/* 87f5be: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* 87f5c4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 87f5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f5c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f5c8: mov ecx, esi */
  ecx = esi;
/* 87f5ca: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0x87f5d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f5d0: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 87f5d4: jmp 0x87f5da */
  goto L_87f5da;
L_87f5d6: /* 87f5d6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
L_87f5da: /* 87f5da: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 87f5de: mov eax, dword ptr [0xcfaa80] */
  eax = R32((uint32_t)(0xcfaa80u));
/* 87f5e3: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 87f5e7: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87f5eb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 87f5ef: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 87f5f3: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 87f5f7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 87f5fb: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 87f5ff: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 87f603: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 87f607: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 87f609: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 87f60d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x87f613u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 87f613: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 87f617: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 87f61b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 87f61d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87f61f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87f622: jne 0x87f633 */
  if (!zf) goto L_87f633;
L_87f624: /* 87f624: mov eax, 1 */
  eax = 0x1u;
/* 87f629: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f62a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87f62c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87f62d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f630: ret 0x14 */
  esp += 24; SPILL(); return;
L_87f633: /* 87f633: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f635: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87f636: xor eax, eax */
  eax = 0;
/* 87f638: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87f639: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f63c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_87f6b0(void) {
  LOAD_REGS();
L_87f6b0: /* 87f6b0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f6b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87f6b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87f6b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f6b6: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 87f6ba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f6bd: xor ebp, ebp */
  ebp = 0;
/* 87f6bf: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 87f6c3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f6c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f6c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f6c8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f6cb: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 87f6cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f6d0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f6d5: mov edi, ecx */
  edi = ecx;
/* 87f6d7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f6da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f6db: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f6deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f6de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f6e1: mov ebx, 1 */
  ebx = 0x1u;
/* 87f6e6: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 87f6ea: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f6ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f6ee: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 87f6f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f6f3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f6f6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f6f9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f6fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f6ff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f702u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f702: mov ecx, dword ptr [edi + 0x2cc] */
  ecx = R32((uint32_t)(edi + 0x2ccu));
/* 87f708: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f70b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 87f70f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f712: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f715: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f716: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f719: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87f71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f71e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f723: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f724: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f727u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f727: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f72a: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 87f72e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f732: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87f736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f737: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f73a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f73d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f743: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f746u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f746: mov ecx, dword ptr [edi + 0x2d0] */
  ecx = R32((uint32_t)(edi + 0x2d0u));
/* 87f74c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f74f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 87f753: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f756: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f759: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f75a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f75d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87f761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f762: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f768: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f76bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f76b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f76e: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 87f776: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f779: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f77a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87f77e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f77f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f782: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f785: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f78a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f78b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f78eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f78e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f791: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 87f795: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f798: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f799: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f79c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f7a1: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87f7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f7a6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f7a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f7aa: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f7adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f7ad: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87f7b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87f7b1: mov eax, edx */
  eax = edx;
/* 87f7b3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87f7b6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87f7b9: jne 0x87f7d0 */
  if (!zf) goto L_87f7d0;
L_87f7bb: /* 87f7bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f7be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f7bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87f7c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f7c3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87f7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f7ca: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87f7d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f7d0: /* 87f7d0: cmp dword ptr [esp + 0x18], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f7d4: je 0x87f8cb */
  if (zf) goto L_87f8cb;
L_87f7da: /* 87f7da: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 87f7e0: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f7e2: je 0x87f7fb */
  if (zf) goto L_87f7fb;
L_87f7e4: /* 87f7e4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f7e6: je 0x87f7ed */
  if (zf) goto L_87f7ed;
L_87f7e8: /* 87f7e8: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f7eb: jne 0x87f7fb */
  if (!zf) goto L_87f7fb;
L_87f7ed: /* 87f7ed: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 87f7f1: fmul dword ptr [eax + 0x4d4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4d4u)));
/* 87f7f7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_87f7fb: /* 87f7fb: mov ecx, edi */
  ecx = edi;
/* 87f7fd: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x87f803u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 87f803: movzx ecx, byte ptr [esp + 0x40] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x40u)));
/* 87f808: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 87f80b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 87f80f: lea ecx, [eax + edx*2] */
  ecx = (uint32_t)(eax + edx*2);
/* 87f812: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 87f816: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87f81a: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 87f81e: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 87f824: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 87f828: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 87f82b: mov esi, dword ptr [eax + 0x30] */
  esi = R32((uint32_t)(eax + 0x30u));
/* 87f82e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f830: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 87f834: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 87f838: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 87f83c: je 0x87f8cb */
  if (zf) goto L_87f8cb;
L_87f842: /* 87f842: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 87f845: xor ebx, ebx */
  ebx = 0;
/* 87f847: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87f849: jle 0x87f8cb */
  if ((zf || sf != of)) goto L_87f8cb;
L_87f84f: /* 87f84f: nop  */
L_87f850: /* 87f850: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 87f853: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 87f856: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 87f859: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f85b: je 0x87f8c3 */
  if (zf) goto L_87f8c3;
L_87f85d: /* 87f85d: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 87f863: cmp eax, dword ptr [edi + 0xb4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87f869: jne 0x87f8c3 */
  if (!zf) goto L_87f8c3;
L_87f86b: /* 87f86b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 87f86f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87f875: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87f877: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87f87a: jnp 0x87f882 */
  if (!pf) goto L_87f882;
L_87f87c: /* 87f87c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 87f880: jmp 0x87f889 */
  goto L_87f889;
L_87f882: /* 87f882: mov eax, dword ptr [0xcfab64] */
  eax = R32((uint32_t)(0xcfab64u));
/* 87f887: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
L_87f889: /* 87f889: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 87f88d: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 87f891: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 87f895: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f896: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 87f89a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87f89c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f89d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87f8a0: mov edx, esp */
  edx = esp;
/* 87f8a2: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 87f8a4: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 87f8a8: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 87f8ab: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 87f8af: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 87f8b2: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 87f8b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f8b7: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 87f8bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87f8bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f8bd: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x87f8c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f8c3: /* 87f8c3: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 87f8c6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 87f8c7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87f8c9: jl 0x87f850 */
  if ((sf != of)) goto L_87f850;
L_87f8cb: /* 87f8cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f8cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f8cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87f8ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87f8cf: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87f8d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87f970(void) {
  LOAD_REGS();
L_87f970: /* 87f970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f972: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87f976: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f979: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87f981: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f984: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87f986: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f989: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87f98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f98e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f993: mov edi, ecx */
  edi = ecx;
/* 87f995: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f999: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f99cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f99c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87f99f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87f9a7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87f9aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f9ab: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87f9af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87f9b0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f9b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f9b6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87f9bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f9bc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87f9bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87f9bf: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87f9c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87f9c3: mov eax, edx */
  eax = edx;
/* 87f9c5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87f9c8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87f9cb: jne 0x87f9e3 */
  if (!zf) goto L_87f9e3;
L_87f9cd: /* 87f9cd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87f9d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87f9d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87f9d3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87f9d6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87f9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87f9dd: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87f9e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87f9e3: /* 87f9e3: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87f9e9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 87f9ec: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 87f9ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87f9f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87f9f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87f9f3: je 0x87fa07 */
  if (zf) goto L_87fa07;
L_87f9f5: /* 87f9f5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87f9f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87f9fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87f9fc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87fa00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fa01: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x87fa07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87fa07: /* 87fa07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87fa08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87fa40(void) {
  LOAD_REGS();
L_87fa40: /* 87fa40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fa41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fa42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87fa46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fa49: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87fa51: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fa54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fa55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87fa56: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fa59: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87fa5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fa5e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fa63: mov edi, ecx */
  edi = ecx;
/* 87fa65: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fa68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fa69: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fa6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fa6c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87fa6f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87fa70: mov eax, edx */
  eax = edx;
/* 87fa72: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87fa75: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87fa78: jne 0x87fa90 */
  if (!zf) goto L_87fa90;
L_87fa7a: /* 87fa7a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fa7d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fa7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87fa80: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fa83: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87fa89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fa8a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87fa90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87fa90: /* 87fa90: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87fa96: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 87fa99: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 87fa9c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87fa9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87fa9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87faa0: je 0x87faaf */
  if (zf) goto L_87faaf;
L_87faa2: /* 87faa2: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 87faa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87faa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87faa9: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87faafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87faaf: /* 87faaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87fab0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87fae0(void) {
  LOAD_REGS();
L_87fae0: /* 87fae0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87fae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87fae4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87fae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fae6: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 87faea: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87faed: xor ebp, ebp */
  ebp = 0;
/* 87faef: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 87faf3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87faf6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87faf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87faf8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fafb: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 87faff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fb00: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fb05: mov edi, ecx */
  edi = ecx;
/* 87fb07: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fb0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fb0b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fb0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fb0e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fb11: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 87fb16: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fb19: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fb1a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87fb1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fb1f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fb22: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fb25: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fb2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fb2b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fb2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fb2e: mov ecx, dword ptr [edi + 0x2cc] */
  ecx = R32((uint32_t)(edi + 0x2ccu));
/* 87fb34: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fb37: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 87fb3b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fb3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fb41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fb42: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fb45: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87fb49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fb4a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fb4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fb50: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fb53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fb53: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fb56: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 87fb5a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fb5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fb5e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87fb62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fb63: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fb66: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fb69: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fb6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fb6f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fb72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fb72: mov ecx, dword ptr [edi + 0x2d0] */
  ecx = R32((uint32_t)(edi + 0x2d0u));
/* 87fb78: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fb7b: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 87fb7f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fb82: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fb85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fb86: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fb89: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 87fb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fb8e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fb93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fb94: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fb97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fb97: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fb9a: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 87fba2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fba5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fba6: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87fbaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fbab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fbae: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fbb1: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fbb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fbb7: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fbbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fbba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fbbd: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 87fbc5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87fbc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fbc9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fbcc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87fbd0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87fbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fbd6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fbd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fbda: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87fbddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87fbdd: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87fbe0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87fbe1: mov eax, edx */
  eax = edx;
/* 87fbe3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87fbe6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87fbe9: jne 0x87fc00 */
  if (!zf) goto L_87fc00;
L_87fbeb: /* 87fbeb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fbee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87fbef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87fbf0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87fbf3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87fbf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87fbfa: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87fc00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87fc00: /* 87fc00: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87fc04: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc06: je 0x87fdec */
  if (zf) goto L_87fdec;
L_87fc0c: /* 87fc0c: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 87fc12: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc14: je 0x87fc2d */
  if (zf) goto L_87fc2d;
L_87fc16: /* 87fc16: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc18: je 0x87fc1f */
  if (zf) goto L_87fc1f;
L_87fc1a: /* 87fc1a: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc1d: jne 0x87fc2d */
  if (!zf) goto L_87fc2d;
L_87fc1f: /* 87fc1f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 87fc23: fmul dword ptr [eax + 0x4d4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4d4u)));
/* 87fc29: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_87fc2d: /* 87fc2d: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 87fc33: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc35: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 87fc37: je 0x87fc7c */
  if (zf) goto L_87fc7c;
L_87fc39: /* 87fc39: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 87fc3f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc41: je 0x87fc7c */
  if (zf) goto L_87fc7c;
L_87fc43: /* 87fc43: cmp dword ptr [eax + 0x38], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc46: jne 0x87fc7c */
  if (!zf) goto L_87fc7c;
L_87fc48: /* 87fc48: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 87fc4e: cmp byte ptr [eax + 0x4c8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc54: je 0x87fc7c */
  if (zf) goto L_87fc7c;
L_87fc56: /* 87fc56: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 87fc5a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 87fc5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87fc5f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 87fc63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fc64: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 87fc68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87fc69: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 87fc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fc6e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 87fc72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87fc73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fc74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fc75: mov ecx, edi */
  ecx = edi;
/* 87fc77: call 0x6ca231 */
  esp -= 4; W32(esp, 0x87fc7cu); SPILL(); f_6ca231(); if (g_unwind) return; RELOAD();
L_87fc7c: /* 87fc7c: mov ecx, edi */
  ecx = edi;
/* 87fc7e: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x87fc84u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 87fc84: movzx ecx, byte ptr [esp + 0x1c] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x1cu)));
/* 87fc89: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 87fc8c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fc8e: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 87fc91: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 87fc95: lea ecx, [eax + edx*2] */
  ecx = (uint32_t)(eax + edx*2);
/* 87fc98: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 87fc9c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 87fca0: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 87fca4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 87fca8: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 87fcac: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 87fcb0: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 87fcb4: je 0x87fcca */
  if (zf) goto L_87fcca;
L_87fcb6: /* 87fcb6: mov ecx, esi */
  ecx = esi;
/* 87fcb8: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87fcbeu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87fcbe: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87fcc8: jne 0x87fccc */
  if (!zf) goto L_87fccc;
L_87fcca: /* 87fcca: xor esi, esi */
  esi = 0;
L_87fccc: /* 87fccc: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 87fcd2: cmp byte ptr [eax + 0x4c8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87fcd8: je 0x87fd7a */
  if (zf) goto L_87fd7a;
L_87fcde: /* 87fcde: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fce0: je 0x87fcf1 */
  if (zf) goto L_87fcf1;
L_87fce2: /* 87fce2: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 87fce8: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87fceb: jne 0x87fd7a */
  if (!zf) goto L_87fd7a;
L_87fcf1: /* 87fcf1: mov esi, dword ptr [eax + 0x514] */
  esi = R32((uint32_t)(eax + 0x514u));
/* 87fcf7: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fcf9: je 0x87fdec */
  if (zf) goto L_87fdec;
L_87fcff: /* 87fcff: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 87fd03: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_87fd07: /* 87fd07: test byte ptr [esi + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87fd0e: je 0x87fd66 */
  if (zf) goto L_87fd66;
L_87fd10: /* 87fd10: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 87fd14: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87fd1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87fd1c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87fd1f: jnp 0x87fd2b */
  if (!pf) goto L_87fd2b;
L_87fd21: /* 87fd21: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 87fd25: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 87fd29: jmp 0x87fd36 */
  goto L_87fd36;
L_87fd2b: /* 87fd2b: mov eax, dword ptr [0xcfab64] */
  eax = R32((uint32_t)(0xcfab64u));
/* 87fd30: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87fd32: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_87fd36: /* 87fd36: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87fd3a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 87fd3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87fd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fd41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fd42: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 87fd46: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87fd49: mov eax, esp */
  eax = esp;
/* 87fd4b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 87fd4d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 87fd51: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 87fd54: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 87fd57: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 87fd5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fd5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87fd5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87fd5e: mov ecx, esi */
  ecx = esi;
/* 87fd60: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x87fd66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87fd66: /* 87fd66: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 87fd6c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87fd6e: jne 0x87fd07 */
  if (!zf) goto L_87fd07;
L_87fd70: /* 87fd70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87fd71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87fd72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87fd73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87fd74: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87fd77: ret 8 */
  esp += 12; SPILL(); return;
L_87fd7a: /* 87fd7a: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 87fd80: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 87fd83: mov esi, dword ptr [eax + 0x30] */
  esi = R32((uint32_t)(eax + 0x30u));
/* 87fd86: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fd88: je 0x87fdec */
  if (zf) goto L_87fdec;
L_87fd8a: /* 87fd8a: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 87fd8d: xor ebx, ebx */
  ebx = 0;
/* 87fd8f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87fd91: jle 0x87fdec */
  if ((zf || sf != of)) goto L_87fdec;
L_87fd93: /* 87fd93: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 87fd96: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 87fd99: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 87fd9c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87fd9e: je 0x87fde4 */
  if (zf) goto L_87fde4;
L_87fda0: /* 87fda0: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 87fda6: cmp eax, dword ptr [edi + 0xb4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87fdac: jne 0x87fde4 */
  if (!zf) goto L_87fde4;
L_87fdae: /* 87fdae: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87fdb2: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 87fdb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fdb7: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 87fdbb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87fdbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fdbe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87fdc1: mov eax, esp */
  eax = esp;
/* 87fdc3: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 87fdc5: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 87fdc9: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 87fdcc: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 87fdd0: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 87fdd3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 87fdd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fdd8: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 87fddc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87fdde: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x87fde4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87fde4: /* 87fde4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 87fde7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 87fde8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87fdea: jl 0x87fd93 */
  if ((sf != of)) goto L_87fd93;
L_87fdec: /* 87fdec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87fded: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87fdee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87fdef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87fdf0: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87fdf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87fed0(void) {
  LOAD_REGS();
L_87fed0: /* 87fed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87fed1: mov ebp, esp */
  ebp = esp;
/* 87fed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87fed5: push 0x9d4fd0 */
  { uint32_t v = 0x9d4fd0u; esp -= 4; W32(esp, v); }
/* 87feda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87fee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87fee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87fee8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87feeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87feec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87feed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87fef0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87fef3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87fef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87fef7: xor edi, edi */
  edi = 0;
/* 87fef9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 87fefc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87feff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ff00: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ff03: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87ff06: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 87ff09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ff0a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ff0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ff10: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 87ff13: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ff16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ff16: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ff19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ff1a: mov eax, edx */
  eax = edx;
/* 87ff1c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ff1f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ff22: jne 0x87ff39 */
  if (!zf) goto L_87ff39;
L_87ff24: /* 87ff24: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ff27: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ff28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ff29: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ff2c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ff32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ff33: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ff39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ff39: /* 87ff39: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 87ff3c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87ff3e: je 0x87ff60 */
  if (zf) goto L_87ff60;
L_87ff40: /* 87ff40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87ff42: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x87ff45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ff45: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 87ff48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87ff4b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 87ff4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87ff50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87ff57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ff58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ff59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87ff5a: mov esp, ebp */
  esp = ebp;
/* 87ff5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87ff5d: ret 8 */
  esp += 12; SPILL(); return;
L_87ff60: /* 87ff60: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 87ff63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87ff66: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 87ff68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ff69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ff6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87ff71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87ff72: mov esp, ebp */
  esp = ebp;
/* 87ff74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87ff75: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ff78(void) {
  LOAD_REGS();
L_87ff78: /* 87ff78: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87ff7b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87ff80: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87ff83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ff84: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 87ff87: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ff8cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87ff8c(); return;
}

void f_87ff8c(void) {
  LOAD_REGS();
L_87ff8c: /* 87ff8c: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 87ff92: push 0xa192b0 */
  { uint32_t v = 0xa192b0u; esp -= 4; W32(esp, v); }
/* 87ff97: push 0xae6b0c */
  { uint32_t v = 0xae6b0cu; esp -= 4; W32(esp, v); }
/* 87ff9c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87ff9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ff9e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 87ffa1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 87ffa4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ffa7: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 87ffaa: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 87ffb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ffb3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 87ffb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ffb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ffb8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87ffbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ffba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ffbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ffbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ffc0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x87ffc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ffc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ffc3: push 0xae6b14 */
  { uint32_t v = 0xae6b14u; esp -= 4; W32(esp, v); }
/* 87ffc8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87ffcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ffca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ffcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ffcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ffd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87ffd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87ffd6: guest_badaddr(0x87ffd6); return;
}

void f_880030(void) {
  LOAD_REGS();
L_880030: /* 880030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 880031: mov ebp, esp */
  ebp = esp;
/* 880033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 880035: push 0x9d4fe0 */
  { uint32_t v = 0x9d4fe0u; esp -= 4; W32(esp, v); }
/* 88003a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 880040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 880048: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88004b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88004e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 880051: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880052: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 880053: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880054: mov esi, ecx */
  esi = ecx;
/* 880056: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 880059: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88005c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88005d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 880060: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 880067: jne 0x88007e */
  if (!zf) goto L_88007e;
L_880069: /* 880069: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88006c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88006d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88006f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 880072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880073: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 880078: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x88007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88007e: /* 88007e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 880084: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 880087: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 88008a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88008c: je 0x88009b */
  if (zf) goto L_88009b;
L_88008e: /* 88008e: mov edx, ecx */
  edx = ecx;
/* 880090: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 880093: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 880095: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x88009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88009b: /* 88009b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88009e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88009f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8800a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8800a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8800a8: mov esp, ebp */
  esp = ebp;
/* 8800aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8800ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8800ae(void) {
  LOAD_REGS();
L_8800ae: /* 8800ae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8800b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8800b6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8800b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8800ba: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8800bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8800c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8800c2(); return;
}

void f_8800c2(void) {
  LOAD_REGS();
L_8800c2: /* 8800c2: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 8800c8: push 0xa192f8 */
  { uint32_t v = 0xa192f8u; esp -= 4; W32(esp, v); }
/* 8800cd: push 0xae6b38 */
  { uint32_t v = 0xae6b38u; esp -= 4; W32(esp, v); }
/* 8800d2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8800d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8800d4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8800d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8800da: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8800dd: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 8800e0: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 8800e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8800e9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8800eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8800ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8800ee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8800f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8800f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8800f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8800f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8800f6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8800f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8800f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8800f9: push 0xae6b40 */
  { uint32_t v = 0xae6b40u; esp -= 4; W32(esp, v); }
/* 8800fe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x880100u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880100: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 880103: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880105: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880107: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88010cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88010c: guest_badaddr(0x88010c); return;
}

void f_880150(void) {
  LOAD_REGS();
L_880150: /* 880150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 880151: mov ebp, esp */
  ebp = esp;
/* 880153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 880155: push 0x9d4ff0 */
  { uint32_t v = 0x9d4ff0u; esp -= 4; W32(esp, v); }
/* 88015a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 880160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 880168: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88016b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88016c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88016d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 880170: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 880173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880174: xor edi, edi */
  edi = 0;
/* 880176: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 880179: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88017c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88017d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880180: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 880183: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 880186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880187: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88018c: mov ebx, ecx */
  ebx = ecx;
/* 88018e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880192: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 880195: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x880198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880198: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88019b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88019e: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8801a1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8801a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8801a5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8801a8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8801ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8801ac: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8801b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8801b2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8801b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8801b5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8801b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8801bb: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8801be: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8801c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8801c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8801c5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8801c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8801c9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8801ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8801cf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8801d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8801d2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8801d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8801d6: mov eax, edx */
  eax = edx;
/* 8801d8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8801db: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8801de: jne 0x8801f5 */
  if (!zf) goto L_8801f5;
L_8801e0: /* 8801e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8801e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8801e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8801e5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8801e8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8801ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8801ef: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8801f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8801f5: /* 8801f5: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8801fb: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8801fe: cmp dword ptr [ecx + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 880201: je 0x88021c */
  if (zf) goto L_88021c;
L_880203: /* 880203: mov edx, ecx */
  edx = ecx;
/* 880205: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 880208: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88020b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88020d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88020e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 880211: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880212: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 880215: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880216: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88021cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88021c: /* 88021c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88021f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 880220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 880221: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 880228: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 880229: mov esp, ebp */
  esp = ebp;
/* 88022b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88022c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88022f(void) {
  LOAD_REGS();
L_88022f: /* 88022f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 880232: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 880237: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 88023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88023b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 88023e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x880243u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_880243(); return;
}

void f_880243(void) {
  LOAD_REGS();
L_880243: /* 880243: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 880249: push 0xa19338 */
  { uint32_t v = 0xa19338u; esp -= 4; W32(esp, v); }
/* 88024e: push 0xae6b64 */
  { uint32_t v = 0xae6b64u; esp -= 4; W32(esp, v); }
/* 880253: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x880255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880255: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 880258: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 88025b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88025e: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 880261: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 880267: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88026a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 88026c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88026d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88026f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x880271u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880271: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880275: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880277: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x880279u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88027a: push 0xae6b6c */
  { uint32_t v = 0xae6b6cu; esp -= 4; W32(esp, v); }
/* 88027f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x880281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880281: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 880284: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880288: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88028du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88028d: guest_badaddr(0x88028d); return;
}

void f_8802e0(void) {
  LOAD_REGS();
L_8802e0: /* 8802e0: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8802e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8802e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8802e5: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 8802e9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8802ec: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8802ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8802f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8802f1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8802f4: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 8802f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8802f9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8802fe: mov edi, ecx */
  edi = ecx;
/* 880300: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880304: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x880307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880307: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 88030a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88030b: mov eax, edx */
  eax = edx;
/* 88030d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 880310: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 880312: xor ebx, ebx */
  ebx = 0;
/* 880314: cmp cl, 0x42 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 880317: jne 0x88032e */
  if (!zf) goto L_88032e;
L_880319: /* 880319: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88031c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88031d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88031e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880321: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 880327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880328: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x88032eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88032e: /* 88032e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88032f: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 880335: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880337: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880338: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 88033c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88033d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880340: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 880344: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 880348: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 88034c: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 880350: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 880356: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 880358: mov esi, esp */
  esi = esp;
/* 88035a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 88035c: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 88035f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 880362: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 880365: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 880368: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 88036c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88036f: mov edx, esp */
  edx = esp;
/* 880371: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 880373: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 880377: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 88037a: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 88037e: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 880386: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 88038e: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 880396: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 88039e: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 8803a6: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 8803ae: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* 8803b6: mov dword ptr [esp + 0x6c], 0xffffffff */
  W32((uint32_t)(esp + 0x6cu), 0xffffffffu);
/* 8803be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8803c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8803c1: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8803c4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8803cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8803ca: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8803ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8803cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8803d0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8803d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8803d3: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8803d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_880420(void) {
  LOAD_REGS();
L_880420: /* 880420: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880423: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880424: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 880428: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88042b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88042e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88042f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880430: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880433: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 880437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880438: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88043d: mov edi, ecx */
  edi = ecx;
/* 88043f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880443: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x880446u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880446: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 880449: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88044a: mov eax, edx */
  eax = edx;
/* 88044c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88044f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 880452: jne 0x88046a */
  if (!zf) goto L_88046a;
L_880454: /* 880454: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880457: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 880458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88045a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88045d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 880463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880464: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x88046au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88046a: /* 88046a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88046e: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 880474: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 880476: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88047a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88047c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88047f: mov edx, esp */
  edx = esp;
/* 880481: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 880483: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 880487: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 88048a: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 88048e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88048f: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 880492: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x880498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880498: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 88049c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88049d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 88049f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8804a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8804a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8804e0(void) {
  LOAD_REGS();
L_8804e0: /* 8804e0: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8804e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8804e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8804e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8804e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8804e7: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 8804ee: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8804f1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8804f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8804f5: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 8804f8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 8804fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8804fd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 880502: mov esi, ecx */
  esi = ecx;
/* 880504: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 880507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880508: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88050bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88050b: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 88050e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88050f: mov eax, edx */
  eax = edx;
/* 880511: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 880514: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 880517: jne 0x88052f */
  if (!zf) goto L_88052f;
L_880519: /* 880519: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 88051c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88051d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88051f: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 880522: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 880528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880529: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x88052fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88052f: /* 88052f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 880531: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 880538: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88053eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88053e: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 880545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880546: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 88054c: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x880552u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 880552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 880554: je 0x880587 */
  if (zf) goto L_880587;
L_880556: /* 880556: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88055a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 88055e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 880562: add esi, 0x208 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 880568: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 88056a: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 880571: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 880574: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 880577: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 88057d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88057e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88057f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 880580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 880581: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 880584: ret 8 */
  esp += 12; SPILL(); return;
L_880587: /* 880587: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 88058a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88058c: je 0x8806f5 */
  if (zf) goto L_8806f5;
L_880592: /* 880592: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 880598: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88059d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88059e: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 8805a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8805a3: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8805a6: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8805acu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8805ac: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8805b0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8805b4: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8805b7: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8805bb: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8805c0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8805c4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8805ca: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8805ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8805d0: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8805d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8805d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8805d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8805db: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8805df: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8805e3: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8805e7: mov ebp, esp */
  ebp = esp;
/* 8805e9: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8805f0: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8805f4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8805fb: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8805ff: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 880603: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 880607: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 88060b: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 88060f: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 880613: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 880617: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 88061b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 88061f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 880621: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 880623: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 880627: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 88062a: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 88062e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 880631: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 880635: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 880639: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 88063b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 88063f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 880641: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 880643: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 880645: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 880649: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 88064d: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 880651: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 880655: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 880657: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 88065b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 88065f: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 880663: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 880665: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 880669: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 88066d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88066f: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 880673: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 880675: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 880679: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 88067d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 880681: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 880685: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 880689: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 88068b: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 88068e: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 880691: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880692: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 880695: call dword ptr [ebx + 0xa0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xa0u)); esp -= 4; W32(esp, 0x88069bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88069b: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 8806a2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8806a4: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8806a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8806a9: je 0x8806f5 */
  if (zf) goto L_8806f5;
L_8806ab: /* 8806ab: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8806b1: add esi, 0x208 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8806b7: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 8806bd: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8806c1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8806c5: fld dword ptr [esi - 0x94] */
  { double v = F32((uint32_t)(esi + 0xffffff6cu)); FPUSH(v); }
/* 8806cb: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 8806d1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8806d5: fld dword ptr [esi - 0x90] */
  { double v = F32((uint32_t)(esi + 0xffffff70u)); FPUSH(v); }
/* 8806db: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8806e1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8806e5: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8806e7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8806ea: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8806ee: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8806f2: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_8806f5: /* 8806f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8806f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8806f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8806f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8806f9: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8806fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_880790(void) {
  LOAD_REGS();
L_880790: /* 880790: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880796: mov edi, ecx */
  edi = ecx;
/* 880798: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88079c: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8807a2u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8807a2: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 8807a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8807a9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8807ac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8807af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8807b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8807b3: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8807b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8807b8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8807bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8807be: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8807c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8807c1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8807c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8807c5: mov eax, edx */
  eax = edx;
/* 8807c7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8807ca: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 8807cc: xor ebx, ebx */
  ebx = 0;
/* 8807ce: cmp cl, 0x42 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8807d1: jne 0x8807e8 */
  if (!zf) goto L_8807e8;
L_8807d3: /* 8807d3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8807d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8807d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8807d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8807db: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8807e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8807e2: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8807e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8807e8: /* 8807e8: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 8807ec: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8807f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8807f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8807f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8807f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8807f6: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8807fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8807fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8807fe: mov edx, esp */
  edx = esp;
/* 880800: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 880802: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 880806: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 880809: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 88080d: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 880810: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880813: mov edx, esp */
  edx = esp;
/* 880815: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 88081d: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 880821: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 880823: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 88082b: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 88082f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 880832: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 880836: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 88083a: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 880842: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 88084a: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 880852: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 88085a: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 880862: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 88086a: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 88086e: mov dword ptr [esp + 0x74], 0x3f800000 */
  W32((uint32_t)(esp + 0x74u), 0x3f800000u);
/* 880876: mov dword ptr [esp + 0x78], 0xffffffff */
  W32((uint32_t)(esp + 0x78u), 0xffffffffu);
/* 88087e: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
/* 880882: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 880884: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 88088c: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 880890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880891: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 880894: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x88089au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88089a: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 88089e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88089f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8808a0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8808a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8808a3: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8808a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_880900(void) {
  LOAD_REGS();
L_880900: /* 880900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 880902: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 880908: push 0x9d5059 */
  { uint32_t v = 0x9d5059u; esp -= 4; W32(esp, v); }
/* 88090d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88090e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 880915: sub esp, 0x24c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88091b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88091c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88091d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88091e: mov ebp, ecx */
  ebp = ecx;
/* 880920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880921: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 880925: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x88092bu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 88092b: mov esi, dword ptr [esp + 0x26c] */
  esi = R32((uint32_t)(esp + 0x26cu));
/* 880932: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 880935: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 880938: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88093b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88093c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88093f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 880943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880944: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 880949: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88094a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88094du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88094d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 880950: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 880951: mov eax, edx */
  eax = edx;
/* 880953: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 880956: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 880958: xor ebx, ebx */
  ebx = 0;
/* 88095a: cmp cl, 0x42 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 88095d: jne 0x880974 */
  if (!zf) goto L_880974;
L_88095f: /* 88095f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880962: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 880963: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880964: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880967: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88096d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88096e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x880974u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_880974: /* 880974: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880975: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 880979: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88097fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88097f: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 880983: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880984: lea ecx, [ebp + 0xac] */
  ecx = (uint32_t)(ebp + 0xacu);
/* 88098a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x880990u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 880990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 880992: je 0x8809c1 */
  if (zf) goto L_8809c1;
L_880994: /* 880994: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 880998: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 88099c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8809a0: add ebp, 0x214 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8809a6: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 8809a9: mov ecx, dword ptr [esp + 0x270] */
  ecx = R32((uint32_t)(esp + 0x270u));
/* 8809b0: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 8809b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8809b6: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 8809bc: jmp 0x880de0 */
  goto L_880de0;
L_8809c1: /* 8809c1: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 8809c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8809c6: je 0x880d1f */
  if (zf) goto L_880d1f;
L_8809cc: /* 8809cc: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 8809d2: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8809d5: je 0x880c91 */
  if (zf) goto L_880c91;
L_8809db: /* 8809db: test byte ptr [ebp + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8809e2: jne 0x880c91 */
  if (!zf) goto L_880c91;
L_8809e8: /* 8809e8: mov edx, dword ptr [ebp + 0x250] */
  edx = R32((uint32_t)(ebp + 0x250u));
/* 8809ee: mov eax, dword ptr [ebp + 0x254] */
  eax = R32((uint32_t)(ebp + 0x254u));
/* 8809f4: mov ecx, dword ptr [ebp + 0x258] */
  ecx = R32((uint32_t)(ebp + 0x258u));
/* 8809fa: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8809fe: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 880a02: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 880a06: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880a09: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 880a0d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 880a11: mov edx, esp */
  edx = esp;
/* 880a13: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 880a15: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 880a19: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 880a1c: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 880a23: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 880a26: call 0x6cb389 */
  esp -= 4; W32(esp, 0x880a2bu); SPILL(); f_6cb389(); if (g_unwind) return; RELOAD();
/* 880a2b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880a30: mov esi, eax */
  esi = eax;
/* 880a32: lea edi, [esp + 0x11c] */
  edi = (uint32_t)(esp + 0x11cu);
/* 880a39: mov dword ptr [esp + 0x264], ebx */
  W32((uint32_t)(esp + 0x264u), ebx);
/* 880a40: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880a42: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 880a46: mov esi, eax */
  esi = eax;
/* 880a48: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 880a4c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880a51: lea edi, [esp + 0x9c] */
  edi = (uint32_t)(esp + 0x9cu);
/* 880a58: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880a5a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880a5d: mov ecx, esp */
  ecx = esp;
/* 880a5f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 880a61: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 880a65: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 880a68: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 880a6b: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 880a72: call 0x6c9160 */
  esp -= 4; W32(esp, 0x880a77u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 880a77: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880a7a: mov edi, esp */
  edi = esp;
/* 880a7c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880a81: lea esi, [esp + 0xdc] */
  esi = (uint32_t)(esp + 0xdcu);
/* 880a88: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880a8a: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 880a91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 880a92: mov ecx, eax */
  ecx = eax;
/* 880a94: mov byte ptr [esp + 0x2a8], 2 */
  W8((uint32_t)(esp + 0x2a8u), 0x2u);
/* 880a9c: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x880aa2u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 880aa2: lea ebx, [ebp + 0x220] */
  ebx = (uint32_t)(ebp + 0x220u);
/* 880aa8: mov esi, eax */
  esi = eax;
/* 880aaa: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880aaf: mov edi, ebx */
  edi = ebx;
/* 880ab1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880ab3: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 880ab7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880abdu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880abd: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 880ac4: mov byte ptr [esp + 0x264], 1 */
  W8((uint32_t)(esp + 0x264u), 0x1u);
/* 880acc: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880ad2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880ad2: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 880ad9: mov byte ptr [esp + 0x264], 0 */
  W8((uint32_t)(esp + 0x264u), 0x0u);
/* 880ae1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880ae7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880ae7: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 880aee: mov dword ptr [esp + 0x264], 0xffffffff */
  W32((uint32_t)(esp + 0x264u), 0xffffffffu);
/* 880af9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880affu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880aff: mov edx, dword ptr [ebp + 0x5c] */
  edx = R32((uint32_t)(ebp + 0x5cu));
/* 880b02: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 880b08: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 880b0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880b0d: mov eax, esp */
  eax = esp;
/* 880b0f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 880b11: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 880b14: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 880b17: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 880b1a: lea ecx, [esp + 0x228] */
  ecx = (uint32_t)(esp + 0x228u);
/* 880b21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 880b24: call 0x6cb389 */
  esp -= 4; W32(esp, 0x880b29u); SPILL(); f_6cb389(); if (g_unwind) return; RELOAD();
/* 880b29: mov dword ptr [esp + 0x264], 3 */
  W32((uint32_t)(esp + 0x264u), 0x3u);
/* 880b34: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880b39: mov esi, eax */
  esi = eax;
/* 880b3b: lea edi, [esp + 0xdc] */
  edi = (uint32_t)(esp + 0xdcu);
/* 880b42: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880b44: mov esi, eax */
  esi = eax;
/* 880b46: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 880b49: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 880b4e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 880b50: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880b55: lea edi, [esp + 0x19c] */
  edi = (uint32_t)(esp + 0x19cu);
/* 880b5c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880b5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880b61: mov ecx, esp */
  ecx = esp;
/* 880b63: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 880b65: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 880b68: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 880b6b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 880b6e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 880b71: lea ecx, [esp + 0x128] */
  ecx = (uint32_t)(esp + 0x128u);
/* 880b78: call 0x6c9160 */
  esp -= 4; W32(esp, 0x880b7du); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 880b7d: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880b80: mov edi, esp */
  edi = esp;
/* 880b82: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880b87: lea esi, [esp + 0x1dc] */
  esi = (uint32_t)(esp + 0x1dcu);
/* 880b8e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880b90: lea ecx, [esp + 0x21c] */
  ecx = (uint32_t)(esp + 0x21cu);
/* 880b97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 880b98: mov ecx, eax */
  ecx = eax;
/* 880b9a: mov byte ptr [esp + 0x2a8], 5 */
  W8((uint32_t)(esp + 0x2a8u), 0x5u);
/* 880ba2: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x880ba8u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 880ba8: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 880baf: mov byte ptr [esp + 0x264], 9 */
  W8((uint32_t)(esp + 0x264u), 0x9u);
/* 880bb7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880bbdu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880bbd: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 880bc4: mov byte ptr [esp + 0x264], 8 */
  W8((uint32_t)(esp + 0x264u), 0x8u);
/* 880bcc: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880bd2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880bd2: lea ecx, [esp + 0x21c] */
  ecx = (uint32_t)(esp + 0x21cu);
/* 880bd9: mov byte ptr [esp + 0x264], 7 */
  W8((uint32_t)(esp + 0x264u), 0x7u);
/* 880be1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880be7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880be7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880bea: mov edi, esp */
  edi = esp;
/* 880bec: mov ecx, 0x10 */
  ecx = 0x10u;
/* 880bf1: lea esi, [esp + 0x21c] */
  esi = (uint32_t)(esp + 0x21cu);
/* 880bf8: lea edx, [esp + 0x19c] */
  edx = (uint32_t)(esp + 0x19cu);
/* 880bff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880c01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880c02: mov ecx, ebx */
  ecx = ebx;
/* 880c04: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x880c0au); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 880c0a: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 880c0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880c0f: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 880c16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 880c17: lea ecx, [esp + 0x164] */
  ecx = (uint32_t)(esp + 0x164u);
/* 880c1e: mov byte ptr [esp + 0x26c], 0xa */
  W8((uint32_t)(esp + 0x26cu), 0xau);
/* 880c26: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x880c2cu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 880c2c: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 880c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880c33: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 880c37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880c38: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 880c3b: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x880c41u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 880c41: mov ecx, eax */
  ecx = eax;
/* 880c43: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x880c49u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 880c49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 880c4b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 880c4f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 880c52: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 880c56: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 880c59: lea ecx, [esp + 0x15c] */
  ecx = (uint32_t)(esp + 0x15cu);
/* 880c60: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 880c64: mov byte ptr [esp + 0x264], 7 */
  W8((uint32_t)(esp + 0x264u), 0x7u);
/* 880c6c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880c72u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880c72: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* 880c79: mov dword ptr [esp + 0x264], 0xffffffff */
  W32((uint32_t)(esp + 0x264u), 0xffffffffu);
/* 880c84: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x880c8au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 880c8a: xor ebx, ebx */
  ebx = 0;
/* 880c8c: jmp 0x880d1f */
  goto L_880d1f;
L_880c91: /* 880c91: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 880c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880c97: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 880c9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 880c9f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 880ca5: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 880ca8: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x880caeu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 880cae: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 880cb4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 880cb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880cb9: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 880cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880cbe: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 880cc1: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x880cc7u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 880cc7: lea ecx, [esp + 0x1dc] */
  ecx = (uint32_t)(esp + 0x1dcu);
/* 880cce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 880ccf: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 880cd6: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x880cdcu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 880cdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880cdd: lea edx, [esp + 0x160] */
  edx = (uint32_t)(esp + 0x160u);
/* 880ce4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 880ce5: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 880ce9: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x880cefu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 880cef: mov esi, eax */
  esi = eax;
/* 880cf1: mov ecx, 0xc */
  ecx = 0xcu;
/* 880cf6: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 880cfa: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 880cfe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 880d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880d01: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 880d05: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x880d0bu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 880d0b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 880d0d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 880d11: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 880d14: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 880d18: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 880d1b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_880d1f: /* 880d1f: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 880d23: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 880d29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880d2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880d2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880d2d: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 880d31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880d32: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880d35: mov eax, esp */
  eax = esp;
/* 880d37: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 880d39: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 880d3d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 880d40: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 880d44: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 880d47: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880d4a: mov eax, esp */
  eax = esp;
/* 880d4c: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 880d54: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 880d58: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 880d5a: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 880d62: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 880d66: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 880d69: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 880d6d: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 880d71: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 880d79: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 880d81: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 880d89: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 880d91: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 880d99: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 880da1: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* 880da5: mov dword ptr [esp + 0x7c], 0x3f800000 */
  W32((uint32_t)(esp + 0x7cu), 0x3f800000u);
/* 880dad: mov dword ptr [esp + 0x80], 0xffffffff */
  W32((uint32_t)(esp + 0x80u), 0xffffffffu);
/* 880db8: mov dword ptr [esp + 0x84], ebx */
  W32((uint32_t)(esp + 0x84u), ebx);
/* 880dbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 880dc1: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 880dc9: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 880dcd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 880dce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 880dd1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x880dd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880dd7: mov ecx, dword ptr [esp + 0x270] */
  ecx = R32((uint32_t)(esp + 0x270u));
/* 880dde: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_880de0: /* 880de0: mov ecx, dword ptr [esp + 0x25c] */
  ecx = R32((uint32_t)(esp + 0x25cu));
/* 880de7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 880de8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 880de9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 880dea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 880df1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 880df2: add esp, 0x258 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x258u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 880df8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_880f40(void) {
  LOAD_REGS();
L_880f40: /* 880f40: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880f43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880f44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880f45: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 880f49: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 880f4c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 880f4f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 880f50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 880f51: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880f54: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 880f58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880f59: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 880f5e: mov edi, ecx */
  edi = ecx;
/* 880f60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880f64: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x880f67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880f67: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 880f6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 880f6f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 880f72: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 880f75: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 880f79: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 880f7c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 880f80: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880f83: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 880f87: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 880f8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 880f8b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880f8e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 880f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 880f93: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 880f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880f99: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x880f9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 880f9c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 880f9f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 880fa0: mov eax, edx */
  eax = edx;
/* 880fa2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 880fa5: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 880fa7: xor ebx, ebx */
  ebx = 0;
/* 880fa9: cmp cl, 0x42 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 880fac: jne 0x880fc3 */
  if (!zf) goto L_880fc3;
L_880fae: /* 880fae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 880fb1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 880fb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 880fb3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 880fb6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 880fbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 880fbd: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x880fc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_880fc3: /* 880fc3: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 880fc9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 880fcc: mov edx, esp */
  edx = esp;
/* 880fce: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 880fd6: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 880fda: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 880fdc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 880fe4: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 880fe8: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 880feb: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 880ff3: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 880ff7: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 880ffa: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 880fff: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 881003: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881004: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 881008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881009: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88100a: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 88100e: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 881012: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 881016: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 88101e: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 881026: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 88102e: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 881036: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 88103e: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 881046: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 88104a: mov dword ptr [esp + 0x70], 0x3f800000 */
  W32((uint32_t)(esp + 0x70u), 0x3f800000u);
/* 881052: mov dword ptr [esp + 0x74], 0xffffffff */
  W32((uint32_t)(esp + 0x74u), 0xffffffffu);
/* 88105a: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* 88105e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 881060: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881061: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x881067u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881067: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 88106b: xor eax, eax */
  eax = 0;
/* 88106d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88106f: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 881073: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 881076: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 881077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881078: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881079: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 88107b: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88107e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8810f0(void) {
  LOAD_REGS();
L_8810f0: /* 8810f0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8810f3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8810f7: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 8810fb: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 881103: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 881106: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 881109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88110a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88110b: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 88110e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88110f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 881112: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 881116: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 88111a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88111b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881120: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881121: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x881124u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881124: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 881128: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 881130: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 881133: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 881136: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 881139: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88113a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88113d: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 881141: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 881145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881146: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88114c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88114d: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x881150u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881152: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 881156: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88115cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88115c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 881160: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 881163: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 881166: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 881169: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88116a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88116d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 881171: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 881175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881176: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88117b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88117c: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x88117fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88117f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 881183: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 881189: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88118b: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 88118f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 881192: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 881196: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 881199: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 88119d: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8811a1: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8811a4: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8811a7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8811aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8811ab: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8811ae: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8811b2: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 8811b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8811b7: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8811bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8811be: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x8811c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8811c1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8811c5: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8811ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8811cc: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8811d0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8811d3: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8811d7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8811da: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8811de: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8811e2: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8811e5: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8811e8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8811eb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8811ec: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8811ef: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8811f3: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 8811f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8811f8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8811fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8811ff: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x881202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881202: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 881206: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 881209: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 88120d: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 881210: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881213: jne 0x88122f */
  if (!zf) goto L_88122f;
L_881215: /* 881215: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 881218: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881219: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 88121c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 881220: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 881226: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881229: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x88122fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88122f: /* 88122f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 881234: mov ecx, dword ptr [0xce8460] */
  ecx = R32((uint32_t)(0xce8460u));
/* 88123a: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 88123d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 88123f: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 881241: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 881245: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881247: je 0x88130b */
  if (zf) goto L_88130b;
L_88124d: /* 88124d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 881251: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 881257: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 88125d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 881261: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 881262: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 881266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881267: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88126b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 88126d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88126f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881273: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881276: mov ecx, esp */
  ecx = esp;
/* 881278: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88127a: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 88127e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 881281: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 881284: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 881288: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 88128c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88128f: mov eax, esp */
  eax = esp;
/* 881291: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 881293: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 881297: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88129a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88129b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88129e: mov ecx, esp */
  ecx = esp;
/* 8812a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8812a2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8812a8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8812a8: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8812ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8812ad: mov ecx, esi */
  ecx = esi;
/* 8812af: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x8812b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8812b5: mov esi, eax */
  esi = eax;
/* 8812b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8812b9: je 0x8812e4 */
  if (zf) goto L_8812e4;
L_8812bb: /* 8812bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8812bd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8812c1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8812c7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8812c7: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8812cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8812cc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8812d0: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8812d6u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8812d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8812d8: je 0x8812e4 */
  if (zf) goto L_8812e4;
L_8812da: /* 8812da: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8812de: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
L_8812e4: /* 8812e4: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8812e8: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8812ea: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8812ef: mov ecx, dword ptr [0xce8460] */
  ecx = R32((uint32_t)(0xce8460u));
/* 8812f5: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8812f8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8812fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8812fc: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8812ff: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 881301: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 881302: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 881304: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881305: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881308: ret 8 */
  esp += 12; SPILL(); return;
L_88130b: /* 88130b: xor esi, esi */
  esi = 0;
/* 88130d: jmp 0x8812e4 */
  goto L_8812e4;
}

void f_8813a0(void) {
  LOAD_REGS();
L_8813a0: /* 8813a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8813a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8813a5: mov esi, ecx */
  esi = ecx;
/* 8813a7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8813aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8813ab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8813ae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8813b1: jne 0x8813c8 */
  if (!zf) goto L_8813c8;
L_8813b3: /* 8813b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8813b4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8813b7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8813ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8813bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8813bd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8813c2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x8813c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8813c8: /* 8813c8: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8813ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8813d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8813d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8813d3: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8813d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8813d9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8813dd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8813df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8813e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_881410(void) {
  LOAD_REGS();
L_881410: /* 881410: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 881413: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 881414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881415: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 881419: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88141c: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 881424: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881427: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881428: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88142b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88142c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 881430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 881431: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881436: mov ebx, ecx */
  ebx = ecx;
/* 881438: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 88143b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88143c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x88143fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88143f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881442: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 88144a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 88144d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88144e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 881452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881453: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881456: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 881459: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 88145e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88145f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881462u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881462: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 881465: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 88146d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 881470: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881471: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 881475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 881476: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881479: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88147c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 881481: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 881482: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x881485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 881485: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 881488: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 881489: mov eax, edx */
  eax = edx;
/* 88148b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 88148e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 881491: jne 0x8814a9 */
  if (!zf) goto L_8814a9;
L_881493: /* 881493: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 881496: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 881497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 881499: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 88149c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8814a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8814a3: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8814a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8814a9: /* 8814a9: mov ecx, dword ptr [ebx + 0x334] */
  ecx = R32((uint32_t)(ebx + 0x334u));
/* 8814af: xor edi, edi */
  edi = 0;
/* 8814b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8814b3: jle 0x8814d7 */
  if ((zf || sf != of)) goto L_8814d7;
L_8814b5: /* 8814b5: mov eax, dword ptr [ebx + 0x330] */
  eax = R32((uint32_t)(ebx + 0x330u));
/* 8814bb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8814bf: lea esi, [ebx + 0x330] */
  esi = (uint32_t)(ebx + 0x330u);
L_8814c5: /* 8814c5: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8814c7: je 0x8814d3 */
  if (zf) goto L_8814d3;
L_8814c9: /* 8814c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8814ca: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8814cd: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8814cf: jl 0x8814c5 */
  if ((sf != of)) goto L_8814c5;
L_8814d1: /* 8814d1: jmp 0x8814d7 */
  goto L_8814d7;
L_8814d3: /* 8814d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8814d5: jge 0x881500 */
  if ((sf == of)) goto L_881500;
L_8814d7: /* 8814d7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8814db: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8814e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8814e3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8814e6: jnp 0x88152d */
  if (!pf) goto L_88152d;
L_8814e8: /* 8814e8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8814ea: mov edi, ecx */
  edi = ecx;
/* 8814ec: lea esi, [ebx + 0x330] */
  esi = (uint32_t)(ebx + 0x330u);
/* 8814f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8814f4: mov ecx, esi */
  ecx = esi;
/* 8814f6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8814fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8814fc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
L_881500: /* 881500: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 881502: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 881505: mov eax, edi */
  eax = edi;
/* 881507: mov dword ptr [eax + ecx], edx */
  W32((uint32_t)(eax + ecx), edx);
/* 88150a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88150e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 881510: fstp dword ptr [edx + eax + 4] */
  WF32((uint32_t)(edx + eax + 0x4u), ST0); FPOP();
/* 881514: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 881516: mov dword ptr [ecx + eax + 8], 0 */
  W32((uint32_t)(ecx + eax + 0x8u), 0x0u);
/* 88151e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 881522: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 881524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 881526: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 881529: mov byte ptr [ecx + eax + 0xc], dl */
  W8((uint32_t)(ecx + eax + 0xcu), (edx & 0xffu));
L_88152d: /* 88152d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88152e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88152f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 881530: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 881533: ret 8 */
  esp += 12; SPILL(); return;
}
