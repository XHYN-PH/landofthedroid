#include "recomp.h"
#include "rec_mod.h"

void f_741320(void) {
  LOAD_REGS();
L_741320: /* 741320: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 741321: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 741322: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741324: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 741328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741329: mov esi, ecx */
  esi = ecx;
/* 74132b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x741330u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 741330: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 741336: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 74133c: mov ebp, dword ptr [esi + 0x33c] */
  ebp = R32((uint32_t)(esi + 0x33cu));
/* 741342: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741344: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 741347: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 741349: mov dword ptr [esi + 0x33c], ebp */
  W32((uint32_t)(esi + 0x33cu), ebp);
/* 74134f: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741355: mov ecx, ebp */
  ecx = ebp;
/* 741357: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741359: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74135c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74135e: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741364: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 74136a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74136c: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74136f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741371: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 741377: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74137d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74137f: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 741382: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741384: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74138a: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 741390: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741392: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 741395: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741397: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74139d: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7413a3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413a5: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7413a8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413aa: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 7413b0: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7413b6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7413b8: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7413bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7413bd: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 7413c3: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7413c9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413cb: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7413d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413d2: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 7413d8: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7413de: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7413e0: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7413e6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7413e8: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 7413ee: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7413f4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413f6: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7413fb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7413fd: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741403: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 741409: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74140b: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 741411: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741413: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 741419: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74141f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741421: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 741426: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741428: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74142e: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 741434: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741436: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74143c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74143e: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 741444: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74144a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74144c: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 741451: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741453: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741459: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 74145f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741461: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 741467: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741469: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74146f: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741475: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741477: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74147c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74147e: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741484: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 74148a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74148c: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 741492: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 741494: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74149a: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7414a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7414a2: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7414a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7414a9: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 7414af: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7414b5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7414b7: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7414bd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7414bf: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 7414c5: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7414cb: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7414cd: and edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7414d3: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7414d5: mov dword ptr [esi + 0x33c], edx */
  W32((uint32_t)(esi + 0x33cu), edx);
/* 7414db: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 7414e1: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 7414e7: mov ecx, dword ptr [edi + 0x344] */
  ecx = R32((uint32_t)(edi + 0x344u));
/* 7414ed: mov dword ptr [esi + 0x344], ecx */
  W32((uint32_t)(esi + 0x344u), ecx);
/* 7414f3: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 7414f9: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 7414ff: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 741505: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74150b: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 741511: lea edx, [edi + 0x354] */
  edx = (uint32_t)(edi + 0x354u);
/* 741517: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74151d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74151e: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 741524: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74152au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74152a: lea eax, [edi + 0x360] */
  eax = (uint32_t)(edi + 0x360u);
/* 741530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741531: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 741537: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74153du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74153d: lea ecx, [edi + 0x36c] */
  ecx = (uint32_t)(edi + 0x36cu);
/* 741543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741544: lea ecx, [esi + 0x36c] */
  ecx = (uint32_t)(esi + 0x36cu);
/* 74154a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741550u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741550: lea edx, [edi + 0x378] */
  edx = (uint32_t)(edi + 0x378u);
/* 741556: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741557: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 74155d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741563u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741563: lea eax, [edi + 0x384] */
  eax = (uint32_t)(edi + 0x384u);
/* 741569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74156a: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 741570: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741576u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741576: lea ecx, [edi + 0x390] */
  ecx = (uint32_t)(edi + 0x390u);
/* 74157c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74157d: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 741583: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741589u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741589: lea edx, [edi + 0x39c] */
  edx = (uint32_t)(edi + 0x39cu);
/* 74158f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741590: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 741596: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74159cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74159c: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 7415a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7415a3: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7415a9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7415afu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7415af: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* 7415b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7415b6: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 7415bc: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7415c2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7415c2: lea edx, [edi + 0x3c0] */
  edx = (uint32_t)(edi + 0x3c0u);
/* 7415c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7415c9: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 7415cf: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7415d5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7415d5: lea eax, [edi + 0x3cc] */
  eax = (uint32_t)(edi + 0x3ccu);
/* 7415db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7415dc: lea ecx, [esi + 0x3cc] */
  ecx = (uint32_t)(esi + 0x3ccu);
/* 7415e2: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7415e8u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7415e8: lea ecx, [edi + 0x3d8] */
  ecx = (uint32_t)(edi + 0x3d8u);
/* 7415ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7415ef: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 7415f5: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7415fbu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7415fb: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 741601: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 741607: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 74160d: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 741613: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 741619: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 74161f: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 741625: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 74162b: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 741631: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 741637: mov ecx, dword ptr [edi + 0x3f8] */
  ecx = R32((uint32_t)(edi + 0x3f8u));
/* 74163d: lea edx, [edi + 0x3fc] */
  edx = (uint32_t)(edi + 0x3fcu);
/* 741643: mov dword ptr [esi + 0x3f8], ecx */
  W32((uint32_t)(esi + 0x3f8u), ecx);
/* 741649: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74164a: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 741650: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741656u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741656: lea eax, [edi + 0x408] */
  eax = (uint32_t)(edi + 0x408u);
/* 74165c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74165d: lea ecx, [esi + 0x408] */
  ecx = (uint32_t)(esi + 0x408u);
/* 741663: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741669u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741669: mov ecx, dword ptr [edi + 0x414] */
  ecx = R32((uint32_t)(edi + 0x414u));
/* 74166f: mov dword ptr [esi + 0x414], ecx */
  W32((uint32_t)(esi + 0x414u), ecx);
/* 741675: mov edx, dword ptr [edi + 0x418] */
  edx = R32((uint32_t)(edi + 0x418u));
/* 74167b: mov dword ptr [esi + 0x418], edx */
  W32((uint32_t)(esi + 0x418u), edx);
/* 741681: mov eax, dword ptr [edi + 0x41c] */
  eax = R32((uint32_t)(edi + 0x41cu));
/* 741687: mov dword ptr [esi + 0x41c], eax */
  W32((uint32_t)(esi + 0x41cu), eax);
/* 74168d: mov ecx, dword ptr [edi + 0x420] */
  ecx = R32((uint32_t)(edi + 0x420u));
/* 741693: mov eax, dword ptr [esi + 0x420] */
  eax = R32((uint32_t)(esi + 0x420u));
/* 741699: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74169b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74169e: mov ebx, eax */
  ebx = eax;
/* 7416a0: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7416a2: mov dword ptr [esi + 0x420], ebx */
  W32((uint32_t)(esi + 0x420u), ebx);
/* 7416a8: mov edx, dword ptr [edi + 0x424] */
  edx = R32((uint32_t)(edi + 0x424u));
/* 7416ae: mov dword ptr [esi + 0x424], edx */
  W32((uint32_t)(esi + 0x424u), edx);
/* 7416b4: mov eax, dword ptr [edi + 0x428] */
  eax = R32((uint32_t)(edi + 0x428u));
/* 7416ba: mov dword ptr [esi + 0x428], eax */
  W32((uint32_t)(esi + 0x428u), eax);
/* 7416c0: mov ecx, dword ptr [edi + 0x42c] */
  ecx = R32((uint32_t)(edi + 0x42cu));
/* 7416c6: mov dword ptr [esi + 0x42c], ecx */
  W32((uint32_t)(esi + 0x42cu), ecx);
/* 7416cc: mov edx, dword ptr [edi + 0x430] */
  edx = R32((uint32_t)(edi + 0x430u));
/* 7416d2: lea eax, [edi + 0x434] */
  eax = (uint32_t)(edi + 0x434u);
/* 7416d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7416d9: lea ecx, [esi + 0x434] */
  ecx = (uint32_t)(esi + 0x434u);
/* 7416df: mov dword ptr [esi + 0x430], edx */
  W32((uint32_t)(esi + 0x430u), edx);
/* 7416e5: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7416ebu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7416eb: mov ecx, dword ptr [edi + 0x440] */
  ecx = R32((uint32_t)(edi + 0x440u));
/* 7416f1: lea edx, [edi + 0x444] */
  edx = (uint32_t)(edi + 0x444u);
/* 7416f7: mov dword ptr [esi + 0x440], ecx */
  W32((uint32_t)(esi + 0x440u), ecx);
/* 7416fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7416fe: lea ecx, [esi + 0x444] */
  ecx = (uint32_t)(esi + 0x444u);
/* 741704: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74170au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74170a: mov eax, dword ptr [edi + 0x450] */
  eax = R32((uint32_t)(edi + 0x450u));
/* 741710: mov dword ptr [esi + 0x450], eax */
  W32((uint32_t)(esi + 0x450u), eax);
/* 741716: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 74171c: lea edx, [edi + 0x458] */
  edx = (uint32_t)(edi + 0x458u);
/* 741722: mov dword ptr [esi + 0x454], ecx */
  W32((uint32_t)(esi + 0x454u), ecx);
/* 741728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741729: lea ecx, [esi + 0x458] */
  ecx = (uint32_t)(esi + 0x458u);
/* 74172f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741735u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741735: mov eax, dword ptr [edi + 0x464] */
  eax = R32((uint32_t)(edi + 0x464u));
/* 74173b: mov dword ptr [esi + 0x464], eax */
  W32((uint32_t)(esi + 0x464u), eax);
/* 741741: mov ecx, dword ptr [edi + 0x468] */
  ecx = R32((uint32_t)(edi + 0x468u));
/* 741747: lea edx, [edi + 0x46c] */
  edx = (uint32_t)(edi + 0x46cu);
/* 74174d: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 741753: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741754: lea ecx, [esi + 0x46c] */
  ecx = (uint32_t)(esi + 0x46cu);
/* 74175a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741760u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741760: mov eax, dword ptr [edi + 0x478] */
  eax = R32((uint32_t)(edi + 0x478u));
/* 741766: mov ebx, dword ptr [esi + 0x480] */
  ebx = R32((uint32_t)(esi + 0x480u));
/* 74176c: mov dword ptr [esi + 0x478], eax */
  W32((uint32_t)(esi + 0x478u), eax);
/* 741772: mov ecx, dword ptr [edi + 0x47c] */
  ecx = R32((uint32_t)(edi + 0x47cu));
/* 741778: mov dword ptr [esi + 0x47c], ecx */
  W32((uint32_t)(esi + 0x47cu), ecx);
/* 74177e: mov edx, dword ptr [edi + 0x480] */
  edx = R32((uint32_t)(edi + 0x480u));
/* 741784: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 741786: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 741789: mov eax, ebx */
  eax = ebx;
/* 74178b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74178d: lea ecx, [edi + 0x488] */
  ecx = (uint32_t)(edi + 0x488u);
/* 741793: mov dword ptr [esi + 0x480], eax */
  W32((uint32_t)(esi + 0x480u), eax);
/* 741799: mov eax, dword ptr [edi + 0x484] */
  eax = R32((uint32_t)(edi + 0x484u));
/* 74179f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7417a0: lea ecx, [esi + 0x488] */
  ecx = (uint32_t)(esi + 0x488u);
/* 7417a6: mov dword ptr [esi + 0x484], eax */
  W32((uint32_t)(esi + 0x484u), eax);
/* 7417ac: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7417b2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7417b2: lea edx, [edi + 0x494] */
  edx = (uint32_t)(edi + 0x494u);
/* 7417b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7417b9: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 7417bf: call 0x6c6f69 */
  esp -= 4; W32(esp, 0x7417c4u); SPILL(); f_6c6f69(); if (g_unwind) return; RELOAD();
/* 7417c4: lea eax, [edi + 0x4a0] */
  eax = (uint32_t)(edi + 0x4a0u);
/* 7417ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7417cb: lea ecx, [esi + 0x4a0] */
  ecx = (uint32_t)(esi + 0x4a0u);
/* 7417d1: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7417d7u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7417d7: lea ecx, [edi + 0x4ac] */
  ecx = (uint32_t)(edi + 0x4acu);
/* 7417dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7417de: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 7417e4: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7417eau); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7417ea: lea edx, [edi + 0x4b8] */
  edx = (uint32_t)(edi + 0x4b8u);
/* 7417f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7417f1: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 7417f7: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7417fdu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7417fd: lea eax, [edi + 0x4c4] */
  eax = (uint32_t)(edi + 0x4c4u);
/* 741803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741804: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 74180a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741810u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741810: lea ebx, [esi + 0x4d0] */
  ebx = (uint32_t)(esi + 0x4d0u);
/* 741816: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 741818: mov ebp, 0xb */
  ebp = 0xbu;
/* 74181d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_741820: /* 741820: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* 741823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741824: mov ecx, ebx */
  ecx = ebx;
/* 741826: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74182cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74182c: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 74182f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 741830: jne 0x741820 */
  if (!zf) goto L_741820;
L_741832: /* 741832: lea ebx, [esi + 0x554] */
  ebx = (uint32_t)(esi + 0x554u);
/* 741838: mov ebp, 2 */
  ebp = 0x2u;
/* 74183d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_741840: /* 741840: lea edx, [ebx + edi] */
  edx = (uint32_t)(ebx + edi);
/* 741843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741844: mov ecx, ebx */
  ecx = ebx;
/* 741846: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74184cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74184c: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 74184f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 741850: jne 0x741840 */
  if (!zf) goto L_741840;
L_741852: /* 741852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741853: mov eax, esi */
  eax = esi;
/* 741855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 741857: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741858: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7419b0(void) {
  LOAD_REGS();
L_7419b0: /* 7419b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7419b1: mov esi, ecx */
  esi = ecx;
/* 7419b3: call 0x6c3e04 */
  esp -= 4; W32(esp, 0x7419b8u); SPILL(); f_6c3e04(); if (g_unwind) return; RELOAD();
/* 7419b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7419bd: je 0x7419ce */
  if (zf) goto L_7419ce;
L_7419bf: /* 7419bf: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 7419c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7419c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7419cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7419cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7419ce: /* 7419ce: mov eax, esi */
  eax = esi;
/* 7419d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7419d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7419f0(void) {
  LOAD_REGS();
L_7419f0: /* 7419f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7419f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7419f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7419f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7419f9: mov esi, ecx */
  esi = ecx;
/* 7419fb: je 0x741a30 */
  if (zf) goto L_741a30;
L_7419fd: /* 7419fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 741a00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741a01: push 0x6c3e04 */
  { uint32_t v = 0x6c3e04u; esp -= 4; W32(esp, v); }
/* 741a06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 741a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741a0a: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 741a0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741a10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x741a15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 741a15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741a18: je 0x741a28 */
  if (zf) goto L_741a28;
L_741a1a: /* 741a1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 741a20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 741a22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 741a24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741a25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x741a28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_741a28: /* 741a28: mov eax, edi */
  eax = edi;
/* 741a2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741a2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741a2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741a2d: ret 4 */
  esp += 8; SPILL(); return;
L_741a30: /* 741a30: mov ecx, esi */
  ecx = esi;
/* 741a32: call 0x6c3e04 */
  esp -= 4; W32(esp, 0x741a37u); SPILL(); f_6c3e04(); if (g_unwind) return; RELOAD();
/* 741a37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741a3a: je 0x741a4b */
  if (zf) goto L_741a4b;
L_741a3c: /* 741a3c: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 741a41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741a42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x741a48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 741a48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_741a4b: /* 741a4b: mov eax, esi */
  eax = esi;
/* 741a4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741a4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741a4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741a80(void) {
  LOAD_REGS();
L_741a80: /* 741a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 741a82: push 0x9c70e8 */
  { uint32_t v = 0x9c70e8u; esp -= 4; W32(esp, v); }
/* 741a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 741a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 741a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741a97: mov esi, ecx */
  esi = ecx;
/* 741a99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 741a9d: mov dword ptr [esi], 0x9fc6f0 */
  W32((uint32_t)(esi), 0x9fc6f0u);
/* 741aa3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 741aab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x741ab1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 741ab1: mov ecx, esi */
  ecx = esi;
/* 741ab3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 741abb: call 0x6c688e */
  esp -= 4; W32(esp, 0x741ac0u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 741ac0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 741ac4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741ac5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 741acc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741acf: ret  */
  esp += 4; SPILL(); return;
}

void f_741af0(void) {
  LOAD_REGS();
L_741af0: /* 741af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741af1: mov esi, ecx */
  esi = ecx;
/* 741af3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x741af8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 741af8: mov dword ptr [esi], 0x9fc6f0 */
  W32((uint32_t)(esi), 0x9fc6f0u);
/* 741afe: mov eax, esi */
  eax = esi;
/* 741b00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741b01: ret  */
  esp += 4; SPILL(); return;
}

void f_741b20(void) {
  LOAD_REGS();
L_741b20: /* 741b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741b21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741b22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 741b26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741b27: mov esi, ecx */
  esi = ecx;
/* 741b29: call 0x6c1456 */
  esp -= 4; W32(esp, 0x741b2eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 741b2e: mov dword ptr [esi], 0x9fc6f0 */
  W32((uint32_t)(esi), 0x9fc6f0u);
/* 741b34: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741b3a: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741b40: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 741b46: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 741b4c: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 741b52: mov edi, dword ptr [esi + 0x344] */
  edi = R32((uint32_t)(esi + 0x344u));
/* 741b58: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 741b5a: mov eax, edi */
  eax = edi;
/* 741b5c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 741b5f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741b61: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 741b67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741b68: mov eax, esi */
  eax = esi;
/* 741b6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741b6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741b90(void) {
  LOAD_REGS();
L_741b90: /* 741b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741b91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741b92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 741b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741b97: mov esi, ecx */
  esi = ecx;
/* 741b99: call 0x6c5cef */
  esp -= 4; W32(esp, 0x741b9eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 741b9e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741ba4: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741baa: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 741bb0: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 741bb6: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 741bbc: mov edi, dword ptr [esi + 0x344] */
  edi = R32((uint32_t)(esi + 0x344u));
/* 741bc2: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 741bc4: mov eax, edi */
  eax = edi;
/* 741bc6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 741bc9: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741bcb: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 741bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741bd2: mov eax, esi */
  eax = esi;
/* 741bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741bd5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741c00(void) {
  LOAD_REGS();
L_741c00: /* 741c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741c01: mov esi, ecx */
  esi = ecx;
/* 741c03: call 0x6c8a6c */
  esp -= 4; W32(esp, 0x741c08u); SPILL(); f_6c8a6c(); if (g_unwind) return; RELOAD();
/* 741c08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741c0d: je 0x741c1e */
  if (zf) goto L_741c1e;
L_741c0f: /* 741c0f: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 741c14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741c15: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x741c1bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 741c1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_741c1e: /* 741c1e: mov eax, esi */
  eax = esi;
/* 741c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741c21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741c40(void) {
  LOAD_REGS();
L_741c40: /* 741c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 741c41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 741c45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741c49: mov esi, ecx */
  esi = ecx;
/* 741c4b: je 0x741c80 */
  if (zf) goto L_741c80;
L_741c4d: /* 741c4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 741c50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741c51: push 0x6c8a6c */
  { uint32_t v = 0x6c8a6cu; esp -= 4; W32(esp, v); }
/* 741c56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 741c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741c5a: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 741c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741c60: call 0x99ca3d */
  esp -= 4; W32(esp, 0x741c65u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 741c65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741c68: je 0x741c78 */
  if (zf) goto L_741c78;
L_741c6a: /* 741c6a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 741c70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 741c72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 741c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741c75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x741c78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_741c78: /* 741c78: mov eax, edi */
  eax = edi;
/* 741c7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741c7d: ret 4 */
  esp += 8; SPILL(); return;
L_741c80: /* 741c80: mov ecx, esi */
  ecx = esi;
/* 741c82: call 0x6c8a6c */
  esp -= 4; W32(esp, 0x741c87u); SPILL(); f_6c8a6c(); if (g_unwind) return; RELOAD();
/* 741c87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741c8a: je 0x741c9b */
  if (zf) goto L_741c9b;
L_741c8c: /* 741c8c: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 741c91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741c92: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x741c98u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 741c98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_741c9b: /* 741c9b: mov eax, esi */
  eax = esi;
/* 741c9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741c9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741c9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741cd0(void) {
  LOAD_REGS();
L_741cd0: /* 741cd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 741cd2: push 0x9c7117 */
  { uint32_t v = 0x9c7117u; esp -= 4; W32(esp, v); }
/* 741cd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 741cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741cde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 741ce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741ce7: mov esi, ecx */
  esi = ecx;
/* 741ce9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 741ced: mov dword ptr [esi], 0x9fc8d0 */
  W32((uint32_t)(esi), 0x9fc8d0u);
/* 741cf3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 741cfb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x741d01u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 741d01: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 741d07: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 741d0c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x741d12u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 741d12: mov ecx, esi */
  ecx = esi;
/* 741d14: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 741d1c: call 0x6c688e */
  esp -= 4; W32(esp, 0x741d21u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 741d21: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 741d25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741d26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 741d2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741d30: ret  */
  esp += 4; SPILL(); return;
}

void f_741d60(void) {
  LOAD_REGS();
L_741d60: /* 741d60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 741d62: push 0x9c7138 */
  { uint32_t v = 0x9c7138u; esp -= 4; W32(esp, v); }
/* 741d67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 741d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741d6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 741d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741d77: mov esi, ecx */
  esi = ecx;
/* 741d79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 741d7d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x741d82u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 741d82: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 741d88: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 741d90: mov dword ptr [esi], 0x9fc8d0 */
  W32((uint32_t)(esi), 0x9fc8d0u);
/* 741d96: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x741d9cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 741d9c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 741da0: mov eax, esi */
  eax = esi;
/* 741da2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741da3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 741daa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741dad: ret  */
  esp += 4; SPILL(); return;
}

void f_741dd0(void) {
  LOAD_REGS();
L_741dd0: /* 741dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 741dd2: push 0x9c7158 */
  { uint32_t v = 0x9c7158u; esp -= 4; W32(esp, v); }
/* 741dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 741ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 741de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741de7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741de8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 741dec: mov esi, ecx */
  esi = ecx;
/* 741dee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741def: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 741df3: call 0x6c1456 */
  esp -= 4; W32(esp, 0x741df8u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 741df8: mov dword ptr [esi], 0x9fc8d0 */
  W32((uint32_t)(esi), 0x9fc8d0u);
/* 741dfe: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741e04: add edi, 0x340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 741e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741e0b: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 741e11: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 741e19: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741e1f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741e25u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741e25: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 741e29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741e2a: mov eax, esi */
  eax = esi;
/* 741e2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741e2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 741e34: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741e37: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741e60(void) {
  LOAD_REGS();
L_741e60: /* 741e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741e61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741e62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 741e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741e67: mov esi, ecx */
  esi = ecx;
/* 741e69: call 0x6c5cef */
  esp -= 4; W32(esp, 0x741e6eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 741e6e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 741e74: add edi, 0x340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 741e7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741e7b: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 741e81: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 741e87: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x741e8du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 741e8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741e8e: mov eax, esi */
  eax = esi;
/* 741e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741e91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741eb0(void) {
  LOAD_REGS();
L_741eb0: /* 741eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741eb1: mov esi, ecx */
  esi = ecx;
/* 741eb3: call 0x6c2126 */
  esp -= 4; W32(esp, 0x741eb8u); SPILL(); f_6c2126(); if (g_unwind) return; RELOAD();
/* 741eb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741ebd: je 0x741ece */
  if (zf) goto L_741ece;
L_741ebf: /* 741ebf: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 741ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741ec5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x741ecbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 741ecb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_741ece: /* 741ece: mov eax, esi */
  eax = esi;
/* 741ed0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741ed1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741ef0(void) {
  LOAD_REGS();
L_741ef0: /* 741ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 741ef1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 741ef5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741ef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741ef9: mov esi, ecx */
  esi = ecx;
/* 741efb: je 0x741f30 */
  if (zf) goto L_741f30;
L_741efd: /* 741efd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 741f00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741f01: push 0x6c2126 */
  { uint32_t v = 0x6c2126u; esp -= 4; W32(esp, v); }
/* 741f06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 741f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741f0a: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 741f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741f10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x741f15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 741f15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741f18: je 0x741f28 */
  if (zf) goto L_741f28;
L_741f1a: /* 741f1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 741f20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 741f22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 741f24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741f25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x741f28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_741f28: /* 741f28: mov eax, edi */
  eax = edi;
/* 741f2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741f2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741f2d: ret 4 */
  esp += 8; SPILL(); return;
L_741f30: /* 741f30: mov ecx, esi */
  ecx = esi;
/* 741f32: call 0x6c2126 */
  esp -= 4; W32(esp, 0x741f37u); SPILL(); f_6c2126(); if (g_unwind) return; RELOAD();
/* 741f37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 741f3a: je 0x741f4b */
  if (zf) goto L_741f4b;
L_741f3c: /* 741f3c: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 741f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741f42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x741f48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 741f48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_741f4b: /* 741f4b: mov eax, esi */
  eax = esi;
/* 741f4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741f4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 741f4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_741f80(void) {
  LOAD_REGS();
L_741f80: /* 741f80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 741f82: push 0x9c7178 */
  { uint32_t v = 0x9c7178u; esp -= 4; W32(esp, v); }
/* 741f87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 741f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741f8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 741f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741f97: mov esi, ecx */
  esi = ecx;
/* 741f99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 741f9d: mov dword ptr [esi], 0x9fcab0 */
  W32((uint32_t)(esi), 0x9fcab0u);
/* 741fa3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 741fab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x741fb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 741fb1: mov ecx, esi */
  ecx = esi;
/* 741fb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 741fbb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x741fc0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 741fc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 741fc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741fc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 741fcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741fcf: ret  */
  esp += 4; SPILL(); return;
}

void f_741ff0(void) {
  LOAD_REGS();
L_741ff0: /* 741ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 741ff1: mov esi, ecx */
  esi = ecx;
/* 741ff3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x741ff8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 741ff8: mov dword ptr [esi], 0x9fcab0 */
  W32((uint32_t)(esi), 0x9fcab0u);
/* 741ffe: mov eax, esi */
  eax = esi;
/* 742000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 742001: ret  */
  esp += 4; SPILL(); return;
}

void f_742020(void) {
  LOAD_REGS();
L_742020: /* 742020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742021: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742022: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 742026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742027: mov esi, ecx */
  esi = ecx;
/* 742029: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74202eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74202e: mov dword ptr [esi], 0x9fcab0 */
  W32((uint32_t)(esi), 0x9fcab0u);
/* 742034: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74203a: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 742040: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742042: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742045: mov ecx, edi */
  ecx = edi;
/* 742047: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742049: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74204a: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 742050: mov eax, esi */
  eax = esi;
/* 742052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 742053: ret 4 */
  esp += 8; SPILL(); return;
}

void f_742070(void) {
  LOAD_REGS();
L_742070: /* 742070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742072: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 742076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742077: mov esi, ecx */
  esi = ecx;
/* 742079: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74207eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74207e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 742084: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 74208a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74208c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74208f: mov ecx, edi */
  ecx = edi;
/* 742091: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742093: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 742094: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74209a: mov eax, esi */
  eax = esi;
/* 74209c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74209d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7420b0(void) {
  LOAD_REGS();
L_7420b0: /* 7420b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7420b1: mov esi, ecx */
  esi = ecx;
/* 7420b3: call 0x6ca1c3 */
  esp -= 4; W32(esp, 0x7420b8u); SPILL(); f_6ca1c3(); if (g_unwind) return; RELOAD();
/* 7420b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7420bd: je 0x7420ce */
  if (zf) goto L_7420ce;
L_7420bf: /* 7420bf: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 7420c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7420c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7420cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7420cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7420ce: /* 7420ce: mov eax, esi */
  eax = esi;
/* 7420d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7420d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7420f0(void) {
  LOAD_REGS();
L_7420f0: /* 7420f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7420f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7420f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7420f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7420f9: mov esi, ecx */
  esi = ecx;
/* 7420fb: je 0x742130 */
  if (zf) goto L_742130;
L_7420fd: /* 7420fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 742100: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742101: push 0x6ca1c3 */
  { uint32_t v = 0x6ca1c3u; esp -= 4; W32(esp, v); }
/* 742106: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 742109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74210a: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 74210f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742110: call 0x99ca3d */
  esp -= 4; W32(esp, 0x742115u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 742115: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 742118: je 0x742128 */
  if (zf) goto L_742128;
L_74211a: /* 74211a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 742120: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 742122: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 742124: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 742125: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x742128u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_742128: /* 742128: mov eax, edi */
  eax = edi;
/* 74212a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74212b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74212c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74212d: ret 4 */
  esp += 8; SPILL(); return;
L_742130: /* 742130: mov ecx, esi */
  ecx = esi;
/* 742132: call 0x6ca1c3 */
  esp -= 4; W32(esp, 0x742137u); SPILL(); f_6ca1c3(); if (g_unwind) return; RELOAD();
/* 742137: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74213a: je 0x74214b */
  if (zf) goto L_74214b;
L_74213c: /* 74213c: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 742141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742142: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x742148u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 742148: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74214b: /* 74214b: mov eax, esi */
  eax = esi;
/* 74214d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74214e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74214f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_742180(void) {
  LOAD_REGS();
L_742180: /* 742180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 742182: push 0x9c7198 */
  { uint32_t v = 0x9c7198u; esp -= 4; W32(esp, v); }
/* 742187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74218d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74218e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 742195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 742196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742197: mov esi, ecx */
  esi = ecx;
/* 742199: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74219d: mov dword ptr [esi], 0x9fcc90 */
  W32((uint32_t)(esi), 0x9fcc90u);
/* 7421a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7421ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7421b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7421b1: mov ecx, esi */
  ecx = esi;
/* 7421b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7421bb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7421c0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7421c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7421c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7421c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7421cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7421cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7421f0(void) {
  LOAD_REGS();
L_7421f0: /* 7421f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7421f1: mov esi, ecx */
  esi = ecx;
/* 7421f3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7421f8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7421f8: mov dword ptr [esi], 0x9fcc90 */
  W32((uint32_t)(esi), 0x9fcc90u);
/* 7421fe: mov eax, esi */
  eax = esi;
/* 742200: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 742201: ret  */
  esp += 4; SPILL(); return;
}

void f_742220(void) {
  LOAD_REGS();
L_742220: /* 742220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 742224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 742226: mov esi, ecx */
  esi = ecx;
/* 742228: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74222du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74222d: mov dword ptr [esi], 0x9fcc90 */
  W32((uint32_t)(esi), 0x9fcc90u);
/* 742233: mov eax, esi */
  eax = esi;
/* 742235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 742236: ret 4 */
  esp += 8; SPILL(); return;
}

void f_742250(void) {
  LOAD_REGS();
L_742250: /* 742250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 742254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 742256: mov esi, ecx */
  esi = ecx;
/* 742258: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74225du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74225d: mov eax, esi */
  eax = esi;
/* 74225f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 742260: ret 4 */
  esp += 8; SPILL(); return;
}

void f_742280(void) {
  LOAD_REGS();
L_742280: /* 742280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742281: mov esi, ecx */
  esi = ecx;
/* 742283: call 0x6c780b */
  esp -= 4; W32(esp, 0x742288u); SPILL(); f_6c780b(); if (g_unwind) return; RELOAD();
/* 742288: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74228d: je 0x74229e */
  if (zf) goto L_74229e;
L_74228f: /* 74228f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 742294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742295: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74229bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74229b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74229e: /* 74229e: mov eax, esi */
  eax = esi;
/* 7422a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7422a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7422c0(void) {
  LOAD_REGS();
L_7422c0: /* 7422c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7422c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7422c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7422c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7422c9: mov esi, ecx */
  esi = ecx;
/* 7422cb: je 0x742300 */
  if (zf) goto L_742300;
L_7422cd: /* 7422cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7422d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7422d1: push 0x6c780b */
  { uint32_t v = 0x6c780bu; esp -= 4; W32(esp, v); }
/* 7422d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7422d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7422da: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7422df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7422e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7422e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7422e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7422e8: je 0x7422f8 */
  if (zf) goto L_7422f8;
L_7422ea: /* 7422ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7422f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7422f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7422f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7422f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7422f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7422f8: /* 7422f8: mov eax, edi */
  eax = edi;
/* 7422fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7422fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7422fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7422fd: ret 4 */
  esp += 8; SPILL(); return;
L_742300: /* 742300: mov ecx, esi */
  ecx = esi;
/* 742302: call 0x6c780b */
  esp -= 4; W32(esp, 0x742307u); SPILL(); f_6c780b(); if (g_unwind) return; RELOAD();
/* 742307: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74230a: je 0x74231b */
  if (zf) goto L_74231b;
L_74230c: /* 74230c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 742311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742312: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x742318u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 742318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74231b: /* 74231b: mov eax, esi */
  eax = esi;
/* 74231d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74231e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74231f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_742350(void) {
  LOAD_REGS();
L_742350: /* 742350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 742352: push 0x9c71f4 */
  { uint32_t v = 0x9c71f4u; esp -= 4; W32(esp, v); }
/* 742357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74235d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74235e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 742365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 742366: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742367: mov esi, ecx */
  esi = ecx;
/* 742369: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74236d: mov dword ptr [esi], 0x9fce70 */
  W32((uint32_t)(esi), 0x9fce70u);
/* 742373: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 74237b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x742381u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 742381: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 742387: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74238c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x742392u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 742392: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 742398: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 74239d: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7423a3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7423a3: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 7423a9: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7423ae: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7423b4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7423b4: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 7423ba: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7423bf: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7423c5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7423c5: mov ecx, esi */
  ecx = esi;
/* 7423c7: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7423cf: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7423d4u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7423d4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7423d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7423d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7423e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7423e3: ret  */
  esp += 4; SPILL(); return;
}

void f_742420(void) {
  LOAD_REGS();
L_742420: /* 742420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 742422: push 0x9c7264 */
  { uint32_t v = 0x9c7264u; esp -= 4; W32(esp, v); }
/* 742427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74242d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74242e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 742435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 742436: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 742437: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742438: mov esi, ecx */
  esi = ecx;
/* 74243a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74243b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74243f: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x742444u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 742444: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 74244a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 742452: mov dword ptr [esi], 0x9fce70 */
  W32((uint32_t)(esi), 0x9fce70u);
/* 742458: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74245eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74245e: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 742464: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74246au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74246a: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 742470: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 742475: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74247bu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74247b: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 742481: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 742486: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74248cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74248c: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 742492: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x742498u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 742498: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 74249e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 7424a3: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7424a9u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7424a9: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 7424af: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 7424b4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7424bau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7424ba: lea ecx, [esi + 0x504] */
  ecx = (uint32_t)(esi + 0x504u);
/* 7424c0: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7424c6u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7424c6: lea ecx, [esi + 0x510] */
  ecx = (uint32_t)(esi + 0x510u);
/* 7424cc: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7424d2u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7424d2: lea edi, [esi + 0x54c] */
  edi = (uint32_t)(esi + 0x54cu);
/* 7424d8: mov ebx, 4 */
  ebx = 0x4u;
/* 7424dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7424e0: /* 7424e0: mov ecx, edi */
  ecx = edi;
/* 7424e2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7424e8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7424e8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7424eb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 7424ec: jne 0x7424e0 */
  if (!zf) goto L_7424e0;
L_7424ee: /* 7424ee: lea ecx, [esi + 0x55c] */
  ecx = (uint32_t)(esi + 0x55cu);
/* 7424f4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7424fau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7424fa: lea ecx, [esi + 0x560] */
  ecx = (uint32_t)(esi + 0x560u);
/* 742500: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x742506u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 742506: lea ecx, [esi + 0x580] */
  ecx = (uint32_t)(esi + 0x580u);
/* 74250c: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x742512u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 742512: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 742516: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 742517: mov eax, esi */
  eax = esi;
/* 742519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74251a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74251b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 742522: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 742525: ret  */
  esp += 4; SPILL(); return;
}

void f_742580(void) {
  LOAD_REGS();
L_742580: /* 742580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 742582: push 0x9c72c5 */
  { uint32_t v = 0x9c72c5u; esp -= 4; W32(esp, v); }
/* 742587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74258d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74258e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 742595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 742596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 742597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 742598: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 74259c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74259d: mov ebx, ecx */
  ebx = ecx;
/* 74259f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7425a0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7425a4: call 0x6c1456 */
  esp -= 4; W32(esp, 0x7425a9u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 7425a9: mov dword ptr [ebx], 0x9fce70 */
  W32((uint32_t)(ebx), 0x9fce70u);
/* 7425af: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7425b5: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 7425bb: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 7425c1: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 7425c7: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 7425cd: mov ecx, dword ptr [ebx + 0x34c] */
  ecx = R32((uint32_t)(ebx + 0x34cu));
/* 7425d3: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 7425d9: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7425df: mov edx, dword ptr [ebx + 0x34c] */
  edx = R32((uint32_t)(ebx + 0x34cu));
/* 7425e5: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 7425eb: xor ecx, dword ptr [esi + 0x34c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7425f1: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7425f4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7425f6: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 7425fc: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 742602: mov eax, edx */
  eax = edx;
/* 742604: mov edx, dword ptr [esi + 0x34c] */
  edx = R32((uint32_t)(esi + 0x34cu));
/* 74260a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74260c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74260f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742611: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 742617: mov al, byte ptr [esi + 0x350] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x350u))) & 0xffu);
/* 74261d: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 742623: mov byte ptr [ebx + 0x350], al */
  W8((uint32_t)(ebx + 0x350u), (eax & 0xffu));
/* 742629: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74262f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742632: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742634: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 74263a: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 742640: mov eax, edx */
  eax = edx;
/* 742642: mov edx, dword ptr [esi + 0x354] */
  edx = R32((uint32_t)(esi + 0x354u));
/* 742648: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74264a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74264d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74264f: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 742655: mov al, byte ptr [esi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x358u))) & 0xffu);
/* 74265b: mov byte ptr [ebx + 0x358], al */
  W8((uint32_t)(ebx + 0x358u), (eax & 0xffu));
/* 742661: mov edi, dword ptr [esi + 0x35c] */
  edi = R32((uint32_t)(esi + 0x35cu));
/* 742667: mov eax, dword ptr [ebx + 0x35c] */
  eax = R32((uint32_t)(ebx + 0x35cu));
/* 74266d: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74266f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742672: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742674: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
/* 74267a: mov edx, dword ptr [esi + 0x35c] */
  edx = R32((uint32_t)(esi + 0x35cu));
/* 742680: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742682: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 742685: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742687: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 74268d: mov dword ptr [ebx + 0x35c], edx */
  W32((uint32_t)(ebx + 0x35cu), edx);
/* 742693: mov eax, dword ptr [esi + 0x360] */
  eax = R32((uint32_t)(esi + 0x360u));
/* 742699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74269a: lea ecx, [ebx + 0x364] */
  ecx = (uint32_t)(ebx + 0x364u);
/* 7426a0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7426a8: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 7426ae: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7426b4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7426b4: lea edx, [esi + 0x370] */
  edx = (uint32_t)(esi + 0x370u);
/* 7426ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7426bb: lea ecx, [ebx + 0x370] */
  ecx = (uint32_t)(ebx + 0x370u);
/* 7426c1: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 7426c6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7426ccu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7426cc: mov eax, dword ptr [esi + 0x37c] */
  eax = R32((uint32_t)(esi + 0x37cu));
/* 7426d2: mov edi, dword ptr [ebx + 0x380] */
  edi = R32((uint32_t)(ebx + 0x380u));
/* 7426d8: mov dword ptr [ebx + 0x37c], eax */
  W32((uint32_t)(ebx + 0x37cu), eax);
/* 7426de: mov ecx, dword ptr [esi + 0x380] */
  ecx = R32((uint32_t)(esi + 0x380u));
/* 7426e4: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7426e6: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7426eb: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7426ee: mov eax, edi */
  eax = edi;
/* 7426f0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7426f2: mov dword ptr [ebx + 0x380], eax */
  W32((uint32_t)(ebx + 0x380u), eax);
/* 7426f8: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 7426fe: mov dword ptr [ebx + 0x384], edx */
  W32((uint32_t)(ebx + 0x384u), edx);
/* 742704: mov eax, dword ptr [esi + 0x388] */
  eax = R32((uint32_t)(esi + 0x388u));
/* 74270a: mov edx, dword ptr [ebx + 0x390] */
  edx = R32((uint32_t)(ebx + 0x390u));
/* 742710: mov dword ptr [ebx + 0x388], eax */
  W32((uint32_t)(ebx + 0x388u), eax);
/* 742716: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 74271c: mov eax, dword ptr [ebx + 0x390] */
  eax = R32((uint32_t)(ebx + 0x390u));
/* 742722: mov dword ptr [ebx + 0x38c], ecx */
  W32((uint32_t)(ebx + 0x38cu), ecx);
/* 742728: xor edx, dword ptr [esi + 0x390] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74272e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 742731: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742733: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742739: mov ecx, eax */
  ecx = eax;
/* 74273b: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742741: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742743: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742746: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742748: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74274e: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 742754: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742756: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742759: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74275b: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742761: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742767: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742769: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74276c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74276e: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742774: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74277a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74277c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74277f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742781: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742787: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74278d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74278f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742792: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742794: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74279a: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7427a0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427a2: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7427a5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427a7: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7427ad: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7427b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7427b5: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7427ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7427bc: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7427c2: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7427c8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427ca: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7427d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427d2: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7427d8: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7427de: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7427e0: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7427e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7427e7: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7427ed: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7427f3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427f5: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7427fb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7427fd: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742803: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742809: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74280b: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742810: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742812: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742818: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74281e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742820: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742826: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742828: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74282e: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742834: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742836: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74283b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74283d: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742843: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 742849: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74284b: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742851: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742853: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742859: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74285f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742861: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742866: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742868: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74286e: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 742874: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742876: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74287c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74287e: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742884: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74288a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74288c: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742891: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742893: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742899: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74289f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428a1: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7428a7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428a9: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7428af: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7428b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7428b7: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7428bc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7428be: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7428c4: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7428ca: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428cc: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7428d2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428d4: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7428da: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7428e0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7428e2: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7428e7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7428e9: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7428ef: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7428f5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428f7: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7428fd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7428ff: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742905: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74290b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74290d: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742912: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742914: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74291a: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 742920: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742922: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742928: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74292a: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742930: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742936: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742938: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74293d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74293f: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742945: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74294b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74294d: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742953: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742955: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74295b: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 742961: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742963: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742968: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74296a: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 742970: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 742976: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742978: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74297e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742980: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 742986: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74298c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74298e: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742993: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742995: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74299b: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7429a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7429a3: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7429a9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7429ab: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7429b1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7429b7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7429b9: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7429bf: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7429c4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7429c6: mov ecx, dword ptr [ebx + 0x394] */
  ecx = R32((uint32_t)(ebx + 0x394u));
/* 7429cc: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7429d2: mov edi, dword ptr [esi + 0x394] */
  edi = R32((uint32_t)(esi + 0x394u));
/* 7429d8: mov eax, dword ptr [ebx + 0x394] */
  eax = R32((uint32_t)(ebx + 0x394u));
/* 7429de: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7429e0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7429e3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7429e5: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 7429eb: mov ecx, eax */
  ecx = eax;
/* 7429ed: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 7429f3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7429f5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7429f8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7429fa: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742a00: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742a06: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a08: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742a0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a0d: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742a13: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742a19: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a1b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742a1e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a20: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742a26: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742a2c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a2e: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742a31: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a33: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742a39: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742a3f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a41: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742a44: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a46: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742a4c: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742a52: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a54: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742a57: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a59: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742a5f: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742a65: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a67: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742a6c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a6e: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742a74: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742a7a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a7c: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742a82: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742a84: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742a8a: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742a90: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a92: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742a97: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742a99: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742a9f: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742aa5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742aa7: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742aad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742aaf: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742ab5: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742abb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742abd: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742ac2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742ac4: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742aca: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742ad0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742ad2: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742ad8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742ada: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742ae0: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742ae6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742ae8: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742aed: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742aef: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742af5: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742afb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742afd: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742b03: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b05: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742b0b: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742b11: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b13: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742b18: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b1a: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742b20: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742b26: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b28: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742b2e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b30: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742b36: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742b3c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b3e: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742b43: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b45: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742b4b: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742b51: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b53: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742b59: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b5b: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742b61: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742b67: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b69: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742b6e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b70: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742b76: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742b7c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b7e: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742b84: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742b86: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742b8c: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 742b92: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b94: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 742b99: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 742b9b: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 742ba1: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 742ba7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742ba9: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 742baf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 742bb1: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 742bb7: mov edx, dword ptr [esi + 0x394] */
  edx = R32((uint32_t)(esi + 0x394u));
/* 742bbd: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742bbf: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 742bc5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 742bc7: mov dword ptr [ebx + 0x394], edx */
  W32((uint32_t)(ebx + 0x394u), edx);
/* 742bcd: mov al, byte ptr [esi + 0x398] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x398u))) & 0xffu);
/* 742bd3: mov byte ptr [ebx + 0x398], al */
  W8((uint32_t)(ebx + 0x398u), (eax & 0xffu));
/* 742bd9: mov cl, byte ptr [esi + 0x399] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x399u))) & 0xffu);
/* 742bdf: mov byte ptr [ebx + 0x399], cl */
  W8((uint32_t)(ebx + 0x399u), (ecx & 0xffu));
/* 742be5: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 742beb: mov dword ptr [ebx + 0x39c], edx */
  W32((uint32_t)(ebx + 0x39cu), edx);
/* 742bf1: mov eax, dword ptr [esi + 0x3a0] */
  eax = R32((uint32_t)(esi + 0x3a0u));
/* 742bf7: mov dword ptr [ebx + 0x3a0], eax */
  W32((uint32_t)(ebx + 0x3a0u), eax);
/* 742bfd: mov ecx, dword ptr [esi + 0x3a4] */
  ecx = R32((uint32_t)(esi + 0x3a4u));
/* 742c03: mov dword ptr [ebx + 0x3a4], ecx */
  W32((uint32_t)(ebx + 0x3a4u), ecx);
/* 742c09: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 742c0f: mov dword ptr [ebx + 0x3a8], edx */
  W32((uint32_t)(ebx + 0x3a8u), edx);
/* 742c15: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 742c1b: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 742c21: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* 742c27: mov dword ptr [ebx + 0x3b0], ecx */
  W32((uint32_t)(ebx + 0x3b0u), ecx);
/* 742c2d: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 742c33: mov dword ptr [ebx + 0x3b4], edx */
  W32((uint32_t)(ebx + 0x3b4u), edx);
/* 742c39: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 742c3f: mov dword ptr [ebx + 0x3b8], eax */
  W32((uint32_t)(ebx + 0x3b8u), eax);
/* 742c45: mov ecx, dword ptr [esi + 0x3bc] */
  ecx = R32((uint32_t)(esi + 0x3bcu));
/* 742c4b: mov dword ptr [ebx + 0x3bc], ecx */
  W32((uint32_t)(ebx + 0x3bcu), ecx);
/* 742c51: mov edx, dword ptr [esi + 0x3c0] */
  edx = R32((uint32_t)(esi + 0x3c0u));
/* 742c57: mov dword ptr [ebx + 0x3c0], edx */
  W32((uint32_t)(ebx + 0x3c0u), edx);
/* 742c5d: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 742c63: mov dword ptr [ebx + 0x3c4], eax */
  W32((uint32_t)(ebx + 0x3c4u), eax);
/* 742c69: mov ecx, dword ptr [esi + 0x3c8] */
  ecx = R32((uint32_t)(esi + 0x3c8u));
/* 742c6f: mov dword ptr [ebx + 0x3c8], ecx */
  W32((uint32_t)(ebx + 0x3c8u), ecx);
/* 742c75: mov edx, dword ptr [esi + 0x3cc] */
  edx = R32((uint32_t)(esi + 0x3ccu));
/* 742c7b: mov dword ptr [ebx + 0x3cc], edx */
  W32((uint32_t)(ebx + 0x3ccu), edx);
/* 742c81: mov eax, dword ptr [esi + 0x3d0] */
  eax = R32((uint32_t)(esi + 0x3d0u));
/* 742c87: mov dword ptr [ebx + 0x3d0], eax */
  W32((uint32_t)(ebx + 0x3d0u), eax);
/* 742c8d: mov ecx, dword ptr [esi + 0x3d4] */
  ecx = R32((uint32_t)(esi + 0x3d4u));
/* 742c93: mov dword ptr [ebx + 0x3d4], ecx */
  W32((uint32_t)(ebx + 0x3d4u), ecx);
/* 742c99: mov edx, dword ptr [esi + 0x3d8] */
  edx = R32((uint32_t)(esi + 0x3d8u));
/* 742c9f: mov dword ptr [ebx + 0x3d8], edx */
  W32((uint32_t)(ebx + 0x3d8u), edx);
/* 742ca5: lea eax, [esi + 0x3dc] */
  eax = (uint32_t)(esi + 0x3dcu);
/* 742cab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 742cad: lea ecx, [ebx + 0x3dc] */
  ecx = (uint32_t)(ebx + 0x3dcu);
/* 742cb3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 742cb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 742cb8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 742cbb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 742cbe: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 742cc1: mov ecx, dword ptr [esi + 0x3e8] */
  ecx = R32((uint32_t)(esi + 0x3e8u));
/* 742cc7: mov dword ptr [ebx + 0x3e8], ecx */
  W32((uint32_t)(ebx + 0x3e8u), ecx);
/* 742ccd: mov edx, dword ptr [esi + 0x3ec] */
  edx = R32((uint32_t)(esi + 0x3ecu));
/* 742cd3: mov dword ptr [ebx + 0x3ec], edx */
  W32((uint32_t)(ebx + 0x3ecu), edx);
/* 742cd9: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 742cdf: mov dword ptr [ebx + 0x3f0], eax */
  W32((uint32_t)(ebx + 0x3f0u), eax);
/* 742ce5: mov ecx, dword ptr [esi + 0x3f4] */
  ecx = R32((uint32_t)(esi + 0x3f4u));
/* 742ceb: mov dword ptr [ebx + 0x3f4], ecx */
  W32((uint32_t)(ebx + 0x3f4u), ecx);
/* 742cf1: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 742cf7: mov dword ptr [ebx + 0x3f8], edx */
  W32((uint32_t)(ebx + 0x3f8u), edx);
/* 742cfd: mov eax, dword ptr [esi + 0x3fc] */
  eax = R32((uint32_t)(esi + 0x3fcu));
/* 742d03: mov dword ptr [ebx + 0x3fc], eax */
  W32((uint32_t)(ebx + 0x3fcu), eax);
/* 742d09: mov ecx, dword ptr [esi + 0x400] */
  ecx = R32((uint32_t)(esi + 0x400u));
/* 742d0f: mov dword ptr [ebx + 0x400], ecx */
  W32((uint32_t)(ebx + 0x400u), ecx);
/* 742d15: mov edx, dword ptr [esi + 0x404] */
  edx = R32((uint32_t)(esi + 0x404u));
/* 742d1b: mov dword ptr [ebx + 0x404], edx */
  W32((uint32_t)(ebx + 0x404u), edx);
/* 742d21: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 742d27: mov dword ptr [ebx + 0x408], eax */
  W32((uint32_t)(ebx + 0x408u), eax);
/* 742d2d: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 742d33: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 742d39: mov edx, dword ptr [esi + 0x410] */
  edx = R32((uint32_t)(esi + 0x410u));
/* 742d3f: mov dword ptr [ebx + 0x410], edx */
  W32((uint32_t)(ebx + 0x410u), edx);
/* 742d45: mov eax, dword ptr [esi + 0x414] */
  eax = R32((uint32_t)(esi + 0x414u));
/* 742d4b: mov dword ptr [ebx + 0x414], eax */
  W32((uint32_t)(ebx + 0x414u), eax);
/* 742d51: mov ecx, dword ptr [esi + 0x418] */
  ecx = R32((uint32_t)(esi + 0x418u));
/* 742d57: mov dword ptr [ebx + 0x418], ecx */
  W32((uint32_t)(ebx + 0x418u), ecx);
/* 742d5d: mov edx, dword ptr [esi + 0x41c] */
  edx = R32((uint32_t)(esi + 0x41cu));
/* 742d63: mov dword ptr [ebx + 0x41c], edx */
  W32((uint32_t)(ebx + 0x41cu), edx);
/* 742d69: lea eax, [esi + 0x420] */
  eax = (uint32_t)(esi + 0x420u);
/* 742d6f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 742d71: lea ecx, [ebx + 0x420] */
  ecx = (uint32_t)(ebx + 0x420u);
/* 742d77: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 742d79: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 742d7c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 742d7f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 742d82: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 742d85: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 742d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 742d8c: lea ecx, [ebx + 0x42c] */
  ecx = (uint32_t)(ebx + 0x42cu);
/* 742d92: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x742d98u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 742d98: mov edx, dword ptr [esi + 0x438] */
  edx = R32((uint32_t)(esi + 0x438u));
/* 742d9e: mov dword ptr [ebx + 0x438], edx */
  W32((uint32_t)(ebx + 0x438u), edx);
/* 742da4: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 742daa: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 742db0: mov ecx, dword ptr [esi + 0x440] */
  ecx = R32((uint32_t)(esi + 0x440u));
/* 742db6: mov dword ptr [ebx + 0x440], ecx */
  W32((uint32_t)(ebx + 0x440u), ecx);
/* 742dbc: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 742dc2: mov dword ptr [ebx + 0x444], edx */
  W32((uint32_t)(ebx + 0x444u), edx);
/* 742dc8: mov eax, dword ptr [esi + 0x448] */
  eax = R32((uint32_t)(esi + 0x448u));
/* 742dce: mov dword ptr [ebx + 0x448], eax */
  W32((uint32_t)(ebx + 0x448u), eax);
/* 742dd4: lea ecx, [esi + 0x44c] */
  ecx = (uint32_t)(esi + 0x44cu);
/* 742dda: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 742ddc: lea edx, [ebx + 0x44c] */
  edx = (uint32_t)(ebx + 0x44cu);
/* 742de2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 742de4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 742de7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 742dea: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 742ded: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 742df0: mov edx, dword ptr [esi + 0x458] */
  edx = R32((uint32_t)(esi + 0x458u));
/* 742df6: mov dword ptr [ebx + 0x458], edx */
  W32((uint32_t)(ebx + 0x458u), edx);
/* 742dfc: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* 742e02: mov dword ptr [ebx + 0x45c], eax */
  W32((uint32_t)(ebx + 0x45cu), eax);
/* 742e08: mov ecx, dword ptr [esi + 0x460] */
  ecx = R32((uint32_t)(esi + 0x460u));
/* 742e0e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 742e13: mov dword ptr [ebx + 0x460], ecx */
  W32((uint32_t)(ebx + 0x460u), ecx);
/* 742e19: mov edx, dword ptr [esi + 0x464] */
  edx = R32((uint32_t)(esi + 0x464u));
/* 742e1f: mov dword ptr [ebx + 0x464], edx */
  W32((uint32_t)(ebx + 0x464u), edx);
/* 742e25: mov eax, dword ptr [esi + 0x468] */
  eax = R32((uint32_t)(esi + 0x468u));
/* 742e2b: mov dword ptr [ebx + 0x468], eax */
  W32((uint32_t)(ebx + 0x468u), eax);
/* 742e31: mov ecx, dword ptr [esi + 0x46c] */
  ecx = R32((uint32_t)(esi + 0x46cu));
/* 742e37: mov dword ptr [ebx + 0x46c], ecx */
  W32((uint32_t)(ebx + 0x46cu), ecx);
/* 742e3d: mov edx, dword ptr [esi + 0x470] */
  edx = R32((uint32_t)(esi + 0x470u));
/* 742e43: mov dword ptr [ebx + 0x470], edx */
  W32((uint32_t)(ebx + 0x470u), edx);
/* 742e49: mov eax, dword ptr [esi + 0x474] */
  eax = R32((uint32_t)(esi + 0x474u));
/* 742e4f: mov dword ptr [ebx + 0x474], eax */
  W32((uint32_t)(ebx + 0x474u), eax);
/* 742e55: mov ecx, dword ptr [esi + 0x478] */
  ecx = R32((uint32_t)(esi + 0x478u));
/* 742e5b: mov dword ptr [ebx + 0x478], ecx */
  W32((uint32_t)(ebx + 0x478u), ecx);
/* 742e61: mov edx, dword ptr [esi + 0x47c] */
  edx = R32((uint32_t)(esi + 0x47cu));
/* 742e67: mov dword ptr [ebx + 0x47c], edx */
  W32((uint32_t)(ebx + 0x47cu), edx);
/* 742e6d: mov eax, dword ptr [esi + 0x480] */
  eax = R32((uint32_t)(esi + 0x480u));
/* 742e73: mov dword ptr [ebx + 0x480], eax */
  W32((uint32_t)(ebx + 0x480u), eax);
/* 742e79: lea ecx, [esi + 0x484] */
  ecx = (uint32_t)(esi + 0x484u);
/* 742e7f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 742e81: lea edx, [ebx + 0x484] */
  edx = (uint32_t)(ebx + 0x484u);
/* 742e87: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 742e89: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 742e8c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 742e8f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 742e92: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 742e95: mov edx, dword ptr [esi + 0x490] */
  edx = R32((uint32_t)(esi + 0x490u));
/* 742e9b: mov dword ptr [ebx + 0x490], edx */
  W32((uint32_t)(ebx + 0x490u), edx);
/* 742ea1: mov eax, dword ptr [esi + 0x494] */
  eax = R32((uint32_t)(esi + 0x494u));
/* 742ea7: mov dword ptr [ebx + 0x494], eax */
  W32((uint32_t)(ebx + 0x494u), eax);
/* 742ead: mov ecx, dword ptr [esi + 0x498] */
  ecx = R32((uint32_t)(esi + 0x498u));
/* 742eb3: mov dword ptr [ebx + 0x498], ecx */
  W32((uint32_t)(ebx + 0x498u), ecx);
/* 742eb9: lea edx, [esi + 0x49c] */
  edx = (uint32_t)(esi + 0x49cu);
/* 742ebf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 742ec1: lea eax, [ebx + 0x49c] */
  eax = (uint32_t)(ebx + 0x49cu);
/* 742ec7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 742ec9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 742ecc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 742ecf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 742ed2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 742ed5: mov eax, dword ptr [esi + 0x4a8] */
  eax = R32((uint32_t)(esi + 0x4a8u));
/* 742edb: mov dword ptr [ebx + 0x4a8], eax */
  W32((uint32_t)(ebx + 0x4a8u), eax);
/* 742ee1: mov ecx, dword ptr [esi + 0x4ac] */
  ecx = R32((uint32_t)(esi + 0x4acu));
/* 742ee7: mov dword ptr [ebx + 0x4ac], ecx */
  W32((uint32_t)(ebx + 0x4acu), ecx);
/* 742eed: mov edx, dword ptr [esi + 0x4b0] */
  edx = R32((uint32_t)(esi + 0x4b0u));
/* 742ef3: mov dword ptr [ebx + 0x4b0], edx */
  W32((uint32_t)(ebx + 0x4b0u), edx);
/* 742ef9: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 742eff: mov dword ptr [ebx + 0x4b4], eax */
  W32((uint32_t)(ebx + 0x4b4u), eax);
/* 742f05: mov ecx, dword ptr [esi + 0x4b8] */
  ecx = R32((uint32_t)(esi + 0x4b8u));
/* 742f0b: mov dword ptr [ebx + 0x4b8], ecx */
  W32((uint32_t)(ebx + 0x4b8u), ecx);
/* 742f11: mov edx, dword ptr [esi + 0x4bc] */
  edx = R32((uint32_t)(esi + 0x4bcu));
/* 742f17: mov dword ptr [ebx + 0x4bc], edx */
  W32((uint32_t)(ebx + 0x4bcu), edx);
/* 742f1d: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 742f23: mov dword ptr [ebx + 0x4c0], eax */
  W32((uint32_t)(ebx + 0x4c0u), eax);
/* 742f29: mov ecx, dword ptr [esi + 0x4c4] */
  ecx = R32((uint32_t)(esi + 0x4c4u));
/* 742f2f: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 742f35: lea edx, [esi + 0x4c8] */
  edx = (uint32_t)(esi + 0x4c8u);
/* 742f3b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 742f3d: lea eax, [ebx + 0x4c8] */
  eax = (uint32_t)(ebx + 0x4c8u);
/* 742f43: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 742f45: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 742f48: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 742f4b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 742f4e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 742f51: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 742f57: mov dword ptr [ebx + 0x4d4], eax */
  W32((uint32_t)(ebx + 0x4d4u), eax);
/* 742f5d: mov ecx, dword ptr [esi + 0x4d8] */
  ecx = R32((uint32_t)(esi + 0x4d8u));
/* 742f63: lea edx, [esi + 0x4dc] */
  edx = (uint32_t)(esi + 0x4dcu);
/* 742f69: mov dword ptr [ebx + 0x4d8], ecx */
  W32((uint32_t)(ebx + 0x4d8u), ecx);
/* 742f6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 742f70: lea ecx, [ebx + 0x4dc] */
  ecx = (uint32_t)(ebx + 0x4dcu);
/* 742f76: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x742f7cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 742f7c: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 742f82: mov dword ptr [ebx + 0x4e8], eax */
  W32((uint32_t)(ebx + 0x4e8u), eax);
/* 742f88: mov ecx, dword ptr [esi + 0x4ec] */
  ecx = R32((uint32_t)(esi + 0x4ecu));
/* 742f8e: mov dword ptr [ebx + 0x4ec], ecx */
  W32((uint32_t)(ebx + 0x4ecu), ecx);
/* 742f94: mov edx, dword ptr [esi + 0x4f0] */
  edx = R32((uint32_t)(esi + 0x4f0u));
/* 742f9a: mov dword ptr [ebx + 0x4f0], edx */
  W32((uint32_t)(ebx + 0x4f0u), edx);
/* 742fa0: mov eax, dword ptr [esi + 0x4f4] */
  eax = R32((uint32_t)(esi + 0x4f4u));
/* 742fa6: mov dword ptr [ebx + 0x4f4], eax */
  W32((uint32_t)(ebx + 0x4f4u), eax);
/* 742fac: mov ecx, dword ptr [esi + 0x4f8] */
  ecx = R32((uint32_t)(esi + 0x4f8u));
/* 742fb2: mov dword ptr [ebx + 0x4f8], ecx */
  W32((uint32_t)(ebx + 0x4f8u), ecx);
/* 742fb8: mov edx, dword ptr [esi + 0x4fc] */
  edx = R32((uint32_t)(esi + 0x4fcu));
/* 742fbe: mov dword ptr [ebx + 0x4fc], edx */
  W32((uint32_t)(ebx + 0x4fcu), edx);
/* 742fc4: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 742fca: mov dword ptr [ebx + 0x500], eax */
  W32((uint32_t)(ebx + 0x500u), eax);
/* 742fd0: mov ecx, dword ptr [esi + 0x504] */
  ecx = R32((uint32_t)(esi + 0x504u));
/* 742fd6: mov dword ptr [ebx + 0x504], ecx */
  W32((uint32_t)(ebx + 0x504u), ecx);
/* 742fdc: mov edx, dword ptr [esi + 0x508] */
  edx = R32((uint32_t)(esi + 0x508u));
/* 742fe2: mov dword ptr [ebx + 0x508], edx */
  W32((uint32_t)(ebx + 0x508u), edx);
/* 742fe8: mov eax, dword ptr [esi + 0x50c] */
  eax = R32((uint32_t)(esi + 0x50cu));
/* 742fee: mov dword ptr [ebx + 0x50c], eax */
  W32((uint32_t)(ebx + 0x50cu), eax);
/* 742ff4: mov ecx, dword ptr [esi + 0x510] */
  ecx = R32((uint32_t)(esi + 0x510u));
/* 742ffa: mov dword ptr [ebx + 0x510], ecx */
  W32((uint32_t)(ebx + 0x510u), ecx);
/* 743000: lea edx, [esi + 0x514] */
  edx = (uint32_t)(esi + 0x514u);
/* 743006: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 743008: lea eax, [ebx + 0x514] */
  eax = (uint32_t)(ebx + 0x514u);
/* 74300e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 743010: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 743013: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 743016: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 743019: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74301c: mov eax, dword ptr [esi + 0x520] */
  eax = R32((uint32_t)(esi + 0x520u));
/* 743022: mov dword ptr [ebx + 0x520], eax */
  W32((uint32_t)(ebx + 0x520u), eax);
/* 743028: lea ecx, [esi + 0x524] */
  ecx = (uint32_t)(esi + 0x524u);
/* 74302e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 743030: lea edx, [ebx + 0x524] */
  edx = (uint32_t)(ebx + 0x524u);
/* 743036: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 743038: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74303b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74303e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 743041: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 743044: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 74304a: mov edx, dword ptr [ebx + 0x530] */
  edx = R32((uint32_t)(ebx + 0x530u));
/* 743050: mov edi, dword ptr [ebx + 0x530] */
  edi = R32((uint32_t)(ebx + 0x530u));
/* 743056: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743058: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74305b: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 74305d: mov dword ptr [ebx + 0x530], edi */
  W32((uint32_t)(ebx + 0x530u), edi);
/* 743063: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 743069: mov ecx, edi */
  ecx = edi;
/* 74306b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74306d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743070: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743072: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 743078: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 74307e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743080: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743083: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743085: mov dword ptr [ebx + 0x530], ecx */
  W32((uint32_t)(ebx + 0x530u), ecx);
/* 74308b: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 743091: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743093: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743096: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743098: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 74309e: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 7430a4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7430a6: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7430a9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7430ab: mov dword ptr [ebx + 0x530], ecx */
  W32((uint32_t)(ebx + 0x530u), ecx);
/* 7430b1: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 7430b7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7430b9: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7430bc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7430be: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 7430c4: mov cl, byte ptr [esi + 0x534] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x534u))) & 0xffu);
/* 7430ca: mov byte ptr [ebx + 0x534], cl */
  W8((uint32_t)(ebx + 0x534u), (ecx & 0xffu));
/* 7430d0: mov edx, dword ptr [esi + 0x538] */
  edx = R32((uint32_t)(esi + 0x538u));
/* 7430d6: mov dword ptr [ebx + 0x538], edx */
  W32((uint32_t)(ebx + 0x538u), edx);
/* 7430dc: lea eax, [esi + 0x53c] */
  eax = (uint32_t)(esi + 0x53cu);
/* 7430e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7430e4: lea ecx, [ebx + 0x53c] */
  ecx = (uint32_t)(ebx + 0x53cu);
/* 7430ea: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7430ec: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7430ef: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7430f2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7430f5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7430f8: mov ecx, dword ptr [esi + 0x548] */
  ecx = R32((uint32_t)(esi + 0x548u));
/* 7430fe: lea edx, [esi + 0x54c] */
  edx = (uint32_t)(esi + 0x54cu);
/* 743104: mov dword ptr [ebx + 0x548], ecx */
  W32((uint32_t)(ebx + 0x548u), ecx);
/* 74310a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74310c: lea eax, [ebx + 0x54c] */
  eax = (uint32_t)(ebx + 0x54cu);
/* 743112: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 743114: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 743117: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74311a: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 74311d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 743120: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 743123: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 743126: mov eax, dword ptr [esi + 0x55c] */
  eax = R32((uint32_t)(esi + 0x55cu));
/* 74312c: mov dword ptr [ebx + 0x55c], eax */
  W32((uint32_t)(ebx + 0x55cu), eax);
/* 743132: mov ecx, dword ptr [esi + 0x560] */
  ecx = R32((uint32_t)(esi + 0x560u));
/* 743138: mov dword ptr [ebx + 0x560], ecx */
  W32((uint32_t)(ebx + 0x560u), ecx);
/* 74313e: mov edx, dword ptr [esi + 0x564] */
  edx = R32((uint32_t)(esi + 0x564u));
/* 743144: mov dword ptr [ebx + 0x564], edx */
  W32((uint32_t)(ebx + 0x564u), edx);
/* 74314a: mov eax, dword ptr [esi + 0x568] */
  eax = R32((uint32_t)(esi + 0x568u));
/* 743150: mov dword ptr [ebx + 0x568], eax */
  W32((uint32_t)(ebx + 0x568u), eax);
/* 743156: mov ecx, dword ptr [esi + 0x56c] */
  ecx = R32((uint32_t)(esi + 0x56cu));
/* 74315c: mov dword ptr [ebx + 0x56c], ecx */
  W32((uint32_t)(ebx + 0x56cu), ecx);
/* 743162: mov edx, dword ptr [esi + 0x570] */
  edx = R32((uint32_t)(esi + 0x570u));
/* 743168: mov dword ptr [ebx + 0x570], edx */
  W32((uint32_t)(ebx + 0x570u), edx);
/* 74316e: add esi, 0x574 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x574u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 743174: lea edi, [ebx + 0x574] */
  edi = (uint32_t)(ebx + 0x574u);
/* 74317a: mov ecx, 9 */
  ecx = 0x9u;
/* 74317f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 743181: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 743185: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 743186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 743187: mov eax, ebx */
  eax = ebx;
/* 743189: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74318a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 743191: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 743194: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7434b0(void) {
  LOAD_REGS();
L_7434b0: /* 7434b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7434b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7434b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7434b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7434b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7434b8: mov ebx, ecx */
  ebx = ecx;
/* 7434ba: call 0x6c5cef */
  esp -= 4; W32(esp, 0x7434bfu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 7434bf: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7434c5: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 7434cb: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 7434d1: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 7434d7: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 7434dd: mov ecx, dword ptr [ebx + 0x34c] */
  ecx = R32((uint32_t)(ebx + 0x34cu));
/* 7434e3: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 7434e9: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7434ef: mov edx, dword ptr [ebx + 0x34c] */
  edx = R32((uint32_t)(ebx + 0x34cu));
/* 7434f5: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 7434fb: xor ecx, dword ptr [esi + 0x34c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743501: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743504: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743506: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 74350c: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 743512: mov eax, edx */
  eax = edx;
/* 743514: mov edx, dword ptr [esi + 0x34c] */
  edx = R32((uint32_t)(esi + 0x34cu));
/* 74351a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74351c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74351f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743521: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 743527: mov al, byte ptr [esi + 0x350] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x350u))) & 0xffu);
/* 74352d: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 743533: mov byte ptr [ebx + 0x350], al */
  W8((uint32_t)(ebx + 0x350u), (eax & 0xffu));
/* 743539: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74353f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743542: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743544: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 74354a: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 743550: mov eax, edx */
  eax = edx;
/* 743552: mov edx, dword ptr [esi + 0x354] */
  edx = R32((uint32_t)(esi + 0x354u));
/* 743558: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74355a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74355d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74355f: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 743565: mov al, byte ptr [esi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x358u))) & 0xffu);
/* 74356b: mov byte ptr [ebx + 0x358], al */
  W8((uint32_t)(ebx + 0x358u), (eax & 0xffu));
/* 743571: mov edi, dword ptr [esi + 0x35c] */
  edi = R32((uint32_t)(esi + 0x35cu));
/* 743577: mov eax, dword ptr [ebx + 0x35c] */
  eax = R32((uint32_t)(ebx + 0x35cu));
/* 74357d: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74357f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743582: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743584: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
/* 74358a: mov edx, dword ptr [esi + 0x35c] */
  edx = R32((uint32_t)(esi + 0x35cu));
/* 743590: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743592: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 743595: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743597: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 74359d: mov dword ptr [ebx + 0x35c], edx */
  W32((uint32_t)(ebx + 0x35cu), edx);
/* 7435a3: mov eax, dword ptr [esi + 0x360] */
  eax = R32((uint32_t)(esi + 0x360u));
/* 7435a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7435aa: lea ecx, [ebx + 0x364] */
  ecx = (uint32_t)(ebx + 0x364u);
/* 7435b0: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 7435b6: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7435bcu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7435bc: lea edx, [esi + 0x370] */
  edx = (uint32_t)(esi + 0x370u);
/* 7435c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7435c3: lea ecx, [ebx + 0x370] */
  ecx = (uint32_t)(ebx + 0x370u);
/* 7435c9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7435cfu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7435cf: mov eax, dword ptr [esi + 0x37c] */
  eax = R32((uint32_t)(esi + 0x37cu));
/* 7435d5: mov edi, dword ptr [ebx + 0x380] */
  edi = R32((uint32_t)(ebx + 0x380u));
/* 7435db: mov dword ptr [ebx + 0x37c], eax */
  W32((uint32_t)(ebx + 0x37cu), eax);
/* 7435e1: mov ecx, dword ptr [esi + 0x380] */
  ecx = R32((uint32_t)(esi + 0x380u));
/* 7435e7: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7435e9: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7435ec: mov eax, edi */
  eax = edi;
/* 7435ee: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7435f0: mov dword ptr [ebx + 0x380], eax */
  W32((uint32_t)(ebx + 0x380u), eax);
/* 7435f6: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 7435fc: mov dword ptr [ebx + 0x384], edx */
  W32((uint32_t)(ebx + 0x384u), edx);
/* 743602: mov eax, dword ptr [esi + 0x388] */
  eax = R32((uint32_t)(esi + 0x388u));
/* 743608: mov dword ptr [ebx + 0x388], eax */
  W32((uint32_t)(ebx + 0x388u), eax);
/* 74360e: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 743614: mov edx, dword ptr [ebx + 0x390] */
  edx = R32((uint32_t)(ebx + 0x390u));
/* 74361a: mov eax, dword ptr [ebx + 0x390] */
  eax = R32((uint32_t)(ebx + 0x390u));
/* 743620: mov dword ptr [ebx + 0x38c], ecx */
  W32((uint32_t)(ebx + 0x38cu), ecx);
/* 743626: xor edx, dword ptr [esi + 0x390] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74362c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74362f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743631: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743637: mov ecx, eax */
  ecx = eax;
/* 743639: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74363f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743641: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743644: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743646: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74364c: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743652: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743654: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743657: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743659: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74365f: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743665: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743667: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74366a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74366c: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743672: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743678: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74367a: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74367d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74367f: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743685: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74368b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74368d: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743690: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743692: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743698: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74369e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436a0: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7436a3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436a5: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7436ab: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7436b1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7436b3: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7436b8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7436ba: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7436c0: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7436c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436c8: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7436ce: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436d0: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7436d6: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7436dc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7436de: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7436e3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7436e5: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7436eb: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7436f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436f3: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7436f9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7436fb: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743701: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743707: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743709: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74370e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743710: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743716: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74371c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74371e: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743724: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743726: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74372c: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743732: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743734: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743739: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74373b: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743741: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743747: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743749: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74374f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743751: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743757: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74375d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74375f: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743764: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743766: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74376c: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743772: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743774: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74377a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74377c: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743782: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743788: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74378a: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74378f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743791: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743797: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74379d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74379f: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7437a5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7437a7: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7437ad: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7437b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7437b5: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7437ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7437bc: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7437c2: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7437c8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7437ca: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7437d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7437d2: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7437d8: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7437de: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7437e0: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7437e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7437e7: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7437ed: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7437f3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7437f5: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7437fb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7437fd: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743803: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743809: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74380b: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743810: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743812: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743818: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74381e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743820: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743826: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743828: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74382e: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 743834: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743836: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74383b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74383d: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743843: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743849: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74384b: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743851: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743853: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743859: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74385f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743861: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743866: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743868: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 74386e: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 743874: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743876: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74387c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74387e: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 743884: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 74388a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74388c: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743891: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743893: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 743899: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 74389f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7438a1: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7438a7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7438a9: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7438af: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7438b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7438b7: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7438bc: xor eax, dword ptr [esi + 0x390] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7438c2: mov ecx, dword ptr [ebx + 0x394] */
  ecx = R32((uint32_t)(ebx + 0x394u));
/* 7438c8: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 7438ce: mov edi, dword ptr [esi + 0x394] */
  edi = R32((uint32_t)(esi + 0x394u));
/* 7438d4: mov eax, dword ptr [ebx + 0x394] */
  eax = R32((uint32_t)(ebx + 0x394u));
/* 7438da: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7438dc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7438df: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7438e1: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 7438e7: mov ecx, eax */
  ecx = eax;
/* 7438e9: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 7438ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7438f1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7438f4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7438f6: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 7438fc: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743902: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743904: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743907: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743909: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 74390f: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743915: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743917: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74391a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74391c: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743922: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743928: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74392a: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74392d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74392f: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743935: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 74393b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74393d: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743940: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743942: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743948: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 74394e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743950: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743953: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743955: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 74395b: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743961: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743963: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743968: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74396a: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743970: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743976: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743978: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74397e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743980: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743986: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 74398c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74398e: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743993: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743995: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 74399b: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 7439a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7439a3: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7439a9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7439ab: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 7439b1: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 7439b7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7439b9: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7439be: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7439c0: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 7439c6: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 7439cc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7439ce: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7439d4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7439d6: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 7439dc: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 7439e2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7439e4: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7439e9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7439eb: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 7439f1: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 7439f7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7439f9: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7439ff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a01: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743a07: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743a0d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a0f: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743a14: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a16: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743a1c: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743a22: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a24: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743a2a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a2c: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743a32: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743a38: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a3a: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743a3f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a41: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743a47: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743a4d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a4f: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743a55: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a57: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743a5d: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743a63: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a65: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743a6a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a6c: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743a72: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743a78: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a7a: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743a80: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743a82: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743a88: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 743a8e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a90: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743a95: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743a97: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 743a9d: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 743aa3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743aa5: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743aab: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743aad: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 743ab3: mov edx, dword ptr [esi + 0x394] */
  edx = R32((uint32_t)(esi + 0x394u));
/* 743ab9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743abb: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 743ac1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743ac3: mov dword ptr [ebx + 0x394], edx */
  W32((uint32_t)(ebx + 0x394u), edx);
/* 743ac9: mov al, byte ptr [esi + 0x398] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x398u))) & 0xffu);
/* 743acf: mov byte ptr [ebx + 0x398], al */
  W8((uint32_t)(ebx + 0x398u), (eax & 0xffu));
/* 743ad5: mov cl, byte ptr [esi + 0x399] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x399u))) & 0xffu);
/* 743adb: mov byte ptr [ebx + 0x399], cl */
  W8((uint32_t)(ebx + 0x399u), (ecx & 0xffu));
/* 743ae1: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 743ae7: mov dword ptr [ebx + 0x39c], edx */
  W32((uint32_t)(ebx + 0x39cu), edx);
/* 743aed: mov eax, dword ptr [esi + 0x3a0] */
  eax = R32((uint32_t)(esi + 0x3a0u));
/* 743af3: mov dword ptr [ebx + 0x3a0], eax */
  W32((uint32_t)(ebx + 0x3a0u), eax);
/* 743af9: mov ecx, dword ptr [esi + 0x3a4] */
  ecx = R32((uint32_t)(esi + 0x3a4u));
/* 743aff: mov dword ptr [ebx + 0x3a4], ecx */
  W32((uint32_t)(ebx + 0x3a4u), ecx);
/* 743b05: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 743b0b: mov dword ptr [ebx + 0x3a8], edx */
  W32((uint32_t)(ebx + 0x3a8u), edx);
/* 743b11: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 743b17: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 743b1d: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* 743b23: mov dword ptr [ebx + 0x3b0], ecx */
  W32((uint32_t)(ebx + 0x3b0u), ecx);
/* 743b29: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 743b2f: mov dword ptr [ebx + 0x3b4], edx */
  W32((uint32_t)(ebx + 0x3b4u), edx);
/* 743b35: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 743b3b: mov dword ptr [ebx + 0x3b8], eax */
  W32((uint32_t)(ebx + 0x3b8u), eax);
/* 743b41: mov ecx, dword ptr [esi + 0x3bc] */
  ecx = R32((uint32_t)(esi + 0x3bcu));
/* 743b47: mov dword ptr [ebx + 0x3bc], ecx */
  W32((uint32_t)(ebx + 0x3bcu), ecx);
/* 743b4d: mov edx, dword ptr [esi + 0x3c0] */
  edx = R32((uint32_t)(esi + 0x3c0u));
/* 743b53: mov dword ptr [ebx + 0x3c0], edx */
  W32((uint32_t)(ebx + 0x3c0u), edx);
/* 743b59: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 743b5f: mov dword ptr [ebx + 0x3c4], eax */
  W32((uint32_t)(ebx + 0x3c4u), eax);
/* 743b65: mov ecx, dword ptr [esi + 0x3c8] */
  ecx = R32((uint32_t)(esi + 0x3c8u));
/* 743b6b: mov dword ptr [ebx + 0x3c8], ecx */
  W32((uint32_t)(ebx + 0x3c8u), ecx);
/* 743b71: mov edx, dword ptr [esi + 0x3cc] */
  edx = R32((uint32_t)(esi + 0x3ccu));
/* 743b77: mov dword ptr [ebx + 0x3cc], edx */
  W32((uint32_t)(ebx + 0x3ccu), edx);
/* 743b7d: mov eax, dword ptr [esi + 0x3d0] */
  eax = R32((uint32_t)(esi + 0x3d0u));
/* 743b83: mov dword ptr [ebx + 0x3d0], eax */
  W32((uint32_t)(ebx + 0x3d0u), eax);
/* 743b89: mov ecx, dword ptr [esi + 0x3d4] */
  ecx = R32((uint32_t)(esi + 0x3d4u));
/* 743b8f: mov dword ptr [ebx + 0x3d4], ecx */
  W32((uint32_t)(ebx + 0x3d4u), ecx);
/* 743b95: mov edx, dword ptr [esi + 0x3d8] */
  edx = R32((uint32_t)(esi + 0x3d8u));
/* 743b9b: mov dword ptr [ebx + 0x3d8], edx */
  W32((uint32_t)(ebx + 0x3d8u), edx);
/* 743ba1: lea eax, [esi + 0x3dc] */
  eax = (uint32_t)(esi + 0x3dcu);
/* 743ba7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 743ba9: lea ecx, [ebx + 0x3dc] */
  ecx = (uint32_t)(ebx + 0x3dcu);
/* 743baf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 743bb1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 743bb4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 743bb7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 743bba: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 743bbd: mov ecx, dword ptr [esi + 0x3e8] */
  ecx = R32((uint32_t)(esi + 0x3e8u));
/* 743bc3: mov dword ptr [ebx + 0x3e8], ecx */
  W32((uint32_t)(ebx + 0x3e8u), ecx);
/* 743bc9: mov edx, dword ptr [esi + 0x3ec] */
  edx = R32((uint32_t)(esi + 0x3ecu));
/* 743bcf: mov dword ptr [ebx + 0x3ec], edx */
  W32((uint32_t)(ebx + 0x3ecu), edx);
/* 743bd5: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 743bdb: mov dword ptr [ebx + 0x3f0], eax */
  W32((uint32_t)(ebx + 0x3f0u), eax);
/* 743be1: mov ecx, dword ptr [esi + 0x3f4] */
  ecx = R32((uint32_t)(esi + 0x3f4u));
/* 743be7: mov dword ptr [ebx + 0x3f4], ecx */
  W32((uint32_t)(ebx + 0x3f4u), ecx);
/* 743bed: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 743bf3: mov dword ptr [ebx + 0x3f8], edx */
  W32((uint32_t)(ebx + 0x3f8u), edx);
/* 743bf9: mov eax, dword ptr [esi + 0x3fc] */
  eax = R32((uint32_t)(esi + 0x3fcu));
/* 743bff: mov dword ptr [ebx + 0x3fc], eax */
  W32((uint32_t)(ebx + 0x3fcu), eax);
/* 743c05: mov ecx, dword ptr [esi + 0x400] */
  ecx = R32((uint32_t)(esi + 0x400u));
/* 743c0b: mov dword ptr [ebx + 0x400], ecx */
  W32((uint32_t)(ebx + 0x400u), ecx);
/* 743c11: mov edx, dword ptr [esi + 0x404] */
  edx = R32((uint32_t)(esi + 0x404u));
/* 743c17: mov dword ptr [ebx + 0x404], edx */
  W32((uint32_t)(ebx + 0x404u), edx);
/* 743c1d: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 743c23: mov dword ptr [ebx + 0x408], eax */
  W32((uint32_t)(ebx + 0x408u), eax);
/* 743c29: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 743c2f: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 743c35: mov edx, dword ptr [esi + 0x410] */
  edx = R32((uint32_t)(esi + 0x410u));
/* 743c3b: mov dword ptr [ebx + 0x410], edx */
  W32((uint32_t)(ebx + 0x410u), edx);
/* 743c41: mov eax, dword ptr [esi + 0x414] */
  eax = R32((uint32_t)(esi + 0x414u));
/* 743c47: mov dword ptr [ebx + 0x414], eax */
  W32((uint32_t)(ebx + 0x414u), eax);
/* 743c4d: mov ecx, dword ptr [esi + 0x418] */
  ecx = R32((uint32_t)(esi + 0x418u));
/* 743c53: mov dword ptr [ebx + 0x418], ecx */
  W32((uint32_t)(ebx + 0x418u), ecx);
/* 743c59: mov edx, dword ptr [esi + 0x41c] */
  edx = R32((uint32_t)(esi + 0x41cu));
/* 743c5f: mov dword ptr [ebx + 0x41c], edx */
  W32((uint32_t)(ebx + 0x41cu), edx);
/* 743c65: lea eax, [esi + 0x420] */
  eax = (uint32_t)(esi + 0x420u);
/* 743c6b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 743c6d: lea ecx, [ebx + 0x420] */
  ecx = (uint32_t)(ebx + 0x420u);
/* 743c73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 743c75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 743c78: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 743c7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 743c7e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 743c81: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 743c87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 743c88: lea ecx, [ebx + 0x42c] */
  ecx = (uint32_t)(ebx + 0x42cu);
/* 743c8e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x743c94u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 743c94: mov edx, dword ptr [esi + 0x438] */
  edx = R32((uint32_t)(esi + 0x438u));
/* 743c9a: mov dword ptr [ebx + 0x438], edx */
  W32((uint32_t)(ebx + 0x438u), edx);
/* 743ca0: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 743ca6: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 743cac: mov ecx, dword ptr [esi + 0x440] */
  ecx = R32((uint32_t)(esi + 0x440u));
/* 743cb2: mov dword ptr [ebx + 0x440], ecx */
  W32((uint32_t)(ebx + 0x440u), ecx);
/* 743cb8: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 743cbe: mov dword ptr [ebx + 0x444], edx */
  W32((uint32_t)(ebx + 0x444u), edx);
/* 743cc4: mov eax, dword ptr [esi + 0x448] */
  eax = R32((uint32_t)(esi + 0x448u));
/* 743cca: mov dword ptr [ebx + 0x448], eax */
  W32((uint32_t)(ebx + 0x448u), eax);
/* 743cd0: lea ecx, [esi + 0x44c] */
  ecx = (uint32_t)(esi + 0x44cu);
/* 743cd6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 743cd8: lea edx, [ebx + 0x44c] */
  edx = (uint32_t)(ebx + 0x44cu);
/* 743cde: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 743ce0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 743ce3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 743ce6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 743ce9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 743cec: mov edx, dword ptr [esi + 0x458] */
  edx = R32((uint32_t)(esi + 0x458u));
/* 743cf2: mov dword ptr [ebx + 0x458], edx */
  W32((uint32_t)(ebx + 0x458u), edx);
/* 743cf8: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* 743cfe: mov dword ptr [ebx + 0x45c], eax */
  W32((uint32_t)(ebx + 0x45cu), eax);
/* 743d04: mov ecx, dword ptr [esi + 0x460] */
  ecx = R32((uint32_t)(esi + 0x460u));
/* 743d0a: mov dword ptr [ebx + 0x460], ecx */
  W32((uint32_t)(ebx + 0x460u), ecx);
/* 743d10: mov edx, dword ptr [esi + 0x464] */
  edx = R32((uint32_t)(esi + 0x464u));
/* 743d16: mov dword ptr [ebx + 0x464], edx */
  W32((uint32_t)(ebx + 0x464u), edx);
/* 743d1c: mov eax, dword ptr [esi + 0x468] */
  eax = R32((uint32_t)(esi + 0x468u));
/* 743d22: mov dword ptr [ebx + 0x468], eax */
  W32((uint32_t)(ebx + 0x468u), eax);
/* 743d28: mov ecx, dword ptr [esi + 0x46c] */
  ecx = R32((uint32_t)(esi + 0x46cu));
/* 743d2e: mov dword ptr [ebx + 0x46c], ecx */
  W32((uint32_t)(ebx + 0x46cu), ecx);
/* 743d34: mov edx, dword ptr [esi + 0x470] */
  edx = R32((uint32_t)(esi + 0x470u));
/* 743d3a: mov dword ptr [ebx + 0x470], edx */
  W32((uint32_t)(ebx + 0x470u), edx);
/* 743d40: mov eax, dword ptr [esi + 0x474] */
  eax = R32((uint32_t)(esi + 0x474u));
/* 743d46: mov dword ptr [ebx + 0x474], eax */
  W32((uint32_t)(ebx + 0x474u), eax);
/* 743d4c: mov ecx, dword ptr [esi + 0x478] */
  ecx = R32((uint32_t)(esi + 0x478u));
/* 743d52: mov dword ptr [ebx + 0x478], ecx */
  W32((uint32_t)(ebx + 0x478u), ecx);
/* 743d58: mov edx, dword ptr [esi + 0x47c] */
  edx = R32((uint32_t)(esi + 0x47cu));
/* 743d5e: mov dword ptr [ebx + 0x47c], edx */
  W32((uint32_t)(ebx + 0x47cu), edx);
/* 743d64: mov eax, dword ptr [esi + 0x480] */
  eax = R32((uint32_t)(esi + 0x480u));
/* 743d6a: mov dword ptr [ebx + 0x480], eax */
  W32((uint32_t)(ebx + 0x480u), eax);
/* 743d70: lea ecx, [esi + 0x484] */
  ecx = (uint32_t)(esi + 0x484u);
/* 743d76: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 743d78: lea edx, [ebx + 0x484] */
  edx = (uint32_t)(ebx + 0x484u);
/* 743d7e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 743d80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 743d83: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 743d86: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 743d89: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 743d8c: mov edx, dword ptr [esi + 0x490] */
  edx = R32((uint32_t)(esi + 0x490u));
/* 743d92: mov dword ptr [ebx + 0x490], edx */
  W32((uint32_t)(ebx + 0x490u), edx);
/* 743d98: mov eax, dword ptr [esi + 0x494] */
  eax = R32((uint32_t)(esi + 0x494u));
/* 743d9e: mov dword ptr [ebx + 0x494], eax */
  W32((uint32_t)(ebx + 0x494u), eax);
/* 743da4: mov ecx, dword ptr [esi + 0x498] */
  ecx = R32((uint32_t)(esi + 0x498u));
/* 743daa: mov dword ptr [ebx + 0x498], ecx */
  W32((uint32_t)(ebx + 0x498u), ecx);
/* 743db0: lea edx, [esi + 0x49c] */
  edx = (uint32_t)(esi + 0x49cu);
/* 743db6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 743db8: lea eax, [ebx + 0x49c] */
  eax = (uint32_t)(ebx + 0x49cu);
/* 743dbe: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 743dc0: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 743dc3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 743dc6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 743dc9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 743dcc: mov eax, dword ptr [esi + 0x4a8] */
  eax = R32((uint32_t)(esi + 0x4a8u));
/* 743dd2: mov dword ptr [ebx + 0x4a8], eax */
  W32((uint32_t)(ebx + 0x4a8u), eax);
/* 743dd8: mov ecx, dword ptr [esi + 0x4ac] */
  ecx = R32((uint32_t)(esi + 0x4acu));
/* 743dde: mov dword ptr [ebx + 0x4ac], ecx */
  W32((uint32_t)(ebx + 0x4acu), ecx);
/* 743de4: mov edx, dword ptr [esi + 0x4b0] */
  edx = R32((uint32_t)(esi + 0x4b0u));
/* 743dea: mov dword ptr [ebx + 0x4b0], edx */
  W32((uint32_t)(ebx + 0x4b0u), edx);
/* 743df0: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 743df6: mov dword ptr [ebx + 0x4b4], eax */
  W32((uint32_t)(ebx + 0x4b4u), eax);
/* 743dfc: mov ecx, dword ptr [esi + 0x4b8] */
  ecx = R32((uint32_t)(esi + 0x4b8u));
/* 743e02: mov dword ptr [ebx + 0x4b8], ecx */
  W32((uint32_t)(ebx + 0x4b8u), ecx);
/* 743e08: mov edx, dword ptr [esi + 0x4bc] */
  edx = R32((uint32_t)(esi + 0x4bcu));
/* 743e0e: mov dword ptr [ebx + 0x4bc], edx */
  W32((uint32_t)(ebx + 0x4bcu), edx);
/* 743e14: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 743e1a: mov dword ptr [ebx + 0x4c0], eax */
  W32((uint32_t)(ebx + 0x4c0u), eax);
/* 743e20: mov ecx, dword ptr [esi + 0x4c4] */
  ecx = R32((uint32_t)(esi + 0x4c4u));
/* 743e26: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 743e2c: lea edx, [esi + 0x4c8] */
  edx = (uint32_t)(esi + 0x4c8u);
/* 743e32: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 743e34: lea eax, [ebx + 0x4c8] */
  eax = (uint32_t)(ebx + 0x4c8u);
/* 743e3a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 743e3c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 743e3f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 743e42: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 743e45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 743e48: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 743e4e: mov dword ptr [ebx + 0x4d4], eax */
  W32((uint32_t)(ebx + 0x4d4u), eax);
/* 743e54: mov ecx, dword ptr [esi + 0x4d8] */
  ecx = R32((uint32_t)(esi + 0x4d8u));
/* 743e5a: lea edx, [esi + 0x4dc] */
  edx = (uint32_t)(esi + 0x4dcu);
/* 743e60: mov dword ptr [ebx + 0x4d8], ecx */
  W32((uint32_t)(ebx + 0x4d8u), ecx);
/* 743e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 743e67: lea ecx, [ebx + 0x4dc] */
  ecx = (uint32_t)(ebx + 0x4dcu);
/* 743e6d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x743e73u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 743e73: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 743e79: mov dword ptr [ebx + 0x4e8], eax */
  W32((uint32_t)(ebx + 0x4e8u), eax);
/* 743e7f: mov ecx, dword ptr [esi + 0x4ec] */
  ecx = R32((uint32_t)(esi + 0x4ecu));
/* 743e85: mov dword ptr [ebx + 0x4ec], ecx */
  W32((uint32_t)(ebx + 0x4ecu), ecx);
/* 743e8b: mov edx, dword ptr [esi + 0x4f0] */
  edx = R32((uint32_t)(esi + 0x4f0u));
/* 743e91: mov dword ptr [ebx + 0x4f0], edx */
  W32((uint32_t)(ebx + 0x4f0u), edx);
/* 743e97: mov eax, dword ptr [esi + 0x4f4] */
  eax = R32((uint32_t)(esi + 0x4f4u));
/* 743e9d: mov dword ptr [ebx + 0x4f4], eax */
  W32((uint32_t)(ebx + 0x4f4u), eax);
/* 743ea3: mov ecx, dword ptr [esi + 0x4f8] */
  ecx = R32((uint32_t)(esi + 0x4f8u));
/* 743ea9: mov dword ptr [ebx + 0x4f8], ecx */
  W32((uint32_t)(ebx + 0x4f8u), ecx);
/* 743eaf: mov edx, dword ptr [esi + 0x4fc] */
  edx = R32((uint32_t)(esi + 0x4fcu));
/* 743eb5: mov dword ptr [ebx + 0x4fc], edx */
  W32((uint32_t)(ebx + 0x4fcu), edx);
/* 743ebb: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 743ec1: mov dword ptr [ebx + 0x500], eax */
  W32((uint32_t)(ebx + 0x500u), eax);
/* 743ec7: mov ecx, dword ptr [esi + 0x504] */
  ecx = R32((uint32_t)(esi + 0x504u));
/* 743ecd: mov dword ptr [ebx + 0x504], ecx */
  W32((uint32_t)(ebx + 0x504u), ecx);
/* 743ed3: mov edx, dword ptr [esi + 0x508] */
  edx = R32((uint32_t)(esi + 0x508u));
/* 743ed9: mov dword ptr [ebx + 0x508], edx */
  W32((uint32_t)(ebx + 0x508u), edx);
/* 743edf: mov eax, dword ptr [esi + 0x50c] */
  eax = R32((uint32_t)(esi + 0x50cu));
/* 743ee5: mov dword ptr [ebx + 0x50c], eax */
  W32((uint32_t)(ebx + 0x50cu), eax);
/* 743eeb: mov ecx, dword ptr [esi + 0x510] */
  ecx = R32((uint32_t)(esi + 0x510u));
/* 743ef1: mov dword ptr [ebx + 0x510], ecx */
  W32((uint32_t)(ebx + 0x510u), ecx);
/* 743ef7: lea edx, [esi + 0x514] */
  edx = (uint32_t)(esi + 0x514u);
/* 743efd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 743eff: lea eax, [ebx + 0x514] */
  eax = (uint32_t)(ebx + 0x514u);
/* 743f05: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 743f07: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 743f0a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 743f0d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 743f10: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 743f13: mov eax, dword ptr [esi + 0x520] */
  eax = R32((uint32_t)(esi + 0x520u));
/* 743f19: mov dword ptr [ebx + 0x520], eax */
  W32((uint32_t)(ebx + 0x520u), eax);
/* 743f1f: lea ecx, [esi + 0x524] */
  ecx = (uint32_t)(esi + 0x524u);
/* 743f25: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 743f27: lea edx, [ebx + 0x524] */
  edx = (uint32_t)(ebx + 0x524u);
/* 743f2d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 743f2f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 743f32: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 743f35: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 743f38: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 743f3b: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 743f41: mov edx, dword ptr [ebx + 0x530] */
  edx = R32((uint32_t)(ebx + 0x530u));
/* 743f47: mov edi, dword ptr [ebx + 0x530] */
  edi = R32((uint32_t)(ebx + 0x530u));
/* 743f4d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 743f4f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 743f52: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 743f54: mov dword ptr [ebx + 0x530], edi */
  W32((uint32_t)(ebx + 0x530u), edi);
/* 743f5a: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 743f60: mov ecx, edi */
  ecx = edi;
/* 743f62: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743f64: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743f67: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743f69: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 743f6f: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 743f75: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743f77: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743f7a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743f7c: mov dword ptr [ebx + 0x530], ecx */
  W32((uint32_t)(ebx + 0x530u), ecx);
/* 743f82: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 743f88: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743f8a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743f8d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743f8f: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 743f95: mov ecx, dword ptr [esi + 0x530] */
  ecx = R32((uint32_t)(esi + 0x530u));
/* 743f9b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743f9d: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 743fa0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 743fa2: mov dword ptr [ebx + 0x530], ecx */
  W32((uint32_t)(ebx + 0x530u), ecx);
/* 743fa8: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 743fae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743fb0: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 743fb3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 743fb5: mov dword ptr [ebx + 0x530], eax */
  W32((uint32_t)(ebx + 0x530u), eax);
/* 743fbb: mov cl, byte ptr [esi + 0x534] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x534u))) & 0xffu);
/* 743fc1: mov byte ptr [ebx + 0x534], cl */
  W8((uint32_t)(ebx + 0x534u), (ecx & 0xffu));
/* 743fc7: mov edx, dword ptr [esi + 0x538] */
  edx = R32((uint32_t)(esi + 0x538u));
/* 743fcd: mov dword ptr [ebx + 0x538], edx */
  W32((uint32_t)(ebx + 0x538u), edx);
/* 743fd3: lea eax, [esi + 0x53c] */
  eax = (uint32_t)(esi + 0x53cu);
/* 743fd9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 743fdb: lea ecx, [ebx + 0x53c] */
  ecx = (uint32_t)(ebx + 0x53cu);
/* 743fe1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 743fe3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 743fe6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 743fe9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 743fec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 743fef: mov ecx, dword ptr [esi + 0x548] */
  ecx = R32((uint32_t)(esi + 0x548u));
/* 743ff5: mov dword ptr [ebx + 0x548], ecx */
  W32((uint32_t)(ebx + 0x548u), ecx);
/* 743ffb: mov edx, dword ptr [esi + 0x54c] */
  edx = R32((uint32_t)(esi + 0x54cu));
/* 744001: mov dword ptr [ebx + 0x54c], edx */
  W32((uint32_t)(ebx + 0x54cu), edx);
/* 744007: mov eax, dword ptr [esi + 0x550] */
  eax = R32((uint32_t)(esi + 0x550u));
/* 74400d: mov dword ptr [ebx + 0x550], eax */
  W32((uint32_t)(ebx + 0x550u), eax);
/* 744013: mov ecx, dword ptr [esi + 0x554] */
  ecx = R32((uint32_t)(esi + 0x554u));
/* 744019: mov dword ptr [ebx + 0x554], ecx */
  W32((uint32_t)(ebx + 0x554u), ecx);
/* 74401f: mov edx, dword ptr [esi + 0x558] */
  edx = R32((uint32_t)(esi + 0x558u));
/* 744025: mov dword ptr [ebx + 0x558], edx */
  W32((uint32_t)(ebx + 0x558u), edx);
/* 74402b: mov eax, dword ptr [esi + 0x55c] */
  eax = R32((uint32_t)(esi + 0x55cu));
/* 744031: mov dword ptr [ebx + 0x55c], eax */
  W32((uint32_t)(ebx + 0x55cu), eax);
/* 744037: mov ecx, dword ptr [esi + 0x560] */
  ecx = R32((uint32_t)(esi + 0x560u));
/* 74403d: mov dword ptr [ebx + 0x560], ecx */
  W32((uint32_t)(ebx + 0x560u), ecx);
/* 744043: mov edx, dword ptr [esi + 0x564] */
  edx = R32((uint32_t)(esi + 0x564u));
/* 744049: mov dword ptr [ebx + 0x564], edx */
  W32((uint32_t)(ebx + 0x564u), edx);
/* 74404f: mov eax, dword ptr [esi + 0x568] */
  eax = R32((uint32_t)(esi + 0x568u));
/* 744055: mov dword ptr [ebx + 0x568], eax */
  W32((uint32_t)(ebx + 0x568u), eax);
/* 74405b: mov ecx, dword ptr [esi + 0x56c] */
  ecx = R32((uint32_t)(esi + 0x56cu));
/* 744061: mov dword ptr [ebx + 0x56c], ecx */
  W32((uint32_t)(ebx + 0x56cu), ecx);
/* 744067: mov edx, dword ptr [esi + 0x570] */
  edx = R32((uint32_t)(esi + 0x570u));
/* 74406d: add esi, 0x574 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x574u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 744073: lea edi, [ebx + 0x574] */
  edi = (uint32_t)(ebx + 0x574u);
/* 744079: mov dword ptr [ebx + 0x570], edx */
  W32((uint32_t)(ebx + 0x570u), edx);
/* 74407f: mov ecx, 9 */
  ecx = 0x9u;
/* 744084: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 744086: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744087: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744088: mov eax, ebx */
  eax = ebx;
/* 74408a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74408b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744390(void) {
  LOAD_REGS();
L_744390: /* 744390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744391: mov esi, ecx */
  esi = ecx;
/* 744393: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x744398u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 744398: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74439d: je 0x7443ae */
  if (zf) goto L_7443ae;
L_74439f: /* 74439f: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 7443a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7443a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7443abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7443ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7443ae: /* 7443ae: mov eax, esi */
  eax = esi;
/* 7443b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7443b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7443d0(void) {
  LOAD_REGS();
L_7443d0: /* 7443d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7443d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7443d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7443d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7443d9: mov esi, ecx */
  esi = ecx;
/* 7443db: je 0x744410 */
  if (zf) goto L_744410;
L_7443dd: /* 7443dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7443e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7443e1: push 0x6c4c0a */
  { uint32_t v = 0x6c4c0au; esp -= 4; W32(esp, v); }
/* 7443e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7443e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7443ea: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 7443ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7443f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7443f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7443f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7443f8: je 0x744408 */
  if (zf) goto L_744408;
L_7443fa: /* 7443fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 744400: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 744402: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 744404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744405: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x744408u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_744408: /* 744408: mov eax, edi */
  eax = edi;
/* 74440a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74440b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74440c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74440d: ret 4 */
  esp += 8; SPILL(); return;
L_744410: /* 744410: mov ecx, esi */
  ecx = esi;
/* 744412: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x744417u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 744417: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74441a: je 0x74442b */
  if (zf) goto L_74442b;
L_74441c: /* 74441c: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 744421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744422: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744428u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744428: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74442b: /* 74442b: mov eax, esi */
  eax = esi;
/* 74442d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74442e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74442f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744460(void) {
  LOAD_REGS();
L_744460: /* 744460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744462: push 0x9c7320 */
  { uint32_t v = 0x9c7320u; esp -= 4; W32(esp, v); }
/* 744467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74446d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74446e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744477: mov esi, ecx */
  esi = ecx;
/* 744479: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74447d: mov dword ptr [esi], 0x9fd078 */
  W32((uint32_t)(esi), 0x9fd078u);
/* 744483: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 74448b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x744491u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 744491: lea ecx, [esi + 0x618] */
  ecx = (uint32_t)(esi + 0x618u);
/* 744497: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74449c: call 0x6c6bb8 */
  esp -= 4; W32(esp, 0x7444a1u); SPILL(); f_6c6bb8(); if (g_unwind) return; RELOAD();
/* 7444a1: lea ecx, [esi + 0x5c0] */
  ecx = (uint32_t)(esi + 0x5c0u);
/* 7444a7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7444ac: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7444b1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7444b1: lea ecx, [esi + 0x5b4] */
  ecx = (uint32_t)(esi + 0x5b4u);
/* 7444b7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7444bc: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7444c1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7444c1: lea ecx, [esi + 0x598] */
  ecx = (uint32_t)(esi + 0x598u);
/* 7444c7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7444cc: call 0x6c24cd */
  esp -= 4; W32(esp, 0x7444d1u); SPILL(); f_6c24cd(); if (g_unwind) return; RELOAD();
/* 7444d1: mov ecx, esi */
  ecx = esi;
/* 7444d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7444db: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x7444e0u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 7444e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7444e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7444e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7444ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7444ef: ret  */
  esp += 4; SPILL(); return;
}

void f_744520(void) {
  LOAD_REGS();
L_744520: /* 744520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744522: push 0x9c7372 */
  { uint32_t v = 0x9c7372u; esp -= 4; W32(esp, v); }
/* 744527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74452d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74452e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744537: mov esi, ecx */
  esi = ecx;
/* 744539: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74453d: call 0x6c98bd */
  esp -= 4; W32(esp, 0x744542u); SPILL(); f_6c98bd(); if (g_unwind) return; RELOAD();
/* 744542: lea ecx, [esi + 0x598] */
  ecx = (uint32_t)(esi + 0x598u);
/* 744548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74454a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 744552: mov dword ptr [esi], 0x9fd078 */
  W32((uint32_t)(esi), 0x9fd078u);
/* 744558: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x74455eu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 74455e: lea ecx, [esi + 0x5b4] */
  ecx = (uint32_t)(esi + 0x5b4u);
/* 744564: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 744566: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 74456b: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x744571u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 744571: lea ecx, [esi + 0x5c0] */
  ecx = (uint32_t)(esi + 0x5c0u);
/* 744577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 744579: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 74457e: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x744584u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 744584: lea ecx, [esi + 0x5d8] */
  ecx = (uint32_t)(esi + 0x5d8u);
/* 74458a: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74458f: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x744595u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 744595: lea ecx, [esi + 0x5e4] */
  ecx = (uint32_t)(esi + 0x5e4u);
/* 74459b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7445a1u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7445a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7445a3: lea ecx, [esi + 0x618] */
  ecx = (uint32_t)(esi + 0x618u);
/* 7445a9: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7445afu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7445af: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7445b3: mov eax, esi */
  eax = esi;
/* 7445b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7445b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7445bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7445c0: ret  */
  esp += 4; SPILL(); return;
}

void f_744600(void) {
  LOAD_REGS();
L_744600: /* 744600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744602: push 0x9c73c2 */
  { uint32_t v = 0x9c73c2u; esp -= 4; W32(esp, v); }
/* 744607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74460d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74460e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744617: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744618: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74461c: mov esi, ecx */
  esi = ecx;
/* 74461e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74461f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 744623: call 0x6c4511 */
  esp -= 4; W32(esp, 0x744628u); SPILL(); f_6c4511(); if (g_unwind) return; RELOAD();
/* 744628: lea eax, [edi + 0x598] */
  eax = (uint32_t)(edi + 0x598u);
/* 74462e: lea ecx, [esi + 0x598] */
  ecx = (uint32_t)(esi + 0x598u);
/* 744634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744635: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74463d: mov dword ptr [esi], 0x9fd078 */
  W32((uint32_t)(esi), 0x9fd078u);
/* 744643: call 0x6cbded */
  esp -= 4; W32(esp, 0x744648u); SPILL(); f_6cbded(); if (g_unwind) return; RELOAD();
/* 744648: mov ecx, dword ptr [edi + 0x5a4] */
  ecx = R32((uint32_t)(edi + 0x5a4u));
/* 74464e: mov dword ptr [esi + 0x5a4], ecx */
  W32((uint32_t)(esi + 0x5a4u), ecx);
/* 744654: mov edx, dword ptr [edi + 0x5a8] */
  edx = R32((uint32_t)(edi + 0x5a8u));
/* 74465a: mov dword ptr [esi + 0x5a8], edx */
  W32((uint32_t)(esi + 0x5a8u), edx);
/* 744660: mov eax, dword ptr [edi + 0x5ac] */
  eax = R32((uint32_t)(edi + 0x5acu));
/* 744666: mov dword ptr [esi + 0x5ac], eax */
  W32((uint32_t)(esi + 0x5acu), eax);
/* 74466c: mov ecx, dword ptr [edi + 0x5b0] */
  ecx = R32((uint32_t)(edi + 0x5b0u));
/* 744672: lea edx, [edi + 0x5b4] */
  edx = (uint32_t)(edi + 0x5b4u);
/* 744678: mov dword ptr [esi + 0x5b0], ecx */
  W32((uint32_t)(esi + 0x5b0u), ecx);
/* 74467e: lea ecx, [esi + 0x5b4] */
  ecx = (uint32_t)(esi + 0x5b4u);
/* 744684: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 744685: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 74468a: call 0x6cbbae */
  esp -= 4; W32(esp, 0x74468fu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 74468f: lea eax, [edi + 0x5c0] */
  eax = (uint32_t)(edi + 0x5c0u);
/* 744695: lea ecx, [esi + 0x5c0] */
  ecx = (uint32_t)(esi + 0x5c0u);
/* 74469b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74469c: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7446a1: call 0x6cbbae */
  esp -= 4; W32(esp, 0x7446a6u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 7446a6: lea ecx, [edi + 0x5cc] */
  ecx = (uint32_t)(edi + 0x5ccu);
/* 7446ac: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7446ae: lea edx, [esi + 0x5cc] */
  edx = (uint32_t)(esi + 0x5ccu);
/* 7446b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7446b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7446b9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7446bc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7446bf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7446c2: lea edx, [edi + 0x5d8] */
  edx = (uint32_t)(edi + 0x5d8u);
/* 7446c8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7446ca: lea eax, [esi + 0x5d8] */
  eax = (uint32_t)(esi + 0x5d8u);
/* 7446d0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7446d2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7446d5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7446d8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7446db: mov ecx, dword ptr [esi + 0x5e8] */
  ecx = R32((uint32_t)(esi + 0x5e8u));
/* 7446e1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7446e4: mov eax, dword ptr [edi + 0x5e4] */
  eax = R32((uint32_t)(edi + 0x5e4u));
/* 7446ea: mov dword ptr [esi + 0x5e4], eax */
  W32((uint32_t)(esi + 0x5e4u), eax);
/* 7446f0: xor ecx, dword ptr [edi + 0x5e8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5e8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7446f6: mov eax, dword ptr [esi + 0x5e8] */
  eax = R32((uint32_t)(esi + 0x5e8u));
/* 7446fc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7446ff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744701: mov dword ptr [esi + 0x5e8], eax */
  W32((uint32_t)(esi + 0x5e8u), eax);
/* 744707: mov ecx, eax */
  ecx = eax;
/* 744709: mov eax, dword ptr [edi + 0x5e8] */
  eax = R32((uint32_t)(edi + 0x5e8u));
/* 74470f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744711: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 744714: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744716: mov dword ptr [esi + 0x5e8], eax */
  W32((uint32_t)(esi + 0x5e8u), eax);
/* 74471c: mov edx, dword ptr [edi + 0x5e8] */
  edx = R32((uint32_t)(edi + 0x5e8u));
/* 744722: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 744724: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 744727: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 744729: mov dword ptr [esi + 0x5e8], edx */
  W32((uint32_t)(esi + 0x5e8u), edx);
/* 74472f: lea eax, [edi + 0x5ec] */
  eax = (uint32_t)(edi + 0x5ecu);
/* 744735: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 744737: lea ecx, [esi + 0x5ec] */
  ecx = (uint32_t)(esi + 0x5ecu);
/* 74473d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74473f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 744742: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 744745: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 744748: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74474b: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 744750: lea ecx, [edi + 0x5f8] */
  ecx = (uint32_t)(edi + 0x5f8u);
/* 744756: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 744758: lea edx, [esi + 0x5f8] */
  edx = (uint32_t)(esi + 0x5f8u);
/* 74475e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 744760: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 744763: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 744766: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 744769: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74476c: mov edx, dword ptr [edi + 0x604] */
  edx = R32((uint32_t)(edi + 0x604u));
/* 744772: mov dword ptr [esi + 0x604], edx */
  W32((uint32_t)(esi + 0x604u), edx);
/* 744778: mov eax, dword ptr [edi + 0x608] */
  eax = R32((uint32_t)(edi + 0x608u));
/* 74477e: mov dword ptr [esi + 0x608], eax */
  W32((uint32_t)(esi + 0x608u), eax);
/* 744784: mov ecx, dword ptr [edi + 0x60c] */
  ecx = R32((uint32_t)(edi + 0x60cu));
/* 74478a: mov dword ptr [esi + 0x60c], ecx */
  W32((uint32_t)(esi + 0x60cu), ecx);
/* 744790: mov edx, dword ptr [edi + 0x610] */
  edx = R32((uint32_t)(edi + 0x610u));
/* 744796: lea ecx, [edi + 0x618] */
  ecx = (uint32_t)(edi + 0x618u);
/* 74479c: mov dword ptr [esi + 0x610], edx */
  W32((uint32_t)(esi + 0x610u), edx);
/* 7447a2: mov eax, dword ptr [edi + 0x614] */
  eax = R32((uint32_t)(edi + 0x614u));
/* 7447a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7447a9: lea ecx, [esi + 0x618] */
  ecx = (uint32_t)(esi + 0x618u);
/* 7447af: mov dword ptr [esi + 0x614], eax */
  W32((uint32_t)(esi + 0x614u), eax);
/* 7447b5: call 0x6ca655 */
  esp -= 4; W32(esp, 0x7447bau); SPILL(); f_6ca655(); if (g_unwind) return; RELOAD();
/* 7447ba: mov edx, dword ptr [edi + 0x624] */
  edx = R32((uint32_t)(edi + 0x624u));
/* 7447c0: mov eax, dword ptr [esi + 0x624] */
  eax = R32((uint32_t)(esi + 0x624u));
/* 7447c6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7447c8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7447cb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7447cd: mov dword ptr [esi + 0x624], eax */
  W32((uint32_t)(esi + 0x624u), eax);
/* 7447d3: mov eax, dword ptr [edi + 0x628] */
  eax = R32((uint32_t)(edi + 0x628u));
/* 7447d9: mov dword ptr [esi + 0x628], eax */
  W32((uint32_t)(esi + 0x628u), eax);
/* 7447df: mov ecx, dword ptr [edi + 0x62c] */
  ecx = R32((uint32_t)(edi + 0x62cu));
/* 7447e5: mov dword ptr [esi + 0x62c], ecx */
  W32((uint32_t)(esi + 0x62cu), ecx);
/* 7447eb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7447ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7447f0: mov eax, esi */
  eax = esi;
/* 7447f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7447f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7447fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7447fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744880(void) {
  LOAD_REGS();
L_744880: /* 744880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744881: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744882: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 744886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744887: mov esi, ecx */
  esi = ecx;
/* 744889: call 0x6c601e */
  esp -= 4; W32(esp, 0x74488eu); SPILL(); f_6c601e(); if (g_unwind) return; RELOAD();
/* 74488e: lea eax, [edi + 0x598] */
  eax = (uint32_t)(edi + 0x598u);
/* 744894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744895: lea ecx, [esi + 0x598] */
  ecx = (uint32_t)(esi + 0x598u);
/* 74489b: call 0x6c6a32 */
  esp -= 4; W32(esp, 0x7448a0u); SPILL(); f_6c6a32(); if (g_unwind) return; RELOAD();
/* 7448a0: mov ecx, dword ptr [edi + 0x5a4] */
  ecx = R32((uint32_t)(edi + 0x5a4u));
/* 7448a6: mov dword ptr [esi + 0x5a4], ecx */
  W32((uint32_t)(esi + 0x5a4u), ecx);
/* 7448ac: mov edx, dword ptr [edi + 0x5a8] */
  edx = R32((uint32_t)(edi + 0x5a8u));
/* 7448b2: mov dword ptr [esi + 0x5a8], edx */
  W32((uint32_t)(esi + 0x5a8u), edx);
/* 7448b8: mov eax, dword ptr [edi + 0x5ac] */
  eax = R32((uint32_t)(edi + 0x5acu));
/* 7448be: mov dword ptr [esi + 0x5ac], eax */
  W32((uint32_t)(esi + 0x5acu), eax);
/* 7448c4: mov ecx, dword ptr [edi + 0x5b0] */
  ecx = R32((uint32_t)(edi + 0x5b0u));
/* 7448ca: lea edx, [edi + 0x5b4] */
  edx = (uint32_t)(edi + 0x5b4u);
/* 7448d0: mov dword ptr [esi + 0x5b0], ecx */
  W32((uint32_t)(esi + 0x5b0u), ecx);
/* 7448d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7448d7: lea ecx, [esi + 0x5b4] */
  ecx = (uint32_t)(esi + 0x5b4u);
/* 7448dd: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x7448e2u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 7448e2: lea eax, [edi + 0x5c0] */
  eax = (uint32_t)(edi + 0x5c0u);
/* 7448e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7448e9: lea ecx, [esi + 0x5c0] */
  ecx = (uint32_t)(esi + 0x5c0u);
/* 7448ef: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x7448f4u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 7448f4: lea ecx, [edi + 0x5cc] */
  ecx = (uint32_t)(edi + 0x5ccu);
/* 7448fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7448fc: lea edx, [esi + 0x5cc] */
  edx = (uint32_t)(esi + 0x5ccu);
/* 744902: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 744904: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 744907: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74490a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74490d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 744910: lea edx, [edi + 0x5d8] */
  edx = (uint32_t)(edi + 0x5d8u);
/* 744916: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 744918: lea eax, [esi + 0x5d8] */
  eax = (uint32_t)(esi + 0x5d8u);
/* 74491e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 744920: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 744923: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 744926: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 744929: mov ecx, dword ptr [esi + 0x5e8] */
  ecx = R32((uint32_t)(esi + 0x5e8u));
/* 74492f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 744932: mov eax, dword ptr [edi + 0x5e4] */
  eax = R32((uint32_t)(edi + 0x5e4u));
/* 744938: mov dword ptr [esi + 0x5e4], eax */
  W32((uint32_t)(esi + 0x5e4u), eax);
/* 74493e: xor ecx, dword ptr [edi + 0x5e8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5e8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 744944: mov eax, dword ptr [esi + 0x5e8] */
  eax = R32((uint32_t)(esi + 0x5e8u));
/* 74494a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74494d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74494f: mov dword ptr [esi + 0x5e8], eax */
  W32((uint32_t)(esi + 0x5e8u), eax);
/* 744955: mov ecx, eax */
  ecx = eax;
/* 744957: mov eax, dword ptr [edi + 0x5e8] */
  eax = R32((uint32_t)(edi + 0x5e8u));
/* 74495d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74495f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 744962: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744964: mov dword ptr [esi + 0x5e8], eax */
  W32((uint32_t)(esi + 0x5e8u), eax);
/* 74496a: mov edx, dword ptr [edi + 0x5e8] */
  edx = R32((uint32_t)(edi + 0x5e8u));
/* 744970: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 744972: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 744975: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 744977: mov dword ptr [esi + 0x5e8], edx */
  W32((uint32_t)(esi + 0x5e8u), edx);
/* 74497d: lea eax, [edi + 0x5ec] */
  eax = (uint32_t)(edi + 0x5ecu);
/* 744983: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 744985: lea ecx, [esi + 0x5ec] */
  ecx = (uint32_t)(esi + 0x5ecu);
/* 74498b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74498d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 744990: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 744993: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 744996: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 744999: lea ecx, [edi + 0x5f8] */
  ecx = (uint32_t)(edi + 0x5f8u);
/* 74499f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7449a1: lea edx, [esi + 0x5f8] */
  edx = (uint32_t)(esi + 0x5f8u);
/* 7449a7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7449a9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7449ac: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7449af: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7449b2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7449b5: mov edx, dword ptr [edi + 0x604] */
  edx = R32((uint32_t)(edi + 0x604u));
/* 7449bb: mov dword ptr [esi + 0x604], edx */
  W32((uint32_t)(esi + 0x604u), edx);
/* 7449c1: mov eax, dword ptr [edi + 0x608] */
  eax = R32((uint32_t)(edi + 0x608u));
/* 7449c7: mov dword ptr [esi + 0x608], eax */
  W32((uint32_t)(esi + 0x608u), eax);
/* 7449cd: mov ecx, dword ptr [edi + 0x60c] */
  ecx = R32((uint32_t)(edi + 0x60cu));
/* 7449d3: mov dword ptr [esi + 0x60c], ecx */
  W32((uint32_t)(esi + 0x60cu), ecx);
/* 7449d9: mov edx, dword ptr [edi + 0x610] */
  edx = R32((uint32_t)(edi + 0x610u));
/* 7449df: lea ecx, [edi + 0x618] */
  ecx = (uint32_t)(edi + 0x618u);
/* 7449e5: mov dword ptr [esi + 0x610], edx */
  W32((uint32_t)(esi + 0x610u), edx);
/* 7449eb: mov eax, dword ptr [edi + 0x614] */
  eax = R32((uint32_t)(edi + 0x614u));
/* 7449f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7449f2: lea ecx, [esi + 0x618] */
  ecx = (uint32_t)(esi + 0x618u);
/* 7449f8: mov dword ptr [esi + 0x614], eax */
  W32((uint32_t)(esi + 0x614u), eax);
/* 7449fe: call 0x6cc6ad */
  esp -= 4; W32(esp, 0x744a03u); SPILL(); f_6cc6ad(); if (g_unwind) return; RELOAD();
/* 744a03: mov edx, dword ptr [edi + 0x624] */
  edx = R32((uint32_t)(edi + 0x624u));
/* 744a09: mov eax, dword ptr [esi + 0x624] */
  eax = R32((uint32_t)(esi + 0x624u));
/* 744a0f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 744a11: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 744a14: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744a16: mov dword ptr [esi + 0x624], eax */
  W32((uint32_t)(esi + 0x624u), eax);
/* 744a1c: mov eax, dword ptr [edi + 0x628] */
  eax = R32((uint32_t)(edi + 0x628u));
/* 744a22: mov dword ptr [esi + 0x628], eax */
  W32((uint32_t)(esi + 0x628u), eax);
/* 744a28: mov ecx, dword ptr [edi + 0x62c] */
  ecx = R32((uint32_t)(edi + 0x62cu));
/* 744a2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744a2f: mov dword ptr [esi + 0x62c], ecx */
  W32((uint32_t)(esi + 0x62cu), ecx);
/* 744a35: mov eax, esi */
  eax = esi;
/* 744a37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744a38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744ab0(void) {
  LOAD_REGS();
L_744ab0: /* 744ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744ab1: mov esi, ecx */
  esi = ecx;
/* 744ab3: call 0x6c61c7 */
  esp -= 4; W32(esp, 0x744ab8u); SPILL(); f_6c61c7(); if (g_unwind) return; RELOAD();
/* 744ab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744abd: je 0x744ace */
  if (zf) goto L_744ace;
L_744abf: /* 744abf: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 744ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744ac5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744acbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744acb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744ace: /* 744ace: mov eax, esi */
  eax = esi;
/* 744ad0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744ad1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744af0(void) {
  LOAD_REGS();
L_744af0: /* 744af0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 744af1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 744af5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744af8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744af9: mov esi, ecx */
  esi = ecx;
/* 744afb: je 0x744b30 */
  if (zf) goto L_744b30;
L_744afd: /* 744afd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 744b00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744b01: push 0x6c61c7 */
  { uint32_t v = 0x6c61c7u; esp -= 4; W32(esp, v); }
/* 744b06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 744b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744b0a: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 744b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744b10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x744b15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 744b15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744b18: je 0x744b28 */
  if (zf) goto L_744b28;
L_744b1a: /* 744b1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 744b20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 744b22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 744b24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744b25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x744b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_744b28: /* 744b28: mov eax, edi */
  eax = edi;
/* 744b2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744b2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744b2d: ret 4 */
  esp += 8; SPILL(); return;
L_744b30: /* 744b30: mov ecx, esi */
  ecx = esi;
/* 744b32: call 0x6c61c7 */
  esp -= 4; W32(esp, 0x744b37u); SPILL(); f_6c61c7(); if (g_unwind) return; RELOAD();
/* 744b37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744b3a: je 0x744b4b */
  if (zf) goto L_744b4b;
L_744b3c: /* 744b3c: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 744b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744b42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744b48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744b48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744b4b: /* 744b4b: mov eax, esi */
  eax = esi;
/* 744b4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744b4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744b80(void) {
  LOAD_REGS();
L_744b80: /* 744b80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744b82: push 0x9c73e8 */
  { uint32_t v = 0x9c73e8u; esp -= 4; W32(esp, v); }
/* 744b87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 744b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744b8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744b95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744b97: mov esi, ecx */
  esi = ecx;
/* 744b99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 744b9d: mov dword ptr [esi], 0x9fd288 */
  W32((uint32_t)(esi), 0x9fd288u);
/* 744ba3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 744bab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x744bb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 744bb1: mov ecx, esi */
  ecx = esi;
/* 744bb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 744bbb: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x744bc0u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 744bc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 744bc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744bc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 744bcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 744bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_744bf0(void) {
  LOAD_REGS();
L_744bf0: /* 744bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744bf1: mov esi, ecx */
  esi = ecx;
/* 744bf3: call 0x6c98bd */
  esp -= 4; W32(esp, 0x744bf8u); SPILL(); f_6c98bd(); if (g_unwind) return; RELOAD();
/* 744bf8: mov dword ptr [esi], 0x9fd288 */
  W32((uint32_t)(esi), 0x9fd288u);
/* 744bfe: mov eax, esi */
  eax = esi;
/* 744c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744c01: ret  */
  esp += 4; SPILL(); return;
}

void f_744c20(void) {
  LOAD_REGS();
L_744c20: /* 744c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744c21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744c22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 744c26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744c27: mov esi, ecx */
  esi = ecx;
/* 744c29: call 0x6c4511 */
  esp -= 4; W32(esp, 0x744c2eu); SPILL(); f_6c4511(); if (g_unwind) return; RELOAD();
/* 744c2e: mov dword ptr [esi], 0x9fd288 */
  W32((uint32_t)(esi), 0x9fd288u);
/* 744c34: mov al, byte ptr [edi + 0x598] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x598u))) & 0xffu);
/* 744c3a: mov byte ptr [esi + 0x598], al */
  W8((uint32_t)(esi + 0x598u), (eax & 0xffu));
/* 744c40: mov ecx, dword ptr [edi + 0x59c] */
  ecx = R32((uint32_t)(edi + 0x59cu));
/* 744c46: mov eax, dword ptr [esi + 0x59c] */
  eax = R32((uint32_t)(esi + 0x59cu));
/* 744c4c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 744c4e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 744c51: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744c53: mov dword ptr [esi + 0x59c], eax */
  W32((uint32_t)(esi + 0x59cu), eax);
/* 744c59: mov edx, dword ptr [edi + 0x5a0] */
  edx = R32((uint32_t)(edi + 0x5a0u));
/* 744c5f: mov dword ptr [esi + 0x5a0], edx */
  W32((uint32_t)(esi + 0x5a0u), edx);
/* 744c65: mov eax, dword ptr [edi + 0x5a4] */
  eax = R32((uint32_t)(edi + 0x5a4u));
/* 744c6b: mov dword ptr [esi + 0x5a4], eax */
  W32((uint32_t)(esi + 0x5a4u), eax);
/* 744c71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744c72: mov eax, esi */
  eax = esi;
/* 744c74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744c75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744ca0(void) {
  LOAD_REGS();
L_744ca0: /* 744ca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744ca1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744ca2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 744ca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744ca7: mov esi, ecx */
  esi = ecx;
/* 744ca9: call 0x6c601e */
  esp -= 4; W32(esp, 0x744caeu); SPILL(); f_6c601e(); if (g_unwind) return; RELOAD();
/* 744cae: mov al, byte ptr [edi + 0x598] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x598u))) & 0xffu);
/* 744cb4: mov byte ptr [esi + 0x598], al */
  W8((uint32_t)(esi + 0x598u), (eax & 0xffu));
/* 744cba: mov ecx, dword ptr [edi + 0x59c] */
  ecx = R32((uint32_t)(edi + 0x59cu));
/* 744cc0: mov eax, dword ptr [esi + 0x59c] */
  eax = R32((uint32_t)(esi + 0x59cu));
/* 744cc6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 744cc8: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 744ccb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 744ccd: mov dword ptr [esi + 0x59c], eax */
  W32((uint32_t)(esi + 0x59cu), eax);
/* 744cd3: mov edx, dword ptr [edi + 0x5a0] */
  edx = R32((uint32_t)(edi + 0x5a0u));
/* 744cd9: mov dword ptr [esi + 0x5a0], edx */
  W32((uint32_t)(esi + 0x5a0u), edx);
/* 744cdf: mov eax, dword ptr [edi + 0x5a4] */
  eax = R32((uint32_t)(edi + 0x5a4u));
/* 744ce5: mov dword ptr [esi + 0x5a4], eax */
  W32((uint32_t)(esi + 0x5a4u), eax);
/* 744ceb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744cec: mov eax, esi */
  eax = esi;
/* 744cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744cef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744d20(void) {
  LOAD_REGS();
L_744d20: /* 744d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744d21: mov esi, ecx */
  esi = ecx;
/* 744d23: call 0x6c87ec */
  esp -= 4; W32(esp, 0x744d28u); SPILL(); f_6c87ec(); if (g_unwind) return; RELOAD();
/* 744d28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744d2d: je 0x744d3e */
  if (zf) goto L_744d3e;
L_744d2f: /* 744d2f: push 0x5a8 */
  { uint32_t v = 0x5a8u; esp -= 4; W32(esp, v); }
/* 744d34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744d35: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744d3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744d3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744d3e: /* 744d3e: mov eax, esi */
  eax = esi;
/* 744d40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744d41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744d60(void) {
  LOAD_REGS();
L_744d60: /* 744d60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 744d61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 744d65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744d68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744d69: mov esi, ecx */
  esi = ecx;
/* 744d6b: je 0x744da0 */
  if (zf) goto L_744da0;
L_744d6d: /* 744d6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 744d70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744d71: push 0x6c87ec */
  { uint32_t v = 0x6c87ecu; esp -= 4; W32(esp, v); }
/* 744d76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 744d79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744d7a: push 0x5a8 */
  { uint32_t v = 0x5a8u; esp -= 4; W32(esp, v); }
/* 744d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744d80: call 0x99ca3d */
  esp -= 4; W32(esp, 0x744d85u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 744d85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744d88: je 0x744d98 */
  if (zf) goto L_744d98;
L_744d8a: /* 744d8a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 744d90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 744d92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 744d94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744d95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x744d98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_744d98: /* 744d98: mov eax, edi */
  eax = edi;
/* 744d9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744d9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744d9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744d9d: ret 4 */
  esp += 8; SPILL(); return;
L_744da0: /* 744da0: mov ecx, esi */
  ecx = esi;
/* 744da2: call 0x6c87ec */
  esp -= 4; W32(esp, 0x744da7u); SPILL(); f_6c87ec(); if (g_unwind) return; RELOAD();
/* 744da7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744daa: je 0x744dbb */
  if (zf) goto L_744dbb;
L_744dac: /* 744dac: push 0x5a8 */
  { uint32_t v = 0x5a8u; esp -= 4; W32(esp, v); }
/* 744db1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744db2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744db8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744db8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744dbb: /* 744dbb: mov eax, esi */
  eax = esi;
/* 744dbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744dbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744dbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744df0(void) {
  LOAD_REGS();
L_744df0: /* 744df0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744df2: push 0x9c7408 */
  { uint32_t v = 0x9c7408u; esp -= 4; W32(esp, v); }
/* 744df7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 744dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744dfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744e05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744e07: mov esi, ecx */
  esi = ecx;
/* 744e09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 744e0d: mov dword ptr [esi], 0x9fd490 */
  W32((uint32_t)(esi), 0x9fd490u);
/* 744e13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 744e1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x744e21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 744e21: mov ecx, esi */
  ecx = esi;
/* 744e23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 744e2b: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x744e30u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 744e30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 744e34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744e35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 744e3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 744e3f: ret  */
  esp += 4; SPILL(); return;
}

void f_744e60(void) {
  LOAD_REGS();
L_744e60: /* 744e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744e61: mov esi, ecx */
  esi = ecx;
/* 744e63: call 0x6c98bd */
  esp -= 4; W32(esp, 0x744e68u); SPILL(); f_6c98bd(); if (g_unwind) return; RELOAD();
/* 744e68: mov dword ptr [esi], 0x9fd490 */
  W32((uint32_t)(esi), 0x9fd490u);
/* 744e6e: mov eax, esi */
  eax = esi;
/* 744e70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744e71: ret  */
  esp += 4; SPILL(); return;
}

void f_744e90(void) {
  LOAD_REGS();
L_744e90: /* 744e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744e91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744e92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 744e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744e97: mov esi, ecx */
  esi = ecx;
/* 744e99: call 0x6c4511 */
  esp -= 4; W32(esp, 0x744e9eu); SPILL(); f_6c4511(); if (g_unwind) return; RELOAD();
/* 744e9e: mov dword ptr [esi], 0x9fd490 */
  W32((uint32_t)(esi), 0x9fd490u);
/* 744ea4: mov eax, dword ptr [edi + 0x598] */
  eax = R32((uint32_t)(edi + 0x598u));
/* 744eaa: mov dword ptr [esi + 0x598], eax */
  W32((uint32_t)(esi + 0x598u), eax);
/* 744eb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744eb1: mov eax, esi */
  eax = esi;
/* 744eb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744eb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744ed0(void) {
  LOAD_REGS();
L_744ed0: /* 744ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744ed2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 744ed6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744ed7: mov esi, ecx */
  esi = ecx;
/* 744ed9: call 0x6c601e */
  esp -= 4; W32(esp, 0x744edeu); SPILL(); f_6c601e(); if (g_unwind) return; RELOAD();
/* 744ede: mov eax, dword ptr [edi + 0x598] */
  eax = R32((uint32_t)(edi + 0x598u));
/* 744ee4: mov dword ptr [esi + 0x598], eax */
  W32((uint32_t)(esi + 0x598u), eax);
/* 744eea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744eeb: mov eax, esi */
  eax = esi;
/* 744eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744eee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744f10(void) {
  LOAD_REGS();
L_744f10: /* 744f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744f11: mov esi, ecx */
  esi = ecx;
/* 744f13: call 0x6c6398 */
  esp -= 4; W32(esp, 0x744f18u); SPILL(); f_6c6398(); if (g_unwind) return; RELOAD();
/* 744f18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744f1d: je 0x744f2e */
  if (zf) goto L_744f2e;
L_744f1f: /* 744f1f: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 744f24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744f25: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744f2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744f2e: /* 744f2e: mov eax, esi */
  eax = esi;
/* 744f30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744f31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744f50(void) {
  LOAD_REGS();
L_744f50: /* 744f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 744f51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 744f55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744f59: mov esi, ecx */
  esi = ecx;
/* 744f5b: je 0x744f90 */
  if (zf) goto L_744f90;
L_744f5d: /* 744f5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 744f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744f61: push 0x6c6398 */
  { uint32_t v = 0x6c6398u; esp -= 4; W32(esp, v); }
/* 744f66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 744f69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744f6a: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 744f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744f70: call 0x99ca3d */
  esp -= 4; W32(esp, 0x744f75u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 744f75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744f78: je 0x744f88 */
  if (zf) goto L_744f88;
L_744f7a: /* 744f7a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 744f80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 744f82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 744f84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 744f85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x744f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_744f88: /* 744f88: mov eax, edi */
  eax = edi;
/* 744f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 744f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744f8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744f8d: ret 4 */
  esp += 8; SPILL(); return;
L_744f90: /* 744f90: mov ecx, esi */
  ecx = esi;
/* 744f92: call 0x6c6398 */
  esp -= 4; W32(esp, 0x744f97u); SPILL(); f_6c6398(); if (g_unwind) return; RELOAD();
/* 744f97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 744f9a: je 0x744fab */
  if (zf) goto L_744fab;
L_744f9c: /* 744f9c: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 744fa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744fa2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x744fa8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 744fa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_744fab: /* 744fab: mov eax, esi */
  eax = esi;
/* 744fad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 744fae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 744faf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_744fe0(void) {
  LOAD_REGS();
L_744fe0: /* 744fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 744fe2: push 0x9c7436 */
  { uint32_t v = 0x9c7436u; esp -= 4; W32(esp, v); }
/* 744fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 744fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 744fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 744ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 744ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 744ff7: mov esi, ecx */
  esi = ecx;
/* 744ff9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 744ffd: mov dword ptr [esi], 0x9fd698 */
  W32((uint32_t)(esi), 0x9fd698u);
/* 745003: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 74500b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x745011u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 745011: lea ecx, [esi + 0x5a4] */
  ecx = (uint32_t)(esi + 0x5a4u);
/* 745017: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74501c: call 0x6c9543 */
  esp -= 4; W32(esp, 0x745021u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 745021: mov ecx, esi */
  ecx = esi;
/* 745023: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74502b: call 0x6c4c0a */
  esp -= 4; W32(esp, 0x745030u); SPILL(); f_6c4c0a(); if (g_unwind) return; RELOAD();
/* 745030: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 745034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745035: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74503c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74503f: ret  */
  esp += 4; SPILL(); return;
}

void f_745060(void) {
  LOAD_REGS();
L_745060: /* 745060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 745062: push 0x9c7466 */
  { uint32_t v = 0x9c7466u; esp -= 4; W32(esp, v); }
/* 745067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74506d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74506e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 745075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 745076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745077: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745078: mov esi, ecx */
  esi = ecx;
/* 74507a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74507b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74507f: call 0x6c98bd */
  esp -= 4; W32(esp, 0x745084u); SPILL(); f_6c98bd(); if (g_unwind) return; RELOAD();
/* 745084: lea ecx, [esi + 0x5a4] */
  ecx = (uint32_t)(esi + 0x5a4u);
/* 74508a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74508c: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 745094: mov dword ptr [esi], 0x9fd698 */
  W32((uint32_t)(esi), 0x9fd698u);
/* 74509a: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7450a0u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7450a0: lea ecx, [esi + 0x5bc] */
  ecx = (uint32_t)(esi + 0x5bcu);
/* 7450a6: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7450ab: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7450b1u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7450b1: lea edi, [esi + 0x5d8] */
  edi = (uint32_t)(esi + 0x5d8u);
/* 7450b7: mov ebx, 5 */
  ebx = 0x5u;
/* 7450bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7450c0: /* 7450c0: mov ecx, edi */
  ecx = edi;
/* 7450c2: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x7450c8u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 7450c8: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7450cb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 7450cc: jne 0x7450c0 */
  if (!zf) goto L_7450c0;
L_7450ce: /* 7450ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7450d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7450d3: mov eax, esi */
  eax = esi;
/* 7450d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7450d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7450d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7450de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7450e1: ret  */
  esp += 4; SPILL(); return;
}

void f_745120(void) {
  LOAD_REGS();
L_745120: /* 745120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 745122: push 0x9c7488 */
  { uint32_t v = 0x9c7488u; esp -= 4; W32(esp, v); }
/* 745127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74512d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74512e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 745135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 745136: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745137: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745138: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 74513c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74513d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74513e: mov ebx, ecx */
  ebx = ecx;
/* 745140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745141: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 745145: call 0x6c4511 */
  esp -= 4; W32(esp, 0x74514au); SPILL(); f_6c4511(); if (g_unwind) return; RELOAD();
/* 74514a: mov dword ptr [ebx], 0x9fd698 */
  W32((uint32_t)(ebx), 0x9fd698u);
/* 745150: mov eax, dword ptr [ebp + 0x598] */
  eax = R32((uint32_t)(ebp + 0x598u));
/* 745156: mov dword ptr [ebx + 0x598], eax */
  W32((uint32_t)(ebx + 0x598u), eax);
/* 74515c: mov ecx, dword ptr [ebp + 0x59c] */
  ecx = R32((uint32_t)(ebp + 0x59cu));
/* 745162: mov dword ptr [ebx + 0x59c], ecx */
  W32((uint32_t)(ebx + 0x59cu), ecx);
/* 745168: mov edx, dword ptr [ebp + 0x5a0] */
  edx = R32((uint32_t)(ebp + 0x5a0u));
/* 74516e: lea eax, [ebp + 0x5a4] */
  eax = (uint32_t)(ebp + 0x5a4u);
/* 745174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 745175: lea ecx, [ebx + 0x5a4] */
  ecx = (uint32_t)(ebx + 0x5a4u);
/* 74517b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 745183: mov dword ptr [ebx + 0x5a0], edx */
  W32((uint32_t)(ebx + 0x5a0u), edx);
/* 745189: call 0x6cbbae */
  esp -= 4; W32(esp, 0x74518eu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 74518e: lea ecx, [ebp + 0x5b0] */
  ecx = (uint32_t)(ebp + 0x5b0u);
/* 745194: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745196: lea edx, [ebx + 0x5b0] */
  edx = (uint32_t)(ebx + 0x5b0u);
/* 74519c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74519e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7451a1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7451a4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7451a7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7451aa: lea edx, [ebp + 0x5bc] */
  edx = (uint32_t)(ebp + 0x5bcu);
/* 7451b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7451b2: lea eax, [ebx + 0x5bc] */
  eax = (uint32_t)(ebx + 0x5bcu);
/* 7451b8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7451ba: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7451bd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7451c0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7451c3: mov ecx, dword ptr [ebx + 0x5cc] */
  ecx = R32((uint32_t)(ebx + 0x5ccu));
/* 7451c9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7451cc: mov eax, dword ptr [ebp + 0x5c8] */
  eax = R32((uint32_t)(ebp + 0x5c8u));
/* 7451d2: mov edx, dword ptr [ebx + 0x5cc] */
  edx = R32((uint32_t)(ebx + 0x5ccu));
/* 7451d8: mov dword ptr [ebx + 0x5c8], eax */
  W32((uint32_t)(ebx + 0x5c8u), eax);
/* 7451de: xor ecx, dword ptr [ebp + 0x5cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x5ccu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7451e4: mov edi, dword ptr [ebx + 0x5d4] */
  edi = R32((uint32_t)(ebx + 0x5d4u));
/* 7451ea: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7451ed: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7451ef: mov ecx, dword ptr [ebx + 0x5d4] */
  ecx = R32((uint32_t)(ebx + 0x5d4u));
/* 7451f5: mov dword ptr [ebx + 0x5cc], edx */
  W32((uint32_t)(ebx + 0x5ccu), edx);
/* 7451fb: mov eax, edx */
  eax = edx;
/* 7451fd: mov edx, dword ptr [ebp + 0x5cc] */
  edx = R32((uint32_t)(ebp + 0x5ccu));
/* 745203: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 745205: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 745208: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74520a: mov dword ptr [ebx + 0x5cc], edx */
  W32((uint32_t)(ebx + 0x5ccu), edx);
/* 745210: mov eax, dword ptr [ebp + 0x5d0] */
  eax = R32((uint32_t)(ebp + 0x5d0u));
/* 745216: mov dword ptr [ebx + 0x5d0], eax */
  W32((uint32_t)(ebx + 0x5d0u), eax);
/* 74521c: xor ecx, dword ptr [ebp + 0x5d4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x5d4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745222: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745225: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 745227: mov dword ptr [ebx + 0x5d4], edi */
  W32((uint32_t)(ebx + 0x5d4u), edi);
/* 74522d: mov edx, dword ptr [ebp + 0x5d4] */
  edx = R32((uint32_t)(ebp + 0x5d4u));
/* 745233: mov eax, edi */
  eax = edi;
/* 745235: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 745237: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74523a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74523c: mov dword ptr [ebx + 0x5d4], edx */
  W32((uint32_t)(ebx + 0x5d4u), edx);
/* 745242: lea esi, [ebp + 0x5d8] */
  esi = (uint32_t)(ebp + 0x5d8u);
/* 745248: lea edi, [ebx + 0x5d8] */
  edi = (uint32_t)(ebx + 0x5d8u);
/* 74524e: mov ecx, 0xf */
  ecx = 0xfu;
/* 745253: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 745255: mov eax, dword ptr [ebp + 0x614] */
  eax = R32((uint32_t)(ebp + 0x614u));
/* 74525b: mov esi, dword ptr [ebx + 0x618] */
  esi = R32((uint32_t)(ebx + 0x618u));
/* 745261: mov dword ptr [ebx + 0x614], eax */
  W32((uint32_t)(ebx + 0x614u), eax);
/* 745267: mov ecx, dword ptr [ebp + 0x618] */
  ecx = R32((uint32_t)(ebp + 0x618u));
/* 74526d: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74526f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745272: mov eax, esi */
  eax = esi;
/* 745274: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745276: mov dword ptr [ebx + 0x618], eax */
  W32((uint32_t)(ebx + 0x618u), eax);
/* 74527c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 745280: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 745281: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745282: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 745283: mov eax, ebx */
  eax = ebx;
/* 745285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 745286: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74528d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 745290: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745300(void) {
  LOAD_REGS();
L_745300: /* 745300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745302: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 745306: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745307: mov esi, ecx */
  esi = ecx;
/* 745309: call 0x6c601e */
  esp -= 4; W32(esp, 0x74530eu); SPILL(); f_6c601e(); if (g_unwind) return; RELOAD();
/* 74530e: mov eax, dword ptr [edi + 0x598] */
  eax = R32((uint32_t)(edi + 0x598u));
/* 745314: mov dword ptr [esi + 0x598], eax */
  W32((uint32_t)(esi + 0x598u), eax);
/* 74531a: mov ecx, dword ptr [edi + 0x59c] */
  ecx = R32((uint32_t)(edi + 0x59cu));
/* 745320: mov dword ptr [esi + 0x59c], ecx */
  W32((uint32_t)(esi + 0x59cu), ecx);
/* 745326: mov edx, dword ptr [edi + 0x5a0] */
  edx = R32((uint32_t)(edi + 0x5a0u));
/* 74532c: lea eax, [edi + 0x5a4] */
  eax = (uint32_t)(edi + 0x5a4u);
/* 745332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 745333: lea ecx, [esi + 0x5a4] */
  ecx = (uint32_t)(esi + 0x5a4u);
/* 745339: mov dword ptr [esi + 0x5a0], edx */
  W32((uint32_t)(esi + 0x5a0u), edx);
/* 74533f: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x745344u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 745344: lea ecx, [edi + 0x5b0] */
  ecx = (uint32_t)(edi + 0x5b0u);
/* 74534a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74534c: lea edx, [esi + 0x5b0] */
  edx = (uint32_t)(esi + 0x5b0u);
/* 745352: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745354: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745357: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74535a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74535d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745360: lea edx, [edi + 0x5bc] */
  edx = (uint32_t)(edi + 0x5bcu);
/* 745366: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745368: lea eax, [esi + 0x5bc] */
  eax = (uint32_t)(esi + 0x5bcu);
/* 74536e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745370: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745373: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745376: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745379: mov ecx, dword ptr [esi + 0x5cc] */
  ecx = R32((uint32_t)(esi + 0x5ccu));
/* 74537f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 745382: mov eax, dword ptr [edi + 0x5c8] */
  eax = R32((uint32_t)(edi + 0x5c8u));
/* 745388: mov dword ptr [esi + 0x5c8], eax */
  W32((uint32_t)(esi + 0x5c8u), eax);
/* 74538e: xor ecx, dword ptr [edi + 0x5cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5ccu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745394: mov edx, dword ptr [esi + 0x5cc] */
  edx = R32((uint32_t)(esi + 0x5ccu));
/* 74539a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74539d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74539f: mov dword ptr [esi + 0x5cc], edx */
  W32((uint32_t)(esi + 0x5ccu), edx);
/* 7453a5: mov ecx, dword ptr [esi + 0x5d4] */
  ecx = R32((uint32_t)(esi + 0x5d4u));
/* 7453ab: mov eax, edx */
  eax = edx;
/* 7453ad: mov edx, dword ptr [edi + 0x5cc] */
  edx = R32((uint32_t)(edi + 0x5ccu));
/* 7453b3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7453b5: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7453b8: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7453ba: mov dword ptr [esi + 0x5cc], edx */
  W32((uint32_t)(esi + 0x5ccu), edx);
/* 7453c0: mov eax, dword ptr [edi + 0x5d0] */
  eax = R32((uint32_t)(edi + 0x5d0u));
/* 7453c6: mov dword ptr [esi + 0x5d0], eax */
  W32((uint32_t)(esi + 0x5d0u), eax);
/* 7453cc: xor ecx, dword ptr [edi + 0x5d4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5d4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7453d2: mov edx, dword ptr [esi + 0x5d4] */
  edx = R32((uint32_t)(esi + 0x5d4u));
/* 7453d8: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7453db: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7453dd: mov dword ptr [esi + 0x5d4], edx */
  W32((uint32_t)(esi + 0x5d4u), edx);
/* 7453e3: mov eax, edx */
  eax = edx;
/* 7453e5: mov edx, dword ptr [edi + 0x5d4] */
  edx = R32((uint32_t)(edi + 0x5d4u));
/* 7453eb: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7453ed: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7453f0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7453f2: mov dword ptr [esi + 0x5d4], edx */
  W32((uint32_t)(esi + 0x5d4u), edx);
/* 7453f8: lea eax, [edi + 0x5d8] */
  eax = (uint32_t)(edi + 0x5d8u);
/* 7453fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745400: lea ecx, [esi + 0x5d8] */
  ecx = (uint32_t)(esi + 0x5d8u);
/* 745406: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 745408: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74540b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74540e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 745411: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 745414: lea ecx, [edi + 0x5e4] */
  ecx = (uint32_t)(edi + 0x5e4u);
/* 74541a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74541c: lea edx, [esi + 0x5e4] */
  edx = (uint32_t)(esi + 0x5e4u);
/* 745422: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745424: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745427: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74542a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74542d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745430: lea edx, [edi + 0x5f0] */
  edx = (uint32_t)(edi + 0x5f0u);
/* 745436: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745438: lea eax, [esi + 0x5f0] */
  eax = (uint32_t)(esi + 0x5f0u);
/* 74543e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745440: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745443: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745446: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745449: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74544c: lea eax, [edi + 0x5fc] */
  eax = (uint32_t)(edi + 0x5fcu);
/* 745452: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745454: lea ecx, [esi + 0x5fc] */
  ecx = (uint32_t)(esi + 0x5fcu);
/* 74545a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74545c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74545f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 745462: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 745465: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 745468: lea ecx, [edi + 0x608] */
  ecx = (uint32_t)(edi + 0x608u);
/* 74546e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745470: lea edx, [esi + 0x608] */
  edx = (uint32_t)(esi + 0x608u);
/* 745476: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745478: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74547b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74547e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 745481: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745484: mov edx, dword ptr [edi + 0x614] */
  edx = R32((uint32_t)(edi + 0x614u));
/* 74548a: mov dword ptr [esi + 0x614], edx */
  W32((uint32_t)(esi + 0x614u), edx);
/* 745490: mov eax, dword ptr [edi + 0x618] */
  eax = R32((uint32_t)(edi + 0x618u));
/* 745496: mov edi, dword ptr [esi + 0x618] */
  edi = R32((uint32_t)(esi + 0x618u));
/* 74549c: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74549e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7454a1: mov ecx, edi */
  ecx = edi;
/* 7454a3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7454a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7454a6: mov dword ptr [esi + 0x618], ecx */
  W32((uint32_t)(esi + 0x618u), ecx);
/* 7454ac: mov eax, esi */
  eax = esi;
/* 7454ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7454af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745530(void) {
  LOAD_REGS();
L_745530: /* 745530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745531: mov esi, ecx */
  esi = ecx;
/* 745533: call 0x6ccc43 */
  esp -= 4; W32(esp, 0x745538u); SPILL(); f_6ccc43(); if (g_unwind) return; RELOAD();
/* 745538: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74553d: je 0x74554e */
  if (zf) goto L_74554e;
L_74553f: /* 74553f: push 0x61c */
  { uint32_t v = 0x61cu; esp -= 4; W32(esp, v); }
/* 745544: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745545: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74554bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74554b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74554e: /* 74554e: mov eax, esi */
  eax = esi;
/* 745550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745551: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745570(void) {
  LOAD_REGS();
L_745570: /* 745570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745571: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 745575: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745579: mov esi, ecx */
  esi = ecx;
/* 74557b: je 0x7455b0 */
  if (zf) goto L_7455b0;
L_74557d: /* 74557d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 745580: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745581: push 0x6ccc43 */
  { uint32_t v = 0x6ccc43u; esp -= 4; W32(esp, v); }
/* 745586: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 745589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74558a: push 0x61c */
  { uint32_t v = 0x61cu; esp -= 4; W32(esp, v); }
/* 74558f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745590: call 0x99ca3d */
  esp -= 4; W32(esp, 0x745595u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 745595: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745598: je 0x7455a8 */
  if (zf) goto L_7455a8;
L_74559a: /* 74559a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7455a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7455a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7455a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7455a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7455a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7455a8: /* 7455a8: mov eax, edi */
  eax = edi;
/* 7455aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7455ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7455ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7455ad: ret 4 */
  esp += 8; SPILL(); return;
L_7455b0: /* 7455b0: mov ecx, esi */
  ecx = esi;
/* 7455b2: call 0x6ccc43 */
  esp -= 4; W32(esp, 0x7455b7u); SPILL(); f_6ccc43(); if (g_unwind) return; RELOAD();
/* 7455b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7455ba: je 0x7455cb */
  if (zf) goto L_7455cb;
L_7455bc: /* 7455bc: push 0x61c */
  { uint32_t v = 0x61cu; esp -= 4; W32(esp, v); }
/* 7455c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7455c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7455c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7455c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7455cb: /* 7455cb: mov eax, esi */
  eax = esi;
/* 7455cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7455ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7455cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745600(void) {
  LOAD_REGS();
L_745600: /* 745600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 745602: push 0x9c74c6 */
  { uint32_t v = 0x9c74c6u; esp -= 4; W32(esp, v); }
/* 745607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74560d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74560e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 745615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 745616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745617: mov esi, ecx */
  esi = ecx;
/* 745619: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74561d: mov dword ptr [esi], 0x9fd8a0 */
  W32((uint32_t)(esi), 0x9fd8a0u);
/* 745623: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 74562b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x745631u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 745631: lea ecx, [esi + 0x47c] */
  ecx = (uint32_t)(esi + 0x47cu);
/* 745637: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74563c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x745642u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 745642: lea ecx, [esi + 0x43c] */
  ecx = (uint32_t)(esi + 0x43cu);
/* 745648: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74564d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x745653u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 745653: mov ecx, esi */
  ecx = esi;
/* 745655: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74565d: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x745662u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 745662: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 745666: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745667: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74566e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 745671: ret  */
  esp += 4; SPILL(); return;
}

void f_7456a0(void) {
  LOAD_REGS();
L_7456a0: /* 7456a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7456a2: push 0x9c74e8 */
  { uint32_t v = 0x9c74e8u; esp -= 4; W32(esp, v); }
/* 7456a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7456ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7456ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7456b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7456b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7456b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7456b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7456b9: mov edi, ecx */
  edi = ecx;
/* 7456bb: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 7456bf: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7456c4u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7456c4: lea ecx, [edi + 0x350] */
  ecx = (uint32_t)(edi + 0x350u);
/* 7456ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7456d2: mov dword ptr [edi], 0x9fd8a0 */
  W32((uint32_t)(edi), 0x9fd8a0u);
/* 7456d8: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7456deu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7456de: lea esi, [edi + 0x358] */
  esi = (uint32_t)(edi + 0x358u);
/* 7456e4: mov ebx, 6 */
  ebx = 0x6u;
/* 7456e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7456f0: /* 7456f0: mov ecx, esi */
  ecx = esi;
/* 7456f2: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x7456f8u); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 7456f8: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7456fb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 7456fc: jne 0x7456f0 */
  if (!zf) goto L_7456f0;
L_7456fe: /* 7456fe: lea esi, [edi + 0x3b8] */
  esi = (uint32_t)(edi + 0x3b8u);
/* 745704: mov ebx, 8 */
  ebx = 0x8u;
/* 745709: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_745710: /* 745710: mov ecx, esi */
  ecx = esi;
/* 745712: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x745718u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 745718: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 74571b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 74571c: jne 0x745710 */
  if (!zf) goto L_745710;
L_74571e: /* 74571e: lea ecx, [edi + 0x418] */
  ecx = (uint32_t)(edi + 0x418u);
/* 745724: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x74572au); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 74572a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 74572e: mov eax, edi */
  eax = edi;
/* 745730: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 745731: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745732: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 745733: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74573a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74573d: ret  */
  esp += 4; SPILL(); return;
}

void f_745770(void) {
  LOAD_REGS();
L_745770: /* 745770: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745771: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745772: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 745776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745778: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745779: mov ebx, ecx */
  ebx = ecx;
/* 74577b: call 0x6c1456 */
  esp -= 4; W32(esp, 0x745780u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 745780: mov esi, dword ptr [ebx + 0x34c] */
  esi = R32((uint32_t)(ebx + 0x34cu));
/* 745786: mov dword ptr [ebx], 0x9fd8a0 */
  W32((uint32_t)(ebx), 0x9fd8a0u);
/* 74578c: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 745792: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 745798: mov cl, byte ptr [ebp + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33du))) & 0xffu);
/* 74579e: mov byte ptr [ebx + 0x33d], cl */
  W8((uint32_t)(ebx + 0x33du), (ecx & 0xffu));
/* 7457a4: mov edx, dword ptr [ebp + 0x340] */
  edx = R32((uint32_t)(ebp + 0x340u));
/* 7457aa: mov dword ptr [ebx + 0x340], edx */
  W32((uint32_t)(ebx + 0x340u), edx);
/* 7457b0: mov eax, dword ptr [ebp + 0x344] */
  eax = R32((uint32_t)(ebp + 0x344u));
/* 7457b6: mov edx, dword ptr [ebx + 0x34c] */
  edx = R32((uint32_t)(ebx + 0x34cu));
/* 7457bc: mov dword ptr [ebx + 0x344], eax */
  W32((uint32_t)(ebx + 0x344u), eax);
/* 7457c2: mov ecx, dword ptr [ebp + 0x348] */
  ecx = R32((uint32_t)(ebp + 0x348u));
/* 7457c8: mov dword ptr [ebx + 0x348], ecx */
  W32((uint32_t)(ebx + 0x348u), ecx);
/* 7457ce: xor edx, dword ptr [ebp + 0x34c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7457d4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7457d7: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7457d9: mov dword ptr [ebx + 0x34c], esi */
  W32((uint32_t)(ebx + 0x34cu), esi);
/* 7457df: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 7457e5: mov ecx, esi */
  ecx = esi;
/* 7457e7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7457e9: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7457ec: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7457ee: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 7457f4: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 7457fa: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7457fc: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7457ff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745801: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745807: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 74580d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74580f: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745812: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745814: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 74581a: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745820: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745822: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745825: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745827: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 74582d: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745833: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745835: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745838: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74583a: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745840: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745846: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745848: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74584b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74584d: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745853: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745859: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74585b: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745860: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745862: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745868: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 74586e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745870: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745876: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745878: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 74587e: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745884: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745886: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74588b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74588d: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745893: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745899: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74589b: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7458a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7458a3: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 7458a9: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 7458af: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7458b1: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7458b6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7458b8: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 7458be: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 7458c4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7458c6: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7458cc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7458ce: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 7458d4: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 7458da: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 7458e0: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 7458e6: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 7458ec: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7458ee: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7458f1: mov edi, edx */
  edi = edx;
/* 7458f3: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7458f5: lea ecx, [ebx + 0x358] */
  ecx = (uint32_t)(ebx + 0x358u);
/* 7458fb: mov eax, ecx */
  eax = ecx;
/* 7458fd: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7458ff: mov dword ptr [ebx + 0x354], edi */
  W32((uint32_t)(ebx + 0x354u), edi);
/* 745905: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 745907: mov dword ptr [esp + 0x14], 6 */
  W32((uint32_t)(esp + 0x14u), 0x6u);
/* 74590f: nop  */
L_745910: /* 745910: mov edx, eax */
  edx = eax;
/* 745912: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 745914: mov esi, ecx */
  esi = ecx;
/* 745916: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 745918: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 74591b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 74591e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745921: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 745924: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 745927: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 74592a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 74592e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 745931: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 745934: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 745935: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 745939: jne 0x745910 */
  if (!zf) goto L_745910;
L_74593b: /* 74593b: lea esi, [ebp + 0x3b8] */
  esi = (uint32_t)(ebp + 0x3b8u);
/* 745941: lea edi, [ebx + 0x3b8] */
  edi = (uint32_t)(ebx + 0x3b8u);
/* 745947: mov ecx, 0x18 */
  ecx = 0x18u;
/* 74594c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74594e: lea esi, [ebp + 0x418] */
  esi = (uint32_t)(ebp + 0x418u);
/* 745954: lea edi, [ebx + 0x418] */
  edi = (uint32_t)(ebx + 0x418u);
/* 74595a: mov ecx, 7 */
  ecx = 0x7u;
/* 74595f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 745961: mov eax, dword ptr [ebp + 0x434] */
  eax = R32((uint32_t)(ebp + 0x434u));
/* 745967: mov dword ptr [ebx + 0x434], eax */
  W32((uint32_t)(ebx + 0x434u), eax);
/* 74596d: mov ecx, dword ptr [ebp + 0x438] */
  ecx = R32((uint32_t)(ebp + 0x438u));
/* 745973: mov dword ptr [ebx + 0x438], ecx */
  W32((uint32_t)(ebx + 0x438u), ecx);
/* 745979: lea esi, [ebp + 0x43c] */
  esi = (uint32_t)(ebp + 0x43cu);
/* 74597f: lea edi, [ebx + 0x43c] */
  edi = (uint32_t)(ebx + 0x43cu);
/* 745985: mov ecx, 0x10 */
  ecx = 0x10u;
/* 74598a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74598c: lea esi, [ebp + 0x47c] */
  esi = (uint32_t)(ebp + 0x47cu);
/* 745992: lea edi, [ebx + 0x47c] */
  edi = (uint32_t)(ebx + 0x47cu);
/* 745998: add ebp, 0x4bc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4bcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 74599e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7459a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7459a5: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 7459a8: lea edx, [ebx + 0x4bc] */
  edx = (uint32_t)(ebx + 0x4bcu);
/* 7459ae: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7459b0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7459b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7459b4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7459b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7459ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7459bb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7459be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7459bf: mov eax, ebx */
  eax = ebx;
/* 7459c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7459c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745a70(void) {
  LOAD_REGS();
L_745a70: /* 745a70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745a71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745a72: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 745a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745a77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745a78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 745a79: mov ebx, ecx */
  ebx = ecx;
/* 745a7b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x745a80u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 745a80: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 745a86: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 745a8c: mov cl, byte ptr [ebp + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33du))) & 0xffu);
/* 745a92: mov byte ptr [ebx + 0x33d], cl */
  W8((uint32_t)(ebx + 0x33du), (ecx & 0xffu));
/* 745a98: mov edx, dword ptr [ebp + 0x340] */
  edx = R32((uint32_t)(ebp + 0x340u));
/* 745a9e: mov edi, dword ptr [ebx + 0x34c] */
  edi = R32((uint32_t)(ebx + 0x34cu));
/* 745aa4: mov dword ptr [ebx + 0x340], edx */
  W32((uint32_t)(ebx + 0x340u), edx);
/* 745aaa: mov eax, dword ptr [ebp + 0x344] */
  eax = R32((uint32_t)(ebp + 0x344u));
/* 745ab0: mov edx, dword ptr [ebx + 0x34c] */
  edx = R32((uint32_t)(ebx + 0x34cu));
/* 745ab6: mov dword ptr [ebx + 0x344], eax */
  W32((uint32_t)(ebx + 0x344u), eax);
/* 745abc: mov ecx, dword ptr [ebp + 0x348] */
  ecx = R32((uint32_t)(ebp + 0x348u));
/* 745ac2: mov dword ptr [ebx + 0x348], ecx */
  W32((uint32_t)(ebx + 0x348u), ecx);
/* 745ac8: xor edx, dword ptr [ebp + 0x34c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 745ace: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 745ad1: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 745ad3: mov dword ptr [ebx + 0x34c], edi */
  W32((uint32_t)(ebx + 0x34cu), edi);
/* 745ad9: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745adf: mov ecx, edi */
  ecx = edi;
/* 745ae1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745ae3: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745ae6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745ae8: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745aee: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745af4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745af6: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745af9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745afb: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745b01: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745b07: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b09: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745b0c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b0e: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745b14: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745b1a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b1c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745b1f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b21: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745b27: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745b2d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b2f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745b32: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b34: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745b3a: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745b40: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b42: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745b45: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b47: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745b4d: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745b53: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b55: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745b5a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b5c: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745b62: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745b68: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b6a: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745b70: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b72: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745b78: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745b7e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b80: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745b85: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745b87: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745b8d: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745b93: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b95: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745b9b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745b9d: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745ba3: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 745ba9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745bab: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745bb0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745bb2: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 745bb8: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 745bbe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745bc0: mov esi, dword ptr [ebx + 0x354] */
  esi = R32((uint32_t)(ebx + 0x354u));
/* 745bc6: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 745bcc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745bce: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 745bd4: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 745bda: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 745be0: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 745be6: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 745be8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 745beb: mov ecx, esi */
  ecx = esi;
/* 745bed: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 745bef: mov dword ptr [ebx + 0x354], ecx */
  W32((uint32_t)(ebx + 0x354u), ecx);
/* 745bf5: lea ecx, [ebp + 0x358] */
  ecx = (uint32_t)(ebp + 0x358u);
/* 745bfb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745bfd: lea edx, [ebx + 0x358] */
  edx = (uint32_t)(ebx + 0x358u);
/* 745c03: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745c05: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745c08: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 745c0b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 745c0e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 745c11: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 745c14: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 745c17: lea edx, [ebp + 0x368] */
  edx = (uint32_t)(ebp + 0x368u);
/* 745c1d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745c1f: lea eax, [ebx + 0x368] */
  eax = (uint32_t)(ebx + 0x368u);
/* 745c25: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745c27: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745c2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745c2d: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 745c30: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 745c33: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 745c36: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 745c39: lea eax, [ebp + 0x378] */
  eax = (uint32_t)(ebp + 0x378u);
/* 745c3f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745c41: lea ecx, [ebx + 0x378] */
  ecx = (uint32_t)(ebx + 0x378u);
/* 745c47: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 745c49: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 745c4c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 745c4f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 745c52: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 745c55: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 745c58: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 745c5b: lea ecx, [ebp + 0x388] */
  ecx = (uint32_t)(ebp + 0x388u);
/* 745c61: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745c63: lea edx, [ebx + 0x388] */
  edx = (uint32_t)(ebx + 0x388u);
/* 745c69: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745c6b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745c6e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 745c71: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 745c74: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 745c77: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 745c7a: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 745c7d: lea edx, [ebp + 0x398] */
  edx = (uint32_t)(ebp + 0x398u);
/* 745c83: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745c85: lea eax, [ebx + 0x398] */
  eax = (uint32_t)(ebx + 0x398u);
/* 745c8b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745c8d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745c90: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745c93: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 745c96: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 745c99: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 745c9c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 745c9f: lea eax, [ebp + 0x3a8] */
  eax = (uint32_t)(ebp + 0x3a8u);
/* 745ca5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745ca7: lea ecx, [ebx + 0x3a8] */
  ecx = (uint32_t)(ebx + 0x3a8u);
/* 745cad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 745caf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 745cb2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 745cb5: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 745cb8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 745cbb: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 745cbe: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 745cc1: lea ecx, [ebp + 0x3b8] */
  ecx = (uint32_t)(ebp + 0x3b8u);
/* 745cc7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745cc9: lea edx, [ebx + 0x3b8] */
  edx = (uint32_t)(ebx + 0x3b8u);
/* 745ccf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745cd1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745cd4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 745cd7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 745cda: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745cdd: lea edx, [ebp + 0x3c4] */
  edx = (uint32_t)(ebp + 0x3c4u);
/* 745ce3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745ce5: lea eax, [ebx + 0x3c4] */
  eax = (uint32_t)(ebx + 0x3c4u);
/* 745ceb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745ced: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745cf0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745cf3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745cf6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 745cf9: lea eax, [ebp + 0x3d0] */
  eax = (uint32_t)(ebp + 0x3d0u);
/* 745cff: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745d01: lea ecx, [ebx + 0x3d0] */
  ecx = (uint32_t)(ebx + 0x3d0u);
/* 745d07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 745d09: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 745d0c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 745d0f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 745d12: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 745d15: lea ecx, [ebp + 0x3dc] */
  ecx = (uint32_t)(ebp + 0x3dcu);
/* 745d1b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745d1d: lea edx, [ebx + 0x3dc] */
  edx = (uint32_t)(ebx + 0x3dcu);
/* 745d23: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745d25: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745d28: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 745d2b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 745d2e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745d31: lea edx, [ebp + 0x3e8] */
  edx = (uint32_t)(ebp + 0x3e8u);
/* 745d37: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745d39: lea eax, [ebx + 0x3e8] */
  eax = (uint32_t)(ebx + 0x3e8u);
/* 745d3f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745d41: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745d44: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745d47: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745d4a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 745d4d: lea eax, [ebp + 0x3f4] */
  eax = (uint32_t)(ebp + 0x3f4u);
/* 745d53: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 745d55: lea ecx, [ebx + 0x3f4] */
  ecx = (uint32_t)(ebx + 0x3f4u);
/* 745d5b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 745d5d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 745d60: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 745d63: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 745d66: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 745d69: lea ecx, [ebp + 0x400] */
  ecx = (uint32_t)(ebp + 0x400u);
/* 745d6f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 745d71: lea edx, [ebx + 0x400] */
  edx = (uint32_t)(ebx + 0x400u);
/* 745d77: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745d79: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 745d7c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 745d7f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 745d82: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 745d85: lea edx, [ebp + 0x40c] */
  edx = (uint32_t)(ebp + 0x40cu);
/* 745d8b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 745d8d: lea eax, [ebx + 0x40c] */
  eax = (uint32_t)(ebx + 0x40cu);
/* 745d93: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 745d95: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 745d98: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 745d9b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 745d9e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 745da1: lea esi, [ebp + 0x418] */
  esi = (uint32_t)(ebp + 0x418u);
/* 745da7: lea edi, [ebx + 0x418] */
  edi = (uint32_t)(ebx + 0x418u);
/* 745dad: mov ecx, 7 */
  ecx = 0x7u;
/* 745db2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 745db4: mov eax, dword ptr [ebp + 0x434] */
  eax = R32((uint32_t)(ebp + 0x434u));
/* 745dba: mov dword ptr [ebx + 0x434], eax */
  W32((uint32_t)(ebx + 0x434u), eax);
/* 745dc0: mov ecx, dword ptr [ebp + 0x438] */
  ecx = R32((uint32_t)(ebp + 0x438u));
/* 745dc6: mov dword ptr [ebx + 0x438], ecx */
  W32((uint32_t)(ebx + 0x438u), ecx);
/* 745dcc: lea esi, [ebp + 0x43c] */
  esi = (uint32_t)(ebp + 0x43cu);
/* 745dd2: lea edi, [ebx + 0x43c] */
  edi = (uint32_t)(ebx + 0x43cu);
/* 745dd8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 745ddd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 745ddf: lea esi, [ebp + 0x47c] */
  esi = (uint32_t)(ebp + 0x47cu);
/* 745de5: lea edi, [ebx + 0x47c] */
  edi = (uint32_t)(ebx + 0x47cu);
/* 745deb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 745df0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 745df2: add ebp, 0x4bc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4bcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 745df8: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 745dfb: lea edx, [ebx + 0x4bc] */
  edx = (uint32_t)(ebx + 0x4bcu);
/* 745e01: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 745e03: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 745e06: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 745e09: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 745e0c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 745e0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 745e10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745e11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 745e12: mov eax, ebx */
  eax = ebx;
/* 745e14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 745e15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745f10(void) {
  LOAD_REGS();
L_745f10: /* 745f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745f11: mov esi, ecx */
  esi = ecx;
/* 745f13: call 0x6ca308 */
  esp -= 4; W32(esp, 0x745f18u); SPILL(); f_6ca308(); if (g_unwind) return; RELOAD();
/* 745f18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745f1d: je 0x745f2e */
  if (zf) goto L_745f2e;
L_745f1f: /* 745f1f: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 745f24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745f25: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x745f2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 745f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_745f2e: /* 745f2e: mov eax, esi */
  eax = esi;
/* 745f30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745f31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745f50(void) {
  LOAD_REGS();
L_745f50: /* 745f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 745f51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 745f55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745f59: mov esi, ecx */
  esi = ecx;
/* 745f5b: je 0x745f90 */
  if (zf) goto L_745f90;
L_745f5d: /* 745f5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 745f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745f61: push 0x6ca308 */
  { uint32_t v = 0x6ca308u; esp -= 4; W32(esp, v); }
/* 745f66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 745f69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 745f6a: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 745f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745f70: call 0x99ca3d */
  esp -= 4; W32(esp, 0x745f75u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 745f75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745f78: je 0x745f88 */
  if (zf) goto L_745f88;
L_745f7a: /* 745f7a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 745f80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 745f82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 745f84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 745f85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x745f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_745f88: /* 745f88: mov eax, edi */
  eax = edi;
/* 745f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 745f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745f8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 745f8d: ret 4 */
  esp += 8; SPILL(); return;
L_745f90: /* 745f90: mov ecx, esi */
  ecx = esi;
/* 745f92: call 0x6ca308 */
  esp -= 4; W32(esp, 0x745f97u); SPILL(); f_6ca308(); if (g_unwind) return; RELOAD();
/* 745f97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 745f9a: je 0x745fab */
  if (zf) goto L_745fab;
L_745f9c: /* 745f9c: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 745fa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745fa2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x745fa8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 745fa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_745fab: /* 745fab: mov eax, esi */
  eax = esi;
/* 745fad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 745fae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 745faf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_745fe0(void) {
  LOAD_REGS();
L_745fe0: /* 745fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 745fe2: push 0x9c7516 */
  { uint32_t v = 0x9c7516u; esp -= 4; W32(esp, v); }
/* 745fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 745fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 745fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 745ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 745ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 745ff7: mov esi, ecx */
  esi = ecx;
/* 745ff9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 745ffd: mov dword ptr [esi], 0x9fda98 */
  W32((uint32_t)(esi), 0x9fda98u);
/* 746003: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 74600b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x746011u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 746011: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 746017: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74601c: call 0x6cc6ee */
  esp -= 4; W32(esp, 0x746021u); SPILL(); f_6cc6ee(); if (g_unwind) return; RELOAD();
/* 746021: mov ecx, esi */
  ecx = esi;
/* 746023: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74602b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x746030u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 746030: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 746034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 746035: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74603c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74603f: ret  */
  esp += 4; SPILL(); return;
}

void f_746060(void) {
  LOAD_REGS();
L_746060: /* 746060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 746062: push 0x9c7546 */
  { uint32_t v = 0x9c7546u; esp -= 4; W32(esp, v); }
/* 746067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74606d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74606e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 746075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 746076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746077: mov esi, ecx */
  esi = ecx;
/* 746079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74607d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x746082u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 746082: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 746088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74608a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 746092: mov dword ptr [esi], 0x9fda98 */
  W32((uint32_t)(esi), 0x9fda98u);
/* 746098: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x74609eu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 74609e: lea ecx, [esi + 0x34c] */
  ecx = (uint32_t)(esi + 0x34cu);
/* 7460a4: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7460a9: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7460afu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7460af: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 7460b5: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x7460bbu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 7460bb: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 7460c1: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x7460c7u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 7460c7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7460cb: mov eax, esi */
  eax = esi;
/* 7460cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7460ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7460d5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7460d8: ret  */
  esp += 4; SPILL(); return;
}

void f_746100(void) {
  LOAD_REGS();
L_746100: /* 746100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 746102: push 0x9c7568 */
  { uint32_t v = 0x9c7568u; esp -= 4; W32(esp, v); }
/* 746107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74610d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74610e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 746115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 746116: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 746117: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746118: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 74611c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74611d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74611e: mov ebx, ecx */
  ebx = ecx;
/* 746120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746121: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 746125: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74612au); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74612a: lea eax, [ebp + 0x33c] */
  eax = (uint32_t)(ebp + 0x33cu);
/* 746130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 746131: lea ecx, [ebx + 0x33c] */
  ecx = (uint32_t)(ebx + 0x33cu);
/* 746137: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 74613f: mov dword ptr [ebx], 0x9fda98 */
  W32((uint32_t)(ebx), 0x9fda98u);
/* 746145: call 0x6c5ca9 */
  esp -= 4; W32(esp, 0x74614au); SPILL(); f_6c5ca9(); if (g_unwind) return; RELOAD();
/* 74614a: mov esi, dword ptr [ebp + 0x348] */
  esi = R32((uint32_t)(ebp + 0x348u));
/* 746150: mov ecx, dword ptr [ebx + 0x348] */
  ecx = R32((uint32_t)(ebx + 0x348u));
/* 746156: mov eax, dword ptr [ebx + 0x348] */
  eax = R32((uint32_t)(ebx + 0x348u));
/* 74615c: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74615e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746161: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746163: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 746169: mov ecx, eax */
  ecx = eax;
/* 74616b: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 746171: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746173: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746176: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746178: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 74617e: mov edx, dword ptr [ebp + 0x348] */
  edx = R32((uint32_t)(ebp + 0x348u));
/* 746184: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 746186: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 746189: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74618b: mov dword ptr [ebx + 0x348], edx */
  W32((uint32_t)(ebx + 0x348u), edx);
/* 746191: lea esi, [ebp + 0x34c] */
  esi = (uint32_t)(ebp + 0x34cu);
/* 746197: lea edi, [ebx + 0x34c] */
  edi = (uint32_t)(ebx + 0x34cu);
/* 74619d: mov ecx, 6 */
  ecx = 0x6u;
/* 7461a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7461a4: mov eax, dword ptr [ebp + 0x364] */
  eax = R32((uint32_t)(ebp + 0x364u));
/* 7461aa: mov dword ptr [ebx + 0x364], eax */
  W32((uint32_t)(ebx + 0x364u), eax);
/* 7461b0: mov ecx, dword ptr [ebp + 0x368] */
  ecx = R32((uint32_t)(ebp + 0x368u));
/* 7461b6: mov dword ptr [ebx + 0x368], ecx */
  W32((uint32_t)(ebx + 0x368u), ecx);
/* 7461bc: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 7461c2: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 7461c8: lea esi, [ebp + 0x370] */
  esi = (uint32_t)(ebp + 0x370u);
/* 7461ce: lea edi, [ebx + 0x370] */
  edi = (uint32_t)(ebx + 0x370u);
/* 7461d4: mov ecx, 7 */
  ecx = 0x7u;
/* 7461d9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7461db: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 7461e1: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 7461e7: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 7461ed: mov eax, dword ptr [ebx + 0x394] */
  eax = R32((uint32_t)(ebx + 0x394u));
/* 7461f3: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7461f9: mov edx, dword ptr [ebp + 0x394] */
  edx = R32((uint32_t)(ebp + 0x394u));
/* 7461ff: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 746201: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 746204: mov esi, eax */
  esi = eax;
/* 746206: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 746208: mov dword ptr [ebx + 0x394], esi */
  W32((uint32_t)(ebx + 0x394u), esi);
/* 74620e: mov esi, dword ptr [ebx + 0x3b0] */
  esi = R32((uint32_t)(ebx + 0x3b0u));
/* 746214: lea eax, [ebp + 0x398] */
  eax = (uint32_t)(ebp + 0x398u);
/* 74621a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74621c: lea ecx, [ebx + 0x398] */
  ecx = (uint32_t)(ebx + 0x398u);
/* 746222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 746224: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746227: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74622a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74622d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746230: mov ecx, dword ptr [ebp + 0x3a4] */
  ecx = R32((uint32_t)(ebp + 0x3a4u));
/* 746236: mov dword ptr [ebx + 0x3a4], ecx */
  W32((uint32_t)(ebx + 0x3a4u), ecx);
/* 74623c: mov ecx, dword ptr [ebx + 0x3a8] */
  ecx = R32((uint32_t)(ebx + 0x3a8u));
/* 746242: mov edx, dword ptr [ebp + 0x3a8] */
  edx = R32((uint32_t)(ebp + 0x3a8u));
/* 746248: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74624a: mov edi, ecx */
  edi = ecx;
/* 74624c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74624f: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 746251: mov dword ptr [ebx + 0x3a8], edi */
  W32((uint32_t)(ebx + 0x3a8u), edi);
/* 746257: mov eax, dword ptr [ebp + 0x3ac] */
  eax = R32((uint32_t)(ebp + 0x3acu));
/* 74625d: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 746263: mov ecx, dword ptr [ebp + 0x3b0] */
  ecx = R32((uint32_t)(ebp + 0x3b0u));
/* 746269: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74626b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74626c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74626f: mov eax, esi */
  eax = esi;
/* 746271: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746273: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 746277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 746278: mov dword ptr [ebx + 0x3b0], eax */
  W32((uint32_t)(ebx + 0x3b0u), eax);
/* 74627e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 74627f: mov eax, ebx */
  eax = ebx;
/* 746281: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 746282: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 746289: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74628c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_746300(void) {
  LOAD_REGS();
L_746300: /* 746300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 746301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746302: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 746306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 746308: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746309: mov ebx, ecx */
  ebx = ecx;
/* 74630b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x746310u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 746310: lea eax, [ebp + 0x33c] */
  eax = (uint32_t)(ebp + 0x33cu);
/* 746316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 746317: lea ecx, [ebx + 0x33c] */
  ecx = (uint32_t)(ebx + 0x33cu);
/* 74631d: call 0x6c1f5a */
  esp -= 4; W32(esp, 0x746322u); SPILL(); f_6c1f5a(); if (g_unwind) return; RELOAD();
/* 746322: mov esi, dword ptr [ebp + 0x348] */
  esi = R32((uint32_t)(ebp + 0x348u));
/* 746328: mov ecx, dword ptr [ebx + 0x348] */
  ecx = R32((uint32_t)(ebx + 0x348u));
/* 74632e: mov eax, dword ptr [ebx + 0x348] */
  eax = R32((uint32_t)(ebx + 0x348u));
/* 746334: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746336: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746339: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74633b: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 746341: mov ecx, eax */
  ecx = eax;
/* 746343: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 746349: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74634b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74634e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746350: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 746356: mov edx, dword ptr [ebp + 0x348] */
  edx = R32((uint32_t)(ebp + 0x348u));
/* 74635c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74635e: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 746361: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 746363: mov dword ptr [ebx + 0x348], edx */
  W32((uint32_t)(ebx + 0x348u), edx);
/* 746369: lea esi, [ebp + 0x34c] */
  esi = (uint32_t)(ebp + 0x34cu);
/* 74636f: lea edi, [ebx + 0x34c] */
  edi = (uint32_t)(ebx + 0x34cu);
/* 746375: mov ecx, 6 */
  ecx = 0x6u;
/* 74637a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74637c: mov eax, dword ptr [ebp + 0x364] */
  eax = R32((uint32_t)(ebp + 0x364u));
/* 746382: mov dword ptr [ebx + 0x364], eax */
  W32((uint32_t)(ebx + 0x364u), eax);
/* 746388: mov ecx, dword ptr [ebp + 0x368] */
  ecx = R32((uint32_t)(ebp + 0x368u));
/* 74638e: mov dword ptr [ebx + 0x368], ecx */
  W32((uint32_t)(ebx + 0x368u), ecx);
/* 746394: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 74639a: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 7463a0: lea esi, [ebp + 0x370] */
  esi = (uint32_t)(ebp + 0x370u);
/* 7463a6: lea edi, [ebx + 0x370] */
  edi = (uint32_t)(ebx + 0x370u);
/* 7463ac: mov ecx, 7 */
  ecx = 0x7u;
/* 7463b1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7463b3: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 7463b9: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 7463bf: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 7463c5: mov eax, dword ptr [ebx + 0x394] */
  eax = R32((uint32_t)(ebx + 0x394u));
/* 7463cb: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 7463d1: mov edx, dword ptr [ebp + 0x394] */
  edx = R32((uint32_t)(ebp + 0x394u));
/* 7463d7: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7463d9: mov esi, eax */
  esi = eax;
/* 7463db: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7463de: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7463e0: mov dword ptr [ebx + 0x394], esi */
  W32((uint32_t)(ebx + 0x394u), esi);
/* 7463e6: mov esi, dword ptr [ebx + 0x3b0] */
  esi = R32((uint32_t)(ebx + 0x3b0u));
/* 7463ec: lea eax, [ebp + 0x398] */
  eax = (uint32_t)(ebp + 0x398u);
/* 7463f2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7463f4: lea ecx, [ebx + 0x398] */
  ecx = (uint32_t)(ebx + 0x398u);
/* 7463fa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7463fc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7463ff: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746402: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746405: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746408: mov ecx, dword ptr [ebp + 0x3a4] */
  ecx = R32((uint32_t)(ebp + 0x3a4u));
/* 74640e: mov dword ptr [ebx + 0x3a4], ecx */
  W32((uint32_t)(ebx + 0x3a4u), ecx);
/* 746414: mov edx, dword ptr [ebp + 0x3a8] */
  edx = R32((uint32_t)(ebp + 0x3a8u));
/* 74641a: mov ecx, dword ptr [ebx + 0x3a8] */
  ecx = R32((uint32_t)(ebx + 0x3a8u));
/* 746420: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 746422: mov edi, ecx */
  edi = ecx;
/* 746424: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 746427: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 746429: mov dword ptr [ebx + 0x3a8], edi */
  W32((uint32_t)(ebx + 0x3a8u), edi);
/* 74642f: mov eax, dword ptr [ebp + 0x3ac] */
  eax = R32((uint32_t)(ebp + 0x3acu));
/* 746435: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 74643b: mov ecx, dword ptr [ebp + 0x3b0] */
  ecx = R32((uint32_t)(ebp + 0x3b0u));
/* 746441: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746443: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746446: mov eax, esi */
  eax = esi;
/* 746448: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74644a: mov dword ptr [ebx + 0x3b0], eax */
  W32((uint32_t)(ebx + 0x3b0u), eax);
/* 746450: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 746451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 746452: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 746453: mov eax, ebx */
  eax = ebx;
/* 746455: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 746456: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7464c0(void) {
  LOAD_REGS();
L_7464c0: /* 7464c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7464c1: mov esi, ecx */
  esi = ecx;
/* 7464c3: call 0x6cb7e4 */
  esp -= 4; W32(esp, 0x7464c8u); SPILL(); f_6cb7e4(); if (g_unwind) return; RELOAD();
/* 7464c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7464cd: je 0x7464de */
  if (zf) goto L_7464de;
L_7464cf: /* 7464cf: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7464d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7464d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7464dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7464db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7464de: /* 7464de: mov eax, esi */
  eax = esi;
/* 7464e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7464e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_746500(void) {
  LOAD_REGS();
L_746500: /* 746500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 746501: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 746505: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 746508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746509: mov esi, ecx */
  esi = ecx;
/* 74650b: je 0x746540 */
  if (zf) goto L_746540;
L_74650d: /* 74650d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 746510: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 746511: push 0x6cb7e4 */
  { uint32_t v = 0x6cb7e4u; esp -= 4; W32(esp, v); }
/* 746516: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 746519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74651a: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74651f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746520: call 0x99ca3d */
  esp -= 4; W32(esp, 0x746525u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 746525: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 746528: je 0x746538 */
  if (zf) goto L_746538;
L_74652a: /* 74652a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 746530: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 746532: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 746534: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 746535: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x746538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_746538: /* 746538: mov eax, edi */
  eax = edi;
/* 74653a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74653b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74653c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74653d: ret 4 */
  esp += 8; SPILL(); return;
L_746540: /* 746540: mov ecx, esi */
  ecx = esi;
/* 746542: call 0x6cb7e4 */
  esp -= 4; W32(esp, 0x746547u); SPILL(); f_6cb7e4(); if (g_unwind) return; RELOAD();
/* 746547: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74654a: je 0x74655b */
  if (zf) goto L_74655b;
L_74654c: /* 74654c: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 746551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746552: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x746558u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 746558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74655b: /* 74655b: mov eax, esi */
  eax = esi;
/* 74655d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74655e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74655f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_746590(void) {
  LOAD_REGS();
L_746590: /* 746590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 746592: push 0x9c7596 */
  { uint32_t v = 0x9c7596u; esp -= 4; W32(esp, v); }
/* 746597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74659d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74659e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7465a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7465a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7465a7: mov esi, ecx */
  esi = ecx;
/* 7465a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7465ad: mov dword ptr [esi], 0x9fdc88 */
  W32((uint32_t)(esi), 0x9fdc88u);
/* 7465b3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7465bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7465c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7465c1: lea ecx, [esi + 0x698] */
  ecx = (uint32_t)(esi + 0x698u);
/* 7465c7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7465cc: call 0x6c9e80 */
  esp -= 4; W32(esp, 0x7465d1u); SPILL(); f_6c9e80(); if (g_unwind) return; RELOAD();
/* 7465d1: mov ecx, esi */
  ecx = esi;
/* 7465d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7465db: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7465e0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7465e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7465e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7465e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7465ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7465ef: ret  */
  esp += 4; SPILL(); return;
}

void f_746610(void) {
  LOAD_REGS();
L_746610: /* 746610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 746612: push 0x9c75b8 */
  { uint32_t v = 0x9c75b8u; esp -= 4; W32(esp, v); }
/* 746617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74661d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74661e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 746625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 746626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 746627: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746628: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 74662c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74662d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74662e: mov ebx, ecx */
  ebx = ecx;
/* 746630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746631: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 746635: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74663au); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74663a: mov dword ptr [ebx], 0x9fdc88 */
  W32((uint32_t)(ebx), 0x9fdc88u);
/* 746640: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 746646: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 74664c: mov cl, byte ptr [ebp + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33du))) & 0xffu);
/* 746652: mov byte ptr [ebx + 0x33d], cl */
  W8((uint32_t)(ebx + 0x33du), (ecx & 0xffu));
/* 746658: mov dl, byte ptr [ebp + 0x33e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33eu))) & 0xffu);
/* 74665e: mov byte ptr [ebx + 0x33e], dl */
  W8((uint32_t)(ebx + 0x33eu), (edx & 0xffu));
/* 746664: mov al, byte ptr [ebp + 0x33f] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33fu))) & 0xffu);
/* 74666a: mov byte ptr [ebx + 0x33f], al */
  W8((uint32_t)(ebx + 0x33fu), (eax & 0xffu));
/* 746670: mov cl, byte ptr [ebp + 0x340] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x340u))) & 0xffu);
/* 746676: mov byte ptr [ebx + 0x340], cl */
  W8((uint32_t)(ebx + 0x340u), (ecx & 0xffu));
/* 74667c: mov dl, byte ptr [ebp + 0x341] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x341u))) & 0xffu);
/* 746682: mov byte ptr [ebx + 0x341], dl */
  W8((uint32_t)(ebx + 0x341u), (edx & 0xffu));
/* 746688: mov al, byte ptr [ebp + 0x342] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x342u))) & 0xffu);
/* 74668e: mov byte ptr [ebx + 0x342], al */
  W8((uint32_t)(ebx + 0x342u), (eax & 0xffu));
/* 746694: mov cl, byte ptr [ebp + 0x343] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x343u))) & 0xffu);
/* 74669a: mov byte ptr [ebx + 0x343], cl */
  W8((uint32_t)(ebx + 0x343u), (ecx & 0xffu));
/* 7466a0: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 7466a6: mov edi, dword ptr [ebx + 0x354] */
  edi = R32((uint32_t)(ebx + 0x354u));
/* 7466ac: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 7466b2: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 7466b8: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 7466be: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 7466c4: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 7466ca: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 7466d0: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 7466d6: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 7466dc: xor eax, dword ptr [ebp + 0x354] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7466e2: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7466e5: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7466e7: mov dword ptr [ebx + 0x354], edi */
  W32((uint32_t)(ebx + 0x354u), edi);
/* 7466ed: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 7466f3: mov ecx, edi */
  ecx = edi;
/* 7466f5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7466f7: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7466fa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7466fc: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 746702: mov ecx, dword ptr [ebp + 0x354] */
  ecx = R32((uint32_t)(ebp + 0x354u));
/* 746708: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74670a: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74670d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74670f: mov dword ptr [ebx + 0x354], ecx */
  W32((uint32_t)(ebx + 0x354u), ecx);
/* 746715: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 74671b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74671d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746720: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746722: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 746728: mov ecx, dword ptr [ebp + 0x354] */
  ecx = R32((uint32_t)(ebp + 0x354u));
/* 74672e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746730: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746733: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746735: mov dword ptr [ebx + 0x354], ecx */
  W32((uint32_t)(ebx + 0x354u), ecx);
/* 74673b: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 746741: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746743: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746746: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746748: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 74674e: mov ecx, dword ptr [ebp + 0x354] */
  ecx = R32((uint32_t)(ebp + 0x354u));
/* 746754: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746756: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746759: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74675b: mov dword ptr [ebx + 0x354], ecx */
  W32((uint32_t)(ebx + 0x354u), ecx);
/* 746761: mov edx, dword ptr [ebp + 0x358] */
  edx = R32((uint32_t)(ebp + 0x358u));
/* 746767: mov dword ptr [ebx + 0x358], edx */
  W32((uint32_t)(ebx + 0x358u), edx);
/* 74676d: mov eax, dword ptr [ebp + 0x35c] */
  eax = R32((uint32_t)(ebp + 0x35cu));
/* 746773: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
/* 746779: mov ecx, dword ptr [ebp + 0x360] */
  ecx = R32((uint32_t)(ebp + 0x360u));
/* 74677f: mov dword ptr [ebx + 0x360], ecx */
  W32((uint32_t)(ebx + 0x360u), ecx);
/* 746785: mov edx, dword ptr [ebp + 0x364] */
  edx = R32((uint32_t)(ebp + 0x364u));
/* 74678b: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 746793: mov dword ptr [ebx + 0x364], edx */
  W32((uint32_t)(ebx + 0x364u), edx);
/* 746799: mov eax, dword ptr [ebp + 0x368] */
  eax = R32((uint32_t)(ebp + 0x368u));
/* 74679f: mov dword ptr [ebx + 0x368], eax */
  W32((uint32_t)(ebx + 0x368u), eax);
/* 7467a5: mov ecx, dword ptr [ebp + 0x36c] */
  ecx = R32((uint32_t)(ebp + 0x36cu));
/* 7467ab: mov dword ptr [ebx + 0x36c], ecx */
  W32((uint32_t)(ebx + 0x36cu), ecx);
/* 7467b1: mov edx, dword ptr [ebp + 0x370] */
  edx = R32((uint32_t)(ebp + 0x370u));
/* 7467b7: mov dword ptr [ebx + 0x370], edx */
  W32((uint32_t)(ebx + 0x370u), edx);
/* 7467bd: mov eax, dword ptr [ebp + 0x374] */
  eax = R32((uint32_t)(ebp + 0x374u));
/* 7467c3: mov dword ptr [ebx + 0x374], eax */
  W32((uint32_t)(ebx + 0x374u), eax);
/* 7467c9: mov ecx, dword ptr [ebp + 0x378] */
  ecx = R32((uint32_t)(ebp + 0x378u));
/* 7467cf: mov dword ptr [ebx + 0x378], ecx */
  W32((uint32_t)(ebx + 0x378u), ecx);
/* 7467d5: mov edx, dword ptr [ebp + 0x37c] */
  edx = R32((uint32_t)(ebp + 0x37cu));
/* 7467db: mov dword ptr [ebx + 0x37c], edx */
  W32((uint32_t)(ebx + 0x37cu), edx);
/* 7467e1: mov eax, dword ptr [ebp + 0x380] */
  eax = R32((uint32_t)(ebp + 0x380u));
/* 7467e7: mov dword ptr [ebx + 0x380], eax */
  W32((uint32_t)(ebx + 0x380u), eax);
/* 7467ed: mov ecx, dword ptr [ebp + 0x384] */
  ecx = R32((uint32_t)(ebp + 0x384u));
/* 7467f3: mov dword ptr [ebx + 0x384], ecx */
  W32((uint32_t)(ebx + 0x384u), ecx);
/* 7467f9: mov edx, dword ptr [ebp + 0x388] */
  edx = R32((uint32_t)(ebp + 0x388u));
/* 7467ff: mov dword ptr [ebx + 0x388], edx */
  W32((uint32_t)(ebx + 0x388u), edx);
/* 746805: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 74680b: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 746811: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 746817: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74681d: mov edx, dword ptr [ebp + 0x394] */
  edx = R32((uint32_t)(ebp + 0x394u));
/* 746823: mov dword ptr [ebx + 0x394], edx */
  W32((uint32_t)(ebx + 0x394u), edx);
/* 746829: mov eax, dword ptr [ebp + 0x398] */
  eax = R32((uint32_t)(ebp + 0x398u));
/* 74682f: mov dword ptr [ebx + 0x398], eax */
  W32((uint32_t)(ebx + 0x398u), eax);
/* 746835: mov ecx, dword ptr [ebp + 0x39c] */
  ecx = R32((uint32_t)(ebp + 0x39cu));
/* 74683b: mov dword ptr [ebx + 0x39c], ecx */
  W32((uint32_t)(ebx + 0x39cu), ecx);
/* 746841: mov edx, dword ptr [ebp + 0x3a0] */
  edx = R32((uint32_t)(ebp + 0x3a0u));
/* 746847: mov dword ptr [ebx + 0x3a0], edx */
  W32((uint32_t)(ebx + 0x3a0u), edx);
/* 74684d: mov eax, dword ptr [ebp + 0x3a4] */
  eax = R32((uint32_t)(ebp + 0x3a4u));
/* 746853: mov dword ptr [ebx + 0x3a4], eax */
  W32((uint32_t)(ebx + 0x3a4u), eax);
/* 746859: mov ecx, dword ptr [ebp + 0x3a8] */
  ecx = R32((uint32_t)(ebp + 0x3a8u));
/* 74685f: mov dword ptr [ebx + 0x3a8], ecx */
  W32((uint32_t)(ebx + 0x3a8u), ecx);
/* 746865: mov edx, dword ptr [ebp + 0x3ac] */
  edx = R32((uint32_t)(ebp + 0x3acu));
/* 74686b: mov dword ptr [ebx + 0x3ac], edx */
  W32((uint32_t)(ebx + 0x3acu), edx);
/* 746871: mov eax, dword ptr [ebp + 0x3b0] */
  eax = R32((uint32_t)(ebp + 0x3b0u));
/* 746877: mov dword ptr [ebx + 0x3b0], eax */
  W32((uint32_t)(ebx + 0x3b0u), eax);
/* 74687d: lea esi, [ebp + 0x3b4] */
  esi = (uint32_t)(ebp + 0x3b4u);
/* 746883: lea edi, [ebx + 0x3b4] */
  edi = (uint32_t)(ebx + 0x3b4u);
/* 746889: mov ecx, 0x48 */
  ecx = 0x48u;
/* 74688e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 746890: lea esi, [ebp + 0x4d4] */
  esi = (uint32_t)(ebp + 0x4d4u);
/* 746896: lea edi, [ebx + 0x4d4] */
  edi = (uint32_t)(ebx + 0x4d4u);
/* 74689c: mov ecx, 0x48 */
  ecx = 0x48u;
/* 7468a1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7468a3: lea ecx, [ebp + 0x5f4] */
  ecx = (uint32_t)(ebp + 0x5f4u);
/* 7468a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7468ab: lea edx, [ebx + 0x5f4] */
  edx = (uint32_t)(ebx + 0x5f4u);
/* 7468b1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7468b3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7468b6: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7468b9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7468bc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7468bf: lea edx, [ebp + 0x600] */
  edx = (uint32_t)(ebp + 0x600u);
/* 7468c5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7468c7: lea eax, [ebx + 0x600] */
  eax = (uint32_t)(ebx + 0x600u);
/* 7468cd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7468cf: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7468d2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7468d5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7468d8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7468db: lea eax, [ebp + 0x60c] */
  eax = (uint32_t)(ebp + 0x60cu);
/* 7468e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7468e3: lea ecx, [ebx + 0x60c] */
  ecx = (uint32_t)(ebx + 0x60cu);
/* 7468e9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7468eb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7468ee: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7468f1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7468f4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7468f7: lea ecx, [ebp + 0x618] */
  ecx = (uint32_t)(ebp + 0x618u);
/* 7468fd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7468ff: lea edx, [ebx + 0x618] */
  edx = (uint32_t)(ebx + 0x618u);
/* 746905: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 746907: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74690a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74690d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 746910: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 746913: lea edx, [ebp + 0x624] */
  edx = (uint32_t)(ebp + 0x624u);
/* 746919: lea eax, [ebx + 0x624] */
  eax = (uint32_t)(ebx + 0x624u);
/* 74691f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 746921: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 746923: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 746926: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 746929: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74692c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74692f: lea eax, [ebp + 0x630] */
  eax = (uint32_t)(ebp + 0x630u);
/* 746935: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 746937: lea ecx, [ebx + 0x630] */
  ecx = (uint32_t)(ebx + 0x630u);
/* 74693d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74693f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746942: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746945: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746948: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74694b: lea ecx, [ebp + 0x63c] */
  ecx = (uint32_t)(ebp + 0x63cu);
/* 746951: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 746953: lea edx, [ebx + 0x63c] */
  edx = (uint32_t)(ebx + 0x63cu);
/* 746959: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74695b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74695e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 746961: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 746964: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 746967: mov edx, dword ptr [ebp + 0x648] */
  edx = R32((uint32_t)(ebp + 0x648u));
/* 74696d: mov dword ptr [ebx + 0x648], edx */
  W32((uint32_t)(ebx + 0x648u), edx);
/* 746973: mov eax, dword ptr [ebp + 0x64c] */
  eax = R32((uint32_t)(ebp + 0x64cu));
/* 746979: mov edx, dword ptr [ebx + 0x654] */
  edx = R32((uint32_t)(ebx + 0x654u));
/* 74697f: mov dword ptr [ebx + 0x64c], eax */
  W32((uint32_t)(ebx + 0x64cu), eax);
/* 746985: mov ecx, dword ptr [ebp + 0x650] */
  ecx = R32((uint32_t)(ebp + 0x650u));
/* 74698b: mov eax, dword ptr [ebx + 0x654] */
  eax = R32((uint32_t)(ebx + 0x654u));
/* 746991: mov dword ptr [ebx + 0x650], ecx */
  W32((uint32_t)(ebx + 0x650u), ecx);
/* 746997: xor edx, dword ptr [ebp + 0x654] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x654u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74699d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7469a0: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469a2: mov dword ptr [ebx + 0x654], eax */
  W32((uint32_t)(ebx + 0x654u), eax);
/* 7469a8: mov ecx, eax */
  ecx = eax;
/* 7469aa: mov eax, dword ptr [ebp + 0x654] */
  eax = R32((uint32_t)(ebp + 0x654u));
/* 7469b0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469b2: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7469b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469b7: mov dword ptr [ebx + 0x654], eax */
  W32((uint32_t)(ebx + 0x654u), eax);
/* 7469bd: mov ecx, dword ptr [ebp + 0x654] */
  ecx = R32((uint32_t)(ebp + 0x654u));
/* 7469c3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7469c5: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7469c8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7469ca: mov dword ptr [ebx + 0x654], ecx */
  W32((uint32_t)(ebx + 0x654u), ecx);
/* 7469d0: mov eax, dword ptr [ebp + 0x654] */
  eax = R32((uint32_t)(ebp + 0x654u));
/* 7469d6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469d8: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7469db: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469dd: mov dword ptr [ebx + 0x654], eax */
  W32((uint32_t)(ebx + 0x654u), eax);
/* 7469e3: mov ecx, dword ptr [ebp + 0x654] */
  ecx = R32((uint32_t)(ebp + 0x654u));
/* 7469e9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7469eb: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7469ee: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7469f0: mov dword ptr [ebx + 0x654], ecx */
  W32((uint32_t)(ebx + 0x654u), ecx);
/* 7469f6: mov eax, dword ptr [ebp + 0x654] */
  eax = R32((uint32_t)(ebp + 0x654u));
/* 7469fc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7469fe: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746a01: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746a03: mov dword ptr [ebx + 0x654], eax */
  W32((uint32_t)(ebx + 0x654u), eax);
/* 746a09: mov ecx, dword ptr [ebp + 0x654] */
  ecx = R32((uint32_t)(ebp + 0x654u));
/* 746a0f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746a11: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746a14: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746a16: mov dword ptr [ebx + 0x654], ecx */
  W32((uint32_t)(ebx + 0x654u), ecx);
/* 746a1c: lea edx, [ebp + 0x658] */
  edx = (uint32_t)(ebp + 0x658u);
/* 746a22: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 746a24: lea eax, [ebx + 0x658] */
  eax = (uint32_t)(ebx + 0x658u);
/* 746a2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 746a2c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 746a2f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 746a32: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746a35: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 746a38: mov eax, dword ptr [ebp + 0x664] */
  eax = R32((uint32_t)(ebp + 0x664u));
/* 746a3e: mov dword ptr [ebx + 0x664], eax */
  W32((uint32_t)(ebx + 0x664u), eax);
/* 746a44: mov ecx, dword ptr [ebp + 0x668] */
  ecx = R32((uint32_t)(ebp + 0x668u));
/* 746a4a: mov dword ptr [ebx + 0x668], ecx */
  W32((uint32_t)(ebx + 0x668u), ecx);
/* 746a50: mov edx, dword ptr [ebp + 0x66c] */
  edx = R32((uint32_t)(ebp + 0x66cu));
/* 746a56: mov dword ptr [ebx + 0x66c], edx */
  W32((uint32_t)(ebx + 0x66cu), edx);
/* 746a5c: lea eax, [ebp + 0x670] */
  eax = (uint32_t)(ebp + 0x670u);
/* 746a62: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 746a64: lea ecx, [ebx + 0x670] */
  ecx = (uint32_t)(ebx + 0x670u);
/* 746a6a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 746a6c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746a6f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746a72: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746a75: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746a78: lea ecx, [ebp + 0x67c] */
  ecx = (uint32_t)(ebp + 0x67cu);
/* 746a7e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 746a80: lea edx, [ebx + 0x67c] */
  edx = (uint32_t)(ebx + 0x67cu);
/* 746a86: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 746a88: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 746a8b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 746a8e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 746a91: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 746a94: lea edx, [ebp + 0x688] */
  edx = (uint32_t)(ebp + 0x688u);
/* 746a9a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 746a9c: lea eax, [ebx + 0x688] */
  eax = (uint32_t)(ebx + 0x688u);
/* 746aa2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 746aa4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 746aa7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 746aaa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746aad: lea ecx, [ebp + 0x698] */
  ecx = (uint32_t)(ebp + 0x698u);
/* 746ab3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 746ab6: mov eax, dword ptr [ebp + 0x694] */
  eax = R32((uint32_t)(ebp + 0x694u));
/* 746abc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 746abd: lea ecx, [ebx + 0x698] */
  ecx = (uint32_t)(ebx + 0x698u);
/* 746ac3: mov dword ptr [ebx + 0x694], eax */
  W32((uint32_t)(ebx + 0x694u), eax);
/* 746ac9: call 0x6cc685 */
  esp -= 4; W32(esp, 0x746aceu); SPILL(); f_6cc685(); if (g_unwind) return; RELOAD();
/* 746ace: mov edx, dword ptr [ebp + 0x6a4] */
  edx = R32((uint32_t)(ebp + 0x6a4u));
/* 746ad4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 746ad8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 746ad9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 746ada: mov dword ptr [ebx + 0x6a4], edx */
  W32((uint32_t)(ebx + 0x6a4u), edx);
/* 746ae0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 746ae1: mov eax, ebx */
  eax = ebx;
/* 746ae3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 746ae4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 746aeb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 746aee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_746c40(void) {
  LOAD_REGS();
L_746c40: /* 746c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 746c41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 746c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 746c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 746c44: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 746c48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 746c49: mov esi, ecx */
  esi = ecx;
/* 746c4b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x746c50u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 746c50: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 746c56: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 746c5c: mov cl, byte ptr [edi + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33du))) & 0xffu);
/* 746c62: mov byte ptr [esi + 0x33d], cl */
  W8((uint32_t)(esi + 0x33du), (ecx & 0xffu));
/* 746c68: mov dl, byte ptr [edi + 0x33e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33eu))) & 0xffu);
/* 746c6e: mov byte ptr [esi + 0x33e], dl */
  W8((uint32_t)(esi + 0x33eu), (edx & 0xffu));
/* 746c74: mov al, byte ptr [edi + 0x33f] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33fu))) & 0xffu);
/* 746c7a: mov byte ptr [esi + 0x33f], al */
  W8((uint32_t)(esi + 0x33fu), (eax & 0xffu));
/* 746c80: mov cl, byte ptr [edi + 0x340] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x340u))) & 0xffu);
/* 746c86: mov byte ptr [esi + 0x340], cl */
  W8((uint32_t)(esi + 0x340u), (ecx & 0xffu));
/* 746c8c: mov dl, byte ptr [edi + 0x341] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x341u))) & 0xffu);
/* 746c92: mov byte ptr [esi + 0x341], dl */
  W8((uint32_t)(esi + 0x341u), (edx & 0xffu));
/* 746c98: mov al, byte ptr [edi + 0x342] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x342u))) & 0xffu);
/* 746c9e: mov byte ptr [esi + 0x342], al */
  W8((uint32_t)(esi + 0x342u), (eax & 0xffu));
/* 746ca4: mov cl, byte ptr [edi + 0x343] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x343u))) & 0xffu);
/* 746caa: mov byte ptr [esi + 0x343], cl */
  W8((uint32_t)(esi + 0x343u), (ecx & 0xffu));
/* 746cb0: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 746cb6: mov ebx, dword ptr [esi + 0x354] */
  ebx = R32((uint32_t)(esi + 0x354u));
/* 746cbc: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 746cc2: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 746cc8: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 746cce: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 746cd4: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 746cda: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 746ce0: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 746ce6: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 746cec: xor eax, dword ptr [edi + 0x354] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746cf2: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746cf5: xor ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 746cf7: mov dword ptr [esi + 0x354], ebx */
  W32((uint32_t)(esi + 0x354u), ebx);
/* 746cfd: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 746d03: mov ecx, ebx */
  ecx = ebx;
/* 746d05: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d07: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746d0a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d0c: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 746d12: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 746d18: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d1a: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746d1d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d1f: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 746d25: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 746d2b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d2d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746d30: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d32: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 746d38: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 746d3e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d40: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746d43: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d45: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 746d4b: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 746d51: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d53: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746d56: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746d58: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 746d5e: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 746d64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d66: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746d69: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746d6b: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 746d71: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 746d77: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 746d7d: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 746d83: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 746d89: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 746d8f: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 746d95: mov edx, dword ptr [edi + 0x364] */
  edx = R32((uint32_t)(edi + 0x364u));
/* 746d9b: mov dword ptr [esi + 0x364], edx */
  W32((uint32_t)(esi + 0x364u), edx);
/* 746da1: mov eax, dword ptr [edi + 0x368] */
  eax = R32((uint32_t)(edi + 0x368u));
/* 746da7: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 746dad: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 746db3: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 746db9: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 746dbf: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 746dc5: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 746dcb: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 746dd1: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 746dd7: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 746ddd: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 746de3: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 746de9: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 746def: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 746df5: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 746dfb: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 746e01: mov edx, dword ptr [edi + 0x388] */
  edx = R32((uint32_t)(edi + 0x388u));
/* 746e07: mov dword ptr [esi + 0x388], edx */
  W32((uint32_t)(esi + 0x388u), edx);
/* 746e0d: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 746e13: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 746e19: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 746e1f: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 746e25: mov edx, dword ptr [edi + 0x394] */
  edx = R32((uint32_t)(edi + 0x394u));
/* 746e2b: mov dword ptr [esi + 0x394], edx */
  W32((uint32_t)(esi + 0x394u), edx);
/* 746e31: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 746e37: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 746e3d: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 746e43: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 746e49: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 746e4f: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 746e55: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 746e5b: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 746e61: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 746e67: mov dword ptr [esi + 0x3a8], ecx */
  W32((uint32_t)(esi + 0x3a8u), ecx);
/* 746e6d: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 746e73: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 746e79: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* 746e7f: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* 746e85: mov eax, edi */
  eax = edi;
/* 746e87: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 746e8d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 746e8f: mov dword ptr [esp + 0x14], 0x18 */
  W32((uint32_t)(esp + 0x14u), 0x18u);
L_746e97: /* 746e97: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 746e9a: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 746e9c: mov ebx, ecx */
  ebx = ecx;
/* 746e9e: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 746ea0: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 746ea3: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 746ea6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746ea9: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 746eac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 746eb0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 746eb3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 746eb4: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 746eb8: jne 0x746e97 */
  if (!zf) goto L_746e97;
L_746eba: /* 746eba: lea ecx, [esi + 0x4d4] */
  ecx = (uint32_t)(esi + 0x4d4u);
/* 746ec0: mov dword ptr [esp + 0x14], 0x18 */
  W32((uint32_t)(esp + 0x14u), 0x18u);
L_746ec8: /* 746ec8: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 746ecb: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 746ecd: mov ebx, ecx */
  ebx = ecx;
/* 746ecf: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 746ed1: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 746ed4: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 746ed7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746eda: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 746edd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 746ee1: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 746ee4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 746ee5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 746ee9: jne 0x746ec8 */
  if (!zf) goto L_746ec8;
L_746eeb: /* 746eeb: lea eax, [edi + 0x5f4] */
  eax = (uint32_t)(edi + 0x5f4u);
/* 746ef1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 746ef3: lea ecx, [esi + 0x5f4] */
  ecx = (uint32_t)(esi + 0x5f4u);
/* 746ef9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 746efb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746efe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746f01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746f04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746f07: lea ecx, [edi + 0x600] */
  ecx = (uint32_t)(edi + 0x600u);
/* 746f0d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 746f0f: lea edx, [esi + 0x600] */
  edx = (uint32_t)(esi + 0x600u);
/* 746f15: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 746f17: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 746f1a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 746f1d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 746f20: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 746f23: lea edx, [edi + 0x60c] */
  edx = (uint32_t)(edi + 0x60cu);
/* 746f29: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 746f2b: lea eax, [esi + 0x60c] */
  eax = (uint32_t)(esi + 0x60cu);
/* 746f31: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 746f33: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 746f36: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 746f39: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746f3c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 746f3f: lea eax, [edi + 0x618] */
  eax = (uint32_t)(edi + 0x618u);
/* 746f45: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 746f47: lea ecx, [esi + 0x618] */
  ecx = (uint32_t)(esi + 0x618u);
/* 746f4d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 746f4f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746f52: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746f55: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746f58: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746f5b: lea ecx, [edi + 0x624] */
  ecx = (uint32_t)(edi + 0x624u);
/* 746f61: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 746f63: lea edx, [esi + 0x624] */
  edx = (uint32_t)(esi + 0x624u);
/* 746f69: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 746f6b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 746f6e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 746f71: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 746f74: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 746f77: lea edx, [edi + 0x630] */
  edx = (uint32_t)(edi + 0x630u);
/* 746f7d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 746f7f: lea eax, [esi + 0x630] */
  eax = (uint32_t)(esi + 0x630u);
/* 746f85: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 746f87: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 746f8a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 746f8d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 746f90: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 746f93: lea eax, [edi + 0x63c] */
  eax = (uint32_t)(edi + 0x63cu);
/* 746f99: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 746f9b: lea ecx, [esi + 0x63c] */
  ecx = (uint32_t)(esi + 0x63cu);
/* 746fa1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 746fa3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 746fa6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 746fa9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 746fac: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 746faf: mov ecx, dword ptr [edi + 0x648] */
  ecx = R32((uint32_t)(edi + 0x648u));
/* 746fb5: mov dword ptr [esi + 0x648], ecx */
  W32((uint32_t)(esi + 0x648u), ecx);
/* 746fbb: mov edx, dword ptr [edi + 0x64c] */
  edx = R32((uint32_t)(edi + 0x64cu));
/* 746fc1: mov ecx, dword ptr [esi + 0x654] */
  ecx = R32((uint32_t)(esi + 0x654u));
/* 746fc7: mov dword ptr [esi + 0x64c], edx */
  W32((uint32_t)(esi + 0x64cu), edx);
/* 746fcd: mov eax, dword ptr [edi + 0x650] */
  eax = R32((uint32_t)(edi + 0x650u));
/* 746fd3: mov dword ptr [esi + 0x650], eax */
  W32((uint32_t)(esi + 0x650u), eax);
/* 746fd9: mov ebx, dword ptr [edi + 0x654] */
  ebx = R32((uint32_t)(edi + 0x654u));
/* 746fdf: mov eax, dword ptr [esi + 0x654] */
  eax = R32((uint32_t)(esi + 0x654u));
/* 746fe5: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 746fe7: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 746fea: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746fec: mov dword ptr [esi + 0x654], eax */
  W32((uint32_t)(esi + 0x654u), eax);
/* 746ff2: mov ecx, eax */
  ecx = eax;
/* 746ff4: mov eax, dword ptr [edi + 0x654] */
  eax = R32((uint32_t)(edi + 0x654u));
/* 746ffa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 746ffc: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 746fff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747001: mov dword ptr [esi + 0x654], eax */
  W32((uint32_t)(esi + 0x654u), eax);
/* 747007: mov ecx, dword ptr [edi + 0x654] */
  ecx = R32((uint32_t)(edi + 0x654u));
/* 74700d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74700f: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 747012: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747014: mov dword ptr [esi + 0x654], ecx */
  W32((uint32_t)(esi + 0x654u), ecx);
/* 74701a: mov eax, dword ptr [edi + 0x654] */
  eax = R32((uint32_t)(edi + 0x654u));
/* 747020: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747022: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 747025: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747027: mov dword ptr [esi + 0x654], eax */
  W32((uint32_t)(esi + 0x654u), eax);
/* 74702d: mov ecx, dword ptr [edi + 0x654] */
  ecx = R32((uint32_t)(edi + 0x654u));
/* 747033: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747035: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 747038: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74703a: mov dword ptr [esi + 0x654], ecx */
  W32((uint32_t)(esi + 0x654u), ecx);
/* 747040: mov eax, dword ptr [edi + 0x654] */
  eax = R32((uint32_t)(edi + 0x654u));
/* 747046: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747048: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74704b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74704d: mov dword ptr [esi + 0x654], eax */
  W32((uint32_t)(esi + 0x654u), eax);
/* 747053: mov edx, dword ptr [edi + 0x654] */
  edx = R32((uint32_t)(edi + 0x654u));
/* 747059: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74705b: and edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74705e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 747060: mov dword ptr [esi + 0x654], edx */
  W32((uint32_t)(esi + 0x654u), edx);
/* 747066: lea eax, [edi + 0x658] */
  eax = (uint32_t)(edi + 0x658u);
/* 74706c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74706e: lea ecx, [esi + 0x658] */
  ecx = (uint32_t)(esi + 0x658u);
/* 747074: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 747076: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 747079: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74707c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74707f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 747082: mov ecx, dword ptr [edi + 0x664] */
  ecx = R32((uint32_t)(edi + 0x664u));
/* 747088: mov dword ptr [esi + 0x664], ecx */
  W32((uint32_t)(esi + 0x664u), ecx);
/* 74708e: mov edx, dword ptr [edi + 0x668] */
  edx = R32((uint32_t)(edi + 0x668u));
/* 747094: mov dword ptr [esi + 0x668], edx */
  W32((uint32_t)(esi + 0x668u), edx);
/* 74709a: mov eax, dword ptr [edi + 0x66c] */
  eax = R32((uint32_t)(edi + 0x66cu));
/* 7470a0: mov dword ptr [esi + 0x66c], eax */
  W32((uint32_t)(esi + 0x66cu), eax);
/* 7470a6: lea ecx, [edi + 0x670] */
  ecx = (uint32_t)(edi + 0x670u);
/* 7470ac: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7470ae: lea edx, [esi + 0x670] */
  edx = (uint32_t)(esi + 0x670u);
/* 7470b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7470b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7470b9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7470bc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7470bf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7470c2: lea edx, [edi + 0x67c] */
  edx = (uint32_t)(edi + 0x67cu);
/* 7470c8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7470ca: lea eax, [esi + 0x67c] */
  eax = (uint32_t)(esi + 0x67cu);
/* 7470d0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7470d2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7470d5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7470d8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7470db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7470de: lea eax, [edi + 0x688] */
  eax = (uint32_t)(edi + 0x688u);
/* 7470e4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7470e6: lea ecx, [esi + 0x688] */
  ecx = (uint32_t)(esi + 0x688u);
/* 7470ec: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7470ee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7470f1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7470f4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7470f7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7470fa: mov ecx, dword ptr [edi + 0x694] */
  ecx = R32((uint32_t)(edi + 0x694u));
/* 747100: lea edx, [edi + 0x698] */
  edx = (uint32_t)(edi + 0x698u);
/* 747106: mov dword ptr [esi + 0x694], ecx */
  W32((uint32_t)(esi + 0x694u), ecx);
/* 74710c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74710d: lea ecx, [esi + 0x698] */
  ecx = (uint32_t)(esi + 0x698u);
/* 747113: call 0x6ca4e3 */
  esp -= 4; W32(esp, 0x747118u); SPILL(); f_6ca4e3(); if (g_unwind) return; RELOAD();
/* 747118: mov eax, dword ptr [edi + 0x6a4] */
  eax = R32((uint32_t)(edi + 0x6a4u));
/* 74711e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74711f: mov dword ptr [esi + 0x6a4], eax */
  W32((uint32_t)(esi + 0x6a4u), eax);
/* 747125: mov eax, esi */
  eax = esi;
/* 747127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747128: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 747129: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74712a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747270(void) {
  LOAD_REGS();
L_747270: /* 747270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747271: mov esi, ecx */
  esi = ecx;
/* 747273: call 0x6c6fbe */
  esp -= 4; W32(esp, 0x747278u); SPILL(); f_6c6fbe(); if (g_unwind) return; RELOAD();
/* 747278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74727d: je 0x74728e */
  if (zf) goto L_74728e;
L_74727f: /* 74727f: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 747284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747285: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74728bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74728b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74728e: /* 74728e: mov eax, esi */
  eax = esi;
/* 747290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747291: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7472b0(void) {
  LOAD_REGS();
L_7472b0: /* 7472b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7472b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7472b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7472b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7472b9: mov esi, ecx */
  esi = ecx;
/* 7472bb: je 0x7472f0 */
  if (zf) goto L_7472f0;
L_7472bd: /* 7472bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7472c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7472c1: push 0x6c6fbe */
  { uint32_t v = 0x6c6fbeu; esp -= 4; W32(esp, v); }
/* 7472c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7472c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7472ca: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 7472cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7472d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7472d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7472d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7472d8: je 0x7472e8 */
  if (zf) goto L_7472e8;
L_7472da: /* 7472da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7472e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7472e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7472e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7472e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7472e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7472e8: /* 7472e8: mov eax, edi */
  eax = edi;
/* 7472ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7472eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7472ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7472ed: ret 4 */
  esp += 8; SPILL(); return;
L_7472f0: /* 7472f0: mov ecx, esi */
  ecx = esi;
/* 7472f2: call 0x6c6fbe */
  esp -= 4; W32(esp, 0x7472f7u); SPILL(); f_6c6fbe(); if (g_unwind) return; RELOAD();
/* 7472f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7472fa: je 0x74730b */
  if (zf) goto L_74730b;
L_7472fc: /* 7472fc: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 747301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747302: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747308u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747308: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74730b: /* 74730b: mov eax, esi */
  eax = esi;
/* 74730d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74730e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74730f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747340(void) {
  LOAD_REGS();
L_747340: /* 747340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747342: push 0x9c75d8 */
  { uint32_t v = 0x9c75d8u; esp -= 4; W32(esp, v); }
/* 747347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74734d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74734e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747357: mov esi, ecx */
  esi = ecx;
/* 747359: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74735d: mov dword ptr [esi], 0x9fde78 */
  W32((uint32_t)(esi), 0x9fde78u);
/* 747363: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74736b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x747371u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 747371: mov ecx, esi */
  ecx = esi;
/* 747373: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74737b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x747380u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 747380: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747384: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747385: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74738c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74738f: ret  */
  esp += 4; SPILL(); return;
}

void f_7473b0(void) {
  LOAD_REGS();
L_7473b0: /* 7473b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7473b1: mov esi, ecx */
  esi = ecx;
/* 7473b3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7473b8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7473b8: mov dword ptr [esi], 0x9fde78 */
  W32((uint32_t)(esi), 0x9fde78u);
/* 7473be: mov eax, esi */
  eax = esi;
/* 7473c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7473c1: ret  */
  esp += 4; SPILL(); return;
}

void f_7473e0(void) {
  LOAD_REGS();
L_7473e0: /* 7473e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7473e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7473e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7473e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7473e7: mov esi, ecx */
  esi = ecx;
/* 7473e9: call 0x6c1456 */
  esp -= 4; W32(esp, 0x7473eeu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 7473ee: mov dword ptr [esi], 0x9fde78 */
  W32((uint32_t)(esi), 0x9fde78u);
/* 7473f4: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7473fa: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 747400: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 747406: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 74740c: mov dl, byte ptr [edi + 0x344] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x344u))) & 0xffu);
/* 747412: mov byte ptr [esi + 0x344], dl */
  W8((uint32_t)(esi + 0x344u), (edx & 0xffu));
/* 747418: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74741e: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 747424: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 74742a: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 747430: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 747436: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 747437: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 74743d: mov eax, esi */
  eax = esi;
/* 74743f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747470(void) {
  LOAD_REGS();
L_747470: /* 747470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747471: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747472: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 747476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747477: mov esi, ecx */
  esi = ecx;
/* 747479: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74747eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74747e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 747484: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74748a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 747490: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 747496: mov dl, byte ptr [edi + 0x344] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x344u))) & 0xffu);
/* 74749c: mov byte ptr [esi + 0x344], dl */
  W8((uint32_t)(esi + 0x344u), (edx & 0xffu));
/* 7474a2: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 7474a8: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 7474ae: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 7474b4: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 7474ba: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 7474c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7474c1: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 7474c7: mov eax, esi */
  eax = esi;
/* 7474c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7474ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7474f0(void) {
  LOAD_REGS();
L_7474f0: /* 7474f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7474f1: mov esi, ecx */
  esi = ecx;
/* 7474f3: call 0x6c7f72 */
  esp -= 4; W32(esp, 0x7474f8u); SPILL(); f_6c7f72(); if (g_unwind) return; RELOAD();
/* 7474f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7474fd: je 0x74750e */
  if (zf) goto L_74750e;
L_7474ff: /* 7474ff: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 747504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747505: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74750bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74750b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74750e: /* 74750e: mov eax, esi */
  eax = esi;
/* 747510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747511: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747530(void) {
  LOAD_REGS();
L_747530: /* 747530: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 747531: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 747535: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747538: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747539: mov esi, ecx */
  esi = ecx;
/* 74753b: je 0x747570 */
  if (zf) goto L_747570;
L_74753d: /* 74753d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 747540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747541: push 0x6c7f72 */
  { uint32_t v = 0x6c7f72u; esp -= 4; W32(esp, v); }
/* 747546: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 747549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74754a: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 74754f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747550: call 0x99ca3d */
  esp -= 4; W32(esp, 0x747555u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 747555: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747558: je 0x747568 */
  if (zf) goto L_747568;
L_74755a: /* 74755a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 747560: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 747562: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 747564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747565: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x747568u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_747568: /* 747568: mov eax, edi */
  eax = edi;
/* 74756a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74756b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74756c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74756d: ret 4 */
  esp += 8; SPILL(); return;
L_747570: /* 747570: mov ecx, esi */
  ecx = esi;
/* 747572: call 0x6c7f72 */
  esp -= 4; W32(esp, 0x747577u); SPILL(); f_6c7f72(); if (g_unwind) return; RELOAD();
/* 747577: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74757a: je 0x74758b */
  if (zf) goto L_74758b;
L_74757c: /* 74757c: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 747581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747582: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747588u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747588: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74758b: /* 74758b: mov eax, esi */
  eax = esi;
/* 74758d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74758e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74758f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74754f(void) {
  LOAD_REGS();
L_74754f: /* 74754f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747550: call 0x99ca3d */
  esp -= 4; W32(esp, 0x747555u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 747555: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747558: je 0x747568 */
  if (zf) goto L_747568;
L_74755a: /* 74755a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 747560: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 747562: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 747564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747565: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x747568u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_747568: /* 747568: mov eax, edi */
  eax = edi;
/* 74756a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74756b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74756c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74756d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7475c0(void) {
  LOAD_REGS();
L_7475c0: /* 7475c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7475c2: push 0x9c75f8 */
  { uint32_t v = 0x9c75f8u; esp -= 4; W32(esp, v); }
/* 7475c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7475cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7475ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7475d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7475d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7475d7: mov esi, ecx */
  esi = ecx;
/* 7475d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7475dd: mov dword ptr [esi], 0x9fe058 */
  W32((uint32_t)(esi), 0x9fe058u);
/* 7475e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7475eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7475f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7475f1: mov ecx, esi */
  ecx = esi;
/* 7475f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7475fb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x747600u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 747600: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747604: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747605: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74760c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74760f: ret  */
  esp += 4; SPILL(); return;
}

void f_747630(void) {
  LOAD_REGS();
L_747630: /* 747630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747631: mov esi, ecx */
  esi = ecx;
/* 747633: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x747638u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 747638: mov dword ptr [esi], 0x9fe058 */
  W32((uint32_t)(esi), 0x9fe058u);
/* 74763e: mov eax, esi */
  eax = esi;
/* 747640: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747641: ret  */
  esp += 4; SPILL(); return;
}

void f_747660(void) {
  LOAD_REGS();
L_747660: /* 747660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747662: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 747666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747667: mov esi, ecx */
  esi = ecx;
/* 747669: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74766eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74766e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 747674: mov dword ptr [esi], 0x9fe058 */
  W32((uint32_t)(esi), 0x9fe058u);
/* 74767a: xor eax, dword ptr [edi + 0x33c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x33cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747680: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 747686: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 747689: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74768b: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 747691: mov eax, ecx */
  eax = ecx;
/* 747693: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 747699: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74769b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74769e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7476a0: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 7476a6: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 7476ac: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 7476b2: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 7476b8: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 7476be: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 7476c4: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 7476ca: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 7476d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7476d1: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 7476d7: mov eax, esi */
  eax = esi;
/* 7476d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7476da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747700(void) {
  LOAD_REGS();
L_747700: /* 747700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747701: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747702: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 747706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747707: mov esi, ecx */
  esi = ecx;
/* 747709: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74770eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74770e: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 747714: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 74771a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74771c: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 747722: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 747725: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747727: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74772d: mov eax, ecx */
  eax = ecx;
/* 74772f: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 747735: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747737: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74773a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74773c: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 747742: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 747748: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 74774e: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 747754: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 74775a: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 747760: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 747766: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 74776c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74776d: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 747773: mov eax, esi */
  eax = esi;
/* 747775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747776: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7477a0(void) {
  LOAD_REGS();
L_7477a0: /* 7477a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7477a1: mov esi, ecx */
  esi = ecx;
/* 7477a3: call 0x6ca42a */
  esp -= 4; W32(esp, 0x7477a8u); SPILL(); f_6ca42a(); if (g_unwind) return; RELOAD();
/* 7477a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7477ad: je 0x7477be */
  if (zf) goto L_7477be;
L_7477af: /* 7477af: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7477b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7477b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7477bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7477bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7477be: /* 7477be: mov eax, esi */
  eax = esi;
/* 7477c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7477c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7477e0(void) {
  LOAD_REGS();
L_7477e0: /* 7477e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7477e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7477e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7477e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7477e9: mov esi, ecx */
  esi = ecx;
/* 7477eb: je 0x747820 */
  if (zf) goto L_747820;
L_7477ed: /* 7477ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7477f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7477f1: push 0x6ca42a */
  { uint32_t v = 0x6ca42au; esp -= 4; W32(esp, v); }
/* 7477f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7477f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7477fa: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7477ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747800: call 0x99ca3d */
  esp -= 4; W32(esp, 0x747805u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 747805: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747808: je 0x747818 */
  if (zf) goto L_747818;
L_74780a: /* 74780a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 747810: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 747812: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 747814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747815: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x747818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_747818: /* 747818: mov eax, edi */
  eax = edi;
/* 74781a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74781b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74781c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74781d: ret 4 */
  esp += 8; SPILL(); return;
L_747820: /* 747820: mov ecx, esi */
  ecx = esi;
/* 747822: call 0x6ca42a */
  esp -= 4; W32(esp, 0x747827u); SPILL(); f_6ca42a(); if (g_unwind) return; RELOAD();
/* 747827: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74782a: je 0x74783b */
  if (zf) goto L_74783b;
L_74782c: /* 74782c: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 747831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747832: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747838u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747838: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74783b: /* 74783b: mov eax, esi */
  eax = esi;
/* 74783d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74783e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74783f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747870(void) {
  LOAD_REGS();
L_747870: /* 747870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747872: push 0x9c7618 */
  { uint32_t v = 0x9c7618u; esp -= 4; W32(esp, v); }
/* 747877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74787d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74787e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747887: mov esi, ecx */
  esi = ecx;
/* 747889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74788d: mov dword ptr [esi], 0x9fe238 */
  W32((uint32_t)(esi), 0x9fe238u);
/* 747893: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74789b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7478a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7478a1: mov ecx, esi */
  ecx = esi;
/* 7478a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7478ab: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7478b0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7478b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7478b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7478b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7478bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7478bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7478e0(void) {
  LOAD_REGS();
L_7478e0: /* 7478e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7478e1: mov esi, ecx */
  esi = ecx;
/* 7478e3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7478e8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7478e8: mov dword ptr [esi], 0x9fe238 */
  W32((uint32_t)(esi), 0x9fe238u);
/* 7478ee: mov eax, esi */
  eax = esi;
/* 7478f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7478f1: ret  */
  esp += 4; SPILL(); return;
}

void f_747910(void) {
  LOAD_REGS();
L_747910: /* 747910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 747914: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747916: mov esi, ecx */
  esi = ecx;
/* 747918: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74791du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74791d: mov dword ptr [esi], 0x9fe238 */
  W32((uint32_t)(esi), 0x9fe238u);
/* 747923: mov eax, esi */
  eax = esi;
/* 747925: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747926: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747940(void) {
  LOAD_REGS();
L_747940: /* 747940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 747944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747946: mov esi, ecx */
  esi = ecx;
/* 747948: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74794du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74794d: mov eax, esi */
  eax = esi;
/* 74794f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747950: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747970(void) {
  LOAD_REGS();
L_747970: /* 747970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747971: mov esi, ecx */
  esi = ecx;
/* 747973: call 0x6c580d */
  esp -= 4; W32(esp, 0x747978u); SPILL(); f_6c580d(); if (g_unwind) return; RELOAD();
/* 747978: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74797d: je 0x74798e */
  if (zf) goto L_74798e;
L_74797f: /* 74797f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 747984: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747985: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74798bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74798b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74798e: /* 74798e: mov eax, esi */
  eax = esi;
/* 747990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747991: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7479b0(void) {
  LOAD_REGS();
L_7479b0: /* 7479b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7479b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7479b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7479b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7479b9: mov esi, ecx */
  esi = ecx;
/* 7479bb: je 0x7479f0 */
  if (zf) goto L_7479f0;
L_7479bd: /* 7479bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7479c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7479c1: push 0x6c580d */
  { uint32_t v = 0x6c580du; esp -= 4; W32(esp, v); }
/* 7479c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7479c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7479ca: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7479cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7479d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7479d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7479d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7479d8: je 0x7479e8 */
  if (zf) goto L_7479e8;
L_7479da: /* 7479da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7479e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7479e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7479e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7479e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7479e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7479e8: /* 7479e8: mov eax, edi */
  eax = edi;
/* 7479ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7479eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7479ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7479ed: ret 4 */
  esp += 8; SPILL(); return;
L_7479f0: /* 7479f0: mov ecx, esi */
  ecx = esi;
/* 7479f2: call 0x6c580d */
  esp -= 4; W32(esp, 0x7479f7u); SPILL(); f_6c580d(); if (g_unwind) return; RELOAD();
/* 7479f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7479fa: je 0x747a0b */
  if (zf) goto L_747a0b;
L_7479fc: /* 7479fc: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 747a01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747a02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747a08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747a08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_747a0b: /* 747a0b: mov eax, esi */
  eax = esi;
/* 747a0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747a0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 747a0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747a40(void) {
  LOAD_REGS();
L_747a40: /* 747a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747a42: push 0x9c7638 */
  { uint32_t v = 0x9c7638u; esp -= 4; W32(esp, v); }
/* 747a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 747a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747a57: mov esi, ecx */
  esi = ecx;
/* 747a59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 747a5d: mov dword ptr [esi], 0x9fe418 */
  W32((uint32_t)(esi), 0x9fe418u);
/* 747a63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 747a6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x747a71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 747a71: mov ecx, esi */
  ecx = esi;
/* 747a73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 747a7b: call 0x6c580d */
  esp -= 4; W32(esp, 0x747a80u); SPILL(); f_6c580d(); if (g_unwind) return; RELOAD();
/* 747a80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747a84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747a85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 747a8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 747a8f: ret  */
  esp += 4; SPILL(); return;
}

void f_747ab0(void) {
  LOAD_REGS();
L_747ab0: /* 747ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ab1: mov esi, ecx */
  esi = ecx;
/* 747ab3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x747ab8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 747ab8: mov dword ptr [esi], 0x9fe418 */
  W32((uint32_t)(esi), 0x9fe418u);
/* 747abe: mov eax, esi */
  eax = esi;
/* 747ac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747ac1: ret  */
  esp += 4; SPILL(); return;
}

void f_747ae0(void) {
  LOAD_REGS();
L_747ae0: /* 747ae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 747ae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747ae6: mov esi, ecx */
  esi = ecx;
/* 747ae8: call 0x6c1456 */
  esp -= 4; W32(esp, 0x747aedu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 747aed: mov dword ptr [esi], 0x9fe418 */
  W32((uint32_t)(esi), 0x9fe418u);
/* 747af3: mov eax, esi */
  eax = esi;
/* 747af5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747af6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747b10(void) {
  LOAD_REGS();
L_747b10: /* 747b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 747b14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747b15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747b16: mov esi, ecx */
  esi = ecx;
/* 747b18: call 0x6c5cef */
  esp -= 4; W32(esp, 0x747b1du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 747b1d: mov eax, esi */
  eax = esi;
/* 747b1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747b20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747b40(void) {
  LOAD_REGS();
L_747b40: /* 747b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747b41: mov esi, ecx */
  esi = ecx;
/* 747b43: call 0x6c45a2 */
  esp -= 4; W32(esp, 0x747b48u); SPILL(); f_6c45a2(); if (g_unwind) return; RELOAD();
/* 747b48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747b4d: je 0x747b5e */
  if (zf) goto L_747b5e;
L_747b4f: /* 747b4f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 747b54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747b55: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747b5bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747b5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_747b5e: /* 747b5e: mov eax, esi */
  eax = esi;
/* 747b60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747b61: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747b80(void) {
  LOAD_REGS();
L_747b80: /* 747b80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 747b81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 747b85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747b88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747b89: mov esi, ecx */
  esi = ecx;
/* 747b8b: je 0x747bc0 */
  if (zf) goto L_747bc0;
L_747b8d: /* 747b8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 747b90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747b91: push 0x6c45a2 */
  { uint32_t v = 0x6c45a2u; esp -= 4; W32(esp, v); }
/* 747b96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 747b99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747b9a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 747b9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ba0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x747ba5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 747ba5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747ba8: je 0x747bb8 */
  if (zf) goto L_747bb8;
L_747baa: /* 747baa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 747bb0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 747bb2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 747bb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747bb5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x747bb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_747bb8: /* 747bb8: mov eax, edi */
  eax = edi;
/* 747bba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 747bbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747bbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 747bbd: ret 4 */
  esp += 8; SPILL(); return;
L_747bc0: /* 747bc0: mov ecx, esi */
  ecx = esi;
/* 747bc2: call 0x6c45a2 */
  esp -= 4; W32(esp, 0x747bc7u); SPILL(); f_6c45a2(); if (g_unwind) return; RELOAD();
/* 747bc7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747bca: je 0x747bdb */
  if (zf) goto L_747bdb;
L_747bcc: /* 747bcc: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 747bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747bd2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747bd8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747bd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_747bdb: /* 747bdb: mov eax, esi */
  eax = esi;
/* 747bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 747bdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747c10(void) {
  LOAD_REGS();
L_747c10: /* 747c10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747c12: push 0x9c7658 */
  { uint32_t v = 0x9c7658u; esp -= 4; W32(esp, v); }
/* 747c17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 747c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747c1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747c27: mov esi, ecx */
  esi = ecx;
/* 747c29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 747c2d: mov dword ptr [esi], 0x9fe5f8 */
  W32((uint32_t)(esi), 0x9fe5f8u);
/* 747c33: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 747c3b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x747c41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 747c41: mov ecx, esi */
  ecx = esi;
/* 747c43: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 747c4b: call 0x6c580d */
  esp -= 4; W32(esp, 0x747c50u); SPILL(); f_6c580d(); if (g_unwind) return; RELOAD();
/* 747c50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747c54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747c55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 747c5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 747c5f: ret  */
  esp += 4; SPILL(); return;
}

void f_747c80(void) {
  LOAD_REGS();
L_747c80: /* 747c80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747c82: push 0x9c7678 */
  { uint32_t v = 0x9c7678u; esp -= 4; W32(esp, v); }
/* 747c87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 747c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747c8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747c97: mov esi, ecx */
  esi = ecx;
/* 747c99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 747c9d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x747ca2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 747ca2: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 747ca8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 747cb0: mov dword ptr [esi], 0x9fe5f8 */
  W32((uint32_t)(esi), 0x9fe5f8u);
/* 747cb6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x747cbcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 747cbc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747cc0: mov eax, esi */
  eax = esi;
/* 747cc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747cc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 747cca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 747ccd: ret  */
  esp += 4; SPILL(); return;
}

void f_747cf0(void) {
  LOAD_REGS();
L_747cf0: /* 747cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747cf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 747cf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747cf7: mov esi, ecx */
  esi = ecx;
/* 747cf9: call 0x6c1456 */
  esp -= 4; W32(esp, 0x747cfeu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 747cfe: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 747d04: mov dword ptr [esi], 0x9fe5f8 */
  W32((uint32_t)(esi), 0x9fe5f8u);
/* 747d0a: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 747d10: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 747d16: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 747d1c: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 747d22: xor edx, dword ptr [edi + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x344u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 747d28: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 747d2e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 747d31: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747d33: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 747d39: mov ecx, dword ptr [edi + 0x344] */
  ecx = R32((uint32_t)(edi + 0x344u));
/* 747d3f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747d41: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 747d44: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747d46: mov dword ptr [esi + 0x344], ecx */
  W32((uint32_t)(esi + 0x344u), ecx);
/* 747d4c: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 747d52: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 747d58: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 747d5e: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 747d64: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 747d6a: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 747d70: mov edx, dword ptr [edi + 0x354] */
  edx = R32((uint32_t)(edi + 0x354u));
/* 747d76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 747d77: mov dword ptr [esi + 0x354], edx */
  W32((uint32_t)(esi + 0x354u), edx);
/* 747d7d: mov eax, esi */
  eax = esi;
/* 747d7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747d80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747dc0(void) {
  LOAD_REGS();
L_747dc0: /* 747dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747dc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 747dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747dc7: mov esi, ecx */
  esi = ecx;
/* 747dc9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x747dceu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 747dce: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 747dd4: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 747dda: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 747de0: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 747de6: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 747dec: xor edx, dword ptr [edi + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x344u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 747df2: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 747df8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 747dfb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 747dfd: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 747e03: mov ecx, dword ptr [edi + 0x344] */
  ecx = R32((uint32_t)(edi + 0x344u));
/* 747e09: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747e0b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 747e0e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 747e10: mov dword ptr [esi + 0x344], ecx */
  W32((uint32_t)(esi + 0x344u), ecx);
/* 747e16: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 747e1c: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 747e22: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 747e28: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 747e2e: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 747e34: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 747e3a: mov edx, dword ptr [edi + 0x354] */
  edx = R32((uint32_t)(edi + 0x354u));
/* 747e40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 747e41: mov dword ptr [esi + 0x354], edx */
  W32((uint32_t)(esi + 0x354u), edx);
/* 747e47: mov eax, esi */
  eax = esi;
/* 747e49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747e4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747e80(void) {
  LOAD_REGS();
L_747e80: /* 747e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747e81: mov esi, ecx */
  esi = ecx;
/* 747e83: call 0x6c76c6 */
  esp -= 4; W32(esp, 0x747e88u); SPILL(); f_6c76c6(); if (g_unwind) return; RELOAD();
/* 747e88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747e8d: je 0x747e9e */
  if (zf) goto L_747e9e;
L_747e8f: /* 747e8f: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 747e94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747e95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747e9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747e9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_747e9e: /* 747e9e: mov eax, esi */
  eax = esi;
/* 747ea0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747ea1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747ec0(void) {
  LOAD_REGS();
L_747ec0: /* 747ec0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 747ec1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 747ec5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747ec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ec9: mov esi, ecx */
  esi = ecx;
/* 747ecb: je 0x747f00 */
  if (zf) goto L_747f00;
L_747ecd: /* 747ecd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 747ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747ed1: push 0x6c76c6 */
  { uint32_t v = 0x6c76c6u; esp -= 4; W32(esp, v); }
/* 747ed6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 747ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747eda: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 747edf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ee0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x747ee5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 747ee5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747ee8: je 0x747ef8 */
  if (zf) goto L_747ef8;
L_747eea: /* 747eea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 747ef0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 747ef2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 747ef4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 747ef5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x747ef8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_747ef8: /* 747ef8: mov eax, edi */
  eax = edi;
/* 747efa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 747efb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 747efd: ret 4 */
  esp += 8; SPILL(); return;
L_747f00: /* 747f00: mov ecx, esi */
  ecx = esi;
/* 747f02: call 0x6c76c6 */
  esp -= 4; W32(esp, 0x747f07u); SPILL(); f_6c76c6(); if (g_unwind) return; RELOAD();
/* 747f07: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 747f0a: je 0x747f1b */
  if (zf) goto L_747f1b;
L_747f0c: /* 747f0c: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 747f11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747f12: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x747f18u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 747f18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_747f1b: /* 747f1b: mov eax, esi */
  eax = esi;
/* 747f1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747f1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 747f1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_747f50(void) {
  LOAD_REGS();
L_747f50: /* 747f50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747f52: push 0x9c76a7 */
  { uint32_t v = 0x9c76a7u; esp -= 4; W32(esp, v); }
/* 747f57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 747f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747f5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747f67: mov esi, ecx */
  esi = ecx;
/* 747f69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 747f6d: mov dword ptr [esi], 0x9fe7d8 */
  W32((uint32_t)(esi), 0x9fe7d8u);
/* 747f73: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 747f7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x747f81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 747f81: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 747f87: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 747f8c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x747f92u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 747f92: mov ecx, esi */
  ecx = esi;
/* 747f94: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 747f9c: call 0x6c580d */
  esp -= 4; W32(esp, 0x747fa1u); SPILL(); f_6c580d(); if (g_unwind) return; RELOAD();
/* 747fa1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 747fa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 747fa6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 747fad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 747fb0: ret  */
  esp += 4; SPILL(); return;
}

void f_747fe0(void) {
  LOAD_REGS();
L_747fe0: /* 747fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 747fe2: push 0x9c76c8 */
  { uint32_t v = 0x9c76c8u; esp -= 4; W32(esp, v); }
/* 747fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 747fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 747fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 747ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 747ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 747ff7: mov esi, ecx */
  esi = ecx;
/* 747ff9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 747ffd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x748002u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 748002: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 748008: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 748010: mov dword ptr [esi], 0x9fe7d8 */
  W32((uint32_t)(esi), 0x9fe7d8u);
/* 748016: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74801cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74801c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 748020: mov eax, esi */
  eax = esi;
/* 748022: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748023: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74802a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74802d: ret  */
  esp += 4; SPILL(); return;
}

void f_748050(void) {
  LOAD_REGS();
L_748050: /* 748050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 748052: push 0x9c76e8 */
  { uint32_t v = 0x9c76e8u; esp -= 4; W32(esp, v); }
/* 748057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74805d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74805e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 748065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 748066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748067: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748068: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74806c: mov esi, ecx */
  esi = ecx;
/* 74806e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74806f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 748073: call 0x6c1456 */
  esp -= 4; W32(esp, 0x748078u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 748078: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 74807e: mov dword ptr [esi], 0x9fe7d8 */
  W32((uint32_t)(esi), 0x9fe7d8u);
/* 748084: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 74808a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74808b: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 748091: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 748099: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 74809f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7480a5u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7480a5: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 7480ab: mov edx, dword ptr [esi + 0x34c] */
  edx = R32((uint32_t)(esi + 0x34cu));
/* 7480b1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7480b3: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 7480b9: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7480bc: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7480be: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 7480c4: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 7480ca: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7480cc: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7480cf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7480d1: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 7480d7: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 7480dd: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 7480e3: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 7480e9: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 7480ef: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 7480f5: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 7480fb: mov edx, dword ptr [edi + 0x35c] */
  edx = R32((uint32_t)(edi + 0x35cu));
/* 748101: mov dword ptr [esi + 0x35c], edx */
  W32((uint32_t)(esi + 0x35cu), edx);
/* 748107: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 74810d: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 748113: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 748119: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 74811f: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 748125: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 74812b: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 748131: xor eax, dword ptr [edi + 0x36c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x36cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748137: mov ecx, dword ptr [esi + 0x36c] */
  ecx = R32((uint32_t)(esi + 0x36cu));
/* 74813d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748140: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748142: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 748148: mov eax, ecx */
  eax = ecx;
/* 74814a: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 748150: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748152: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748155: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748157: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 74815d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 748161: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 748162: mov eax, esi */
  eax = esi;
/* 748164: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748165: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74816c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74816f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7481d0(void) {
  LOAD_REGS();
L_7481d0: /* 7481d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7481d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7481d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7481d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7481d7: mov esi, ecx */
  esi = ecx;
/* 7481d9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x7481deu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 7481de: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 7481e4: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 7481ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7481eb: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 7481f1: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 7481f7: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7481fdu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7481fd: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 748203: mov edx, dword ptr [esi + 0x34c] */
  edx = R32((uint32_t)(esi + 0x34cu));
/* 748209: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74820b: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 748211: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 748214: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748216: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74821c: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 748222: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748224: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748227: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748229: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 74822f: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 748235: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 74823b: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 748241: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 748247: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 74824d: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 748253: mov edx, dword ptr [edi + 0x35c] */
  edx = R32((uint32_t)(edi + 0x35cu));
/* 748259: mov dword ptr [esi + 0x35c], edx */
  W32((uint32_t)(esi + 0x35cu), edx);
/* 74825f: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 748265: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 74826b: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 748271: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 748277: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 74827d: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 748283: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 748289: xor eax, dword ptr [edi + 0x36c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x36cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74828f: mov ecx, dword ptr [esi + 0x36c] */
  ecx = R32((uint32_t)(esi + 0x36cu));
/* 748295: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748298: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74829a: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 7482a0: mov eax, ecx */
  eax = ecx;
/* 7482a2: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 7482a8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7482aa: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7482ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7482af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7482b0: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 7482b6: mov eax, esi */
  eax = esi;
/* 7482b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7482b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748300(void) {
  LOAD_REGS();
L_748300: /* 748300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748301: mov esi, ecx */
  esi = ecx;
/* 748303: call 0x6c3ae9 */
  esp -= 4; W32(esp, 0x748308u); SPILL(); f_6c3ae9(); if (g_unwind) return; RELOAD();
/* 748308: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74830d: je 0x74831e */
  if (zf) goto L_74831e;
L_74830f: /* 74830f: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 748314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748315: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74831bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74831b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74831e: /* 74831e: mov eax, esi */
  eax = esi;
/* 748320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748321: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748340(void) {
  LOAD_REGS();
L_748340: /* 748340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 748341: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 748345: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748348: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748349: mov esi, ecx */
  esi = ecx;
/* 74834b: je 0x748380 */
  if (zf) goto L_748380;
L_74834d: /* 74834d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 748350: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748351: push 0x6c3ae9 */
  { uint32_t v = 0x6c3ae9u; esp -= 4; W32(esp, v); }
/* 748356: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 748359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74835a: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 74835f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748360: call 0x99ca3d */
  esp -= 4; W32(esp, 0x748365u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 748365: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748368: je 0x748378 */
  if (zf) goto L_748378;
L_74836a: /* 74836a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 748370: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 748372: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 748374: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748375: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x748378u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_748378: /* 748378: mov eax, edi */
  eax = edi;
/* 74837a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74837b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74837c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74837d: ret 4 */
  esp += 8; SPILL(); return;
L_748380: /* 748380: mov ecx, esi */
  ecx = esi;
/* 748382: call 0x6c3ae9 */
  esp -= 4; W32(esp, 0x748387u); SPILL(); f_6c3ae9(); if (g_unwind) return; RELOAD();
/* 748387: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74838a: je 0x74839b */
  if (zf) goto L_74839b;
L_74838c: /* 74838c: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 748391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748392: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x748398u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 748398: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74839b: /* 74839b: mov eax, esi */
  eax = esi;
/* 74839d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74839e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74839f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7483d0(void) {
  LOAD_REGS();
L_7483d0: /* 7483d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7483d2: push 0x9c7724 */
  { uint32_t v = 0x9c7724u; esp -= 4; W32(esp, v); }
/* 7483d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7483dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7483de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7483e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7483e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7483e7: mov esi, ecx */
  esi = ecx;
/* 7483e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7483ed: mov dword ptr [esi], 0x9fe9b8 */
  W32((uint32_t)(esi), 0x9fe9b8u);
/* 7483f3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 7483fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x748401u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 748401: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 748407: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74840c: call 0x6c582b */
  esp -= 4; W32(esp, 0x748411u); SPILL(); f_6c582b(); if (g_unwind) return; RELOAD();
/* 748411: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 748417: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74841c: call 0x6c3b9d */
  esp -= 4; W32(esp, 0x748421u); SPILL(); f_6c3b9d(); if (g_unwind) return; RELOAD();
/* 748421: mov ecx, esi */
  ecx = esi;
/* 748423: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74842b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x748430u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 748430: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 748434: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748435: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74843c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74843f: ret  */
  esp += 4; SPILL(); return;
}

void f_748460(void) {
  LOAD_REGS();
L_748460: /* 748460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 748462: push 0x9c7756 */
  { uint32_t v = 0x9c7756u; esp -= 4; W32(esp, v); }
/* 748467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74846d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74846e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 748475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 748476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 748477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748478: mov esi, ecx */
  esi = ecx;
/* 74847a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74847b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74847f: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x748484u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 748484: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 74848a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74848c: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 748494: mov dword ptr [esi], 0x9fe9b8 */
  W32((uint32_t)(esi), 0x9fe9b8u);
/* 74849a: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7484a0u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7484a0: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7484a5: lea edi, [esi + 0x348] */
  edi = (uint32_t)(esi + 0x348u);
/* 7484ab: mov ebx, 4 */
  ebx = 0x4u;
L_7484b0: /* 7484b0: mov ecx, edi */
  ecx = edi;
/* 7484b2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7484b8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7484b8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7484bb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 7484bc: jne 0x7484b0 */
  if (!zf) goto L_7484b0;
L_7484be: /* 7484be: lea edi, [esi + 0x358] */
  edi = (uint32_t)(esi + 0x358u);
/* 7484c4: mov ebx, 4 */
  ebx = 0x4u;
/* 7484c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7484d0: /* 7484d0: mov ecx, edi */
  ecx = edi;
/* 7484d2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7484d8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7484d8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7484db: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 7484dc: jne 0x7484d0 */
  if (!zf) goto L_7484d0;
L_7484de: /* 7484de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7484e0: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7484e6: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7484ecu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7484ec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7484f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7484f1: mov eax, esi */
  eax = esi;
/* 7484f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7484f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7484f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7484fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7484ff: ret  */
  esp += 4; SPILL(); return;
}

void f_748530(void) {
  LOAD_REGS();
L_748530: /* 748530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 748532: push 0x9c7786 */
  { uint32_t v = 0x9c7786u; esp -= 4; W32(esp, v); }
/* 748537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74853d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74853e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 748545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 748546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748547: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748548: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74854c: mov esi, ecx */
  esi = ecx;
/* 74854e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74854f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 748553: call 0x6c1456 */
  esp -= 4; W32(esp, 0x748558u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 748558: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 74855e: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 748564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 748565: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74856d: mov dword ptr [esi], 0x9fe9b8 */
  W32((uint32_t)(esi), 0x9fe9b8u);
/* 748573: call 0x6c5de9 */
  esp -= 4; W32(esp, 0x748578u); SPILL(); f_6c5de9(); if (g_unwind) return; RELOAD();
/* 748578: lea ecx, [edi + 0x348] */
  ecx = (uint32_t)(edi + 0x348u);
/* 74857e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 748580: lea edx, [esi + 0x348] */
  edx = (uint32_t)(esi + 0x348u);
/* 748586: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 748588: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74858b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74858e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 748591: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 748594: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 748597: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 74859a: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 7485a0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7485a2: lea eax, [esi + 0x358] */
  eax = (uint32_t)(esi + 0x358u);
/* 7485a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7485aa: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7485ad: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7485b0: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 7485b3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7485b6: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 7485b9: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7485bc: mov eax, dword ptr [edi + 0x368] */
  eax = R32((uint32_t)(edi + 0x368u));
/* 7485c2: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 7485c8: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 7485ce: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 7485d4: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 7485da: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 7485e0: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 7485e6: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 7485ec: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 7485f2: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 7485f8: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 7485fe: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 748604: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74860a: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 748610: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 748616: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 74861c: mov edx, dword ptr [edi + 0x388] */
  edx = R32((uint32_t)(edi + 0x388u));
/* 748622: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 748628: mov dword ptr [esi + 0x388], edx */
  W32((uint32_t)(esi + 0x388u), edx);
/* 74862e: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 748634: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 74863a: xor ecx, dword ptr [edi + 0x390] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748640: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 748646: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748649: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74864b: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748651: mov ecx, eax */
  ecx = eax;
/* 748653: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748659: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74865b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74865e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748660: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748666: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 74866c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74866e: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748671: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748673: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748679: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 74867f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748681: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748684: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748686: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 74868c: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748692: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 748697: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748699: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74869c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74869e: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7486a4: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 7486aa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7486ac: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7486af: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7486b1: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7486b7: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 7486bd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7486bf: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7486c2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7486c4: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7486ca: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 7486d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7486d2: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7486d7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7486d9: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7486df: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 7486e5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7486e7: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7486ed: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7486ef: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7486f5: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 7486fb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7486fd: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748702: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748704: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 74870a: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748710: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748712: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748718: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74871a: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748720: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748726: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748728: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74872d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74872f: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748735: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 74873b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74873d: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748743: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748745: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 74874b: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748751: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748753: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748758: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74875a: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748760: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748766: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748768: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74876e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748770: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748776: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 74877c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74877e: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748783: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748785: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 74878b: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748791: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748793: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748799: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74879b: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7487a1: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 7487a7: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7487a9: and edx, 0x20000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7487af: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7487b1: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 7487b7: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 7487bd: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 7487c3: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 7487c9: add edi, 0x39c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7487cf: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 7487d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7487d6: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7487dc: call 0x6c671c */
  esp -= 4; W32(esp, 0x7487e1u); SPILL(); f_6c671c(); if (g_unwind) return; RELOAD();
/* 7487e1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7487e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7487e6: mov eax, esi */
  eax = esi;
/* 7487e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7487e9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7487f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7487f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7488c0(void) {
  LOAD_REGS();
L_7488c0: /* 7488c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7488c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7488c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7488c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7488c7: mov esi, ecx */
  esi = ecx;
/* 7488c9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x7488ceu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 7488ce: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 7488d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7488d5: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 7488db: call 0x6c4d86 */
  esp -= 4; W32(esp, 0x7488e0u); SPILL(); f_6c4d86(); if (g_unwind) return; RELOAD();
/* 7488e0: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 7488e6: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 7488ec: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 7488f2: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 7488f8: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7488fe: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 748904: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 74890a: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 748910: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 748916: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 74891c: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 748922: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 748928: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 74892e: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 748934: mov edx, dword ptr [edi + 0x364] */
  edx = R32((uint32_t)(edi + 0x364u));
/* 74893a: mov dword ptr [esi + 0x364], edx */
  W32((uint32_t)(esi + 0x364u), edx);
/* 748940: mov eax, dword ptr [edi + 0x368] */
  eax = R32((uint32_t)(edi + 0x368u));
/* 748946: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 74894c: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 748952: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 748958: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 74895e: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 748964: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 74896a: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 748970: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 748976: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 74897c: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 748982: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 748988: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74898e: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 748994: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 74899a: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 7489a0: mov edx, dword ptr [edi + 0x388] */
  edx = R32((uint32_t)(edi + 0x388u));
/* 7489a6: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7489ac: mov dword ptr [esi + 0x388], edx */
  W32((uint32_t)(esi + 0x388u), edx);
/* 7489b2: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 7489b8: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 7489be: xor ecx, dword ptr [edi + 0x390] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7489c4: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7489ca: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7489cd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7489cf: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7489d5: mov ecx, eax */
  ecx = eax;
/* 7489d7: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 7489dd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7489df: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7489e2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7489e4: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7489ea: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 7489f0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7489f2: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7489f5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7489f7: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7489fd: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748a03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a05: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748a08: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a0a: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748a10: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748a16: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a18: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748a1b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a1d: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748a23: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748a29: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a2b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748a2e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a30: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748a36: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748a3c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a3e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748a41: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a43: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748a49: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748a4f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a51: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748a56: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a58: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748a5e: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748a64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a66: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748a6c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a6e: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748a74: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748a7a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a7c: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748a81: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748a83: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748a89: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748a8f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a91: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748a97: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748a99: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748a9f: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748aa5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748aa7: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748aac: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748aae: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748ab4: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748aba: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748abc: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748ac2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748ac4: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748aca: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748ad0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748ad2: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748ad7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748ad9: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748adf: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748ae5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748ae7: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748aed: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748aef: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748af5: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 748afb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748afd: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748b02: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748b04: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 748b0a: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 748b10: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748b12: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 748b18: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748b1a: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 748b20: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 748b26: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 748b28: and edx, 0x20000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 748b2e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 748b30: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 748b36: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 748b3c: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 748b42: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 748b48: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 748b4e: add edi, 0x39c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 748b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748b55: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 748b5b: call 0x6cb4dd */
  esp -= 4; W32(esp, 0x748b60u); SPILL(); f_6cb4dd(); if (g_unwind) return; RELOAD();
/* 748b60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 748b61: mov eax, esi */
  eax = esi;
/* 748b63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748b64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748c20(void) {
  LOAD_REGS();
L_748c20: /* 748c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748c21: mov esi, ecx */
  esi = ecx;
/* 748c23: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x748c28u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 748c28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748c2d: je 0x748c3e */
  if (zf) goto L_748c3e;
L_748c2f: /* 748c2f: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 748c34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748c35: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x748c3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 748c3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_748c3e: /* 748c3e: mov eax, esi */
  eax = esi;
/* 748c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748c41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748c60(void) {
  LOAD_REGS();
L_748c60: /* 748c60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 748c61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 748c65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748c69: mov esi, ecx */
  esi = ecx;
/* 748c6b: je 0x748ca0 */
  if (zf) goto L_748ca0;
L_748c6d: /* 748c6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 748c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748c71: push 0x6c57d6 */
  { uint32_t v = 0x6c57d6u; esp -= 4; W32(esp, v); }
/* 748c76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 748c79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 748c7a: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 748c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748c80: call 0x99ca3d */
  esp -= 4; W32(esp, 0x748c85u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 748c85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748c88: je 0x748c98 */
  if (zf) goto L_748c98;
L_748c8a: /* 748c8a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 748c90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 748c92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 748c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748c95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x748c98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_748c98: /* 748c98: mov eax, edi */
  eax = edi;
/* 748c9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 748c9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748c9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 748c9d: ret 4 */
  esp += 8; SPILL(); return;
L_748ca0: /* 748ca0: mov ecx, esi */
  ecx = esi;
/* 748ca2: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x748ca7u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 748ca7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 748caa: je 0x748cbb */
  if (zf) goto L_748cbb;
L_748cac: /* 748cac: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 748cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748cb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x748cb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 748cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_748cbb: /* 748cbb: mov eax, esi */
  eax = esi;
/* 748cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 748cbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748cf0(void) {
  LOAD_REGS();
L_748cf0: /* 748cf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 748cf2: push 0x9c77a8 */
  { uint32_t v = 0x9c77a8u; esp -= 4; W32(esp, v); }
/* 748cf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 748cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 748cfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 748d05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 748d06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748d07: mov esi, ecx */
  esi = ecx;
/* 748d09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 748d0d: mov dword ptr [esi], 0x9febe0 */
  W32((uint32_t)(esi), 0x9febe0u);
/* 748d13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 748d1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x748d21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 748d21: mov ecx, esi */
  ecx = esi;
/* 748d23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 748d2b: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x748d30u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 748d30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 748d34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748d35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 748d3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 748d3f: ret  */
  esp += 4; SPILL(); return;
}

void f_748d60(void) {
  LOAD_REGS();
L_748d60: /* 748d60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 748d62: push 0x9c77c8 */
  { uint32_t v = 0x9c77c8u; esp -= 4; W32(esp, v); }
/* 748d67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 748d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 748d6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 748d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 748d76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 748d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748d78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748d79: mov edi, ecx */
  edi = ecx;
/* 748d7b: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 748d7f: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x748d84u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 748d84: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 748d8c: mov dword ptr [edi], 0x9febe0 */
  W32((uint32_t)(edi), 0x9febe0u);
/* 748d92: lea esi, [edi + 0x3d0] */
  esi = (uint32_t)(edi + 0x3d0u);
/* 748d98: mov ebx, 8 */
  ebx = 0x8u;
/* 748d9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_748da0: /* 748da0: mov ecx, esi */
  ecx = esi;
/* 748da2: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x748da8u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 748da8: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 748dab: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 748dac: jne 0x748da0 */
  if (!zf) goto L_748da0;
L_748dae: /* 748dae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 748db2: mov eax, edi */
  eax = edi;
/* 748db4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 748db5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748db6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 748db7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 748dbe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 748dc1: ret  */
  esp += 4; SPILL(); return;
}

void f_748df0(void) {
  LOAD_REGS();
L_748df0: /* 748df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 748df1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 748df2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 748df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748df8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 748df9: mov ebx, ecx */
  ebx = ecx;
/* 748dfb: call 0x6c3521 */
  esp -= 4; W32(esp, 0x748e00u); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 748e00: mov esi, dword ptr [ebx + 0x3a8] */
  esi = R32((uint32_t)(ebx + 0x3a8u));
/* 748e06: mov dword ptr [ebx], 0x9febe0 */
  W32((uint32_t)(ebx), 0x9febe0u);
/* 748e0c: mov eax, dword ptr [ebp + 0x3a8] */
  eax = R32((uint32_t)(ebp + 0x3a8u));
/* 748e12: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748e14: mov ecx, esi */
  ecx = esi;
/* 748e16: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748e19: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748e1b: mov dword ptr [ebx + 0x3a8], ecx */
  W32((uint32_t)(ebx + 0x3a8u), ecx);
/* 748e21: mov ecx, dword ptr [ebp + 0x3ac] */
  ecx = R32((uint32_t)(ebp + 0x3acu));
/* 748e27: mov dword ptr [ebx + 0x3ac], ecx */
  W32((uint32_t)(ebx + 0x3acu), ecx);
/* 748e2d: lea esi, [ebp + 0x3b0] */
  esi = (uint32_t)(ebp + 0x3b0u);
/* 748e33: lea edi, [ebx + 0x3b0] */
  edi = (uint32_t)(ebx + 0x3b0u);
/* 748e39: mov ecx, 8 */
  ecx = 0x8u;
/* 748e3e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 748e40: lea esi, [ebp + 0x3d0] */
  esi = (uint32_t)(ebp + 0x3d0u);
/* 748e46: lea edi, [ebx + 0x3d0] */
  edi = (uint32_t)(ebx + 0x3d0u);
/* 748e4c: mov ecx, 0x18 */
  ecx = 0x18u;
/* 748e51: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 748e53: lea esi, [ebp + 0x430] */
  esi = (uint32_t)(ebp + 0x430u);
/* 748e59: lea edi, [ebx + 0x430] */
  edi = (uint32_t)(ebx + 0x430u);
/* 748e5f: mov ecx, 8 */
  ecx = 0x8u;
/* 748e64: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 748e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 748e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 748e68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 748e69: mov eax, ebx */
  eax = ebx;
/* 748e6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 748e6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_748e90(void) {
  LOAD_REGS();
L_748e90: /* 748e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 748e91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748e92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 748e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 748e97: mov esi, ecx */
  esi = ecx;
/* 748e99: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x748e9eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 748e9e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 748ea4: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 748eaa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 748eac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 748eaf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 748eb1: mov dword ptr [esi + 0x3a8], ecx */
  W32((uint32_t)(esi + 0x3a8u), ecx);
/* 748eb7: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 748ebd: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 748ec3: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 748ec9: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 748ecf: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 748ed5: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 748edb: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 748ee1: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 748ee7: mov edx, dword ptr [edi + 0x3bc] */
  edx = R32((uint32_t)(edi + 0x3bcu));
/* 748eed: mov dword ptr [esi + 0x3bc], edx */
  W32((uint32_t)(esi + 0x3bcu), edx);
/* 748ef3: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 748ef9: mov dword ptr [esi + 0x3c0], eax */
  W32((uint32_t)(esi + 0x3c0u), eax);
/* 748eff: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 748f05: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 748f0b: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 748f11: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 748f17: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 748f1d: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 748f23: lea ecx, [edi + 0x3d0] */
  ecx = (uint32_t)(edi + 0x3d0u);
/* 748f29: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 748f2b: lea edx, [esi + 0x3d0] */
  edx = (uint32_t)(esi + 0x3d0u);
/* 748f31: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 748f33: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 748f36: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 748f39: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 748f3c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 748f3f: lea edx, [edi + 0x3dc] */
  edx = (uint32_t)(edi + 0x3dcu);
/* 748f45: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 748f47: lea eax, [esi + 0x3dc] */
  eax = (uint32_t)(esi + 0x3dcu);
/* 748f4d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 748f4f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 748f52: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 748f55: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 748f58: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 748f5b: lea eax, [edi + 0x3e8] */
  eax = (uint32_t)(edi + 0x3e8u);
/* 748f61: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 748f63: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 748f69: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 748f6b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 748f6e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 748f71: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 748f74: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 748f77: lea ecx, [edi + 0x3f4] */
  ecx = (uint32_t)(edi + 0x3f4u);
/* 748f7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 748f7f: lea edx, [esi + 0x3f4] */
  edx = (uint32_t)(esi + 0x3f4u);
/* 748f85: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 748f87: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 748f8a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 748f8d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 748f90: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 748f93: lea edx, [edi + 0x400] */
  edx = (uint32_t)(edi + 0x400u);
/* 748f99: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 748f9b: lea eax, [esi + 0x400] */
  eax = (uint32_t)(esi + 0x400u);
/* 748fa1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 748fa3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 748fa6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 748fa9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 748fac: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 748faf: lea eax, [edi + 0x40c] */
  eax = (uint32_t)(edi + 0x40cu);
/* 748fb5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 748fb7: lea ecx, [esi + 0x40c] */
  ecx = (uint32_t)(esi + 0x40cu);
/* 748fbd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 748fbf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 748fc2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 748fc5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 748fc8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 748fcb: lea ecx, [edi + 0x418] */
  ecx = (uint32_t)(edi + 0x418u);
/* 748fd1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 748fd3: lea edx, [esi + 0x418] */
  edx = (uint32_t)(esi + 0x418u);
/* 748fd9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 748fdb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 748fde: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 748fe1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 748fe4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 748fe7: lea edx, [edi + 0x424] */
  edx = (uint32_t)(edi + 0x424u);
/* 748fed: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 748fef: lea eax, [esi + 0x424] */
  eax = (uint32_t)(esi + 0x424u);
/* 748ff5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 748ff7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 748ffa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 748ffd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 749000: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 749003: mov eax, dword ptr [edi + 0x430] */
  eax = R32((uint32_t)(edi + 0x430u));
/* 749009: mov dword ptr [esi + 0x430], eax */
  W32((uint32_t)(esi + 0x430u), eax);
/* 74900f: mov ecx, dword ptr [edi + 0x434] */
  ecx = R32((uint32_t)(edi + 0x434u));
/* 749015: mov dword ptr [esi + 0x434], ecx */
  W32((uint32_t)(esi + 0x434u), ecx);
/* 74901b: mov edx, dword ptr [edi + 0x438] */
  edx = R32((uint32_t)(edi + 0x438u));
/* 749021: mov dword ptr [esi + 0x438], edx */
  W32((uint32_t)(esi + 0x438u), edx);
/* 749027: mov eax, dword ptr [edi + 0x43c] */
  eax = R32((uint32_t)(edi + 0x43cu));
/* 74902d: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
/* 749033: mov ecx, dword ptr [edi + 0x440] */
  ecx = R32((uint32_t)(edi + 0x440u));
/* 749039: mov dword ptr [esi + 0x440], ecx */
  W32((uint32_t)(esi + 0x440u), ecx);
/* 74903f: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 749045: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 74904b: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 749051: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 749057: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74905d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74905e: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 749064: mov eax, esi */
  eax = esi;
/* 749066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749067: ret 4 */
  esp += 8; SPILL(); return;
}
