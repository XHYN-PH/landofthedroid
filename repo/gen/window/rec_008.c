#include "recomp.h"
#include "rec_mod.h"

void f_db1fb0(void) {
  LOAD_REGS();
L_db1fb0: /* db1fb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1fb2: push 0xdbafbb */
  { uint32_t v = 0xdbafbbu; esp -= 4; W32(esp, v); }
/* db1fb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db1fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1fbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1fc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1fc7: mov esi, ecx */
  esi = ecx;
/* db1fc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db1fcd: mov dword ptr [esi], 0xdc5e38 */
  W32((uint32_t)(esi), 0xdc5e38u);
/* db1fd3: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* db1fdb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb1fe0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db1fe0: lea ecx, [esi + 0x290] */
  ecx = (uint32_t)(esi + 0x290u);
/* db1fe6: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* db1feb: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb1ff1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db1ff1: lea ecx, [esi + 0x284] */
  ecx = (uint32_t)(esi + 0x284u);
/* db1ff7: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* db1ffc: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb2002u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db2002: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* db2008: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* db200d: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb2012u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db2012: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* db2018: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* db201d: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb2022u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db2022: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* db2028: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* db202d: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb2032u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db2032: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db2035: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db203a: call 0xd82306 */
  esp -= 4; W32(esp, 0xdb203fu); SPILL(); f_d82306(); if (g_unwind) return; RELOAD();
/* db203f: mov ecx, esi */
  ecx = esi;
/* db2041: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db2049: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb204eu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db204e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db2052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2053: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db205a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db205d: ret  */
  esp += 4; SPILL(); return;
}

void f_db2090(void) {
  LOAD_REGS();
L_db2090: /* db2090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2092: push 0xdbb02c */
  { uint32_t v = 0xdbb02cu; esp -= 4; W32(esp, v); }
/* db2097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db209d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db209e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db20a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db20a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db20a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db20a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db20a9: mov edi, ecx */
  edi = ecx;
/* db20ab: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* db20af: call 0xd812d0 */
  esp -= 4; W32(esp, 0xdb20b4u); SPILL(); f_d812d0(); if (g_unwind) return; RELOAD();
/* db20b4: lea esi, [edi + 0x3c] */
  esi = (uint32_t)(edi + 0x3cu);
/* db20b7: xor ebx, ebx */
  ebx = 0;
/* db20b9: mov ecx, esi */
  ecx = esi;
/* db20bb: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* db20bf: mov dword ptr [edi], 0xdc5e38 */
  W32((uint32_t)(edi), 0xdc5e38u);
/* db20c5: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb20cau); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db20ca: mov dword ptr [esi], 0xdc1d28 */
  W32((uint32_t)(esi), 0xdc1d28u);
/* db20d0: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* db20d3: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* db20d6: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db20db: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db20de: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db20e1: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* db20e4: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* db20e7: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* db20ec: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db20ef: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* db20f2: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* db20f5: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db20f8: mov dword ptr [esi + 0x68], ebx */
  W32((uint32_t)(esi + 0x68u), ebx);
/* db20fb: mov dword ptr [esi + 0x6c], ebx */
  W32((uint32_t)(esi + 0x6cu), ebx);
/* db20fe: lea esi, [edi + 0xb0] */
  esi = (uint32_t)(edi + 0xb0u);
/* db2104: mov ecx, esi */
  ecx = esi;
/* db2106: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* db210b: call 0xd81591 */
  esp -= 4; W32(esp, 0xdb2110u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* db2110: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db2116: lea esi, [edi + 0x14c] */
  esi = (uint32_t)(edi + 0x14cu);
/* db211c: mov ecx, esi */
  ecx = esi;
/* db211e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* db2123: call 0xd81591 */
  esp -= 4; W32(esp, 0xdb2128u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* db2128: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db212e: lea esi, [edi + 0x1e8] */
  esi = (uint32_t)(edi + 0x1e8u);
/* db2134: mov ecx, esi */
  ecx = esi;
/* db2136: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* db213b: call 0xd81591 */
  esp -= 4; W32(esp, 0xdb2140u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* db2140: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db2146: lea ecx, [edi + 0x284] */
  ecx = (uint32_t)(edi + 0x284u);
/* db214c: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* db2151: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb2157u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db2157: lea ecx, [edi + 0x290] */
  ecx = (uint32_t)(edi + 0x290u);
/* db215d: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* db2162: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb2168u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db2168: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db216c: mov eax, edi */
  eax = edi;
/* db216e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db216f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2170: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2171: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db2178: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db217b: ret  */
  esp += 4; SPILL(); return;
}

void f_db21c0(void) {
  LOAD_REGS();
L_db21c0: /* db21c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db21c2: push 0xdbb09c */
  { uint32_t v = 0xdbb09cu; esp -= 4; W32(esp, v); }
/* db21c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db21cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db21ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db21d5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db21d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db21d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db21da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db21db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db21dc: mov esi, ecx */
  esi = ecx;
/* db21de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db21e0: push 0xde4d08 */
  { uint32_t v = 0xde4d08u; esp -= 4; W32(esp, v); }
/* db21e5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* db21e9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* db21ed: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb21f3u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db21f3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* db21f6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db21fa: xor ebp, ebp */
  ebp = 0;
/* db21fc: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* db21ff: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db2202: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db2208: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* db220b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db220e: mov word ptr [esi + 0xc], bp */
  W16((uint32_t)(esi + 0xcu), (ebp & 0xffffu));
/* db2212: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db2218: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* db221b: mov dword ptr [esi + 0x14], ebp */
  W32((uint32_t)(esi + 0x14u), ebp);
/* db221e: mov dword ptr [esi + 0x18], ebp */
  W32((uint32_t)(esi + 0x18u), ebp);
/* db2221: mov dword ptr [esi + 0x1c], ebp */
  W32((uint32_t)(esi + 0x1cu), ebp);
/* db2224: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb222au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db222a: mov dword ptr [esi + 0x38], ebp */
  W32((uint32_t)(esi + 0x38u), ebp);
/* db222d: mov word ptr [esi + 0xc], 0x97 */
  W16((uint32_t)(esi + 0xcu), 0x97u);
/* db2233: mov dword ptr [esi], 0xdc5e38 */
  W32((uint32_t)(esi), 0xdc5e38u);
/* db2239: mov eax, dword ptr [0xde5164] */
  eax = R32((uint32_t)(0xde5164u));
/* db223e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db223f: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* db2244: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* db2247: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2248: mov ecx, edi */
  ecx = edi;
/* db224a: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* db224e: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb2253u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db2253: mov dword ptr [edi], 0xdc1d28 */
  W32((uint32_t)(edi), 0xdc1d28u);
/* db2259: mov dword ptr [edi + 0x44], ebp */
  W32((uint32_t)(edi + 0x44u), ebp);
/* db225c: mov dword ptr [edi + 0x48], ebp */
  W32((uint32_t)(edi + 0x48u), ebp);
/* db225f: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db2264: mov dword ptr [edi + 0x40], ecx */
  W32((uint32_t)(edi + 0x40u), ecx);
/* db2267: mov dword ptr [edi + 0x4c], ecx */
  W32((uint32_t)(edi + 0x4cu), ecx);
/* db226a: mov dword ptr [edi + 0x50], ebp */
  W32((uint32_t)(edi + 0x50u), ebp);
/* db226d: mov dword ptr [edi + 0x54], ebp */
  W32((uint32_t)(edi + 0x54u), ebp);
/* db2270: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* db2275: mov dword ptr [edi + 0x58], eax */
  W32((uint32_t)(edi + 0x58u), eax);
/* db2278: mov dword ptr [edi + 0x5c], ebp */
  W32((uint32_t)(edi + 0x5cu), ebp);
/* db227b: mov dword ptr [edi + 0x60], ebp */
  W32((uint32_t)(edi + 0x60u), ebp);
/* db227e: mov dword ptr [edi + 0x64], eax */
  W32((uint32_t)(edi + 0x64u), eax);
/* db2281: mov dword ptr [edi + 0x68], ebp */
  W32((uint32_t)(edi + 0x68u), ebp);
/* db2284: mov dword ptr [edi + 0x6c], ebp */
  W32((uint32_t)(edi + 0x6cu), ebp);
/* db2287: mov dword ptr [edi + 0x70], 0xffffffff */
  W32((uint32_t)(edi + 0x70u), 0xffffffffu);
/* db228e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db228f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db2292: mov eax, esp */
  eax = esp;
/* db2294: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* db2298: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db229a: lea edi, [esi + 0xb0] */
  edi = (uint32_t)(esi + 0xb0u);
/* db22a0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* db22a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db22a3: mov ecx, edi */
  ecx = edi;
/* db22a5: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* db22aa: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db22ad: mov dword ptr [eax + 8], 0xd81a82 */
  W32((uint32_t)(eax + 0x8u), 0xd81a82u);
/* db22b4: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb22b9u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db22b9: mov ebx, 5 */
  ebx = 0x5u;
/* db22be: mov dword ptr [edi], 0xdc1ac8 */
  W32((uint32_t)(edi), 0xdc1ac8u);
/* db22c4: mov dword ptr [edi + 0x94], ebp */
  W32((uint32_t)(edi + 0x94u), ebp);
/* db22ca: mov dword ptr [edi + 0x98], ebx */
  W32((uint32_t)(edi + 0x98u), ebx);
/* db22d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db22d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db22d4: mov eax, esp */
  eax = esp;
/* db22d6: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* db22db: lea edi, [esi + 0x14c] */
  edi = (uint32_t)(esi + 0x14cu);
/* db22e1: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* db22e5: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db22eb: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db22ee: mov dword ptr [eax + 8], 0xd819a1 */
  W32((uint32_t)(eax + 0x8u), 0xd819a1u);
/* db22f5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* db22f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db22f8: mov ecx, edi */
  ecx = edi;
/* db22fa: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb22ffu); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db22ff: mov dword ptr [edi], 0xdc1ac8 */
  W32((uint32_t)(edi), 0xdc1ac8u);
/* db2305: mov dword ptr [edi + 0x94], ebp */
  W32((uint32_t)(edi + 0x94u), ebp);
/* db230b: mov dword ptr [edi + 0x98], ebx */
  W32((uint32_t)(edi + 0x98u), ebx);
/* db2311: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db2312: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db2315: mov eax, esp */
  eax = esp;
/* db2317: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* db231b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* db231d: lea edi, [esi + 0x1e8] */
  edi = (uint32_t)(esi + 0x1e8u);
/* db2323: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2324: mov ecx, edi */
  ecx = edi;
/* db2326: mov byte ptr [esp + 0x38], 3 */
  W8((uint32_t)(esp + 0x38u), 0x3u);
/* db232b: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db2331: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db2334: mov dword ptr [eax + 8], 0xd8214e */
  W32((uint32_t)(eax + 0x8u), 0xd8214eu);
/* db233b: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb2340u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db2340: mov dword ptr [edi], 0xdc1ac8 */
  W32((uint32_t)(edi), 0xdc1ac8u);
/* db2346: mov dword ptr [edi + 0x94], ebp */
  W32((uint32_t)(edi + 0x94u), ebp);
/* db234c: mov dword ptr [edi + 0x98], ebx */
  W32((uint32_t)(edi + 0x98u), ebx);
/* db2352: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* db2356: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2357: lea ecx, [esi + 0x284] */
  ecx = (uint32_t)(esi + 0x284u);
/* db235d: mov byte ptr [esp + 0x24], 4 */
  W8((uint32_t)(esp + 0x24u), 0x4u);
/* db2362: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xdb2368u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* db2368: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* db236c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db236d: lea ecx, [esi + 0x290] */
  ecx = (uint32_t)(esi + 0x290u);
/* db2373: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* db2377: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xdb237du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* db237d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db2381: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2382: mov eax, esi */
  eax = esi;
/* db2384: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2385: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db2386: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db238d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db238e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db2391: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db2420(void) {
  LOAD_REGS();
L_db2420: /* db2420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2422: push 0xdbb10c */
  { uint32_t v = 0xdbb10cu; esp -= 4; W32(esp, v); }
/* db2427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db242d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db242e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db2435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2436: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db2437: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db2438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2439: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db243a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* db243e: mov esi, ecx */
  esi = ecx;
/* db2440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2441: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* db2445: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb244au); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db244a: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db244d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db244e: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db2451: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* db2459: mov dword ptr [esi], 0xdc5e38 */
  W32((uint32_t)(esi), 0xdc5e38u);
/* db245f: call 0xd828b5 */
  esp -= 4; W32(esp, 0xdb2464u); SPILL(); f_d828b5(); if (g_unwind) return; RELOAD();
/* db2464: lea ebp, [edi + 0xb0] */
  ebp = (uint32_t)(edi + 0xb0u);
/* db246a: lea ebx, [esi + 0xb0] */
  ebx = (uint32_t)(esi + 0xb0u);
/* db2470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db2471: mov ecx, ebx */
  ecx = ebx;
/* db2473: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* db2478: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb247du); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db247d: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db2483: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* db2489: mov dword ptr [ebx + 0x94], ecx */
  W32((uint32_t)(ebx + 0x94u), ecx);
/* db248f: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* db2495: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
/* db249b: lea ebp, [edi + 0x14c] */
  ebp = (uint32_t)(edi + 0x14cu);
/* db24a1: lea ebx, [esi + 0x14c] */
  ebx = (uint32_t)(esi + 0x14cu);
/* db24a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db24a8: mov ecx, ebx */
  ecx = ebx;
/* db24aa: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* db24af: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb24b4u); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db24b4: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db24ba: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* db24c0: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* db24c6: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* db24cc: mov dword ptr [ebx + 0x98], ecx */
  W32((uint32_t)(ebx + 0x98u), ecx);
/* db24d2: lea ebp, [edi + 0x1e8] */
  ebp = (uint32_t)(edi + 0x1e8u);
/* db24d8: lea ebx, [esi + 0x1e8] */
  ebx = (uint32_t)(esi + 0x1e8u);
/* db24de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db24df: mov ecx, ebx */
  ecx = ebx;
/* db24e1: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* db24e6: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb24ebu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db24eb: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db24f1: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* db24f7: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* db24fd: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* db2503: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* db2509: lea ecx, [edi + 0x284] */
  ecx = (uint32_t)(edi + 0x284u);
/* db250f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2510: lea ecx, [esi + 0x284] */
  ecx = (uint32_t)(esi + 0x284u);
/* db2516: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* db251b: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb2521u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db2521: add edi, 0x290 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x290u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db2527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2528: lea ecx, [esi + 0x290] */
  ecx = (uint32_t)(esi + 0x290u);
/* db252e: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* db2533: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb2539u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db2539: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* db253d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db253e: mov eax, esi */
  eax = esi;
/* db2540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2541: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db2542: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2543: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db254a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db254d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db25a0(void) {
  LOAD_REGS();
L_db25a0: /* db25a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db25a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db25a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db25a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db25a4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* db25a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db25a9: mov esi, ecx */
  esi = ecx;
/* db25ab: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb25b0u); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db25b0: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db25b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db25b4: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db25b7: call 0xd81a32 */
  esp -= 4; W32(esp, 0xdb25bcu); SPILL(); f_d81a32(); if (g_unwind) return; RELOAD();
/* db25bc: lea ebx, [edi + 0xb0] */
  ebx = (uint32_t)(edi + 0xb0u);
/* db25c2: lea ebp, [esi + 0xb0] */
  ebp = (uint32_t)(esi + 0xb0u);
/* db25c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db25c9: mov ecx, ebp */
  ecx = ebp;
/* db25cb: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb25d0u); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db25d0: mov ecx, dword ptr [ebx + 0x94] */
  ecx = R32((uint32_t)(ebx + 0x94u));
/* db25d6: mov dword ptr [ebp + 0x94], ecx */
  W32((uint32_t)(ebp + 0x94u), ecx);
/* db25dc: mov edx, dword ptr [ebx + 0x98] */
  edx = R32((uint32_t)(ebx + 0x98u));
/* db25e2: mov dword ptr [ebp + 0x98], edx */
  W32((uint32_t)(ebp + 0x98u), edx);
/* db25e8: lea ebx, [edi + 0x14c] */
  ebx = (uint32_t)(edi + 0x14cu);
/* db25ee: lea ebp, [esi + 0x14c] */
  ebp = (uint32_t)(esi + 0x14cu);
/* db25f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db25f5: mov ecx, ebp */
  ecx = ebp;
/* db25f7: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb25fcu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db25fc: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* db2602: mov dword ptr [ebp + 0x94], eax */
  W32((uint32_t)(ebp + 0x94u), eax);
/* db2608: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* db260e: mov dword ptr [ebp + 0x98], ecx */
  W32((uint32_t)(ebp + 0x98u), ecx);
/* db2614: lea ebx, [edi + 0x1e8] */
  ebx = (uint32_t)(edi + 0x1e8u);
/* db261a: lea ebp, [esi + 0x1e8] */
  ebp = (uint32_t)(esi + 0x1e8u);
/* db2620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db2621: mov ecx, ebp */
  ecx = ebp;
/* db2623: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb2628u); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db2628: mov edx, dword ptr [ebx + 0x94] */
  edx = R32((uint32_t)(ebx + 0x94u));
/* db262e: lea ecx, [edi + 0x284] */
  ecx = (uint32_t)(edi + 0x284u);
/* db2634: mov dword ptr [ebp + 0x94], edx */
  W32((uint32_t)(ebp + 0x94u), edx);
/* db263a: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* db2640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2641: lea ecx, [esi + 0x284] */
  ecx = (uint32_t)(esi + 0x284u);
/* db2647: mov dword ptr [ebp + 0x98], eax */
  W32((uint32_t)(ebp + 0x98u), eax);
/* db264d: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb2653u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db2653: add edi, 0x290 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x290u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db2659: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db265a: lea ecx, [esi + 0x290] */
  ecx = (uint32_t)(esi + 0x290u);
/* db2660: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb2666u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db2666: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2667: mov eax, esi */
  eax = esi;
/* db2669: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db266a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db266b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db266c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db26b0(void) {
  LOAD_REGS();
L_db26b0: /* db26b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db26b1: mov esi, ecx */
  esi = ecx;
/* db26b3: call 0xd819ab */
  esp -= 4; W32(esp, 0xdb26b8u); SPILL(); f_d819ab(); if (g_unwind) return; RELOAD();
/* db26b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db26bd: je 0xdb26cc */
  if (zf) goto L_db26cc;
L_db26bf: /* db26bf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db26c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db26c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db26c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db26c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb26ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db26cc: /* db26cc: mov eax, esi */
  eax = esi;
/* db26ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db26cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db26f0(void) {
  LOAD_REGS();
L_db26f0: /* db26f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db26f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db26f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db26f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db26f9: mov esi, ecx */
  esi = ecx;
/* db26fb: je 0xdb2730 */
  if (zf) goto L_db2730;
L_db26fd: /* db26fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db2700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2701: push 0xd819ab */
  { uint32_t v = 0xd819abu; esp -= 4; W32(esp, v); }
/* db2706: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db2709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db270a: push 0x29c */
  { uint32_t v = 0x29cu; esp -= 4; W32(esp, v); }
/* db270f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2710: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb2715u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db2715: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2718: je 0xdb2728 */
  if (zf) goto L_db2728;
L_db271a: /* db271a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db2720: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db2722: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2724: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2725: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2728: /* db2728: mov eax, edi */
  eax = edi;
/* db272a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db272b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db272c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db272d: ret 4 */
  esp += 8; SPILL(); return;
L_db2730: /* db2730: mov ecx, esi */
  ecx = esi;
/* db2732: call 0xd819ab */
  esp -= 4; W32(esp, 0xdb2737u); SPILL(); f_d819ab(); if (g_unwind) return; RELOAD();
/* db2737: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db273a: je 0xdb2749 */
  if (zf) goto L_db2749;
L_db273c: /* db273c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2741: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2743: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2746: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2749: /* db2749: mov eax, esi */
  eax = esi;
/* db274b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db274c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db274d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2770(void) {
  LOAD_REGS();
L_db2770: /* db2770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2771: mov esi, ecx */
  esi = ecx;
/* db2773: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb2778u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db2778: mov dword ptr [esi], 0xdc1e40 */
  W32((uint32_t)(esi), 0xdc1e40u);
/* db277e: xor eax, eax */
  eax = 0;
/* db2780: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db2783: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db2786: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db278b: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db278e: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db2791: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db2794: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* db2797: mov eax, esi */
  eax = esi;
/* db2799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db279a: ret  */
  esp += 4; SPILL(); return;
}

void f_db27b0(void) {
  LOAD_REGS();
L_db27b0: /* db27b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db27b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db27b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db27b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db27b7: mov esi, ecx */
  esi = ecx;
/* db27b9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb27beu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db27be: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db27c4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db27c7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db27ca: mov dword ptr [esi], 0xdc1e40 */
  W32((uint32_t)(esi), 0xdc1e40u);
/* db27d0: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db27d3: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db27d6: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db27db: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db27de: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db27e1: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db27e4: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* db27e7: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db27ea: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db27ed: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* db27f0: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* db27f3: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* db27f6: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db27f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db27fa: mov eax, esi */
  eax = esi;
/* db27fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db27fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2820(void) {
  LOAD_REGS();
L_db2820: /* db2820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2821: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2822: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db2826: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2827: mov esi, ecx */
  esi = ecx;
/* db2829: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb282eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db282e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db2831: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db2834: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db2837: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db283a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db283d: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db2840: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* db2843: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db2846: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db2849: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db284c: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* db284f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2850: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* db2853: mov eax, esi */
  eax = esi;
/* db2855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2870(void) {
  LOAD_REGS();
L_db2870: /* db2870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2871: mov esi, ecx */
  esi = ecx;
/* db2873: call 0xd816a9 */
  esp -= 4; W32(esp, 0xdb2878u); SPILL(); f_d816a9(); if (g_unwind) return; RELOAD();
/* db2878: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db287d: je 0xdb288c */
  if (zf) goto L_db288c;
L_db287f: /* db287f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2884: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2886: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2889: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb288cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db288c: /* db288c: mov eax, esi */
  eax = esi;
/* db288e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db288f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db28b0(void) {
  LOAD_REGS();
L_db28b0: /* db28b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db28b2: push 0xdbb138 */
  { uint32_t v = 0xdbb138u; esp -= 4; W32(esp, v); }
/* db28b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db28bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db28be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db28c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db28c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db28c7: mov esi, ecx */
  esi = ecx;
/* db28c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db28cd: mov dword ptr [esi], 0xdc5f58 */
  W32((uint32_t)(esi), 0xdc5f58u);
/* db28d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db28db: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb28e0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db28e0: mov ecx, esi */
  ecx = esi;
/* db28e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db28ea: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdb28efu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* db28ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db28f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db28f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db28fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db28fe: ret  */
  esp += 4; SPILL(); return;
}

void f_db2920(void) {
  LOAD_REGS();
L_db2920: /* db2920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2921: mov esi, ecx */
  esi = ecx;
/* db2923: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb2928u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db2928: mov dword ptr [esi], 0xdc5f58 */
  W32((uint32_t)(esi), 0xdc5f58u);
/* db292e: mov eax, esi */
  eax = esi;
/* db2930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2931: ret  */
  esp += 4; SPILL(); return;
}

void f_db2950(void) {
  LOAD_REGS();
L_db2950: /* db2950: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* db2954: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db2956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2957: mov esi, ecx */
  esi = ecx;
/* db2959: jne 0xdb2960 */
  if (!zf) goto L_db2960;
L_db295b: /* db295b: mov eax, dword ptr [0xde50d8] */
  eax = R32((uint32_t)(0xde50d8u));
L_db2960: /* db2960: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db2964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2965: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db2969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db296a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db296b: mov ecx, esi */
  ecx = esi;
/* db296d: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb2972u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db2972: mov dword ptr [esi], 0xdc5f58 */
  W32((uint32_t)(esi), 0xdc5f58u);
/* db2978: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* db297f: mov eax, esi */
  eax = esi;
/* db2981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2982: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db29a0(void) {
  LOAD_REGS();
L_db29a0: /* db29a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db29a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db29a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db29a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db29a7: mov esi, ecx */
  esi = ecx;
/* db29a9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb29aeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db29ae: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db29b4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db29b7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db29ba: mov dword ptr [esi], 0xdc5f58 */
  W32((uint32_t)(esi), 0xdc5f58u);
/* db29c0: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db29c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db29c4: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db29c7: mov eax, esi */
  eax = esi;
/* db29c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db29ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db29e0(void) {
  LOAD_REGS();
L_db29e0: /* db29e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db29e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db29e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db29e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db29e7: mov esi, ecx */
  esi = ecx;
/* db29e9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb29eeu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db29ee: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db29f1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db29f4: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db29f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db29f8: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db29fb: mov eax, esi */
  eax = esi;
/* db29fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db29fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2a20(void) {
  LOAD_REGS();
L_db2a20: /* db2a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2a21: mov esi, ecx */
  esi = ecx;
/* db2a23: call 0xd82482 */
  esp -= 4; W32(esp, 0xdb2a28u); SPILL(); f_d82482(); if (g_unwind) return; RELOAD();
/* db2a28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2a2d: je 0xdb2a3c */
  if (zf) goto L_db2a3c;
L_db2a2f: /* db2a2f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2a34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2a36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2a39: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2a3c: /* db2a3c: mov eax, esi */
  eax = esi;
/* db2a3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2a3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2a60(void) {
  LOAD_REGS();
L_db2a60: /* db2a60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db2a61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db2a65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2a68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2a69: mov esi, ecx */
  esi = ecx;
/* db2a6b: je 0xdb2a9d */
  if (zf) goto L_db2a9d;
L_db2a6d: /* db2a6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db2a70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2a71: push 0xd82482 */
  { uint32_t v = 0xd82482u; esp -= 4; W32(esp, v); }
/* db2a76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db2a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2a7a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* db2a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2a7d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb2a82u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db2a82: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2a85: je 0xdb2a95 */
  if (zf) goto L_db2a95;
L_db2a87: /* db2a87: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db2a8d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db2a8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2a91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2a92: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2a95: /* db2a95: mov eax, edi */
  eax = edi;
/* db2a97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2a98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2a99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2a9a: ret 4 */
  esp += 8; SPILL(); return;
L_db2a9d: /* db2a9d: mov ecx, esi */
  ecx = esi;
/* db2a9f: call 0xd82482 */
  esp -= 4; W32(esp, 0xdb2aa4u); SPILL(); f_d82482(); if (g_unwind) return; RELOAD();
/* db2aa4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2aa7: je 0xdb2ab6 */
  if (zf) goto L_db2ab6;
L_db2aa9: /* db2aa9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2aae: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2ab0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2ab2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2ab3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2ab6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2ab6: /* db2ab6: mov eax, esi */
  eax = esi;
/* db2ab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2aba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2ae0(void) {
  LOAD_REGS();
L_db2ae0: /* db2ae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2ae2: push 0xdbb158 */
  { uint32_t v = 0xdbb158u; esp -= 4; W32(esp, v); }
/* db2ae7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db2aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2aee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db2af5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2af6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2af7: mov esi, ecx */
  esi = ecx;
/* db2af9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db2afd: mov dword ptr [esi], 0xdc6070 */
  W32((uint32_t)(esi), 0xdc6070u);
/* db2b03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db2b0b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb2b10u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db2b10: mov ecx, esi */
  ecx = esi;
/* db2b12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db2b1a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdb2b1fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* db2b1f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db2b23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2b24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db2b2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db2b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_db2b50(void) {
  LOAD_REGS();
L_db2b50: /* db2b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2b51: mov esi, ecx */
  esi = ecx;
/* db2b53: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb2b58u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db2b58: mov dword ptr [esi], 0xdc6070 */
  W32((uint32_t)(esi), 0xdc6070u);
/* db2b5e: xor eax, eax */
  eax = 0;
/* db2b60: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db2b63: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db2b66: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db2b6b: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db2b6e: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db2b71: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db2b74: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db2b77: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* db2b7a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db2b7d: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db2b80: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* db2b83: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db2b86: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* db2b89: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db2b8c: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* db2b8f: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* db2b92: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* db2b98: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* db2b9e: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* db2ba1: mov eax, esi */
  eax = esi;
/* db2ba3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2ba4: ret  */
  esp += 4; SPILL(); return;
}

void f_db2bd0(void) {
  LOAD_REGS();
L_db2bd0: /* db2bd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2bd2: push 0xdbb178 */
  { uint32_t v = 0xdbb178u; esp -= 4; W32(esp, v); }
/* db2bd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db2bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2bde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db2be5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2be6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* db2bea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2beb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2bec: xor edi, edi */
  edi = 0;
/* db2bee: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db2bf0: mov esi, ecx */
  esi = ecx;
/* db2bf2: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* db2bf6: jne 0xdb2bfd */
  if (!zf) goto L_db2bfd;
L_db2bf8: /* db2bf8: mov eax, dword ptr [0xde5160] */
  eax = R32((uint32_t)(0xde5160u));
L_db2bfd: /* db2bfd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* db2c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2c02: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* db2c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2c07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2c08: mov ecx, esi */
  ecx = esi;
/* db2c0a: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb2c0fu); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db2c0f: mov dword ptr [esi], 0xdc6070 */
  W32((uint32_t)(esi), 0xdc6070u);
/* db2c15: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* db2c18: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* db2c1b: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db2c20: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db2c23: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db2c26: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* db2c29: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* db2c2c: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db2c2f: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* db2c32: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* db2c35: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db2c38: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* db2c3b: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* db2c3e: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* db2c41: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* db2c44: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* db2c47: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* db2c4a: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* db2c50: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* db2c56: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db2c59: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* db2c5d: jne 0xdb2c77 */
  if (!zf) goto L_db2c77;
L_db2c5f: /* db2c5f: push 0x6ed */
  { uint32_t v = 0x6edu; esp -= 4; W32(esp, v); }
/* db2c64: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* db2c69: push 0xde1ec4 */
  { uint32_t v = 0xde1ec4u; esp -= 4; W32(esp, v); }
/* db2c6e: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdb2c74u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* db2c74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_db2c77: /* db2c77: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db2c7b: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* db2c81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2c82: mov eax, esi */
  eax = esi;
/* db2c84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2c85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db2c8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db2c8f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db2ce0(void) {
  LOAD_REGS();
L_db2ce0: /* db2ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2ce1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2ce2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db2ce6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2ce7: mov esi, ecx */
  esi = ecx;
/* db2ce9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb2ceeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db2cee: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db2cf4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db2cf7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db2cfa: mov dword ptr [esi], 0xdc6070 */
  W32((uint32_t)(esi), 0xdc6070u);
/* db2d00: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db2d05: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db2d08: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db2d0b: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db2d0e: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db2d11: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db2d14: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db2d17: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* db2d1a: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* db2d1d: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* db2d20: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* db2d23: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db2d26: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* db2d29: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* db2d2c: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* db2d2f: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* db2d32: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db2d35: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db2d38: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db2d3b: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* db2d3e: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* db2d41: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* db2d44: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* db2d47: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* db2d4a: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* db2d4d: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* db2d50: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* db2d53: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* db2d59: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* db2d5f: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* db2d65: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* db2d6b: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* db2d71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2d72: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* db2d78: mov eax, esi */
  eax = esi;
/* db2d7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2d7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2db0(void) {
  LOAD_REGS();
L_db2db0: /* db2db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2db1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2db2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db2db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2db7: mov esi, ecx */
  esi = ecx;
/* db2db9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb2dbeu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db2dbe: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db2dc1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db2dc4: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db2dc7: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db2dca: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db2dcd: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db2dd0: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db2dd3: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db2dd6: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db2dd9: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db2ddc: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db2ddf: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db2de2: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db2de5: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db2de8: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db2deb: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db2dee: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* db2df1: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* db2df4: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* db2df7: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db2dfa: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* db2dfd: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* db2e00: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* db2e06: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* db2e0c: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* db2e12: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* db2e18: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* db2e1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2e1f: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* db2e25: mov eax, esi */
  eax = esi;
/* db2e27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2e28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2e50(void) {
  LOAD_REGS();
L_db2e50: /* db2e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2e51: mov esi, ecx */
  esi = ecx;
/* db2e53: call 0xd81910 */
  esp -= 4; W32(esp, 0xdb2e58u); SPILL(); f_d81910(); if (g_unwind) return; RELOAD();
/* db2e58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2e5d: je 0xdb2e6c */
  if (zf) goto L_db2e6c;
L_db2e5f: /* db2e5f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2e64: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2e66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2e69: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2e6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2e6c: /* db2e6c: mov eax, esi */
  eax = esi;
/* db2e6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2e6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2e90(void) {
  LOAD_REGS();
L_db2e90: /* db2e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db2e91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db2e95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2e98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2e99: mov esi, ecx */
  esi = ecx;
/* db2e9b: je 0xdb2ed0 */
  if (zf) goto L_db2ed0;
L_db2e9d: /* db2e9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db2ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2ea1: push 0xd81910 */
  { uint32_t v = 0xd81910u; esp -= 4; W32(esp, v); }
/* db2ea6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db2ea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2eaa: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* db2eaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2eb0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb2eb5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db2eb5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2eb8: je 0xdb2ec8 */
  if (zf) goto L_db2ec8;
L_db2eba: /* db2eba: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db2ec0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db2ec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2ec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db2ec5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2ec8: /* db2ec8: mov eax, edi */
  eax = edi;
/* db2eca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db2ecb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2ecc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2ecd: ret 4 */
  esp += 8; SPILL(); return;
L_db2ed0: /* db2ed0: mov ecx, esi */
  ecx = esi;
/* db2ed2: call 0xd81910 */
  esp -= 4; W32(esp, 0xdb2ed7u); SPILL(); f_d81910(); if (g_unwind) return; RELOAD();
/* db2ed7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db2eda: je 0xdb2ee9 */
  if (zf) goto L_db2ee9;
L_db2edc: /* db2edc: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db2ee1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db2ee3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db2ee5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2ee6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb2ee9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db2ee9: /* db2ee9: mov eax, esi */
  eax = esi;
/* db2eeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2eec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db2eed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db2f10(void) {
  LOAD_REGS();
L_db2f10: /* db2f10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2f12: push 0xdbb198 */
  { uint32_t v = 0xdbb198u; esp -= 4; W32(esp, v); }
/* db2f17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db2f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2f1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db2f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2f26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2f27: mov esi, ecx */
  esi = ecx;
/* db2f29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db2f2d: mov dword ptr [esi], 0xdc6188 */
  W32((uint32_t)(esi), 0xdc6188u);
/* db2f33: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db2f3b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb2f40u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db2f40: mov ecx, esi */
  ecx = esi;
/* db2f42: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db2f4a: call 0xd81910 */
  esp -= 4; W32(esp, 0xdb2f4fu); SPILL(); f_d81910(); if (g_unwind) return; RELOAD();
/* db2f4f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db2f53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2f54: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db2f5b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db2f5e: ret  */
  esp += 4; SPILL(); return;
}

void f_db2f80(void) {
  LOAD_REGS();
L_db2f80: /* db2f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2f81: mov esi, ecx */
  esi = ecx;
/* db2f83: call 0xd819b5 */
  esp -= 4; W32(esp, 0xdb2f88u); SPILL(); f_d819b5(); if (g_unwind) return; RELOAD();
/* db2f88: mov dword ptr [esi], 0xdc6188 */
  W32((uint32_t)(esi), 0xdc6188u);
/* db2f8e: mov eax, esi */
  eax = esi;
/* db2f90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db2f91: ret  */
  esp += 4; SPILL(); return;
}

void f_db2fb0(void) {
  LOAD_REGS();
L_db2fb0: /* db2fb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db2fb2: push 0xdbb1b8 */
  { uint32_t v = 0xdbb1b8u; esp -= 4; W32(esp, v); }
/* db2fb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db2fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2fbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db2fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2fc6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* db2fca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db2fcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db2fcc: mov esi, ecx */
  esi = ecx;
/* db2fce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* db2fd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db2fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db2fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db2fd6: mov ecx, esi */
  ecx = esi;
/* db2fd8: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* db2fdc: call 0xd813a7 */
  esp -= 4; W32(esp, 0xdb2fe1u); SPILL(); f_d813a7(); if (g_unwind) return; RELOAD();
/* db2fe1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* db2fe4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db2fe6: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* db2fec: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* db2ff4: mov dword ptr [esi], 0xdc6188 */
  W32((uint32_t)(esi), 0xdc6188u);
/* db2ffa: jne 0xdb3010 */
  if (!zf) goto L_db3010;
L_db2ffc: /* db2ffc: push 0x726 */
  { uint32_t v = 0x726u; esp -= 4; W32(esp, v); }
/* db3001: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* db3006: push 0xde1ec4 */
  { uint32_t v = 0xde1ec4u; esp -= 4; W32(esp, v); }
/* db300b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb300du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db300d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_db3010: /* db3010: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* db3016: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3017: mov edi, dword ptr [0xde8ec8] */
  edi = R32((uint32_t)(0xde8ec8u));
/* db301d: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* db3022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db3024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db3026: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db3028: push 0x6978 */
  { uint32_t v = 0x6978u; esp -= 4; W32(esp, v); }
/* db302d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db302e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdb3030u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db3030: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db3032: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* db3038: jne 0xdb304e */
  if (!zf) goto L_db304e;
L_db303a: /* db303a: push 0x727 */
  { uint32_t v = 0x727u; esp -= 4; W32(esp, v); }
/* db303f: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* db3044: push 0xde4d28 */
  { uint32_t v = 0xde4d28u; esp -= 4; W32(esp, v); }
/* db3049: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb304bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db304b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_db304e: /* db304e: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* db3053: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* db3058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db305a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db305c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db305e: push 0x6979 */
  { uint32_t v = 0x6979u; esp -= 4; W32(esp, v); }
/* db3063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3064: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdb3066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db3066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db3068: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* db306e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db306f: jne 0xdb3085 */
  if (!zf) goto L_db3085;
L_db3071: /* db3071: push 0x728 */
  { uint32_t v = 0x728u; esp -= 4; W32(esp, v); }
/* db3076: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* db307b: push 0xde4d20 */
  { uint32_t v = 0xde4d20u; esp -= 4; W32(esp, v); }
/* db3080: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb3082u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db3082: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_db3085: /* db3085: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db3089: mov dword ptr [esi + 0x94], 0 */
  W32((uint32_t)(esi + 0x94u), 0x0u);
/* db3093: mov eax, esi */
  eax = esi;
/* db3095: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3096: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db3097: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db309e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db30a1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db30f0(void) {
  LOAD_REGS();
L_db30f0: /* db30f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db30f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db30f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db30f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db30f7: mov esi, ecx */
  esi = ecx;
/* db30f9: call 0xd822d4 */
  esp -= 4; W32(esp, 0xdb30feu); SPILL(); f_d822d4(); if (g_unwind) return; RELOAD();
/* db30fe: mov dword ptr [esi], 0xdc6188 */
  W32((uint32_t)(esi), 0xdc6188u);
/* db3104: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* db310a: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* db3110: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* db3116: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* db311c: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* db3122: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3123: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* db3129: mov eax, esi */
  eax = esi;
/* db312b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db312c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3140(void) {
  LOAD_REGS();
L_db3140: /* db3140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3141: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3142: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3146: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3147: mov esi, ecx */
  esi = ecx;
/* db3149: call 0xd8167c */
  esp -= 4; W32(esp, 0xdb314eu); SPILL(); f_d8167c(); if (g_unwind) return; RELOAD();
/* db314e: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* db3154: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* db315a: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* db3160: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* db3166: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* db316c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db316d: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* db3173: mov eax, esi */
  eax = esi;
/* db3175: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3176: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3190(void) {
  LOAD_REGS();
L_db3190: /* db3190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3191: mov esi, ecx */
  esi = ecx;
/* db3193: call 0xd81730 */
  esp -= 4; W32(esp, 0xdb3198u); SPILL(); f_d81730(); if (g_unwind) return; RELOAD();
/* db3198: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db319d: je 0xdb31ac */
  if (zf) goto L_db31ac;
L_db319f: /* db319f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db31a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db31a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db31a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db31a9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb31acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db31ac: /* db31ac: mov eax, esi */
  eax = esi;
/* db31ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db31af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db31d0(void) {
  LOAD_REGS();
L_db31d0: /* db31d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db31d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db31d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db31d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db31d9: mov esi, ecx */
  esi = ecx;
/* db31db: je 0xdb3210 */
  if (zf) goto L_db3210;
L_db31dd: /* db31dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db31e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db31e1: push 0xd81730 */
  { uint32_t v = 0xd81730u; esp -= 4; W32(esp, v); }
/* db31e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db31e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db31ea: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* db31ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db31f0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb31f5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db31f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db31f8: je 0xdb3208 */
  if (zf) goto L_db3208;
L_db31fa: /* db31fa: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db3200: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db3202: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3204: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3205: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3208: /* db3208: mov eax, edi */
  eax = edi;
/* db320a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db320b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db320c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db320d: ret 4 */
  esp += 8; SPILL(); return;
L_db3210: /* db3210: mov ecx, esi */
  ecx = esi;
/* db3212: call 0xd81730 */
  esp -= 4; W32(esp, 0xdb3217u); SPILL(); f_d81730(); if (g_unwind) return; RELOAD();
/* db3217: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db321a: je 0xdb3229 */
  if (zf) goto L_db3229;
L_db321c: /* db321c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3221: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3223: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3225: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3226: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3229u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3229: /* db3229: mov eax, esi */
  eax = esi;
/* db322b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db322c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db322d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3250(void) {
  LOAD_REGS();
L_db3250: /* db3250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3252: push 0xdbb1d8 */
  { uint32_t v = 0xdbb1d8u; esp -= 4; W32(esp, v); }
/* db3257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db325d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db325e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3267: mov esi, ecx */
  esi = ecx;
/* db3269: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db326d: mov dword ptr [esi], 0xdc62a0 */
  W32((uint32_t)(esi), 0xdc62a0u);
/* db3273: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db327b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb3280u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db3280: mov ecx, esi */
  ecx = esi;
/* db3282: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db328a: call 0xd81910 */
  esp -= 4; W32(esp, 0xdb328fu); SPILL(); f_d81910(); if (g_unwind) return; RELOAD();
/* db328f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db3293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3294: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db329b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db329e: ret  */
  esp += 4; SPILL(); return;
}

void f_db32c0(void) {
  LOAD_REGS();
L_db32c0: /* db32c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db32c1: mov esi, ecx */
  esi = ecx;
/* db32c3: call 0xd819b5 */
  esp -= 4; W32(esp, 0xdb32c8u); SPILL(); f_d819b5(); if (g_unwind) return; RELOAD();
/* db32c8: mov dword ptr [esi], 0xdc62a0 */
  W32((uint32_t)(esi), 0xdc62a0u);
/* db32ce: mov eax, esi */
  eax = esi;
/* db32d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db32d1: ret  */
  esp += 4; SPILL(); return;
}

void f_db32f0(void) {
  LOAD_REGS();
L_db32f0: /* db32f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db32f2: push 0xdbb1f8 */
  { uint32_t v = 0xdbb1f8u; esp -= 4; W32(esp, v); }
/* db32f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db32fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db32fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3306: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* db330a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db330b: mov esi, ecx */
  esi = ecx;
/* db330d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db3311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db3313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3314: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3315: mov ecx, esi */
  ecx = esi;
/* db3317: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* db331b: call 0xd813a7 */
  esp -= 4; W32(esp, 0xdb3320u); SPILL(); f_d813a7(); if (g_unwind) return; RELOAD();
/* db3320: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* db3323: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db3325: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db332d: mov dword ptr [esi], 0xdc62a0 */
  W32((uint32_t)(esi), 0xdc62a0u);
/* db3333: jne 0xdb334d */
  if (!zf) goto L_db334d;
L_db3335: /* db3335: push 0x74e */
  { uint32_t v = 0x74eu; esp -= 4; W32(esp, v); }
/* db333a: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* db333f: push 0xde1ec4 */
  { uint32_t v = 0xde1ec4u; esp -= 4; W32(esp, v); }
/* db3344: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdb334au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* db334a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_db334d: /* db334d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db3351: mov eax, esi */
  eax = esi;
/* db3353: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3354: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db335b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db335e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db3390(void) {
  LOAD_REGS();
L_db3390: /* db3390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db3394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3396: mov esi, ecx */
  esi = ecx;
/* db3398: call 0xd822d4 */
  esp -= 4; W32(esp, 0xdb339du); SPILL(); f_d822d4(); if (g_unwind) return; RELOAD();
/* db339d: mov dword ptr [esi], 0xdc62a0 */
  W32((uint32_t)(esi), 0xdc62a0u);
/* db33a3: mov eax, esi */
  eax = esi;
/* db33a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db33a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db33c0(void) {
  LOAD_REGS();
L_db33c0: /* db33c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db33c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db33c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db33c6: mov esi, ecx */
  esi = ecx;
/* db33c8: call 0xd8167c */
  esp -= 4; W32(esp, 0xdb33cdu); SPILL(); f_d8167c(); if (g_unwind) return; RELOAD();
/* db33cd: mov eax, esi */
  eax = esi;
/* db33cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db33d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db33f0(void) {
  LOAD_REGS();
L_db33f0: /* db33f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db33f1: mov esi, ecx */
  esi = ecx;
/* db33f3: call 0xd816ef */
  esp -= 4; W32(esp, 0xdb33f8u); SPILL(); f_d816ef(); if (g_unwind) return; RELOAD();
/* db33f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db33fd: je 0xdb340c */
  if (zf) goto L_db340c;
L_db33ff: /* db33ff: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3404: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3406: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3408: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3409: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb340cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db340c: /* db340c: mov eax, esi */
  eax = esi;
/* db340e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db340f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3430(void) {
  LOAD_REGS();
L_db3430: /* db3430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db3431: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db3435: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3439: mov esi, ecx */
  esi = ecx;
/* db343b: je 0xdb3470 */
  if (zf) goto L_db3470;
L_db343d: /* db343d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db3440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3441: push 0xd816ef */
  { uint32_t v = 0xd816efu; esp -= 4; W32(esp, v); }
/* db3446: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db3449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db344a: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* db344f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3450: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb3455u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db3455: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3458: je 0xdb3468 */
  if (zf) goto L_db3468;
L_db345a: /* db345a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db3460: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db3462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3464: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3465: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3468u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3468: /* db3468: mov eax, edi */
  eax = edi;
/* db346a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db346b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db346c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db346d: ret 4 */
  esp += 8; SPILL(); return;
L_db3470: /* db3470: mov ecx, esi */
  ecx = esi;
/* db3472: call 0xd816ef */
  esp -= 4; W32(esp, 0xdb3477u); SPILL(); f_d816ef(); if (g_unwind) return; RELOAD();
/* db3477: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db347a: je 0xdb3489 */
  if (zf) goto L_db3489;
L_db347c: /* db347c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3481: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3483: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3485: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3486: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3489u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3489: /* db3489: mov eax, esi */
  eax = esi;
/* db348b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db348c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db348d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db34b0(void) {
  LOAD_REGS();
L_db34b0: /* db34b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db34b2: push 0xdbb218 */
  { uint32_t v = 0xdbb218u; esp -= 4; W32(esp, v); }
/* db34b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db34bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db34be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db34c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db34c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db34c7: mov esi, ecx */
  esi = ecx;
/* db34c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db34cd: mov dword ptr [esi], 0xdc63b8 */
  W32((uint32_t)(esi), 0xdc63b8u);
/* db34d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db34db: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb34e0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db34e0: mov ecx, esi */
  ecx = esi;
/* db34e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db34ea: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdb34efu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* db34ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db34f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db34f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db34fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db34fe: ret  */
  esp += 4; SPILL(); return;
}

void f_db3520(void) {
  LOAD_REGS();
L_db3520: /* db3520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3521: mov esi, ecx */
  esi = ecx;
/* db3523: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb3528u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db3528: mov dword ptr [esi], 0xdc63b8 */
  W32((uint32_t)(esi), 0xdc63b8u);
/* db352e: xor eax, eax */
  eax = 0;
/* db3530: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db3533: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db3536: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db353b: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db353e: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db3541: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db3544: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db3547: mov eax, esi */
  eax = esi;
/* db3549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db354a: ret  */
  esp += 4; SPILL(); return;
}

void f_db3560(void) {
  LOAD_REGS();
L_db3560: /* db3560: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* db3564: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3565: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3566: xor edi, edi */
  edi = 0;
/* db3568: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db356a: mov esi, ecx */
  esi = ecx;
/* db356c: jne 0xdb3573 */
  if (!zf) goto L_db3573;
L_db356e: /* db356e: mov eax, dword ptr [0xde5194] */
  eax = R32((uint32_t)(0xde5194u));
L_db3573: /* db3573: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db3577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3578: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db357c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db357d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db357e: mov ecx, esi */
  ecx = esi;
/* db3580: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb3585u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db3585: mov dword ptr [esi], 0xdc63b8 */
  W32((uint32_t)(esi), 0xdc63b8u);
/* db358b: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db3590: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db3593: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* db3596: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* db3599: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* db359c: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* db359f: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db35a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db35a3: mov eax, esi */
  eax = esi;
/* db35a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db35a6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db35d0(void) {
  LOAD_REGS();
L_db35d0: /* db35d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db35d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db35d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db35d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db35d7: mov esi, ecx */
  esi = ecx;
/* db35d9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb35deu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db35de: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db35e4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db35e7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db35ea: mov dword ptr [esi], 0xdc63b8 */
  W32((uint32_t)(esi), 0xdc63b8u);
/* db35f0: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db35f5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db35f8: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db35fb: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db35fe: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db3601: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db3604: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db3607: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db360a: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db360d: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db3610: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3611: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db3614: mov eax, esi */
  eax = esi;
/* db3616: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3617: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3640(void) {
  LOAD_REGS();
L_db3640: /* db3640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3641: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3642: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3647: mov esi, ecx */
  esi = ecx;
/* db3649: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb364eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db364e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db3651: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db3654: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db3657: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db365a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db365d: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db3660: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db3663: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db3666: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db3669: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db366a: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db366d: mov eax, esi */
  eax = esi;
/* db366f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3670: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3690(void) {
  LOAD_REGS();
L_db3690: /* db3690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3691: mov esi, ecx */
  esi = ecx;
/* db3693: call 0xd81d9d */
  esp -= 4; W32(esp, 0xdb3698u); SPILL(); f_d81d9d(); if (g_unwind) return; RELOAD();
/* db3698: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db369d: je 0xdb36ac */
  if (zf) goto L_db36ac;
L_db369f: /* db369f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db36a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db36a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db36a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db36a9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb36acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db36ac: /* db36ac: mov eax, esi */
  eax = esi;
/* db36ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db36af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db36d0(void) {
  LOAD_REGS();
L_db36d0: /* db36d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db36d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db36d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db36d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db36d9: mov esi, ecx */
  esi = ecx;
/* db36db: je 0xdb370d */
  if (zf) goto L_db370d;
L_db36dd: /* db36dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db36e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db36e1: push 0xd81d9d */
  { uint32_t v = 0xd81d9du; esp -= 4; W32(esp, v); }
/* db36e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db36e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db36ea: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* db36ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db36ed: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb36f2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db36f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db36f5: je 0xdb3705 */
  if (zf) goto L_db3705;
L_db36f7: /* db36f7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db36fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db36ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3701: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3702: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3705: /* db3705: mov eax, edi */
  eax = edi;
/* db3707: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3708: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3709: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db370a: ret 4 */
  esp += 8; SPILL(); return;
L_db370d: /* db370d: mov ecx, esi */
  ecx = esi;
/* db370f: call 0xd81d9d */
  esp -= 4; W32(esp, 0xdb3714u); SPILL(); f_d81d9d(); if (g_unwind) return; RELOAD();
/* db3714: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3717: je 0xdb3726 */
  if (zf) goto L_db3726;
L_db3719: /* db3719: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db371e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3720: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3722: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3723: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3726u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3726: /* db3726: mov eax, esi */
  eax = esi;
/* db3728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3729: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db372a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3750(void) {
  LOAD_REGS();
L_db3750: /* db3750: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3752: push 0xdbb238 */
  { uint32_t v = 0xdbb238u; esp -= 4; W32(esp, v); }
/* db3757: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db375d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db375e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3765: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db3768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db376a: mov esi, ecx */
  esi = ecx;
/* db376c: xor edi, edi */
  edi = 0;
/* db376e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db376f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db3773: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* db3777: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb377du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db377d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db3781: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db3784: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db3787: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db378a: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db378d: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db3793: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db3796: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db379a: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db37a0: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db37a3: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db37a6: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db37a9: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db37ac: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb37b2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db37b2: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db37b5: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* db37b9: mov dword ptr [esi + 0x3c], 0xdc198c */
  W32((uint32_t)(esi + 0x3cu), 0xdc198cu);
/* db37c0: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* db37c3: mov ecx, edi */
  ecx = edi;
/* db37c5: mov dword ptr [esi], 0xdc64e8 */
  W32((uint32_t)(esi), 0xdc64e8u);
/* db37cb: mov dword ptr [esi + 0x3c], 0xdc64d0 */
  W32((uint32_t)(esi + 0x3cu), 0xdc64d0u);
/* db37d2: call 0xd819b5 */
  esp -= 4; W32(esp, 0xdb37d7u); SPILL(); f_d819b5(); if (g_unwind) return; RELOAD();
/* db37d7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db37db: mov dword ptr [edi], 0xdc62a0 */
  W32((uint32_t)(edi), 0xdc62a0u);
/* db37e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db37e2: mov eax, esi */
  eax = esi;
/* db37e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db37e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db37ec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db37ef: ret  */
  esp += 4; SPILL(); return;
}

void f_db3820(void) {
  LOAD_REGS();
L_db3820: /* db3820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3822: push 0xdbb258 */
  { uint32_t v = 0xdbb258u; esp -= 4; W32(esp, v); }
/* db3827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db382d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db382e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3836: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db383a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db383b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db383c: mov esi, ecx */
  esi = ecx;
/* db383e: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* db3841: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* db3845: xor ebx, ebx */
  ebx = 0;
/* db3847: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* db384a: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db384d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db384e: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db3851: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db3855: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db385b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* db385e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db3861: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* db3865: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db386b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* db386e: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* db3871: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* db3874: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb387au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db387a: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* db387d: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* db3880: mov dword ptr [edi], 0xdc198c */
  W32((uint32_t)(edi), 0xdc198cu);
/* db3886: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db3887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3888: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* db388b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* db388f: mov dword ptr [esi], 0xdc64e8 */
  W32((uint32_t)(esi), 0xdc64e8u);
/* db3895: mov dword ptr [edi], 0xdc64d0 */
  W32((uint32_t)(edi), 0xdc64d0u);
/* db389b: mov dword ptr [esi + 0x40], 1 */
  W32((uint32_t)(esi + 0x40u), 0x1u);
/* db38a2: call 0xd81596 */
  esp -= 4; W32(esp, 0xdb38a7u); SPILL(); f_d81596(); if (g_unwind) return; RELOAD();
/* db38a7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db38ab: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* db38ae: mov dword ptr [esi + 0xd0], ebx */
  W32((uint32_t)(esi + 0xd0u), ebx);
/* db38b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db38b5: mov eax, esi */
  eax = esi;
/* db38b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db38b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db38b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db38c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db38c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db3900(void) {
  LOAD_REGS();
L_db3900: /* db3900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3902: push 0xdbb278 */
  { uint32_t v = 0xdbb278u; esp -= 4; W32(esp, v); }
/* db3907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db390d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db390e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3917: mov esi, ecx */
  esi = ecx;
/* db3919: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db391d: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* db3920: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db3928: call 0xd816ef */
  esp -= 4; W32(esp, 0xdb392du); SPILL(); f_d816ef(); if (g_unwind) return; RELOAD();
/* db392d: mov ecx, esi */
  ecx = esi;
/* db392f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db3937: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb393cu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db393c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db3940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3941: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db3948: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db394b: ret  */
  esp += 4; SPILL(); return;
}

void f_db3970(void) {
  LOAD_REGS();
L_db3970: /* db3970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3972: push 0xdbb298 */
  { uint32_t v = 0xdbb298u; esp -= 4; W32(esp, v); }
/* db3977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db397d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db397e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db3987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3988: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3989: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* db398d: mov esi, ecx */
  esi = ecx;
/* db398f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3990: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* db3994: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb3999u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db3999: mov dword ptr [esi + 0x3c], 0xdc198c */
  W32((uint32_t)(esi + 0x3cu), 0xdc198cu);
/* db39a0: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* db39a3: mov dword ptr [esi], 0xdc64e8 */
  W32((uint32_t)(esi), 0xdc64e8u);
/* db39a9: mov dword ptr [esi + 0x3c], 0xdc64d0 */
  W32((uint32_t)(esi + 0x3cu), 0xdc64d0u);
/* db39b0: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* db39b3: lea ebx, [esi + 0x44] */
  ebx = (uint32_t)(esi + 0x44u);
/* db39b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db39b7: mov ecx, ebx */
  ecx = ebx;
/* db39b9: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* db39c1: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db39c4: call 0xd822d4 */
  esp -= 4; W32(esp, 0xdb39c9u); SPILL(); f_d822d4(); if (g_unwind) return; RELOAD();
/* db39c9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db39cd: mov dword ptr [ebx], 0xdc62a0 */
  W32((uint32_t)(ebx), 0xdc62a0u);
/* db39d3: mov edx, dword ptr [edi + 0xd0] */
  edx = R32((uint32_t)(edi + 0xd0u));
/* db39d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db39da: mov dword ptr [esi + 0xd0], edx */
  W32((uint32_t)(esi + 0xd0u), edx);
/* db39e0: mov eax, esi */
  eax = esi;
/* db39e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db39e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db39e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db39eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db39ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3a30(void) {
  LOAD_REGS();
L_db3a30: /* db3a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3a31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3a32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3a36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3a37: mov esi, ecx */
  esi = ecx;
/* db3a39: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb3a3eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db3a3e: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* db3a41: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* db3a44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3a45: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* db3a48: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db3a4b: call 0xd8167c */
  esp -= 4; W32(esp, 0xdb3a50u); SPILL(); f_d8167c(); if (g_unwind) return; RELOAD();
/* db3a50: mov edx, dword ptr [edi + 0xd0] */
  edx = R32((uint32_t)(edi + 0xd0u));
/* db3a56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3a57: mov dword ptr [esi + 0xd0], edx */
  W32((uint32_t)(esi + 0xd0u), edx);
/* db3a5d: mov eax, esi */
  eax = esi;
/* db3a5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3a60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3a80(void) {
  LOAD_REGS();
L_db3a80: /* db3a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3a81: mov esi, ecx */
  esi = ecx;
/* db3a83: call 0xd81c12 */
  esp -= 4; W32(esp, 0xdb3a88u); SPILL(); f_d81c12(); if (g_unwind) return; RELOAD();
/* db3a88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3a8d: je 0xdb3a9c */
  if (zf) goto L_db3a9c;
L_db3a8f: /* db3a8f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3a94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3a96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3a98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3a99: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3a9c: /* db3a9c: mov eax, esi */
  eax = esi;
/* db3a9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3a9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3ac0(void) {
  LOAD_REGS();
L_db3ac0: /* db3ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db3ac1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db3ac5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3ac9: mov esi, ecx */
  esi = ecx;
/* db3acb: je 0xdb3b00 */
  if (zf) goto L_db3b00;
L_db3acd: /* db3acd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db3ad0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3ad1: push 0xd81c12 */
  { uint32_t v = 0xd81c12u; esp -= 4; W32(esp, v); }
/* db3ad6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db3ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3ada: push 0xd4 */
  { uint32_t v = 0xd4u; esp -= 4; W32(esp, v); }
/* db3adf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3ae0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb3ae5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db3ae5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3ae8: je 0xdb3af8 */
  if (zf) goto L_db3af8;
L_db3aea: /* db3aea: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db3af0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db3af2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3af4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3af5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3af8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3af8: /* db3af8: mov eax, edi */
  eax = edi;
/* db3afa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3afb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3afc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db3afd: ret 4 */
  esp += 8; SPILL(); return;
L_db3b00: /* db3b00: mov ecx, esi */
  ecx = esi;
/* db3b02: call 0xd81c12 */
  esp -= 4; W32(esp, 0xdb3b07u); SPILL(); f_d81c12(); if (g_unwind) return; RELOAD();
/* db3b07: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3b0a: je 0xdb3b19 */
  if (zf) goto L_db3b19;
L_db3b0c: /* db3b0c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3b11: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3b13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3b15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3b16: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3b19: /* db3b19: mov eax, esi */
  eax = esi;
/* db3b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3b1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db3b1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3b40(void) {
  LOAD_REGS();
L_db3b40: /* db3b40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3b43: mov esi, ecx */
  esi = ecx;
/* db3b45: xor edi, edi */
  edi = 0;
/* db3b47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3b48: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db3b4c: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb3b52u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db3b52: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db3b56: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db3b59: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db3b5c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db3b5f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db3b62: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db3b68: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db3b6b: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db3b6f: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db3b75: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db3b78: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db3b7b: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db3b7e: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db3b81: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb3b87u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db3b87: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db3b8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3b8b: mov dword ptr [esi], 0xdc1f80 */
  W32((uint32_t)(esi), 0xdc1f80u);
/* db3b91: mov eax, esi */
  eax = esi;
/* db3b93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3b94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db3b95: ret  */
  esp += 4; SPILL(); return;
}

void f_db3bc0(void) {
  LOAD_REGS();
L_db3bc0: /* db3bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3bc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3bc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3bc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3bc7: mov esi, ecx */
  esi = ecx;
/* db3bc9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb3bceu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db3bce: mov dword ptr [esi], 0xdc1f80 */
  W32((uint32_t)(esi), 0xdc1f80u);
/* db3bd4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db3bd7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db3bda: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db3bdd: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db3be0: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db3be3: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db3be6: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db3be9: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db3bec: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* db3bef: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db3bf2: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* db3bf5: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* db3bf8: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* db3bfb: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db3bfe: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* db3c01: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db3c04: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db3c07: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db3c0a: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db3c0d: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db3c10: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* db3c13: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* db3c15: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* db3c18: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* db3c1a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* db3c1d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* db3c20: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* db3c23: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* db3c26: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* db3c29: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* db3c2c: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* db3c2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3c30: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* db3c33: mov eax, esi */
  eax = esi;
/* db3c35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3c36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3c60(void) {
  LOAD_REGS();
L_db3c60: /* db3c60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3c61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3c62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3c66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3c67: mov esi, ecx */
  esi = ecx;
/* db3c69: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb3c6eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db3c6e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db3c71: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db3c74: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db3c77: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db3c7a: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db3c7d: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db3c80: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db3c83: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db3c86: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* db3c89: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db3c8c: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* db3c8f: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* db3c92: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* db3c95: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db3c98: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* db3c9b: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db3c9e: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db3ca1: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db3ca4: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db3ca7: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db3caa: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* db3cad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* db3caf: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* db3cb2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* db3cb4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* db3cb7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* db3cba: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* db3cbd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* db3cc0: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* db3cc3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* db3cc6: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* db3cc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3cca: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* db3ccd: mov eax, esi */
  eax = esi;
/* db3ccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3cd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3d00(void) {
  LOAD_REGS();
L_db3d00: /* db3d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3d01: mov esi, ecx */
  esi = ecx;
/* db3d03: call 0xd81550 */
  esp -= 4; W32(esp, 0xdb3d08u); SPILL(); f_d81550(); if (g_unwind) return; RELOAD();
/* db3d08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3d0d: je 0xdb3d1c */
  if (zf) goto L_db3d1c;
L_db3d0f: /* db3d0f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3d14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3d16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3d18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3d19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3d1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3d1c: /* db3d1c: mov eax, esi */
  eax = esi;
/* db3d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3d1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3d40(void) {
  LOAD_REGS();
L_db3d40: /* db3d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3d42: push 0xdbb2bb */
  { uint32_t v = 0xdbb2bbu; esp -= 4; W32(esp, v); }
/* db3d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db3d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3d57: mov esi, ecx */
  esi = ecx;
/* db3d59: mov dword ptr [esi + 4], 0xdc198c */
  W32((uint32_t)(esi + 0x4u), 0xdc198cu);
/* db3d60: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* db3d63: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db3d67: mov dword ptr [esi], 0xdc3028 */
  W32((uint32_t)(esi), 0xdc3028u);
/* db3d6d: mov dword ptr [esi + 4], 0xdc3010 */
  W32((uint32_t)(esi + 0x4u), 0xdc3010u);
/* db3d74: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb3d7au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db3d7a: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* db3d7d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db3d85: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb3d8bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db3d8b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db3d8f: mov eax, esi */
  eax = esi;
/* db3d91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3d92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db3d99: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db3d9c: ret  */
  esp += 4; SPILL(); return;
}

void f_db3dc0(void) {
  LOAD_REGS();
L_db3dc0: /* db3dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3dc2: push 0xdbb2db */
  { uint32_t v = 0xdbb2dbu; esp -= 4; W32(esp, v); }
/* db3dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db3dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3dd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3dd7: mov esi, ecx */
  esi = ecx;
/* db3dd9: mov dword ptr [esi + 4], 0xdc198c */
  W32((uint32_t)(esi + 0x4u), 0xdc198cu);
/* db3de0: mov dword ptr [esi], 0xdc3028 */
  W32((uint32_t)(esi), 0xdc3028u);
/* db3de6: mov dword ptr [esi + 4], 0xdc3010 */
  W32((uint32_t)(esi + 0x4u), 0xdc3010u);
/* db3ded: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3dee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db3df2: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* db3df5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db3df8: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* db3dfb: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* db3dfe: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* db3e01: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* db3e04: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* db3e07: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* db3e0a: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* db3e0d: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* db3e10: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* db3e13: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* db3e16: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* db3e19: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* db3e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3e1d: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* db3e20: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db3e24: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* db3e27: call 0xd82301 */
  esp -= 4; W32(esp, 0xdb3e2cu); SPILL(); f_d82301(); if (g_unwind) return; RELOAD();
/* db3e2c: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db3e2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3e30: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* db3e33: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db3e3b: call 0xd82270 */
  esp -= 4; W32(esp, 0xdb3e40u); SPILL(); f_d82270(); if (g_unwind) return; RELOAD();
/* db3e40: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db3e44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3e45: mov eax, esi */
  eax = esi;
/* db3e47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3e48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db3e4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db3e52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3e90(void) {
  LOAD_REGS();
L_db3e90: /* db3e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3e91: mov esi, ecx */
  esi = ecx;
/* db3e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3e94: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db3e98: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* db3e9b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db3e9e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* db3ea1: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* db3ea4: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* db3ea7: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* db3eaa: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* db3ead: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* db3eb0: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* db3eb3: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* db3eb6: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* db3eb9: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* db3ebc: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* db3ebf: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* db3ec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3ec3: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* db3ec6: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* db3ec9: call 0xd81654 */
  esp -= 4; W32(esp, 0xdb3eceu); SPILL(); f_d81654(); if (g_unwind) return; RELOAD();
/* db3ece: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db3ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3ed2: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* db3ed5: call 0xd8252c */
  esp -= 4; W32(esp, 0xdb3edau); SPILL(); f_d8252c(); if (g_unwind) return; RELOAD();
/* db3eda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3edb: mov eax, esi */
  eax = esi;
/* db3edd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3ede: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3f10(void) {
  LOAD_REGS();
L_db3f10: /* db3f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3f11: mov esi, ecx */
  esi = ecx;
/* db3f13: call 0xd81a0a */
  esp -= 4; W32(esp, 0xdb3f18u); SPILL(); f_d81a0a(); if (g_unwind) return; RELOAD();
/* db3f18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db3f1d: je 0xdb3f2c */
  if (zf) goto L_db3f2c;
L_db3f1f: /* db3f1f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db3f24: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db3f26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db3f28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3f29: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb3f2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db3f2c: /* db3f2c: mov eax, esi */
  eax = esi;
/* db3f2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3f2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db3f50(void) {
  LOAD_REGS();
L_db3f50: /* db3f50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db3f52: push 0xdbb2f8 */
  { uint32_t v = 0xdbb2f8u; esp -= 4; W32(esp, v); }
/* db3f57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db3f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db3f5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db3f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db3f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db3f67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3f68: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db3f6c: mov esi, ecx */
  esi = ecx;
/* db3f6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3f6f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db3f73: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb3f78u); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db3f78: mov dword ptr [esi], 0xdc3170 */
  W32((uint32_t)(esi), 0xdc3170u);
/* db3f7e: mov dword ptr [esi + 4], 0xdc315c */
  W32((uint32_t)(esi + 0x4u), 0xdc315cu);
/* db3f85: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db3f88: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db3f8b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db3f8e: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db3f91: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db3f94: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db3f97: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db3f9a: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db3f9d: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* db3fa0: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db3fa3: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* db3fa6: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* db3fa9: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* db3fac: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db3faf: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* db3fb2: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db3fb5: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db3fb8: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db3fbb: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db3fbe: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db3fc1: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* db3fc4: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* db3fc7: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* db3fca: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* db3fcd: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* db3fd0: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db3fd3: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* db3fd6: add edi, 0x74 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db3fd9: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* db3fdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db3fdd: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* db3fe0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db3fe8: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb3feeu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db3fee: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db3ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db3ff3: mov eax, esi */
  eax = esi;
/* db3ff5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db3ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db3ffd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4000: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4040(void) {
  LOAD_REGS();
L_db4040: /* db4040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4042: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db4046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4047: mov esi, ecx */
  esi = ecx;
/* db4049: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb404eu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db404e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db4051: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db4054: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db4057: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db405a: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db405d: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db4060: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db4063: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db4066: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* db4069: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db406c: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* db406f: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* db4072: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* db4075: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db4078: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* db407b: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db407e: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db4081: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db4084: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db4087: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db408a: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* db408d: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* db4090: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* db4093: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* db4096: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* db4099: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db409c: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* db409f: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* db40a2: add edi, 0x74 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db40a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db40a6: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* db40a9: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb40afu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db40af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db40b0: mov eax, esi */
  eax = esi;
/* db40b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db40b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db40e0(void) {
  LOAD_REGS();
L_db40e0: /* db40e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db40e1: mov esi, ecx */
  esi = ecx;
/* db40e3: call 0xd813a2 */
  esp -= 4; W32(esp, 0xdb40e8u); SPILL(); f_d813a2(); if (g_unwind) return; RELOAD();
/* db40e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db40ed: je 0xdb40fc */
  if (zf) goto L_db40fc;
L_db40ef: /* db40ef: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db40f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db40f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db40f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db40f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb40fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db40fc: /* db40fc: mov eax, esi */
  eax = esi;
/* db40fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db40ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4120(void) {
  LOAD_REGS();
L_db4120: /* db4120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4121: mov esi, ecx */
  esi = ecx;
/* db4123: call 0xd81df2 */
  esp -= 4; W32(esp, 0xdb4128u); SPILL(); f_d81df2(); if (g_unwind) return; RELOAD();
/* db4128: mov dword ptr [esi], 0xdc3248 */
  W32((uint32_t)(esi), 0xdc3248u);
/* db412e: mov dword ptr [esi + 4], 0xdc3234 */
  W32((uint32_t)(esi + 0x4u), 0xdc3234u);
/* db4135: mov eax, esi */
  eax = esi;
/* db4137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4138: ret  */
  esp += 4; SPILL(); return;
}

void f_db4150(void) {
  LOAD_REGS();
L_db4150: /* db4150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db4154: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4156: mov esi, ecx */
  esi = ecx;
/* db4158: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb415du); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db415d: mov dword ptr [esi], 0xdc3248 */
  W32((uint32_t)(esi), 0xdc3248u);
/* db4163: mov dword ptr [esi + 4], 0xdc3234 */
  W32((uint32_t)(esi + 0x4u), 0xdc3234u);
/* db416a: mov eax, esi */
  eax = esi;
/* db416c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db416d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4180(void) {
  LOAD_REGS();
L_db4180: /* db4180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db4184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4186: mov esi, ecx */
  esi = ecx;
/* db4188: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb418du); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db418d: mov eax, esi */
  eax = esi;
/* db418f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4190: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db41b0(void) {
  LOAD_REGS();
L_db41b0: /* db41b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db41b1: mov esi, ecx */
  esi = ecx;
/* db41b3: call 0xd81758 */
  esp -= 4; W32(esp, 0xdb41b8u); SPILL(); f_d81758(); if (g_unwind) return; RELOAD();
/* db41b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db41bd: je 0xdb41cc */
  if (zf) goto L_db41cc;
L_db41bf: /* db41bf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db41c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db41c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db41c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db41c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb41ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db41cc: /* db41cc: mov eax, esi */
  eax = esi;
/* db41ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db41cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db41f0(void) {
  LOAD_REGS();
L_db41f0: /* db41f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db41f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db41f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db41f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db41f7: mov esi, ecx */
  esi = ecx;
/* db41f9: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb41feu); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db41fe: mov dword ptr [esi], 0xdc3318 */
  W32((uint32_t)(esi), 0xdc3318u);
/* db4204: mov dword ptr [esi + 4], 0xdc3300 */
  W32((uint32_t)(esi + 0x4u), 0xdc3300u);
/* db420b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db420e: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db4211: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db4214: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4215: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db4218: mov eax, esi */
  eax = esi;
/* db421a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db421b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4230(void) {
  LOAD_REGS();
L_db4230: /* db4230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4231: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4232: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db4236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4237: mov esi, ecx */
  esi = ecx;
/* db4239: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb423eu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db423e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db4241: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db4244: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db4247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4248: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db424b: mov eax, esi */
  eax = esi;
/* db424d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db424e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4270(void) {
  LOAD_REGS();
L_db4270: /* db4270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4271: mov esi, ecx */
  esi = ecx;
/* db4273: call 0xd818fc */
  esp -= 4; W32(esp, 0xdb4278u); SPILL(); f_d818fc(); if (g_unwind) return; RELOAD();
/* db4278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db427d: je 0xdb428c */
  if (zf) goto L_db428c;
L_db427f: /* db427f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db4284: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db4286: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4288: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4289: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb428cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db428c: /* db428c: mov eax, esi */
  eax = esi;
/* db428e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db428f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db42b0(void) {
  LOAD_REGS();
L_db42b0: /* db42b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db42b2: push 0xdbb318 */
  { uint32_t v = 0xdbb318u; esp -= 4; W32(esp, v); }
/* db42b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db42bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db42be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db42c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db42c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db42c7: mov esi, ecx */
  esi = ecx;
/* db42c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db42cd: call 0xd81df2 */
  esp -= 4; W32(esp, 0xdb42d2u); SPILL(); f_d81df2(); if (g_unwind) return; RELOAD();
/* db42d2: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db42d5: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db42dd: mov dword ptr [esi], 0xdc33e8 */
  W32((uint32_t)(esi), 0xdc33e8u);
/* db42e3: mov dword ptr [esi + 4], 0xdc33d0 */
  W32((uint32_t)(esi + 0x4u), 0xdc33d0u);
/* db42ea: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb42f0u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db42f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db42f4: mov eax, esi */
  eax = esi;
/* db42f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db42f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db42fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4301: ret  */
  esp += 4; SPILL(); return;
}

void f_db4330(void) {
  LOAD_REGS();
L_db4330: /* db4330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4332: push 0xdbb338 */
  { uint32_t v = 0xdbb338u; esp -= 4; W32(esp, v); }
/* db4337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db433d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db433e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4346: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4347: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4348: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db434c: mov esi, ecx */
  esi = ecx;
/* db434e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db434f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4353: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb4358u); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db4358: mov dword ptr [esi], 0xdc33e8 */
  W32((uint32_t)(esi), 0xdc33e8u);
/* db435e: mov dword ptr [esi + 4], 0xdc33d0 */
  W32((uint32_t)(esi + 0x4u), 0xdc33d0u);
/* db4365: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db4368: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db436b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db436e: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db4371: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db4374: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db4377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4378: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db437b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db4383: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db4386: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb438cu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db438c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db4390: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4391: mov eax, esi */
  eax = esi;
/* db4393: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4394: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db439b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db439e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db43d0(void) {
  LOAD_REGS();
L_db43d0: /* db43d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db43d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db43d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db43d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db43d7: mov esi, ecx */
  esi = ecx;
/* db43d9: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb43deu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db43de: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db43e1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db43e4: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db43e7: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db43ea: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db43ed: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db43f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db43f1: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db43f4: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db43f7: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb43fdu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db43fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db43fe: mov eax, esi */
  eax = esi;
/* db4400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4401: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4420(void) {
  LOAD_REGS();
L_db4420: /* db4420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4421: mov esi, ecx */
  esi = ecx;
/* db4423: call 0xd820c7 */
  esp -= 4; W32(esp, 0xdb4428u); SPILL(); f_d820c7(); if (g_unwind) return; RELOAD();
/* db4428: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db442d: je 0xdb443c */
  if (zf) goto L_db443c;
L_db442f: /* db442f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db4434: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db4436: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4439: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb443cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db443c: /* db443c: mov eax, esi */
  eax = esi;
/* db443e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db443f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4460(void) {
  LOAD_REGS();
L_db4460: /* db4460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4462: push 0xdbb36e */
  { uint32_t v = 0xdbb36eu; esp -= 4; W32(esp, v); }
/* db4467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db446d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db446e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4477: mov esi, ecx */
  esi = ecx;
/* db4479: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db447d: mov dword ptr [esi], 0xdc6630 */
  W32((uint32_t)(esi), 0xdc6630u);
/* db4483: mov dword ptr [esi + 0x3c], 0xdc661c */
  W32((uint32_t)(esi + 0x3cu), 0xdc661cu);
/* db448a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db4492: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb4497u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db4497: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* db449d: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db44a2: call 0xd82496 */
  esp -= 4; W32(esp, 0xdb44a7u); SPILL(); f_d82496(); if (g_unwind) return; RELOAD();
/* db44a7: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* db44aa: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* db44b2: call 0xd816ef */
  esp -= 4; W32(esp, 0xdb44b7u); SPILL(); f_d816ef(); if (g_unwind) return; RELOAD();
/* db44b7: mov ecx, esi */
  ecx = esi;
/* db44b9: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db44c1: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb44c6u); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db44c6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db44ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db44cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db44d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db44d5: ret  */
  esp += 4; SPILL(); return;
}

void f_db4500(void) {
  LOAD_REGS();
L_db4500: /* db4500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4502: push 0xdbb398 */
  { uint32_t v = 0xdbb398u; esp -= 4; W32(esp, v); }
/* db4507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db450d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db450e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4517: mov esi, ecx */
  esi = ecx;
/* db4519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db451d: call 0xd81811 */
  esp -= 4; W32(esp, 0xdb4522u); SPILL(); f_d81811(); if (g_unwind) return; RELOAD();
/* db4522: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* db4528: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db4530: mov dword ptr [esi], 0xdc6630 */
  W32((uint32_t)(esi), 0xdc6630u);
/* db4536: mov dword ptr [esi + 0x3c], 0xdc661c */
  W32((uint32_t)(esi + 0x3cu), 0xdc661cu);
/* db453d: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb4543u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db4543: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db4547: mov eax, esi */
  eax = esi;
/* db4549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db454a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4551: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4554: ret  */
  esp += 4; SPILL(); return;
}

void f_db4580(void) {
  LOAD_REGS();
L_db4580: /* db4580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db4581: mov ebp, esp */
  ebp = esp;
/* db4583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4585: push 0xdbb3d8 */
  { uint32_t v = 0xdbb3d8u; esp -= 4; W32(esp, v); }
/* db458a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4598: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db459b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* db459e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db459f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db45a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db45a1: mov esi, ecx */
  esi = ecx;
/* db45a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* db45a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* db45a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db45aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db45ab: mov ecx, esi */
  ecx = esi;
/* db45ad: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* db45b0: call 0xd827b6 */
  esp -= 4; W32(esp, 0xdb45b5u); SPILL(); f_d827b6(); if (g_unwind) return; RELOAD();
/* db45b5: xor edi, edi */
  edi = 0;
/* db45b7: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* db45bd: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* db45c0: mov dword ptr [esi], 0xdc6630 */
  W32((uint32_t)(esi), 0xdc6630u);
/* db45c6: mov dword ptr [esi + 0x3c], 0xdc661c */
  W32((uint32_t)(esi + 0x3cu), 0xdc661cu);
/* db45cd: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb45d3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db45d3: lea ebx, [esi + 0xf4] */
  ebx = (uint32_t)(esi + 0xf4u);
/* db45d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db45da: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* db45dd: mov dword ptr [esi + 0xf0], edi */
  W32((uint32_t)(esi + 0xf0u), edi);
/* db45e3: mov dword ptr [ebx], 0x80 */
  W32((uint32_t)(ebx), 0x80u);
/* db45e9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* db45ed: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb45f3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db45f3: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* db45f6: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* db45f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db45fa: mov ecx, edi */
  ecx = edi;
/* db45fc: call dword ptr [0xde8a04] */
  esp -= 4; W32(esp, 0xdb4602u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* db4602: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db4604: je 0xdb4669 */
  if (zf) goto L_db4669;
L_db4606: /* db4606: mov ecx, edi */
  ecx = edi;
/* db4608: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xdb460eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* db460e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db460f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* db4612: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xdb4618u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* db4618: push 0xde4d58 */
  { uint32_t v = 0xde4d58u; esp -= 4; W32(esp, v); }
/* db461d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db4620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4621: mov ecx, eax */
  ecx = eax;
/* db4623: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* db4627: call dword ptr [0xde8b60] */
  esp -= 4; W32(esp, 0xdb462du); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* db462d: mov ecx, eax */
  ecx = eax;
/* db462f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* db4633: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdb4639u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* db4639: mov edx, dword ptr [0xde89d8] */
  edx = R32((uint32_t)(0xde89d8u));
/* db463f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* db4641: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4643: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db4645: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db4646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4647: push 0xde4d30 */
  { uint32_t v = 0xde4d30u; esp -= 4; W32(esp, v); }
/* db464c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xdb464fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db464f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db4652: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* db4656: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb465cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db465c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* db465f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* db4663: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb4669u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_db4669: /* db4669: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* db466b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db466d: mov ecx, 0xde5720 */
  ecx = 0xde5720u;
/* db4672: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdb4678u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* db4678: mov ecx, dword ptr [0xde5720] */
  ecx = R32((uint32_t)(0xde5720u));
/* db467e: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* db4681: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* db4684: mov dword ptr [esi + 0x88], esi */
  W32((uint32_t)(esi + 0x88u), esi);
/* db468a: mov dword ptr [esi + 0x8c], 0xd828ab */
  W32((uint32_t)(esi + 0x8cu), 0xd828abu);
/* db4694: mov dword ptr [esi + 0x94], esi */
  W32((uint32_t)(esi + 0x94u), esi);
/* db469a: mov dword ptr [esi + 0x98], 0xd8155f */
  W32((uint32_t)(esi + 0x98u), 0xd8155fu);
/* db46a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db46a5: mov dword ptr [esi + 0xf8], 1 */
  W32((uint32_t)(esi + 0xf8u), 0x1u);
/* db46af: mov eax, esi */
  eax = esi;
/* db46b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db46b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db46b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db46ba: mov esp, ebp */
  esp = ebp;
/* db46bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db46bd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db46c0(void) {
  LOAD_REGS();
L_db46c0: /* db46c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* db46c3: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* db46c8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* db46cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db46cc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* db46cf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdb46d4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_db46d4(); return;
}

void f_db46d4(void) {
  LOAD_REGS();
L_db46d4: /* db46d4: push 0xdc676c */
  { uint32_t v = 0xdc676cu; esp -= 4; W32(esp, v); }
/* db46d9: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* db46de: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdb46e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* db46e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db46e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db46e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db46eb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdb46f0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_db46f0: guest_badaddr(0xdb46f0); return;
}

void f_db4760(void) {
  LOAD_REGS();
L_db4760: /* db4760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4762: push 0xdbb3f8 */
  { uint32_t v = 0xdbb3f8u; esp -= 4; W32(esp, v); }
/* db4767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db476d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db476e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4778: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db477c: mov esi, ecx */
  esi = ecx;
/* db477e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db477f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4783: call 0xd81686 */
  esp -= 4; W32(esp, 0xdb4788u); SPILL(); f_d81686(); if (g_unwind) return; RELOAD();
/* db4788: lea eax, [edi + 0xd4] */
  eax = (uint32_t)(edi + 0xd4u);
/* db478e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db478f: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* db4795: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db479d: mov dword ptr [esi], 0xdc6630 */
  W32((uint32_t)(esi), 0xdc6630u);
/* db47a3: mov dword ptr [esi + 0x3c], 0xdc661c */
  W32((uint32_t)(esi + 0x3cu), 0xdc661cu);
/* db47aa: call 0xd817fd */
  esp -= 4; W32(esp, 0xdb47afu); SPILL(); f_d817fd(); if (g_unwind) return; RELOAD();
/* db47af: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* db47b5: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* db47bb: mov edx, dword ptr [edi + 0xe4] */
  edx = R32((uint32_t)(edi + 0xe4u));
/* db47c1: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* db47c7: mov eax, dword ptr [edi + 0xe8] */
  eax = R32((uint32_t)(edi + 0xe8u));
/* db47cd: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* db47d3: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* db47d9: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* db47df: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* db47e5: mov dword ptr [esi + 0xf0], edx */
  W32((uint32_t)(esi + 0xf0u), edx);
/* db47eb: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* db47f1: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* db47f7: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* db47fd: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* db4803: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db4807: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4808: mov eax, esi */
  eax = esi;
/* db480a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db480b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4812: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4815: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4850(void) {
  LOAD_REGS();
L_db4850: /* db4850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4851: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4852: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db4856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4857: mov esi, ecx */
  esi = ecx;
/* db4859: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb485eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db485e: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* db4861: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* db4864: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4865: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* db4868: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db486b: call 0xd8167c */
  esp -= 4; W32(esp, 0xdb4870u); SPILL(); f_d8167c(); if (g_unwind) return; RELOAD();
/* db4870: mov edx, dword ptr [edi + 0xd0] */
  edx = R32((uint32_t)(edi + 0xd0u));
/* db4876: lea eax, [edi + 0xd4] */
  eax = (uint32_t)(edi + 0xd4u);
/* db487c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db487d: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* db4883: mov dword ptr [esi + 0xd0], edx */
  W32((uint32_t)(esi + 0xd0u), edx);
/* db4889: call 0xd81f3c */
  esp -= 4; W32(esp, 0xdb488eu); SPILL(); f_d81f3c(); if (g_unwind) return; RELOAD();
/* db488e: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* db4894: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* db489a: mov edx, dword ptr [edi + 0xe4] */
  edx = R32((uint32_t)(edi + 0xe4u));
/* db48a0: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* db48a6: mov eax, dword ptr [edi + 0xe8] */
  eax = R32((uint32_t)(edi + 0xe8u));
/* db48ac: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* db48b2: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* db48b8: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* db48be: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* db48c4: mov dword ptr [esi + 0xf0], edx */
  W32((uint32_t)(esi + 0xf0u), edx);
/* db48ca: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* db48d0: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* db48d6: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* db48dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db48dd: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* db48e3: mov eax, esi */
  eax = esi;
/* db48e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db48e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4920(void) {
  LOAD_REGS();
L_db4920: /* db4920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4921: mov esi, ecx */
  esi = ecx;
/* db4923: call 0xd81537 */
  esp -= 4; W32(esp, 0xdb4928u); SPILL(); f_d81537(); if (g_unwind) return; RELOAD();
/* db4928: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db492d: je 0xdb493c */
  if (zf) goto L_db493c;
L_db492f: /* db492f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db4934: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db4936: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4939: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb493cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db493c: /* db493c: mov eax, esi */
  eax = esi;
/* db493e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db493f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4960(void) {
  LOAD_REGS();
L_db4960: /* db4960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db4961: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db4965: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db4968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4969: mov esi, ecx */
  esi = ecx;
/* db496b: je 0xdb49a0 */
  if (zf) goto L_db49a0;
L_db496d: /* db496d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db4970: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4971: push 0xd81537 */
  { uint32_t v = 0xd81537u; esp -= 4; W32(esp, v); }
/* db4976: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db4979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db497a: push 0xfc */
  { uint32_t v = 0xfcu; esp -= 4; W32(esp, v); }
/* db497f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4980: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb4985u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db4985: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db4988: je 0xdb4998 */
  if (zf) goto L_db4998;
L_db498a: /* db498a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db4990: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db4992: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4994: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4995: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb4998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db4998: /* db4998: mov eax, edi */
  eax = edi;
/* db499a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db499b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db499c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db499d: ret 4 */
  esp += 8; SPILL(); return;
L_db49a0: /* db49a0: mov ecx, esi */
  ecx = esi;
/* db49a2: call 0xd81537 */
  esp -= 4; W32(esp, 0xdb49a7u); SPILL(); f_d81537(); if (g_unwind) return; RELOAD();
/* db49a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db49aa: je 0xdb49b9 */
  if (zf) goto L_db49b9;
L_db49ac: /* db49ac: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db49b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db49b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db49b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db49b6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb49b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db49b9: /* db49b9: mov eax, esi */
  eax = esi;
/* db49bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db49bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db49bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db49e0(void) {
  LOAD_REGS();
L_db49e0: /* db49e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db49e2: push 0xdbb418 */
  { uint32_t v = 0xdbb418u; esp -= 4; W32(esp, v); }
/* db49e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db49ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db49ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db49f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db49f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db49f7: mov esi, ecx */
  esi = ecx;
/* db49f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db49fd: call 0xd81df2 */
  esp -= 4; W32(esp, 0xdb4a02u); SPILL(); f_d81df2(); if (g_unwind) return; RELOAD();
/* db4a02: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db4a05: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db4a0d: mov dword ptr [esi], 0xdc34b8 */
  W32((uint32_t)(esi), 0xdc34b8u);
/* db4a13: mov dword ptr [esi + 4], 0xdc34a0 */
  W32((uint32_t)(esi + 0x4u), 0xdc34a0u);
/* db4a1a: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb4a20u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db4a20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db4a24: mov eax, esi */
  eax = esi;
/* db4a26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4a27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4a2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4a31: ret  */
  esp += 4; SPILL(); return;
}

void f_db4a60(void) {
  LOAD_REGS();
L_db4a60: /* db4a60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4a62: push 0xdbb438 */
  { uint32_t v = 0xdbb438u; esp -= 4; W32(esp, v); }
/* db4a67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4a6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4a75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4a77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4a78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db4a7c: mov esi, ecx */
  esi = ecx;
/* db4a7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4a7f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4a83: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb4a88u); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db4a88: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db4a8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4a8c: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db4a8f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db4a97: mov dword ptr [esi], 0xdc34b8 */
  W32((uint32_t)(esi), 0xdc34b8u);
/* db4a9d: mov dword ptr [esi + 4], 0xdc34a0 */
  W32((uint32_t)(esi + 0x4u), 0xdc34a0u);
/* db4aa4: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb4aaau); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db4aaa: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* db4aad: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* db4ab0: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* db4ab3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db4ab7: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* db4aba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4abb: mov eax, esi */
  eax = esi;
/* db4abd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4abe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4ac5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4ac8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4af0(void) {
  LOAD_REGS();
L_db4af0: /* db4af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4af1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4af2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db4af6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4af7: mov esi, ecx */
  esi = ecx;
/* db4af9: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb4afeu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db4afe: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db4b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4b02: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db4b05: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb4b0bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db4b0b: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* db4b0e: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* db4b11: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* db4b14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4b15: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* db4b18: mov eax, esi */
  eax = esi;
/* db4b1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4b1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4b30(void) {
  LOAD_REGS();
L_db4b30: /* db4b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4b31: mov esi, ecx */
  esi = ecx;
/* db4b33: call 0xd81da7 */
  esp -= 4; W32(esp, 0xdb4b38u); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* db4b38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db4b3d: je 0xdb4b4c */
  if (zf) goto L_db4b4c;
L_db4b3f: /* db4b3f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db4b44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db4b46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4b48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4b49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb4b4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db4b4c: /* db4b4c: mov eax, esi */
  eax = esi;
/* db4b4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4b4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4b70(void) {
  LOAD_REGS();
L_db4b70: /* db4b70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4b72: push 0xdbb458 */
  { uint32_t v = 0xdbb458u; esp -= 4; W32(esp, v); }
/* db4b77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4b7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4b86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4b87: mov esi, ecx */
  esi = ecx;
/* db4b89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db4b8d: call 0xd813e3 */
  esp -= 4; W32(esp, 0xdb4b92u); SPILL(); f_d813e3(); if (g_unwind) return; RELOAD();
/* db4b92: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* db4b95: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db4b9d: mov dword ptr [esi], 0xdc3588 */
  W32((uint32_t)(esi), 0xdc3588u);
/* db4ba3: mov dword ptr [esi + 4], 0xdc3570 */
  W32((uint32_t)(esi + 0x4u), 0xdc3570u);
/* db4baa: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb4bb0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db4bb0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db4bb4: mov eax, esi */
  eax = esi;
/* db4bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4bb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4bbe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4bc1: ret  */
  esp += 4; SPILL(); return;
}

void f_db4bf0(void) {
  LOAD_REGS();
L_db4bf0: /* db4bf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4bf2: push 0xdbb478 */
  { uint32_t v = 0xdbb478u; esp -= 4; W32(esp, v); }
/* db4bf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4bfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4bfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4c05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4c06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4c07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4c08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db4c0c: mov esi, ecx */
  esi = ecx;
/* db4c0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4c0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4c13: call 0xd81fa0 */
  esp -= 4; W32(esp, 0xdb4c18u); SPILL(); f_d81fa0(); if (g_unwind) return; RELOAD();
/* db4c18: mov dword ptr [esi], 0xdc3588 */
  W32((uint32_t)(esi), 0xdc3588u);
/* db4c1e: mov dword ptr [esi + 4], 0xdc3570 */
  W32((uint32_t)(esi + 0x4u), 0xdc3570u);
/* db4c25: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db4c28: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db4c2b: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db4c2e: add edi, 0x58 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db4c31: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db4c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4c35: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* db4c38: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db4c40: call 0xd82775 */
  esp -= 4; W32(esp, 0xdb4c45u); SPILL(); f_d82775(); if (g_unwind) return; RELOAD();
/* db4c45: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db4c49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4c4a: mov eax, esi */
  eax = esi;
/* db4c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4c4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4c54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4c57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4c80(void) {
  LOAD_REGS();
L_db4c80: /* db4c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4c82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db4c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4c87: mov esi, ecx */
  esi = ecx;
/* db4c89: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb4c8eu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db4c8e: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db4c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4c92: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db4c95: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb4c9bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db4c9b: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* db4c9e: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* db4ca1: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* db4ca4: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* db4ca7: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db4caa: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db4cad: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db4cb0: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db4cb3: add edi, 0x58 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db4cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4cb7: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* db4cba: call 0xd81f4b */
  esp -= 4; W32(esp, 0xdb4cbfu); SPILL(); f_d81f4b(); if (g_unwind) return; RELOAD();
/* db4cbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4cc0: mov eax, esi */
  eax = esi;
/* db4cc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4cc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4cf0(void) {
  LOAD_REGS();
L_db4cf0: /* db4cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4cf1: mov esi, ecx */
  esi = ecx;
/* db4cf3: call 0xd8251d */
  esp -= 4; W32(esp, 0xdb4cf8u); SPILL(); f_d8251d(); if (g_unwind) return; RELOAD();
/* db4cf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db4cfd: je 0xdb4d0c */
  if (zf) goto L_db4d0c;
L_db4cff: /* db4cff: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db4d04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db4d06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db4d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4d09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb4d0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db4d0c: /* db4d0c: mov eax, esi */
  eax = esi;
/* db4d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4d0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4d30(void) {
  LOAD_REGS();
L_db4d30: /* db4d30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4d32: push 0xdbb4ae */
  { uint32_t v = 0xdbb4aeu; esp -= 4; W32(esp, v); }
/* db4d37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4d3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4d3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4d45: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db4d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4d49: mov esi, ecx */
  esi = ecx;
/* db4d4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4d4c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* db4d50: mov dword ptr [esi], 0xdc67c0 */
  W32((uint32_t)(esi), 0xdc67c0u);
/* db4d56: mov dword ptr [esi + 0x3c], 0xdc67a8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc67a8u);
/* db4d5d: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* db4d65: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb4d6au); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db4d6a: lea edi, [esi + 0xfc] */
  edi = (uint32_t)(esi + 0xfcu);
/* db4d70: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* db4d74: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* db4d77: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* db4d7c: call 0xd82397 */
  esp -= 4; W32(esp, 0xdb4d81u); SPILL(); f_d82397(); if (g_unwind) return; RELOAD();
/* db4d81: mov ecx, edi */
  ecx = edi;
/* db4d83: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* db4d88: call 0xd81da7 */
  esp -= 4; W32(esp, 0xdb4d8du); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* db4d8d: mov ecx, esi */
  ecx = esi;
/* db4d8f: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* db4d97: call 0xd81537 */
  esp -= 4; W32(esp, 0xdb4d9cu); SPILL(); f_d81537(); if (g_unwind) return; RELOAD();
/* db4d9c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db4da0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4da1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4da2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4da9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4dac: ret  */
  esp += 4; SPILL(); return;
}

void f_db4dd0(void) {
  LOAD_REGS();
L_db4dd0: /* db4dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4dd2: push 0xdbb4d8 */
  { uint32_t v = 0xdbb4d8u; esp -= 4; W32(esp, v); }
/* db4dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4de7: mov esi, ecx */
  esi = ecx;
/* db4de9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db4ded: call 0xd81d4d */
  esp -= 4; W32(esp, 0xdb4df2u); SPILL(); f_d81d4d(); if (g_unwind) return; RELOAD();
/* db4df2: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db4df8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db4e00: mov dword ptr [esi], 0xdc67c0 */
  W32((uint32_t)(esi), 0xdc67c0u);
/* db4e06: mov dword ptr [esi + 0x3c], 0xdc67a8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc67a8u);
/* db4e0d: call 0xd81ece */
  esp -= 4; W32(esp, 0xdb4e12u); SPILL(); f_d81ece(); if (g_unwind) return; RELOAD();
/* db4e12: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db4e16: mov eax, esi */
  eax = esi;
/* db4e18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4e19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4e20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4e23: ret  */
  esp += 4; SPILL(); return;
}

void f_db4e50(void) {
  LOAD_REGS();
L_db4e50: /* db4e50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4e52: push 0xdbb4f8 */
  { uint32_t v = 0xdbb4f8u; esp -= 4; W32(esp, v); }
/* db4e57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4e5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4e66: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* db4e6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4e6b: mov esi, ecx */
  esi = ecx;
/* db4e6d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db4e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4e72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4e73: mov ecx, esi */
  ecx = esi;
/* db4e75: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4e79: call 0xd81edd */
  esp -= 4; W32(esp, 0xdb4e7eu); SPILL(); f_d81edd(); if (g_unwind) return; RELOAD();
/* db4e7e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* db4e82: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* db4e86: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* db4e8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db4e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db4e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4e8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4e8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db4e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4e92: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db4e98: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* db4ea0: mov dword ptr [esi], 0xdc67c0 */
  W32((uint32_t)(esi), 0xdc67c0u);
/* db4ea6: mov dword ptr [esi + 0x3c], 0xdc67a8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc67a8u);
/* db4ead: call 0xd827a7 */
  esp -= 4; W32(esp, 0xdb4eb2u); SPILL(); f_d827a7(); if (g_unwind) return; RELOAD();
/* db4eb2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db4eb6: mov eax, esi */
  eax = esi;
/* db4eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4eb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4ec0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4ec3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_db4ef0(void) {
  LOAD_REGS();
L_db4ef0: /* db4ef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db4ef2: push 0xdbb518 */
  { uint32_t v = 0xdbb518u; esp -= 4; W32(esp, v); }
/* db4ef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db4efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4efe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db4f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db4f06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4f08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db4f0c: mov esi, ecx */
  esi = ecx;
/* db4f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4f0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db4f13: call 0xd81389 */
  esp -= 4; W32(esp, 0xdb4f18u); SPILL(); f_d81389(); if (g_unwind) return; RELOAD();
/* db4f18: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db4f1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4f1f: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db4f25: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db4f2d: mov dword ptr [esi], 0xdc67c0 */
  W32((uint32_t)(esi), 0xdc67c0u);
/* db4f33: mov dword ptr [esi + 0x3c], 0xdc67a8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc67a8u);
/* db4f3a: call 0xd826fd */
  esp -= 4; W32(esp, 0xdb4f3fu); SPILL(); f_d826fd(); if (g_unwind) return; RELOAD();
/* db4f3f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db4f43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4f44: mov eax, esi */
  eax = esi;
/* db4f46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4f47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db4f4e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db4f51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db4f80(void) {
  LOAD_REGS();
L_db4f80: /* db4f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db4f81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4f82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* db4f86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db4f87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4f88: mov ebx, ecx */
  ebx = ecx;
/* db4f8a: call 0xd81afa */
  esp -= 4; W32(esp, 0xdb4f8fu); SPILL(); f_d81afa(); if (g_unwind) return; RELOAD();
/* db4f8f: add esi, 0xfc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* db4f95: lea edi, [ebx + 0xfc] */
  edi = (uint32_t)(ebx + 0xfcu);
/* db4f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4f9c: mov ecx, edi */
  ecx = edi;
/* db4f9e: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb4fa3u); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db4fa3: lea eax, [esi + 0x3c] */
  eax = (uint32_t)(esi + 0x3cu);
/* db4fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db4fa7: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* db4faa: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb4fb0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db4fb0: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* db4fb3: mov dword ptr [edi + 0x48], ecx */
  W32((uint32_t)(edi + 0x48u), ecx);
/* db4fb6: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* db4fb9: mov dword ptr [edi + 0x4c], edx */
  W32((uint32_t)(edi + 0x4cu), edx);
/* db4fbc: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* db4fbf: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
/* db4fc2: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* db4fc5: mov dword ptr [edi + 0x54], ecx */
  W32((uint32_t)(edi + 0x54u), ecx);
/* db4fc8: add esi, 0x58 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* db4fcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db4fcc: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* db4fcf: call 0xd81f4b */
  esp -= 4; W32(esp, 0xdb4fd4u); SPILL(); f_d81f4b(); if (g_unwind) return; RELOAD();
/* db4fd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db4fd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db4fd6: mov eax, ebx */
  eax = ebx;
/* db4fd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db4fd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5000(void) {
  LOAD_REGS();
L_db5000: /* db5000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5001: mov esi, ecx */
  esi = ecx;
/* db5003: call 0xd81dca */
  esp -= 4; W32(esp, 0xdb5008u); SPILL(); f_d81dca(); if (g_unwind) return; RELOAD();
/* db5008: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db500d: je 0xdb501c */
  if (zf) goto L_db501c;
L_db500f: /* db500f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5014: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5016: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5018: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5019: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb501cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db501c: /* db501c: mov eax, esi */
  eax = esi;
/* db501e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db501f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5040(void) {
  LOAD_REGS();
L_db5040: /* db5040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5041: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db5045: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5049: mov esi, ecx */
  esi = ecx;
/* db504b: je 0xdb5080 */
  if (zf) goto L_db5080;
L_db504d: /* db504d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db5050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5051: push 0xd81dca */
  { uint32_t v = 0xd81dcau; esp -= 4; W32(esp, v); }
/* db5056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db5059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db505a: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* db505f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5060: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb5065u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db5065: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5068: je 0xdb5078 */
  if (zf) goto L_db5078;
L_db506a: /* db506a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db5070: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db5072: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5074: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5075: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5078u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5078: /* db5078: mov eax, edi */
  eax = edi;
/* db507a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db507b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db507c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db507d: ret 4 */
  esp += 8; SPILL(); return;
L_db5080: /* db5080: mov ecx, esi */
  ecx = esi;
/* db5082: call 0xd81dca */
  esp -= 4; W32(esp, 0xdb5087u); SPILL(); f_d81dca(); if (g_unwind) return; RELOAD();
/* db5087: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db508a: je 0xdb5099 */
  if (zf) goto L_db5099;
L_db508c: /* db508c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5091: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5093: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5096: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5099u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5099: /* db5099: mov eax, esi */
  eax = esi;
/* db509b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db509c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db509d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db50c0(void) {
  LOAD_REGS();
L_db50c0: /* db50c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db50c1: mov esi, ecx */
  esi = ecx;
/* db50c3: call 0xd813e3 */
  esp -= 4; W32(esp, 0xdb50c8u); SPILL(); f_d813e3(); if (g_unwind) return; RELOAD();
/* db50c8: mov dword ptr [esi], 0xdc6910 */
  W32((uint32_t)(esi), 0xdc6910u);
/* db50ce: mov dword ptr [esi + 4], 0xdc68fc */
  W32((uint32_t)(esi + 0x4u), 0xdc68fcu);
/* db50d5: mov eax, esi */
  eax = esi;
/* db50d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db50d8: ret  */
  esp += 4; SPILL(); return;
}

void f_db50f0(void) {
  LOAD_REGS();
L_db50f0: /* db50f0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db50f4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* db50f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db50f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db50fa: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* db50fe: mov esi, ecx */
  esi = ecx;
/* db5100: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* db5104: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5105: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db5106: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5107: mov ecx, esi */
  ecx = esi;
/* db5109: call 0xd81735 */
  esp -= 4; W32(esp, 0xdb510eu); SPILL(); f_d81735(); if (g_unwind) return; RELOAD();
/* db510e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db5112: mov dword ptr [esi], 0xdc6910 */
  W32((uint32_t)(esi), 0xdc6910u);
/* db5118: mov dword ptr [esi + 4], 0xdc68fc */
  W32((uint32_t)(esi + 0x4u), 0xdc68fcu);
/* db511f: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db5122: mov eax, esi */
  eax = esi;
/* db5124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5125: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_db5140(void) {
  LOAD_REGS();
L_db5140: /* db5140: jmp 0xd81da7 */
  SPILL(); f_d81da7(); return;
}

void f_db5160(void) {
  LOAD_REGS();
L_db5160: /* db5160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db5164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5166: mov esi, ecx */
  esi = ecx;
/* db5168: call 0xd81fa0 */
  esp -= 4; W32(esp, 0xdb516du); SPILL(); f_d81fa0(); if (g_unwind) return; RELOAD();
/* db516d: mov dword ptr [esi], 0xdc6910 */
  W32((uint32_t)(esi), 0xdc6910u);
/* db5173: mov dword ptr [esi + 4], 0xdc68fc */
  W32((uint32_t)(esi + 0x4u), 0xdc68fcu);
/* db517a: mov eax, esi */
  eax = esi;
/* db517c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db517d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5190(void) {
  LOAD_REGS();
L_db5190: /* db5190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5191: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5192: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db5196: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5197: mov esi, ecx */
  esi = ecx;
/* db5199: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb519eu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db519e: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db51a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db51a2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db51a5: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb51abu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db51ab: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* db51ae: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* db51b1: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* db51b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db51b5: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* db51b8: mov eax, esi */
  eax = esi;
/* db51ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db51bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db51d0(void) {
  LOAD_REGS();
L_db51d0: /* db51d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db51d1: mov esi, ecx */
  esi = ecx;
/* db51d3: call 0xd8230b */
  esp -= 4; W32(esp, 0xdb51d8u); SPILL(); f_d8230b(); if (g_unwind) return; RELOAD();
/* db51d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db51dd: je 0xdb51ec */
  if (zf) goto L_db51ec;
L_db51df: /* db51df: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db51e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db51e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db51e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db51e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb51ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db51ec: /* db51ec: mov eax, esi */
  eax = esi;
/* db51ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db51ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5210(void) {
  LOAD_REGS();
L_db5210: /* db5210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5211: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db5215: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5219: mov esi, ecx */
  esi = ecx;
/* db521b: je 0xdb524d */
  if (zf) goto L_db524d;
L_db521d: /* db521d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db5220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5221: push 0xd8230b */
  { uint32_t v = 0xd8230bu; esp -= 4; W32(esp, v); }
/* db5226: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db5229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db522a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* db522c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db522d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb5232u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db5232: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5235: je 0xdb5245 */
  if (zf) goto L_db5245;
L_db5237: /* db5237: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db523d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db523f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5241: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5242: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5245: /* db5245: mov eax, edi */
  eax = edi;
/* db5247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db524a: ret 4 */
  esp += 8; SPILL(); return;
L_db524d: /* db524d: mov ecx, esi */
  ecx = esi;
/* db524f: call 0xd8230b */
  esp -= 4; W32(esp, 0xdb5254u); SPILL(); f_d8230b(); if (g_unwind) return; RELOAD();
/* db5254: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5257: je 0xdb5266 */
  if (zf) goto L_db5266;
L_db5259: /* db5259: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db525e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5260: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5262: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5263: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5266: /* db5266: mov eax, esi */
  eax = esi;
/* db5268: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5269: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db526a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5290(void) {
  LOAD_REGS();
L_db5290: /* db5290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5292: push 0xdbb546 */
  { uint32_t v = 0xdbb546u; esp -= 4; W32(esp, v); }
/* db5297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db529d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db529e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db52a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db52a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db52a7: mov esi, ecx */
  esi = ecx;
/* db52a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db52ad: mov dword ptr [esi], 0xdc69e0 */
  W32((uint32_t)(esi), 0xdc69e0u);
/* db52b3: mov dword ptr [esi + 0x3c], 0xdc69c8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc69c8u);
/* db52ba: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db52c2: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb52c7u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db52c7: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db52cd: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db52d2: call 0xd81da7 */
  esp -= 4; W32(esp, 0xdb52d7u); SPILL(); f_d81da7(); if (g_unwind) return; RELOAD();
/* db52d7: mov ecx, esi */
  ecx = esi;
/* db52d9: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db52e1: call 0xd81537 */
  esp -= 4; W32(esp, 0xdb52e6u); SPILL(); f_d81537(); if (g_unwind) return; RELOAD();
/* db52e6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db52ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db52eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db52f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db52f5: ret  */
  esp += 4; SPILL(); return;
}

void f_db5320(void) {
  LOAD_REGS();
L_db5320: /* db5320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5322: push 0xdbb568 */
  { uint32_t v = 0xdbb568u; esp -= 4; W32(esp, v); }
/* db5327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db532d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db532e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5337: mov esi, ecx */
  esi = ecx;
/* db5339: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db533a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* db533e: call 0xd81d4d */
  esp -= 4; W32(esp, 0xdb5343u); SPILL(); f_d81d4d(); if (g_unwind) return; RELOAD();
/* db5343: lea edi, [esi + 0xfc] */
  edi = (uint32_t)(esi + 0xfcu);
/* db5349: mov ecx, edi */
  ecx = edi;
/* db534b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* db5353: mov dword ptr [esi], 0xdc69e0 */
  W32((uint32_t)(esi), 0xdc69e0u);
/* db5359: mov dword ptr [esi + 0x3c], 0xdc69c8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc69c8u);
/* db5360: call 0xd813e3 */
  esp -= 4; W32(esp, 0xdb5365u); SPILL(); f_d813e3(); if (g_unwind) return; RELOAD();
/* db5365: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db5369: mov dword ptr [edi], 0xdc6910 */
  W32((uint32_t)(edi), 0xdc6910u);
/* db536f: mov dword ptr [edi + 4], 0xdc68fc */
  W32((uint32_t)(edi + 0x4u), 0xdc68fcu);
/* db5376: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5377: mov eax, esi */
  eax = esi;
/* db5379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db537a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5381: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5384: ret  */
  esp += 4; SPILL(); return;
}

void f_db53b0(void) {
  LOAD_REGS();
L_db53b0: /* db53b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db53b2: push 0xdbb588 */
  { uint32_t v = 0xdbb588u; esp -= 4; W32(esp, v); }
/* db53b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db53bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db53be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db53c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db53c6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db53ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db53cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db53cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db53ce: mov esi, ecx */
  esi = ecx;
/* db53d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db53d1: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* db53d5: call 0xd81edd */
  esp -= 4; W32(esp, 0xdb53dau); SPILL(); f_d81edd(); if (g_unwind) return; RELOAD();
/* db53da: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* db53de: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* db53e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db53e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db53e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db53e6: lea edi, [esi + 0xfc] */
  edi = (uint32_t)(esi + 0xfcu);
/* db53ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db53ed: mov ecx, edi */
  ecx = edi;
/* db53ef: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* db53f7: mov dword ptr [esi], 0xdc69e0 */
  W32((uint32_t)(esi), 0xdc69e0u);
/* db53fd: mov dword ptr [esi + 0x3c], 0xdc69c8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc69c8u);
/* db5404: call 0xd81735 */
  esp -= 4; W32(esp, 0xdb5409u); SPILL(); f_d81735(); if (g_unwind) return; RELOAD();
/* db5409: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* db540d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db5411: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* db5414: mov dword ptr [edi], 0xdc6910 */
  W32((uint32_t)(edi), 0xdc6910u);
/* db541a: mov dword ptr [edi + 4], 0xdc68fc */
  W32((uint32_t)(edi + 0x4u), 0xdc68fcu);
/* db5421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5422: mov eax, esi */
  eax = esi;
/* db5424: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5425: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db542c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db542f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db5470(void) {
  LOAD_REGS();
L_db5470: /* db5470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5472: push 0xdbb5a8 */
  { uint32_t v = 0xdbb5a8u; esp -= 4; W32(esp, v); }
/* db5477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db547d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db547e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5486: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5487: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* db548b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db548c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db548d: mov esi, ecx */
  esi = ecx;
/* db548f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5490: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* db5494: call 0xd81389 */
  esp -= 4; W32(esp, 0xdb5499u); SPILL(); f_d81389(); if (g_unwind) return; RELOAD();
/* db5499: add ebx, 0xfc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* db549f: lea edi, [esi + 0xfc] */
  edi = (uint32_t)(esi + 0xfcu);
/* db54a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db54a6: mov ecx, edi */
  ecx = edi;
/* db54a8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* db54b0: mov dword ptr [esi], 0xdc69e0 */
  W32((uint32_t)(esi), 0xdc69e0u);
/* db54b6: mov dword ptr [esi + 0x3c], 0xdc69c8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc69c8u);
/* db54bd: call 0xd81fa0 */
  esp -= 4; W32(esp, 0xdb54c2u); SPILL(); f_d81fa0(); if (g_unwind) return; RELOAD();
/* db54c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db54c6: mov dword ptr [edi], 0xdc6910 */
  W32((uint32_t)(edi), 0xdc6910u);
/* db54cc: mov dword ptr [edi + 4], 0xdc68fc */
  W32((uint32_t)(edi + 0x4u), 0xdc68fcu);
/* db54d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db54d4: mov eax, esi */
  eax = esi;
/* db54d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db54d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db54d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db54df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db54e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5510(void) {
  LOAD_REGS();
L_db5510: /* db5510: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5511: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5512: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* db5516: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5518: mov ebx, ecx */
  ebx = ecx;
/* db551a: call 0xd81afa */
  esp -= 4; W32(esp, 0xdb551fu); SPILL(); f_d81afa(); if (g_unwind) return; RELOAD();
/* db551f: add esi, 0xfc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* db5525: lea edi, [ebx + 0xfc] */
  edi = (uint32_t)(ebx + 0xfcu);
/* db552b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db552c: mov ecx, edi */
  ecx = edi;
/* db552e: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb5533u); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db5533: lea eax, [esi + 0x3c] */
  eax = (uint32_t)(esi + 0x3cu);
/* db5536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5537: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* db553a: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb5540u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db5540: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* db5543: mov dword ptr [edi + 0x48], ecx */
  W32((uint32_t)(edi + 0x48u), ecx);
/* db5546: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* db5549: mov dword ptr [edi + 0x4c], edx */
  W32((uint32_t)(edi + 0x4cu), edx);
/* db554c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db554d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db554e: mov eax, ebx */
  eax = ebx;
/* db5550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5551: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5580(void) {
  LOAD_REGS();
L_db5580: /* db5580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5581: mov esi, ecx */
  esi = ecx;
/* db5583: call 0xd82739 */
  esp -= 4; W32(esp, 0xdb5588u); SPILL(); f_d82739(); if (g_unwind) return; RELOAD();
/* db5588: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db558d: je 0xdb559c */
  if (zf) goto L_db559c;
L_db558f: /* db558f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5594: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5596: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5599: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb559cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db559c: /* db559c: mov eax, esi */
  eax = esi;
/* db559e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db559f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db55c0(void) {
  LOAD_REGS();
L_db55c0: /* db55c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db55c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db55c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db55c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db55c9: mov esi, ecx */
  esi = ecx;
/* db55cb: je 0xdb5600 */
  if (zf) goto L_db5600;
L_db55cd: /* db55cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db55d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db55d1: push 0xd82739 */
  { uint32_t v = 0xd82739u; esp -= 4; W32(esp, v); }
/* db55d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db55d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db55da: push 0x14c */
  { uint32_t v = 0x14cu; esp -= 4; W32(esp, v); }
/* db55df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db55e0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb55e5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db55e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db55e8: je 0xdb55f8 */
  if (zf) goto L_db55f8;
L_db55ea: /* db55ea: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db55f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db55f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db55f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db55f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb55f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db55f8: /* db55f8: mov eax, edi */
  eax = edi;
/* db55fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db55fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db55fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db55fd: ret 4 */
  esp += 8; SPILL(); return;
L_db5600: /* db5600: mov ecx, esi */
  ecx = esi;
/* db5602: call 0xd82739 */
  esp -= 4; W32(esp, 0xdb5607u); SPILL(); f_d82739(); if (g_unwind) return; RELOAD();
/* db5607: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db560a: je 0xdb5619 */
  if (zf) goto L_db5619;
L_db560c: /* db560c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5611: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5613: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5615: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5616: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5619: /* db5619: mov eax, esi */
  eax = esi;
/* db561b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db561c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db561d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5640(void) {
  LOAD_REGS();
L_db5640: /* db5640: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5642: push 0xdbb5c8 */
  { uint32_t v = 0xdbb5c8u; esp -= 4; W32(esp, v); }
/* db5647: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db564d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db564e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5655: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5658: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db565c: mov esi, ecx */
  esi = ecx;
/* db565e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db565f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db5663: call 0xd81fa0 */
  esp -= 4; W32(esp, 0xdb5668u); SPILL(); f_d81fa0(); if (g_unwind) return; RELOAD();
/* db5668: lea eax, [edi + 0x50] */
  eax = (uint32_t)(edi + 0x50u);
/* db566b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db566c: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* db566f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db5677: mov dword ptr [esi], 0xdc3658 */
  W32((uint32_t)(esi), 0xdc3658u);
/* db567d: mov dword ptr [esi + 4], 0xdc3644 */
  W32((uint32_t)(esi + 0x4u), 0xdc3644u);
/* db5684: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb568au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db568a: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* db568d: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* db5690: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* db5693: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* db5696: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* db5699: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db569c: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db569f: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db56a2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db56a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db56a7: mov eax, esi */
  eax = esi;
/* db56a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db56aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db56b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db56b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db56e0(void) {
  LOAD_REGS();
L_db56e0: /* db56e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db56e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db56e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db56e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db56e7: mov esi, ecx */
  esi = ecx;
/* db56e9: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb56eeu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db56ee: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db56f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db56f2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db56f5: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb56fbu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db56fb: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* db56fe: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* db5701: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* db5704: lea eax, [edi + 0x50] */
  eax = (uint32_t)(edi + 0x50u);
/* db5707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5708: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* db570b: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* db570e: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb5714u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db5714: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* db5717: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* db571a: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* db571d: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* db5720: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* db5723: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db5726: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db5729: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db572a: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db572d: mov eax, esi */
  eax = esi;
/* db572f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5730: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5760(void) {
  LOAD_REGS();
L_db5760: /* db5760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5761: mov esi, ecx */
  esi = ecx;
/* db5763: call 0xd81b1d */
  esp -= 4; W32(esp, 0xdb5768u); SPILL(); f_d81b1d(); if (g_unwind) return; RELOAD();
/* db5768: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db576d: je 0xdb577c */
  if (zf) goto L_db577c;
L_db576f: /* db576f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5774: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5776: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5778: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5779: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb577cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db577c: /* db577c: mov eax, esi */
  eax = esi;
/* db577e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db577f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db57a0(void) {
  LOAD_REGS();
L_db57a0: /* db57a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db57a2: push 0xdbb5e8 */
  { uint32_t v = 0xdbb5e8u; esp -= 4; W32(esp, v); }
/* db57a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db57ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db57ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db57b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db57b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db57b7: mov esi, ecx */
  esi = ecx;
/* db57b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db57bd: call 0xd81df2 */
  esp -= 4; W32(esp, 0xdb57c2u); SPILL(); f_d81df2(); if (g_unwind) return; RELOAD();
/* db57c2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db57c5: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db57cd: mov dword ptr [esi], 0xdc3728 */
  W32((uint32_t)(esi), 0xdc3728u);
/* db57d3: mov dword ptr [esi + 4], 0xdc3710 */
  W32((uint32_t)(esi + 0x4u), 0xdc3710u);
/* db57da: call dword ptr [0xde8b44] */
  esp -= 4; W32(esp, 0xdb57e0u); SPILL(); f_4e1933(); if (g_unwind) return; /* Core!??0FPreferencesInfo@@QAE@XZ */ RELOAD();
/* db57e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db57e4: mov eax, esi */
  eax = esi;
/* db57e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db57e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db57ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db57f1: ret  */
  esp += 4; SPILL(); return;
}

void f_db5820(void) {
  LOAD_REGS();
L_db5820: /* db5820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5822: push 0xdbb608 */
  { uint32_t v = 0xdbb608u; esp -= 4; W32(esp, v); }
/* db5827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db582d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db582e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5838: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db583c: mov esi, ecx */
  esi = ecx;
/* db583e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db583f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db5843: call 0xd827cf */
  esp -= 4; W32(esp, 0xdb5848u); SPILL(); f_d827cf(); if (g_unwind) return; RELOAD();
/* db5848: add edi, 0x3c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db584b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db584c: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db584f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db5857: mov dword ptr [esi], 0xdc3728 */
  W32((uint32_t)(esi), 0xdc3728u);
/* db585d: mov dword ptr [esi + 4], 0xdc3710 */
  W32((uint32_t)(esi + 0x4u), 0xdc3710u);
/* db5864: call dword ptr [0xde8a40] */
  esp -= 4; W32(esp, 0xdb586au); SPILL(); f_4e2dec(); if (g_unwind) return; /* Core!??0FPreferencesInfo@@QAE@ABV0@@Z */ RELOAD();
/* db586a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db586e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db586f: mov eax, esi */
  eax = esi;
/* db5871: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5872: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5879: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db587c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db58a0(void) {
  LOAD_REGS();
L_db58a0: /* db58a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db58a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db58a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db58a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db58a7: mov esi, ecx */
  esi = ecx;
/* db58a9: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb58aeu); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db58ae: add edi, 0x3c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db58b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db58b2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db58b5: call dword ptr [0xde8b48] */
  esp -= 4; W32(esp, 0xdb58bbu); SPILL(); f_4e2c2a(); if (g_unwind) return; /* Core!??4FPreferencesInfo@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db58bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db58bc: mov eax, esi */
  eax = esi;
/* db58be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db58bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db58e0(void) {
  LOAD_REGS();
L_db58e0: /* db58e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db58e1: mov esi, ecx */
  esi = ecx;
/* db58e3: call 0xd813f2 */
  esp -= 4; W32(esp, 0xdb58e8u); SPILL(); f_d813f2(); if (g_unwind) return; RELOAD();
/* db58e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db58ed: je 0xdb58fc */
  if (zf) goto L_db58fc;
L_db58ef: /* db58ef: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db58f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db58f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db58f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db58f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb58fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db58fc: /* db58fc: mov eax, esi */
  eax = esi;
/* db58fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db58ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5920(void) {
  LOAD_REGS();
L_db5920: /* db5920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5922: push 0xdbb636 */
  { uint32_t v = 0xdbb636u; esp -= 4; W32(esp, v); }
/* db5927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db592d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db592e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5937: mov esi, ecx */
  esi = ecx;
/* db5939: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db593d: mov dword ptr [esi], 0xdc6b30 */
  W32((uint32_t)(esi), 0xdc6b30u);
/* db5943: mov dword ptr [esi + 0x3c], 0xdc6b1c */
  W32((uint32_t)(esi + 0x3cu), 0xdc6b1cu);
/* db594a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db5952: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb5957u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db5957: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db595d: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db5962: call 0xd813f2 */
  esp -= 4; W32(esp, 0xdb5967u); SPILL(); f_d813f2(); if (g_unwind) return; RELOAD();
/* db5967: mov ecx, esi */
  ecx = esi;
/* db5969: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db5971: call 0xd81537 */
  esp -= 4; W32(esp, 0xdb5976u); SPILL(); f_d81537(); if (g_unwind) return; RELOAD();
/* db5976: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db597a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db597b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5982: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5985: ret  */
  esp += 4; SPILL(); return;
}

void f_db59b0(void) {
  LOAD_REGS();
L_db59b0: /* db59b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db59b2: push 0xdbb658 */
  { uint32_t v = 0xdbb658u; esp -= 4; W32(esp, v); }
/* db59b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db59bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db59be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db59c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db59c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db59c7: mov esi, ecx */
  esi = ecx;
/* db59c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db59cd: call 0xd81d4d */
  esp -= 4; W32(esp, 0xdb59d2u); SPILL(); f_d81d4d(); if (g_unwind) return; RELOAD();
/* db59d2: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db59d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db59e0: mov dword ptr [esi], 0xdc6b30 */
  W32((uint32_t)(esi), 0xdc6b30u);
/* db59e6: mov dword ptr [esi + 0x3c], 0xdc6b1c */
  W32((uint32_t)(esi + 0x3cu), 0xdc6b1cu);
/* db59ed: call 0xd813c5 */
  esp -= 4; W32(esp, 0xdb59f2u); SPILL(); f_d813c5(); if (g_unwind) return; RELOAD();
/* db59f2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db59f6: mov eax, esi */
  eax = esi;
/* db59f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db59f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5a00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5a03: ret  */
  esp += 4; SPILL(); return;
}

void f_db5a30(void) {
  LOAD_REGS();
L_db5a30: /* db5a30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5a32: push 0xdbb68f */
  { uint32_t v = 0xdbb68fu; esp -= 4; W32(esp, v); }
/* db5a37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db5a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5a3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5a45: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db5a48: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* db5a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5a4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db5a4f: mov esi, ecx */
  esi = ecx;
/* db5a51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5a52: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db5a56: call 0xd81edd */
  esp -= 4; W32(esp, 0xdb5a5bu); SPILL(); f_d81edd(); if (g_unwind) return; RELOAD();
/* db5a5b: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* db5a5f: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* db5a67: mov dword ptr [esi], 0xdc6b30 */
  W32((uint32_t)(esi), 0xdc6b30u);
/* db5a6d: mov dword ptr [esi + 0x3c], 0xdc6b1c */
  W32((uint32_t)(esi + 0x3cu), 0xdc6b1cu);
/* db5a74: call dword ptr [0xde8b44] */
  esp -= 4; W32(esp, 0xdb5a7au); SPILL(); f_4e1933(); if (g_unwind) return; /* Core!??0FPreferencesInfo@@QAE@XZ */ RELOAD();
/* db5a7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db5a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5a7e: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db5a84: mov byte ptr [esp + 0x48], 1 */
  W8((uint32_t)(esp + 0x48u), 0x1u);
/* db5a89: call 0xd813d4 */
  esp -= 4; W32(esp, 0xdb5a8eu); SPILL(); f_d813d4(); if (g_unwind) return; RELOAD();
/* db5a8e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* db5a92: mov byte ptr [esp + 0x3c], 3 */
  W8((uint32_t)(esp + 0x3cu), 0x3u);
/* db5a97: call dword ptr [0xde8990] */
  esp -= 4; W32(esp, 0xdb5a9du); SPILL(); f_4e3ad5(); if (g_unwind) return; /* Core!??1FPreferencesInfo@@QAE@XZ */ RELOAD();
/* db5a9d: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* db5aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5aa2: lea ecx, [esi + 0x138] */
  ecx = (uint32_t)(esi + 0x138u);
/* db5aa8: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xdb5aaeu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* db5aae: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* db5ab2: mov eax, esi */
  eax = esi;
/* db5ab4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5ab5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5abc: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5abf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db5b00(void) {
  LOAD_REGS();
L_db5b00: /* db5b00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5b02: push 0xdbb6b8 */
  { uint32_t v = 0xdbb6b8u; esp -= 4; W32(esp, v); }
/* db5b07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db5b0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5b0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5b15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5b16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5b17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5b18: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db5b1c: mov esi, ecx */
  esi = ecx;
/* db5b1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5b1f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db5b23: call 0xd81389 */
  esp -= 4; W32(esp, 0xdb5b28u); SPILL(); f_d81389(); if (g_unwind) return; RELOAD();
/* db5b28: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db5b2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5b2f: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* db5b35: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db5b3d: mov dword ptr [esi], 0xdc6b30 */
  W32((uint32_t)(esi), 0xdc6b30u);
/* db5b43: mov dword ptr [esi + 0x3c], 0xdc6b1c */
  W32((uint32_t)(esi + 0x3cu), 0xdc6b1cu);
/* db5b4a: call 0xd8229d */
  esp -= 4; W32(esp, 0xdb5b4fu); SPILL(); f_d8229d(); if (g_unwind) return; RELOAD();
/* db5b4f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db5b53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5b54: mov eax, esi */
  eax = esi;
/* db5b56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5b57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5b5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5b61: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5b90(void) {
  LOAD_REGS();
L_db5b90: /* db5b90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5b91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5b92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5b93: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* db5b97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5b98: mov esi, ecx */
  esi = ecx;
/* db5b9a: call 0xd81afa */
  esp -= 4; W32(esp, 0xdb5b9fu); SPILL(); f_d81afa(); if (g_unwind) return; RELOAD();
/* db5b9f: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db5ba5: lea ebx, [esi + 0xfc] */
  ebx = (uint32_t)(esi + 0xfcu);
/* db5bab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5bac: mov ecx, ebx */
  ecx = ebx;
/* db5bae: call 0xd81ad2 */
  esp -= 4; W32(esp, 0xdb5bb3u); SPILL(); f_d81ad2(); if (g_unwind) return; RELOAD();
/* db5bb3: add edi, 0x3c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db5bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5bb7: lea ecx, [ebx + 0x3c] */
  ecx = (uint32_t)(ebx + 0x3cu);
/* db5bba: call dword ptr [0xde8b48] */
  esp -= 4; W32(esp, 0xdb5bc0u); SPILL(); f_4e2c2a(); if (g_unwind) return; /* Core!??4FPreferencesInfo@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db5bc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5bc1: mov eax, esi */
  eax = esi;
/* db5bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5bc5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5be0(void) {
  LOAD_REGS();
L_db5be0: /* db5be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5be1: mov esi, ecx */
  esi = ecx;
/* db5be3: call 0xd81023 */
  esp -= 4; W32(esp, 0xdb5be8u); SPILL(); f_d81023(); if (g_unwind) return; RELOAD();
/* db5be8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5bed: je 0xdb5bfc */
  if (zf) goto L_db5bfc;
L_db5bef: /* db5bef: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5bf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5bf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5bf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5bf9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5bfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5bfc: /* db5bfc: mov eax, esi */
  eax = esi;
/* db5bfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5bff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5c20(void) {
  LOAD_REGS();
L_db5c20: /* db5c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5c21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db5c25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5c29: mov esi, ecx */
  esi = ecx;
/* db5c2b: je 0xdb5c60 */
  if (zf) goto L_db5c60;
L_db5c2d: /* db5c2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db5c30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5c31: push 0xd81023 */
  { uint32_t v = 0xd81023u; esp -= 4; W32(esp, v); }
/* db5c36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db5c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5c3a: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* db5c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5c40: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb5c45u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db5c45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5c48: je 0xdb5c58 */
  if (zf) goto L_db5c58;
L_db5c4a: /* db5c4a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db5c50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db5c52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5c55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5c58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5c58: /* db5c58: mov eax, edi */
  eax = edi;
/* db5c5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5c5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5c5d: ret 4 */
  esp += 8; SPILL(); return;
L_db5c60: /* db5c60: mov ecx, esi */
  ecx = esi;
/* db5c62: call 0xd81023 */
  esp -= 4; W32(esp, 0xdb5c67u); SPILL(); f_d81023(); if (g_unwind) return; RELOAD();
/* db5c67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5c6a: je 0xdb5c79 */
  if (zf) goto L_db5c79;
L_db5c6c: /* db5c6c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5c71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5c73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5c75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5c76: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5c79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5c79: /* db5c79: mov eax, esi */
  eax = esi;
/* db5c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5c7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5ca0(void) {
  LOAD_REGS();
L_db5ca0: /* db5ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5ca2: push 0xdbb6d8 */
  { uint32_t v = 0xdbb6d8u; esp -= 4; W32(esp, v); }
/* db5ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db5cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5cb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5cb7: mov esi, ecx */
  esi = ecx;
/* db5cb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db5cbd: mov dword ptr [esi], 0xdc6c70 */
  W32((uint32_t)(esi), 0xdc6c70u);
/* db5cc3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db5ccb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb5cd0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db5cd0: mov ecx, esi */
  ecx = esi;
/* db5cd2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db5cda: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb5cdfu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db5cdf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db5ce3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5ce4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5ceb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5cee: ret  */
  esp += 4; SPILL(); return;
}

void f_db5d10(void) {
  LOAD_REGS();
L_db5d10: /* db5d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5d11: mov esi, ecx */
  esi = ecx;
/* db5d13: call 0xd812d0 */
  esp -= 4; W32(esp, 0xdb5d18u); SPILL(); f_d812d0(); if (g_unwind) return; RELOAD();
/* db5d18: mov dword ptr [esi], 0xdc6c70 */
  W32((uint32_t)(esi), 0xdc6c70u);
/* db5d1e: mov eax, esi */
  eax = esi;
/* db5d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5d21: ret  */
  esp += 4; SPILL(); return;
}

void f_db5d40(void) {
  LOAD_REGS();
L_db5d40: /* db5d40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db5d44: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* db5d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5d4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* db5d4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5d4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5d50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5d51: mov esi, ecx */
  esi = ecx;
/* db5d53: mov ecx, esp */
  ecx = esp;
/* db5d55: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* db5d59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db5d5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db5d5c: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb5d62u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db5d62: mov ecx, esi */
  ecx = esi;
/* db5d64: call 0xd82554 */
  esp -= 4; W32(esp, 0xdb5d69u); SPILL(); f_d82554(); if (g_unwind) return; RELOAD();
/* db5d69: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* db5d6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5d6d: mov dword ptr [esi], 0xdc6c70 */
  W32((uint32_t)(esi), 0xdc6c70u);
/* db5d73: mov eax, esi */
  eax = esi;
/* db5d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5d76: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db5d90(void) {
  LOAD_REGS();
L_db5d90: /* db5d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5d91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5d92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db5d96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5d97: mov esi, ecx */
  esi = ecx;
/* db5d99: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb5d9eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db5d9e: mov dword ptr [esi], 0xdc6c70 */
  W32((uint32_t)(esi), 0xdc6c70u);
/* db5da4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db5da7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db5daa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5dab: mov eax, esi */
  eax = esi;
/* db5dad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5dae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5dd0(void) {
  LOAD_REGS();
L_db5dd0: /* db5dd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5dd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5dd2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db5dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5dd7: mov esi, ecx */
  esi = ecx;
/* db5dd9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb5ddeu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db5dde: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db5de1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db5de4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5de5: mov eax, esi */
  eax = esi;
/* db5de7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5de8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5e00(void) {
  LOAD_REGS();
L_db5e00: /* db5e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5e01: mov esi, ecx */
  esi = ecx;
/* db5e03: call 0xd81532 */
  esp -= 4; W32(esp, 0xdb5e08u); SPILL(); f_d81532(); if (g_unwind) return; RELOAD();
/* db5e08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5e0d: je 0xdb5e1c */
  if (zf) goto L_db5e1c;
L_db5e0f: /* db5e0f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5e14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5e16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5e19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5e1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5e1c: /* db5e1c: mov eax, esi */
  eax = esi;
/* db5e1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5e1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5e40(void) {
  LOAD_REGS();
L_db5e40: /* db5e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5e41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db5e45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5e49: mov esi, ecx */
  esi = ecx;
/* db5e4b: je 0xdb5e7d */
  if (zf) goto L_db5e7d;
L_db5e4d: /* db5e4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db5e50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5e51: push 0xd81532 */
  { uint32_t v = 0xd81532u; esp -= 4; W32(esp, v); }
/* db5e56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db5e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5e5a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* db5e5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5e5d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb5e62u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db5e62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5e65: je 0xdb5e75 */
  if (zf) goto L_db5e75;
L_db5e67: /* db5e67: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db5e6d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db5e6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5e71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5e72: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5e75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5e75: /* db5e75: mov eax, edi */
  eax = edi;
/* db5e77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db5e78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5e7a: ret 4 */
  esp += 8; SPILL(); return;
L_db5e7d: /* db5e7d: mov ecx, esi */
  ecx = esi;
/* db5e7f: call 0xd81532 */
  esp -= 4; W32(esp, 0xdb5e84u); SPILL(); f_d81532(); if (g_unwind) return; RELOAD();
/* db5e84: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db5e87: je 0xdb5e96 */
  if (zf) goto L_db5e96;
L_db5e89: /* db5e89: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db5e8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db5e90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db5e92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5e93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb5e96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db5e96: /* db5e96: mov eax, esi */
  eax = esi;
/* db5e98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5e99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db5e9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db5ec0(void) {
  LOAD_REGS();
L_db5ec0: /* db5ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5ec2: push 0xdbb749 */
  { uint32_t v = 0xdbb749u; esp -= 4; W32(esp, v); }
/* db5ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db5ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db5ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5ed7: mov esi, ecx */
  esi = ecx;
/* db5ed9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db5edd: mov dword ptr [esi], 0xdc6db8 */
  W32((uint32_t)(esi), 0xdc6db8u);
/* db5ee3: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* db5eeb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb5ef0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db5ef0: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* db5ef6: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* db5efb: call 0xd81de3 */
  esp -= 4; W32(esp, 0xdb5f00u); SPILL(); f_d81de3(); if (g_unwind) return; RELOAD();
/* db5f00: lea ecx, [esi + 0x2ac] */
  ecx = (uint32_t)(esi + 0x2acu);
/* db5f06: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* db5f0b: call 0xd82662 */
  esp -= 4; W32(esp, 0xdb5f10u); SPILL(); f_d82662(); if (g_unwind) return; RELOAD();
/* db5f10: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* db5f16: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* db5f1b: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb5f20u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db5f20: lea ecx, [esi + 0x174] */
  ecx = (uint32_t)(esi + 0x174u);
/* db5f26: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* db5f2b: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb5f30u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db5f30: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* db5f36: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* db5f3b: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb5f40u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db5f40: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db5f43: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db5f48: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb5f4du); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db5f4d: mov ecx, esi */
  ecx = esi;
/* db5f4f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db5f57: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb5f5cu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db5f5c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db5f60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db5f61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db5f68: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db5f6b: ret  */
  esp += 4; SPILL(); return;
}

void f_db5fa0(void) {
  LOAD_REGS();
L_db5fa0: /* db5fa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db5fa2: push 0xdbb7bb */
  { uint32_t v = 0xdbb7bbu; esp -= 4; W32(esp, v); }
/* db5fa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db5fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db5fae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db5fb5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db5fb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db5fb9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db5fba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db5fbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db5fbc: mov esi, ecx */
  esi = ecx;
/* db5fbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db5fc0: push 0xde4d68 */
  { uint32_t v = 0xde4d68u; esp -= 4; W32(esp, v); }
/* db5fc5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* db5fc9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* db5fcd: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb5fd3u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db5fd3: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* db5fd6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db5fda: xor edi, edi */
  edi = 0;
/* db5fdc: and ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* db5fdf: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db5fe2: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db5fe8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db5feb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db5fee: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db5ff2: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db5ff8: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* db5ffb: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db5ffe: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db6001: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db6004: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb600au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db600a: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db600d: mov word ptr [esi + 0xc], 0x68 */
  W16((uint32_t)(esi + 0xcu), 0x68u);
/* db6013: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6014: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db6017: mov eax, esp */
  eax = esp;
/* db6019: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* db601d: mov dword ptr [esi], 0xdc6db8 */
  W32((uint32_t)(esi), 0xdc6db8u);
/* db6023: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* db6025: lea ebp, [esi + 0x3c] */
  ebp = (uint32_t)(esi + 0x3cu);
/* db6028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6029: mov ecx, ebp */
  ecx = ebp;
/* db602b: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* db602f: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db6035: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db6038: mov dword ptr [eax + 8], 0xd81a50 */
  W32((uint32_t)(eax + 0x8u), 0xd81a50u);
/* db603f: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb6044u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db6044: mov ebx, 5 */
  ebx = 0x5u;
/* db6049: mov dword ptr [ebp], 0xdc1ac8 */
  W32((uint32_t)(ebp), 0xdc1ac8u);
/* db6050: mov dword ptr [ebp + 0x94], edi */
  W32((uint32_t)(ebp + 0x94u), edi);
/* db6056: mov dword ptr [ebp + 0x98], ebx */
  W32((uint32_t)(ebp + 0x98u), ebx);
/* db605c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db605d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db6060: mov eax, esp */
  eax = esp;
/* db6062: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* db6066: push 0x3ec */
  { uint32_t v = 0x3ecu; esp -= 4; W32(esp, v); }
/* db606b: lea ebp, [esi + 0xd8] */
  ebp = (uint32_t)(esi + 0xd8u);
/* db6071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6072: mov ecx, ebp */
  ecx = ebp;
/* db6074: mov byte ptr [esp + 0x3c], 1 */
  W8((uint32_t)(esp + 0x3cu), 0x1u);
/* db6079: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db607f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db6082: mov dword ptr [eax + 8], 0xd81901 */
  W32((uint32_t)(eax + 0x8u), 0xd81901u);
/* db6089: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb608eu); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db608e: mov dword ptr [ebp], 0xdc1ac8 */
  W32((uint32_t)(ebp), 0xdc1ac8u);
/* db6095: mov dword ptr [ebp + 0x94], edi */
  W32((uint32_t)(ebp + 0x94u), edi);
/* db609b: mov dword ptr [ebp + 0x98], ebx */
  W32((uint32_t)(ebp + 0x98u), ebx);
/* db60a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db60a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db60a5: mov eax, esp */
  eax = esp;
/* db60a7: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* db60ab: push 0x3ed */
  { uint32_t v = 0x3edu; esp -= 4; W32(esp, v); }
/* db60b0: lea ebp, [esi + 0x174] */
  ebp = (uint32_t)(esi + 0x174u);
/* db60b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db60b7: mov ecx, ebp */
  ecx = ebp;
/* db60b9: mov byte ptr [esp + 0x3c], 2 */
  W8((uint32_t)(esp + 0x3cu), 0x2u);
/* db60be: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db60c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db60c7: mov dword ptr [eax + 8], 0xd81ba9 */
  W32((uint32_t)(eax + 0x8u), 0xd81ba9u);
/* db60ce: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb60d3u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db60d3: mov dword ptr [ebp], 0xdc1ac8 */
  W32((uint32_t)(ebp), 0xdc1ac8u);
/* db60da: mov dword ptr [ebp + 0x94], edi */
  W32((uint32_t)(ebp + 0x94u), edi);
/* db60e0: mov dword ptr [ebp + 0x98], ebx */
  W32((uint32_t)(ebp + 0x98u), ebx);
/* db60e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db60e7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db60ea: mov eax, esp */
  eax = esp;
/* db60ec: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* db60f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* db60f2: lea ebp, [esi + 0x210] */
  ebp = (uint32_t)(esi + 0x210u);
/* db60f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db60f9: mov ecx, ebp */
  ecx = ebp;
/* db60fb: mov byte ptr [esp + 0x3c], 3 */
  W8((uint32_t)(esp + 0x3cu), 0x3u);
/* db6100: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db6106: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db6109: mov dword ptr [eax + 8], 0xd81abe */
  W32((uint32_t)(eax + 0x8u), 0xd81abeu);
/* db6110: call 0xd81adc */
  esp -= 4; W32(esp, 0xdb6115u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* db6115: mov dword ptr [ebp], 0xdc1ac8 */
  W32((uint32_t)(ebp), 0xdc1ac8u);
/* db611c: mov dword ptr [ebp + 0x94], edi */
  W32((uint32_t)(ebp + 0x94u), edi);
/* db6122: mov dword ptr [ebp + 0x98], ebx */
  W32((uint32_t)(ebp + 0x98u), ebx);
/* db6128: mov eax, dword ptr [0xde5198] */
  eax = R32((uint32_t)(0xde5198u));
/* db612d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db612e: push 0x425 */
  { uint32_t v = 0x425u; esp -= 4; W32(esp, v); }
/* db6133: lea ebp, [esi + 0x2ac] */
  ebp = (uint32_t)(esi + 0x2acu);
/* db6139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db613a: mov ecx, ebp */
  ecx = ebp;
/* db613c: mov byte ptr [esp + 0x30], 4 */
  W8((uint32_t)(esp + 0x30u), 0x4u);
/* db6141: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb6146u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db6146: mov dword ptr [ebp], 0xdbf748 */
  W32((uint32_t)(ebp), 0xdbf748u);
/* db614d: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* db6153: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* db6157: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb615du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db615d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* db6161: mov dword ptr [esi + 0x2f8], edi */
  W32((uint32_t)(esi + 0x2f8u), edi);
/* db6167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6168: mov eax, esi */
  eax = esi;
/* db616a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db616b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db616c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db6173: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6174: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db6177: ret  */
  esp += 4; SPILL(); return;
}

void f_db6200(void) {
  LOAD_REGS();
L_db6200: /* db6200: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db6202: push 0xdbb82b */
  { uint32_t v = 0xdbb82bu; esp -= 4; W32(esp, v); }
/* db6207: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db620d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db620e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db6215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6216: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6217: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6219: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db621a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* db621e: mov esi, ecx */
  esi = ecx;
/* db6220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6221: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* db6225: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb622au); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db622a: lea ebp, [edi + 0x3c] */
  ebp = (uint32_t)(edi + 0x3cu);
/* db622d: lea ebx, [esi + 0x3c] */
  ebx = (uint32_t)(esi + 0x3cu);
/* db6230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6231: mov ecx, ebx */
  ecx = ebx;
/* db6233: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* db623b: mov dword ptr [esi], 0xdc6db8 */
  W32((uint32_t)(esi), 0xdc6db8u);
/* db6241: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb6246u); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db6246: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db624c: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* db6252: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* db6258: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* db625e: mov dword ptr [ebx + 0x98], ecx */
  W32((uint32_t)(ebx + 0x98u), ecx);
/* db6264: lea ebp, [edi + 0xd8] */
  ebp = (uint32_t)(edi + 0xd8u);
/* db626a: lea ebx, [esi + 0xd8] */
  ebx = (uint32_t)(esi + 0xd8u);
/* db6270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6271: mov ecx, ebx */
  ecx = ebx;
/* db6273: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* db6278: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb627du); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db627d: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db6283: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* db6289: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* db628f: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* db6295: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* db629b: lea ebp, [edi + 0x174] */
  ebp = (uint32_t)(edi + 0x174u);
/* db62a1: lea ebx, [esi + 0x174] */
  ebx = (uint32_t)(esi + 0x174u);
/* db62a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db62a8: mov ecx, ebx */
  ecx = ebx;
/* db62aa: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* db62af: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb62b4u); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db62b4: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db62ba: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* db62c0: mov dword ptr [ebx + 0x94], ecx */
  W32((uint32_t)(ebx + 0x94u), ecx);
/* db62c6: mov edx, dword ptr [ebp + 0x98] */
  edx = R32((uint32_t)(ebp + 0x98u));
/* db62cc: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
/* db62d2: lea ebp, [edi + 0x210] */
  ebp = (uint32_t)(edi + 0x210u);
/* db62d8: lea ebx, [esi + 0x210] */
  ebx = (uint32_t)(esi + 0x210u);
/* db62de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db62df: mov ecx, ebx */
  ecx = ebx;
/* db62e1: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* db62e6: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb62ebu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db62eb: mov dword ptr [ebx], 0xdc1ac8 */
  W32((uint32_t)(ebx), 0xdc1ac8u);
/* db62f1: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* db62f7: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* db62fd: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* db6303: mov dword ptr [ebx + 0x98], ecx */
  W32((uint32_t)(ebx + 0x98u), ecx);
/* db6309: lea ebp, [edi + 0x2ac] */
  ebp = (uint32_t)(edi + 0x2acu);
/* db630f: lea ebx, [esi + 0x2ac] */
  ebx = (uint32_t)(esi + 0x2acu);
/* db6315: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6316: mov ecx, ebx */
  ecx = ebx;
/* db6318: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* db631d: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb6322u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db6322: mov dword ptr [ebx], 0xdc08d0 */
  W32((uint32_t)(ebx), 0xdc08d0u);
/* db6328: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* db632b: mov dword ptr [ebx + 0x3c], edx */
  W32((uint32_t)(ebx + 0x3cu), edx);
/* db632e: mov dword ptr [ebx], 0xdbf748 */
  W32((uint32_t)(ebx), 0xdbf748u);
/* db6334: lea eax, [edi + 0x2ec] */
  eax = (uint32_t)(edi + 0x2ecu);
/* db633a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db633b: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* db6341: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* db6346: call 0xd82883 */
  esp -= 4; W32(esp, 0xdb634bu); SPILL(); f_d82883(); if (g_unwind) return; RELOAD();
/* db634b: mov ecx, dword ptr [edi + 0x2f8] */
  ecx = R32((uint32_t)(edi + 0x2f8u));
/* db6351: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6352: mov dword ptr [esi + 0x2f8], ecx */
  W32((uint32_t)(esi + 0x2f8u), ecx);
/* db6358: mov eax, esi */
  eax = esi;
/* db635a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db635b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db635c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db6360: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6361: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db6368: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db636b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db63d0(void) {
  LOAD_REGS();
L_db63d0: /* db63d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db63d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db63d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db63d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db63d4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* db63d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db63d9: mov esi, ecx */
  esi = ecx;
/* db63db: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb63e0u); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db63e0: lea ebx, [edi + 0x3c] */
  ebx = (uint32_t)(edi + 0x3cu);
/* db63e3: lea ebp, [esi + 0x3c] */
  ebp = (uint32_t)(esi + 0x3cu);
/* db63e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db63e7: mov ecx, ebp */
  ecx = ebp;
/* db63e9: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb63eeu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db63ee: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* db63f4: mov dword ptr [ebp + 0x94], eax */
  W32((uint32_t)(ebp + 0x94u), eax);
/* db63fa: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* db6400: mov dword ptr [ebp + 0x98], ecx */
  W32((uint32_t)(ebp + 0x98u), ecx);
/* db6406: lea ebx, [edi + 0xd8] */
  ebx = (uint32_t)(edi + 0xd8u);
/* db640c: lea ebp, [esi + 0xd8] */
  ebp = (uint32_t)(esi + 0xd8u);
/* db6412: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6413: mov ecx, ebp */
  ecx = ebp;
/* db6415: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb641au); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db641a: mov edx, dword ptr [ebx + 0x94] */
  edx = R32((uint32_t)(ebx + 0x94u));
/* db6420: mov dword ptr [ebp + 0x94], edx */
  W32((uint32_t)(ebp + 0x94u), edx);
/* db6426: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* db642c: mov dword ptr [ebp + 0x98], eax */
  W32((uint32_t)(ebp + 0x98u), eax);
/* db6432: lea ebx, [edi + 0x174] */
  ebx = (uint32_t)(edi + 0x174u);
/* db6438: lea ebp, [esi + 0x174] */
  ebp = (uint32_t)(esi + 0x174u);
/* db643e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db643f: mov ecx, ebp */
  ecx = ebp;
/* db6441: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb6446u); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db6446: mov ecx, dword ptr [ebx + 0x94] */
  ecx = R32((uint32_t)(ebx + 0x94u));
/* db644c: mov dword ptr [ebp + 0x94], ecx */
  W32((uint32_t)(ebp + 0x94u), ecx);
/* db6452: mov edx, dword ptr [ebx + 0x98] */
  edx = R32((uint32_t)(ebx + 0x98u));
/* db6458: mov dword ptr [ebp + 0x98], edx */
  W32((uint32_t)(ebp + 0x98u), edx);
/* db645e: lea ebx, [edi + 0x210] */
  ebx = (uint32_t)(edi + 0x210u);
/* db6464: lea ebp, [esi + 0x210] */
  ebp = (uint32_t)(esi + 0x210u);
/* db646a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db646b: mov ecx, ebp */
  ecx = ebp;
/* db646d: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb6472u); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db6472: mov eax, dword ptr [ebx + 0x94] */
  eax = R32((uint32_t)(ebx + 0x94u));
/* db6478: mov dword ptr [ebp + 0x94], eax */
  W32((uint32_t)(ebp + 0x94u), eax);
/* db647e: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* db6484: mov dword ptr [ebp + 0x98], ecx */
  W32((uint32_t)(ebp + 0x98u), ecx);
/* db648a: lea ebx, [edi + 0x2ac] */
  ebx = (uint32_t)(edi + 0x2acu);
/* db6490: lea ebp, [esi + 0x2ac] */
  ebp = (uint32_t)(esi + 0x2acu);
/* db6496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6497: mov ecx, ebp */
  ecx = ebp;
/* db6499: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb649eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db649e: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* db64a1: lea eax, [edi + 0x2ec] */
  eax = (uint32_t)(edi + 0x2ecu);
/* db64a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db64a8: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* db64ae: mov dword ptr [ebp + 0x3c], edx */
  W32((uint32_t)(ebp + 0x3cu), edx);
/* db64b1: call 0xd8132a */
  esp -= 4; W32(esp, 0xdb64b6u); SPILL(); f_d8132a(); if (g_unwind) return; RELOAD();
/* db64b6: mov ecx, dword ptr [edi + 0x2f8] */
  ecx = R32((uint32_t)(edi + 0x2f8u));
/* db64bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db64bd: mov dword ptr [esi + 0x2f8], ecx */
  W32((uint32_t)(esi + 0x2f8u), ecx);
/* db64c3: mov eax, esi */
  eax = esi;
/* db64c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db64c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db64c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db64c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6510(void) {
  LOAD_REGS();
L_db6510: /* db6510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6511: mov esi, ecx */
  esi = ecx;
/* db6513: call 0xd81a9b */
  esp -= 4; W32(esp, 0xdb6518u); SPILL(); f_d81a9b(); if (g_unwind) return; RELOAD();
/* db6518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db651d: je 0xdb652c */
  if (zf) goto L_db652c;
L_db651f: /* db651f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6524: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6526: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6529: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb652cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db652c: /* db652c: mov eax, esi */
  eax = esi;
/* db652e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db652f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6550(void) {
  LOAD_REGS();
L_db6550: /* db6550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6551: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db6555: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6558: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6559: mov esi, ecx */
  esi = ecx;
/* db655b: je 0xdb6590 */
  if (zf) goto L_db6590;
L_db655d: /* db655d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db6560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6561: push 0xd81a9b */
  { uint32_t v = 0xd81a9bu; esp -= 4; W32(esp, v); }
/* db6566: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db6569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db656a: push 0x2fc */
  { uint32_t v = 0x2fcu; esp -= 4; W32(esp, v); }
/* db656f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6570: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb6575u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db6575: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6578: je 0xdb6588 */
  if (zf) goto L_db6588;
L_db657a: /* db657a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db6580: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db6582: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6585: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6588: /* db6588: mov eax, edi */
  eax = edi;
/* db658a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db658b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db658c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db658d: ret 4 */
  esp += 8; SPILL(); return;
L_db6590: /* db6590: mov ecx, esi */
  ecx = esi;
/* db6592: call 0xd81a9b */
  esp -= 4; W32(esp, 0xdb6597u); SPILL(); f_d81a9b(); if (g_unwind) return; RELOAD();
/* db6597: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db659a: je 0xdb65a9 */
  if (zf) goto L_db65a9;
L_db659c: /* db659c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db65a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db65a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db65a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db65a6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb65a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db65a9: /* db65a9: mov eax, esi */
  eax = esi;
/* db65ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db65ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db65ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db65d0(void) {
  LOAD_REGS();
L_db65d0: /* db65d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db65d2: push 0xdbb858 */
  { uint32_t v = 0xdbb858u; esp -= 4; W32(esp, v); }
/* db65d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db65dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db65de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db65e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db65e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db65e7: mov esi, ecx */
  esi = ecx;
/* db65e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db65ed: mov dword ptr [esi], 0xdc6ef8 */
  W32((uint32_t)(esi), 0xdc6ef8u);
/* db65f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db65fb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb6600u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db6600: mov ecx, esi */
  ecx = esi;
/* db6602: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db660a: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb660fu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db660f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db6613: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6614: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db661b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db661e: ret  */
  esp += 4; SPILL(); return;
}

void f_db6640(void) {
  LOAD_REGS();
L_db6640: /* db6640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6642: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6643: mov esi, ecx */
  esi = ecx;
/* db6645: xor edi, edi */
  edi = 0;
/* db6647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6648: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db664c: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb6652u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db6652: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db6656: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db6659: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db665c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db665f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db6662: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db6668: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db666b: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db666f: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db6675: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db6678: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db667b: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db667e: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db6681: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb6687u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db6687: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db668a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db668b: mov dword ptr [esi], 0xdc6ef8 */
  W32((uint32_t)(esi), 0xdc6ef8u);
/* db6691: mov eax, esi */
  eax = esi;
/* db6693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6694: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db6695: ret  */
  esp += 4; SPILL(); return;
}

void f_db66c0(void) {
  LOAD_REGS();
L_db66c0: /* db66c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db66c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db66c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db66c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db66c5: mov esi, ecx */
  esi = ecx;
/* db66c7: push 0xde4930 */
  { uint32_t v = 0xde4930u; esp -= 4; W32(esp, v); }
/* db66cc: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* db66d0: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb66d6u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db66d6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db66da: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db66de: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db66e1: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db66e4: xor edi, edi */
  edi = 0;
/* db66e6: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db66e9: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db66ec: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db66ef: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db66f5: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db66f8: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db66fc: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db6702: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db6705: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db6708: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db670b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb6711u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db6711: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db6714: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6715: mov dword ptr [esi], 0xdc6ef8 */
  W32((uint32_t)(esi), 0xdc6ef8u);
/* db671b: mov eax, esi */
  eax = esi;
/* db671d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db671e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db671f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6750(void) {
  LOAD_REGS();
L_db6750: /* db6750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db6754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6756: mov esi, ecx */
  esi = ecx;
/* db6758: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb675du); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db675d: mov dword ptr [esi], 0xdc6ef8 */
  W32((uint32_t)(esi), 0xdc6ef8u);
/* db6763: mov eax, esi */
  eax = esi;
/* db6765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6766: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6780(void) {
  LOAD_REGS();
L_db6780: /* db6780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db6784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6786: mov esi, ecx */
  esi = ecx;
/* db6788: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb678du); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db678d: mov eax, esi */
  eax = esi;
/* db678f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6790: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db67b0(void) {
  LOAD_REGS();
L_db67b0: /* db67b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db67b1: mov esi, ecx */
  esi = ecx;
/* db67b3: call 0xd82234 */
  esp -= 4; W32(esp, 0xdb67b8u); SPILL(); f_d82234(); if (g_unwind) return; RELOAD();
/* db67b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db67bd: je 0xdb67cc */
  if (zf) goto L_db67cc;
L_db67bf: /* db67bf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db67c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db67c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db67c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db67c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb67ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db67cc: /* db67cc: mov eax, esi */
  eax = esi;
/* db67ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db67cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db67f0(void) {
  LOAD_REGS();
L_db67f0: /* db67f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db67f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db67f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db67f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db67f9: mov esi, ecx */
  esi = ecx;
/* db67fb: je 0xdb682d */
  if (zf) goto L_db682d;
L_db67fd: /* db67fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db6800: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6801: push 0xd82234 */
  { uint32_t v = 0xd82234u; esp -= 4; W32(esp, v); }
/* db6806: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db6809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db680a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* db680c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db680d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb6812u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db6812: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6815: je 0xdb6825 */
  if (zf) goto L_db6825;
L_db6817: /* db6817: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db681d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db681f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6821: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6822: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6825: /* db6825: mov eax, edi */
  eax = edi;
/* db6827: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6828: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6829: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db682a: ret 4 */
  esp += 8; SPILL(); return;
L_db682d: /* db682d: mov ecx, esi */
  ecx = esi;
/* db682f: call 0xd82234 */
  esp -= 4; W32(esp, 0xdb6834u); SPILL(); f_d82234(); if (g_unwind) return; RELOAD();
/* db6834: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6837: je 0xdb6846 */
  if (zf) goto L_db6846;
L_db6839: /* db6839: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db683e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6840: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6843: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6846: /* db6846: mov eax, esi */
  eax = esi;
/* db6848: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6849: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db684a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6870(void) {
  LOAD_REGS();
L_db6870: /* db6870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db6872: push 0xdbb878 */
  { uint32_t v = 0xdbb878u; esp -= 4; W32(esp, v); }
/* db6877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db687d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db687e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db6885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6887: mov esi, ecx */
  esi = ecx;
/* db6889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db688d: mov dword ptr [esi], 0xdc7010 */
  W32((uint32_t)(esi), 0xdc7010u);
/* db6893: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db689b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb68a0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db68a0: mov ecx, esi */
  ecx = esi;
/* db68a2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db68aa: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb68afu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db68af: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db68b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db68b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db68bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db68be: ret  */
  esp += 4; SPILL(); return;
}

void f_db68e0(void) {
  LOAD_REGS();
L_db68e0: /* db68e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db68e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db68e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db68e3: mov esi, ecx */
  esi = ecx;
/* db68e5: xor edi, edi */
  edi = 0;
/* db68e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db68e8: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db68ec: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb68f2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db68f2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db68f6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db68f9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db68fc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db68ff: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db6902: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db6908: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db690b: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db690f: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db6915: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db6918: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db691b: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db691e: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db6921: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb6927u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db6927: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db692a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db692b: mov dword ptr [esi], 0xdc7010 */
  W32((uint32_t)(esi), 0xdc7010u);
/* db6931: mov dword ptr [esi + 0x3c], 1 */
  W32((uint32_t)(esi + 0x3cu), 0x1u);
/* db6938: mov eax, esi */
  eax = esi;
/* db693a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db693b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db693c: ret  */
  esp += 4; SPILL(); return;
}

void f_db6960(void) {
  LOAD_REGS();
L_db6960: /* db6960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6963: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db6965: mov esi, ecx */
  esi = ecx;
/* db6967: push 0xde4954 */
  { uint32_t v = 0xde4954u; esp -= 4; W32(esp, v); }
/* db696c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* db6970: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb6976u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db6976: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db697a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db697e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db6981: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db6984: xor edi, edi */
  edi = 0;
/* db6986: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db6989: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db698c: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db698f: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db6995: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db6998: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db699c: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db69a2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db69a5: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db69a8: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db69ab: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb69b1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db69b1: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db69b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db69b5: mov dword ptr [esi], 0xdc7010 */
  W32((uint32_t)(esi), 0xdc7010u);
/* db69bb: mov eax, esi */
  eax = esi;
/* db69bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db69be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db69bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db69f0(void) {
  LOAD_REGS();
L_db69f0: /* db69f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db69f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db69f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db69f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db69f7: mov esi, ecx */
  esi = ecx;
/* db69f9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb69feu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db69fe: mov dword ptr [esi], 0xdc7010 */
  W32((uint32_t)(esi), 0xdc7010u);
/* db6a04: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db6a07: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db6a0a: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db6a0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6a0e: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db6a11: mov eax, esi */
  eax = esi;
/* db6a13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6a14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6a30(void) {
  LOAD_REGS();
L_db6a30: /* db6a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6a31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6a32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db6a36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6a37: mov esi, ecx */
  esi = ecx;
/* db6a39: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb6a3eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db6a3e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db6a41: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db6a44: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db6a47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6a48: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db6a4b: mov eax, esi */
  eax = esi;
/* db6a4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6a4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6a70(void) {
  LOAD_REGS();
L_db6a70: /* db6a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6a71: mov esi, ecx */
  esi = ecx;
/* db6a73: call 0xd8111d */
  esp -= 4; W32(esp, 0xdb6a78u); SPILL(); f_d8111d(); if (g_unwind) return; RELOAD();
/* db6a78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6a7d: je 0xdb6a8c */
  if (zf) goto L_db6a8c;
L_db6a7f: /* db6a7f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6a84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6a86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6a89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6a8c: /* db6a8c: mov eax, esi */
  eax = esi;
/* db6a8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6a8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6ab0(void) {
  LOAD_REGS();
L_db6ab0: /* db6ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6ab1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db6ab5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6ab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6ab9: mov esi, ecx */
  esi = ecx;
/* db6abb: je 0xdb6aed */
  if (zf) goto L_db6aed;
L_db6abd: /* db6abd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db6ac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6ac1: push 0xd8111d */
  { uint32_t v = 0xd8111du; esp -= 4; W32(esp, v); }
/* db6ac6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db6ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6aca: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* db6acc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6acd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb6ad2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db6ad2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6ad5: je 0xdb6ae5 */
  if (zf) goto L_db6ae5;
L_db6ad7: /* db6ad7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db6add: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db6adf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6ae1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6ae2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6ae5: /* db6ae5: mov eax, edi */
  eax = edi;
/* db6ae7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6ae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6ae9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6aea: ret 4 */
  esp += 8; SPILL(); return;
L_db6aed: /* db6aed: mov ecx, esi */
  ecx = esi;
/* db6aef: call 0xd8111d */
  esp -= 4; W32(esp, 0xdb6af4u); SPILL(); f_d8111d(); if (g_unwind) return; RELOAD();
/* db6af4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6af7: je 0xdb6b06 */
  if (zf) goto L_db6b06;
L_db6af9: /* db6af9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6afe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6b00: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6b03: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6b06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6b06: /* db6b06: mov eax, esi */
  eax = esi;
/* db6b08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6b09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6b0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6b30(void) {
  LOAD_REGS();
L_db6b30: /* db6b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db6b32: push 0xdbb898 */
  { uint32_t v = 0xdbb898u; esp -= 4; W32(esp, v); }
/* db6b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db6b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db6b45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6b47: mov esi, ecx */
  esi = ecx;
/* db6b49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db6b4d: mov dword ptr [esi], 0xdc7128 */
  W32((uint32_t)(esi), 0xdc7128u);
/* db6b53: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db6b5b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb6b60u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db6b60: mov ecx, esi */
  ecx = esi;
/* db6b62: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db6b6a: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb6b6fu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db6b6f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db6b73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6b74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db6b7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db6b7e: ret  */
  esp += 4; SPILL(); return;
}

void f_db6ba0(void) {
  LOAD_REGS();
L_db6ba0: /* db6ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6ba1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6ba2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6ba3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db6ba5: mov esi, ecx */
  esi = ecx;
/* db6ba7: push 0xde496c */
  { uint32_t v = 0xde496cu; esp -= 4; W32(esp, v); }
/* db6bac: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* db6bb0: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb6bb6u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db6bb6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db6bba: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db6bbe: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db6bc1: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db6bc4: xor edi, edi */
  edi = 0;
/* db6bc6: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db6bc9: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db6bcc: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db6bcf: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db6bd5: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db6bd8: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db6bdc: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db6be2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db6be5: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db6be8: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db6beb: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb6bf1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db6bf1: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db6bf4: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* db6bf7: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* db6bfa: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* db6bfd: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* db6c00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6c01: mov dword ptr [esi], 0xdc7128 */
  W32((uint32_t)(esi), 0xdc7128u);
/* db6c07: mov eax, esi */
  eax = esi;
/* db6c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6c0a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db6c0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6c30(void) {
  LOAD_REGS();
L_db6c30: /* db6c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6c31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6c32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db6c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6c37: mov esi, ecx */
  esi = ecx;
/* db6c39: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb6c3eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db6c3e: mov dword ptr [esi], 0xdc7128 */
  W32((uint32_t)(esi), 0xdc7128u);
/* db6c44: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db6c47: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db6c4a: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db6c4d: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db6c50: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db6c53: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db6c56: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db6c59: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db6c5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6c5d: mov eax, esi */
  eax = esi;
/* db6c5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6c60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6c80(void) {
  LOAD_REGS();
L_db6c80: /* db6c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6c82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db6c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6c87: mov esi, ecx */
  esi = ecx;
/* db6c89: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb6c8eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db6c8e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db6c91: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db6c94: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* db6c97: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db6c9a: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* db6c9d: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* db6ca0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* db6ca3: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db6ca6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6ca7: mov eax, esi */
  eax = esi;
/* db6ca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6caa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6cc0(void) {
  LOAD_REGS();
L_db6cc0: /* db6cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6cc1: mov esi, ecx */
  esi = ecx;
/* db6cc3: call 0xd818ed */
  esp -= 4; W32(esp, 0xdb6cc8u); SPILL(); f_d818ed(); if (g_unwind) return; RELOAD();
/* db6cc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6ccd: je 0xdb6cdc */
  if (zf) goto L_db6cdc;
L_db6ccf: /* db6ccf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6cd4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6cd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6cd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6cdc: /* db6cdc: mov eax, esi */
  eax = esi;
/* db6cde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6cdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6d00(void) {
  LOAD_REGS();
L_db6d00: /* db6d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6d01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db6d05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6d09: mov esi, ecx */
  esi = ecx;
/* db6d0b: je 0xdb6d3d */
  if (zf) goto L_db6d3d;
L_db6d0d: /* db6d0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db6d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6d11: push 0xd818ed */
  { uint32_t v = 0xd818edu; esp -= 4; W32(esp, v); }
/* db6d16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db6d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6d1a: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* db6d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6d1d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb6d22u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db6d22: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6d25: je 0xdb6d35 */
  if (zf) goto L_db6d35;
L_db6d27: /* db6d27: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db6d2d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db6d2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6d32: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6d35: /* db6d35: mov eax, edi */
  eax = edi;
/* db6d37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6d38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6d39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6d3a: ret 4 */
  esp += 8; SPILL(); return;
L_db6d3d: /* db6d3d: mov ecx, esi */
  ecx = esi;
/* db6d3f: call 0xd818ed */
  esp -= 4; W32(esp, 0xdb6d44u); SPILL(); f_d818ed(); if (g_unwind) return; RELOAD();
/* db6d44: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db6d47: je 0xdb6d56 */
  if (zf) goto L_db6d56;
L_db6d49: /* db6d49: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6d4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6d50: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6d52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6d53: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb6d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db6d56: /* db6d56: mov eax, esi */
  eax = esi;
/* db6d58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6d5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6d80(void) {
  LOAD_REGS();
L_db6d80: /* db6d80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db6d82: push 0xdbb8b9 */
  { uint32_t v = 0xdbb8b9u; esp -= 4; W32(esp, v); }
/* db6d87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db6d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6d8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db6d95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6d97: mov esi, ecx */
  esi = ecx;
/* db6d99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db6d9d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* db6da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6da1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db6da3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db6dab: call 0xd82095 */
  esp -= 4; W32(esp, 0xdb6db0u); SPILL(); f_d82095(); if (g_unwind) return; RELOAD();
/* db6db0: mov ecx, esi */
  ecx = esi;
/* db6db2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db6dba: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdb6dc0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* db6dc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db6dc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6dc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db6dcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db6dcf: ret  */
  esp += 4; SPILL(); return;
}

void f_db6df0(void) {
  LOAD_REGS();
L_db6df0: /* db6df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6df1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6df2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6df3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* db6df7: mov esi, ecx */
  esi = ecx;
/* db6df9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6dfb: je 0xdb6e40 */
  if (zf) goto L_db6e40;
L_db6dfd: /* db6dfd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* db6e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6e01: call 0xd81c49 */
  esp -= 4; W32(esp, 0xdb6e06u); SPILL(); f_d81c49(); if (g_unwind) return; RELOAD();
/* db6e06: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* db6e09: xor ebx, ebx */
  ebx = 0;
/* db6e0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* db6e0d: jle 0xdb6e40 */
  if ((zf || sf != of)) goto L_db6e40;
L_db6e0f: /* db6e0f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6e10: xor ebp, ebp */
  ebp = 0;
L_db6e12: /* db6e12: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* db6e14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db6e16: mov ecx, esi */
  ecx = esi;
/* db6e18: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdb6e1eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* db6e1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* db6e20: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* db6e23: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* db6e26: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db6e28: je 0xdb6e34 */
  if (zf) goto L_db6e34;
L_db6e2a: /* db6e2a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* db6e2c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db6e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6e2f: call 0xd81c44 */
  esp -= 4; W32(esp, 0xdb6e34u); SPILL(); f_d81c44(); if (g_unwind) return; RELOAD();
L_db6e34: /* db6e34: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* db6e37: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* db6e38: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* db6e3b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* db6e3d: jl 0xdb6e12 */
  if ((sf != of)) goto L_db6e12;
L_db6e3f: /* db6e3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_db6e40: /* db6e40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6e41: mov eax, esi */
  eax = esi;
/* db6e43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6e44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6e45: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6e70(void) {
  LOAD_REGS();
L_db6e70: /* db6e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db6e71: mov ebp, esp */
  ebp = esp;
/* db6e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db6e75: push 0xdbb8f1 */
  { uint32_t v = 0xdbb8f1u; esp -= 4; W32(esp, v); }
/* db6e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db6e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db6e88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db6e8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6e8d: mov esi, ecx */
  esi = ecx;
/* db6e8f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* db6e92: xor ebx, ebx */
  ebx = 0;
/* db6e94: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db6e97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* db6e9a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* db6e9d: je 0xdb6ea4 */
  if (zf) goto L_db6ea4;
L_db6e9f: /* db6e9f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* db6ea2: jmp 0xdb6ea6 */
  goto L_db6ea6;
L_db6ea4: /* db6ea4: xor eax, eax */
  eax = 0;
L_db6ea6: /* db6ea6: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* db6eac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6ead: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6eaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eb3: push 0x56000000 */
  { uint32_t v = 0x56000000u; esp -= 4; W32(esp, v); }
/* db6eb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eba: mov ecx, esi */
  ecx = esi;
/* db6ebc: call 0xd81852 */
  esp -= 4; W32(esp, 0xdb6ec1u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* db6ec1: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* db6ec7: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6ec9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6eca: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* db6ecc: je 0xdb6ee3 */
  if (zf) goto L_db6ee3;
L_db6ece: /* db6ece: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdb6ed4u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* db6ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6ed5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* db6ed8: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* db6eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6edb: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdb6ee1u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* db6ee1: jmp 0xdb6ef6 */
  goto L_db6ef6;
L_db6ee3: /* db6ee3: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xdb6ee9u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* db6ee9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* db6eec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db6eed: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* db6eef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6ef0: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdb6ef6u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_db6ef6: /* db6ef6: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* db6efc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* db6efe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* db6f00: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* db6f05: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* db6f07: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xdb6f09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db6f09: mov ecx, eax */
  ecx = eax;
/* db6f0b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* db6f0e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6f10: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* db6f14: je 0xdb6f20 */
  if (zf) goto L_db6f20;
L_db6f16: /* db6f16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6f17: call 0xd81398 */
  esp -= 4; W32(esp, 0xdb6f1cu); SPILL(); f_d81398(); if (g_unwind) return; RELOAD();
/* db6f1c: mov ecx, eax */
  ecx = eax;
/* db6f1e: jmp 0xdb6f22 */
  goto L_db6f22;
L_db6f20: /* db6f20: xor ecx, ecx */
  ecx = 0;
L_db6f22: /* db6f22: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* db6f25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db6f26: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* db6f29: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* db6f2c: call 0xd81e74 */
  esp -= 4; W32(esp, 0xdb6f31u); SPILL(); f_d81e74(); if (g_unwind) return; RELOAD();
/* db6f31: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* db6f34: mov dword ptr [eax + 0x40], 0x41700000 */
  W32((uint32_t)(eax + 0x40u), 0x41700000u);
/* db6f3b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* db6f3e: call 0xd8160e */
  esp -= 4; W32(esp, 0xdb6f43u); SPILL(); f_d8160e(); if (g_unwind) return; RELOAD();
/* db6f43: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db6f49: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db6f4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6f4d: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* db6f52: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* db6f54: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdb6f56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db6f56: mov ecx, eax */
  ecx = eax;
/* db6f58: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* db6f5b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6f5d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* db6f61: je 0xdb6f6d */
  if (zf) goto L_db6f6d;
L_db6f63: /* db6f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6f64: call 0xd82874 */
  esp -= 4; W32(esp, 0xdb6f69u); SPILL(); f_d82874(); if (g_unwind) return; RELOAD();
/* db6f69: mov ecx, eax */
  ecx = eax;
/* db6f6b: jmp 0xdb6f6f */
  goto L_db6f6f;
L_db6f6d: /* db6f6d: xor ecx, ecx */
  ecx = 0;
L_db6f6f: /* db6f6f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* db6f72: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db6f75: call 0xd822de */
  esp -= 4; W32(esp, 0xdb6f7au); SPILL(); f_d822de(); if (g_unwind) return; RELOAD();
/* db6f7a: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db6f7f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db6f81: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db6f83: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* db6f88: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* db6f8a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdb6f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db6f8c: mov ecx, eax */
  ecx = eax;
/* db6f8e: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* db6f91: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db6f93: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* db6f97: je 0xdb6fa3 */
  if (zf) goto L_db6fa3;
L_db6f99: /* db6f99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db6f9a: call 0xd82874 */
  esp -= 4; W32(esp, 0xdb6f9fu); SPILL(); f_d82874(); if (g_unwind) return; RELOAD();
/* db6f9f: mov ecx, eax */
  ecx = eax;
/* db6fa1: jmp 0xdb6fa5 */
  goto L_db6fa5;
L_db6fa3: /* db6fa3: xor ecx, ecx */
  ecx = 0;
L_db6fa5: /* db6fa5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* db6fa8: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db6fab: call 0xd822de */
  esp -= 4; W32(esp, 0xdb6fb0u); SPILL(); f_d822de(); if (g_unwind) return; RELOAD();
/* db6fb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* db6fb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db6fb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db6fb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db6fbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db6fbd: mov esp, ebp */
  esp = ebp;
/* db6fbf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db6fc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db6fc3(void) {
  LOAD_REGS();
L_db6fc3: /* db6fc3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db6fc6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* db6fcb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* db6fce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db6fcf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* db6fd2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdb6fd7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_db6fd7(); return;
}

void f_db6fd7(void) {
  LOAD_REGS();
L_db6fd7: /* db6fd7: push 0xdc7244 */
  { uint32_t v = 0xdc7244u; esp -= 4; W32(esp, v); }
/* db6fdc: push 0xde4298 */
  { uint32_t v = 0xde4298u; esp -= 4; W32(esp, v); }
/* db6fe1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdb6fe7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* db6fe7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db6fea: xor ebx, ebx */
  ebx = 0;
/* db6fec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6fed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db6fee: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdb6ff3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_db6ff3: guest_badaddr(0xdb6ff3); return;
}

void f_db7070(void) {
  LOAD_REGS();
L_db7070: /* db7070: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db7072: push 0xdbb93a */
  { uint32_t v = 0xdbb93au; esp -= 4; W32(esp, v); }
/* db7077: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db707d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db707e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db7085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db7086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7087: mov esi, ecx */
  esi = ecx;
/* db7089: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db708d: mov dword ptr [esi], 0xdc7290 */
  W32((uint32_t)(esi), 0xdc7290u);
/* db7093: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* db709b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb70a0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db70a0: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* db70a3: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* db70a8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb70aeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db70ae: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db70b1: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* db70b6: call 0xd810e1 */
  esp -= 4; W32(esp, 0xdb70bbu); SPILL(); f_d810e1(); if (g_unwind) return; RELOAD();
/* db70bb: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db70be: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db70c3: call 0xd828ce */
  esp -= 4; W32(esp, 0xdb70c8u); SPILL(); f_d828ce(); if (g_unwind) return; RELOAD();
/* db70c8: mov ecx, esi */
  ecx = esi;
/* db70ca: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db70d2: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb70d7u); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db70d7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db70db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db70dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db70e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db70e6: ret  */
  esp += 4; SPILL(); return;
}

void f_db7110(void) {
  LOAD_REGS();
L_db7110: /* db7110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db7112: push 0xdbb97e */
  { uint32_t v = 0xdbb97eu; esp -= 4; W32(esp, v); }
/* db7117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db711d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db711e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db7125: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db7128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7129: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db712a: mov esi, ecx */
  esi = ecx;
/* db712c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* db712e: push 0xde4580 */
  { uint32_t v = 0xde4580u; esp -= 4; W32(esp, v); }
/* db7133: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* db7137: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* db713b: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdb7141u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* db7141: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db7145: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* db7149: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db714c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db714f: xor edi, edi */
  edi = 0;
/* db7151: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db7154: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db7157: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db715a: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db7160: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db7163: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db7167: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db716d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db7170: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db7173: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db7176: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb717cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db717c: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db717f: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db7182: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* db7186: mov dword ptr [esi], 0xdc7290 */
  W32((uint32_t)(esi), 0xdc7290u);
/* db718c: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb7192u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db7192: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db7195: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* db719a: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb71a0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db71a0: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* db71a3: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* db71a8: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb71aeu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db71ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db71b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db71b3: mov eax, esi */
  eax = esi;
/* db71b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db71b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db71bd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db71c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db7200(void) {
  LOAD_REGS();
L_db7200: /* db7200: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db7202: push 0xdbb9be */
  { uint32_t v = 0xdbb9beu; esp -= 4; W32(esp, v); }
/* db7207: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db720d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db720e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db7215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db7216: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7217: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7218: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db721c: mov esi, ecx */
  esi = ecx;
/* db721e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db721f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db7223: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb7228u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db7228: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db722b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db722c: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db722f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db7237: mov dword ptr [esi], 0xdc7290 */
  W32((uint32_t)(esi), 0xdc7290u);
/* db723d: call 0xd826ee */
  esp -= 4; W32(esp, 0xdb7242u); SPILL(); f_d826ee(); if (g_unwind) return; RELOAD();
/* db7242: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* db7245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db7246: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db7249: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* db724e: call 0xd8204a */
  esp -= 4; W32(esp, 0xdb7253u); SPILL(); f_d8204a(); if (g_unwind) return; RELOAD();
/* db7253: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* db7256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db7257: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* db725a: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* db725f: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb7265u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db7265: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db7268: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db726c: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db726f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7270: mov eax, esi */
  eax = esi;
/* db7272: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db727a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db727d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db72a0(void) {
  LOAD_REGS();
L_db72a0: /* db72a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db72a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db72a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db72a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db72a7: mov esi, ecx */
  esi = ecx;
/* db72a9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb72aeu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db72ae: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db72b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db72b2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db72b5: call 0xd81631 */
  esp -= 4; W32(esp, 0xdb72bau); SPILL(); f_d81631(); if (g_unwind) return; RELOAD();
/* db72ba: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* db72bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db72be: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* db72c1: call 0xd810fa */
  esp -= 4; W32(esp, 0xdb72c6u); SPILL(); f_d810fa(); if (g_unwind) return; RELOAD();
/* db72c6: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* db72c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db72ca: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* db72cd: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb72d3u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db72d3: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db72d6: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db72d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db72da: mov eax, esi */
  eax = esi;
/* db72dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db72dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db72f0(void) {
  LOAD_REGS();
L_db72f0: /* db72f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db72f1: mov esi, ecx */
  esi = ecx;
/* db72f3: call 0xd82964 */
  esp -= 4; W32(esp, 0xdb72f8u); SPILL(); f_d82964(); if (g_unwind) return; RELOAD();
/* db72f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db72fd: je 0xdb730c */
  if (zf) goto L_db730c;
L_db72ff: /* db72ff: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db7304: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db7306: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db7308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7309: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb730cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db730c: /* db730c: mov eax, esi */
  eax = esi;
/* db730e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db730f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db7330(void) {
  LOAD_REGS();
L_db7330: /* db7330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7331: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db7335: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7339: mov esi, ecx */
  esi = ecx;
/* db733b: je 0xdb736d */
  if (zf) goto L_db736d;
L_db733d: /* db733d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db7340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7341: push 0xd82964 */
  { uint32_t v = 0xd82964u; esp -= 4; W32(esp, v); }
/* db7346: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db7349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db734a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* db734c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db734d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb7352u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db7352: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7355: je 0xdb7365 */
  if (zf) goto L_db7365;
L_db7357: /* db7357: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db735d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db735f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db7361: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7362: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb7365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db7365: /* db7365: mov eax, edi */
  eax = edi;
/* db7367: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7369: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db736a: ret 4 */
  esp += 8; SPILL(); return;
L_db736d: /* db736d: mov ecx, esi */
  ecx = esi;
/* db736f: call 0xd82964 */
  esp -= 4; W32(esp, 0xdb7374u); SPILL(); f_d82964(); if (g_unwind) return; RELOAD();
/* db7374: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7377: je 0xdb7386 */
  if (zf) goto L_db7386;
L_db7379: /* db7379: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db737e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db7380: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db7382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7383: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb7386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db7386: /* db7386: mov eax, esi */
  eax = esi;
/* db7388: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7389: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db738a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db73a8(void) {
  LOAD_REGS();
L_db73a8: /* db73a8: jmp dword ptr [0xde8b64] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_db73ae(void) {
  LOAD_REGS();
L_db73ae: /* db73ae: jmp dword ptr [0xde8a00] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_db73b4(void) {
  LOAD_REGS();
L_db73b4: /* db73b4: jmp dword ptr [0xde88a8] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_db73ba(void) {
  LOAD_REGS();
L_db73ba: /* db73ba: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db73c0(void) {
  LOAD_REGS();
L_db73c0: /* db73c0: jmp dword ptr [0xde88b4] */
  SPILL(); f_4e27d9(); return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */
}

void f_db73c6(void) {
  LOAD_REGS();
L_db73c6: /* db73c6: jmp dword ptr [0xde88b8] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_db73cc(void) {
  LOAD_REGS();
L_db73cc: /* db73cc: jmp dword ptr [0xde88bc] */
  SPILL(); f_4e2612(); return; /* Core!?Len@FString@@QBEHXZ */
}

void f_db73d2(void) {
  LOAD_REGS();
L_db73d2: /* db73d2: jmp dword ptr [0xde88c0] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_db73d8(void) {
  LOAD_REGS();
L_db73d8: /* db73d8: jmp dword ptr [0xde88c4] */
  SPILL(); f_4e267b(); return; /* Core!?winToANSI@@YAPADPADPBGH@Z */
}

void f_db73de(void) {
  LOAD_REGS();
L_db73de: /* db73de: jmp dword ptr [0xde88c8] */
  SPILL(); f_4e3e36(); return; /* Core!?winGetSizeANSI@@YAHPBG@Z */
}

void f_db73e4(void) {
  LOAD_REGS();
L_db73e4: /* db73e4: jmp dword ptr [0xde88d0] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_db73ea(void) {
  LOAD_REGS();
L_db73ea: /* db73ea: jmp dword ptr [0xde88d4] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_db73f0(void) {
  LOAD_REGS();
L_db73f0: /* db73f0: jmp dword ptr [0xde88d8] */
  SPILL(); f_4e4214(); return; /* Core!?appPackage@@YAPBGXZ */
}

void f_db73f6(void) {
  LOAD_REGS();
L_db73f6: /* db73f6: jmp dword ptr [0xde88dc] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_db73fc(void) {
  LOAD_REGS();
L_db73fc: /* db73fc: jmp dword ptr [0xde88e0] */
  SPILL(); f_4e2d5b(); return; /* Core!??0FArray@@QAE@XZ */
}

void f_db7402(void) {
  LOAD_REGS();
L_db7402: /* db7402: jmp dword ptr [0xde88e4] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_db7408(void) {
  LOAD_REGS();
L_db7408: /* db7408: jmp dword ptr [0xde88e8] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_db740e(void) {
  LOAD_REGS();
L_db740e: /* db740e: jmp dword ptr [0xde88ec] */
  SPILL(); f_4e161d(); return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */
}

void f_db7414(void) {
  LOAD_REGS();
L_db7414: /* db7414: jmp dword ptr [0xde88f0] */
  SPILL(); f_4e299b(); return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */
}

void f_db741a(void) {
  LOAD_REGS();
L_db741a: /* db741a: jmp dword ptr [0xde88f4] */
  SPILL(); f_4e17e4(); return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */
}

void f_db7420(void) {
  LOAD_REGS();
L_db7420: /* db7420: jmp dword ptr [0xde88fc] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_db7426(void) {
  LOAD_REGS();
L_db7426: /* db7426: jmp dword ptr [0xde8900] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_db742c(void) {
  LOAD_REGS();
L_db742c: /* db742c: jmp dword ptr [0xde8904] */
  SPILL(); f_4e2ee1(); return; /* Core!??0FName@@QAE@W4EName@@@Z */
}

void f_db7432(void) {
  LOAD_REGS();
L_db7432: /* db7432: jmp dword ptr [0xde8908] */
  SPILL(); f_4e15eb(); return; /* Core!?appClipboardCopy@@YAXPBG@Z */
}

void f_db7438(void) {
  LOAD_REGS();
L_db7438: /* db7438: jmp dword ptr [0xde890c] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_db743e(void) {
  LOAD_REGS();
L_db743e: /* db743e: jmp dword ptr [0xde8910] */
  SPILL(); f_4e31b6(); return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */
}

void f_db7444(void) {
  LOAD_REGS();
L_db7444: /* db7444: jmp dword ptr [0xde8914] */
  SPILL(); f_4e43db(); return; /* Core!?Localize@@YAPBGPBG000H@Z */
}

void f_db744a(void) {
  LOAD_REGS();
L_db744a: /* db744a: jmp dword ptr [0xde8918] */
  SPILL(); f_4e3242(); return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */
}

void f_db7450(void) {
  LOAD_REGS();
L_db7450: /* db7450: jmp dword ptr [0xde891c] */
  SPILL(); f_4e3792(); return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */
}

void f_db7456(void) {
  LOAD_REGS();
L_db7456: /* db7456: jmp dword ptr [0xde892c] */
  SPILL(); f_4e180c(); return; /* Core!??YFString@@QAEAAV0@PBG@Z */
}

void f_db745c(void) {
  LOAD_REGS();
L_db745c: /* db745c: jmp dword ptr [0xde8938] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_db7462(void) {
  LOAD_REGS();
L_db7462: /* db7462: jmp dword ptr [0xde893c] */
  SPILL(); f_4e4548(); return; /* Core!?GetIndex@FName@@QBEHXZ */
}

void f_db7468(void) {
  LOAD_REGS();
L_db7468: /* db7468: jmp dword ptr [0xde8940] */
  SPILL(); f_4e12c6(); return; /* Core!??DFName@@QBEPBGXZ */
}

void f_db746e(void) {
  LOAD_REGS();
L_db746e: /* db746e: jmp dword ptr [0xde8944] */
  SPILL(); f_4e3d19(); return; /* Core!?GetData@FArray@@QAEPAXXZ */
}

void f_db7474(void) {
  LOAD_REGS();
L_db7474: /* db7474: jmp dword ptr [0xde8948] */
  SPILL(); f_4e1a2d(); return; /* Core!?Insert@FArray@@QAEXHHH@Z */
}

void f_db747a(void) {
  LOAD_REGS();
L_db747a: /* db747a: jmp dword ptr [0xde894c] */
  SPILL(); f_4e2ab3(); return; /* Core!?GetSize@UProperty@@QBEHXZ */
}

void f_db7480(void) {
  LOAD_REGS();
L_db7480: /* db7480: jmp dword ptr [0xde8954] */
  SPILL(); f_4e414c(); return; /* Core!??8FString@@QBEHPBG@Z */
}

void f_db7486(void) {
  LOAD_REGS();
L_db7486: /* db7486: jmp dword ptr [0xde8958] */
  SPILL(); f_4e2577(); return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */
}

void f_db748c(void) {
  LOAD_REGS();
L_db748c: /* db748c: jmp dword ptr [0xde895c] */
  SPILL(); f_4e42f0(); return; /* Core!?Left@FString@@QBE?AV1@H@Z */
}

void f_db7492(void) {
  LOAD_REGS();
L_db7492: /* db7492: jmp dword ptr [0xde8960] */
  SPILL(); f_4e3530(); return; /* Core!??9FString@@QBEHPBG@Z */
}

void f_db7498(void) {
  LOAD_REGS();
L_db7498: /* db7498: jmp dword ptr [0xde8964] */
  SPILL(); f_4e1190(); return; /* Core!??NFString@@QBEHPBG@Z */
}

void f_db749e(void) {
  LOAD_REGS();
L_db749e: /* db749e: jmp dword ptr [0xde8968] */
  SPILL(); f_4e2fb3(); return; /* Core!??PFString@@QBEHPBG@Z */
}

void f_db74a4(void) {
  LOAD_REGS();
L_db74a4: /* db74a4: jmp dword ptr [0xde896c] */
  SPILL(); f_4e3fe9(); return; /* Core!?appAtoi@@YAHPBG@Z */
}

void f_db74aa(void) {
  LOAD_REGS();
L_db74aa: /* db74aa: jmp dword ptr [0xde8970] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_db74b0(void) {
  LOAD_REGS();
L_db74b0: /* db74b0: jmp dword ptr [0xde8974] */
  SPILL(); f_4e2077(); return; /* Core!?SetFlags@UObject@@QAEXK@Z */
}

void f_db74b6(void) {
  LOAD_REGS();
L_db74b6: /* db74b6: jmp dword ptr [0xde8978] */
  SPILL(); f_4e2702(); return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */
}

void f_db74bc(void) {
  LOAD_REGS();
L_db74bc: /* db74bc: jmp dword ptr [0xde897c] */
  SPILL(); f_4e157d(); return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_db74c2(void) {
  LOAD_REGS();
L_db74c2: /* db74c2: jmp dword ptr [0xde8980] */
  SPILL(); f_4e39b3(); return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */
}

void f_db74c8(void) {
  LOAD_REGS();
L_db74c8: /* db74c8: jmp dword ptr [0xde8984] */
  SPILL(); f_4e44b2(); return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */
}

void f_db74ce(void) {
  LOAD_REGS();
L_db74ce: /* db74ce: jmp dword ptr [0xde8988] */
  SPILL(); f_4e2b3a(); return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */
}

void f_db74d4(void) {
  LOAD_REGS();
L_db74d4: /* db74d4: jmp dword ptr [0xde898c] */
  SPILL(); f_4e2e8c(); return; /* Core!?StaticClass@UState@@SAPAVUClass@@XZ */
}

void f_db74da(void) {
  LOAD_REGS();
L_db74da: /* db74da: jmp dword ptr [0xde8990] */
  SPILL(); f_4e3ad5(); return; /* Core!??1FPreferencesInfo@@QAE@XZ */
}

void f_db74e0(void) {
  LOAD_REGS();
L_db74e0: /* db74e0: jmp dword ptr [0xde8994] */
  SPILL(); f_4e3d00(); return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */
}

void f_db74e6(void) {
  LOAD_REGS();
L_db74e6: /* db74e6: jmp dword ptr [0xde8998] */
  SPILL(); f_4e202c(); return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */
}

void f_db74ec(void) {
  LOAD_REGS();
L_db74ec: /* db74ec: jmp dword ptr [0xde899c] */
  SPILL(); f_4e2e6e(); return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */
}

void f_db74f2(void) {
  LOAD_REGS();
L_db74f2: /* db74f2: jmp dword ptr [0xde89a0] */
  SPILL(); f_4e2c0c(); return; /* Core!?StaticClass@UIntProperty@@SAPAVUClass@@XZ */
}

void f_db74f8(void) {
  LOAD_REGS();
L_db74f8: /* db74f8: jmp dword ptr [0xde89a4] */
  SPILL(); f_4e2df6(); return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */
}

void f_db74fe(void) {
  LOAD_REGS();
L_db74fe: /* db74fe: jmp dword ptr [0xde89a8] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_db7504(void) {
  LOAD_REGS();
L_db7504: /* db7504: jmp dword ptr [0xde89b0] */
  SPILL(); f_4e27a2(); return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */
}

void f_db750a(void) {
  LOAD_REGS();
L_db750a: /* db750a: jmp dword ptr [0xde89b4] */
  SPILL(); f_4e148d(); return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */
}

void f_db7510(void) {
  LOAD_REGS();
L_db7510: /* db7510: jmp dword ptr [0xde89b8] */
  SPILL(); f_4e36bb(); return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */
}

void f_db7516(void) {
  LOAD_REGS();
L_db7516: /* db7516: jmp dword ptr [0xde89bc] */
  SPILL(); f_4e1ae1(); return; /* Core!?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */
}

void f_db751c(void) {
  LOAD_REGS();
L_db751c: /* db751c: jmp dword ptr [0xde89c0] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_db7522(void) {
  LOAD_REGS();
L_db7522: /* db7522: jmp dword ptr [0xde89c4] */
  SPILL(); f_4e2d79(); return; /* Core!?Empty@FArray@@QAEXHH@Z */
}

void f_db7528(void) {
  LOAD_REGS();
L_db7528: /* db7528: jmp dword ptr [0xde89c8] */
  SPILL(); f_4e22e8(); return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */
}

void f_db752e(void) {
  LOAD_REGS();
L_db752e: /* db752e: jmp dword ptr [0xde89cc] */
  SPILL(); f_4e381e(); return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */
}

void f_db7534(void) {
  LOAD_REGS();
L_db7534: /* db7534: jmp dword ptr [0xde89d0] */
  SPILL(); f_4e141f(); return; /* Core!?Localize@@YAPBGPBD0PBG1H@Z */
}

void f_db753a(void) {
  LOAD_REGS();
L_db753a: /* db753a: jmp dword ptr [0xde89d4] */
  SPILL(); f_4e443a(); return; /* Core!?Split@FString@@QBEHABV1@PAV1@1H@Z */
}

void f_db7540(void) {
  LOAD_REGS();
L_db7540: /* db7540: jmp dword ptr [0xde89dc] */
  SPILL(); f_4e2cde(); return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
}

void f_db7546(void) {
  LOAD_REGS();
L_db7546: /* db7546: jmp dword ptr [0xde89e0] */
  SPILL(); f_4e29be(); return; /* Core!??8FName@@QBEHABV0@@Z */
}

void f_db754c(void) {
  LOAD_REGS();
L_db754c: /* db754c: jmp dword ptr [0xde89e4] */
  SPILL(); f_4e360c(); return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */
}

void f_db7552(void) {
  LOAD_REGS();
L_db7552: /* db7552: jmp dword ptr [0xde89e8] */
  SPILL(); f_4e19f1(); return; /* Core!?appStrlen@@YAHPBG@Z */
}

void f_db7558(void) {
  LOAD_REGS();
L_db7558: /* db7558: jmp dword ptr [0xde89ec] */
  SPILL(); f_4e33b4(); return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */
}

void f_db755e(void) {
  LOAD_REGS();
L_db755e: /* db755e: jmp dword ptr [0xde89f0] */
  SPILL(); f_4e253b(); return; /* Core!?StaticClass@UNameProperty@@SAPAVUClass@@XZ */
}

void f_db7564(void) {
  LOAD_REGS();
L_db7564: /* db7564: jmp dword ptr [0xde89f4] */
  SPILL(); f_4e3ddc(); return; /* Core!?GetLanguage@UObject@@SAPBGXZ */
}

void f_db756a(void) {
  LOAD_REGS();
L_db756a: /* db756a: jmp dword ptr [0xde89f8] */
  SPILL(); f_4e3cd3(); return; /* Core!?appSqrt@@YANN@Z */
}

void f_db7570(void) {
  LOAD_REGS();
L_db7570: /* db7570: jmp dword ptr [0xde89fc] */
  SPILL(); f_4e1055(); return; /* Core!?InStr@FString@@QBEHPBGH@Z */
}

void f_db7576(void) {
  LOAD_REGS();
L_db7576: /* db7576: jmp dword ptr [0xde8b60] */
  SPILL(); f_4e2149(); return; /* Core!??HFString@@QAE?AV0@PBG@Z */
}

void f_db757c(void) {
  LOAD_REGS();
L_db757c: /* db757c: jmp dword ptr [0xde8a04] */
  SPILL(); f_4e27ca(); return; /* Core!??9FName@@QBEHABV0@@Z */
}

void f_db7582(void) {
  LOAD_REGS();
L_db7582: /* db7582: jmp dword ptr [0xde8a08] */
  SPILL(); f_4e144c(); return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */
}

void f_db7588(void) {
  LOAD_REGS();
L_db7588: /* db7588: jmp dword ptr [0xde8a0c] */
  SPILL(); f_4e3d32(); return; /* Core!??BFString@@QBEHXZ */
}

void f_db758e(void) {
  LOAD_REGS();
L_db758e: /* db758e: jmp dword ptr [0xde8a14] */
  SPILL(); f_4e1898(); return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */
}

void f_db7594(void) {
  LOAD_REGS();
L_db7594: /* db7594: jmp dword ptr [0xde8a18] */
  SPILL(); f_4e2f2c(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */
}

void f_db759a(void) {
  LOAD_REGS();
L_db759a: /* db759a: jmp dword ptr [0xde8a1c] */
  SPILL(); f_4e1c08(); return; /* Core!?IsLoading@FArchive@@QAEHXZ */
}

void f_db75a0(void) {
  LOAD_REGS();
L_db75a0: /* db75a0: jmp dword ptr [0xde8a20] */
  SPILL(); f_4e3d05(); return; /* Core!?GetSuperClass@UClass@@QBEPAV1@XZ */
}

void f_db75a6(void) {
  LOAD_REGS();
L_db75a6: /* db75a6: jmp dword ptr [0xde8a24] */
  SPILL(); f_4e20e5(); return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */
}

void f_db75ac(void) {
  LOAD_REGS();
L_db75ac: /* db75ac: jmp dword ptr [0xde8a28] */
  SPILL(); f_4e1415(); return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */
}

void f_db75b2(void) {
  LOAD_REGS();
L_db75b2: /* db75b2: jmp dword ptr [0xde8a2c] */
  SPILL(); f_4e3661(); return; /* Core!?GlobalSetProperty@UObject@@SAXPBGPAVUClass@@PAVUProperty@@HH@Z */
}

void f_db75b8(void) {
  LOAD_REGS();
L_db75b8: /* db75b8: jmp dword ptr [0xde8a30] */
  SPILL(); f_4e3b84(); return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */
}

void f_db75be(void) {
  LOAD_REGS();
L_db75be: /* db75be: jmp dword ptr [0xde8a34] */
  SPILL(); f_4e31cf(); return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */
}

void f_db75c4(void) {
  LOAD_REGS();
L_db75c4: /* db75c4: jmp dword ptr [0xde8a38] */
  SPILL(); f_4e2220(); return; /* Core!?appStrstr@@YAPAGPBG0@Z */
}

void f_db75ca(void) {
  LOAD_REGS();
L_db75ca: /* db75ca: jmp dword ptr [0xde8a3c] */
  SPILL(); f_4e44d0(); return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */
}

void f_db75d0(void) {
  LOAD_REGS();
L_db75d0: /* db75d0: jmp dword ptr [0xde8a40] */
  SPILL(); f_4e2dec(); return; /* Core!??0FPreferencesInfo@@QAE@ABV0@@Z */
}

void f_db75d6(void) {
  LOAD_REGS();
L_db75d6: /* db75d6: jmp dword ptr [0xde8a44] */
  SPILL(); f_4e2563(); return; /* Core!?StaticClass@UStrProperty@@SAPAVUClass@@XZ */
}

void f_db75dc(void) {
  LOAD_REGS();
L_db75dc: /* db75dc: jmp dword ptr [0xde8a50] */
  SPILL(); f_4e2743(); return; /* Core!?LoadConfig@UObject@@QAEXHPAVUClass@@PBG@Z */
}

void f_db75e2(void) {
  LOAD_REGS();
L_db75e2: /* db75e2: jmp dword ptr [0xde8a54] */
  SPILL(); f_4e2554(); return; /* Core!?GetPreferences@UObject@@SAXAAV?$TArray@VFPreferencesInfo@@@@PBGH@Z */
}

void f_db75e8(void) {
  LOAD_REGS();
L_db75e8: /* db75e8: jmp dword ptr [0xde8a58] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_db75ee(void) {
  LOAD_REGS();
L_db75ee: /* db75ee: jmp dword ptr [0xde8a60] */
  SPILL(); f_4e23ce(); return; /* Core!?appLoadFileToArray@@YAHAAV?$TArray@E@@PBGPAVFFileManager@@@Z */
}

void f_db75f4(void) {
  LOAD_REGS();
L_db75f4: /* db75f4: jmp dword ptr [0xde8a68] */
  SPILL(); f_4e3256(); return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */
}

void f_db75fa(void) {
  LOAD_REGS();
L_db75fa: /* db75fa: jmp dword ptr [0xde8a6c] */
  SPILL(); f_4e3201(); return; /* Core!?appRequestExit@@YAXH@Z */
}

void f_db7600(void) {
  LOAD_REGS();
L_db7600: /* db7600: jmp dword ptr [0xde8a70] */
  SPILL(); f_4e3869(); return; /* Core!??0FArray@@IAE@HH@Z */
}

void f_db7606(void) {
  LOAD_REGS();
L_db7606: /* db7606: jmp dword ptr [0xde8a78] */
  SPILL(); f_4e2be4(); return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */
}

void f_db760c(void) {
  LOAD_REGS();
L_db760c: /* db760c: jmp dword ptr [0xde8a7c] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_db7612(void) {
  LOAD_REGS();
L_db7612: /* db7612: jmp dword ptr [0xde8a80] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_db7618(void) {
  LOAD_REGS();
L_db7618: /* db7618: jmp dword ptr [0xde8a84] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_db761e(void) {
  LOAD_REGS();
L_db761e: /* db761e: jmp dword ptr [0xde8a88] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_db7624(void) {
  LOAD_REGS();
L_db7624: /* db7624: jmp dword ptr [0xde8a8c] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_db762a(void) {
  LOAD_REGS();
L_db762a: /* db762a: jmp dword ptr [0xde8a90] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_db7630(void) {
  LOAD_REGS();
L_db7630: /* db7630: jmp dword ptr [0xde8a94] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_db7636(void) {
  LOAD_REGS();
L_db7636: /* db7636: jmp dword ptr [0xde8a98] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_db763c(void) {
  LOAD_REGS();
L_db763c: /* db763c: jmp dword ptr [0xde8a9c] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_db7642(void) {
  LOAD_REGS();
L_db7642: /* db7642: jmp dword ptr [0xde8aa0] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_db7648(void) {
  LOAD_REGS();
L_db7648: /* db7648: jmp dword ptr [0xde8aa4] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_db764e(void) {
  LOAD_REGS();
L_db764e: /* db764e: jmp dword ptr [0xde8aa8] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_db7654(void) {
  LOAD_REGS();
L_db7654: /* db7654: jmp dword ptr [0xde8aac] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_db765a(void) {
  LOAD_REGS();
L_db765a: /* db765a: jmp dword ptr [0xde8ab0] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_db7660(void) {
  LOAD_REGS();
L_db7660: /* db7660: jmp dword ptr [0xde8ab4] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_db7666(void) {
  LOAD_REGS();
L_db7666: /* db7666: jmp dword ptr [0xde8ab8] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_db766c(void) {
  LOAD_REGS();
L_db766c: /* db766c: jmp dword ptr [0xde8abc] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_db7672(void) {
  LOAD_REGS();
L_db7672: /* db7672: jmp dword ptr [0xde8ac0] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_db7678(void) {
  LOAD_REGS();
L_db7678: /* db7678: jmp dword ptr [0xde8ac4] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_db767e(void) {
  LOAD_REGS();
L_db767e: /* db767e: jmp dword ptr [0xde8ac8] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_db7684(void) {
  LOAD_REGS();
L_db7684: /* db7684: jmp dword ptr [0xde8acc] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_db768a(void) {
  LOAD_REGS();
L_db768a: /* db768a: jmp dword ptr [0xde8ad0] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_db7690(void) {
  LOAD_REGS();
L_db7690: /* db7690: jmp dword ptr [0xde8ad4] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_db7696(void) {
  LOAD_REGS();
L_db7696: /* db7696: jmp dword ptr [0xde8ad8] */
  SPILL(); f_4e152d(); return; /* Core!??1USubsystem@@UAE@XZ */
}

void f_db769c(void) {
  LOAD_REGS();
L_db769c: /* db769c: jmp dword ptr [0xde8adc] */
  SPILL(); f_4e22e3(); return; /* Core!??0USubsystem@@IAE@XZ */
}

void f_db76a2(void) {
  LOAD_REGS();
L_db76a2: /* db76a2: jmp dword ptr [0xde8ae0] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_db76a8(void) {
  LOAD_REGS();
L_db76a8: /* db76a8: jmp dword ptr [0xde8ae4] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_db76ae(void) {
  LOAD_REGS();
L_db76ae: /* db76ae: jmp dword ptr [0xde8ae8] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_db76b4(void) {
  LOAD_REGS();
L_db76b4: /* db76b4: jmp dword ptr [0xde8af0] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_db76ba(void) {
  LOAD_REGS();
L_db76ba: /* db76ba: jmp dword ptr [0xde8af4] */
  SPILL(); f_4e3ef4(); return; /* Core!?AddToRoot@UObject@@QAEXXZ */
}

void f_db76c0(void) {
  LOAD_REGS();
L_db76c0: /* db76c0: jmp dword ptr [0xde8af8] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_db76c6(void) {
  LOAD_REGS();
L_db76c6: /* db76c6: jmp dword ptr [0xde8afc] */
  SPILL(); f_4e3ada(); return; /* Core!?appGetSystemErrorMessage@@YAPBGH@Z */
}

void f_db76cc(void) {
  LOAD_REGS();
L_db76cc: /* db76cc: jmp dword ptr [0xde8b00] */
  SPILL(); f_4e43fe(); return; /* Core!?Parse@@YAHPBG0AAH@Z */
}

void f_db76d2(void) {
  LOAD_REGS();
L_db76d2: /* db76d2: jmp dword ptr [0xde8b04] */
  SPILL(); f_4e4287(); return; /* Core!?appStrncat@@YAPAGPAGPBGH@Z */
}

void f_db76d8(void) {
  LOAD_REGS();
L_db76d8: /* db76d8: jmp dword ptr [0xde8b08] */
  SPILL(); f_4e1e79(); return; /* Core!?appClipboardPaste@@YA?AVFString@@XZ */
}

void f_db76de(void) {
  LOAD_REGS();
L_db76de: /* db76de: jmp dword ptr [0xde8b0c] */
  SPILL(); f_4e35da(); return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */
}

void f_db76e4(void) {
  LOAD_REGS();
L_db76e4: /* db76e4: jmp dword ptr [0xde8b10] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_db76ea(void) {
  LOAD_REGS();
L_db76ea: /* db76ea: jmp dword ptr [0xde8b14] */
  SPILL(); f_4e173f(); return; /* Core!??R?$TArray@G@@QAEAAGH@Z */
}

void f_db76f0(void) {
  LOAD_REGS();
L_db76f0: /* db76f0: jmp dword ptr [0xde8b18] */
  SPILL(); f_4e1082(); return; /* Core!??0?$TArray@G@@QAE@H@Z */
}

void f_db76f6(void) {
  LOAD_REGS();
L_db76f6: /* db76f6: jmp dword ptr [0xde8b28] */
  SPILL(); f_4e2ee6(); return; /* Core!?appMsgf@@YA?BHHPBGZZ */
}

void f_db76fc(void) {
  LOAD_REGS();
L_db76fc: /* db76fc: jmp dword ptr [0xde8b2c] */
  SPILL(); f_4e3346(); return; /* Core!?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */
}

void f_db7702(void) {
  LOAD_REGS();
L_db7702: /* db7702: jmp dword ptr [0xde8b30] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_db7708(void) {
  LOAD_REGS();
L_db7708: /* db7708: jmp dword ptr [0xde8b34] */
  SPILL(); f_4e2a72(); return; /* Core!?Flush@FOutputDevice@@UAEXXZ */
}

void f_db770e(void) {
  LOAD_REGS();
L_db770e: /* db770e: jmp dword ptr [0xde8b38] */
  SPILL(); f_4e22ed(); return; /* Core!??0FOutputDevice@@QAE@XZ */
}

void f_db7714(void) {
  LOAD_REGS();
L_db7714: /* db7714: jmp dword ptr [0xde8b3c] */
  SPILL(); f_4e2090(); return; /* Core!??0FOutputDevice@@QAE@ABV0@@Z */
}

void f_db771a(void) {
  LOAD_REGS();
L_db771a: /* db771a: jmp dword ptr [0xde8b40] */
  SPILL(); f_4e3026(); return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */
}

void f_db7720(void) {
  LOAD_REGS();
L_db7720: /* db7720: jmp dword ptr [0xde8b44] */
  SPILL(); f_4e1933(); return; /* Core!??0FPreferencesInfo@@QAE@XZ */
}

void f_db7726(void) {
  LOAD_REGS();
L_db7726: /* db7726: jmp dword ptr [0xde8b48] */
  SPILL(); f_4e2c2a(); return; /* Core!??4FPreferencesInfo@@QAEAAV0@ABV0@@Z */
}

void f_db772c(void) {
  LOAD_REGS();
L_db772c: /* db772c: jmp dword ptr [0xde8b4c] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_db7732(void) {
  LOAD_REGS();
L_db7732: /* db7732: jmp dword ptr [0xde8b50] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_db7738(void) {
  LOAD_REGS();
L_db7738: /* db7738: jmp dword ptr [0xde8b54] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_db773e(void) {
  LOAD_REGS();
L_db773e: /* db773e: jmp dword ptr [0xde8b58] */
  SPILL(); f_4e33af(); return; /* Core!??0FGuid@@QAE@KKKK@Z */
}

void f_db7744(void) {
  LOAD_REGS();
L_db7744: /* db7744: jmp dword ptr [0xde8b5c] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_db774a(void) {
  LOAD_REGS();
L_db774a: /* db774a: jmp dword ptr [0xde8c28] */
  SPILL(); f_6cc324(); return; /* Engine!??R?$TArray@E@@QAEAAEH@Z */
}

void f_db7750(void) {
  LOAD_REGS();
L_db7750: /* db7750: jmp dword ptr [0xde8c24] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_db7756(void) {
  LOAD_REGS();
L_db7756: /* db7756: jmp dword ptr [0xde8c2c] */
  SPILL(); f_6c5d85(); return; /* Engine!??0?$TArray@E@@QAE@XZ */
}

void f_db775c(void) {
  LOAD_REGS();
L_db775c: /* db775c: jmp dword ptr [0xde8874] */
  SPILL(); call_ind(R32(0xde8874u)); return; /* COMCTL32!#17 */
}

void f_db7762(void) {
  LOAD_REGS();
L_db7762: /* db7762: jmp dword ptr [0xde8cf4] */
  SPILL(); call_ind(R32(0xde8cf4u)); return; /* KERNEL32!LockResource */
}

void f_db7768(void) {
  LOAD_REGS();
L_db7768: /* db7768: jmp dword ptr [0xde8d14] */
  SPILL(); call_ind(R32(0xde8d14u)); return; /* KERNEL32!LoadResource */
}

void f_db776e(void) {
  LOAD_REGS();
L_db776e: /* db776e: jmp dword ptr [0xde8cf8] */
  SPILL(); call_ind(R32(0xde8cf8u)); return; /* KERNEL32!FindResourceA */
}

void f_db7774(void) {
  LOAD_REGS();
L_db7774: /* db7774: jmp dword ptr [0xde8cfc] */
  SPILL(); call_ind(R32(0xde8cfcu)); return; /* KERNEL32!GetCurrentProcessId */
}

void f_db777a(void) {
  LOAD_REGS();
L_db777a: /* db777a: jmp dword ptr [0xde8d00] */
  SPILL(); call_ind(R32(0xde8d00u)); return; /* KERNEL32!Sleep */
}

void f_db7780(void) {
  LOAD_REGS();
L_db7780: /* db7780: jmp dword ptr [0xde8d04] */
  SPILL(); call_ind(R32(0xde8d04u)); return; /* KERNEL32!LoadLibraryA */
}

void f_db7786(void) {
  LOAD_REGS();
L_db7786: /* db7786: jmp dword ptr [0xde8d08] */
  SPILL(); call_ind(R32(0xde8d08u)); return; /* KERNEL32!LoadLibraryW */
}

void f_db778c(void) {
  LOAD_REGS();
L_db778c: /* db778c: jmp dword ptr [0xde8d0c] */
  SPILL(); call_ind(R32(0xde8d0cu)); return; /* KERNEL32!GetProcAddress */
}

void f_db7792(void) {
  LOAD_REGS();
L_db7792: /* db7792: jmp dword ptr [0xde8d10] */
  SPILL(); call_ind(R32(0xde8d10u)); return; /* KERNEL32!GetModuleHandleW */
}

void f_db7798(void) {
  LOAD_REGS();
L_db7798: /* db7798: jmp dword ptr [0xde8f2c] */
  SPILL(); call_ind(R32(0xde8f2cu)); return; /* USER32!InvalidateRect */
}

void f_db779e(void) {
  LOAD_REGS();
L_db779e: /* db779e: jmp dword ptr [0xde8f30] */
  SPILL(); call_ind(R32(0xde8f30u)); return; /* USER32!SendMessageA */
}

void f_db77a4(void) {
  LOAD_REGS();
L_db77a4: /* db77a4: jmp dword ptr [0xde8f70] */
  SPILL(); call_ind(R32(0xde8f70u)); return; /* USER32!SendMessageW */
}

void f_db77aa(void) {
  LOAD_REGS();
L_db77aa: /* db77aa: jmp dword ptr [0xde8f6c] */
  SPILL(); call_ind(R32(0xde8f6cu)); return; /* USER32!FillRect */
}

void f_db77b0(void) {
  LOAD_REGS();
L_db77b0: /* db77b0: jmp dword ptr [0xde8f68] */
  SPILL(); call_ind(R32(0xde8f68u)); return; /* USER32!IsWindowEnabled */
}

void f_db77b6(void) {
  LOAD_REGS();
L_db77b6: /* db77b6: jmp dword ptr [0xde8f64] */
  SPILL(); call_ind(R32(0xde8f64u)); return; /* USER32!DrawEdge */
}

void f_db77bc(void) {
  LOAD_REGS();
L_db77bc: /* db77bc: jmp dword ptr [0xde8f60] */
  SPILL(); call_ind(R32(0xde8f60u)); return; /* USER32!GetClientRect */
}

void f_db77c2(void) {
  LOAD_REGS();
L_db77c2: /* db77c2: jmp dword ptr [0xde8f5c] */
  SPILL(); call_ind(R32(0xde8f5cu)); return; /* USER32!IsWindow */
}

void f_db77c8(void) {
  LOAD_REGS();
L_db77c8: /* db77c8: jmp dword ptr [0xde8f58] */
  SPILL(); call_ind(R32(0xde8f58u)); return; /* USER32!GetParent */
}

void f_db77ce(void) {
  LOAD_REGS();
L_db77ce: /* db77ce: jmp dword ptr [0xde8f54] */
  SPILL(); call_ind(R32(0xde8f54u)); return; /* USER32!PostMessageA */
}

void f_db77d4(void) {
  LOAD_REGS();
L_db77d4: /* db77d4: jmp dword ptr [0xde8f50] */
  SPILL(); call_ind(R32(0xde8f50u)); return; /* USER32!PostMessageW */
}

void f_db77da(void) {
  LOAD_REGS();
L_db77da: /* db77da: jmp dword ptr [0xde8f4c] */
  SPILL(); call_ind(R32(0xde8f4cu)); return; /* USER32!GetActiveWindow */
}

void f_db77e0(void) {
  LOAD_REGS();
L_db77e0: /* db77e0: jmp dword ptr [0xde8f48] */
  SPILL(); call_ind(R32(0xde8f48u)); return; /* USER32!MoveWindow */
}

void f_db77e6(void) {
  LOAD_REGS();
L_db77e6: /* db77e6: jmp dword ptr [0xde8f44] */
  SPILL(); call_ind(R32(0xde8f44u)); return; /* USER32!GetWindowLongA */
}

void f_db77ec(void) {
  LOAD_REGS();
L_db77ec: /* db77ec: jmp dword ptr [0xde8f28] */
  SPILL(); call_ind(R32(0xde8f28u)); return; /* USER32!GetWindowLongW */
}

void f_db77f2(void) {
  LOAD_REGS();
L_db77f2: /* db77f2: jmp dword ptr [0xde8f24] */
  SPILL(); call_ind(R32(0xde8f24u)); return; /* USER32!GetDlgCtrlID */
}

void f_db77f8(void) {
  LOAD_REGS();
L_db77f8: /* db77f8: jmp dword ptr [0xde8f20] */
  SPILL(); call_ind(R32(0xde8f20u)); return; /* USER32!ScreenToClient */
}

void f_db77fe(void) {
  LOAD_REGS();
L_db77fe: /* db77fe: jmp dword ptr [0xde8f1c] */
  SPILL(); call_ind(R32(0xde8f1cu)); return; /* USER32!GetWindowRect */
}

void f_db7804(void) {
  LOAD_REGS();
L_db7804: /* db7804: jmp dword ptr [0xde8f18] */
  SPILL(); call_ind(R32(0xde8f18u)); return; /* USER32!GetWindow */
}

void f_db780a(void) {
  LOAD_REGS();
L_db780a: /* db780a: jmp dword ptr [0xde8f14] */
  SPILL(); call_ind(R32(0xde8f14u)); return; /* USER32!GetWindowTextA */
}

void f_db7810(void) {
  LOAD_REGS();
L_db7810: /* db7810: jmp dword ptr [0xde8f10] */
  SPILL(); call_ind(R32(0xde8f10u)); return; /* USER32!CreateDialogIndirectParamA */
}

void f_db7816(void) {
  LOAD_REGS();
L_db7816: /* db7816: jmp dword ptr [0xde8f0c] */
  SPILL(); call_ind(R32(0xde8f0cu)); return; /* USER32!DestroyWindow */
}

void f_db781c(void) {
  LOAD_REGS();
L_db781c: /* db781c: jmp dword ptr [0xde8f08] */
  SPILL(); call_ind(R32(0xde8f08u)); return; /* USER32!SetWindowPos */
}

void f_db7822(void) {
  LOAD_REGS();
L_db7822: /* db7822: jmp dword ptr [0xde8f04] */
  SPILL(); call_ind(R32(0xde8f04u)); return; /* USER32!EndPaint */
}

void f_db7828(void) {
  LOAD_REGS();
L_db7828: /* db7828: jmp dword ptr [0xde8f00] */
  SPILL(); call_ind(R32(0xde8f00u)); return; /* USER32!DrawTextA */
}

void f_db782e(void) {
  LOAD_REGS();
L_db782e: /* db782e: jmp dword ptr [0xde8efc] */
  SPILL(); call_ind(R32(0xde8efcu)); return; /* USER32!DrawTextW */
}

void f_db7834(void) {
  LOAD_REGS();
L_db7834: /* db7834: jmp dword ptr [0xde8ef8] */
  SPILL(); call_ind(R32(0xde8ef8u)); return; /* USER32!BeginPaint */
}

void f_db783a(void) {
  LOAD_REGS();
L_db783a: /* db783a: jmp dword ptr [0xde8ef4] */
  SPILL(); call_ind(R32(0xde8ef4u)); return; /* USER32!ShowWindow */
}

void f_db7840(void) {
  LOAD_REGS();
L_db7840: /* db7840: jmp dword ptr [0xde8ef0] */
  SPILL(); call_ind(R32(0xde8ef0u)); return; /* USER32!DrawFocusRect */
}

void f_db7846(void) {
  LOAD_REGS();
L_db7846: /* db7846: jmp dword ptr [0xde8eec] */
  SPILL(); call_ind(R32(0xde8eecu)); return; /* USER32!GetSysColor */
}

void f_db784c(void) {
  LOAD_REGS();
L_db784c: /* db784c: jmp dword ptr [0xde8ee8] */
  SPILL(); call_ind(R32(0xde8ee8u)); return; /* USER32!GetCursorPos */
}

void f_db7852(void) {
  LOAD_REGS();
L_db7852: /* db7852: jmp dword ptr [0xde8ee4] */
  SPILL(); call_ind(R32(0xde8ee4u)); return; /* USER32!SetWindowLongA */
}

void f_db7858(void) {
  LOAD_REGS();
L_db7858: /* db7858: jmp dword ptr [0xde8ee0] */
  SPILL(); call_ind(R32(0xde8ee0u)); return; /* USER32!SetWindowLongW */
}

void f_db785e(void) {
  LOAD_REGS();
L_db785e: /* db785e: jmp dword ptr [0xde8edc] */
  SPILL(); call_ind(R32(0xde8edcu)); return; /* USER32!MessageBeep */
}

void f_db7864(void) {
  LOAD_REGS();
L_db7864: /* db7864: jmp dword ptr [0xde8ed8] */
  SPILL(); call_ind(R32(0xde8ed8u)); return; /* USER32!SetFocus */
}

void f_db786a(void) {
  LOAD_REGS();
L_db786a: /* db786a: jmp dword ptr [0xde8ed4] */
  SPILL(); call_ind(R32(0xde8ed4u)); return; /* USER32!ReleaseDC */
}

void f_db7870(void) {
  LOAD_REGS();
L_db7870: /* db7870: jmp dword ptr [0xde8ed0] */
  SPILL(); call_ind(R32(0xde8ed0u)); return; /* USER32!GetDC */
}

void f_db7876(void) {
  LOAD_REGS();
L_db7876: /* db7876: jmp dword ptr [0xde8ecc] */
  SPILL(); call_ind(R32(0xde8eccu)); return; /* USER32!LoadIconA */
}

void f_db787c(void) {
  LOAD_REGS();
L_db787c: /* db787c: jmp dword ptr [0xde8e44] */
  SPILL(); call_ind(R32(0xde8e44u)); return; /* USER32!LoadIconW */
}

void f_db7882(void) {
  LOAD_REGS();
L_db7882: /* db7882: jmp dword ptr [0xde8f40] */
  SPILL(); call_ind(R32(0xde8f40u)); return; /* USER32!BringWindowToTop */
}

void f_db7888(void) {
  LOAD_REGS();
L_db7888: /* db7888: jmp dword ptr [0xde8f38] */
  SPILL(); call_ind(R32(0xde8f38u)); return; /* USER32!UpdateWindow */
}

void f_db788e(void) {
  LOAD_REGS();
L_db788e: /* db788e: jmp dword ptr [0xde8f34] */
  SPILL(); call_ind(R32(0xde8f34u)); return; /* USER32!GetKeyState */
}

void f_db7894(void) {
  LOAD_REGS();
L_db7894: /* db7894: jmp dword ptr [0xde8e90] */
  SPILL(); call_ind(R32(0xde8e90u)); return; /* USER32!SetCursor */
}

void f_db789a(void) {
  LOAD_REGS();
L_db789a: /* db789a: jmp dword ptr [0xde8dec] */
  SPILL(); call_ind(R32(0xde8decu)); return; /* USER32!LoadCursorA */
}

void f_db78a0(void) {
  LOAD_REGS();
L_db78a0: /* db78a0: jmp dword ptr [0xde8df0] */
  SPILL(); call_ind(R32(0xde8df0u)); return; /* USER32!LoadCursorW */
}

void f_db78a6(void) {
  LOAD_REGS();
L_db78a6: /* db78a6: jmp dword ptr [0xde8df4] */
  SPILL(); call_ind(R32(0xde8df4u)); return; /* USER32!DrawTextExA */
}

void f_db78ac(void) {
  LOAD_REGS();
L_db78ac: /* db78ac: jmp dword ptr [0xde8df8] */
  SPILL(); call_ind(R32(0xde8df8u)); return; /* USER32!DrawTextExW */
}

void f_db78b2(void) {
  LOAD_REGS();
L_db78b2: /* db78b2: jmp dword ptr [0xde8dfc] */
  SPILL(); call_ind(R32(0xde8dfcu)); return; /* USER32!GetDlgItem */
}

void f_db78b8(void) {
  LOAD_REGS();
L_db78b8: /* db78b8: jmp dword ptr [0xde8e00] */
  SPILL(); call_ind(R32(0xde8e00u)); return; /* USER32!GetUpdateRect */
}

void f_db78be(void) {
  LOAD_REGS();
L_db78be: /* db78be: jmp dword ptr [0xde8e04] */
  SPILL(); call_ind(R32(0xde8e04u)); return; /* USER32!AdjustWindowRect */
}

void f_db78c4(void) {
  LOAD_REGS();
L_db78c4: /* db78c4: jmp dword ptr [0xde8e08] */
  SPILL(); call_ind(R32(0xde8e08u)); return; /* USER32!BeginDeferWindowPos */
}

void f_db78ca(void) {
  LOAD_REGS();
L_db78ca: /* db78ca: jmp dword ptr [0xde8e0c] */
  SPILL(); call_ind(R32(0xde8e0cu)); return; /* USER32!EndDeferWindowPos */
}

void f_db78d0(void) {
  LOAD_REGS();
L_db78d0: /* db78d0: jmp dword ptr [0xde8e10] */
  SPILL(); call_ind(R32(0xde8e10u)); return; /* USER32!GetWindowThreadProcessId */
}

void f_db78d6(void) {
  LOAD_REGS();
L_db78d6: /* db78d6: jmp dword ptr [0xde8e14] */
  SPILL(); call_ind(R32(0xde8e14u)); return; /* USER32!GetForegroundWindow */
}

void f_db78dc(void) {
  LOAD_REGS();
L_db78dc: /* db78dc: jmp dword ptr [0xde8e18] */
  SPILL(); call_ind(R32(0xde8e18u)); return; /* USER32!IsIconic */
}

void f_db78e2(void) {
  LOAD_REGS();
L_db78e2: /* db78e2: jmp dword ptr [0xde8e1c] */
  SPILL(); call_ind(R32(0xde8e1cu)); return; /* USER32!DefWindowProcA */
}

void f_db78e8(void) {
  LOAD_REGS();
L_db78e8: /* db78e8: jmp dword ptr [0xde8e20] */
  SPILL(); call_ind(R32(0xde8e20u)); return; /* USER32!DefWindowProcW */
}

void f_db78ee(void) {
  LOAD_REGS();
L_db78ee: /* db78ee: jmp dword ptr [0xde8e24] */
  SPILL(); call_ind(R32(0xde8e24u)); return; /* USER32!DefMDIChildProcA */
}

void f_db78f4(void) {
  LOAD_REGS();
L_db78f4: /* db78f4: jmp dword ptr [0xde8e28] */
  SPILL(); call_ind(R32(0xde8e28u)); return; /* USER32!DefMDIChildProcW */
}

void f_db78fa(void) {
  LOAD_REGS();
L_db78fa: /* db78fa: jmp dword ptr [0xde8e2c] */
  SPILL(); call_ind(R32(0xde8e2cu)); return; /* USER32!GetSystemMetrics */
}

void f_db7900(void) {
  LOAD_REGS();
L_db7900: /* db7900: jmp dword ptr [0xde8e30] */
  SPILL(); call_ind(R32(0xde8e30u)); return; /* USER32!CallWindowProcA */
}

void f_db7906(void) {
  LOAD_REGS();
L_db7906: /* db7906: jmp dword ptr [0xde8e34] */
  SPILL(); call_ind(R32(0xde8e34u)); return; /* USER32!CallWindowProcW */
}

void f_db790c(void) {
  LOAD_REGS();
L_db790c: /* db790c: jmp dword ptr [0xde8e38] */
  SPILL(); call_ind(R32(0xde8e38u)); return; /* USER32!ReleaseCapture */
}

void f_db7912(void) {
  LOAD_REGS();
L_db7912: /* db7912: jmp dword ptr [0xde8e3c] */
  SPILL(); call_ind(R32(0xde8e3cu)); return; /* USER32!SetCapture */
}

void f_db7918(void) {
  LOAD_REGS();
L_db7918: /* db7918: jmp dword ptr [0xde8e40] */
  SPILL(); call_ind(R32(0xde8e40u)); return; /* USER32!WindowFromPoint */
}

void f_db791e(void) {
  LOAD_REGS();
L_db791e: /* db791e: jmp dword ptr [0xde8f74] */
  SPILL(); call_ind(R32(0xde8f74u)); return; /* USER32!SetForegroundWindow */
}

void f_db7924(void) {
  LOAD_REGS();
L_db7924: /* db7924: jmp dword ptr [0xde8e48] */
  SPILL(); call_ind(R32(0xde8e48u)); return; /* USER32!EndDialog */
}

void f_db792a(void) {
  LOAD_REGS();
L_db792a: /* db792a: jmp dword ptr [0xde8e4c] */
  SPILL(); call_ind(R32(0xde8e4cu)); return; /* USER32!SetMenuItemInfoW */
}

void f_db7930(void) {
  LOAD_REGS();
L_db7930: /* db7930: jmp dword ptr [0xde8e50] */
  SPILL(); call_ind(R32(0xde8e50u)); return; /* USER32!GetMenuItemInfoW */
}

void f_db7936(void) {
  LOAD_REGS();
L_db7936: /* db7936: jmp dword ptr [0xde8e54] */
  SPILL(); call_ind(R32(0xde8e54u)); return; /* USER32!SetMenuItemInfoA */
}

void f_db793c(void) {
  LOAD_REGS();
L_db793c: /* db793c: jmp dword ptr [0xde8e58] */
  SPILL(); call_ind(R32(0xde8e58u)); return; /* USER32!GetMenuItemInfoA */
}

void f_db7942(void) {
  LOAD_REGS();
L_db7942: /* db7942: jmp dword ptr [0xde8e5c] */
  SPILL(); call_ind(R32(0xde8e5cu)); return; /* USER32!GetMenuItemCount */
}

void f_db7948(void) {
  LOAD_REGS();
L_db7948: /* db7948: jmp dword ptr [0xde8e60] */
  SPILL(); call_ind(R32(0xde8e60u)); return; /* USER32!LoadMenuA */
}

void f_db794e(void) {
  LOAD_REGS();
L_db794e: /* db794e: jmp dword ptr [0xde8e64] */
  SPILL(); call_ind(R32(0xde8e64u)); return; /* USER32!LoadMenuW */
}

void f_db7954(void) {
  LOAD_REGS();
L_db7954: /* db7954: jmp dword ptr [0xde8e68] */
  SPILL(); call_ind(R32(0xde8e68u)); return; /* USER32!RegisterWindowMessageW */
}

void f_db795a(void) {
  LOAD_REGS();
L_db795a: /* db795a: jmp dword ptr [0xde8e6c] */
  SPILL(); call_ind(R32(0xde8e6cu)); return; /* USER32!RegisterClassExA */
}

void f_db7960(void) {
  LOAD_REGS();
L_db7960: /* db7960: jmp dword ptr [0xde8e70] */
  SPILL(); call_ind(R32(0xde8e70u)); return; /* USER32!RegisterClassExW */
}

void f_db7966(void) {
  LOAD_REGS();
L_db7966: /* db7966: jmp dword ptr [0xde8e74] */
  SPILL(); call_ind(R32(0xde8e74u)); return; /* USER32!ClientToScreen */
}

void f_db796c(void) {
  LOAD_REGS();
L_db796c: /* db796c: jmp dword ptr [0xde8e78] */
  SPILL(); call_ind(R32(0xde8e78u)); return; /* USER32!GetClassInfoExA */
}

void f_db7972(void) {
  LOAD_REGS();
L_db7972: /* db7972: jmp dword ptr [0xde8e7c] */
  SPILL(); call_ind(R32(0xde8e7cu)); return; /* USER32!GetClassInfoExW */
}

void f_db7978(void) {
  LOAD_REGS();
L_db7978: /* db7978: jmp dword ptr [0xde8e80] */
  SPILL(); call_ind(R32(0xde8e80u)); return; /* USER32!GetCapture */
}

void f_db797e(void) {
  LOAD_REGS();
L_db797e: /* db797e: jmp dword ptr [0xde8e84] */
  SPILL(); call_ind(R32(0xde8e84u)); return; /* USER32!DestroyMenu */
}

void f_db7984(void) {
  LOAD_REGS();
L_db7984: /* db7984: jmp dword ptr [0xde8e88] */
  SPILL(); call_ind(R32(0xde8e88u)); return; /* USER32!TrackPopupMenu */
}

void f_db798a(void) {
  LOAD_REGS();
L_db798a: /* db798a: jmp dword ptr [0xde8e8c] */
  SPILL(); call_ind(R32(0xde8e8cu)); return; /* USER32!GetSubMenu */
}

void f_db7990(void) {
  LOAD_REGS();
L_db7990: /* db7990: jmp dword ptr [0xde8f3c] */
  SPILL(); call_ind(R32(0xde8f3cu)); return; /* USER32!EnumChildWindows */
}

void f_db7996(void) {
  LOAD_REGS();
L_db7996: /* db7996: jmp dword ptr [0xde8e94] */
  SPILL(); call_ind(R32(0xde8e94u)); return; /* USER32!ClipCursor */
}

void f_db799c(void) {
  LOAD_REGS();
L_db799c: /* db799c: jmp dword ptr [0xde8e98] */
  SPILL(); call_ind(R32(0xde8e98u)); return; /* USER32!GetSysColorBrush */
}

void f_db79a2(void) {
  LOAD_REGS();
L_db79a2: /* db79a2: jmp dword ptr [0xde8e9c] */
  SPILL(); call_ind(R32(0xde8e9cu)); return; /* USER32!GetCursor */
}

void f_db79a8(void) {
  LOAD_REGS();
L_db79a8: /* db79a8: jmp dword ptr [0xde8ea0] */
  SPILL(); call_ind(R32(0xde8ea0u)); return; /* USER32!RegisterWindowMessageA */
}

void f_db79ae(void) {
  LOAD_REGS();
L_db79ae: /* db79ae: jmp dword ptr [0xde8ea4] */
  SPILL(); call_ind(R32(0xde8ea4u)); return; /* USER32!CreateWindowExA */
}

void f_db79b4(void) {
  LOAD_REGS();
L_db79b4: /* db79b4: jmp dword ptr [0xde8ea8] */
  SPILL(); call_ind(R32(0xde8ea8u)); return; /* USER32!CreateWindowExW */
}

void f_db79ba(void) {
  LOAD_REGS();
L_db79ba: /* db79ba: jmp dword ptr [0xde8eac] */
  SPILL(); call_ind(R32(0xde8eacu)); return; /* USER32!DialogBoxParamA */
}

void f_db79c0(void) {
  LOAD_REGS();
L_db79c0: /* db79c0: jmp dword ptr [0xde8eb0] */
  SPILL(); call_ind(R32(0xde8eb0u)); return; /* USER32!DialogBoxParamW */
}

void f_db79c6(void) {
  LOAD_REGS();
L_db79c6: /* db79c6: jmp dword ptr [0xde8eb4] */
  SPILL(); call_ind(R32(0xde8eb4u)); return; /* USER32!CreateDialogParamA */
}

void f_db79cc(void) {
  LOAD_REGS();
L_db79cc: /* db79cc: jmp dword ptr [0xde8eb8] */
  SPILL(); call_ind(R32(0xde8eb8u)); return; /* USER32!CreateDialogParamW */
}

void f_db79d2(void) {
  LOAD_REGS();
L_db79d2: /* db79d2: jmp dword ptr [0xde8ebc] */
  SPILL(); call_ind(R32(0xde8ebcu)); return; /* USER32!IsZoomed */
}

void f_db79d8(void) {
  LOAD_REGS();
L_db79d8: /* db79d8: jmp dword ptr [0xde8ec0] */
  SPILL(); call_ind(R32(0xde8ec0u)); return; /* USER32!InsertMenuItemA */
}

void f_db79de(void) {
  LOAD_REGS();
L_db79de: /* db79de: jmp dword ptr [0xde8ec4] */
  SPILL(); call_ind(R32(0xde8ec4u)); return; /* USER32!CreatePopupMenu */
}

void f_db79e4(void) {
  LOAD_REGS();
L_db79e4: /* db79e4: jmp dword ptr [0xde8ec8] */
  SPILL(); call_ind(R32(0xde8ec8u)); return; /* USER32!LoadImageA */
}

void f_db79ea(void) {
  LOAD_REGS();
L_db79ea: /* db79ea: jmp dword ptr [0xde8cb0] */
  SPILL(); call_ind(R32(0xde8cb0u)); return; /* GDI32!DeleteDC */
}

void f_db79f0(void) {
  LOAD_REGS();
L_db79f0: /* db79f0: jmp dword ptr [0xde8c5c] */
  SPILL(); call_ind(R32(0xde8c5cu)); return; /* GDI32!DeleteObject */
}

void f_db79f6(void) {
  LOAD_REGS();
L_db79f6: /* db79f6: jmp dword ptr [0xde8c60] */
  SPILL(); call_ind(R32(0xde8c60u)); return; /* GDI32!LineTo */
}

void f_db79fc(void) {
  LOAD_REGS();
L_db79fc: /* db79fc: jmp dword ptr [0xde8c64] */
  SPILL(); call_ind(R32(0xde8c64u)); return; /* GDI32!MoveToEx */
}

void f_db7a02(void) {
  LOAD_REGS();
L_db7a02: /* db7a02: jmp dword ptr [0xde8c68] */
  SPILL(); call_ind(R32(0xde8c68u)); return; /* GDI32!CreatePen */
}

void f_db7a08(void) {
  LOAD_REGS();
L_db7a08: /* db7a08: jmp dword ptr [0xde8c6c] */
  SPILL(); call_ind(R32(0xde8c6cu)); return; /* GDI32!BitBlt */
}

void f_db7a0e(void) {
  LOAD_REGS();
L_db7a0e: /* db7a0e: jmp dword ptr [0xde8c70] */
  SPILL(); call_ind(R32(0xde8c70u)); return; /* GDI32!GetObjectA */
}

void f_db7a14(void) {
  LOAD_REGS();
L_db7a14: /* db7a14: jmp dword ptr [0xde8c74] */
  SPILL(); call_ind(R32(0xde8c74u)); return; /* GDI32!SelectObject */
}

void f_db7a1a(void) {
  LOAD_REGS();
L_db7a1a: /* db7a1a: jmp dword ptr [0xde8c78] */
  SPILL(); call_ind(R32(0xde8c78u)); return; /* GDI32!CreateCompatibleDC */
}

void f_db7a20(void) {
  LOAD_REGS();
L_db7a20: /* db7a20: jmp dword ptr [0xde8c7c] */
  SPILL(); call_ind(R32(0xde8c7cu)); return; /* GDI32!Rectangle */
}

void f_db7a26(void) {
  LOAD_REGS();
L_db7a26: /* db7a26: jmp dword ptr [0xde8c80] */
  SPILL(); call_ind(R32(0xde8c80u)); return; /* GDI32!CreateSolidBrush */
}

void f_db7a2c(void) {
  LOAD_REGS();
L_db7a2c: /* db7a2c: jmp dword ptr [0xde8c84] */
  SPILL(); call_ind(R32(0xde8c84u)); return; /* GDI32!GetStockObject */
}

void f_db7a32(void) {
  LOAD_REGS();
L_db7a32: /* db7a32: jmp dword ptr [0xde8c88] */
  SPILL(); call_ind(R32(0xde8c88u)); return; /* GDI32!SetBkMode */
}

void f_db7a38(void) {
  LOAD_REGS();
L_db7a38: /* db7a38: jmp dword ptr [0xde8c8c] */
  SPILL(); call_ind(R32(0xde8c8cu)); return; /* GDI32!ExtTextOutA */
}

void f_db7a3e(void) {
  LOAD_REGS();
L_db7a3e: /* db7a3e: jmp dword ptr [0xde8c90] */
  SPILL(); call_ind(R32(0xde8c90u)); return; /* GDI32!SetBkColor */
}

void f_db7a44(void) {
  LOAD_REGS();
L_db7a44: /* db7a44: jmp dword ptr [0xde8c94] */
  SPILL(); call_ind(R32(0xde8c94u)); return; /* GDI32!SetTextColor */
}

void f_db7a4a(void) {
  LOAD_REGS();
L_db7a4a: /* db7a4a: jmp dword ptr [0xde8c98] */
  SPILL(); call_ind(R32(0xde8c98u)); return; /* GDI32!TextOutW */
}

void f_db7a50(void) {
  LOAD_REGS();
L_db7a50: /* db7a50: jmp dword ptr [0xde8c9c] */
  SPILL(); call_ind(R32(0xde8c9cu)); return; /* GDI32!GetTextExtentPoint32A */
}

void f_db7a56(void) {
  LOAD_REGS();
L_db7a56: /* db7a56: jmp dword ptr [0xde8ca0] */
  SPILL(); call_ind(R32(0xde8ca0u)); return; /* GDI32!GetTextExtentPoint32W */
}

void f_db7a5c(void) {
  LOAD_REGS();
L_db7a5c: /* db7a5c: jmp dword ptr [0xde8ca4] */
  SPILL(); call_ind(R32(0xde8ca4u)); return; /* GDI32!CreateDIBitmap */
}

void f_db7a62(void) {
  LOAD_REGS();
L_db7a62: /* db7a62: jmp dword ptr [0xde8ca8] */
  SPILL(); call_ind(R32(0xde8ca8u)); return; /* GDI32!StretchBlt */
}

void f_db7a68(void) {
  LOAD_REGS();
L_db7a68: /* db7a68: jmp dword ptr [0xde8cac] */
  SPILL(); call_ind(R32(0xde8cacu)); return; /* GDI32!CreateCompatibleBitmap */
}

void f_db7a6e(void) {
  LOAD_REGS();
L_db7a6e: /* db7a6e: jmp dword ptr [0xde8cb4] */
  SPILL(); call_ind(R32(0xde8cb4u)); return; /* GDI32!PatBlt */
}

void f_db7a74(void) {
  LOAD_REGS();
L_db7a74: /* db7a74: jmp dword ptr [0xde8ff0] */
  SPILL(); call_ind(R32(0xde8ff0u)); return; /* comdlg32!ChooseColorA */
}

void f_db7a7a(void) {
  LOAD_REGS();
L_db7a7a: /* db7a7a: jmp dword ptr [0xde8db8] */
  SPILL(); call_ind(R32(0xde8db8u)); return; /* SHELL32!ShellExecuteA */
}

void f_db7a80(void) {
  LOAD_REGS();
L_db7a80: /* db7a80: jmp dword ptr [0xde8db4] */
  SPILL(); call_ind(R32(0xde8db4u)); return; /* SHELL32!ShellExecuteW */
}

void f_db7a86(void) {
  LOAD_REGS();
L_db7a86: /* db7a86: jmp dword ptr [0xde8dbc] */
  SPILL(); call_ind(R32(0xde8dbcu)); return; /* SHELL32!Shell_NotifyIconA */
}

void f_db7a8c(void) {
  LOAD_REGS();
L_db7a8c: /* db7a8c: mov eax, ecx */
  eax = ecx;
/* db7a8e: mov dword ptr [eax], 0xdc73b4 */
  W32((uint32_t)(eax), 0xdc73b4u);
/* db7a94: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db7a97(void) {
  LOAD_REGS();
L_db7a97: /* db7a97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7a98: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db7a9c: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7a9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7aa0: mov esi, ecx */
  esi = ecx;
/* db7aa2: je 0xdb7ac8 */
  if (zf) goto L_db7ac8;
L_db7aa4: /* db7aa4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7aa5: push 0xdb7f14 */
  { uint32_t v = 0xdb7f14u; esp -= 4; W32(esp, v); }
/* db7aaa: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db7aad: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* db7aaf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* db7ab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7ab2: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb7ab7u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db7ab7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7aba: je 0xdb7ac3 */
  if (zf) goto L_db7ac3;
L_db7abc: /* db7abc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7abd: call 0xd8188e */
  esp -= 4; W32(esp, 0xdb7ac2u); SPILL(); f_d8188e(); if (g_unwind) return; RELOAD();
/* db7ac2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_db7ac3: /* db7ac3: mov eax, edi */
  eax = edi;
/* db7ac5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7ac6: jmp 0xdb7add */
  goto L_db7add;
L_db7ac8: /* db7ac8: mov ecx, esi */
  ecx = esi;
/* db7aca: call 0xdb7f14 */
  esp -= 4; W32(esp, 0xdb7acfu); SPILL(); f_db7f14(); if (g_unwind) return; RELOAD();
/* db7acf: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db7ad2: je 0xdb7adb */
  if (zf) goto L_db7adb;
L_db7ad4: /* db7ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7ad5: call 0xd8188e */
  esp -= 4; W32(esp, 0xdb7adau); SPILL(); f_d8188e(); if (g_unwind) return; RELOAD();
/* db7ada: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_db7adb: /* db7adb: mov eax, esi */
  eax = esi;
L_db7add: /* db7add: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7ade: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db7adf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db7ae2(void) {
  LOAD_REGS();
L_db7ae2: /* db7ae2: mov eax, ecx */
  eax = ecx;
/* db7ae4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db7af0(void) {
  LOAD_REGS();
L_db7af0: /* db7af0: jmp dword ptr [0xde8d6c] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_db7b00(void) {
  LOAD_REGS();
L_db7b00: /* db7b00: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7b05: jae 0xdb7b15 */
  if (!cf) goto L_db7b15;
L_db7b07: /* db7b07: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* db7b09: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db7b0b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db7b0e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* db7b10: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* db7b11: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7b13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7b14: ret  */
  esp += 4; SPILL(); return;
L_db7b15: /* db7b15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db7b16: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_db7b1a: /* db7b1a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* db7b20: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* db7b25: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* db7b27: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7b2c: jae 0xdb7b1a */
  if (!cf) goto L_db7b1a;
L_db7b2e: /* db7b2e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* db7b30: mov eax, esp */
  eax = esp;
/* db7b32: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* db7b34: mov esp, ecx */
  esp = ecx;
/* db7b36: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db7b38: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* db7b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7b3c: ret  */
  esp += 4; SPILL(); return;
}

void f_db7b3e(void) {
  LOAD_REGS();
L_db7b3e: /* db7b3e: jmp dword ptr [0xde8d78] */
  SPILL(); f_4053f1(); return; /* MSVCR70!strncpy */
}

void f_db7b44(void) {
  LOAD_REGS();
L_db7b44: /* db7b44: jmp dword ptr [0xde8d68] */
  SPILL(); f_40750d(); return; /* MSVCR70!strncat */
}

void f_db7b4a(void) {
  LOAD_REGS();
L_db7b4a: /* db7b4a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7b4c: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7b52: je 0xdb7b57 */
  if (zf) goto L_db7b57;
L_db7b54: /* db7b54: xor eax, eax */
  eax = 0;
/* db7b56: ret  */
  esp += 4; SPILL(); return;
L_db7b57: /* db7b57: jmp 0xdb7f1a */
  SPILL(); f_db7f1a(); return;
}

void f_db7b5c(void) {
  LOAD_REGS();
L_db7b5c: /* db7b5c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* db7b5e: push 0xdc73b8 */
  { uint32_t v = 0xdc73b8u; esp -= 4; W32(esp, v); }
/* db7b63: call 0xdb7f20 */
  esp -= 4; W32(esp, 0xdb7b68u); SPILL(); f_db7f20(); if (g_unwind) return; RELOAD();
/* db7b68: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_db7b6c: /* db7b6c: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* db7b6f: js 0xdb7b7f */
  if (sf) goto L_db7b7f;
L_db7b71: /* db7b71: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* db7b74: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* db7b77: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* db7b7a: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xdb7b7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7b7d: jmp 0xdb7b6c */
  goto L_db7b6c;
L_db7b7f: /* db7b7f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7b83: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb7b88u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db7b88: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db7b8b(void) {
  LOAD_REGS();
L_db7b8b: /* db7b8b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* db7b8e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* db7b91: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db7b94: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7b96: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* db7b99: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* db7b9c: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7ba2: je 0xdb7bb4 */
  if (zf) goto L_db7bb4;
L_db7ba4: /* db7ba4: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* db7bab: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* db7bae: ret  */
  esp += 4; SPILL(); return;
L_db7bb4: /* db7bb4: call 0xdb7f1a */
  esp -= 4; W32(esp, 0xdb7bb9u); SPILL(); f_db7f1a(); if (g_unwind) return; RELOAD();
L_db7bb9: guest_badaddr(0xdb7bb9); return;
}

void f_db7baf(void) {
  LOAD_REGS();
  goto L_db7baf;
L_db7b7f: /* db7b7f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7b83: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb7b88u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db7b88: ret 0x10 */
  esp += 20; SPILL(); return;
L_db7baf: /* db7baf: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* db7bb2: jmp 0xdb7b7f */
  goto L_db7b7f;
}

void f_db7bba(void) {
  LOAD_REGS();
L_db7bba: /* db7bba: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* db7bbc: push 0xdc73c8 */
  { uint32_t v = 0xdc73c8u; esp -= 4; W32(esp, v); }
/* db7bc1: call 0xdb7f20 */
  esp -= 4; W32(esp, 0xdb7bc6u); SPILL(); f_db7f20(); if (g_unwind) return; RELOAD();
/* db7bc6: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* db7bca: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* db7bcd: mov eax, esi */
  eax = esi;
/* db7bcf: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* db7bd3: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* db7bd6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_db7bda: /* db7bda: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* db7bdd: js 0xdb7bea */
  if (sf) goto L_db7bea;
L_db7bdf: /* db7bdf: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* db7be2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* db7be5: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xdb7be8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7be8: jmp 0xdb7bda */
  goto L_db7bda;
L_db7bea: /* db7bea: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* db7bf1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7bf5: call 0xdb7c02 */
  esp -= 4; W32(esp, 0xdb7bfau); SPILL(); f_db7c02(); if (g_unwind) return; RELOAD();
/* db7bfa: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb7bffu); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db7bff: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db7c02(void) {
  LOAD_REGS();
L_db7c02: /* db7c02: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7c06: jne 0xdb7c19 */
  if (!zf) goto L_db7c19;
L_db7c08: /* db7c08: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* db7c0b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* db7c0e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* db7c11: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* db7c14: call 0xdb7b5c */
  esp -= 4; W32(esp, 0xdb7c19u); SPILL(); f_db7b5c(); if (g_unwind) return; RELOAD();
L_db7c19: /* db7c19: ret  */
  esp += 4; SPILL(); return;
}

void f_db7c20(void) {
  LOAD_REGS();
L_db7c20: /* db7c20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7c21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7c22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7c23: xor edi, edi */
  edi = 0;
/* db7c25: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db7c29: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* db7c2b: jge 0xdb7c41 */
  if ((sf == of)) goto L_db7c41;
L_db7c2d: /* db7c2d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* db7c2e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* db7c32: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* db7c34: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* db7c36: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* db7c39: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* db7c3d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_db7c41: /* db7c41: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* db7c45: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* db7c47: jge 0xdb7c5d */
  if ((sf == of)) goto L_db7c5d;
L_db7c49: /* db7c49: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* db7c4a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* db7c4e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* db7c50: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* db7c52: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* db7c55: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* db7c59: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_db7c5d: /* db7c5d: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* db7c5f: jne 0xdb7c79 */
  if (!zf) goto L_db7c79;
L_db7c61: /* db7c61: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db7c65: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db7c69: xor edx, edx */
  edx = 0;
/* db7c6b: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0xdb7c6b);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* db7c6d: mov ebx, eax */
  ebx = eax;
/* db7c6f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db7c73: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0xdb7c73);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* db7c75: mov edx, ebx */
  edx = ebx;
/* db7c77: jmp 0xdb7cba */
  goto L_db7cba;
L_db7c79: /* db7c79: mov ebx, eax */
  ebx = eax;
/* db7c7b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db7c7f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* db7c83: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_db7c87: /* db7c87: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* db7c89: rcr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ecx = r;
  }
/* db7c8b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* db7c8d: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* db7c8f: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* db7c91: jne 0xdb7c87 */
  if (!zf) goto L_db7c87;
L_db7c93: /* db7c93: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0xdb7c93);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* db7c95: mov esi, eax */
  esi = eax;
/* db7c97: mul dword ptr [esp + 0x1c] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x1cu))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7c9b: mov ecx, eax */
  ecx = eax;
/* db7c9d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* db7ca1: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7ca3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* db7ca5: jb 0xdb7cb5 */
  if (cf) goto L_db7cb5;
L_db7ca7: /* db7ca7: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* db7cab: ja 0xdb7cb5 */
  if ((!cf && !zf)) goto L_db7cb5;
L_db7cad: /* db7cad: jb 0xdb7cb6 */
  if (cf) goto L_db7cb6;
L_db7caf: /* db7caf: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* db7cb3: jbe 0xdb7cb6 */
  if ((cf | zf)) goto L_db7cb6;
L_db7cb5: /* db7cb5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_db7cb6: /* db7cb6: xor edx, edx */
  edx = 0;
/* db7cb8: mov eax, esi */
  eax = esi;
L_db7cba: /* db7cba: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* db7cbb: jne 0xdb7cc4 */
  if (!zf) goto L_db7cc4;
L_db7cbd: /* db7cbd: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* db7cbf: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* db7cc1: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_db7cc4: /* db7cc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db7cc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7cc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7cc7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db7cd0(void) {
  LOAD_REGS();
L_db7cd0: /* db7cd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db7cd4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db7cd8: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* db7cda: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db7cde: jne 0xdb7ce9 */
  if (!zf) goto L_db7ce9;
L_db7ce0: /* db7ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db7ce4: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7ce6: ret 0x10 */
  esp += 20; SPILL(); return;
L_db7ce9: /* db7ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7cea: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7cec: mov ebx, eax */
  ebx = eax;
/* db7cee: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db7cf2: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7cf6: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* db7cf8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db7cfc: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* db7cfe: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* db7d00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db7d01: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db7d04(void) {
  LOAD_REGS();
L_db7d04: /* db7d04: jmp dword ptr [0xde8d64] */
  SPILL(); f_4276f0(); return; /* MSVCR70!_purecall */
}

void f_db7d0c(void) {
  LOAD_REGS();
L_db7d0c: /* db7d0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db7d0d: mov ebp, esp */
  ebp = esp;
/* db7d0f: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db7d12: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* db7d15: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* db7d17: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* db7d1b: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* db7d1f: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* db7d23: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* db7d27: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db7d2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7d2d: je 0xdb7d6b */
  if (zf) goto L_db7d6b;
L_db7d2f: /* db7d2f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* db7d31: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* db7d33: jns 0xdb7d53 */
  if (!sf) goto L_db7d53;
L_db7d35: /* db7d35: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* db7d38: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* db7d3b: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* db7d41: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* db7d47: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* db7d4a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* db7d4e: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* db7d51: jmp 0xdb7d7f */
  goto L_db7d7f;
L_db7d53: /* db7d53: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* db7d56: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* db7d59: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* db7d5f: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* db7d62: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* db7d66: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* db7d69: jmp 0xdb7d7f */
  goto L_db7d7f;
L_db7d6b: /* db7d6b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* db7d6f: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7d75: jne 0xdb7d2f */
  if (!zf) goto L_db7d2f;
L_db7d77: /* db7d77: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* db7d7b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_db7d7f: /* db7d7f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* db7d80: ret  */
  esp += 4; SPILL(); return;
}

void f_db7d81(void) {
  LOAD_REGS();
L_db7d81: /* db7d81: cmp dword ptr [0xde7f08], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7f08u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7d88: jne 0xdb7d90 */
  if (!zf) goto L_db7d90;
L_db7d8a: /* db7d8a: jmp dword ptr [0xde8d54] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_db7d90: /* db7d90: push 0xde7ef8 */
  { uint32_t v = 0xde7ef8u; esp -= 4; W32(esp, v); }
/* db7d95: push 0xde7f08 */
  { uint32_t v = 0xde7f08u; esp -= 4; W32(esp, v); }
/* db7d9a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* db7d9e: call 0xdb7f6c */
  esp -= 4; W32(esp, 0xdb7da3u); SPILL(); f_db7f6c(); if (g_unwind) return; RELOAD();
/* db7da3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db7da6: ret  */
  esp += 4; SPILL(); return;
}

void f_db7da7(void) {
  LOAD_REGS();
L_db7da7: /* db7da7: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* db7dab: call 0xdb7d81 */
  esp -= 4; W32(esp, 0xdb7db0u); SPILL(); f_db7d81(); if (g_unwind) return; RELOAD();
/* db7db0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* db7db2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* db7db4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* db7db6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db7db7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* db7db8: ret  */
  esp += 4; SPILL(); return;
}

void f_db7db9(void) {
  LOAD_REGS();
L_db7db9: /* db7db9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db7dbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7dbf: jne 0xdb7dcf */
  if (!zf) goto L_db7dcf;
L_db7dc1: /* db7dc1: cmp dword ptr [0xde7edc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7edcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* db7dc7: jle 0xdb7df7 */
  if ((zf || sf != of)) goto L_db7df7;
L_db7dc9: /* db7dc9: dec dword ptr [0xde7edc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7edcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xde7edcu), r);
  }
L_db7dcf: /* db7dcf: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7dd2: mov ecx, dword ptr [0xde8d70] */
  ecx = R32((uint32_t)(0xde8d70u));
/* db7dd8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db7dda: mov dword ptr [0xde7ee0], ecx */
  W32((uint32_t)(0xde7ee0u), ecx);
/* db7de0: jne 0xdb7e31 */
  if (!zf) goto L_db7e31;
L_db7de2: /* db7de2: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* db7de7: call dword ptr [0xde8d48] */
  esp -= 4; W32(esp, 0xdb7dedu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* db7ded: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7def: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db7df0: mov dword ptr [0xde7f08], eax */
  W32((uint32_t)(0xde7f08u), eax);
/* db7df5: jne 0xdb7dfb */
  if (!zf) goto L_db7dfb;
L_db7df7: /* db7df7: xor eax, eax */
  eax = 0;
/* db7df9: jmp 0xdb7e74 */
  goto L_db7e74;
L_db7dfb: /* db7dfb: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* db7dfe: mov eax, dword ptr [0xde7f08] */
  eax = R32((uint32_t)(0xde7f08u));
/* db7e03: mov dword ptr [0xde7ef8], eax */
  W32((uint32_t)(0xde7ef8u), eax);
/* db7e08: call 0xdb7f7e */
  esp -= 4; W32(esp, 0xdb7e0du); SPILL(); f_db7f7e(); if (g_unwind) return; RELOAD();
/* db7e0d: push 0xdb7fc2 */
  { uint32_t v = 0xdb7fc2u; esp -= 4; W32(esp, v); }
/* db7e12: call 0xdb7da7 */
  esp -= 4; W32(esp, 0xdb7e17u); SPILL(); f_db7da7(); if (g_unwind) return; RELOAD();
/* db7e17: mov dword ptr [esp], 0xde1220 */
  W32((uint32_t)(esp), 0xde1220u);
/* db7e1e: push 0xde1000 */
  { uint32_t v = 0xde1000u; esp -= 4; W32(esp, v); }
/* db7e23: call 0xdb7f78 */
  esp -= 4; W32(esp, 0xdb7e28u); SPILL(); f_db7f78(); if (g_unwind) return; RELOAD();
/* db7e28: inc dword ptr [0xde7edc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7edcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xde7edcu), r);
  }
/* db7e2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db7e2f: jmp 0xdb7e70 */
  goto L_db7e70;
L_db7e31: /* db7e31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7e33: jne 0xdb7e71 */
  if (!zf) goto L_db7e71;
L_db7e35: /* db7e35: mov eax, dword ptr [0xde7f08] */
  eax = R32((uint32_t)(0xde7f08u));
/* db7e3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7e3c: je 0xdb7e71 */
  if (zf) goto L_db7e71;
L_db7e3e: /* db7e3e: jmp 0xdb7e53 */
  goto L_db7e53;
L_db7e40: /* db7e40: mov ecx, dword ptr [0xde7ef8] */
  ecx = R32((uint32_t)(0xde7ef8u));
/* db7e46: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db7e48: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7e4a: je 0xdb7e53 */
  if (zf) goto L_db7e53;
L_db7e4c: /* db7e4c: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xdb7e4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7e4e: mov eax, dword ptr [0xde7f08] */
  eax = R32((uint32_t)(0xde7f08u));
L_db7e53: /* db7e53: sub dword ptr [0xde7ef8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7ef8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xde7ef8u), r);
  }
/* db7e5a: cmp dword ptr [0xde7ef8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7ef8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7e60: jae 0xdb7e40 */
  if (!cf) goto L_db7e40;
L_db7e62: /* db7e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7e63: call dword ptr [0xde8d50] */
  esp -= 4; W32(esp, 0xdb7e69u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* db7e69: and dword ptr [0xde7f08], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7f08u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xde7f08u), r);
  }
L_db7e70: /* db7e70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_db7e71: /* db7e71: xor eax, eax */
  eax = 0;
/* db7e73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_db7e74: /* db7e74: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db7e77(void) {
  LOAD_REGS();
L_db7e77: /* db7e77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db7e78: mov ebp, esp */
  ebp = esp;
/* db7e7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7e7b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* db7e7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7e7f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* db7e82: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7e84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7e85: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* db7e88: jne 0xdb7e93 */
  if (!zf) goto L_db7e93;
L_db7e8a: /* db7e8a: cmp dword ptr [0xde7edc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xde7edcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7e91: jmp 0xdb7eb9 */
  goto L_db7eb9;
L_db7e93: /* db7e93: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7e96: je 0xdb7e9d */
  if (zf) goto L_db7e9d;
L_db7e98: /* db7e98: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7e9b: jne 0xdb7ebf */
  if (!zf) goto L_db7ebf;
L_db7e9d: /* db7e9d: mov eax, dword ptr [0xde7eec] */
  eax = R32((uint32_t)(0xde7eecu));
/* db7ea2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7ea4: je 0xdb7eaf */
  if (zf) goto L_db7eaf;
L_db7ea6: /* db7ea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7ea7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7ea8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7ea9: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7eabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7eab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7ead: je 0xdb7ebb */
  if (zf) goto L_db7ebb;
L_db7eaf: /* db7eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7eb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7eb2: call 0xdb7db9 */
  esp -= 4; W32(esp, 0xdb7eb7u); SPILL(); f_db7db9(); if (g_unwind) return; RELOAD();
/* db7eb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_db7eb9: /* db7eb9: jne 0xdb7ebf */
  if (!zf) goto L_db7ebf;
L_db7ebb: /* db7ebb: xor eax, eax */
  eax = 0;
/* db7ebd: jmp 0xdb7f0d */
  goto L_db7f0d;
L_db7ebf: /* db7ebf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7ec1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7ec2: call 0xd81514 */
  esp -= 4; W32(esp, 0xdb7ec7u); SPILL(); f_d81514(); if (g_unwind) return; RELOAD();
/* db7ec7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7eca: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* db7ecd: jne 0xdb7edb */
  if (!zf) goto L_db7edb;
L_db7ecf: /* db7ecf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7ed1: jne 0xdb7f0a */
  if (!zf) goto L_db7f0a;
L_db7ed3: /* db7ed3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7ed5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7ed6: call 0xdb7db9 */
  esp -= 4; W32(esp, 0xdb7edbu); SPILL(); f_db7db9(); if (g_unwind) return; RELOAD();
L_db7edb: /* db7edb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7edd: je 0xdb7ee4 */
  if (zf) goto L_db7ee4;
L_db7edf: /* db7edf: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7ee2: jne 0xdb7f0a */
  if (!zf) goto L_db7f0a;
L_db7ee4: /* db7ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7ee5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7ee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7ee7: call 0xdb7db9 */
  esp -= 4; W32(esp, 0xdb7eecu); SPILL(); f_db7db9(); if (g_unwind) return; RELOAD();
/* db7eec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7eee: jne 0xdb7ef3 */
  if (!zf) goto L_db7ef3;
L_db7ef0: /* db7ef0: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_db7ef3: /* db7ef3: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db7ef7: je 0xdb7f0a */
  if (zf) goto L_db7f0a;
L_db7ef9: /* db7ef9: mov eax, dword ptr [0xde7eec] */
  eax = R32((uint32_t)(0xde7eecu));
/* db7efe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7f00: je 0xdb7f0a */
  if (zf) goto L_db7f0a;
L_db7f02: /* db7f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7f03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7f05: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7f07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7f07: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_db7f0a: /* db7f0a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_db7f0d: /* db7f0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7f0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7f0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db7f10: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db7f11: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db7f14(void) {
  LOAD_REGS();
L_db7f14: /* db7f14: jmp dword ptr [0xde8d60] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_db7f1a(void) {
  LOAD_REGS();
L_db7f1a: /* db7f1a: jmp dword ptr [0xde8d5c] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_db7f20(void) {
  LOAD_REGS();
L_db7f20: /* db7f20: push 0xdb800c */
  { uint32_t v = 0xdb800cu; esp -= 4; W32(esp, v); }
/* db7f25: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db7f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7f2c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db7f30: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* db7f34: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* db7f38: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db7f3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db7f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db7f3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db7f3d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* db7f40: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* db7f43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db7f44: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* db7f47: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* db7f4e: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* db7f51: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* db7f54: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* db7f5a: ret  */
  esp += 4; SPILL(); return;
}

void f_db7f5b(void) {
  LOAD_REGS();
L_db7f5b: /* db7f5b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db7f5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db7f65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db7f66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db7f67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db7f68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db7f69: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* db7f6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db7f6b: ret  */
  esp += 4; SPILL(); return;
}

void f_db7f6c(void) {
  LOAD_REGS();
L_db7f6c: /* db7f6c: jmp dword ptr [0xde8d58] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_db7f72(void) {
  LOAD_REGS();
L_db7f72: /* db7f72: jmp dword ptr [0xde8d50] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_db7f78(void) {
  LOAD_REGS();
L_db7f78: /* db7f78: jmp dword ptr [0xde8d4c] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_db7f7e(void) {
  LOAD_REGS();
L_db7f7e: /* db7f7e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* db7f80: push 0xdc73d8 */
  { uint32_t v = 0xdc73d8u; esp -= 4; W32(esp, v); }
/* db7f85: call 0xdb7f20 */
  esp -= 4; W32(esp, 0xdb7f8au); SPILL(); f_db7f20(); if (g_unwind) return; RELOAD();
/* db7f8a: mov dword ptr [ebp - 0x1c], 0xdc7908 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xdc7908u);
L_db7f91: /* db7f91: cmp dword ptr [ebp - 0x1c], 0xdc7a08 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xdc7a08u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7f98: jae 0xdb7fbc */
  if (!cf) goto L_db7fbc;
L_db7f9a: /* db7f9a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7f9e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db7fa1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7fa5: je 0xdb7fb2 */
  if (zf) goto L_db7fb2;
L_db7fa7: /* db7fa7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7fa9: jmp 0xdb7fb2 */
  goto L_db7fb2;
L_db7fb2: /* db7fb2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7fb6: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* db7fba: jmp 0xdb7f91 */
  goto L_db7f91;
L_db7fbc: /* db7fbc: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb7fc1u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db7fc1: ret  */
  esp += 4; SPILL(); return;
}

void f_db7fab(void) {
  LOAD_REGS();
L_db7fab: /* db7fab: xor eax, eax */
  eax = 0;
/* db7fad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* db7fae: ret  */
  esp += 4; SPILL(); return;
}

void f_db7faf(void) {
  LOAD_REGS();
  goto L_db7faf;
L_db7f91: /* db7f91: cmp dword ptr [ebp - 0x1c], 0xdc7a08 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xdc7a08u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7f98: jae 0xdb7fbc */
  if (!cf) goto L_db7fbc;
L_db7f9a: /* db7f9a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7f9e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db7fa1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7fa5: je 0xdb7fb2 */
  if (zf) goto L_db7fb2;
L_db7fa7: /* db7fa7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7fa9: jmp 0xdb7fb2 */
  goto L_db7fb2;
L_db7faf: /* db7faf: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_db7fb2: /* db7fb2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7fb6: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* db7fba: jmp 0xdb7f91 */
  goto L_db7f91;
L_db7fbc: /* db7fbc: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb7fc1u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db7fc1: ret  */
  esp += 4; SPILL(); return;
}

void f_db7fc2(void) {
  LOAD_REGS();
L_db7fc2: /* db7fc2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* db7fc4: push 0xdc73e8 */
  { uint32_t v = 0xdc73e8u; esp -= 4; W32(esp, v); }
/* db7fc9: call 0xdb7f20 */
  esp -= 4; W32(esp, 0xdb7fceu); SPILL(); f_db7f20(); if (g_unwind) return; RELOAD();
/* db7fce: mov dword ptr [ebp - 0x1c], 0xdc7b10 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xdc7b10u);
L_db7fd5: /* db7fd5: cmp dword ptr [ebp - 0x1c], 0xdc7c10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xdc7c10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7fdc: jae 0xdb8000 */
  if (!cf) goto L_db8000;
L_db7fde: /* db7fde: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7fe2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db7fe5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7fe7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7fe9: je 0xdb7ff6 */
  if (zf) goto L_db7ff6;
L_db7feb: /* db7feb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7fedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7fed: jmp 0xdb7ff6 */
  goto L_db7ff6;
L_db7ff6: /* db7ff6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7ffa: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* db7ffe: jmp 0xdb7fd5 */
  goto L_db7fd5;
L_db8000: /* db8000: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb8005u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db8005: ret  */
  esp += 4; SPILL(); return;
}

void f_db7fef(void) {
  LOAD_REGS();
L_db7fef: /* db7fef: xor eax, eax */
  eax = 0;
/* db7ff1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* db7ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_db7ff3(void) {
  LOAD_REGS();
  goto L_db7ff3;
L_db7fd5: /* db7fd5: cmp dword ptr [ebp - 0x1c], 0xdc7c10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xdc7c10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* db7fdc: jae 0xdb8000 */
  if (!cf) goto L_db8000;
L_db7fde: /* db7fde: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7fe2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db7fe5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* db7fe7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db7fe9: je 0xdb7ff6 */
  if (zf) goto L_db7ff6;
L_db7feb: /* db7feb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xdb7fedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db7fed: jmp 0xdb7ff6 */
  goto L_db7ff6;
L_db7ff3: /* db7ff3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_db7ff6: /* db7ff6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* db7ffa: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* db7ffe: jmp 0xdb7fd5 */
  goto L_db7fd5;
L_db8000: /* db8000: call 0xdb7f5b */
  esp -= 4; W32(esp, 0xdb8005u); SPILL(); f_db7f5b(); if (g_unwind) return; RELOAD();
/* db8005: ret  */
  esp += 4; SPILL(); return;
}

void f_db8006(void) {
  LOAD_REGS();
L_db8006: /* db8006: jmp dword ptr [0xde8d48] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_db800c(void) {
  LOAD_REGS();
L_db800c: /* db800c: jmp dword ptr [0xde8d7c] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_db8990(void) {
  LOAD_REGS();
  goto L_db8990;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8990: /* db8990: mov eax, 0xdc7dbc */
  eax = 0xdc7dbcu;
/* db8995: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89a0(void) {
  LOAD_REGS();
  goto L_db89a0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89a0: /* db89a0: mov eax, 0xdc7e28 */
  eax = 0xdc7e28u;
/* db89a5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89b0(void) {
  LOAD_REGS();
  goto L_db89b0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89b0: /* db89b0: mov eax, 0xdc7e94 */
  eax = 0xdc7e94u;
/* db89b5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89c0(void) {
  LOAD_REGS();
  goto L_db89c0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89c0: /* db89c0: mov eax, 0xdc7f00 */
  eax = 0xdc7f00u;
/* db89c5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89d0(void) {
  LOAD_REGS();
  goto L_db89d0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89d0: /* db89d0: mov eax, 0xdc7f6c */
  eax = 0xdc7f6cu;
/* db89d5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89e0(void) {
  LOAD_REGS();
  goto L_db89e0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89e0: /* db89e0: mov eax, 0xdc7fd8 */
  eax = 0xdc7fd8u;
/* db89e5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db89f0(void) {
  LOAD_REGS();
  goto L_db89f0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db89f0: /* db89f0: mov eax, 0xdc8044 */
  eax = 0xdc8044u;
/* db89f5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a00(void) {
  LOAD_REGS();
L_db8a00: /* db8a00: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* db8a03: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8a09(void) {
  LOAD_REGS();
  goto L_db8a09;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a09: /* db8a09: mov eax, 0xdc80b8 */
  eax = 0xdc80b8u;
/* db8a0e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a20(void) {
  LOAD_REGS();
  goto L_db8a20;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a20: /* db8a20: mov eax, 0xdc8124 */
  eax = 0xdc8124u;
/* db8a25: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a30(void) {
  LOAD_REGS();
  goto L_db8a30;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a30: /* db8a30: mov eax, 0xdc8190 */
  eax = 0xdc8190u;
/* db8a35: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a40(void) {
  LOAD_REGS();
L_db8a40: /* db8a40: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* db8a43: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8a49(void) {
  LOAD_REGS();
  goto L_db8a49;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a49: /* db8a49: mov eax, 0xdc8204 */
  eax = 0xdc8204u;
/* db8a4e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a60(void) {
  LOAD_REGS();
  goto L_db8a60;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a60: /* db8a60: mov eax, 0xdc8270 */
  eax = 0xdc8270u;
/* db8a65: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a70(void) {
  LOAD_REGS();
  goto L_db8a70;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a70: /* db8a70: mov eax, 0xdc82dc */
  eax = 0xdc82dcu;
/* db8a75: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a80(void) {
  LOAD_REGS();
  goto L_db8a80;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a80: /* db8a80: mov eax, 0xdc8348 */
  eax = 0xdc8348u;
/* db8a85: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8a90(void) {
  LOAD_REGS();
  goto L_db8a90;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8a90: /* db8a90: mov eax, 0xdc83b4 */
  eax = 0xdc83b4u;
/* db8a95: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8aa0(void) {
  LOAD_REGS();
  goto L_db8aa0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8aa0: /* db8aa0: mov eax, 0xdc8420 */
  eax = 0xdc8420u;
/* db8aa5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ab0(void) {
  LOAD_REGS();
  goto L_db8ab0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ab0: /* db8ab0: mov eax, 0xdc848c */
  eax = 0xdc848cu;
/* db8ab5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ac0(void) {
  LOAD_REGS();
  goto L_db8ac0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ac0: /* db8ac0: mov eax, 0xdc84f8 */
  eax = 0xdc84f8u;
/* db8ac5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ad0(void) {
  LOAD_REGS();
  goto L_db8ad0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ad0: /* db8ad0: mov eax, 0xdc8564 */
  eax = 0xdc8564u;
/* db8ad5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ae0(void) {
  LOAD_REGS();
  goto L_db8ae0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ae0: /* db8ae0: mov eax, 0xdc85d0 */
  eax = 0xdc85d0u;
/* db8ae5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8af0(void) {
  LOAD_REGS();
  goto L_db8af0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8af0: /* db8af0: mov eax, 0xdc863c */
  eax = 0xdc863cu;
/* db8af5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b00(void) {
  LOAD_REGS();
  goto L_db8b00;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b00: /* db8b00: mov eax, 0xdc86a8 */
  eax = 0xdc86a8u;
/* db8b05: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b10(void) {
  LOAD_REGS();
  goto L_db8b10;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b10: /* db8b10: mov eax, 0xdc8714 */
  eax = 0xdc8714u;
/* db8b15: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b20(void) {
  LOAD_REGS();
L_db8b20: /* db8b20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db8b23: jmp 0xd81d89 */
  SPILL(); f_d81d89(); return;
}

void f_db8b28(void) {
  LOAD_REGS();
  goto L_db8b28;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b28: /* db8b28: mov eax, 0xdc8744 */
  eax = 0xdc8744u;
/* db8b2d: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b40(void) {
  LOAD_REGS();
  goto L_db8b40;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b40: /* db8b40: mov eax, 0xdc87a8 */
  eax = 0xdc87a8u;
/* db8b45: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b50(void) {
  LOAD_REGS();
L_db8b50: /* db8b50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db8b53: jmp 0xd81d89 */
  SPILL(); f_d81d89(); return;
}

void f_db8b58(void) {
  LOAD_REGS();
  goto L_db8b58;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b58: /* db8b58: mov eax, 0xdc87d8 */
  eax = 0xdc87d8u;
/* db8b5d: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8b70(void) {
  LOAD_REGS();
L_db8b70: /* db8b70: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* db8b73: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8b79(void) {
  LOAD_REGS();
L_db8b79: /* db8b79: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db8b7c: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* db8b7f: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8b85(void) {
  LOAD_REGS();
  goto L_db8b85;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8b85: /* db8b85: mov eax, 0xdc8808 */
  eax = 0xdc8808u;
/* db8b8a: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ba0(void) {
  LOAD_REGS();
L_db8ba0: /* db8ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db8ba3: jmp 0xd81d89 */
  SPILL(); f_d81d89(); return;
}

void f_db8ba8(void) {
  LOAD_REGS();
  goto L_db8ba8;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ba8: /* db8ba8: mov eax, 0xdc8830 */
  eax = 0xdc8830u;
/* db8bad: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8bc0(void) {
  LOAD_REGS();
  goto L_db8bc0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8bc0: /* db8bc0: mov eax, 0xdc8894 */
  eax = 0xdc8894u;
/* db8bc5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8bd0(void) {
  LOAD_REGS();
  goto L_db8bd0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8bd0: /* db8bd0: mov eax, 0xdc8900 */
  eax = 0xdc8900u;
/* db8bd5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8be0(void) {
  LOAD_REGS();
  goto L_db8be0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8be0: /* db8be0: mov eax, 0xdc896c */
  eax = 0xdc896cu;
/* db8be5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8bf0(void) {
  LOAD_REGS();
  goto L_db8bf0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8bf0: /* db8bf0: mov eax, 0xdc89d8 */
  eax = 0xdc89d8u;
/* db8bf5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c00(void) {
  LOAD_REGS();
  goto L_db8c00;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c00: /* db8c00: mov eax, 0xdc8a44 */
  eax = 0xdc8a44u;
/* db8c05: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c10(void) {
  LOAD_REGS();
L_db8c10: /* db8c10: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* db8c13: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8c19(void) {
  LOAD_REGS();
  goto L_db8c19;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c19: /* db8c19: mov eax, 0xdc8ab8 */
  eax = 0xdc8ab8u;
/* db8c1e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c30(void) {
  LOAD_REGS();
  goto L_db8c30;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c30: /* db8c30: mov eax, 0xdc8b24 */
  eax = 0xdc8b24u;
/* db8c35: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c40(void) {
  LOAD_REGS();
  goto L_db8c40;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c40: /* db8c40: mov eax, 0xdc8b90 */
  eax = 0xdc8b90u;
/* db8c45: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c50(void) {
  LOAD_REGS();
  goto L_db8c50;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c50: /* db8c50: mov eax, 0xdc8bfc */
  eax = 0xdc8bfcu;
/* db8c55: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c60(void) {
  LOAD_REGS();
  goto L_db8c60;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c60: /* db8c60: mov eax, 0xdc8c68 */
  eax = 0xdc8c68u;
/* db8c65: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c70(void) {
  LOAD_REGS();
  goto L_db8c70;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c70: /* db8c70: mov eax, 0xdc8cd4 */
  eax = 0xdc8cd4u;
/* db8c75: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c80(void) {
  LOAD_REGS();
  goto L_db8c80;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c80: /* db8c80: mov eax, 0xdc8d40 */
  eax = 0xdc8d40u;
/* db8c85: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8c90(void) {
  LOAD_REGS();
L_db8c90: /* db8c90: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* db8c93: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8c99(void) {
  LOAD_REGS();
  goto L_db8c99;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8c99: /* db8c99: mov eax, 0xdc8db4 */
  eax = 0xdc8db4u;
/* db8c9e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8cb0(void) {
  LOAD_REGS();
  goto L_db8cb0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8cb0: /* db8cb0: mov eax, 0xdc8e20 */
  eax = 0xdc8e20u;
/* db8cb5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8cc0(void) {
  LOAD_REGS();
  goto L_db8cc0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8cc0: /* db8cc0: mov eax, 0xdc8e8c */
  eax = 0xdc8e8cu;
/* db8cc5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8cd0(void) {
  LOAD_REGS();
  goto L_db8cd0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8cd0: /* db8cd0: mov eax, 0xdc8ef8 */
  eax = 0xdc8ef8u;
/* db8cd5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ce0(void) {
  LOAD_REGS();
  goto L_db8ce0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ce0: /* db8ce0: mov eax, 0xdc8f64 */
  eax = 0xdc8f64u;
/* db8ce5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8cf0(void) {
  LOAD_REGS();
  goto L_db8cf0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8cf0: /* db8cf0: mov eax, 0xdc8fd0 */
  eax = 0xdc8fd0u;
/* db8cf5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d00(void) {
  LOAD_REGS();
  goto L_db8d00;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d00: /* db8d00: mov eax, 0xdc903c */
  eax = 0xdc903cu;
/* db8d05: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d10(void) {
  LOAD_REGS();
  goto L_db8d10;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d10: /* db8d10: mov eax, 0xdc90a8 */
  eax = 0xdc90a8u;
/* db8d15: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d20(void) {
  LOAD_REGS();
  goto L_db8d20;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d20: /* db8d20: mov eax, 0xdc9114 */
  eax = 0xdc9114u;
/* db8d25: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d30(void) {
  LOAD_REGS();
  goto L_db8d30;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d30: /* db8d30: mov eax, 0xdc9180 */
  eax = 0xdc9180u;
/* db8d35: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d40(void) {
  LOAD_REGS();
  goto L_db8d40;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d40: /* db8d40: mov eax, 0xdc91ec */
  eax = 0xdc91ecu;
/* db8d45: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d50(void) {
  LOAD_REGS();
  goto L_db8d50;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d50: /* db8d50: mov eax, 0xdc9258 */
  eax = 0xdc9258u;
/* db8d55: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d60(void) {
  LOAD_REGS();
  goto L_db8d60;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d60: /* db8d60: mov eax, 0xdc92c4 */
  eax = 0xdc92c4u;
/* db8d65: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d70(void) {
  LOAD_REGS();
  goto L_db8d70;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d70: /* db8d70: mov eax, 0xdc9330 */
  eax = 0xdc9330u;
/* db8d75: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d80(void) {
  LOAD_REGS();
  goto L_db8d80;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d80: /* db8d80: mov eax, 0xdc939c */
  eax = 0xdc939cu;
/* db8d85: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8d90(void) {
  LOAD_REGS();
  goto L_db8d90;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8d90: /* db8d90: mov eax, 0xdc9408 */
  eax = 0xdc9408u;
/* db8d95: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8da0(void) {
  LOAD_REGS();
  goto L_db8da0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8da0: /* db8da0: mov eax, 0xdc9474 */
  eax = 0xdc9474u;
/* db8da5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8db0(void) {
  LOAD_REGS();
  goto L_db8db0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8db0: /* db8db0: mov eax, 0xdc94e0 */
  eax = 0xdc94e0u;
/* db8db5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8dc0(void) {
  LOAD_REGS();
  goto L_db8dc0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8dc0: /* db8dc0: mov eax, 0xdc954c */
  eax = 0xdc954cu;
/* db8dc5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8dd0(void) {
  LOAD_REGS();
  goto L_db8dd0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8dd0: /* db8dd0: mov eax, 0xdc95b8 */
  eax = 0xdc95b8u;
/* db8dd5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8de0(void) {
  LOAD_REGS();
  goto L_db8de0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8de0: /* db8de0: mov eax, 0xdc9624 */
  eax = 0xdc9624u;
/* db8de5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8df0(void) {
  LOAD_REGS();
  goto L_db8df0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8df0: /* db8df0: mov eax, 0xdc9690 */
  eax = 0xdc9690u;
/* db8df5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e00(void) {
  LOAD_REGS();
  goto L_db8e00;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e00: /* db8e00: mov eax, 0xdc96fc */
  eax = 0xdc96fcu;
/* db8e05: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e10(void) {
  LOAD_REGS();
  goto L_db8e10;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e10: /* db8e10: mov eax, 0xdc9768 */
  eax = 0xdc9768u;
/* db8e15: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e20(void) {
  LOAD_REGS();
  goto L_db8e20;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e20: /* db8e20: mov eax, 0xdc97d4 */
  eax = 0xdc97d4u;
/* db8e25: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e30(void) {
  LOAD_REGS();
  goto L_db8e30;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e30: /* db8e30: mov eax, 0xdc9840 */
  eax = 0xdc9840u;
/* db8e35: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e40(void) {
  LOAD_REGS();
  goto L_db8e40;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e40: /* db8e40: mov eax, 0xdc98ac */
  eax = 0xdc98acu;
/* db8e45: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e50(void) {
  LOAD_REGS();
  goto L_db8e50;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e50: /* db8e50: mov eax, 0xdc9918 */
  eax = 0xdc9918u;
/* db8e55: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e60(void) {
  LOAD_REGS();
  goto L_db8e60;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e60: /* db8e60: mov eax, 0xdc9984 */
  eax = 0xdc9984u;
/* db8e65: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e70(void) {
  LOAD_REGS();
  goto L_db8e70;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e70: /* db8e70: mov eax, 0xdc99f0 */
  eax = 0xdc99f0u;
/* db8e75: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e80(void) {
  LOAD_REGS();
  goto L_db8e80;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e80: /* db8e80: mov eax, 0xdc9a5c */
  eax = 0xdc9a5cu;
/* db8e85: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8e90(void) {
  LOAD_REGS();
  goto L_db8e90;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8e90: /* db8e90: mov eax, 0xdc9ac8 */
  eax = 0xdc9ac8u;
/* db8e95: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ea0(void) {
  LOAD_REGS();
  goto L_db8ea0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ea0: /* db8ea0: mov eax, 0xdc9b34 */
  eax = 0xdc9b34u;
/* db8ea5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8eb0(void) {
  LOAD_REGS();
  goto L_db8eb0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8eb0: /* db8eb0: mov eax, 0xdc9ba0 */
  eax = 0xdc9ba0u;
/* db8eb5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ec0(void) {
  LOAD_REGS();
  goto L_db8ec0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ec0: /* db8ec0: mov eax, 0xdc9c0c */
  eax = 0xdc9c0cu;
/* db8ec5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ed0(void) {
  LOAD_REGS();
  goto L_db8ed0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ed0: /* db8ed0: mov eax, 0xdc9c78 */
  eax = 0xdc9c78u;
/* db8ed5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ee0(void) {
  LOAD_REGS();
  goto L_db8ee0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ee0: /* db8ee0: mov eax, 0xdc9ce4 */
  eax = 0xdc9ce4u;
/* db8ee5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ef0(void) {
  LOAD_REGS();
  goto L_db8ef0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ef0: /* db8ef0: mov eax, 0xdc9d50 */
  eax = 0xdc9d50u;
/* db8ef5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f00(void) {
  LOAD_REGS();
  goto L_db8f00;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f00: /* db8f00: mov eax, 0xdc9dbc */
  eax = 0xdc9dbcu;
/* db8f05: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f10(void) {
  LOAD_REGS();
  goto L_db8f10;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f10: /* db8f10: mov eax, 0xdc9e28 */
  eax = 0xdc9e28u;
/* db8f15: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f20(void) {
  LOAD_REGS();
  goto L_db8f20;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f20: /* db8f20: mov eax, 0xdc9e94 */
  eax = 0xdc9e94u;
/* db8f25: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f30(void) {
  LOAD_REGS();
  goto L_db8f30;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f30: /* db8f30: mov eax, 0xdc9f00 */
  eax = 0xdc9f00u;
/* db8f35: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f40(void) {
  LOAD_REGS();
  goto L_db8f40;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f40: /* db8f40: mov eax, 0xdc9f6c */
  eax = 0xdc9f6cu;
/* db8f45: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f50(void) {
  LOAD_REGS();
  goto L_db8f50;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f50: /* db8f50: mov eax, 0xdc9fd8 */
  eax = 0xdc9fd8u;
/* db8f55: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f60(void) {
  LOAD_REGS();
L_db8f60: /* db8f60: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* db8f63: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8f69(void) {
  LOAD_REGS();
  goto L_db8f69;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f69: /* db8f69: mov eax, 0xdca04c */
  eax = 0xdca04cu;
/* db8f6e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f80(void) {
  LOAD_REGS();
  goto L_db8f80;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f80: /* db8f80: mov eax, 0xdca0b8 */
  eax = 0xdca0b8u;
/* db8f85: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8f90(void) {
  LOAD_REGS();
  goto L_db8f90;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8f90: /* db8f90: mov eax, 0xdca124 */
  eax = 0xdca124u;
/* db8f95: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8fa0(void) {
  LOAD_REGS();
L_db8fa0: /* db8fa0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* db8fa3: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db8fa9(void) {
  LOAD_REGS();
  goto L_db8fa9;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8fa9: /* db8fa9: mov eax, 0xdca198 */
  eax = 0xdca198u;
/* db8fae: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8fc0(void) {
  LOAD_REGS();
  goto L_db8fc0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8fc0: /* db8fc0: mov eax, 0xdca204 */
  eax = 0xdca204u;
/* db8fc5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8fd0(void) {
  LOAD_REGS();
  goto L_db8fd0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8fd0: /* db8fd0: mov eax, 0xdca270 */
  eax = 0xdca270u;
/* db8fd5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8fe0(void) {
  LOAD_REGS();
  goto L_db8fe0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8fe0: /* db8fe0: mov eax, 0xdca2dc */
  eax = 0xdca2dcu;
/* db8fe5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db8ff0(void) {
  LOAD_REGS();
L_db8ff0: /* db8ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db8ff3: jmp dword ptr [0xde8900] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_db8ff9(void) {
  LOAD_REGS();
  goto L_db8ff9;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db8ff9: /* db8ff9: mov eax, 0xdca30c */
  eax = 0xdca30cu;
/* db8ffe: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9010(void) {
  LOAD_REGS();
  goto L_db9010;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9010: /* db9010: mov eax, 0xdca370 */
  eax = 0xdca370u;
/* db9015: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9020(void) {
  LOAD_REGS();
L_db9020: /* db9020: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db9023: jmp 0xd8227f */
  SPILL(); f_d8227f(); return;
}

void f_db9028(void) {
  LOAD_REGS();
  goto L_db9028;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9028: /* db9028: mov eax, 0xdca3a0 */
  eax = 0xdca3a0u;
/* db902d: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9040(void) {
  LOAD_REGS();
L_db9040: /* db9040: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* db9043: jmp 0xd81d89 */
  SPILL(); f_d81d89(); return;
}

void f_db9048(void) {
  LOAD_REGS();
  goto L_db9048;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9048: /* db9048: mov eax, 0xdca3c8 */
  eax = 0xdca3c8u;
/* db904d: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9060(void) {
  LOAD_REGS();
L_db9060: /* db9060: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* db9063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db9064: call 0xd8188e */
  esp -= 4; W32(esp, 0xdb9069u); SPILL(); f_d8188e(); if (g_unwind) return; RELOAD();
/* db9069: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db906a: ret  */
  esp += 4; SPILL(); return;
}

void f_db906b(void) {
  LOAD_REGS();
  goto L_db906b;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db906b: /* db906b: mov eax, 0xdca434 */
  eax = 0xdca434u;
/* db9070: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9080(void) {
  LOAD_REGS();
L_db9080: /* db9080: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* db9083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db9084: call 0xd8188e */
  esp -= 4; W32(esp, 0xdb9089u); SPILL(); f_d8188e(); if (g_unwind) return; RELOAD();
/* db9089: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db908a: ret  */
  esp += 4; SPILL(); return;
}

void f_db908b(void) {
  LOAD_REGS();
  goto L_db908b;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db908b: /* db908b: mov eax, 0xdca4a8 */
  eax = 0xdca4a8u;
/* db9090: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db90a0(void) {
  LOAD_REGS();
L_db90a0: /* db90a0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* db90a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db90a4: call 0xd8188e */
  esp -= 4; W32(esp, 0xdb90a9u); SPILL(); f_d8188e(); if (g_unwind) return; RELOAD();
/* db90a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db90aa: ret  */
  esp += 4; SPILL(); return;
}

void f_db90ab(void) {
  LOAD_REGS();
  goto L_db90ab;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db90ab: /* db90ab: mov eax, 0xdca51c */
  eax = 0xdca51cu;
/* db90b0: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db90c0(void) {
  LOAD_REGS();
L_db90c0: /* db90c0: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* db90c3: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db90c9(void) {
  LOAD_REGS();
L_db90c9: /* db90c9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* db90cc: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db90d2(void) {
  LOAD_REGS();
L_db90d2: /* db90d2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* db90d5: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db90db(void) {
  LOAD_REGS();
L_db90db: /* db90db: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* db90de: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db90e4(void) {
  LOAD_REGS();
L_db90e4: /* db90e4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db90e7: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db90ed(void) {
  LOAD_REGS();
L_db90ed: /* db90ed: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* db90f0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db90f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db90f5: je 0xdb9104 */
  if (zf) goto L_db9104;
L_db90fb: /* db90fb: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* db90fe: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_db9104: /* db9104: ret  */
  esp += 4; SPILL(); return;
}

void f_db9105(void) {
  LOAD_REGS();
  goto L_db9105;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9105: /* db9105: mov eax, 0xdca574 */
  eax = 0xdca574u;
/* db910a: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9130(void) {
  LOAD_REGS();
L_db9130: /* db9130: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* db9133: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9139(void) {
  LOAD_REGS();
L_db9139: /* db9139: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db913c: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9142(void) {
  LOAD_REGS();
  goto L_db9142;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9142: /* db9142: mov eax, 0xdca5b0 */
  eax = 0xdca5b0u;
/* db9147: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9160(void) {
  LOAD_REGS();
  goto L_db9160;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9160: /* db9160: mov eax, 0xdca618 */
  eax = 0xdca618u;
/* db9165: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9170(void) {
  LOAD_REGS();
  goto L_db9170;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9170: /* db9170: mov eax, 0xdca684 */
  eax = 0xdca684u;
/* db9175: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9180(void) {
  LOAD_REGS();
L_db9180: /* db9180: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db9183: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9189(void) {
  LOAD_REGS();
  goto L_db9189;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9189: /* db9189: mov eax, 0xdca6f8 */
  eax = 0xdca6f8u;
/* db918e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91a0(void) {
  LOAD_REGS();
  goto L_db91a0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91a0: /* db91a0: mov eax, 0xdca764 */
  eax = 0xdca764u;
/* db91a5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91b0(void) {
  LOAD_REGS();
  goto L_db91b0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91b0: /* db91b0: mov eax, 0xdca7d0 */
  eax = 0xdca7d0u;
/* db91b5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91c0(void) {
  LOAD_REGS();
  goto L_db91c0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91c0: /* db91c0: mov eax, 0xdca83c */
  eax = 0xdca83cu;
/* db91c5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91d0(void) {
  LOAD_REGS();
  goto L_db91d0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91d0: /* db91d0: mov eax, 0xdca8a8 */
  eax = 0xdca8a8u;
/* db91d5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91e0(void) {
  LOAD_REGS();
  goto L_db91e0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91e0: /* db91e0: mov eax, 0xdca914 */
  eax = 0xdca914u;
/* db91e5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db91f0(void) {
  LOAD_REGS();
  goto L_db91f0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db91f0: /* db91f0: mov eax, 0xdca980 */
  eax = 0xdca980u;
/* db91f5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9200(void) {
  LOAD_REGS();
  goto L_db9200;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9200: /* db9200: mov eax, 0xdca9ec */
  eax = 0xdca9ecu;
/* db9205: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9210(void) {
  LOAD_REGS();
  goto L_db9210;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9210: /* db9210: mov eax, 0xdcaa58 */
  eax = 0xdcaa58u;
/* db9215: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9220(void) {
  LOAD_REGS();
  goto L_db9220;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9220: /* db9220: mov eax, 0xdcaac4 */
  eax = 0xdcaac4u;
/* db9225: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9230(void) {
  LOAD_REGS();
  goto L_db9230;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9230: /* db9230: mov eax, 0xdcab30 */
  eax = 0xdcab30u;
/* db9235: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9240(void) {
  LOAD_REGS();
  goto L_db9240;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9240: /* db9240: mov eax, 0xdcab9c */
  eax = 0xdcab9cu;
/* db9245: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9250(void) {
  LOAD_REGS();
  goto L_db9250;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9250: /* db9250: mov eax, 0xdcac08 */
  eax = 0xdcac08u;
/* db9255: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9260(void) {
  LOAD_REGS();
  goto L_db9260;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9260: /* db9260: mov eax, 0xdcac74 */
  eax = 0xdcac74u;
/* db9265: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9270(void) {
  LOAD_REGS();
  goto L_db9270;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9270: /* db9270: mov eax, 0xdcace0 */
  eax = 0xdcace0u;
/* db9275: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9280(void) {
  LOAD_REGS();
  goto L_db9280;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9280: /* db9280: mov eax, 0xdcad4c */
  eax = 0xdcad4cu;
/* db9285: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9290(void) {
  LOAD_REGS();
  goto L_db9290;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9290: /* db9290: mov eax, 0xdcadb8 */
  eax = 0xdcadb8u;
/* db9295: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92a0(void) {
  LOAD_REGS();
  goto L_db92a0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92a0: /* db92a0: mov eax, 0xdcae24 */
  eax = 0xdcae24u;
/* db92a5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92b0(void) {
  LOAD_REGS();
  goto L_db92b0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92b0: /* db92b0: mov eax, 0xdcae90 */
  eax = 0xdcae90u;
/* db92b5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92c0(void) {
  LOAD_REGS();
  goto L_db92c0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92c0: /* db92c0: mov eax, 0xdcaefc */
  eax = 0xdcaefcu;
/* db92c5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92d0(void) {
  LOAD_REGS();
  goto L_db92d0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92d0: /* db92d0: mov eax, 0xdcaf68 */
  eax = 0xdcaf68u;
/* db92d5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92e0(void) {
  LOAD_REGS();
  goto L_db92e0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92e0: /* db92e0: mov eax, 0xdcafd4 */
  eax = 0xdcafd4u;
/* db92e5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db92f0(void) {
  LOAD_REGS();
  goto L_db92f0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db92f0: /* db92f0: mov eax, 0xdcb040 */
  eax = 0xdcb040u;
/* db92f5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9300(void) {
  LOAD_REGS();
L_db9300: /* db9300: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* db9303: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9309(void) {
  LOAD_REGS();
L_db9309: /* db9309: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db930c: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9312(void) {
  LOAD_REGS();
  goto L_db9312;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9312: /* db9312: mov eax, 0xdcb078 */
  eax = 0xdcb078u;
/* db9317: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9330(void) {
  LOAD_REGS();
  goto L_db9330;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9330: /* db9330: mov eax, 0xdcb0dc */
  eax = 0xdcb0dcu;
/* db9335: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9340(void) {
  LOAD_REGS();
  goto L_db9340;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9340: /* db9340: mov eax, 0xdcb148 */
  eax = 0xdcb148u;
/* db9345: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9350(void) {
  LOAD_REGS();
  goto L_db9350;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9350: /* db9350: mov eax, 0xdcb1b4 */
  eax = 0xdcb1b4u;
/* db9355: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9360(void) {
  LOAD_REGS();
  goto L_db9360;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9360: /* db9360: mov eax, 0xdcb220 */
  eax = 0xdcb220u;
/* db9365: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9370(void) {
  LOAD_REGS();
  goto L_db9370;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9370: /* db9370: mov eax, 0xdcb28c */
  eax = 0xdcb28cu;
/* db9375: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9380(void) {
  LOAD_REGS();
  goto L_db9380;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9380: /* db9380: mov eax, 0xdcb2f8 */
  eax = 0xdcb2f8u;
/* db9385: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9390(void) {
  LOAD_REGS();
  goto L_db9390;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9390: /* db9390: mov eax, 0xdcb364 */
  eax = 0xdcb364u;
/* db9395: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93a0(void) {
  LOAD_REGS();
  goto L_db93a0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93a0: /* db93a0: mov eax, 0xdcb3d0 */
  eax = 0xdcb3d0u;
/* db93a5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93b0(void) {
  LOAD_REGS();
  goto L_db93b0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93b0: /* db93b0: mov eax, 0xdcb43c */
  eax = 0xdcb43cu;
/* db93b5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93c0(void) {
  LOAD_REGS();
  goto L_db93c0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93c0: /* db93c0: mov eax, 0xdcb4a8 */
  eax = 0xdcb4a8u;
/* db93c5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93d0(void) {
  LOAD_REGS();
  goto L_db93d0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93d0: /* db93d0: mov eax, 0xdcb514 */
  eax = 0xdcb514u;
/* db93d5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93e0(void) {
  LOAD_REGS();
  goto L_db93e0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93e0: /* db93e0: mov eax, 0xdcb580 */
  eax = 0xdcb580u;
/* db93e5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db93f0(void) {
  LOAD_REGS();
  goto L_db93f0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db93f0: /* db93f0: mov eax, 0xdcb5ec */
  eax = 0xdcb5ecu;
/* db93f5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9400(void) {
  LOAD_REGS();
L_db9400: /* db9400: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db9403: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9409(void) {
  LOAD_REGS();
L_db9409: /* db9409: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db940c: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9412(void) {
  LOAD_REGS();
  goto L_db9412;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9412: /* db9412: mov eax, 0xdcb668 */
  eax = 0xdcb668u;
/* db9417: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9430(void) {
  LOAD_REGS();
  goto L_db9430;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9430: /* db9430: mov eax, 0xdcb6d4 */
  eax = 0xdcb6d4u;
/* db9435: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9440(void) {
  LOAD_REGS();
  goto L_db9440;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9440: /* db9440: mov eax, 0xdcb740 */
  eax = 0xdcb740u;
/* db9445: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9450(void) {
  LOAD_REGS();
  goto L_db9450;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9450: /* db9450: mov eax, 0xdcb7ac */
  eax = 0xdcb7acu;
/* db9455: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9460(void) {
  LOAD_REGS();
  goto L_db9460;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9460: /* db9460: mov eax, 0xdcb818 */
  eax = 0xdcb818u;
/* db9465: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9470(void) {
  LOAD_REGS();
L_db9470: /* db9470: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db9473: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db9479(void) {
  LOAD_REGS();
  goto L_db9479;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9479: /* db9479: mov eax, 0xdcb88c */
  eax = 0xdcb88cu;
/* db947e: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db9490(void) {
  LOAD_REGS();
  goto L_db9490;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db9490: /* db9490: mov eax, 0xdcb8f8 */
  eax = 0xdcb8f8u;
/* db9495: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db94a0(void) {
  LOAD_REGS();
  goto L_db94a0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db94a0: /* db94a0: mov eax, 0xdcb964 */
  eax = 0xdcb964u;
/* db94a5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db94b0(void) {
  LOAD_REGS();
  goto L_db94b0;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db94b0: /* db94b0: mov eax, 0xdcb9d0 */
  eax = 0xdcb9d0u;
/* db94b5: jmp 0xdb7ae8 */
  goto L_db7ae8;
}

void f_db94c0(void) {
  LOAD_REGS();
L_db94c0: /* db94c0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* db94c3: jmp dword ptr [0xde88b0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_db94c9(void) {
  LOAD_REGS();
  goto L_db94c9;
L_db7ae8: /* db7ae8: jmp dword ptr [0xde8d74] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_db94c9: /* db94c9: mov eax, 0xdcba44 */
  eax = 0xdcba44u;
/* db94ce: jmp 0xdb7ae8 */
  goto L_db7ae8;
}
